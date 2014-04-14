#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_LifeCycleParticleLayer.h>

class luna_wrapper_proland_LifeCycleParticleLayer {
public:
	typedef Luna< proland::LifeCycleParticleLayer > luna_t;

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

		proland::LifeCycleParticleLayer* self= (proland::LifeCycleParticleLayer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::LifeCycleParticleLayer >::push(L,self,false);
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
		//proland::LifeCycleParticleLayer* ptr= dynamic_cast< proland::LifeCycleParticleLayer* >(Luna< ork::Object >::check(L,1));
		proland::LifeCycleParticleLayer* ptr= luna_caster< ork::Object, proland::LifeCycleParticleLayer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::LifeCycleParticleLayer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getFadeInDelay(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFadeInDelay(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getActiveDelay(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setActiveDelay(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFadeOutDelay(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFadeOutDelay(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLifeCycle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,93158916)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBirthDate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,93158916)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isFadingIn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,93158916)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isActive(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,93158916)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isFadingOut(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,93158916)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFadingOut(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,93158916)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_killParticle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,93158916)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIntensity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,93158916)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_moveParticles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeOldParticles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getParticleSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75010607) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addNewParticles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_moveParticles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeOldParticles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::LifeCycleParticleLayer::LifeCycleParticleLayer(float fadeInDelay, float activeDelay, float fadeOutDelay)
	static proland::LifeCycleParticleLayer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::LifeCycleParticleLayer::LifeCycleParticleLayer(float fadeInDelay, float activeDelay, float fadeOutDelay) function, expected prototype:\nproland::LifeCycleParticleLayer::LifeCycleParticleLayer(float fadeInDelay, float activeDelay, float fadeOutDelay)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float fadeInDelay=(float)lua_tonumber(L,1);
		float activeDelay=(float)lua_tonumber(L,2);
		float fadeOutDelay=(float)lua_tonumber(L,3);

		return new proland::LifeCycleParticleLayer(fadeInDelay, activeDelay, fadeOutDelay);
	}

	// proland::LifeCycleParticleLayer::LifeCycleParticleLayer(lua_Table * data, float fadeInDelay, float activeDelay, float fadeOutDelay)
	static proland::LifeCycleParticleLayer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::LifeCycleParticleLayer::LifeCycleParticleLayer(lua_Table * data, float fadeInDelay, float activeDelay, float fadeOutDelay) function, expected prototype:\nproland::LifeCycleParticleLayer::LifeCycleParticleLayer(lua_Table * data, float fadeInDelay, float activeDelay, float fadeOutDelay)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float fadeInDelay=(float)lua_tonumber(L,2);
		float activeDelay=(float)lua_tonumber(L,3);
		float fadeOutDelay=(float)lua_tonumber(L,4);

		return new wrapper_proland_LifeCycleParticleLayer(L,NULL, fadeInDelay, activeDelay, fadeOutDelay);
	}

	// Overload binder for proland::LifeCycleParticleLayer::LifeCycleParticleLayer
	static proland::LifeCycleParticleLayer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function LifeCycleParticleLayer, cannot match any of the overloads for function LifeCycleParticleLayer:\n  LifeCycleParticleLayer(float, float, float)\n  LifeCycleParticleLayer(lua_Table *, float, float, float)\n");
		return NULL;
	}


	// Function binds:
	// float proland::LifeCycleParticleLayer::getFadeInDelay() const
	static int _bind_getFadeInDelay(lua_State *L) {
		if (!_lg_typecheck_getFadeInDelay(L)) {
			luaL_error(L, "luna typecheck failed in float proland::LifeCycleParticleLayer::getFadeInDelay() const function, expected prototype:\nfloat proland::LifeCycleParticleLayer::getFadeInDelay() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LifeCycleParticleLayer* self=Luna< ork::Object >::checkSubType< proland::LifeCycleParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::LifeCycleParticleLayer::getFadeInDelay() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getFadeInDelay();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::LifeCycleParticleLayer::setFadeInDelay(float delay)
	static int _bind_setFadeInDelay(lua_State *L) {
		if (!_lg_typecheck_setFadeInDelay(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LifeCycleParticleLayer::setFadeInDelay(float delay) function, expected prototype:\nvoid proland::LifeCycleParticleLayer::setFadeInDelay(float delay)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float delay=(float)lua_tonumber(L,2);

		proland::LifeCycleParticleLayer* self=Luna< ork::Object >::checkSubType< proland::LifeCycleParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LifeCycleParticleLayer::setFadeInDelay(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFadeInDelay(delay);

		return 0;
	}

	// float proland::LifeCycleParticleLayer::getActiveDelay() const
	static int _bind_getActiveDelay(lua_State *L) {
		if (!_lg_typecheck_getActiveDelay(L)) {
			luaL_error(L, "luna typecheck failed in float proland::LifeCycleParticleLayer::getActiveDelay() const function, expected prototype:\nfloat proland::LifeCycleParticleLayer::getActiveDelay() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LifeCycleParticleLayer* self=Luna< ork::Object >::checkSubType< proland::LifeCycleParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::LifeCycleParticleLayer::getActiveDelay() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getActiveDelay();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::LifeCycleParticleLayer::setActiveDelay(float delay)
	static int _bind_setActiveDelay(lua_State *L) {
		if (!_lg_typecheck_setActiveDelay(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LifeCycleParticleLayer::setActiveDelay(float delay) function, expected prototype:\nvoid proland::LifeCycleParticleLayer::setActiveDelay(float delay)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float delay=(float)lua_tonumber(L,2);

		proland::LifeCycleParticleLayer* self=Luna< ork::Object >::checkSubType< proland::LifeCycleParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LifeCycleParticleLayer::setActiveDelay(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setActiveDelay(delay);

		return 0;
	}

	// float proland::LifeCycleParticleLayer::getFadeOutDelay() const
	static int _bind_getFadeOutDelay(lua_State *L) {
		if (!_lg_typecheck_getFadeOutDelay(L)) {
			luaL_error(L, "luna typecheck failed in float proland::LifeCycleParticleLayer::getFadeOutDelay() const function, expected prototype:\nfloat proland::LifeCycleParticleLayer::getFadeOutDelay() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LifeCycleParticleLayer* self=Luna< ork::Object >::checkSubType< proland::LifeCycleParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::LifeCycleParticleLayer::getFadeOutDelay() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getFadeOutDelay();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::LifeCycleParticleLayer::setFadeOutDelay(float delay)
	static int _bind_setFadeOutDelay(lua_State *L) {
		if (!_lg_typecheck_setFadeOutDelay(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LifeCycleParticleLayer::setFadeOutDelay(float delay) function, expected prototype:\nvoid proland::LifeCycleParticleLayer::setFadeOutDelay(float delay)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float delay=(float)lua_tonumber(L,2);

		proland::LifeCycleParticleLayer* self=Luna< ork::Object >::checkSubType< proland::LifeCycleParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LifeCycleParticleLayer::setFadeOutDelay(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFadeOutDelay(delay);

		return 0;
	}

	// proland::LifeCycleParticleLayer::LifeCycleParticle * proland::LifeCycleParticleLayer::getLifeCycle(proland::ParticleStorage::Particle * p)
	static int _bind_getLifeCycle(lua_State *L) {
		if (!_lg_typecheck_getLifeCycle(L)) {
			luaL_error(L, "luna typecheck failed in proland::LifeCycleParticleLayer::LifeCycleParticle * proland::LifeCycleParticleLayer::getLifeCycle(proland::ParticleStorage::Particle * p) function, expected prototype:\nproland::LifeCycleParticleLayer::LifeCycleParticle * proland::LifeCycleParticleLayer::getLifeCycle(proland::ParticleStorage::Particle * p)\nClass arguments details:\narg 1 ID = 93158916\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::ParticleStorage::Particle* p=(Luna< proland::ParticleStorage::Particle >::check(L,2));

		proland::LifeCycleParticleLayer* self=Luna< ork::Object >::checkSubType< proland::LifeCycleParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::LifeCycleParticleLayer::LifeCycleParticle * proland::LifeCycleParticleLayer::getLifeCycle(proland::ParticleStorage::Particle *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::LifeCycleParticleLayer::LifeCycleParticle * lret = self->getLifeCycle(p);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::LifeCycleParticleLayer::LifeCycleParticle >::push(L,lret,false);

		return 1;
	}

	// float proland::LifeCycleParticleLayer::getBirthDate(proland::ParticleStorage::Particle * p)
	static int _bind_getBirthDate(lua_State *L) {
		if (!_lg_typecheck_getBirthDate(L)) {
			luaL_error(L, "luna typecheck failed in float proland::LifeCycleParticleLayer::getBirthDate(proland::ParticleStorage::Particle * p) function, expected prototype:\nfloat proland::LifeCycleParticleLayer::getBirthDate(proland::ParticleStorage::Particle * p)\nClass arguments details:\narg 1 ID = 93158916\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::ParticleStorage::Particle* p=(Luna< proland::ParticleStorage::Particle >::check(L,2));

		proland::LifeCycleParticleLayer* self=Luna< ork::Object >::checkSubType< proland::LifeCycleParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::LifeCycleParticleLayer::getBirthDate(proland::ParticleStorage::Particle *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getBirthDate(p);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool proland::LifeCycleParticleLayer::isFadingIn(proland::ParticleStorage::Particle * p)
	static int _bind_isFadingIn(lua_State *L) {
		if (!_lg_typecheck_isFadingIn(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::LifeCycleParticleLayer::isFadingIn(proland::ParticleStorage::Particle * p) function, expected prototype:\nbool proland::LifeCycleParticleLayer::isFadingIn(proland::ParticleStorage::Particle * p)\nClass arguments details:\narg 1 ID = 93158916\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::ParticleStorage::Particle* p=(Luna< proland::ParticleStorage::Particle >::check(L,2));

		proland::LifeCycleParticleLayer* self=Luna< ork::Object >::checkSubType< proland::LifeCycleParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::LifeCycleParticleLayer::isFadingIn(proland::ParticleStorage::Particle *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isFadingIn(p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::LifeCycleParticleLayer::isActive(proland::ParticleStorage::Particle * p)
	static int _bind_isActive(lua_State *L) {
		if (!_lg_typecheck_isActive(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::LifeCycleParticleLayer::isActive(proland::ParticleStorage::Particle * p) function, expected prototype:\nbool proland::LifeCycleParticleLayer::isActive(proland::ParticleStorage::Particle * p)\nClass arguments details:\narg 1 ID = 93158916\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::ParticleStorage::Particle* p=(Luna< proland::ParticleStorage::Particle >::check(L,2));

		proland::LifeCycleParticleLayer* self=Luna< ork::Object >::checkSubType< proland::LifeCycleParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::LifeCycleParticleLayer::isActive(proland::ParticleStorage::Particle *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isActive(p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::LifeCycleParticleLayer::isFadingOut(proland::ParticleStorage::Particle * p)
	static int _bind_isFadingOut(lua_State *L) {
		if (!_lg_typecheck_isFadingOut(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::LifeCycleParticleLayer::isFadingOut(proland::ParticleStorage::Particle * p) function, expected prototype:\nbool proland::LifeCycleParticleLayer::isFadingOut(proland::ParticleStorage::Particle * p)\nClass arguments details:\narg 1 ID = 93158916\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::ParticleStorage::Particle* p=(Luna< proland::ParticleStorage::Particle >::check(L,2));

		proland::LifeCycleParticleLayer* self=Luna< ork::Object >::checkSubType< proland::LifeCycleParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::LifeCycleParticleLayer::isFadingOut(proland::ParticleStorage::Particle *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isFadingOut(p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::LifeCycleParticleLayer::setFadingOut(proland::ParticleStorage::Particle * p)
	static int _bind_setFadingOut(lua_State *L) {
		if (!_lg_typecheck_setFadingOut(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LifeCycleParticleLayer::setFadingOut(proland::ParticleStorage::Particle * p) function, expected prototype:\nvoid proland::LifeCycleParticleLayer::setFadingOut(proland::ParticleStorage::Particle * p)\nClass arguments details:\narg 1 ID = 93158916\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::ParticleStorage::Particle* p=(Luna< proland::ParticleStorage::Particle >::check(L,2));

		proland::LifeCycleParticleLayer* self=Luna< ork::Object >::checkSubType< proland::LifeCycleParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LifeCycleParticleLayer::setFadingOut(proland::ParticleStorage::Particle *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFadingOut(p);

		return 0;
	}

	// void proland::LifeCycleParticleLayer::killParticle(proland::ParticleStorage::Particle * p)
	static int _bind_killParticle(lua_State *L) {
		if (!_lg_typecheck_killParticle(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LifeCycleParticleLayer::killParticle(proland::ParticleStorage::Particle * p) function, expected prototype:\nvoid proland::LifeCycleParticleLayer::killParticle(proland::ParticleStorage::Particle * p)\nClass arguments details:\narg 1 ID = 93158916\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::ParticleStorage::Particle* p=(Luna< proland::ParticleStorage::Particle >::check(L,2));

		proland::LifeCycleParticleLayer* self=Luna< ork::Object >::checkSubType< proland::LifeCycleParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LifeCycleParticleLayer::killParticle(proland::ParticleStorage::Particle *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->killParticle(p);

		return 0;
	}

	// float proland::LifeCycleParticleLayer::getIntensity(proland::ParticleStorage::Particle * p)
	static int _bind_getIntensity(lua_State *L) {
		if (!_lg_typecheck_getIntensity(L)) {
			luaL_error(L, "luna typecheck failed in float proland::LifeCycleParticleLayer::getIntensity(proland::ParticleStorage::Particle * p) function, expected prototype:\nfloat proland::LifeCycleParticleLayer::getIntensity(proland::ParticleStorage::Particle * p)\nClass arguments details:\narg 1 ID = 93158916\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::ParticleStorage::Particle* p=(Luna< proland::ParticleStorage::Particle >::check(L,2));

		proland::LifeCycleParticleLayer* self=Luna< ork::Object >::checkSubType< proland::LifeCycleParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::LifeCycleParticleLayer::getIntensity(proland::ParticleStorage::Particle *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getIntensity(p);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::LifeCycleParticleLayer::moveParticles(double dt)
	static int _bind_moveParticles(lua_State *L) {
		if (!_lg_typecheck_moveParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LifeCycleParticleLayer::moveParticles(double dt) function, expected prototype:\nvoid proland::LifeCycleParticleLayer::moveParticles(double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double dt=(double)lua_tonumber(L,2);

		proland::LifeCycleParticleLayer* self=Luna< ork::Object >::checkSubType< proland::LifeCycleParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LifeCycleParticleLayer::moveParticles(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->moveParticles(dt);

		return 0;
	}

	// void proland::LifeCycleParticleLayer::removeOldParticles()
	static int _bind_removeOldParticles(lua_State *L) {
		if (!_lg_typecheck_removeOldParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LifeCycleParticleLayer::removeOldParticles() function, expected prototype:\nvoid proland::LifeCycleParticleLayer::removeOldParticles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LifeCycleParticleLayer* self=Luna< ork::Object >::checkSubType< proland::LifeCycleParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LifeCycleParticleLayer::removeOldParticles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeOldParticles();

		return 0;
	}

	// const char * proland::LifeCycleParticleLayer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::LifeCycleParticleLayer::base_toString() function, expected prototype:\nconst char * proland::LifeCycleParticleLayer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LifeCycleParticleLayer* self=Luna< ork::Object >::checkSubType< proland::LifeCycleParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::LifeCycleParticleLayer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->LifeCycleParticleLayer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// int proland::LifeCycleParticleLayer::base_getParticleSize()
	static int _bind_base_getParticleSize(lua_State *L) {
		if (!_lg_typecheck_base_getParticleSize(L)) {
			luaL_error(L, "luna typecheck failed in int proland::LifeCycleParticleLayer::base_getParticleSize() function, expected prototype:\nint proland::LifeCycleParticleLayer::base_getParticleSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LifeCycleParticleLayer* self=Luna< ork::Object >::checkSubType< proland::LifeCycleParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::LifeCycleParticleLayer::base_getParticleSize(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->LifeCycleParticleLayer::getParticleSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::LifeCycleParticleLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LifeCycleParticleLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::LifeCycleParticleLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::LifeCycleParticleLayer::base_getReferencedProducers function");
		}
		std::vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::LifeCycleParticleLayer* self=Luna< ork::Object >::checkSubType< proland::LifeCycleParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LifeCycleParticleLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LifeCycleParticleLayer::getReferencedProducers(producers);

		return 0;
	}

	// void proland::LifeCycleParticleLayer::base_addNewParticles()
	static int _bind_base_addNewParticles(lua_State *L) {
		if (!_lg_typecheck_base_addNewParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LifeCycleParticleLayer::base_addNewParticles() function, expected prototype:\nvoid proland::LifeCycleParticleLayer::base_addNewParticles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LifeCycleParticleLayer* self=Luna< ork::Object >::checkSubType< proland::LifeCycleParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LifeCycleParticleLayer::base_addNewParticles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LifeCycleParticleLayer::addNewParticles();

		return 0;
	}

	// void proland::LifeCycleParticleLayer::base_moveParticles(double dt)
	static int _bind_base_moveParticles(lua_State *L) {
		if (!_lg_typecheck_base_moveParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LifeCycleParticleLayer::base_moveParticles(double dt) function, expected prototype:\nvoid proland::LifeCycleParticleLayer::base_moveParticles(double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double dt=(double)lua_tonumber(L,2);

		proland::LifeCycleParticleLayer* self=Luna< ork::Object >::checkSubType< proland::LifeCycleParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LifeCycleParticleLayer::base_moveParticles(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LifeCycleParticleLayer::moveParticles(dt);

		return 0;
	}

	// void proland::LifeCycleParticleLayer::base_removeOldParticles()
	static int _bind_base_removeOldParticles(lua_State *L) {
		if (!_lg_typecheck_base_removeOldParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LifeCycleParticleLayer::base_removeOldParticles() function, expected prototype:\nvoid proland::LifeCycleParticleLayer::base_removeOldParticles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LifeCycleParticleLayer* self=Luna< ork::Object >::checkSubType< proland::LifeCycleParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LifeCycleParticleLayer::base_removeOldParticles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LifeCycleParticleLayer::removeOldParticles();

		return 0;
	}


	// Operator binds:

};

proland::LifeCycleParticleLayer* LunaTraits< proland::LifeCycleParticleLayer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_LifeCycleParticleLayer::_bind_ctor(L);
}

void LunaTraits< proland::LifeCycleParticleLayer >::_bind_dtor(proland::LifeCycleParticleLayer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::LifeCycleParticleLayer >::className[] = "LifeCycleParticleLayer";
const char LunaTraits< proland::LifeCycleParticleLayer >::fullName[] = "proland::LifeCycleParticleLayer";
const char LunaTraits< proland::LifeCycleParticleLayer >::moduleName[] = "proland";
const char* LunaTraits< proland::LifeCycleParticleLayer >::parents[] = {"proland.ParticleLayer", 0};
const int LunaTraits< proland::LifeCycleParticleLayer >::hash = 15746778;
const int LunaTraits< proland::LifeCycleParticleLayer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::LifeCycleParticleLayer >::methods[] = {
	{"getFadeInDelay", &luna_wrapper_proland_LifeCycleParticleLayer::_bind_getFadeInDelay},
	{"setFadeInDelay", &luna_wrapper_proland_LifeCycleParticleLayer::_bind_setFadeInDelay},
	{"getActiveDelay", &luna_wrapper_proland_LifeCycleParticleLayer::_bind_getActiveDelay},
	{"setActiveDelay", &luna_wrapper_proland_LifeCycleParticleLayer::_bind_setActiveDelay},
	{"getFadeOutDelay", &luna_wrapper_proland_LifeCycleParticleLayer::_bind_getFadeOutDelay},
	{"setFadeOutDelay", &luna_wrapper_proland_LifeCycleParticleLayer::_bind_setFadeOutDelay},
	{"getLifeCycle", &luna_wrapper_proland_LifeCycleParticleLayer::_bind_getLifeCycle},
	{"getBirthDate", &luna_wrapper_proland_LifeCycleParticleLayer::_bind_getBirthDate},
	{"isFadingIn", &luna_wrapper_proland_LifeCycleParticleLayer::_bind_isFadingIn},
	{"isActive", &luna_wrapper_proland_LifeCycleParticleLayer::_bind_isActive},
	{"isFadingOut", &luna_wrapper_proland_LifeCycleParticleLayer::_bind_isFadingOut},
	{"setFadingOut", &luna_wrapper_proland_LifeCycleParticleLayer::_bind_setFadingOut},
	{"killParticle", &luna_wrapper_proland_LifeCycleParticleLayer::_bind_killParticle},
	{"getIntensity", &luna_wrapper_proland_LifeCycleParticleLayer::_bind_getIntensity},
	{"moveParticles", &luna_wrapper_proland_LifeCycleParticleLayer::_bind_moveParticles},
	{"removeOldParticles", &luna_wrapper_proland_LifeCycleParticleLayer::_bind_removeOldParticles},
	{"base_toString", &luna_wrapper_proland_LifeCycleParticleLayer::_bind_base_toString},
	{"base_getParticleSize", &luna_wrapper_proland_LifeCycleParticleLayer::_bind_base_getParticleSize},
	{"base_getReferencedProducers", &luna_wrapper_proland_LifeCycleParticleLayer::_bind_base_getReferencedProducers},
	{"base_addNewParticles", &luna_wrapper_proland_LifeCycleParticleLayer::_bind_base_addNewParticles},
	{"base_moveParticles", &luna_wrapper_proland_LifeCycleParticleLayer::_bind_base_moveParticles},
	{"base_removeOldParticles", &luna_wrapper_proland_LifeCycleParticleLayer::_bind_base_removeOldParticles},
	{"fromVoid", &luna_wrapper_proland_LifeCycleParticleLayer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_LifeCycleParticleLayer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_LifeCycleParticleLayer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::LifeCycleParticleLayer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_LifeCycleParticleLayer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::LifeCycleParticleLayer >::enumValues[] = {
	{0,0}
};


