#ifndef _WRAPPERS_WRAPPER_ORK_RESOURCEMANAGER_H_
#define _WRAPPERS_WRAPPER_ORK_RESOURCEMANAGER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/resource/ResourceManager.h>

class wrapper_ork_ResourceManager : public ork::ResourceManager, public luna_wrapper_base {

public:
		

	~wrapper_ork_ResourceManager() {
		logDEBUG3("Calling delete function for wrapper ork_ResourceManager");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::ResourceManager*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_ResourceManager(lua_State* L, lua_Table* dum, ork::ptr< ork::ResourceLoader > loader, unsigned int cacheSize = 0) 
		: ork::ResourceManager(loader, cacheSize), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::ResourceManager*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::ResourceManager*)this);
			return (_obj.callFunction<void>());
		}

		return ResourceManager::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::ResourceManager*)this);
			return (_obj.callFunction<const char*>());
		}

		return ResourceManager::toString();
	};


	// Protected non-virtual methods:
	// void ork::ResourceManager::releaseResource(ork::Resource * resource)
	void public_releaseResource(ork::Resource * resource) {
		return ork::ResourceManager::releaseResource(resource);
	};

	// void ork::ResourceManager::removeResource(ork::Resource * resource)
	void public_removeResource(ork::Resource * resource) {
		return ork::ResourceManager::removeResource(resource);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_releaseResource(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,95308202)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_removeResource(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,95308202)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void ork::ResourceManager::public_releaseResource(ork::Resource * resource)
	static int _bind_public_releaseResource(lua_State *L) {
		if (!_lg_typecheck_public_releaseResource(L)) {
			luaL_error(L, "luna typecheck failed in void ork::ResourceManager::public_releaseResource(ork::Resource * resource) function, expected prototype:\nvoid ork::ResourceManager::public_releaseResource(ork::Resource * resource)\nClass arguments details:\narg 1 ID = 95308202\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::Resource* resource=(Luna< ork::Resource >::check(L,2));

		wrapper_ork_ResourceManager* self=Luna< ork::Object >::checkSubType< wrapper_ork_ResourceManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::ResourceManager::public_releaseResource(ork::Resource *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_releaseResource(resource);

		return 0;
	}

	// void ork::ResourceManager::public_removeResource(ork::Resource * resource)
	static int _bind_public_removeResource(lua_State *L) {
		if (!_lg_typecheck_public_removeResource(L)) {
			luaL_error(L, "luna typecheck failed in void ork::ResourceManager::public_removeResource(ork::Resource * resource) function, expected prototype:\nvoid ork::ResourceManager::public_removeResource(ork::Resource * resource)\nClass arguments details:\narg 1 ID = 95308202\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::Resource* resource=(Luna< ork::Resource >::check(L,2));

		wrapper_ork_ResourceManager* self=Luna< ork::Object >::checkSubType< wrapper_ork_ResourceManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::ResourceManager::public_removeResource(ork::Resource *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_removeResource(resource);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"releaseResource",_bind_public_releaseResource},
		{"removeResource",_bind_public_removeResource},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

