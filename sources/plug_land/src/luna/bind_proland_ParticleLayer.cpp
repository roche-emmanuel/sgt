#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_ParticleLayer.h>

class luna_wrapper_proland_ParticleLayer {
public:
	typedef Luna< proland::ParticleLayer > luna_t;

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

		proland::ParticleLayer* self= (proland::ParticleLayer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::ParticleLayer >::push(L,self,false);
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
		//proland::ParticleLayer* ptr= dynamic_cast< proland::ParticleLayer* >(Luna< ork::Object >::check(L,1));
		proland::ParticleLayer* ptr= luna_caster< ork::Object, proland::ParticleLayer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::ParticleLayer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getOwner(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setIsEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticleSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParticleData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,93158916)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75010607) ) return false;
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

	inline static bool _lg_typecheck_addNewParticles(lua_State *L) {
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

	inline static bool _lg_typecheck_base_moveParticles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::ParticleLayer::ParticleLayer(const char * type, int particleSize)
	static proland::ParticleLayer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::ParticleLayer::ParticleLayer(const char * type, int particleSize) function, expected prototype:\nproland::ParticleLayer::ParticleLayer(const char * type, int particleSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * type=(const char *)lua_tostring(L,1);
		int particleSize=(int)lua_tointeger(L,2);

		return new proland::ParticleLayer(type, particleSize);
	}

	// proland::ParticleLayer::ParticleLayer(lua_Table * data, const char * type, int particleSize)
	static proland::ParticleLayer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::ParticleLayer::ParticleLayer(lua_Table * data, const char * type, int particleSize) function, expected prototype:\nproland::ParticleLayer::ParticleLayer(lua_Table * data, const char * type, int particleSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * type=(const char *)lua_tostring(L,2);
		int particleSize=(int)lua_tointeger(L,3);

		return new wrapper_proland_ParticleLayer(L,NULL, type, particleSize);
	}

	// Overload binder for proland::ParticleLayer::ParticleLayer
	static proland::ParticleLayer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ParticleLayer, cannot match any of the overloads for function ParticleLayer:\n  ParticleLayer(const char *, int)\n  ParticleLayer(lua_Table *, const char *, int)\n");
		return NULL;
	}


	// Function binds:
	// proland::ParticleProducer * proland::ParticleLayer::getOwner()
	static int _bind_getOwner(lua_State *L) {
		if (!_lg_typecheck_getOwner(L)) {
			luaL_error(L, "luna typecheck failed in proland::ParticleProducer * proland::ParticleLayer::getOwner() function, expected prototype:\nproland::ParticleProducer * proland::ParticleLayer::getOwner()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::ParticleProducer * proland::ParticleLayer::getOwner(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::ParticleProducer * lret = self->getOwner();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::ParticleProducer >::push(L,lret,false);

		return 1;
	}

	// bool proland::ParticleLayer::isEnabled()
	static int _bind_isEnabled(lua_State *L) {
		if (!_lg_typecheck_isEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::ParticleLayer::isEnabled() function, expected prototype:\nbool proland::ParticleLayer::isEnabled()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::ParticleLayer::isEnabled(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::ParticleLayer::setIsEnabled(bool enable)
	static int _bind_setIsEnabled(lua_State *L) {
		if (!_lg_typecheck_setIsEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleLayer::setIsEnabled(bool enable) function, expected prototype:\nvoid proland::ParticleLayer::setIsEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		proland::ParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleLayer::setIsEnabled(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setIsEnabled(enable);

		return 0;
	}

	// int proland::ParticleLayer::getParticleSize()
	static int _bind_getParticleSize(lua_State *L) {
		if (!_lg_typecheck_getParticleSize(L)) {
			luaL_error(L, "luna typecheck failed in int proland::ParticleLayer::getParticleSize() function, expected prototype:\nint proland::ParticleLayer::getParticleSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::ParticleLayer::getParticleSize(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getParticleSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void * proland::ParticleLayer::getParticleData(proland::ParticleStorage::Particle * p)
	static int _bind_getParticleData(lua_State *L) {
		if (!_lg_typecheck_getParticleData(L)) {
			luaL_error(L, "luna typecheck failed in void * proland::ParticleLayer::getParticleData(proland::ParticleStorage::Particle * p) function, expected prototype:\nvoid * proland::ParticleLayer::getParticleData(proland::ParticleStorage::Particle * p)\nClass arguments details:\narg 1 ID = 93158916\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::ParticleStorage::Particle* p=(Luna< proland::ParticleStorage::Particle >::check(L,2));

		proland::ParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void * proland::ParticleLayer::getParticleData(proland::ParticleStorage::Particle *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->getParticleData(p);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// proland::ParticleStorage::Particle * proland::ParticleLayer::getParticle(void * p)
	static int _bind_getParticle(lua_State *L) {
		if (!_lg_typecheck_getParticle(L)) {
			luaL_error(L, "luna typecheck failed in proland::ParticleStorage::Particle * proland::ParticleLayer::getParticle(void * p) function, expected prototype:\nproland::ParticleStorage::Particle * proland::ParticleLayer::getParticle(void * p)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* p=(Luna< void >::check(L,2));

		proland::ParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::ParticleStorage::Particle * proland::ParticleLayer::getParticle(void *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::ParticleStorage::Particle * lret = self->getParticle(p);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::ParticleStorage::Particle >::push(L,lret,false);

		return 1;
	}

	// void proland::ParticleLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::ParticleLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::ParticleLayer::getReferencedProducers function");
		}
		std::vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::ParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getReferencedProducers(producers);

		return 0;
	}

	// void proland::ParticleLayer::moveParticles(double dt)
	static int _bind_moveParticles(lua_State *L) {
		if (!_lg_typecheck_moveParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleLayer::moveParticles(double dt) function, expected prototype:\nvoid proland::ParticleLayer::moveParticles(double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double dt=(double)lua_tonumber(L,2);

		proland::ParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleLayer::moveParticles(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->moveParticles(dt);

		return 0;
	}

	// void proland::ParticleLayer::removeOldParticles()
	static int _bind_removeOldParticles(lua_State *L) {
		if (!_lg_typecheck_removeOldParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleLayer::removeOldParticles() function, expected prototype:\nvoid proland::ParticleLayer::removeOldParticles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleLayer::removeOldParticles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeOldParticles();

		return 0;
	}

	// void proland::ParticleLayer::addNewParticles()
	static int _bind_addNewParticles(lua_State *L) {
		if (!_lg_typecheck_addNewParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleLayer::addNewParticles() function, expected prototype:\nvoid proland::ParticleLayer::addNewParticles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleLayer::addNewParticles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addNewParticles();

		return 0;
	}

	// const char * proland::ParticleLayer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::ParticleLayer::base_toString() function, expected prototype:\nconst char * proland::ParticleLayer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::ParticleLayer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ParticleLayer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// int proland::ParticleLayer::base_getParticleSize()
	static int _bind_base_getParticleSize(lua_State *L) {
		if (!_lg_typecheck_base_getParticleSize(L)) {
			luaL_error(L, "luna typecheck failed in int proland::ParticleLayer::base_getParticleSize() function, expected prototype:\nint proland::ParticleLayer::base_getParticleSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::ParticleLayer::base_getParticleSize(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ParticleLayer::getParticleSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::ParticleLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::ParticleLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::ParticleLayer::base_getReferencedProducers function");
		}
		std::vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::ParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleLayer::getReferencedProducers(producers);

		return 0;
	}

	// void proland::ParticleLayer::base_moveParticles(double dt)
	static int _bind_base_moveParticles(lua_State *L) {
		if (!_lg_typecheck_base_moveParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleLayer::base_moveParticles(double dt) function, expected prototype:\nvoid proland::ParticleLayer::base_moveParticles(double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double dt=(double)lua_tonumber(L,2);

		proland::ParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleLayer::base_moveParticles(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleLayer::moveParticles(dt);

		return 0;
	}

	// void proland::ParticleLayer::base_removeOldParticles()
	static int _bind_base_removeOldParticles(lua_State *L) {
		if (!_lg_typecheck_base_removeOldParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleLayer::base_removeOldParticles() function, expected prototype:\nvoid proland::ParticleLayer::base_removeOldParticles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleLayer::base_removeOldParticles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleLayer::removeOldParticles();

		return 0;
	}

	// void proland::ParticleLayer::base_addNewParticles()
	static int _bind_base_addNewParticles(lua_State *L) {
		if (!_lg_typecheck_base_addNewParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleLayer::base_addNewParticles() function, expected prototype:\nvoid proland::ParticleLayer::base_addNewParticles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleLayer::base_addNewParticles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleLayer::addNewParticles();

		return 0;
	}


	// Operator binds:

};

proland::ParticleLayer* LunaTraits< proland::ParticleLayer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_ParticleLayer::_bind_ctor(L);
}

void LunaTraits< proland::ParticleLayer >::_bind_dtor(proland::ParticleLayer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::ParticleLayer >::className[] = "ParticleLayer";
const char LunaTraits< proland::ParticleLayer >::fullName[] = "proland::ParticleLayer";
const char LunaTraits< proland::ParticleLayer >::moduleName[] = "proland";
const char* LunaTraits< proland::ParticleLayer >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::ParticleLayer >::hash = 98672009;
const int LunaTraits< proland::ParticleLayer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::ParticleLayer >::methods[] = {
	{"getOwner", &luna_wrapper_proland_ParticleLayer::_bind_getOwner},
	{"isEnabled", &luna_wrapper_proland_ParticleLayer::_bind_isEnabled},
	{"setIsEnabled", &luna_wrapper_proland_ParticleLayer::_bind_setIsEnabled},
	{"getParticleSize", &luna_wrapper_proland_ParticleLayer::_bind_getParticleSize},
	{"getParticleData", &luna_wrapper_proland_ParticleLayer::_bind_getParticleData},
	{"getParticle", &luna_wrapper_proland_ParticleLayer::_bind_getParticle},
	{"getReferencedProducers", &luna_wrapper_proland_ParticleLayer::_bind_getReferencedProducers},
	{"moveParticles", &luna_wrapper_proland_ParticleLayer::_bind_moveParticles},
	{"removeOldParticles", &luna_wrapper_proland_ParticleLayer::_bind_removeOldParticles},
	{"addNewParticles", &luna_wrapper_proland_ParticleLayer::_bind_addNewParticles},
	{"base_toString", &luna_wrapper_proland_ParticleLayer::_bind_base_toString},
	{"base_getParticleSize", &luna_wrapper_proland_ParticleLayer::_bind_base_getParticleSize},
	{"base_getReferencedProducers", &luna_wrapper_proland_ParticleLayer::_bind_base_getReferencedProducers},
	{"base_moveParticles", &luna_wrapper_proland_ParticleLayer::_bind_base_moveParticles},
	{"base_removeOldParticles", &luna_wrapper_proland_ParticleLayer::_bind_base_removeOldParticles},
	{"base_addNewParticles", &luna_wrapper_proland_ParticleLayer::_bind_base_addNewParticles},
	{"fromVoid", &luna_wrapper_proland_ParticleLayer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_ParticleLayer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_ParticleLayer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::ParticleLayer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_ParticleLayer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::ParticleLayer >::enumValues[] = {
	{0,0}
};


