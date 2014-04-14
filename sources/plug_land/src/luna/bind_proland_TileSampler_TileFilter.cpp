#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_TileSampler_TileFilter.h>

class luna_wrapper_proland_TileSampler_TileFilter {
public:
	typedef Luna< proland::TileSampler::TileFilter > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileSampler::TileFilter* self=(Luna< proland::TileSampler::TileFilter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<proland::TileSampler::TileFilter,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89838339) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::TileSampler::TileFilter*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileSampler::TileFilter* rhs =(Luna< proland::TileSampler::TileFilter >::check(L,2));
		proland::TileSampler::TileFilter* self=(Luna< proland::TileSampler::TileFilter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileSampler::TileFilter* self= (proland::TileSampler::TileFilter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TileSampler::TileFilter >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89838339) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::TileSampler::TileFilter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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

		proland::TileSampler::TileFilter* self=(Luna< proland::TileSampler::TileFilter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::TileSampler::TileFilter");
		
		return luna_dynamicCast(L,converters,"proland::TileSampler::TileFilter",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_storeTile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,2) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::TileSampler::TileFilter::TileFilter(lua_Table * data)
	static proland::TileSampler::TileFilter* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileSampler::TileFilter::TileFilter(lua_Table * data) function, expected prototype:\nproland::TileSampler::TileFilter::TileFilter(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_proland_TileSampler_TileFilter(L,NULL);
	}


	// Function binds:
	// bool proland::TileSampler::TileFilter::storeTile(ork::ptr< proland::TerrainQuad > q)
	static int _bind_storeTile(lua_State *L) {
		if (!_lg_typecheck_storeTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TileSampler::TileFilter::storeTile(ork::ptr< proland::TerrainQuad > q) function, expected prototype:\nbool proland::TileSampler::TileFilter::storeTile(ork::ptr< proland::TerrainQuad > q)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TerrainQuad > q = Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,2);

		proland::TileSampler::TileFilter* self=(Luna< proland::TileSampler::TileFilter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TileSampler::TileFilter::storeTile(ork::ptr< proland::TerrainQuad >). Got : '%s'\n%s",typeid(Luna< proland::TileSampler::TileFilter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->storeTile(q);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

proland::TileSampler::TileFilter* LunaTraits< proland::TileSampler::TileFilter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TileSampler_TileFilter::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool proland::TileSampler::TileFilter::storeTile(ork::ptr< proland::TerrainQuad > q)
}

void LunaTraits< proland::TileSampler::TileFilter >::_bind_dtor(proland::TileSampler::TileFilter* obj) {
	delete obj;
}

const char LunaTraits< proland::TileSampler::TileFilter >::className[] = "TileSampler_TileFilter";
const char LunaTraits< proland::TileSampler::TileFilter >::fullName[] = "proland::TileSampler::TileFilter";
const char LunaTraits< proland::TileSampler::TileFilter >::moduleName[] = "proland";
const char* LunaTraits< proland::TileSampler::TileFilter >::parents[] = {0};
const int LunaTraits< proland::TileSampler::TileFilter >::hash = 89838339;
const int LunaTraits< proland::TileSampler::TileFilter >::uniqueIDs[] = {89838339,0};

luna_RegType LunaTraits< proland::TileSampler::TileFilter >::methods[] = {
	{"storeTile", &luna_wrapper_proland_TileSampler_TileFilter::_bind_storeTile},
	{"dynCast", &luna_wrapper_proland_TileSampler_TileFilter::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_TileSampler_TileFilter::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_TileSampler_TileFilter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TileSampler_TileFilter::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_TileSampler_TileFilter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TileSampler::TileFilter >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TileSampler::TileFilter >::enumValues[] = {
	{0,0}
};


