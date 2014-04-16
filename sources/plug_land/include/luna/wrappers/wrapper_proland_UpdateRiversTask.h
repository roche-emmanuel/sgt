#ifndef _WRAPPERS_WRAPPER_PROLAND_UPDATERIVERSTASK_H_
#define _WRAPPERS_WRAPPER_PROLAND_UPDATERIVERSTASK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/rivers/UpdateRiversTask.h>

class wrapper_proland_UpdateRiversTask : public proland::UpdateRiversTask, public luna_wrapper_base {

public:
		

	~wrapper_proland_UpdateRiversTask() {
		logDEBUG3("Calling delete function for wrapper proland_UpdateRiversTask");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::UpdateRiversTask*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_UpdateRiversTask(lua_State* L, lua_Table* dum, ork::ptr< proland::ParticleProducer > particles, float timeStep = 1.0f) 
		: proland::UpdateRiversTask(particles, timeStep), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::UpdateRiversTask*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_UpdateRiversTask(lua_State* L, lua_Table* dum) 
		: proland::UpdateRiversTask(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::UpdateRiversTask*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::UpdateRiversTask*)this);
			return (_obj.callFunction<void>());
		}

		return UpdateRiversTask::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::UpdateRiversTask*)this);
			return (_obj.callFunction<const char*>());
		}

		return UpdateRiversTask::toString();
	};

	// ork::ptr< ork::Task > proland::UpdateRiversTask::getTask(ork::ptr< ork::Object > context)
	ork::ptr< ork::Task > getTask(ork::ptr< ork::Object > context) {
		if(_obj.pushFunction("getTask")) {
			_obj.pushArg((proland::UpdateRiversTask*)this);
			_obj.pushArg((ork::Object*)context.get());
			return _obj.callFunction< ork::Task* >();
		}

		return UpdateRiversTask::getTask(context);
	};


	// Protected non-virtual methods:
	// void proland::UpdateRiversTask::init(ork::ptr< proland::ParticleProducer > particles, float timeStep = 1.0f)
	void public_init(ork::ptr< proland::ParticleProducer > particles, float timeStep = 1.0f) {
		return proland::UpdateRiversTask::init(particles, timeStep);
	};

	// void proland::UpdateRiversTask::swap(ork::ptr< proland::UpdateRiversTask > t)
	void public_swap(ork::ptr< proland::UpdateRiversTask > t) {
		return proland::UpdateRiversTask::swap(t);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,2) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::UpdateRiversTask >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::UpdateRiversTask::public_init(ork::ptr< proland::ParticleProducer > particles, float timeStep = 1.0f)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::UpdateRiversTask::public_init(ork::ptr< proland::ParticleProducer > particles, float timeStep = 1.0f) function, expected prototype:\nvoid proland::UpdateRiversTask::public_init(ork::ptr< proland::ParticleProducer > particles, float timeStep = 1.0f)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< proland::ParticleProducer > particles = Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,2);
		float timeStep=luatop>2 ? (float)lua_tonumber(L,3) : (float)1.0f;

		wrapper_proland_UpdateRiversTask* self=Luna< ork::Object >::checkSubType< wrapper_proland_UpdateRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::UpdateRiversTask::public_init(ork::ptr< proland::ParticleProducer >, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(particles, timeStep);

		return 0;
	}

	// void proland::UpdateRiversTask::public_swap(ork::ptr< proland::UpdateRiversTask > t)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::UpdateRiversTask::public_swap(ork::ptr< proland::UpdateRiversTask > t) function, expected prototype:\nvoid proland::UpdateRiversTask::public_swap(ork::ptr< proland::UpdateRiversTask > t)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::UpdateRiversTask > t = Luna< ork::Object >::checkSubType< proland::UpdateRiversTask >(L,2);

		wrapper_proland_UpdateRiversTask* self=Luna< ork::Object >::checkSubType< wrapper_proland_UpdateRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::UpdateRiversTask::public_swap(ork::ptr< proland::UpdateRiversTask >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
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

