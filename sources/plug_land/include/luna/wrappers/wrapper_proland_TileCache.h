#ifndef _WRAPPERS_WRAPPER_PROLAND_TILECACHE_H_
#define _WRAPPERS_WRAPPER_PROLAND_TILECACHE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/producer/TileCache.h>

class wrapper_proland_TileCache : public proland::TileCache, public luna_wrapper_base {

public:
		

	~wrapper_proland_TileCache() {
		logDEBUG3("Calling delete function for wrapper proland_TileCache");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::TileCache*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_TileCache(lua_State* L, lua_Table* dum, ork::ptr< proland::TileStorage > storage, std::string name, ork::ptr< ork::Scheduler > scheduler = NULL) 
		: proland::TileCache(storage, name, scheduler), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TileCache*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_TileCache(lua_State* L, lua_Table* dum) 
		: proland::TileCache(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TileCache*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::TileCache*)this);
			return (_obj.callFunction<void>());
		}

		return TileCache::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::TileCache*)this);
			return (_obj.callFunction<const char*>());
		}

		return TileCache::toString();
	};


	// Protected non-virtual methods:
	// void proland::TileCache::init(ork::ptr< proland::TileStorage > storage, std::string name, ork::ptr< ork::Scheduler > scheduler = NULL)
	void public_init(ork::ptr< proland::TileStorage > storage, std::string name, ork::ptr< ork::Scheduler > scheduler = NULL) {
		return proland::TileCache::init(storage, name, scheduler);
	};

	// void proland::TileCache::swap(ork::ptr< proland::TileCache > c)
	void public_swap(ork::ptr< proland::TileCache > c) {
		return proland::TileCache::swap(c);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileStorage >(L,2) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Scheduler >(L,4) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileCache >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::TileCache::public_init(ork::ptr< proland::TileStorage > storage, std::string name, ork::ptr< ork::Scheduler > scheduler = NULL)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileCache::public_init(ork::ptr< proland::TileStorage > storage, std::string name, ork::ptr< ork::Scheduler > scheduler = NULL) function, expected prototype:\nvoid proland::TileCache::public_init(ork::ptr< proland::TileStorage > storage, std::string name, ork::ptr< ork::Scheduler > scheduler = NULL)\nClass arguments details:\narg 1 ID = [unknown]\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< proland::TileStorage > storage = Luna< ork::Object >::checkSubType< proland::TileStorage >(L,2);
		std::string name(lua_tostring(L,3),lua_objlen(L,3));
		ork::ptr< ork::Scheduler > scheduler = Luna< ork::Object >::checkSubType< ork::Scheduler >(L,4);

		wrapper_proland_TileCache* self=Luna< ork::Object >::checkSubType< wrapper_proland_TileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileCache::public_init(ork::ptr< proland::TileStorage >, std::string, ork::ptr< ork::Scheduler >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(storage, name, scheduler);

		return 0;
	}

	// void proland::TileCache::public_swap(ork::ptr< proland::TileCache > c)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileCache::public_swap(ork::ptr< proland::TileCache > c) function, expected prototype:\nvoid proland::TileCache::public_swap(ork::ptr< proland::TileCache > c)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileCache > c = Luna< ork::Object >::checkSubType< proland::TileCache >(L,2);

		wrapper_proland_TileCache* self=Luna< ork::Object >::checkSubType< wrapper_proland_TileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileCache::public_swap(ork::ptr< proland::TileCache >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_swap(c);

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

