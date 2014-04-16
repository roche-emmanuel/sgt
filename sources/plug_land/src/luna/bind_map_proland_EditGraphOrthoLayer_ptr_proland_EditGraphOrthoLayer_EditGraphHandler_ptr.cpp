#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_map_proland_EditGraphOrthoLayer_ptr_proland_EditGraphOrthoLayer_EditGraphHandler_ptr {
public:
	typedef Luna< map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13889182) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * >* rhs =(Luna< map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > >::check(L,2));
		map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * >* self=(Luna< map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > >::check(L,1));
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

		map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * >* self=(Luna< map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * >");
		
		return luna_dynamicCast(L,converters,"map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * >",name);
	}

};

map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * >* LunaTraits< map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > >::_bind_ctor(lua_State *L) {
	return new map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * >();
}

void LunaTraits< map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > >::_bind_dtor(map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * >* obj) {
	delete obj;
}

const char LunaTraits< map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > >::className[] = "map_proland_EditGraphOrthoLayer_ptr_proland_EditGraphOrthoLayer_EditGraphHandler_ptr";
const char LunaTraits< map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > >::fullName[] = "map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * >";
const char LunaTraits< map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > >::moduleName[] = "land";
const char* LunaTraits< map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > >::parents[] = {0};
const int LunaTraits< map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > >::hash = 13889182;
const int LunaTraits< map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > >::uniqueIDs[] = {13889182,0};

luna_RegType LunaTraits< map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > >::methods[] = {
	{"dynCast", &luna_wrapper_map_proland_EditGraphOrthoLayer_ptr_proland_EditGraphOrthoLayer_EditGraphHandler_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_map_proland_EditGraphOrthoLayer_ptr_proland_EditGraphOrthoLayer_EditGraphHandler_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > >::enumValues[] = {
	{0,0}
};


