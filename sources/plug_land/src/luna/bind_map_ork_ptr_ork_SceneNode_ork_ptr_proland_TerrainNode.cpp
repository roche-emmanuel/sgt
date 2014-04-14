#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_map_ork_ptr_ork_SceneNode_ork_ptr_proland_TerrainNode {
public:
	typedef Luna< map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,9346150) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > >* rhs =(Luna< map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > >::check(L,2));
		map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > >* self=(Luna< map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > >::check(L,1));
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

		map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > >* self=(Luna< map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > >");
		
		return luna_dynamicCast(L,converters,"map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > >",name);
	}

};

map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > >* LunaTraits< map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > >::_bind_ctor(lua_State *L) {
	return new map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > >();
}

void LunaTraits< map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > >::_bind_dtor(map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > >* obj) {
	delete obj;
}

const char LunaTraits< map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > >::className[] = "map_ork_ptr_ork_SceneNode_ork_ptr_proland_TerrainNode";
const char LunaTraits< map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > >::fullName[] = "map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > >";
const char LunaTraits< map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > >::moduleName[] = "land";
const char* LunaTraits< map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > >::parents[] = {0};
const int LunaTraits< map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > >::hash = 9346150;
const int LunaTraits< map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > >::uniqueIDs[] = {9346150,0};

luna_RegType LunaTraits< map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > >::methods[] = {
	{"dynCast", &luna_wrapper_map_ork_ptr_ork_SceneNode_ork_ptr_proland_TerrainNode::_bind_dynCast},
	{"__eq", &luna_wrapper_map_ork_ptr_ork_SceneNode_ork_ptr_proland_TerrainNode::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > >::enumValues[] = {
	{0,0}
};


