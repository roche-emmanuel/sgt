#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_FloatTileCache.h>

class luna_wrapper_proland_FloatTileCache {
public:
	typedef Luna< proland::FloatTileCache > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::FloatTileCache* self=(Luna< proland::FloatTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<proland::FloatTileCache,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69405840) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::FloatTileCache*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::FloatTileCache* rhs =(Luna< proland::FloatTileCache >::check(L,2));
		proland::FloatTileCache* self=(Luna< proland::FloatTileCache >::check(L,1));
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

		proland::FloatTileCache* self= (proland::FloatTileCache*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::FloatTileCache >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69405840) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::FloatTileCache >::check(L,1));
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

		proland::FloatTileCache* self=(Luna< proland::FloatTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::FloatTileCache");
		
		return luna_dynamicCast(L,converters,"proland::FloatTileCache",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::FloatTileCache::FloatTileCache(lua_Table * data, int capacity = 20)
	static proland::FloatTileCache* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::FloatTileCache::FloatTileCache(lua_Table * data, int capacity = 20) function, expected prototype:\nproland::FloatTileCache::FloatTileCache(lua_Table * data, int capacity = 20)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int capacity=luatop>1 ? (int)lua_tointeger(L,2) : (int)20;

		return new wrapper_proland_FloatTileCache(L,NULL, capacity);
	}


	// Function binds:

	// Operator binds:

};

proland::FloatTileCache* LunaTraits< proland::FloatTileCache >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_FloatTileCache::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// float * proland::FloatTileCache::readTile(int level, int tx, int ty)
}

void LunaTraits< proland::FloatTileCache >::_bind_dtor(proland::FloatTileCache* obj) {
	delete obj;
}

const char LunaTraits< proland::FloatTileCache >::className[] = "FloatTileCache";
const char LunaTraits< proland::FloatTileCache >::fullName[] = "proland::FloatTileCache";
const char LunaTraits< proland::FloatTileCache >::moduleName[] = "proland";
const char* LunaTraits< proland::FloatTileCache >::parents[] = {0};
const int LunaTraits< proland::FloatTileCache >::hash = 69405840;
const int LunaTraits< proland::FloatTileCache >::uniqueIDs[] = {69405840,0};

luna_RegType LunaTraits< proland::FloatTileCache >::methods[] = {
	{"dynCast", &luna_wrapper_proland_FloatTileCache::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_FloatTileCache::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_FloatTileCache::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_FloatTileCache::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_FloatTileCache::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::FloatTileCache >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::FloatTileCache >::enumValues[] = {
	{0,0}
};


