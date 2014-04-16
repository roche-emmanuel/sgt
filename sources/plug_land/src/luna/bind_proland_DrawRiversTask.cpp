#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_DrawRiversTask.h>

class luna_wrapper_proland_DrawRiversTask {
public:
	typedef Luna< proland::DrawRiversTask > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Object,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::DrawRiversTask* self= (proland::DrawRiversTask*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::DrawRiversTask >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::DrawRiversTask* ptr= dynamic_cast< proland::DrawRiversTask* >(Luna< ork::Object >::check(L,1));
		proland::DrawRiversTask* ptr= luna_caster< ork::Object, proland::DrawRiversTask >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::DrawRiversTask >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>10 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,1) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,3) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,6,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::WaveTile >(L,6) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::WaveTile >(L,7) ) return false;
		if( luatop>7 && lua_type(L,8)!=LUA_TNUMBER ) return false;
		if( luatop>8 && lua_type(L,9)!=LUA_TNUMBER ) return false;
		if( luatop>9 && lua_isboolean(L,10)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>11 ) return false;

		if( lua_istable(L,1)==0 ) return false;
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


	// Function checkers:
	inline static bool _lg_typecheck_getTask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Object >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setParticleRadius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSlipParameter(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPotentialDelta(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTimeStep(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_displayGrid_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_displayGrid_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_displayParticles_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_displayParticles_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_displayVelocities_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_displayVelocities_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_displaySunEffects_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_displaySunEffects_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRiverDepth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWaveSlopeFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWaveLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBedLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMeshDisplayType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticleRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSlipParameter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPotentialDelta(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTimeStep(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWaveSlopeFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRiverDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWaveLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBedLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMeshDisplayType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getTask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Object >(L,2) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::DrawRiversTask::DrawRiversTask(ork::ptr< ork::Program > renderTexProg, ork::ptr< ork::Program > particlesProg, ork::ptr< proland::ParticleProducer > particles, float timeStep = 1.0f, bool drawParticles = false, ork::ptr< proland::WaveTile > tex = NULL, ork::ptr< proland::WaveTile > bedTex = NULL, float riverDepth = 1.0f, float waveSlopeFactor = 1.f, bool useOffscreenDepth = false)
	static proland::DrawRiversTask* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::DrawRiversTask::DrawRiversTask(ork::ptr< ork::Program > renderTexProg, ork::ptr< ork::Program > particlesProg, ork::ptr< proland::ParticleProducer > particles, float timeStep = 1.0f, bool drawParticles = false, ork::ptr< proland::WaveTile > tex = NULL, ork::ptr< proland::WaveTile > bedTex = NULL, float riverDepth = 1.0f, float waveSlopeFactor = 1.f, bool useOffscreenDepth = false) function, expected prototype:\nproland::DrawRiversTask::DrawRiversTask(ork::ptr< ork::Program > renderTexProg, ork::ptr< ork::Program > particlesProg, ork::ptr< proland::ParticleProducer > particles, float timeStep = 1.0f, bool drawParticles = false, ork::ptr< proland::WaveTile > tex = NULL, ork::ptr< proland::WaveTile > bedTex = NULL, float riverDepth = 1.0f, float waveSlopeFactor = 1.f, bool useOffscreenDepth = false)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 6 ID = [unknown]\narg 7 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< ork::Program > renderTexProg = Luna< ork::Object >::checkSubType< ork::Program >(L,1);
		ork::ptr< ork::Program > particlesProg = Luna< ork::Object >::checkSubType< ork::Program >(L,2);
		ork::ptr< proland::ParticleProducer > particles = Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,3);
		float timeStep=luatop>3 ? (float)lua_tonumber(L,4) : (float)1.0f;
		bool drawParticles=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;
		ork::ptr< proland::WaveTile > tex = Luna< ork::Object >::checkSubType< proland::WaveTile >(L,6);
		ork::ptr< proland::WaveTile > bedTex = Luna< ork::Object >::checkSubType< proland::WaveTile >(L,7);
		float riverDepth=luatop>7 ? (float)lua_tonumber(L,8) : (float)1.0f;
		float waveSlopeFactor=luatop>8 ? (float)lua_tonumber(L,9) : (float)1.f;
		bool useOffscreenDepth=luatop>9 ? (bool)(lua_toboolean(L,10)==1) : (bool)false;

		return new proland::DrawRiversTask(renderTexProg, particlesProg, particles, timeStep, drawParticles, tex, bedTex, riverDepth, waveSlopeFactor, useOffscreenDepth);
	}

	// proland::DrawRiversTask::DrawRiversTask(lua_Table * data, ork::ptr< ork::Program > renderTexProg, ork::ptr< ork::Program > particlesProg, ork::ptr< proland::ParticleProducer > particles, float timeStep = 1.0f, bool drawParticles = false, ork::ptr< proland::WaveTile > tex = NULL, ork::ptr< proland::WaveTile > bedTex = NULL, float riverDepth = 1.0f, float waveSlopeFactor = 1.f, bool useOffscreenDepth = false)
	static proland::DrawRiversTask* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::DrawRiversTask::DrawRiversTask(lua_Table * data, ork::ptr< ork::Program > renderTexProg, ork::ptr< ork::Program > particlesProg, ork::ptr< proland::ParticleProducer > particles, float timeStep = 1.0f, bool drawParticles = false, ork::ptr< proland::WaveTile > tex = NULL, ork::ptr< proland::WaveTile > bedTex = NULL, float riverDepth = 1.0f, float waveSlopeFactor = 1.f, bool useOffscreenDepth = false) function, expected prototype:\nproland::DrawRiversTask::DrawRiversTask(lua_Table * data, ork::ptr< ork::Program > renderTexProg, ork::ptr< ork::Program > particlesProg, ork::ptr< proland::ParticleProducer > particles, float timeStep = 1.0f, bool drawParticles = false, ork::ptr< proland::WaveTile > tex = NULL, ork::ptr< proland::WaveTile > bedTex = NULL, float riverDepth = 1.0f, float waveSlopeFactor = 1.f, bool useOffscreenDepth = false)\nClass arguments details:\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 4 ID = [unknown]\narg 7 ID = [unknown]\narg 8 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
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
		float waveSlopeFactor=luatop>9 ? (float)lua_tonumber(L,10) : (float)1.f;
		bool useOffscreenDepth=luatop>10 ? (bool)(lua_toboolean(L,11)==1) : (bool)false;

		return new wrapper_proland_DrawRiversTask(L,NULL, renderTexProg, particlesProg, particles, timeStep, drawParticles, tex, bedTex, riverDepth, waveSlopeFactor, useOffscreenDepth);
	}

	// Overload binder for proland::DrawRiversTask::DrawRiversTask
	static proland::DrawRiversTask* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function DrawRiversTask, cannot match any of the overloads for function DrawRiversTask:\n  DrawRiversTask(ork::ptr< ork::Program >, ork::ptr< ork::Program >, ork::ptr< proland::ParticleProducer >, float, bool, ork::ptr< proland::WaveTile >, ork::ptr< proland::WaveTile >, float, float, bool)\n  DrawRiversTask(lua_Table *, ork::ptr< ork::Program >, ork::ptr< ork::Program >, ork::ptr< proland::ParticleProducer >, float, bool, ork::ptr< proland::WaveTile >, ork::ptr< proland::WaveTile >, float, float, bool)\n");
		return NULL;
	}


	// Function binds:
	// ork::ptr< ork::Task > proland::DrawRiversTask::getTask(ork::ptr< ork::Object > context)
	static int _bind_getTask(lua_State *L) {
		if (!_lg_typecheck_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > proland::DrawRiversTask::getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > proland::DrawRiversTask::getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > proland::DrawRiversTask::getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< proland::ParticleProducer > proland::DrawRiversTask::getParticles() const
	static int _bind_getParticles(lua_State *L) {
		if (!_lg_typecheck_getParticles(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::ParticleProducer > proland::DrawRiversTask::getParticles() const function, expected prototype:\nork::ptr< proland::ParticleProducer > proland::DrawRiversTask::getParticles() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::ParticleProducer > proland::DrawRiversTask::getParticles() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::ParticleProducer > lret = self->getParticles();
		Luna< proland::ParticleProducer >::push(L,lret.get(),false);

		return 1;
	}

	// void proland::DrawRiversTask::setParticleRadius(float radius)
	static int _bind_setParticleRadius(lua_State *L) {
		if (!_lg_typecheck_setParticleRadius(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::setParticleRadius(float radius) function, expected prototype:\nvoid proland::DrawRiversTask::setParticleRadius(float radius)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float radius=(float)lua_tonumber(L,2);

		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::setParticleRadius(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setParticleRadius(radius);

		return 0;
	}

	// void proland::DrawRiversTask::setSlipParameter(int id, float slip)
	static int _bind_setSlipParameter(lua_State *L) {
		if (!_lg_typecheck_setSlipParameter(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::setSlipParameter(int id, float slip) function, expected prototype:\nvoid proland::DrawRiversTask::setSlipParameter(int id, float slip)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		float slip=(float)lua_tonumber(L,3);

		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::setSlipParameter(int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSlipParameter(id, slip);

		return 0;
	}

	// void proland::DrawRiversTask::setPotentialDelta(int id, float potential)
	static int _bind_setPotentialDelta(lua_State *L) {
		if (!_lg_typecheck_setPotentialDelta(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::setPotentialDelta(int id, float potential) function, expected prototype:\nvoid proland::DrawRiversTask::setPotentialDelta(int id, float potential)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		float potential=(float)lua_tonumber(L,3);

		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::setPotentialDelta(int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPotentialDelta(id, potential);

		return 0;
	}

	// void proland::DrawRiversTask::setTimeStep(float timeStep)
	static int _bind_setTimeStep(lua_State *L) {
		if (!_lg_typecheck_setTimeStep(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::setTimeStep(float timeStep) function, expected prototype:\nvoid proland::DrawRiversTask::setTimeStep(float timeStep)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float timeStep=(float)lua_tonumber(L,2);

		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::setTimeStep(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTimeStep(timeStep);

		return 0;
	}

	// void proland::DrawRiversTask::displayGrid(bool display)
	static int _bind_displayGrid_overload_1(lua_State *L) {
		if (!_lg_typecheck_displayGrid_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::displayGrid(bool display) function, expected prototype:\nvoid proland::DrawRiversTask::displayGrid(bool display)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool display=(bool)(lua_toboolean(L,2)==1);

		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::displayGrid(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->displayGrid(display);

		return 0;
	}

	// bool proland::DrawRiversTask::displayGrid() const
	static int _bind_displayGrid_overload_2(lua_State *L) {
		if (!_lg_typecheck_displayGrid_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::DrawRiversTask::displayGrid() const function, expected prototype:\nbool proland::DrawRiversTask::displayGrid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::DrawRiversTask::displayGrid() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->displayGrid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for proland::DrawRiversTask::displayGrid
	static int _bind_displayGrid(lua_State *L) {
		if (_lg_typecheck_displayGrid_overload_1(L)) return _bind_displayGrid_overload_1(L);
		if (_lg_typecheck_displayGrid_overload_2(L)) return _bind_displayGrid_overload_2(L);

		luaL_error(L, "error in function displayGrid, cannot match any of the overloads for function displayGrid:\n  displayGrid(bool)\n  displayGrid()\n");
		return 0;
	}

	// void proland::DrawRiversTask::displayParticles(bool display)
	static int _bind_displayParticles_overload_1(lua_State *L) {
		if (!_lg_typecheck_displayParticles_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::displayParticles(bool display) function, expected prototype:\nvoid proland::DrawRiversTask::displayParticles(bool display)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool display=(bool)(lua_toboolean(L,2)==1);

		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::displayParticles(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->displayParticles(display);

		return 0;
	}

	// bool proland::DrawRiversTask::displayParticles() const
	static int _bind_displayParticles_overload_2(lua_State *L) {
		if (!_lg_typecheck_displayParticles_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::DrawRiversTask::displayParticles() const function, expected prototype:\nbool proland::DrawRiversTask::displayParticles() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::DrawRiversTask::displayParticles() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->displayParticles();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for proland::DrawRiversTask::displayParticles
	static int _bind_displayParticles(lua_State *L) {
		if (_lg_typecheck_displayParticles_overload_1(L)) return _bind_displayParticles_overload_1(L);
		if (_lg_typecheck_displayParticles_overload_2(L)) return _bind_displayParticles_overload_2(L);

		luaL_error(L, "error in function displayParticles, cannot match any of the overloads for function displayParticles:\n  displayParticles(bool)\n  displayParticles()\n");
		return 0;
	}

	// void proland::DrawRiversTask::displayVelocities(bool display)
	static int _bind_displayVelocities_overload_1(lua_State *L) {
		if (!_lg_typecheck_displayVelocities_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::displayVelocities(bool display) function, expected prototype:\nvoid proland::DrawRiversTask::displayVelocities(bool display)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool display=(bool)(lua_toboolean(L,2)==1);

		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::displayVelocities(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->displayVelocities(display);

		return 0;
	}

	// bool proland::DrawRiversTask::displayVelocities() const
	static int _bind_displayVelocities_overload_2(lua_State *L) {
		if (!_lg_typecheck_displayVelocities_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::DrawRiversTask::displayVelocities() const function, expected prototype:\nbool proland::DrawRiversTask::displayVelocities() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::DrawRiversTask::displayVelocities() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->displayVelocities();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for proland::DrawRiversTask::displayVelocities
	static int _bind_displayVelocities(lua_State *L) {
		if (_lg_typecheck_displayVelocities_overload_1(L)) return _bind_displayVelocities_overload_1(L);
		if (_lg_typecheck_displayVelocities_overload_2(L)) return _bind_displayVelocities_overload_2(L);

		luaL_error(L, "error in function displayVelocities, cannot match any of the overloads for function displayVelocities:\n  displayVelocities(bool)\n  displayVelocities()\n");
		return 0;
	}

	// void proland::DrawRiversTask::displaySunEffects(bool display)
	static int _bind_displaySunEffects_overload_1(lua_State *L) {
		if (!_lg_typecheck_displaySunEffects_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::displaySunEffects(bool display) function, expected prototype:\nvoid proland::DrawRiversTask::displaySunEffects(bool display)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool display=(bool)(lua_toboolean(L,2)==1);

		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::displaySunEffects(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->displaySunEffects(display);

		return 0;
	}

	// bool proland::DrawRiversTask::displaySunEffects() const
	static int _bind_displaySunEffects_overload_2(lua_State *L) {
		if (!_lg_typecheck_displaySunEffects_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::DrawRiversTask::displaySunEffects() const function, expected prototype:\nbool proland::DrawRiversTask::displaySunEffects() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::DrawRiversTask::displaySunEffects() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->displaySunEffects();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for proland::DrawRiversTask::displaySunEffects
	static int _bind_displaySunEffects(lua_State *L) {
		if (_lg_typecheck_displaySunEffects_overload_1(L)) return _bind_displaySunEffects_overload_1(L);
		if (_lg_typecheck_displaySunEffects_overload_2(L)) return _bind_displaySunEffects_overload_2(L);

		luaL_error(L, "error in function displaySunEffects, cannot match any of the overloads for function displaySunEffects:\n  displaySunEffects(bool)\n  displaySunEffects()\n");
		return 0;
	}

	// void proland::DrawRiversTask::setRiverDepth(float depth)
	static int _bind_setRiverDepth(lua_State *L) {
		if (!_lg_typecheck_setRiverDepth(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::setRiverDepth(float depth) function, expected prototype:\nvoid proland::DrawRiversTask::setRiverDepth(float depth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float depth=(float)lua_tonumber(L,2);

		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::setRiverDepth(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRiverDepth(depth);

		return 0;
	}

	// void proland::DrawRiversTask::setWaveSlopeFactor(float slopeFactor)
	static int _bind_setWaveSlopeFactor(lua_State *L) {
		if (!_lg_typecheck_setWaveSlopeFactor(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::setWaveSlopeFactor(float slopeFactor) function, expected prototype:\nvoid proland::DrawRiversTask::setWaveSlopeFactor(float slopeFactor)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float slopeFactor=(float)lua_tonumber(L,2);

		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::setWaveSlopeFactor(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setWaveSlopeFactor(slopeFactor);

		return 0;
	}

	// void proland::DrawRiversTask::setWaveLength(float length)
	static int _bind_setWaveLength(lua_State *L) {
		if (!_lg_typecheck_setWaveLength(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::setWaveLength(float length) function, expected prototype:\nvoid proland::DrawRiversTask::setWaveLength(float length)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float length=(float)lua_tonumber(L,2);

		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::setWaveLength(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setWaveLength(length);

		return 0;
	}

	// void proland::DrawRiversTask::setBedLength(float length)
	static int _bind_setBedLength(lua_State *L) {
		if (!_lg_typecheck_setBedLength(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::setBedLength(float length) function, expected prototype:\nvoid proland::DrawRiversTask::setBedLength(float length)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float length=(float)lua_tonumber(L,2);

		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::setBedLength(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBedLength(length);

		return 0;
	}

	// void proland::DrawRiversTask::setMeshDisplayType(proland::DrawRiversTask::MeshDisplayType type)
	static int _bind_setMeshDisplayType(lua_State *L) {
		if (!_lg_typecheck_setMeshDisplayType(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::setMeshDisplayType(proland::DrawRiversTask::MeshDisplayType type) function, expected prototype:\nvoid proland::DrawRiversTask::setMeshDisplayType(proland::DrawRiversTask::MeshDisplayType type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::DrawRiversTask::MeshDisplayType type=(proland::DrawRiversTask::MeshDisplayType)lua_tointeger(L,2);

		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::setMeshDisplayType(proland::DrawRiversTask::MeshDisplayType). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMeshDisplayType(type);

		return 0;
	}

	// float proland::DrawRiversTask::getParticleRadius() const
	static int _bind_getParticleRadius(lua_State *L) {
		if (!_lg_typecheck_getParticleRadius(L)) {
			luaL_error(L, "luna typecheck failed in float proland::DrawRiversTask::getParticleRadius() const function, expected prototype:\nfloat proland::DrawRiversTask::getParticleRadius() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::DrawRiversTask::getParticleRadius() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getParticleRadius();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::DrawRiversTask::getSlipParameter(int id) const
	static int _bind_getSlipParameter(lua_State *L) {
		if (!_lg_typecheck_getSlipParameter(L)) {
			luaL_error(L, "luna typecheck failed in float proland::DrawRiversTask::getSlipParameter(int id) const function, expected prototype:\nfloat proland::DrawRiversTask::getSlipParameter(int id) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::DrawRiversTask::getSlipParameter(int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getSlipParameter(id);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::DrawRiversTask::getPotentialDelta(int id) const
	static int _bind_getPotentialDelta(lua_State *L) {
		if (!_lg_typecheck_getPotentialDelta(L)) {
			luaL_error(L, "luna typecheck failed in float proland::DrawRiversTask::getPotentialDelta(int id) const function, expected prototype:\nfloat proland::DrawRiversTask::getPotentialDelta(int id) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::DrawRiversTask::getPotentialDelta(int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getPotentialDelta(id);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::DrawRiversTask::getTimeStep() const
	static int _bind_getTimeStep(lua_State *L) {
		if (!_lg_typecheck_getTimeStep(L)) {
			luaL_error(L, "luna typecheck failed in float proland::DrawRiversTask::getTimeStep() const function, expected prototype:\nfloat proland::DrawRiversTask::getTimeStep() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::DrawRiversTask::getTimeStep() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getTimeStep();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::DrawRiversTask::getWaveSlopeFactor() const
	static int _bind_getWaveSlopeFactor(lua_State *L) {
		if (!_lg_typecheck_getWaveSlopeFactor(L)) {
			luaL_error(L, "luna typecheck failed in float proland::DrawRiversTask::getWaveSlopeFactor() const function, expected prototype:\nfloat proland::DrawRiversTask::getWaveSlopeFactor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::DrawRiversTask::getWaveSlopeFactor() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getWaveSlopeFactor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::DrawRiversTask::getRiverDepth() const
	static int _bind_getRiverDepth(lua_State *L) {
		if (!_lg_typecheck_getRiverDepth(L)) {
			luaL_error(L, "luna typecheck failed in float proland::DrawRiversTask::getRiverDepth() const function, expected prototype:\nfloat proland::DrawRiversTask::getRiverDepth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::DrawRiversTask::getRiverDepth() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getRiverDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::DrawRiversTask::getWaveLength() const
	static int _bind_getWaveLength(lua_State *L) {
		if (!_lg_typecheck_getWaveLength(L)) {
			luaL_error(L, "luna typecheck failed in float proland::DrawRiversTask::getWaveLength() const function, expected prototype:\nfloat proland::DrawRiversTask::getWaveLength() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::DrawRiversTask::getWaveLength() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getWaveLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::DrawRiversTask::getBedLength() const
	static int _bind_getBedLength(lua_State *L) {
		if (!_lg_typecheck_getBedLength(L)) {
			luaL_error(L, "luna typecheck failed in float proland::DrawRiversTask::getBedLength() const function, expected prototype:\nfloat proland::DrawRiversTask::getBedLength() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::DrawRiversTask::getBedLength() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getBedLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::DrawRiversTask::MeshDisplayType proland::DrawRiversTask::getMeshDisplayType() const
	static int _bind_getMeshDisplayType(lua_State *L) {
		if (!_lg_typecheck_getMeshDisplayType(L)) {
			luaL_error(L, "luna typecheck failed in proland::DrawRiversTask::MeshDisplayType proland::DrawRiversTask::getMeshDisplayType() const function, expected prototype:\nproland::DrawRiversTask::MeshDisplayType proland::DrawRiversTask::getMeshDisplayType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::DrawRiversTask::MeshDisplayType proland::DrawRiversTask::getMeshDisplayType() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::DrawRiversTask::MeshDisplayType lret = self->getMeshDisplayType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * proland::DrawRiversTask::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::DrawRiversTask::base_toString() function, expected prototype:\nconst char * proland::DrawRiversTask::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::DrawRiversTask::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DrawRiversTask::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::ptr< ork::Task > proland::DrawRiversTask::base_getTask(ork::ptr< ork::Object > context)
	static int _bind_base_getTask(lua_State *L) {
		if (!_lg_typecheck_base_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > proland::DrawRiversTask::base_getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > proland::DrawRiversTask::base_getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		proland::DrawRiversTask* self=Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > proland::DrawRiversTask::base_getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->DrawRiversTask::getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}


	// Operator binds:

};

proland::DrawRiversTask* LunaTraits< proland::DrawRiversTask >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_DrawRiversTask::_bind_ctor(L);
}

void LunaTraits< proland::DrawRiversTask >::_bind_dtor(proland::DrawRiversTask* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::DrawRiversTask >::className[] = "DrawRiversTask";
const char LunaTraits< proland::DrawRiversTask >::fullName[] = "proland::DrawRiversTask";
const char LunaTraits< proland::DrawRiversTask >::moduleName[] = "proland";
const char* LunaTraits< proland::DrawRiversTask >::parents[] = {"ork.AbstractTask", 0};
const int LunaTraits< proland::DrawRiversTask >::hash = 59278761;
const int LunaTraits< proland::DrawRiversTask >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::DrawRiversTask >::methods[] = {
	{"getTask", &luna_wrapper_proland_DrawRiversTask::_bind_getTask},
	{"getParticles", &luna_wrapper_proland_DrawRiversTask::_bind_getParticles},
	{"setParticleRadius", &luna_wrapper_proland_DrawRiversTask::_bind_setParticleRadius},
	{"setSlipParameter", &luna_wrapper_proland_DrawRiversTask::_bind_setSlipParameter},
	{"setPotentialDelta", &luna_wrapper_proland_DrawRiversTask::_bind_setPotentialDelta},
	{"setTimeStep", &luna_wrapper_proland_DrawRiversTask::_bind_setTimeStep},
	{"displayGrid", &luna_wrapper_proland_DrawRiversTask::_bind_displayGrid},
	{"displayParticles", &luna_wrapper_proland_DrawRiversTask::_bind_displayParticles},
	{"displayVelocities", &luna_wrapper_proland_DrawRiversTask::_bind_displayVelocities},
	{"displaySunEffects", &luna_wrapper_proland_DrawRiversTask::_bind_displaySunEffects},
	{"setRiverDepth", &luna_wrapper_proland_DrawRiversTask::_bind_setRiverDepth},
	{"setWaveSlopeFactor", &luna_wrapper_proland_DrawRiversTask::_bind_setWaveSlopeFactor},
	{"setWaveLength", &luna_wrapper_proland_DrawRiversTask::_bind_setWaveLength},
	{"setBedLength", &luna_wrapper_proland_DrawRiversTask::_bind_setBedLength},
	{"setMeshDisplayType", &luna_wrapper_proland_DrawRiversTask::_bind_setMeshDisplayType},
	{"getParticleRadius", &luna_wrapper_proland_DrawRiversTask::_bind_getParticleRadius},
	{"getSlipParameter", &luna_wrapper_proland_DrawRiversTask::_bind_getSlipParameter},
	{"getPotentialDelta", &luna_wrapper_proland_DrawRiversTask::_bind_getPotentialDelta},
	{"getTimeStep", &luna_wrapper_proland_DrawRiversTask::_bind_getTimeStep},
	{"getWaveSlopeFactor", &luna_wrapper_proland_DrawRiversTask::_bind_getWaveSlopeFactor},
	{"getRiverDepth", &luna_wrapper_proland_DrawRiversTask::_bind_getRiverDepth},
	{"getWaveLength", &luna_wrapper_proland_DrawRiversTask::_bind_getWaveLength},
	{"getBedLength", &luna_wrapper_proland_DrawRiversTask::_bind_getBedLength},
	{"getMeshDisplayType", &luna_wrapper_proland_DrawRiversTask::_bind_getMeshDisplayType},
	{"base_toString", &luna_wrapper_proland_DrawRiversTask::_bind_base_toString},
	{"base_getTask", &luna_wrapper_proland_DrawRiversTask::_bind_base_getTask},
	{"fromVoid", &luna_wrapper_proland_DrawRiversTask::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_DrawRiversTask::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_DrawRiversTask::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::DrawRiversTask >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_DrawRiversTask::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::DrawRiversTask >::enumValues[] = {
	{"NONE", proland::DrawRiversTask::NONE},
	{"PARTICLE_COVERAGE", proland::DrawRiversTask::PARTICLE_COVERAGE},
	{"ADVECTED", proland::DrawRiversTask::ADVECTED},
	{"PRE_ADVECTED", proland::DrawRiversTask::PRE_ADVECTED},
	{"NON_ADVECTED", proland::DrawRiversTask::NON_ADVECTED},
	{"MESH_ONLY", proland::DrawRiversTask::MESH_ONLY},
	{0,0}
};


