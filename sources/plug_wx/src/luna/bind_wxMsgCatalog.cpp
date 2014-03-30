#include <plug_common.h>

class luna_wrapper_wxMsgCatalog {
public:
	typedef Luna< wxMsgCatalog > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16122349) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxMsgCatalog*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxMsgCatalog* rhs =(Luna< wxMsgCatalog >::check(L,2));
		wxMsgCatalog* self=(Luna< wxMsgCatalog >::check(L,1));
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

		wxMsgCatalog* self= (wxMsgCatalog*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxMsgCatalog >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16122349) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxMsgCatalog >::check(L,1));
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

		wxMsgCatalog* self=(Luna< wxMsgCatalog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxMsgCatalog");
		
		return luna_dynamicCast(L,converters,"wxMsgCatalog",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_CreateFromFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static wxMsgCatalog * wxMsgCatalog::CreateFromFile(const wxString & filename, const wxString & domain)
	static int _bind_CreateFromFile(lua_State *L) {
		if (!_lg_typecheck_CreateFromFile(L)) {
			luaL_error(L, "luna typecheck failed in static wxMsgCatalog * wxMsgCatalog::CreateFromFile(const wxString & filename, const wxString & domain) function, expected prototype:\nstatic wxMsgCatalog * wxMsgCatalog::CreateFromFile(const wxString & filename, const wxString & domain)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filename(lua_tostring(L,1),lua_objlen(L,1));
		wxString domain(lua_tostring(L,2),lua_objlen(L,2));

		wxMsgCatalog * lret = wxMsgCatalog::CreateFromFile(filename, domain);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMsgCatalog >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxMsgCatalog* LunaTraits< wxMsgCatalog >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxMsgCatalog >::_bind_dtor(wxMsgCatalog* obj) {
	delete obj;
}

const char LunaTraits< wxMsgCatalog >::className[] = "wxMsgCatalog";
const char LunaTraits< wxMsgCatalog >::fullName[] = "wxMsgCatalog";
const char LunaTraits< wxMsgCatalog >::moduleName[] = "wx";
const char* LunaTraits< wxMsgCatalog >::parents[] = {0};
const int LunaTraits< wxMsgCatalog >::hash = 16122349;
const int LunaTraits< wxMsgCatalog >::uniqueIDs[] = {16122349,0};

luna_RegType LunaTraits< wxMsgCatalog >::methods[] = {
	{"CreateFromFile", &luna_wrapper_wxMsgCatalog::_bind_CreateFromFile},
	{"dynCast", &luna_wrapper_wxMsgCatalog::_bind_dynCast},
	{"__eq", &luna_wrapper_wxMsgCatalog::_bind___eq},
	{"fromVoid", &luna_wrapper_wxMsgCatalog::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxMsgCatalog::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxMsgCatalog >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxMsgCatalog >::enumValues[] = {
	{0,0}
};


