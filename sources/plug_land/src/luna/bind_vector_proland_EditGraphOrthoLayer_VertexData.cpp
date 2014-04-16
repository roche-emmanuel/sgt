#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_vector_proland_EditGraphOrthoLayer_VertexData {
public:
	typedef Luna< vector< proland::EditGraphOrthoLayer::VertexData > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,55059854) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(vector< proland::EditGraphOrthoLayer::VertexData >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		vector< proland::EditGraphOrthoLayer::VertexData >* rhs =(Luna< vector< proland::EditGraphOrthoLayer::VertexData > >::check(L,2));
		vector< proland::EditGraphOrthoLayer::VertexData >* self=(Luna< vector< proland::EditGraphOrthoLayer::VertexData > >::check(L,1));
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

		vector< proland::EditGraphOrthoLayer::VertexData >* self=(Luna< vector< proland::EditGraphOrthoLayer::VertexData > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("vector< proland::EditGraphOrthoLayer::VertexData >");
		
		return luna_dynamicCast(L,converters,"vector< proland::EditGraphOrthoLayer::VertexData >",name);
	}

};

vector< proland::EditGraphOrthoLayer::VertexData >* LunaTraits< vector< proland::EditGraphOrthoLayer::VertexData > >::_bind_ctor(lua_State *L) {
	return new vector< proland::EditGraphOrthoLayer::VertexData >();
}

void LunaTraits< vector< proland::EditGraphOrthoLayer::VertexData > >::_bind_dtor(vector< proland::EditGraphOrthoLayer::VertexData >* obj) {
	delete obj;
}

const char LunaTraits< vector< proland::EditGraphOrthoLayer::VertexData > >::className[] = "vector_proland_EditGraphOrthoLayer_VertexData";
const char LunaTraits< vector< proland::EditGraphOrthoLayer::VertexData > >::fullName[] = "vector< proland::EditGraphOrthoLayer::VertexData >";
const char LunaTraits< vector< proland::EditGraphOrthoLayer::VertexData > >::moduleName[] = "land";
const char* LunaTraits< vector< proland::EditGraphOrthoLayer::VertexData > >::parents[] = {0};
const int LunaTraits< vector< proland::EditGraphOrthoLayer::VertexData > >::hash = 55059854;
const int LunaTraits< vector< proland::EditGraphOrthoLayer::VertexData > >::uniqueIDs[] = {55059854,0};

luna_RegType LunaTraits< vector< proland::EditGraphOrthoLayer::VertexData > >::methods[] = {
	{"dynCast", &luna_wrapper_vector_proland_EditGraphOrthoLayer_VertexData::_bind_dynCast},
	{"__eq", &luna_wrapper_vector_proland_EditGraphOrthoLayer_VertexData::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< vector< proland::EditGraphOrthoLayer::VertexData > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< vector< proland::EditGraphOrthoLayer::VertexData > >::enumValues[] = {
	{0,0}
};


