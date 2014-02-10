/*
 * LuaState.cpp
 *
 *  Created on: 29 févr. 2012
 *      Author: kenshin
 */
#include "LuaState.h"

#include "lua.hpp"
#include "luna/luna.h"
#include "lua/ModuleProvider.h"

int panic_handler(lua_State* L)
{
	const char* str = lua_tostring(L,-1);
	if(!str) {
		logFATAL("Lua panic error with no message received.");
	}
	else {
		logFATAL("Lua panic error: " << str);
	}
	return 0;
}

int init_lua_env (lua_State* L) 
{
	// Before executing the main script we have to load the core plugin
	// so that module loading procedures become available in lua too.
	// So first we have to load the lua packages:
	// Note: Deprecated. mxassets package now loaded directly from SimKernel.
	// showMessageBox("Loading mxassets package","Loading");
	// sgtModuleProvider::loadPackage(root_path + "/bin/packages/mxassets.lpak");
	// showMessageBox("mxassets package loaded.","Loading");
	
	// once the mxasset package is loaded, the core module should be available in memory,
	// so we retrieve it:
	std::string core = sgtModuleProvider::getModule("asset:binaries.core");
	CHECK_RET(!core.empty(),0,"Invalid core module.");
	
	// Now load the module in the lua state:
	// showMessageBox("Loading core module","Loading");
	int ret = ::loadModuleFromMemory((void*)core.data(),"lua_core","luaopen_core", L);
	if (ret > 0) {
		// pop the results:
		lua_pop(L,ret);
	}

	// next we have to execute the setup script:
	std::string setupModule = sgtModuleProvider::getModule("setup");
		
	// load main module:
	CHECK_RET(!setupModule.empty(),0,"Invalid setup script.");
	
	if(luaL_loadbuffer(L,(const char*)setupModule.data(),setupModule.size(),"setup")==0) {
		int res = lua_pcall(L, 0, 0, 0);
		if(res!=0) {
			logERROR("Error occurred in setupModule execution:\n" << (res==LUA_ERRRUN ? lua_tostring(L,-1) : "[no message]"));
			return 0;				
		}
	}
	else {
		logERROR("Error occurred in setupModule loading:\n" << lua_tostring(L,-1));
		return 0;
	}
	
	logINFO("Environment setup done for Lua state " << (const void*)L);
	return 0;
	// showMessageBox("core module loading","Loading");
}

namespace sgt {

LuaState::LuaState() {
	setLuaEnvInitFunction(init_lua_env);
	
	// Initialize the lua state:
	_L = luaL_newstate();
	THROW_IF(!_L,"Invalid lua_State created with luaL_newstate");
	// From here the state can be considered valid.
	logDEBUG0_V("Lua state opened.");

	// Assign panic function:
	lua_atpanic (_L, panic_handler);

	// load the standard libraries:
#if 1
	logDEBUG0_V("Opening base libraries...");
	luaL_openlibs(_L);
#else
	logDEBUG0_V("Opening base lib");
	luaopen_base(_L);
	logDEBUG0_V("Opening math lib");
	luaopen_math(_L);
	logDEBUG0_V("Opening string lib");
	luaopen_string(_L);
	logDEBUG0_V("Opening table lib");
	luaopen_table(_L);
	logDEBUG0_V("Opening io lib");
	luaopen_io(_L);
	logDEBUG0_V("Opening os lib");
	luaopen_os(_L);
	logDEBUG0_V("Opening package lib");
	luaopen_package(_L);
	logDEBUG0_V("Opening debug lib");
	luaopen_debug(_L);
	logDEBUG0_V("Opening bit lib");
	luaopen_bit(_L);
	logDEBUG0_V("Opening jit lib");
	luaopen_jit(_L);
	logDEBUG0_V("Opening ffi lib");
	luaopen_ffi(_L);
#endif

	logDEBUG0_V("Opening luna library.");
	luna_open(_L);

	openLanes(_L);
	logDEBUG0_V("Lua libraries loaded.");
}

LuaState::~LuaState() {
	if(_L)
		lua_close(_L);
	_L = NULL;
	logDEBUG0_V("Closed lua state.");
}

void LuaState::setGlobal(const std::string& key, const std::string& val) {
	CHECK(!key.empty(),"Invalid empty key.");

	lua_pushstring(_L,val.c_str());
	lua_setglobal(_L,key.c_str());
}

void LuaState::setGlobal(const std::string& key, double val) {
	CHECK(!key.empty(),"Invalid empty key.");

	lua_pushnumber(_L,val);
	lua_setglobal(_L,key.c_str());
}

bool LuaState::executeFile(const std::string& filename) {
	logINFO("Executing script file " << filename);
	if(luaL_dofile(_L, filename.c_str()) != 0) {
		logERROR("During script execution of file " << filename <<":\n" << lua_tostring(_L,-1));
		return false;
	}
	return true;
}

bool LuaState::executeString(const std::string& str, const std::string& name) {
	logINFO("Executing script '" << name << "'");
	if(luaL_loadbuffer(_L,(const char*)str.data(),str.size(),name.c_str())==0) {
		int res = lua_pcall(_L, 0, 0, 0);
		if(res!=0) {
			logERROR("Error occurred in mainModule execution:\n" << (res==LUA_ERRRUN ? lua_tostring(_L,-1) : "[no message]"));
			return false;				
		}
	}
	else {
		logERROR("Error occurred in mainModule loading:\n" << lua_tostring(_L,-1));
		return false;
	}
	return true;
}

bool LuaState::executeString(const std::string& str, const std::string& name, int& ret) {
	logINFO("Executing script '" << name << "'");
	if(luaL_loadbuffer(_L,(const char*)str.data(),str.size(),name.c_str())==0) {
		int res = lua_pcall(_L, 0, 1, 0);
		if(res!=0) {
			logERROR("Error occurred in mainModule execution:\n" << (res==LUA_ERRRUN ? lua_tostring(_L,-1) : "[no message]"));
			return false;				
		}
	}
	else {
		logERROR("Error occurred in mainModule loading:\n" << lua_tostring(_L,-1));
		return false;
	}
	// retrieve the result from the stack:
	ret = lua_tonumber(_L,-1);
	lua_pop(_L,1);
	return true;
}

void LuaState::loadModuleFromMemory(void* data, const std::string& mname, const std::string& entryname)
{
	int ret = ::loadModuleFromMemory(data, mname, entryname, _L);
	if (ret > 0) {
		// pop the results:
		lua_pop(_L,ret);
	}
}

} /* namespace scBase */

