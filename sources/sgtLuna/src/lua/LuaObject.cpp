/*
 * LuaObject.cpp
 *
 *  Created on: 30 nov. 2012
 *      Author: kenshin
 */
#include "lunaCommon.h"
#include "luna/luna.h"
#include "lua/LuaObject.h"

using namespace sgt;

bool LuaObject::pushFunction(std::string name) const {
	//logINFO("Trying to push function '"<<name<<"'");
	// OpenThreads::Thread* th = OpenThreads::Thread::CurrentThread();
	//CHECK_RET(th,false,"Invalid current thread while retrieving function " << name << " in luaObject.");
	
	// CHECK_RET(_threadId == boost::this_thread::get_id(),false,"Trying to push LuaObject created on thread " << _threadId << " in thread " << boost::this_thread::get_id() << ", for function '"<<name<<"'");
	// int id = th ? th->getThreadId() : -1;
	// CHECK_RET(_threadId == id,false,"Trying to push LuaObject created on thread " << _threadId << " in thread " << id << ", for function '"<<name<<"'");
	
	CHECK_RET(pushLuaItem(),false,"Cannot push lua item when calling "<<name);

	CHECK_RET(lua_type(_state,-1)==LUA_TTABLE,false,"Invalid non table base for luaObject, type is: "<<lua_type(_state,-1) <<", while pushing function: '"<<name<<"'");

	// table is on the stack:
	// retrieve the function by name:
	lua_pushstring(_state,name.c_str()); // pushing key
	lua_gettable(_state,-2);			 // pop key and push value.

	if(lua_type(_state,-1)!=LUA_TFUNCTION) {
		//logWARN("Wrong result type on pushed function: name="<<name<<", type="<<lua_type(_state,-1));
		lua_pop(_state,2); // pop the wrong value and table.
		return false;
	}
	
	// Both table and function to call are on the stack:
	// move the table at the top of the stack:
	lua_pushvalue(_state,-2); // table is now at the top, function is just under.
	lua_remove(_state,-3); // remove the original copy of the table under the function.
	
	//lua_remove(_state,-2); // remove the original copy of the table under the function.
	reset();

	//logINFO("Successfully pushing function '"<<name<<"'");
	return true;
}
