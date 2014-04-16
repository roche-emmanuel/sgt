#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_vector_ork_ptr_proland_HydroCurve {
public:
	typedef Luna< vector< ork::ptr< proland::HydroCurve > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,54471397) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(vector< ork::ptr< proland::HydroCurve > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		vector< ork::ptr< proland::HydroCurve > >* rhs =(Luna< vector< ork::ptr< proland::HydroCurve > > >::check(L,2));
		vector< ork::ptr< proland::HydroCurve > >* self=(Luna< vector< ork::ptr< proland::HydroCurve > > >::check(L,1));
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

		vector< ork::ptr< proland::HydroCurve > >* self=(Luna< vector< ork::ptr< proland::HydroCurve > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("vector< ork::ptr< proland::HydroCurve > >");
		
		return luna_dynamicCast(L,converters,"vector< ork::ptr< proland::HydroCurve > >",name);
	}

};

vector< ork::ptr< proland::HydroCurve > >* LunaTraits< vector< ork::ptr< proland::HydroCurve > > >::_bind_ctor(lua_State *L) {
	return new vector< ork::ptr< proland::HydroCurve > >();
}

void LunaTraits< vector< ork::ptr< proland::HydroCurve > > >::_bind_dtor(vector< ork::ptr< proland::HydroCurve > >* obj) {
	delete obj;
}

const char LunaTraits< vector< ork::ptr< proland::HydroCurve > > >::className[] = "vector_ork_ptr_proland_HydroCurve";
const char LunaTraits< vector< ork::ptr< proland::HydroCurve > > >::fullName[] = "vector< ork::ptr< proland::HydroCurve > >";
const char LunaTraits< vector< ork::ptr< proland::HydroCurve > > >::moduleName[] = "land";
const char* LunaTraits< vector< ork::ptr< proland::HydroCurve > > >::parents[] = {0};
const int LunaTraits< vector< ork::ptr< proland::HydroCurve > > >::hash = 54471397;
const int LunaTraits< vector< ork::ptr< proland::HydroCurve > > >::uniqueIDs[] = {54471397,0};

luna_RegType LunaTraits< vector< ork::ptr< proland::HydroCurve > > >::methods[] = {
	{"dynCast", &luna_wrapper_vector_ork_ptr_proland_HydroCurve::_bind_dynCast},
	{"__eq", &luna_wrapper_vector_ork_ptr_proland_HydroCurve::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< vector< ork::ptr< proland::HydroCurve > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< vector< ork::ptr< proland::HydroCurve > > >::enumValues[] = {
	{0,0}
};


