#ifndef _WRAPPERS_WRAPPER_PROLAND_DRAWRIVERSTASK_H_
#define _WRAPPERS_WRAPPER_PROLAND_DRAWRIVERSTASK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/rivers/DrawRiversTask.h>

class wrapper_proland_DrawRiversTask : public proland::DrawRiversTask, public luna_wrapper_base {

public:
		

	~wrapper_proland_DrawRiversTask() {
		logDEBUG3("Calling delete function for wrapper proland_DrawRiversTask");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::DrawRiversTask*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_DrawRiversTask(lua_State* L, lua_Table* dum, ork::ptr< ork::Program > renderTexProg, ork::ptr< ork::Program > particlesProg, ork::ptr< proland::ParticleProducer > particles, float timeStep = 1.0f, bool drawParticles = false, ork::ptr< proland::WaveTile > tex = NULL, ork::ptr< proland::WaveTile > bedTex = NULL, float riverDepth = 1.0f, float waveSlopeFactor = 1.f, bool useOffscreenDepth = false) 
		: proland::DrawRiversTask(renderTexProg, particlesProg, particles, timeStep, drawParticles, tex, bedTex, riverDepth, waveSlopeFactor, useOffscreenDepth), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::DrawRiversTask*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_DrawRiversTask(lua_State* L, lua_Table* dum) 
		: proland::DrawRiversTask(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::DrawRiversTask*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::DrawRiversTask*)this);
			return (_obj.callFunction<void>());
		}

		return DrawRiversTask::doRelease();
	};

	// void proland::DrawRiversTask::swap(ork::ptr< proland::DrawRiversTask > t)
	void swap(ork::ptr< proland::DrawRiversTask > t) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::DrawRiversTask*)this);
			_obj.pushArg((proland::DrawRiversTask*)t.get());
			return (_obj.callFunction<void>());
		}

		return DrawRiversTask::swap(t);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::DrawRiversTask*)this);
			return (_obj.callFunction<const char*>());
		}

		return DrawRiversTask::toString();
	};

	// ork::ptr< ork::Task > proland::DrawRiversTask::getTask(ork::ptr< ork::Object > context)
	ork::ptr< ork::Task > getTask(ork::ptr< ork::Object > context) {
		if(_obj.pushFunction("getTask")) {
			_obj.pushArg((proland::DrawRiversTask*)this);
			_obj.pushArg((ork::Object*)context.get());
			return _obj.callFunction< ork::Task* >();
		}

		return DrawRiversTask::getTask(context);
	};


	// Protected non-virtual methods:
	// void proland::DrawRiversTask::init(ork::ptr< ork::Program > renderTexProg, ork::ptr< ork::Program > particlesProg, ork::ptr< proland::ParticleProducer > particles, float timeStep = 1.0f, bool drawParticles = false, ork::ptr< proland::WaveTile > tex = NULL, ork::ptr< proland::WaveTile > bedTex = NULL, float riverDepth = 1.0f, float waveSlopeFactor = 1.0f, bool useOffscreenDepth = false)
	void public_init(ork::ptr< ork::Program > renderTexProg, ork::ptr< ork::Program > particlesProg, ork::ptr< proland::ParticleProducer > particles, float timeStep = 1.0f, bool drawParticles = false, ork::ptr< proland::WaveTile > tex = NULL, ork::ptr< proland::WaveTile > bedTex = NULL, float riverDepth = 1.0f, float waveSlopeFactor = 1.0f, bool useOffscreenDepth = false) {
		return proland::DrawRiversTask::init(renderTexProg, particlesProg, particles, timeStep, drawParticles, tex, bedTex, riverDepth, waveSlopeFactor, useOffscreenDepth);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>11 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,3) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,4) ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,7,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::WaveTile >(L,7) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::WaveTile >(L,8) ) return false;
		if( luatop>8 && lua_type(L,9)!=LUA_TNUMBER ) return false;
		if( luatop>9 && lua_type(L,10)!=LUA_TNUMBER ) return false;
		if( luatop>10 && lua_isboolean(L,11)==0 ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::DrawRiversTask::public_init(ork::ptr< ork::Program > renderTexProg, ork::ptr< ork::Program > particlesProg, ork::ptr< proland::ParticleProducer > particles, float timeStep = 1.0f, bool drawParticles = false, ork::ptr< proland::WaveTile > tex = NULL, ork::ptr< proland::WaveTile > bedTex = NULL, float riverDepth = 1.0f, float waveSlopeFactor = 1.0f, bool useOffscreenDepth = false)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::public_init(ork::ptr< ork::Program > renderTexProg, ork::ptr< ork::Program > particlesProg, ork::ptr< proland::ParticleProducer > particles, float timeStep = 1.0f, bool drawParticles = false, ork::ptr< proland::WaveTile > tex = NULL, ork::ptr< proland::WaveTile > bedTex = NULL, float riverDepth = 1.0f, float waveSlopeFactor = 1.0f, bool useOffscreenDepth = false) function, expected prototype:\nvoid proland::DrawRiversTask::public_init(ork::ptr< ork::Program > renderTexProg, ork::ptr< ork::Program > particlesProg, ork::ptr< proland::ParticleProducer > particles, float timeStep = 1.0f, bool drawParticles = false, ork::ptr< proland::WaveTile > tex = NULL, ork::ptr< proland::WaveTile > bedTex = NULL, float riverDepth = 1.0f, float waveSlopeFactor = 1.0f, bool useOffscreenDepth = false)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 6 ID = [unknown]\narg 7 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< ork::Program > renderTexProg = Luna< ork::Object >::checkSubType< ork::Program >(L,2);
		ork::ptr< ork::Program > particlesProg = Luna< ork::Object >::checkSubType< ork::Program >(L,3);
		ork::ptr< proland::ParticleProducer > particles = Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,4);
		float timeStep=luatop>4 ? (float)lua_tonumber(L,5) : (float)1.0f;
		bool drawParticles=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;
		ork::ptr< proland::WaveTile > tex = Luna< ork::Object >::checkSubType< proland::WaveTile >(L,7);
		ork::ptr< proland::WaveTile > bedTex = Luna< ork::Object >::checkSubType< proland::WaveTile >(L,8);
		float riverDepth=luatop>8 ? (float)lua_tonumber(L,9) : (float)1.0f;
		float waveSlopeFactor=luatop>9 ? (float)lua_tonumber(L,10) : (float)1.0f;
		bool useOffscreenDepth=luatop>10 ? (bool)(lua_toboolean(L,11)==1) : (bool)false;

		wrapper_proland_DrawRiversTask* self=Luna< ork::Object >::checkSubType< wrapper_proland_DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::public_init(ork::ptr< ork::Program >, ork::ptr< ork::Program >, ork::ptr< proland::ParticleProducer >, float, bool, ork::ptr< proland::WaveTile >, ork::ptr< proland::WaveTile >, float, float, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(renderTexProg, particlesProg, particles, timeStep, drawParticles, tex, bedTex, riverDepth, waveSlopeFactor, useOffscreenDepth);

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

