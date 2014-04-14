#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_map_ork_ptr_proland_TileProducer_proland_TerrainParticleLayer_TerrainInfo_ptr {
public:
	typedef Luna< std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13829843) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * >* rhs =(Luna< std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > >::check(L,2));
		std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * >* self=(Luna< std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > >::check(L,1));
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

		std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * >* self=(Luna< std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * >");
		
		return luna_dynamicCast(L,converters,"std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * >",name);
	}

};

std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * >* LunaTraits< std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > >::_bind_ctor(lua_State *L) {
	return new std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * >();
}

void LunaTraits< std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > >::_bind_dtor(std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * >* obj) {
	delete obj;
}

const char LunaTraits< std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > >::className[] = "std_map_ork_ptr_proland_TileProducer_proland_TerrainParticleLayer_TerrainInfo_ptr";
const char LunaTraits< std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > >::fullName[] = "std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * >";
const char LunaTraits< std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > >::moduleName[] = "land";
const char* LunaTraits< std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > >::parents[] = {0};
const int LunaTraits< std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > >::hash = 13829843;
const int LunaTraits< std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > >::uniqueIDs[] = {13829843,0};

luna_RegType LunaTraits< std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_map_ork_ptr_proland_TileProducer_proland_TerrainParticleLayer_TerrainInfo_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_map_ork_ptr_proland_TileProducer_proland_TerrainParticleLayer_TerrainInfo_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > >::enumValues[] = {
	{0,0}
};


