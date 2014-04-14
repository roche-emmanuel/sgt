#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_RandomParticleLayer.h>

class luna_wrapper_proland_RandomParticleLayer {
public:
	typedef Luna< proland::RandomParticleLayer > luna_t;

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

		proland::RandomParticleLayer* self= (proland::RandomParticleLayer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::RandomParticleLayer >::push(L,self,false);
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
		//proland::RandomParticleLayer* ptr= dynamic_cast< proland::RandomParticleLayer* >(Luna< ork::Object >::check(L,1));
		proland::RandomParticleLayer* ptr= luna_caster< ork::Object, proland::RandomParticleLayer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::RandomParticleLayer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63151942) ) return false;
		if( (!(Luna< ork::box3f >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,63151942) ) return false;
		if( (!(Luna< ork::box3f >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getRandomParticle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,93158916)) ) return false;
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
	// proland::RandomParticleLayer::RandomParticleLayer(ork::box3f bounds)
	static proland::RandomParticleLayer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::RandomParticleLayer::RandomParticleLayer(ork::box3f bounds) function, expected prototype:\nproland::RandomParticleLayer::RandomParticleLayer(ork::box3f bounds)\nClass arguments details:\narg 1 ID = 63151942\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::box3f* bounds_ptr=(Luna< ork::box3f >::check(L,1));
		if( !bounds_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bounds in proland::RandomParticleLayer::RandomParticleLayer function");
		}
		ork::box3f bounds=*bounds_ptr;

		return new proland::RandomParticleLayer(bounds);
	}

	// proland::RandomParticleLayer::RandomParticleLayer(lua_Table * data, ork::box3f bounds)
	static proland::RandomParticleLayer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::RandomParticleLayer::RandomParticleLayer(lua_Table * data, ork::box3f bounds) function, expected prototype:\nproland::RandomParticleLayer::RandomParticleLayer(lua_Table * data, ork::box3f bounds)\nClass arguments details:\narg 2 ID = 63151942\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::box3f* bounds_ptr=(Luna< ork::box3f >::check(L,2));
		if( !bounds_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bounds in proland::RandomParticleLayer::RandomParticleLayer function");
		}
		ork::box3f bounds=*bounds_ptr;

		return new wrapper_proland_RandomParticleLayer(L,NULL, bounds);
	}

	// Overload binder for proland::RandomParticleLayer::RandomParticleLayer
	static proland::RandomParticleLayer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function RandomParticleLayer, cannot match any of the overloads for function RandomParticleLayer:\n  RandomParticleLayer(ork::box3f)\n  RandomParticleLayer(lua_Table *, ork::box3f)\n");
		return NULL;
	}


	// Function binds:
	// proland::RandomParticleLayer::RandomParticle * proland::RandomParticleLayer::getRandomParticle(proland::ParticleStorage::Particle * p)
	static int _bind_getRandomParticle(lua_State *L) {
		if (!_lg_typecheck_getRandomParticle(L)) {
			luaL_error(L, "luna typecheck failed in proland::RandomParticleLayer::RandomParticle * proland::RandomParticleLayer::getRandomParticle(proland::ParticleStorage::Particle * p) function, expected prototype:\nproland::RandomParticleLayer::RandomParticle * proland::RandomParticleLayer::getRandomParticle(proland::ParticleStorage::Particle * p)\nClass arguments details:\narg 1 ID = 93158916\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::ParticleStorage::Particle* p=(Luna< proland::ParticleStorage::Particle >::check(L,2));

		proland::RandomParticleLayer* self=Luna< ork::Object >::checkSubType< proland::RandomParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::RandomParticleLayer::RandomParticle * proland::RandomParticleLayer::getRandomParticle(proland::ParticleStorage::Particle *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::RandomParticleLayer::RandomParticle * lret = self->getRandomParticle(p);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::RandomParticleLayer::RandomParticle >::push(L,lret,false);

		return 1;
	}

	// void proland::RandomParticleLayer::addNewParticles()
	static int _bind_addNewParticles(lua_State *L) {
		if (!_lg_typecheck_addNewParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RandomParticleLayer::addNewParticles() function, expected prototype:\nvoid proland::RandomParticleLayer::addNewParticles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::RandomParticleLayer* self=Luna< ork::Object >::checkSubType< proland::RandomParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RandomParticleLayer::addNewParticles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addNewParticles();

		return 0;
	}

	// const char * proland::RandomParticleLayer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::RandomParticleLayer::base_toString() function, expected prototype:\nconst char * proland::RandomParticleLayer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::RandomParticleLayer* self=Luna< ork::Object >::checkSubType< proland::RandomParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::RandomParticleLayer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->RandomParticleLayer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// int proland::RandomParticleLayer::base_getParticleSize()
	static int _bind_base_getParticleSize(lua_State *L) {
		if (!_lg_typecheck_base_getParticleSize(L)) {
			luaL_error(L, "luna typecheck failed in int proland::RandomParticleLayer::base_getParticleSize() function, expected prototype:\nint proland::RandomParticleLayer::base_getParticleSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::RandomParticleLayer* self=Luna< ork::Object >::checkSubType< proland::RandomParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::RandomParticleLayer::base_getParticleSize(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->RandomParticleLayer::getParticleSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::RandomParticleLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RandomParticleLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::RandomParticleLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::RandomParticleLayer::base_getReferencedProducers function");
		}
		std::vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::RandomParticleLayer* self=Luna< ork::Object >::checkSubType< proland::RandomParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RandomParticleLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RandomParticleLayer::getReferencedProducers(producers);

		return 0;
	}

	// void proland::RandomParticleLayer::base_moveParticles(double dt)
	static int _bind_base_moveParticles(lua_State *L) {
		if (!_lg_typecheck_base_moveParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RandomParticleLayer::base_moveParticles(double dt) function, expected prototype:\nvoid proland::RandomParticleLayer::base_moveParticles(double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double dt=(double)lua_tonumber(L,2);

		proland::RandomParticleLayer* self=Luna< ork::Object >::checkSubType< proland::RandomParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RandomParticleLayer::base_moveParticles(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RandomParticleLayer::moveParticles(dt);

		return 0;
	}

	// void proland::RandomParticleLayer::base_removeOldParticles()
	static int _bind_base_removeOldParticles(lua_State *L) {
		if (!_lg_typecheck_base_removeOldParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RandomParticleLayer::base_removeOldParticles() function, expected prototype:\nvoid proland::RandomParticleLayer::base_removeOldParticles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::RandomParticleLayer* self=Luna< ork::Object >::checkSubType< proland::RandomParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RandomParticleLayer::base_removeOldParticles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RandomParticleLayer::removeOldParticles();

		return 0;
	}

	// void proland::RandomParticleLayer::base_addNewParticles()
	static int _bind_base_addNewParticles(lua_State *L) {
		if (!_lg_typecheck_base_addNewParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RandomParticleLayer::base_addNewParticles() function, expected prototype:\nvoid proland::RandomParticleLayer::base_addNewParticles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::RandomParticleLayer* self=Luna< ork::Object >::checkSubType< proland::RandomParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RandomParticleLayer::base_addNewParticles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RandomParticleLayer::addNewParticles();

		return 0;
	}


	// Operator binds:

};

proland::RandomParticleLayer* LunaTraits< proland::RandomParticleLayer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_RandomParticleLayer::_bind_ctor(L);
}

void LunaTraits< proland::RandomParticleLayer >::_bind_dtor(proland::RandomParticleLayer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::RandomParticleLayer >::className[] = "RandomParticleLayer";
const char LunaTraits< proland::RandomParticleLayer >::fullName[] = "proland::RandomParticleLayer";
const char LunaTraits< proland::RandomParticleLayer >::moduleName[] = "proland";
const char* LunaTraits< proland::RandomParticleLayer >::parents[] = {"proland.ParticleLayer", 0};
const int LunaTraits< proland::RandomParticleLayer >::hash = 11750937;
const int LunaTraits< proland::RandomParticleLayer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::RandomParticleLayer >::methods[] = {
	{"getRandomParticle", &luna_wrapper_proland_RandomParticleLayer::_bind_getRandomParticle},
	{"addNewParticles", &luna_wrapper_proland_RandomParticleLayer::_bind_addNewParticles},
	{"base_toString", &luna_wrapper_proland_RandomParticleLayer::_bind_base_toString},
	{"base_getParticleSize", &luna_wrapper_proland_RandomParticleLayer::_bind_base_getParticleSize},
	{"base_getReferencedProducers", &luna_wrapper_proland_RandomParticleLayer::_bind_base_getReferencedProducers},
	{"base_moveParticles", &luna_wrapper_proland_RandomParticleLayer::_bind_base_moveParticles},
	{"base_removeOldParticles", &luna_wrapper_proland_RandomParticleLayer::_bind_base_removeOldParticles},
	{"base_addNewParticles", &luna_wrapper_proland_RandomParticleLayer::_bind_base_addNewParticles},
	{"fromVoid", &luna_wrapper_proland_RandomParticleLayer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_RandomParticleLayer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_RandomParticleLayer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::RandomParticleLayer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_RandomParticleLayer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::RandomParticleLayer >::enumValues[] = {
	{0,0}
};


