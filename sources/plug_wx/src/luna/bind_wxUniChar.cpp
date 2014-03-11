#include <plug_common.h>

class luna_wrapper_wxUniChar {
public:
	typedef Luna< wxUniChar > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,27861770) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxUniChar*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxUniChar* rhs =(Luna< wxUniChar >::check(L,2));
		wxUniChar* self=(Luna< wxUniChar >::check(L,1));
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

		wxUniChar* self= (wxUniChar*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxUniChar >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,27861770) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxUniChar >::check(L,1));
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

		wxUniChar* self=(Luna< wxUniChar >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxUniChar");
		
		return luna_dynamicCast(L,converters,"wxUniChar",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxUniChar* LunaTraits< wxUniChar >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxUniChar >::_bind_dtor(wxUniChar* obj) {
	delete obj;
}

const char LunaTraits< wxUniChar >::className[] = "wxUniChar";
const char LunaTraits< wxUniChar >::fullName[] = "wxUniChar";
const char LunaTraits< wxUniChar >::moduleName[] = "wx";
const char* LunaTraits< wxUniChar >::parents[] = {0};
const int LunaTraits< wxUniChar >::hash = 27861770;
const int LunaTraits< wxUniChar >::uniqueIDs[] = {27861770,0};

luna_RegType LunaTraits< wxUniChar >::methods[] = {
	{"dynCast", &luna_wrapper_wxUniChar::_bind_dynCast},
	{"__eq", &luna_wrapper_wxUniChar::_bind___eq},
	{"fromVoid", &luna_wrapper_wxUniChar::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxUniChar::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxUniChar >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxUniChar >::enumValues[] = {
	{0,0}
};


