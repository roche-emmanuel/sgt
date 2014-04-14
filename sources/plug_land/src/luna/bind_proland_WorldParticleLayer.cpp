#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_WorldParticleLayer.h>

class luna_wrapper_proland_WorldParticleLayer {
public:
	typedef Luna< proland::WorldParticleLayer > luna_t;

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

		proland::WorldParticleLayer* self= (proland::WorldParticleLayer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::WorldParticleLayer >::push(L,self,false);
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
		//proland::WorldParticleLayer* ptr= dynamic_cast< proland::WorldParticleLayer* >(Luna< ork::Object >::check(L,1));
		proland::WorldParticleLayer* ptr= luna_caster< ork::Object, proland::WorldParticleLayer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::WorldParticleLayer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getSpeedFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSpeedFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isPaused(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPaused(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWorldParticle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,93158916)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_moveParticles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_base_removeOldParticles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::WorldParticleLayer::WorldParticleLayer(float speedFactor)
	static proland::WorldParticleLayer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::WorldParticleLayer::WorldParticleLayer(float speedFactor) function, expected prototype:\nproland::WorldParticleLayer::WorldParticleLayer(float speedFactor)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float speedFactor=(float)lua_tonumber(L,1);

		return new proland::WorldParticleLayer(speedFactor);
	}

	// proland::WorldParticleLayer::WorldParticleLayer(lua_Table * data, float speedFactor)
	static proland::WorldParticleLayer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::WorldParticleLayer::WorldParticleLayer(lua_Table * data, float speedFactor) function, expected prototype:\nproland::WorldParticleLayer::WorldParticleLayer(lua_Table * data, float speedFactor)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float speedFactor=(float)lua_tonumber(L,2);

		return new wrapper_proland_WorldParticleLayer(L,NULL, speedFactor);
	}

	// Overload binder for proland::WorldParticleLayer::WorldParticleLayer
	static proland::WorldParticleLayer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function WorldParticleLayer, cannot match any of the overloads for function WorldParticleLayer:\n  WorldParticleLayer(float)\n  WorldParticleLayer(lua_Table *, float)\n");
		return NULL;
	}


	// Function binds:
	// float proland::WorldParticleLayer::getSpeedFactor() const
	static int _bind_getSpeedFactor(lua_State *L) {
		if (!_lg_typecheck_getSpeedFactor(L)) {
			luaL_error(L, "luna typecheck failed in float proland::WorldParticleLayer::getSpeedFactor() const function, expected prototype:\nfloat proland::WorldParticleLayer::getSpeedFactor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::WorldParticleLayer* self=Luna< ork::Object >::checkSubType< proland::WorldParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::WorldParticleLayer::getSpeedFactor() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getSpeedFactor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::WorldParticleLayer::setSpeedFactor(float speedFactor)
	static int _bind_setSpeedFactor(lua_State *L) {
		if (!_lg_typecheck_setSpeedFactor(L)) {
			luaL_error(L, "luna typecheck failed in void proland::WorldParticleLayer::setSpeedFactor(float speedFactor) function, expected prototype:\nvoid proland::WorldParticleLayer::setSpeedFactor(float speedFactor)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float speedFactor=(float)lua_tonumber(L,2);

		proland::WorldParticleLayer* self=Luna< ork::Object >::checkSubType< proland::WorldParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::WorldParticleLayer::setSpeedFactor(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSpeedFactor(speedFactor);

		return 0;
	}

	// bool proland::WorldParticleLayer::isPaused() const
	static int _bind_isPaused(lua_State *L) {
		if (!_lg_typecheck_isPaused(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::WorldParticleLayer::isPaused() const function, expected prototype:\nbool proland::WorldParticleLayer::isPaused() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::WorldParticleLayer* self=Luna< ork::Object >::checkSubType< proland::WorldParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::WorldParticleLayer::isPaused() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isPaused();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::WorldParticleLayer::setPaused(bool paused)
	static int _bind_setPaused(lua_State *L) {
		if (!_lg_typecheck_setPaused(L)) {
			luaL_error(L, "luna typecheck failed in void proland::WorldParticleLayer::setPaused(bool paused) function, expected prototype:\nvoid proland::WorldParticleLayer::setPaused(bool paused)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool paused=(bool)(lua_toboolean(L,2)==1);

		proland::WorldParticleLayer* self=Luna< ork::Object >::checkSubType< proland::WorldParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::WorldParticleLayer::setPaused(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPaused(paused);

		return 0;
	}

	// proland::WorldParticleLayer::WorldParticle * proland::WorldParticleLayer::getWorldParticle(proland::ParticleStorage::Particle * p)
	static int _bind_getWorldParticle(lua_State *L) {
		if (!_lg_typecheck_getWorldParticle(L)) {
			luaL_error(L, "luna typecheck failed in proland::WorldParticleLayer::WorldParticle * proland::WorldParticleLayer::getWorldParticle(proland::ParticleStorage::Particle * p) function, expected prototype:\nproland::WorldParticleLayer::WorldParticle * proland::WorldParticleLayer::getWorldParticle(proland::ParticleStorage::Particle * p)\nClass arguments details:\narg 1 ID = 93158916\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::ParticleStorage::Particle* p=(Luna< proland::ParticleStorage::Particle >::check(L,2));

		proland::WorldParticleLayer* self=Luna< ork::Object >::checkSubType< proland::WorldParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::WorldParticleLayer::WorldParticle * proland::WorldParticleLayer::getWorldParticle(proland::ParticleStorage::Particle *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::WorldParticleLayer::WorldParticle * lret = self->getWorldParticle(p);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::WorldParticleLayer::WorldParticle >::push(L,lret,false);

		return 1;
	}

	// void proland::WorldParticleLayer::moveParticles(double dt)
	static int _bind_moveParticles(lua_State *L) {
		if (!_lg_typecheck_moveParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::WorldParticleLayer::moveParticles(double dt) function, expected prototype:\nvoid proland::WorldParticleLayer::moveParticles(double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double dt=(double)lua_tonumber(L,2);

		proland::WorldParticleLayer* self=Luna< ork::Object >::checkSubType< proland::WorldParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::WorldParticleLayer::moveParticles(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->moveParticles(dt);

		return 0;
	}

	// const char * proland::WorldParticleLayer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::WorldParticleLayer::base_toString() function, expected prototype:\nconst char * proland::WorldParticleLayer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::WorldParticleLayer* self=Luna< ork::Object >::checkSubType< proland::WorldParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::WorldParticleLayer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->WorldParticleLayer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// int proland::WorldParticleLayer::base_getParticleSize()
	static int _bind_base_getParticleSize(lua_State *L) {
		if (!_lg_typecheck_base_getParticleSize(L)) {
			luaL_error(L, "luna typecheck failed in int proland::WorldParticleLayer::base_getParticleSize() function, expected prototype:\nint proland::WorldParticleLayer::base_getParticleSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::WorldParticleLayer* self=Luna< ork::Object >::checkSubType< proland::WorldParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::WorldParticleLayer::base_getParticleSize(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->WorldParticleLayer::getParticleSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::WorldParticleLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::WorldParticleLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::WorldParticleLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::WorldParticleLayer::base_getReferencedProducers function");
		}
		std::vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::WorldParticleLayer* self=Luna< ork::Object >::checkSubType< proland::WorldParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::WorldParticleLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WorldParticleLayer::getReferencedProducers(producers);

		return 0;
	}

	// void proland::WorldParticleLayer::base_removeOldParticles()
	static int _bind_base_removeOldParticles(lua_State *L) {
		if (!_lg_typecheck_base_removeOldParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::WorldParticleLayer::base_removeOldParticles() function, expected prototype:\nvoid proland::WorldParticleLayer::base_removeOldParticles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::WorldParticleLayer* self=Luna< ork::Object >::checkSubType< proland::WorldParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::WorldParticleLayer::base_removeOldParticles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WorldParticleLayer::removeOldParticles();

		return 0;
	}

	// void proland::WorldParticleLayer::base_addNewParticles()
	static int _bind_base_addNewParticles(lua_State *L) {
		if (!_lg_typecheck_base_addNewParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::WorldParticleLayer::base_addNewParticles() function, expected prototype:\nvoid proland::WorldParticleLayer::base_addNewParticles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::WorldParticleLayer* self=Luna< ork::Object >::checkSubType< proland::WorldParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::WorldParticleLayer::base_addNewParticles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WorldParticleLayer::addNewParticles();

		return 0;
	}

	// void proland::WorldParticleLayer::base_moveParticles(double dt)
	static int _bind_base_moveParticles(lua_State *L) {
		if (!_lg_typecheck_base_moveParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::WorldParticleLayer::base_moveParticles(double dt) function, expected prototype:\nvoid proland::WorldParticleLayer::base_moveParticles(double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double dt=(double)lua_tonumber(L,2);

		proland::WorldParticleLayer* self=Luna< ork::Object >::checkSubType< proland::WorldParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::WorldParticleLayer::base_moveParticles(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WorldParticleLayer::moveParticles(dt);

		return 0;
	}


	// Operator binds:

};

proland::WorldParticleLayer* LunaTraits< proland::WorldParticleLayer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_WorldParticleLayer::_bind_ctor(L);
}

void LunaTraits< proland::WorldParticleLayer >::_bind_dtor(proland::WorldParticleLayer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::WorldParticleLayer >::className[] = "WorldParticleLayer";
const char LunaTraits< proland::WorldParticleLayer >::fullName[] = "proland::WorldParticleLayer";
const char LunaTraits< proland::WorldParticleLayer >::moduleName[] = "proland";
const char* LunaTraits< proland::WorldParticleLayer >::parents[] = {"proland.ParticleLayer", 0};
const int LunaTraits< proland::WorldParticleLayer >::hash = 70752296;
const int LunaTraits< proland::WorldParticleLayer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::WorldParticleLayer >::methods[] = {
	{"getSpeedFactor", &luna_wrapper_proland_WorldParticleLayer::_bind_getSpeedFactor},
	{"setSpeedFactor", &luna_wrapper_proland_WorldParticleLayer::_bind_setSpeedFactor},
	{"isPaused", &luna_wrapper_proland_WorldParticleLayer::_bind_isPaused},
	{"setPaused", &luna_wrapper_proland_WorldParticleLayer::_bind_setPaused},
	{"getWorldParticle", &luna_wrapper_proland_WorldParticleLayer::_bind_getWorldParticle},
	{"moveParticles", &luna_wrapper_proland_WorldParticleLayer::_bind_moveParticles},
	{"base_toString", &luna_wrapper_proland_WorldParticleLayer::_bind_base_toString},
	{"base_getParticleSize", &luna_wrapper_proland_WorldParticleLayer::_bind_base_getParticleSize},
	{"base_getReferencedProducers", &luna_wrapper_proland_WorldParticleLayer::_bind_base_getReferencedProducers},
	{"base_removeOldParticles", &luna_wrapper_proland_WorldParticleLayer::_bind_base_removeOldParticles},
	{"base_addNewParticles", &luna_wrapper_proland_WorldParticleLayer::_bind_base_addNewParticles},
	{"base_moveParticles", &luna_wrapper_proland_WorldParticleLayer::_bind_base_moveParticles},
	{"fromVoid", &luna_wrapper_proland_WorldParticleLayer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_WorldParticleLayer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_WorldParticleLayer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::WorldParticleLayer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_WorldParticleLayer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::WorldParticleLayer >::enumValues[] = {
	{0,0}
};


