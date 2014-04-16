#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_set_proland_TileCache_Tile_Id {
public:
	typedef Luna< set< proland::TileCache::Tile::Id > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69005068) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(set< proland::TileCache::Tile::Id >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		set< proland::TileCache::Tile::Id >* rhs =(Luna< set< proland::TileCache::Tile::Id > >::check(L,2));
		set< proland::TileCache::Tile::Id >* self=(Luna< set< proland::TileCache::Tile::Id > >::check(L,1));
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

		set< proland::TileCache::Tile::Id >* self=(Luna< set< proland::TileCache::Tile::Id > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("set< proland::TileCache::Tile::Id >");
		
		return luna_dynamicCast(L,converters,"set< proland::TileCache::Tile::Id >",name);
	}

};

set< proland::TileCache::Tile::Id >* LunaTraits< set< proland::TileCache::Tile::Id > >::_bind_ctor(lua_State *L) {
	return new set< proland::TileCache::Tile::Id >();
}

void LunaTraits< set< proland::TileCache::Tile::Id > >::_bind_dtor(set< proland::TileCache::Tile::Id >* obj) {
	delete obj;
}

const char LunaTraits< set< proland::TileCache::Tile::Id > >::className[] = "set_proland_TileCache_Tile_Id";
const char LunaTraits< set< proland::TileCache::Tile::Id > >::fullName[] = "set< proland::TileCache::Tile::Id >";
const char LunaTraits< set< proland::TileCache::Tile::Id > >::moduleName[] = "land";
const char* LunaTraits< set< proland::TileCache::Tile::Id > >::parents[] = {0};
const int LunaTraits< set< proland::TileCache::Tile::Id > >::hash = 69005068;
const int LunaTraits< set< proland::TileCache::Tile::Id > >::uniqueIDs[] = {69005068,0};

luna_RegType LunaTraits< set< proland::TileCache::Tile::Id > >::methods[] = {
	{"dynCast", &luna_wrapper_set_proland_TileCache_Tile_Id::_bind_dynCast},
	{"__eq", &luna_wrapper_set_proland_TileCache_Tile_Id::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< set< proland::TileCache::Tile::Id > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< set< proland::TileCache::Tile::Id > >::enumValues[] = {
	{0,0}
};


