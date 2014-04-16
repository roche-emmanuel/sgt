#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_vector_proland_Vertex {
public:
	typedef Luna< vector< proland::Vertex > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,49338298) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(vector< proland::Vertex >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		vector< proland::Vertex >* rhs =(Luna< vector< proland::Vertex > >::check(L,2));
		vector< proland::Vertex >* self=(Luna< vector< proland::Vertex > >::check(L,1));
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

		vector< proland::Vertex >* self=(Luna< vector< proland::Vertex > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("vector< proland::Vertex >");
		
		return luna_dynamicCast(L,converters,"vector< proland::Vertex >",name);
	}

};

vector< proland::Vertex >* LunaTraits< vector< proland::Vertex > >::_bind_ctor(lua_State *L) {
	return new vector< proland::Vertex >();
}

void LunaTraits< vector< proland::Vertex > >::_bind_dtor(vector< proland::Vertex >* obj) {
	delete obj;
}

const char LunaTraits< vector< proland::Vertex > >::className[] = "vector_proland_Vertex";
const char LunaTraits< vector< proland::Vertex > >::fullName[] = "vector< proland::Vertex >";
const char LunaTraits< vector< proland::Vertex > >::moduleName[] = "land";
const char* LunaTraits< vector< proland::Vertex > >::parents[] = {0};
const int LunaTraits< vector< proland::Vertex > >::hash = 49338298;
const int LunaTraits< vector< proland::Vertex > >::uniqueIDs[] = {49338298,0};

luna_RegType LunaTraits< vector< proland::Vertex > >::methods[] = {
	{"dynCast", &luna_wrapper_vector_proland_Vertex::_bind_dynCast},
	{"__eq", &luna_wrapper_vector_proland_Vertex::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< vector< proland::Vertex > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< vector< proland::Vertex > >::enumValues[] = {
	{0,0}
};


