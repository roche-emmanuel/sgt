#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_ParticleProducer.h>

class luna_wrapper_proland_ParticleProducer {
public:
	typedef Luna< proland::ParticleProducer > luna_t;

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

		proland::ParticleProducer* self= (proland::ParticleProducer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::ParticleProducer >::push(L,self,false);
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
		//proland::ParticleProducer* ptr= dynamic_cast< proland::ParticleProducer* >(Luna< ork::Object >::check(L,1));
		proland::ParticleProducer* ptr= luna_caster< ork::Object, proland::ParticleProducer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::ParticleProducer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::ParticleStorage >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::ParticleStorage >(L,3) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getStorage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLayerCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLayer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_hasLayers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addLayer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::ParticleLayer >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75010607) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticleSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_updateParticles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_newParticle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75010607) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getParticleSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_updateParticles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_base_newParticle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::ParticleProducer::ParticleProducer(const char * type, ork::ptr< proland::ParticleStorage > storage)
	static proland::ParticleProducer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::ParticleProducer::ParticleProducer(const char * type, ork::ptr< proland::ParticleStorage > storage) function, expected prototype:\nproland::ParticleProducer::ParticleProducer(const char * type, ork::ptr< proland::ParticleStorage > storage)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * type=(const char *)lua_tostring(L,1);
		ork::ptr< proland::ParticleStorage > storage = Luna< ork::Object >::checkSubType< proland::ParticleStorage >(L,2);

		return new proland::ParticleProducer(type, storage);
	}

	// proland::ParticleProducer::ParticleProducer(lua_Table * data, const char * type, ork::ptr< proland::ParticleStorage > storage)
	static proland::ParticleProducer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::ParticleProducer::ParticleProducer(lua_Table * data, const char * type, ork::ptr< proland::ParticleStorage > storage) function, expected prototype:\nproland::ParticleProducer::ParticleProducer(lua_Table * data, const char * type, ork::ptr< proland::ParticleStorage > storage)\nClass arguments details:\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * type=(const char *)lua_tostring(L,2);
		ork::ptr< proland::ParticleStorage > storage = Luna< ork::Object >::checkSubType< proland::ParticleStorage >(L,3);

		return new wrapper_proland_ParticleProducer(L,NULL, type, storage);
	}

	// Overload binder for proland::ParticleProducer::ParticleProducer
	static proland::ParticleProducer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ParticleProducer, cannot match any of the overloads for function ParticleProducer:\n  ParticleProducer(const char *, ork::ptr< proland::ParticleStorage >)\n  ParticleProducer(lua_Table *, const char *, ork::ptr< proland::ParticleStorage >)\n");
		return NULL;
	}


	// Function binds:
	// ork::ptr< proland::ParticleStorage > proland::ParticleProducer::getStorage() const
	static int _bind_getStorage(lua_State *L) {
		if (!_lg_typecheck_getStorage(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::ParticleStorage > proland::ParticleProducer::getStorage() const function, expected prototype:\nork::ptr< proland::ParticleStorage > proland::ParticleProducer::getStorage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleProducer* self=Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::ParticleStorage > proland::ParticleProducer::getStorage() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::ParticleStorage > lret = self->getStorage();
		Luna< proland::ParticleStorage >::push(L,lret.get(),false);

		return 1;
	}

	// int proland::ParticleProducer::getLayerCount() const
	static int _bind_getLayerCount(lua_State *L) {
		if (!_lg_typecheck_getLayerCount(L)) {
			luaL_error(L, "luna typecheck failed in int proland::ParticleProducer::getLayerCount() const function, expected prototype:\nint proland::ParticleProducer::getLayerCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleProducer* self=Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::ParticleProducer::getLayerCount() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getLayerCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::ptr< proland::ParticleLayer > proland::ParticleProducer::getLayer(int index) const
	static int _bind_getLayer(lua_State *L) {
		if (!_lg_typecheck_getLayer(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::ParticleLayer > proland::ParticleProducer::getLayer(int index) const function, expected prototype:\nork::ptr< proland::ParticleLayer > proland::ParticleProducer::getLayer(int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		proland::ParticleProducer* self=Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::ParticleLayer > proland::ParticleProducer::getLayer(int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::ParticleLayer > lret = self->getLayer(index);
		Luna< proland::ParticleLayer >::push(L,lret.get(),false);

		return 1;
	}

	// bool proland::ParticleProducer::hasLayers() const
	static int _bind_hasLayers(lua_State *L) {
		if (!_lg_typecheck_hasLayers(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::ParticleProducer::hasLayers() const function, expected prototype:\nbool proland::ParticleProducer::hasLayers() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleProducer* self=Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::ParticleProducer::hasLayers() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->hasLayers();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::ParticleProducer::addLayer(ork::ptr< proland::ParticleLayer > l)
	static int _bind_addLayer(lua_State *L) {
		if (!_lg_typecheck_addLayer(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleProducer::addLayer(ork::ptr< proland::ParticleLayer > l) function, expected prototype:\nvoid proland::ParticleProducer::addLayer(ork::ptr< proland::ParticleLayer > l)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::ParticleLayer > l = Luna< ork::Object >::checkSubType< proland::ParticleLayer >(L,2);

		proland::ParticleProducer* self=Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleProducer::addLayer(ork::ptr< proland::ParticleLayer >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addLayer(l);

		return 0;
	}

	// void proland::ParticleProducer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleProducer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::ParticleProducer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::ParticleProducer::getReferencedProducers function");
		}
		std::vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::ParticleProducer* self=Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleProducer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getReferencedProducers(producers);

		return 0;
	}

	// int proland::ParticleProducer::getParticleSize()
	static int _bind_getParticleSize(lua_State *L) {
		if (!_lg_typecheck_getParticleSize(L)) {
			luaL_error(L, "luna typecheck failed in int proland::ParticleProducer::getParticleSize() function, expected prototype:\nint proland::ParticleProducer::getParticleSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleProducer* self=Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::ParticleProducer::getParticleSize(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getParticleSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::ParticleProducer::updateParticles(double dt)
	static int _bind_updateParticles(lua_State *L) {
		if (!_lg_typecheck_updateParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleProducer::updateParticles(double dt) function, expected prototype:\nvoid proland::ParticleProducer::updateParticles(double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double dt=(double)lua_tonumber(L,2);

		proland::ParticleProducer* self=Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleProducer::updateParticles(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->updateParticles(dt);

		return 0;
	}

	// void proland::ParticleProducer::moveParticles(double dt)
	static int _bind_moveParticles(lua_State *L) {
		if (!_lg_typecheck_moveParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleProducer::moveParticles(double dt) function, expected prototype:\nvoid proland::ParticleProducer::moveParticles(double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double dt=(double)lua_tonumber(L,2);

		proland::ParticleProducer* self=Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleProducer::moveParticles(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->moveParticles(dt);

		return 0;
	}

	// void proland::ParticleProducer::removeOldParticles()
	static int _bind_removeOldParticles(lua_State *L) {
		if (!_lg_typecheck_removeOldParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleProducer::removeOldParticles() function, expected prototype:\nvoid proland::ParticleProducer::removeOldParticles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleProducer* self=Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleProducer::removeOldParticles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeOldParticles();

		return 0;
	}

	// void proland::ParticleProducer::addNewParticles()
	static int _bind_addNewParticles(lua_State *L) {
		if (!_lg_typecheck_addNewParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleProducer::addNewParticles() function, expected prototype:\nvoid proland::ParticleProducer::addNewParticles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleProducer* self=Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleProducer::addNewParticles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addNewParticles();

		return 0;
	}

	// proland::ParticleStorage::Particle * proland::ParticleProducer::newParticle()
	static int _bind_newParticle(lua_State *L) {
		if (!_lg_typecheck_newParticle(L)) {
			luaL_error(L, "luna typecheck failed in proland::ParticleStorage::Particle * proland::ParticleProducer::newParticle() function, expected prototype:\nproland::ParticleStorage::Particle * proland::ParticleProducer::newParticle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleProducer* self=Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::ParticleStorage::Particle * proland::ParticleProducer::newParticle(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::ParticleStorage::Particle * lret = self->newParticle();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::ParticleStorage::Particle >::push(L,lret,false);

		return 1;
	}

	// const char * proland::ParticleProducer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::ParticleProducer::base_toString() function, expected prototype:\nconst char * proland::ParticleProducer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleProducer* self=Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::ParticleProducer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ParticleProducer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::ParticleProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::ParticleProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::ParticleProducer::base_getReferencedProducers function");
		}
		std::vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::ParticleProducer* self=Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleProducer::getReferencedProducers(producers);

		return 0;
	}

	// int proland::ParticleProducer::base_getParticleSize()
	static int _bind_base_getParticleSize(lua_State *L) {
		if (!_lg_typecheck_base_getParticleSize(L)) {
			luaL_error(L, "luna typecheck failed in int proland::ParticleProducer::base_getParticleSize() function, expected prototype:\nint proland::ParticleProducer::base_getParticleSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleProducer* self=Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::ParticleProducer::base_getParticleSize(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ParticleProducer::getParticleSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::ParticleProducer::base_updateParticles(double dt)
	static int _bind_base_updateParticles(lua_State *L) {
		if (!_lg_typecheck_base_updateParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleProducer::base_updateParticles(double dt) function, expected prototype:\nvoid proland::ParticleProducer::base_updateParticles(double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double dt=(double)lua_tonumber(L,2);

		proland::ParticleProducer* self=Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleProducer::base_updateParticles(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleProducer::updateParticles(dt);

		return 0;
	}

	// void proland::ParticleProducer::base_moveParticles(double dt)
	static int _bind_base_moveParticles(lua_State *L) {
		if (!_lg_typecheck_base_moveParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleProducer::base_moveParticles(double dt) function, expected prototype:\nvoid proland::ParticleProducer::base_moveParticles(double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double dt=(double)lua_tonumber(L,2);

		proland::ParticleProducer* self=Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleProducer::base_moveParticles(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleProducer::moveParticles(dt);

		return 0;
	}

	// void proland::ParticleProducer::base_removeOldParticles()
	static int _bind_base_removeOldParticles(lua_State *L) {
		if (!_lg_typecheck_base_removeOldParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleProducer::base_removeOldParticles() function, expected prototype:\nvoid proland::ParticleProducer::base_removeOldParticles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleProducer* self=Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleProducer::base_removeOldParticles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleProducer::removeOldParticles();

		return 0;
	}

	// void proland::ParticleProducer::base_addNewParticles()
	static int _bind_base_addNewParticles(lua_State *L) {
		if (!_lg_typecheck_base_addNewParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleProducer::base_addNewParticles() function, expected prototype:\nvoid proland::ParticleProducer::base_addNewParticles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleProducer* self=Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleProducer::base_addNewParticles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ParticleProducer::addNewParticles();

		return 0;
	}

	// proland::ParticleStorage::Particle * proland::ParticleProducer::base_newParticle()
	static int _bind_base_newParticle(lua_State *L) {
		if (!_lg_typecheck_base_newParticle(L)) {
			luaL_error(L, "luna typecheck failed in proland::ParticleStorage::Particle * proland::ParticleProducer::base_newParticle() function, expected prototype:\nproland::ParticleStorage::Particle * proland::ParticleProducer::base_newParticle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleProducer* self=Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::ParticleStorage::Particle * proland::ParticleProducer::base_newParticle(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::ParticleStorage::Particle * lret = self->ParticleProducer::newParticle();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::ParticleStorage::Particle >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

proland::ParticleProducer* LunaTraits< proland::ParticleProducer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_ParticleProducer::_bind_ctor(L);
}

void LunaTraits< proland::ParticleProducer >::_bind_dtor(proland::ParticleProducer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::ParticleProducer >::className[] = "ParticleProducer";
const char LunaTraits< proland::ParticleProducer >::fullName[] = "proland::ParticleProducer";
const char LunaTraits< proland::ParticleProducer >::moduleName[] = "proland";
const char* LunaTraits< proland::ParticleProducer >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::ParticleProducer >::hash = 88136001;
const int LunaTraits< proland::ParticleProducer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::ParticleProducer >::methods[] = {
	{"getStorage", &luna_wrapper_proland_ParticleProducer::_bind_getStorage},
	{"getLayerCount", &luna_wrapper_proland_ParticleProducer::_bind_getLayerCount},
	{"getLayer", &luna_wrapper_proland_ParticleProducer::_bind_getLayer},
	{"hasLayers", &luna_wrapper_proland_ParticleProducer::_bind_hasLayers},
	{"addLayer", &luna_wrapper_proland_ParticleProducer::_bind_addLayer},
	{"getReferencedProducers", &luna_wrapper_proland_ParticleProducer::_bind_getReferencedProducers},
	{"getParticleSize", &luna_wrapper_proland_ParticleProducer::_bind_getParticleSize},
	{"updateParticles", &luna_wrapper_proland_ParticleProducer::_bind_updateParticles},
	{"moveParticles", &luna_wrapper_proland_ParticleProducer::_bind_moveParticles},
	{"removeOldParticles", &luna_wrapper_proland_ParticleProducer::_bind_removeOldParticles},
	{"addNewParticles", &luna_wrapper_proland_ParticleProducer::_bind_addNewParticles},
	{"newParticle", &luna_wrapper_proland_ParticleProducer::_bind_newParticle},
	{"base_toString", &luna_wrapper_proland_ParticleProducer::_bind_base_toString},
	{"base_getReferencedProducers", &luna_wrapper_proland_ParticleProducer::_bind_base_getReferencedProducers},
	{"base_getParticleSize", &luna_wrapper_proland_ParticleProducer::_bind_base_getParticleSize},
	{"base_updateParticles", &luna_wrapper_proland_ParticleProducer::_bind_base_updateParticles},
	{"base_moveParticles", &luna_wrapper_proland_ParticleProducer::_bind_base_moveParticles},
	{"base_removeOldParticles", &luna_wrapper_proland_ParticleProducer::_bind_base_removeOldParticles},
	{"base_addNewParticles", &luna_wrapper_proland_ParticleProducer::_bind_base_addNewParticles},
	{"base_newParticle", &luna_wrapper_proland_ParticleProducer::_bind_base_newParticle},
	{"fromVoid", &luna_wrapper_proland_ParticleProducer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_ParticleProducer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_ParticleProducer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::ParticleProducer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_ParticleProducer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::ParticleProducer >::enumValues[] = {
	{0,0}
};


