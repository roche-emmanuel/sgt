#include <plug_common.h>

class luna_wrapper_wxBusyCursor {
public:
	typedef Luna< wxBusyCursor > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,96774859) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxBusyCursor*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxBusyCursor* rhs =(Luna< wxBusyCursor >::check(L,2));
		wxBusyCursor* self=(Luna< wxBusyCursor >::check(L,1));
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

		wxBusyCursor* self= (wxBusyCursor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxBusyCursor >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,96774859) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxBusyCursor >::check(L,1));
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

		wxBusyCursor* self=(Luna< wxBusyCursor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxBusyCursor");
		
		return luna_dynamicCast(L,converters,"wxBusyCursor",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxBusyCursor::wxBusyCursor(const wxCursor * cursor = wxHOURGLASS_CURSOR)
	static wxBusyCursor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxBusyCursor::wxBusyCursor(const wxCursor * cursor = wxHOURGLASS_CURSOR) function, expected prototype:\nwxBusyCursor::wxBusyCursor(const wxCursor * cursor = wxHOURGLASS_CURSOR)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxCursor* cursor=luatop>0 ? (Luna< wxObject >::checkSubType< wxCursor >(L,1)) : (const wxCursor*)wxHOURGLASS_CURSOR;

		return new wxBusyCursor(cursor);
	}


	// Function binds:

	// Operator binds:

};

wxBusyCursor* LunaTraits< wxBusyCursor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxBusyCursor::_bind_ctor(L);
}

void LunaTraits< wxBusyCursor >::_bind_dtor(wxBusyCursor* obj) {
	delete obj;
}

const char LunaTraits< wxBusyCursor >::className[] = "wxBusyCursor";
const char LunaTraits< wxBusyCursor >::fullName[] = "wxBusyCursor";
const char LunaTraits< wxBusyCursor >::moduleName[] = "wx";
const char* LunaTraits< wxBusyCursor >::parents[] = {0};
const int LunaTraits< wxBusyCursor >::hash = 96774859;
const int LunaTraits< wxBusyCursor >::uniqueIDs[] = {96774859,0};

luna_RegType LunaTraits< wxBusyCursor >::methods[] = {
	{"dynCast", &luna_wrapper_wxBusyCursor::_bind_dynCast},
	{"__eq", &luna_wrapper_wxBusyCursor::_bind___eq},
	{"fromVoid", &luna_wrapper_wxBusyCursor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxBusyCursor::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxBusyCursor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxBusyCursor >::enumValues[] = {
	{0,0}
};


