#include <plug_common.h>

class luna_wrapper_wxMutex {
public:
	typedef Luna< wxMutex > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23141959) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxMutex*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxMutex* rhs =(Luna< wxMutex >::check(L,2));
		wxMutex* self=(Luna< wxMutex >::check(L,1));
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

		wxMutex* self= (wxMutex*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxMutex >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23141959) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxMutex >::check(L,1));
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

		wxMutex* self=(Luna< wxMutex >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxMutex");
		
		return luna_dynamicCast(L,converters,"wxMutex",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxMutex* LunaTraits< wxMutex >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxMutex >::_bind_dtor(wxMutex* obj) {
	delete obj;
}

const char LunaTraits< wxMutex >::className[] = "wxMutex";
const char LunaTraits< wxMutex >::fullName[] = "wxMutex";
const char LunaTraits< wxMutex >::moduleName[] = "wx";
const char* LunaTraits< wxMutex >::parents[] = {0};
const int LunaTraits< wxMutex >::hash = 23141959;
const int LunaTraits< wxMutex >::uniqueIDs[] = {23141959,0};

luna_RegType LunaTraits< wxMutex >::methods[] = {
	{"dynCast", &luna_wrapper_wxMutex::_bind_dynCast},
	{"__eq", &luna_wrapper_wxMutex::_bind___eq},
	{"fromVoid", &luna_wrapper_wxMutex::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxMutex::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxMutex >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxMutex >::enumValues[] = {
	{0,0}
};


