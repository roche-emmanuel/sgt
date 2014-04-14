#ifndef _WRAPPERS_WRAPPER_PROLAND_TILESTORAGE_H_
#define _WRAPPERS_WRAPPER_PROLAND_TILESTORAGE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/producer/TileStorage.h>

class wrapper_proland_TileStorage : public proland::TileStorage, public luna_wrapper_base {

public:
		

	~wrapper_proland_TileStorage() {
		logDEBUG3("Calling delete function for wrapper proland_TileStorage");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::TileStorage*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_TileStorage(lua_State* L, lua_Table* dum, int tileSize, int capacity) 
		: proland::TileStorage(tileSize, capacity), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TileStorage*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_TileStorage(lua_State* L, lua_Table* dum) 
		: proland::TileStorage(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TileStorage*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::TileStorage*)this);
			return (_obj.callFunction<void>());
		}

		return TileStorage::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::TileStorage*)this);
			return (_obj.callFunction<const char*>());
		}

		return TileStorage::toString();
	};


	// Protected non-virtual methods:
	// void proland::TileStorage::init(int tileSize, int capacity)
	void public_init(int tileSize, int capacity) {
		return proland::TileStorage::init(tileSize, capacity);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::TileStorage::public_init(int tileSize, int capacity)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileStorage::public_init(int tileSize, int capacity) function, expected prototype:\nvoid proland::TileStorage::public_init(int tileSize, int capacity)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,2);
		int capacity=(int)lua_tointeger(L,3);

		wrapper_proland_TileStorage* self=Luna< ork::Object >::checkSubType< wrapper_proland_TileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileStorage::public_init(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(tileSize, capacity);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"init",_bind_public_init},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

