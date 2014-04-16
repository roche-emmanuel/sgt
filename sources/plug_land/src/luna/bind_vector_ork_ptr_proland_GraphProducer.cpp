#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_vector_ork_ptr_proland_GraphProducer {
public:
	typedef Luna< vector< ork::ptr< proland::GraphProducer > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,73900203) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(vector< ork::ptr< proland::GraphProducer > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		vector< ork::ptr< proland::GraphProducer > >* rhs =(Luna< vector< ork::ptr< proland::GraphProducer > > >::check(L,2));
		vector< ork::ptr< proland::GraphProducer > >* self=(Luna< vector< ork::ptr< proland::GraphProducer > > >::check(L,1));
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

		vector< ork::ptr< proland::GraphProducer > >* self=(Luna< vector< ork::ptr< proland::GraphProducer > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("vector< ork::ptr< proland::GraphProducer > >");
		
		return luna_dynamicCast(L,converters,"vector< ork::ptr< proland::GraphProducer > >",name);
	}

};

vector< ork::ptr< proland::GraphProducer > >* LunaTraits< vector< ork::ptr< proland::GraphProducer > > >::_bind_ctor(lua_State *L) {
	return new vector< ork::ptr< proland::GraphProducer > >();
}

void LunaTraits< vector< ork::ptr< proland::GraphProducer > > >::_bind_dtor(vector< ork::ptr< proland::GraphProducer > >* obj) {
	delete obj;
}

const char LunaTraits< vector< ork::ptr< proland::GraphProducer > > >::className[] = "vector_ork_ptr_proland_GraphProducer";
const char LunaTraits< vector< ork::ptr< proland::GraphProducer > > >::fullName[] = "vector< ork::ptr< proland::GraphProducer > >";
const char LunaTraits< vector< ork::ptr< proland::GraphProducer > > >::moduleName[] = "land";
const char* LunaTraits< vector< ork::ptr< proland::GraphProducer > > >::parents[] = {0};
const int LunaTraits< vector< ork::ptr< proland::GraphProducer > > >::hash = 73900203;
const int LunaTraits< vector< ork::ptr< proland::GraphProducer > > >::uniqueIDs[] = {73900203,0};

luna_RegType LunaTraits< vector< ork::ptr< proland::GraphProducer > > >::methods[] = {
	{"dynCast", &luna_wrapper_vector_ork_ptr_proland_GraphProducer::_bind_dynCast},
	{"__eq", &luna_wrapper_vector_ork_ptr_proland_GraphProducer::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< vector< ork::ptr< proland::GraphProducer > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< vector< ork::ptr< proland::GraphProducer > > >::enumValues[] = {
	{0,0}
};


