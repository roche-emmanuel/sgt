#include <plug_common.h>

class luna_wrapper_wxIdManager {
public:
	typedef Luna< wxIdManager > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71701647) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxIdManager*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxIdManager* rhs =(Luna< wxIdManager >::check(L,2));
		wxIdManager* self=(Luna< wxIdManager >::check(L,1));
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

		wxIdManager* self= (wxIdManager*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxIdManager >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71701647) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxIdManager >::check(L,1));
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

		wxIdManager* self=(Luna< wxIdManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxIdManager");
		
		return luna_dynamicCast(L,converters,"wxIdManager",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_ReserveId(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UnreserveId(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static int wxIdManager::ReserveId(int count = 1)
	static int _bind_ReserveId(lua_State *L) {
		if (!_lg_typecheck_ReserveId(L)) {
			luaL_error(L, "luna typecheck failed in static int wxIdManager::ReserveId(int count = 1) function, expected prototype:\nstatic int wxIdManager::ReserveId(int count = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int count=luatop>0 ? (int)lua_tointeger(L,1) : (int)1;

		int lret = wxIdManager::ReserveId(count);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void wxIdManager::UnreserveId(int id, int count = 1)
	static int _bind_UnreserveId(lua_State *L) {
		if (!_lg_typecheck_UnreserveId(L)) {
			luaL_error(L, "luna typecheck failed in static void wxIdManager::UnreserveId(int id, int count = 1) function, expected prototype:\nstatic void wxIdManager::UnreserveId(int id, int count = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int id=(int)lua_tointeger(L,1);
		int count=luatop>1 ? (int)lua_tointeger(L,2) : (int)1;

		wxIdManager::UnreserveId(id, count);

		return 0;
	}


	// Operator binds:

};

wxIdManager* LunaTraits< wxIdManager >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxIdManager >::_bind_dtor(wxIdManager* obj) {
	delete obj;
}

const char LunaTraits< wxIdManager >::className[] = "wxIdManager";
const char LunaTraits< wxIdManager >::fullName[] = "wxIdManager";
const char LunaTraits< wxIdManager >::moduleName[] = "wx";
const char* LunaTraits< wxIdManager >::parents[] = {0};
const int LunaTraits< wxIdManager >::hash = 71701647;
const int LunaTraits< wxIdManager >::uniqueIDs[] = {71701647,0};

luna_RegType LunaTraits< wxIdManager >::methods[] = {
	{"ReserveId", &luna_wrapper_wxIdManager::_bind_ReserveId},
	{"UnreserveId", &luna_wrapper_wxIdManager::_bind_UnreserveId},
	{"dynCast", &luna_wrapper_wxIdManager::_bind_dynCast},
	{"__eq", &luna_wrapper_wxIdManager::_bind___eq},
	{"fromVoid", &luna_wrapper_wxIdManager::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxIdManager::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxIdManager >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxIdManager >::enumValues[] = {
	{0,0}
};


