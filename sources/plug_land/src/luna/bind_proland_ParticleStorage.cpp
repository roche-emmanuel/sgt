#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_ParticleStorage.h>

class luna_wrapper_proland_ParticleStorage {
public:
	typedef Luna< proland::ParticleStorage > luna_t;

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

		proland::ParticleStorage* self= (proland::ParticleStorage*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::ParticleStorage >::push(L,self,false);
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
		//proland::ParticleStorage* ptr= dynamic_cast< proland::ParticleStorage* >(Luna< ork::Object >::check(L,1));
		proland::ParticleStorage* ptr= luna_caster< ork::Object, proland::ParticleStorage >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::ParticleStorage >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_initCpuStorage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_initGpuStorage(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCapacity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGpuStorage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticlesCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParticles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_end(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParticleIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,93158916)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_newParticle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_deleteParticle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,93158916)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::ParticleStorage::ParticleStorage(int capacity, bool pack)
	static proland::ParticleStorage* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::ParticleStorage::ParticleStorage(int capacity, bool pack) function, expected prototype:\nproland::ParticleStorage::ParticleStorage(int capacity, bool pack)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int capacity=(int)lua_tointeger(L,1);
		bool pack=(bool)(lua_toboolean(L,2)==1);

		return new proland::ParticleStorage(capacity, pack);
	}

	// proland::ParticleStorage::ParticleStorage(lua_Table * data, int capacity, bool pack)
	static proland::ParticleStorage* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::ParticleStorage::ParticleStorage(lua_Table * data, int capacity, bool pack) function, expected prototype:\nproland::ParticleStorage::ParticleStorage(lua_Table * data, int capacity, bool pack)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int capacity=(int)lua_tointeger(L,2);
		bool pack=(bool)(lua_toboolean(L,3)==1);

		return new wrapper_proland_ParticleStorage(L,NULL, capacity, pack);
	}

	// Overload binder for proland::ParticleStorage::ParticleStorage
	static proland::ParticleStorage* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ParticleStorage, cannot match any of the overloads for function ParticleStorage:\n  ParticleStorage(int, bool)\n  ParticleStorage(lua_Table *, int, bool)\n");
		return NULL;
	}


	// Function binds:
	// void proland::ParticleStorage::initCpuStorage(int particleSize)
	static int _bind_initCpuStorage(lua_State *L) {
		if (!_lg_typecheck_initCpuStorage(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleStorage::initCpuStorage(int particleSize) function, expected prototype:\nvoid proland::ParticleStorage::initCpuStorage(int particleSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int particleSize=(int)lua_tointeger(L,2);

		proland::ParticleStorage* self=Luna< ork::Object >::checkSubType< proland::ParticleStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleStorage::initCpuStorage(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->initCpuStorage(particleSize);

		return 0;
	}

	// void proland::ParticleStorage::initGpuStorage(const std::string & name, ork::TextureInternalFormat f, int components)
	static int _bind_initGpuStorage(lua_State *L) {
		if (!_lg_typecheck_initGpuStorage(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleStorage::initGpuStorage(const std::string & name, ork::TextureInternalFormat f, int components) function, expected prototype:\nvoid proland::ParticleStorage::initGpuStorage(const std::string & name, ork::TextureInternalFormat f, int components)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		ork::TextureInternalFormat f=(ork::TextureInternalFormat)lua_tointeger(L,3);
		int components=(int)lua_tointeger(L,4);

		proland::ParticleStorage* self=Luna< ork::Object >::checkSubType< proland::ParticleStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleStorage::initGpuStorage(const std::string &, ork::TextureInternalFormat, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->initGpuStorage(name, f, components);

		return 0;
	}

	// int proland::ParticleStorage::getCapacity()
	static int _bind_getCapacity(lua_State *L) {
		if (!_lg_typecheck_getCapacity(L)) {
			luaL_error(L, "luna typecheck failed in int proland::ParticleStorage::getCapacity() function, expected prototype:\nint proland::ParticleStorage::getCapacity()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleStorage* self=Luna< ork::Object >::checkSubType< proland::ParticleStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::ParticleStorage::getCapacity(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getCapacity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::ptr< ork::TextureBuffer > proland::ParticleStorage::getGpuStorage(const std::string & name)
	static int _bind_getGpuStorage(lua_State *L) {
		if (!_lg_typecheck_getGpuStorage(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::TextureBuffer > proland::ParticleStorage::getGpuStorage(const std::string & name) function, expected prototype:\nork::ptr< ork::TextureBuffer > proland::ParticleStorage::getGpuStorage(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		proland::ParticleStorage* self=Luna< ork::Object >::checkSubType< proland::ParticleStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::TextureBuffer > proland::ParticleStorage::getGpuStorage(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::TextureBuffer > lret = self->getGpuStorage(name);
		Luna< ork::TextureBuffer >::push(L,lret.get(),false);

		return 1;
	}

	// int proland::ParticleStorage::getParticlesCount()
	static int _bind_getParticlesCount(lua_State *L) {
		if (!_lg_typecheck_getParticlesCount(L)) {
			luaL_error(L, "luna typecheck failed in int proland::ParticleStorage::getParticlesCount() function, expected prototype:\nint proland::ParticleStorage::getParticlesCount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleStorage* self=Luna< ork::Object >::checkSubType< proland::ParticleStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::ParticleStorage::getParticlesCount(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getParticlesCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// std::vector< proland::ParticleStorage::Particle * >::iterator proland::ParticleStorage::getParticles()
	static int _bind_getParticles(lua_State *L) {
		if (!_lg_typecheck_getParticles(L)) {
			luaL_error(L, "luna typecheck failed in std::vector< proland::ParticleStorage::Particle * >::iterator proland::ParticleStorage::getParticles() function, expected prototype:\nstd::vector< proland::ParticleStorage::Particle * >::iterator proland::ParticleStorage::getParticles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleStorage* self=Luna< ork::Object >::checkSubType< proland::ParticleStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::vector< proland::ParticleStorage::Particle * >::iterator proland::ParticleStorage::getParticles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::vector< proland::ParticleStorage::Particle * >::iterator stack_lret = self->getParticles();
		std::vector< proland::ParticleStorage::Particle * >::iterator* lret = new std::vector< proland::ParticleStorage::Particle * >::iterator(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::vector< proland::ParticleStorage::Particle * >::iterator >::push(L,lret,true);

		return 1;
	}

	// std::vector< proland::ParticleStorage::Particle * >::iterator proland::ParticleStorage::end()
	static int _bind_end(lua_State *L) {
		if (!_lg_typecheck_end(L)) {
			luaL_error(L, "luna typecheck failed in std::vector< proland::ParticleStorage::Particle * >::iterator proland::ParticleStorage::end() function, expected prototype:\nstd::vector< proland::ParticleStorage::Particle * >::iterator proland::ParticleStorage::end()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleStorage* self=Luna< ork::Object >::checkSubType< proland::ParticleStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::vector< proland::ParticleStorage::Particle * >::iterator proland::ParticleStorage::end(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::vector< proland::ParticleStorage::Particle * >::iterator stack_lret = self->end();
		std::vector< proland::ParticleStorage::Particle * >::iterator* lret = new std::vector< proland::ParticleStorage::Particle * >::iterator(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::vector< proland::ParticleStorage::Particle * >::iterator >::push(L,lret,true);

		return 1;
	}

	// int proland::ParticleStorage::getParticleIndex(proland::ParticleStorage::Particle * p)
	static int _bind_getParticleIndex(lua_State *L) {
		if (!_lg_typecheck_getParticleIndex(L)) {
			luaL_error(L, "luna typecheck failed in int proland::ParticleStorage::getParticleIndex(proland::ParticleStorage::Particle * p) function, expected prototype:\nint proland::ParticleStorage::getParticleIndex(proland::ParticleStorage::Particle * p)\nClass arguments details:\narg 1 ID = 93158916\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::ParticleStorage::Particle* p=(Luna< proland::ParticleStorage::Particle >::check(L,2));

		proland::ParticleStorage* self=Luna< ork::Object >::checkSubType< proland::ParticleStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::ParticleStorage::getParticleIndex(proland::ParticleStorage::Particle *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getParticleIndex(p);
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::ParticleStorage::Particle * proland::ParticleStorage::newParticle()
	static int _bind_newParticle(lua_State *L) {
		if (!_lg_typecheck_newParticle(L)) {
			luaL_error(L, "luna typecheck failed in proland::ParticleStorage::Particle * proland::ParticleStorage::newParticle() function, expected prototype:\nproland::ParticleStorage::Particle * proland::ParticleStorage::newParticle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleStorage* self=Luna< ork::Object >::checkSubType< proland::ParticleStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::ParticleStorage::Particle * proland::ParticleStorage::newParticle(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::ParticleStorage::Particle * lret = self->newParticle();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::ParticleStorage::Particle >::push(L,lret,false);

		return 1;
	}

	// void proland::ParticleStorage::deleteParticle(proland::ParticleStorage::Particle * p)
	static int _bind_deleteParticle(lua_State *L) {
		if (!_lg_typecheck_deleteParticle(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleStorage::deleteParticle(proland::ParticleStorage::Particle * p) function, expected prototype:\nvoid proland::ParticleStorage::deleteParticle(proland::ParticleStorage::Particle * p)\nClass arguments details:\narg 1 ID = 93158916\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::ParticleStorage::Particle* p=(Luna< proland::ParticleStorage::Particle >::check(L,2));

		proland::ParticleStorage* self=Luna< ork::Object >::checkSubType< proland::ParticleStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleStorage::deleteParticle(proland::ParticleStorage::Particle *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->deleteParticle(p);

		return 0;
	}

	// void proland::ParticleStorage::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleStorage::clear() function, expected prototype:\nvoid proland::ParticleStorage::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleStorage* self=Luna< ork::Object >::checkSubType< proland::ParticleStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleStorage::clear(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// const char * proland::ParticleStorage::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::ParticleStorage::base_toString() function, expected prototype:\nconst char * proland::ParticleStorage::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleStorage* self=Luna< ork::Object >::checkSubType< proland::ParticleStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::ParticleStorage::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ParticleStorage::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

proland::ParticleStorage* LunaTraits< proland::ParticleStorage >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_ParticleStorage::_bind_ctor(L);
}

void LunaTraits< proland::ParticleStorage >::_bind_dtor(proland::ParticleStorage* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::ParticleStorage >::className[] = "ParticleStorage";
const char LunaTraits< proland::ParticleStorage >::fullName[] = "proland::ParticleStorage";
const char LunaTraits< proland::ParticleStorage >::moduleName[] = "proland";
const char* LunaTraits< proland::ParticleStorage >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::ParticleStorage >::hash = 71396908;
const int LunaTraits< proland::ParticleStorage >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::ParticleStorage >::methods[] = {
	{"initCpuStorage", &luna_wrapper_proland_ParticleStorage::_bind_initCpuStorage},
	{"initGpuStorage", &luna_wrapper_proland_ParticleStorage::_bind_initGpuStorage},
	{"getCapacity", &luna_wrapper_proland_ParticleStorage::_bind_getCapacity},
	{"getGpuStorage", &luna_wrapper_proland_ParticleStorage::_bind_getGpuStorage},
	{"getParticlesCount", &luna_wrapper_proland_ParticleStorage::_bind_getParticlesCount},
	{"getParticles", &luna_wrapper_proland_ParticleStorage::_bind_getParticles},
	{"end", &luna_wrapper_proland_ParticleStorage::_bind_end},
	{"getParticleIndex", &luna_wrapper_proland_ParticleStorage::_bind_getParticleIndex},
	{"newParticle", &luna_wrapper_proland_ParticleStorage::_bind_newParticle},
	{"deleteParticle", &luna_wrapper_proland_ParticleStorage::_bind_deleteParticle},
	{"clear", &luna_wrapper_proland_ParticleStorage::_bind_clear},
	{"base_toString", &luna_wrapper_proland_ParticleStorage::_bind_base_toString},
	{"fromVoid", &luna_wrapper_proland_ParticleStorage::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_ParticleStorage::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_ParticleStorage::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::ParticleStorage >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_ParticleStorage::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::ParticleStorage >::enumValues[] = {
	{0,0}
};


