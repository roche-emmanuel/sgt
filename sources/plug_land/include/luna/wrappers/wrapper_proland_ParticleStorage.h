#ifndef _WRAPPERS_WRAPPER_PROLAND_PARTICLESTORAGE_H_
#define _WRAPPERS_WRAPPER_PROLAND_PARTICLESTORAGE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/particles/ParticleStorage.h>

class wrapper_proland_ParticleStorage : public proland::ParticleStorage, public luna_wrapper_base {

public:
		

	~wrapper_proland_ParticleStorage() {
		logDEBUG3("Calling delete function for wrapper proland_ParticleStorage");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::ParticleStorage*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_ParticleStorage(lua_State* L, lua_Table* dum, int capacity, bool pack) 
		: proland::ParticleStorage(capacity, pack), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::ParticleStorage*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_ParticleStorage(lua_State* L, lua_Table* dum) 
		: proland::ParticleStorage(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::ParticleStorage*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::ParticleStorage*)this);
			return (_obj.callFunction<void>());
		}

		return ParticleStorage::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::ParticleStorage*)this);
			return (_obj.callFunction<const char*>());
		}

		return ParticleStorage::toString();
	};


	// Protected non-virtual methods:
	// void proland::ParticleStorage::init(int capacity, bool pack)
	void public_init(int capacity, bool pack) {
		return proland::ParticleStorage::init(capacity, pack);
	};

	// void proland::ParticleStorage::swap(ork::ptr< proland::ParticleStorage > p)
	void public_swap(ork::ptr< proland::ParticleStorage > p) {
		return proland::ParticleStorage::swap(p);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::ParticleStorage >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::ParticleStorage::public_init(int capacity, bool pack)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleStorage::public_init(int capacity, bool pack) function, expected prototype:\nvoid proland::ParticleStorage::public_init(int capacity, bool pack)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int capacity=(int)lua_tointeger(L,2);
		bool pack=(bool)(lua_toboolean(L,3)==1);

		wrapper_proland_ParticleStorage* self=Luna< ork::Object >::checkSubType< wrapper_proland_ParticleStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleStorage::public_init(int, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(capacity, pack);

		return 0;
	}

	// void proland::ParticleStorage::public_swap(ork::ptr< proland::ParticleStorage > p)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleStorage::public_swap(ork::ptr< proland::ParticleStorage > p) function, expected prototype:\nvoid proland::ParticleStorage::public_swap(ork::ptr< proland::ParticleStorage > p)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::ParticleStorage > p = Luna< ork::Object >::checkSubType< proland::ParticleStorage >(L,2);

		wrapper_proland_ParticleStorage* self=Luna< ork::Object >::checkSubType< wrapper_proland_ParticleStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleStorage::public_swap(ork::ptr< proland::ParticleStorage >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
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

