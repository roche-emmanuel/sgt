#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_ork_ptr_proland_TileProducer {
public:
	typedef Luna< std::vector< ork::ptr< proland::TileProducer > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75010607) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< ork::ptr< proland::TileProducer > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* rhs =(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		std::vector< ork::ptr< proland::TileProducer > >* self=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,1));
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

		std::vector< ork::ptr< proland::TileProducer > >* self=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< ork::ptr< proland::TileProducer > >");
		
		return luna_dynamicCast(L,converters,"std::vector< ork::ptr< proland::TileProducer > >",name);
	}

};

std::vector< ork::ptr< proland::TileProducer > >* LunaTraits< std::vector< ork::ptr< proland::TileProducer > > >::_bind_ctor(lua_State *L) {
	return new std::vector< ork::ptr< proland::TileProducer > >();
}

void LunaTraits< std::vector< ork::ptr< proland::TileProducer > > >::_bind_dtor(std::vector< ork::ptr< proland::TileProducer > >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< ork::ptr< proland::TileProducer > > >::className[] = "std_vector_ork_ptr_proland_TileProducer";
const char LunaTraits< std::vector< ork::ptr< proland::TileProducer > > >::fullName[] = "std::vector< ork::ptr< proland::TileProducer > >";
const char LunaTraits< std::vector< ork::ptr< proland::TileProducer > > >::moduleName[] = "land";
const char* LunaTraits< std::vector< ork::ptr< proland::TileProducer > > >::parents[] = {0};
const int LunaTraits< std::vector< ork::ptr< proland::TileProducer > > >::hash = 75010607;
const int LunaTraits< std::vector< ork::ptr< proland::TileProducer > > >::uniqueIDs[] = {75010607,0};

luna_RegType LunaTraits< std::vector< ork::ptr< proland::TileProducer > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_ork_ptr_proland_TileProducer::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_ork_ptr_proland_TileProducer::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< ork::ptr< proland::TileProducer > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< ork::ptr< proland::TileProducer > > >::enumValues[] = {
	{0,0}
};


