#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_set_proland_TileCache_Tile_ptr {
public:
	typedef Luna< set< proland::TileCache::Tile * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,96783188) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(set< proland::TileCache::Tile * >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		set< proland::TileCache::Tile * >* rhs =(Luna< set< proland::TileCache::Tile * > >::check(L,2));
		set< proland::TileCache::Tile * >* self=(Luna< set< proland::TileCache::Tile * > >::check(L,1));
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

		set< proland::TileCache::Tile * >* self=(Luna< set< proland::TileCache::Tile * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("set< proland::TileCache::Tile * >");
		
		return luna_dynamicCast(L,converters,"set< proland::TileCache::Tile * >",name);
	}

};

set< proland::TileCache::Tile * >* LunaTraits< set< proland::TileCache::Tile * > >::_bind_ctor(lua_State *L) {
	return new set< proland::TileCache::Tile * >();
}

void LunaTraits< set< proland::TileCache::Tile * > >::_bind_dtor(set< proland::TileCache::Tile * >* obj) {
	delete obj;
}

const char LunaTraits< set< proland::TileCache::Tile * > >::className[] = "set_proland_TileCache_Tile_ptr";
const char LunaTraits< set< proland::TileCache::Tile * > >::fullName[] = "set< proland::TileCache::Tile * >";
const char LunaTraits< set< proland::TileCache::Tile * > >::moduleName[] = "land";
const char* LunaTraits< set< proland::TileCache::Tile * > >::parents[] = {0};
const int LunaTraits< set< proland::TileCache::Tile * > >::hash = 96783188;
const int LunaTraits< set< proland::TileCache::Tile * > >::uniqueIDs[] = {96783188,0};

luna_RegType LunaTraits< set< proland::TileCache::Tile * > >::methods[] = {
	{"dynCast", &luna_wrapper_set_proland_TileCache_Tile_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_set_proland_TileCache_Tile_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< set< proland::TileCache::Tile * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< set< proland::TileCache::Tile * > >::enumValues[] = {
	{0,0}
};


