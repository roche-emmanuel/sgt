#ifndef _WRAPPERS_WRAPPER_ORK_COMPILEDRESOURCELOADER_H_
#define _WRAPPERS_WRAPPER_ORK_COMPILEDRESOURCELOADER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/resource/CompiledResourceLoader.h>

class wrapper_ork_CompiledResourceLoader : public ork::CompiledResourceLoader, public luna_wrapper_base {

public:
		

	~wrapper_ork_CompiledResourceLoader() {
		logDEBUG3("Calling delete function for wrapper ork_CompiledResourceLoader");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::CompiledResourceLoader*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_CompiledResourceLoader(lua_State* L, lua_Table* dum, const std::string & resourceDataFile) 
		: ork::CompiledResourceLoader(resourceDataFile), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::CompiledResourceLoader*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::CompiledResourceLoader*)this);
			return (_obj.callFunction<void>());
		}

		return CompiledResourceLoader::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::CompiledResourceLoader*)this);
			return (_obj.callFunction<const char*>());
		}

		return CompiledResourceLoader::toString();
	};

	// std::string ork::CompiledResourceLoader::findResource(const std::string & name)
	std::string findResource(const std::string & name) {
		if(_obj.pushFunction("findResource")) {
			_obj.pushArg((ork::CompiledResourceLoader*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<std::string>());
		}

		return CompiledResourceLoader::findResource(name);
	};

	// ork::ptr< ork::ResourceDescriptor > ork::CompiledResourceLoader::loadResource(const std::string & name)
	ork::ptr< ork::ResourceDescriptor > loadResource(const std::string & name) {
		if(_obj.pushFunction("loadResource")) {
			_obj.pushArg((ork::CompiledResourceLoader*)this);
			_obj.pushArg(name);
			return _obj.callFunction< ork::ResourceDescriptor* >();
		}

		return CompiledResourceLoader::loadResource(name);
	};

	// ork::ptr< ork::ResourceDescriptor > ork::CompiledResourceLoader::reloadResource(const std::string & name, ork::ptr< ork::ResourceDescriptor > currentValue)
	ork::ptr< ork::ResourceDescriptor > reloadResource(const std::string & name, ork::ptr< ork::ResourceDescriptor > currentValue) {
		if(_obj.pushFunction("reloadResource")) {
			_obj.pushArg((ork::CompiledResourceLoader*)this);
			_obj.pushArg(name);
			_obj.pushArg((ork::ResourceDescriptor*)currentValue.get());
			return _obj.callFunction< ork::ResourceDescriptor* >();
		}

		return CompiledResourceLoader::reloadResource(name, currentValue);
	};


	// Protected non-virtual methods:
	// void ork::CompiledResourceLoader::addPath(const std::string & name, const std::string & path)
	void public_addPath(const std::string & name, const std::string & path) {
		return ork::CompiledResourceLoader::addPath(name, path);
	};

	// void ork::CompiledResourceLoader::addResource(const std::string & name, ork::ptr< ork::ResourceDescriptor > desc)
	void public_addResource(const std::string & name, ork::ptr< ork::ResourceDescriptor > desc) {
		return ork::CompiledResourceLoader::addResource(name, desc);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_addPath(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_addResource(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,3) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void ork::CompiledResourceLoader::public_addPath(const std::string & name, const std::string & path)
	static int _bind_public_addPath(lua_State *L) {
		if (!_lg_typecheck_public_addPath(L)) {
			luaL_error(L, "luna typecheck failed in void ork::CompiledResourceLoader::public_addPath(const std::string & name, const std::string & path) function, expected prototype:\nvoid ork::CompiledResourceLoader::public_addPath(const std::string & name, const std::string & path)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		std::string path(lua_tostring(L,3),lua_objlen(L,3));

		wrapper_ork_CompiledResourceLoader* self=Luna< ork::Object >::checkSubType< wrapper_ork_CompiledResourceLoader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::CompiledResourceLoader::public_addPath(const std::string &, const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_addPath(name, path);

		return 0;
	}

	// void ork::CompiledResourceLoader::public_addResource(const std::string & name, ork::ptr< ork::ResourceDescriptor > desc)
	static int _bind_public_addResource(lua_State *L) {
		if (!_lg_typecheck_public_addResource(L)) {
			luaL_error(L, "luna typecheck failed in void ork::CompiledResourceLoader::public_addResource(const std::string & name, ork::ptr< ork::ResourceDescriptor > desc) function, expected prototype:\nvoid ork::CompiledResourceLoader::public_addResource(const std::string & name, ork::ptr< ork::ResourceDescriptor > desc)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		ork::ptr< ork::ResourceDescriptor > desc = Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,3);

		wrapper_ork_CompiledResourceLoader* self=Luna< ork::Object >::checkSubType< wrapper_ork_CompiledResourceLoader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::CompiledResourceLoader::public_addResource(const std::string &, ork::ptr< ork::ResourceDescriptor >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_addResource(name, desc);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"addPath",_bind_public_addPath},
		{"addResource",_bind_public_addResource},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

