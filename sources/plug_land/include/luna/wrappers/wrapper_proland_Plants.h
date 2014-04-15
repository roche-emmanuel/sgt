#ifndef _WRAPPERS_WRAPPER_PROLAND_PLANTS_H_
#define _WRAPPERS_WRAPPER_PROLAND_PLANTS_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/forest/proland/plants/Plants.h>

class wrapper_proland_Plants : public proland::Plants, public luna_wrapper_base {

public:
		

	~wrapper_proland_Plants() {
		logDEBUG3("Calling delete function for wrapper proland_Plants");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::Plants*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_Plants(lua_State* L, lua_Table* dum, int minLevel, int maxLevel, int minDensity, int maxDensity, int tileCacheSize, float maxDistance) 
		: proland::Plants(minLevel, maxLevel, minDensity, maxDensity, tileCacheSize, maxDistance), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::Plants*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_Plants(lua_State* L, lua_Table* dum) 
		: proland::Plants(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::Plants*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::Plants*)this);
			return (_obj.callFunction<void>());
		}

		return Plants::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::Plants*)this);
			return (_obj.callFunction<const char*>());
		}

		return Plants::toString();
	};


	// Protected non-virtual methods:
	// void proland::Plants::init(int minLevel, int maxLevel, int minDensity, int maxDensity, int tileCacheSize, float maxDistance)
	void public_init(int minLevel, int maxLevel, int minDensity, int maxDensity, int tileCacheSize, float maxDistance) {
		return proland::Plants::init(minLevel, maxLevel, minDensity, maxDensity, tileCacheSize, maxDistance);
	};

	// void proland::Plants::swap(ork::ptr< proland::Plants > p)
	void public_swap(ork::ptr< proland::Plants > p) {
		return proland::Plants::swap(p);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::Plants >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::Plants::public_init(int minLevel, int maxLevel, int minDensity, int maxDensity, int tileCacheSize, float maxDistance)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Plants::public_init(int minLevel, int maxLevel, int minDensity, int maxDensity, int tileCacheSize, float maxDistance) function, expected prototype:\nvoid proland::Plants::public_init(int minLevel, int maxLevel, int minDensity, int maxDensity, int tileCacheSize, float maxDistance)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int minLevel=(int)lua_tointeger(L,2);
		int maxLevel=(int)lua_tointeger(L,3);
		int minDensity=(int)lua_tointeger(L,4);
		int maxDensity=(int)lua_tointeger(L,5);
		int tileCacheSize=(int)lua_tointeger(L,6);
		float maxDistance=(float)lua_tonumber(L,7);

		wrapper_proland_Plants* self=Luna< ork::Object >::checkSubType< wrapper_proland_Plants >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Plants::public_init(int, int, int, int, int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(minLevel, maxLevel, minDensity, maxDensity, tileCacheSize, maxDistance);

		return 0;
	}

	// void proland::Plants::public_swap(ork::ptr< proland::Plants > p)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Plants::public_swap(ork::ptr< proland::Plants > p) function, expected prototype:\nvoid proland::Plants::public_swap(ork::ptr< proland::Plants > p)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::Plants > p = Luna< ork::Object >::checkSubType< proland::Plants >(L,2);

		wrapper_proland_Plants* self=Luna< ork::Object >::checkSubType< wrapper_proland_Plants >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Plants::public_swap(ork::ptr< proland::Plants >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_swap(p);

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

