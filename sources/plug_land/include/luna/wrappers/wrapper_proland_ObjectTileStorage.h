#ifndef _WRAPPERS_WRAPPER_PROLAND_OBJECTTILESTORAGE_H_
#define _WRAPPERS_WRAPPER_PROLAND_OBJECTTILESTORAGE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/producer/ObjectTileStorage.h>

class wrapper_proland_ObjectTileStorage : public proland::ObjectTileStorage, public luna_wrapper_base {

public:
		

	~wrapper_proland_ObjectTileStorage() {
		logDEBUG3("Calling delete function for wrapper proland_ObjectTileStorage");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::ObjectTileStorage*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_ObjectTileStorage(lua_State* L, lua_Table* dum, int capacity) 
		: proland::ObjectTileStorage(capacity), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::ObjectTileStorage*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_ObjectTileStorage(lua_State* L, lua_Table* dum) 
		: proland::ObjectTileStorage(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::ObjectTileStorage*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::ObjectTileStorage*)this);
			return (_obj.callFunction<void>());
		}

		return ObjectTileStorage::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::ObjectTileStorage*)this);
			return (_obj.callFunction<const char*>());
		}

		return ObjectTileStorage::toString();
	};


	// Protected non-virtual methods:
	// void proland::ObjectTileStorage::init(int capacity)
	void public_init(int capacity) {
		return proland::ObjectTileStorage::init(capacity);
	};

	// void proland::ObjectTileStorage::swap(ork::ptr< proland::ObjectTileStorage > t)
	void public_swap(ork::ptr< proland::ObjectTileStorage > t) {
		return proland::ObjectTileStorage::swap(t);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::ObjectTileStorage >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::ObjectTileStorage::public_init(int capacity)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ObjectTileStorage::public_init(int capacity) function, expected prototype:\nvoid proland::ObjectTileStorage::public_init(int capacity)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int capacity=(int)lua_tointeger(L,2);

		wrapper_proland_ObjectTileStorage* self=Luna< ork::Object >::checkSubType< wrapper_proland_ObjectTileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ObjectTileStorage::public_init(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(capacity);

		return 0;
	}

	// void proland::ObjectTileStorage::public_swap(ork::ptr< proland::ObjectTileStorage > t)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ObjectTileStorage::public_swap(ork::ptr< proland::ObjectTileStorage > t) function, expected prototype:\nvoid proland::ObjectTileStorage::public_swap(ork::ptr< proland::ObjectTileStorage > t)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::ObjectTileStorage > t = Luna< ork::Object >::checkSubType< proland::ObjectTileStorage >(L,2);

		wrapper_proland_ObjectTileStorage* self=Luna< ork::Object >::checkSubType< wrapper_proland_ObjectTileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ObjectTileStorage::public_swap(ork::ptr< proland::ObjectTileStorage >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_swap(t);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"init",_bind_public_init},
		{"swap",_bind_public_swap},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

