#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_vector_ork_ptr_proland_PlantsProducer {
public:
	typedef Luna< vector< ork::ptr< proland::PlantsProducer > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,33653159) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(vector< ork::ptr< proland::PlantsProducer > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		vector< ork::ptr< proland::PlantsProducer > >* rhs =(Luna< vector< ork::ptr< proland::PlantsProducer > > >::check(L,2));
		vector< ork::ptr< proland::PlantsProducer > >* self=(Luna< vector< ork::ptr< proland::PlantsProducer > > >::check(L,1));
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

		vector< ork::ptr< proland::PlantsProducer > >* self=(Luna< vector< ork::ptr< proland::PlantsProducer > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("vector< ork::ptr< proland::PlantsProducer > >");
		
		return luna_dynamicCast(L,converters,"vector< ork::ptr< proland::PlantsProducer > >",name);
	}

};

vector< ork::ptr< proland::PlantsProducer > >* LunaTraits< vector< ork::ptr< proland::PlantsProducer > > >::_bind_ctor(lua_State *L) {
	return new vector< ork::ptr< proland::PlantsProducer > >();
}

void LunaTraits< vector< ork::ptr< proland::PlantsProducer > > >::_bind_dtor(vector< ork::ptr< proland::PlantsProducer > >* obj) {
	delete obj;
}

const char LunaTraits< vector< ork::ptr< proland::PlantsProducer > > >::className[] = "vector_ork_ptr_proland_PlantsProducer";
const char LunaTraits< vector< ork::ptr< proland::PlantsProducer > > >::fullName[] = "vector< ork::ptr< proland::PlantsProducer > >";
const char LunaTraits< vector< ork::ptr< proland::PlantsProducer > > >::moduleName[] = "land";
const char* LunaTraits< vector< ork::ptr< proland::PlantsProducer > > >::parents[] = {0};
const int LunaTraits< vector< ork::ptr< proland::PlantsProducer > > >::hash = 33653159;
const int LunaTraits< vector< ork::ptr< proland::PlantsProducer > > >::uniqueIDs[] = {33653159,0};

luna_RegType LunaTraits< vector< ork::ptr< proland::PlantsProducer > > >::methods[] = {
	{"dynCast", &luna_wrapper_vector_ork_ptr_proland_PlantsProducer::_bind_dynCast},
	{"__eq", &luna_wrapper_vector_ork_ptr_proland_PlantsProducer::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< vector< ork::ptr< proland::PlantsProducer > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< vector< ork::ptr< proland::PlantsProducer > > >::enumValues[] = {
	{0,0}
};


