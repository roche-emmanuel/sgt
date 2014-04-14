#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_TerrainParticleLayer.h>

class luna_wrapper_proland_TerrainParticleLayer {
public:
	typedef Luna< proland::TerrainParticleLayer > luna_t;

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

		proland::TerrainParticleLayer* self= (proland::TerrainParticleLayer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TerrainParticleLayer >::push(L,self,false);
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
		//proland::TerrainParticleLayer* ptr= dynamic_cast< proland::TerrainParticleLayer* >(Luna< ork::Object >::check(L,1));
		proland::TerrainParticleLayer* ptr= luna_caster< ork::Object, proland::TerrainParticleLayer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::TerrainParticleLayer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13829843) ) return false;
		if( (!(Luna< std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,13829843) ) return false;
		if( (!(Luna< std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getTerrainParticle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,93158916)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTerrainInfos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getParticleSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::TerrainParticleLayer::TerrainParticleLayer(std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > infos)
	static proland::TerrainParticleLayer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::TerrainParticleLayer::TerrainParticleLayer(std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > infos) function, expected prototype:\nproland::TerrainParticleLayer::TerrainParticleLayer(std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > infos)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * >* infos_ptr=(Luna< std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > >::check(L,1));
		if( !infos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg infos in proland::TerrainParticleLayer::TerrainParticleLayer function");
		}
		std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > infos=*infos_ptr;

		return new proland::TerrainParticleLayer(infos);
	}

	// proland::TerrainParticleLayer::TerrainParticleLayer(lua_Table * data, std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > infos)
	static proland::TerrainParticleLayer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::TerrainParticleLayer::TerrainParticleLayer(lua_Table * data, std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > infos) function, expected prototype:\nproland::TerrainParticleLayer::TerrainParticleLayer(lua_Table * data, std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > infos)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * >* infos_ptr=(Luna< std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > >::check(L,2));
		if( !infos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg infos in proland::TerrainParticleLayer::TerrainParticleLayer function");
		}
		std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > infos=*infos_ptr;

		return new wrapper_proland_TerrainParticleLayer(L,NULL, infos);
	}

	// Overload binder for proland::TerrainParticleLayer::TerrainParticleLayer
	static proland::TerrainParticleLayer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TerrainParticleLayer, cannot match any of the overloads for function TerrainParticleLayer:\n  TerrainParticleLayer(std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * >)\n  TerrainParticleLayer(lua_Table *, std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * >)\n");
		return NULL;
	}


	// Function binds:
	// proland::TerrainParticleLayer::TerrainParticle * proland::TerrainParticleLayer::getTerrainParticle(proland::ParticleStorage::Particle * p)
	static int _bind_getTerrainParticle(lua_State *L) {
		if (!_lg_typecheck_getTerrainParticle(L)) {
			luaL_error(L, "luna typecheck failed in proland::TerrainParticleLayer::TerrainParticle * proland::TerrainParticleLayer::getTerrainParticle(proland::ParticleStorage::Particle * p) function, expected prototype:\nproland::TerrainParticleLayer::TerrainParticle * proland::TerrainParticleLayer::getTerrainParticle(proland::ParticleStorage::Particle * p)\nClass arguments details:\narg 1 ID = 93158916\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::ParticleStorage::Particle* p=(Luna< proland::ParticleStorage::Particle >::check(L,2));

		proland::TerrainParticleLayer* self=Luna< ork::Object >::checkSubType< proland::TerrainParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TerrainParticleLayer::TerrainParticle * proland::TerrainParticleLayer::getTerrainParticle(proland::ParticleStorage::Particle *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TerrainParticleLayer::TerrainParticle * lret = self->getTerrainParticle(p);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TerrainParticleLayer::TerrainParticle >::push(L,lret,false);

		return 1;
	}

	// std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > proland::TerrainParticleLayer::getTerrainInfos()
	static int _bind_getTerrainInfos(lua_State *L) {
		if (!_lg_typecheck_getTerrainInfos(L)) {
			luaL_error(L, "luna typecheck failed in std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > proland::TerrainParticleLayer::getTerrainInfos() function, expected prototype:\nstd::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > proland::TerrainParticleLayer::getTerrainInfos()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainParticleLayer* self=Luna< ork::Object >::checkSubType< proland::TerrainParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > proland::TerrainParticleLayer::getTerrainInfos(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > stack_lret = self->getTerrainInfos();
		std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * >* lret = new std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * >(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > >::push(L,lret,true);

		return 1;
	}

	// void proland::TerrainParticleLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainParticleLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::TerrainParticleLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::TerrainParticleLayer::getReferencedProducers function");
		}
		std::vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::TerrainParticleLayer* self=Luna< ork::Object >::checkSubType< proland::TerrainParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainParticleLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getReferencedProducers(producers);

		return 0;
	}

	// void proland::TerrainParticleLayer::moveParticles(double dt)
	static int _bind_moveParticles(lua_State *L) {
		if (!_lg_typecheck_moveParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainParticleLayer::moveParticles(double dt) function, expected prototype:\nvoid proland::TerrainParticleLayer::moveParticles(double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double dt=(double)lua_tonumber(L,2);

		proland::TerrainParticleLayer* self=Luna< ork::Object >::checkSubType< proland::TerrainParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainParticleLayer::moveParticles(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->moveParticles(dt);

		return 0;
	}

	// const char * proland::TerrainParticleLayer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::TerrainParticleLayer::base_toString() function, expected prototype:\nconst char * proland::TerrainParticleLayer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainParticleLayer* self=Luna< ork::Object >::checkSubType< proland::TerrainParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::TerrainParticleLayer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TerrainParticleLayer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// int proland::TerrainParticleLayer::base_getParticleSize()
	static int _bind_base_getParticleSize(lua_State *L) {
		if (!_lg_typecheck_base_getParticleSize(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TerrainParticleLayer::base_getParticleSize() function, expected prototype:\nint proland::TerrainParticleLayer::base_getParticleSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainParticleLayer* self=Luna< ork::Object >::checkSubType< proland::TerrainParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TerrainParticleLayer::base_getParticleSize(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->TerrainParticleLayer::getParticleSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::TerrainParticleLayer::base_removeOldParticles()
	static int _bind_base_removeOldParticles(lua_State *L) {
		if (!_lg_typecheck_base_removeOldParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainParticleLayer::base_removeOldParticles() function, expected prototype:\nvoid proland::TerrainParticleLayer::base_removeOldParticles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainParticleLayer* self=Luna< ork::Object >::checkSubType< proland::TerrainParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainParticleLayer::base_removeOldParticles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TerrainParticleLayer::removeOldParticles();

		return 0;
	}

	// void proland::TerrainParticleLayer::base_addNewParticles()
	static int _bind_base_addNewParticles(lua_State *L) {
		if (!_lg_typecheck_base_addNewParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainParticleLayer::base_addNewParticles() function, expected prototype:\nvoid proland::TerrainParticleLayer::base_addNewParticles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainParticleLayer* self=Luna< ork::Object >::checkSubType< proland::TerrainParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainParticleLayer::base_addNewParticles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TerrainParticleLayer::addNewParticles();

		return 0;
	}

	// void proland::TerrainParticleLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainParticleLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::TerrainParticleLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::TerrainParticleLayer::base_getReferencedProducers function");
		}
		std::vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::TerrainParticleLayer* self=Luna< ork::Object >::checkSubType< proland::TerrainParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainParticleLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TerrainParticleLayer::getReferencedProducers(producers);

		return 0;
	}

	// void proland::TerrainParticleLayer::base_moveParticles(double dt)
	static int _bind_base_moveParticles(lua_State *L) {
		if (!_lg_typecheck_base_moveParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainParticleLayer::base_moveParticles(double dt) function, expected prototype:\nvoid proland::TerrainParticleLayer::base_moveParticles(double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double dt=(double)lua_tonumber(L,2);

		proland::TerrainParticleLayer* self=Luna< ork::Object >::checkSubType< proland::TerrainParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainParticleLayer::base_moveParticles(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TerrainParticleLayer::moveParticles(dt);

		return 0;
	}


	// Operator binds:

};

proland::TerrainParticleLayer* LunaTraits< proland::TerrainParticleLayer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TerrainParticleLayer::_bind_ctor(L);
}

void LunaTraits< proland::TerrainParticleLayer >::_bind_dtor(proland::TerrainParticleLayer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::TerrainParticleLayer >::className[] = "TerrainParticleLayer";
const char LunaTraits< proland::TerrainParticleLayer >::fullName[] = "proland::TerrainParticleLayer";
const char LunaTraits< proland::TerrainParticleLayer >::moduleName[] = "proland";
const char* LunaTraits< proland::TerrainParticleLayer >::parents[] = {"proland.ParticleLayer", 0};
const int LunaTraits< proland::TerrainParticleLayer >::hash = 31948508;
const int LunaTraits< proland::TerrainParticleLayer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::TerrainParticleLayer >::methods[] = {
	{"getTerrainParticle", &luna_wrapper_proland_TerrainParticleLayer::_bind_getTerrainParticle},
	{"getTerrainInfos", &luna_wrapper_proland_TerrainParticleLayer::_bind_getTerrainInfos},
	{"getReferencedProducers", &luna_wrapper_proland_TerrainParticleLayer::_bind_getReferencedProducers},
	{"moveParticles", &luna_wrapper_proland_TerrainParticleLayer::_bind_moveParticles},
	{"base_toString", &luna_wrapper_proland_TerrainParticleLayer::_bind_base_toString},
	{"base_getParticleSize", &luna_wrapper_proland_TerrainParticleLayer::_bind_base_getParticleSize},
	{"base_removeOldParticles", &luna_wrapper_proland_TerrainParticleLayer::_bind_base_removeOldParticles},
	{"base_addNewParticles", &luna_wrapper_proland_TerrainParticleLayer::_bind_base_addNewParticles},
	{"base_getReferencedProducers", &luna_wrapper_proland_TerrainParticleLayer::_bind_base_getReferencedProducers},
	{"base_moveParticles", &luna_wrapper_proland_TerrainParticleLayer::_bind_base_moveParticles},
	{"fromVoid", &luna_wrapper_proland_TerrainParticleLayer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TerrainParticleLayer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_TerrainParticleLayer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TerrainParticleLayer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_TerrainParticleLayer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TerrainParticleLayer >::enumValues[] = {
	{0,0}
};


