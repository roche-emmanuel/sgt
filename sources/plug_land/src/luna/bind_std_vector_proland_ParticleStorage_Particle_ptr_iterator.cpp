#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_proland_ParticleStorage_Particle_ptr_iterator {
public:
	typedef Luna< std::vector< proland::ParticleStorage::Particle * >::iterator > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1587166) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< proland::ParticleStorage::Particle * >::iterator*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< proland::ParticleStorage::Particle * >::iterator* rhs =(Luna< std::vector< proland::ParticleStorage::Particle * >::iterator >::check(L,2));
		std::vector< proland::ParticleStorage::Particle * >::iterator* self=(Luna< std::vector< proland::ParticleStorage::Particle * >::iterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		std::vector< proland::ParticleStorage::Particle * >::iterator* self=(Luna< std::vector< proland::ParticleStorage::Particle * >::iterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< proland::ParticleStorage::Particle * >::iterator");
		
		return luna_dynamicCast(L,converters,"std::vector< proland::ParticleStorage::Particle * >::iterator",name);
	}

};

std::vector< proland::ParticleStorage::Particle * >::iterator* LunaTraits< std::vector< proland::ParticleStorage::Particle * >::iterator >::_bind_ctor(lua_State *L) {
	return new std::vector< proland::ParticleStorage::Particle * >::iterator();
}

void LunaTraits< std::vector< proland::ParticleStorage::Particle * >::iterator >::_bind_dtor(std::vector< proland::ParticleStorage::Particle * >::iterator* obj) {
	delete obj;
}

const char LunaTraits< std::vector< proland::ParticleStorage::Particle * >::iterator >::className[] = "std_vector_proland_ParticleStorage_Particle_ptr_iterator";
const char LunaTraits< std::vector< proland::ParticleStorage::Particle * >::iterator >::fullName[] = "std::vector< proland::ParticleStorage::Particle * >::iterator";
const char LunaTraits< std::vector< proland::ParticleStorage::Particle * >::iterator >::moduleName[] = "land";
const char* LunaTraits< std::vector< proland::ParticleStorage::Particle * >::iterator >::parents[] = {0};
const int LunaTraits< std::vector< proland::ParticleStorage::Particle * >::iterator >::hash = 1587166;
const int LunaTraits< std::vector< proland::ParticleStorage::Particle * >::iterator >::uniqueIDs[] = {1587166,0};

luna_RegType LunaTraits< std::vector< proland::ParticleStorage::Particle * >::iterator >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_proland_ParticleStorage_Particle_ptr_iterator::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_proland_ParticleStorage_Particle_ptr_iterator::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< proland::ParticleStorage::Particle * >::iterator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< proland::ParticleStorage::Particle * >::iterator >::enumValues[] = {
	{0,0}
};


