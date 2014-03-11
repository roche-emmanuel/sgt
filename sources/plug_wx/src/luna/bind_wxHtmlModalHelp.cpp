#include <plug_common.h>

class luna_wrapper_wxHtmlModalHelp {
public:
	typedef Luna< wxHtmlModalHelp > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51847095) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxHtmlModalHelp*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxHtmlModalHelp* rhs =(Luna< wxHtmlModalHelp >::check(L,2));
		wxHtmlModalHelp* self=(Luna< wxHtmlModalHelp >::check(L,1));
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

		wxHtmlModalHelp* self= (wxHtmlModalHelp*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxHtmlModalHelp >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51847095) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxHtmlModalHelp >::check(L,1));
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

		wxHtmlModalHelp* self=(Luna< wxHtmlModalHelp >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxHtmlModalHelp");
		
		return luna_dynamicCast(L,converters,"wxHtmlModalHelp",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHtmlModalHelp::wxHtmlModalHelp(wxWindow * parent, const wxString & helpFile, const wxString & topic = wxEmptyString, int style = wxHF_DEFAULT_STYLE | wxHF_DIALOG | wxHF_MODAL)
	static wxHtmlModalHelp* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlModalHelp::wxHtmlModalHelp(wxWindow * parent, const wxString & helpFile, const wxString & topic = wxEmptyString, int style = wxHF_DEFAULT_STYLE | wxHF_DIALOG | wxHF_MODAL) function, expected prototype:\nwxHtmlModalHelp::wxHtmlModalHelp(wxWindow * parent, const wxString & helpFile, const wxString & topic = wxEmptyString, int style = wxHF_DEFAULT_STYLE | wxHF_DIALOG | wxHF_MODAL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		wxString helpFile(lua_tostring(L,2),lua_objlen(L,2));
		wxString topic(lua_tostring(L,3),lua_objlen(L,3));
		int style=luatop>3 ? (int)lua_tointeger(L,4) : (int)wxHF_DEFAULT_STYLE | wxHF_DIALOG | wxHF_MODAL;

		return new wxHtmlModalHelp(parent, helpFile, topic, style);
	}


	// Function binds:

	// Operator binds:

};

wxHtmlModalHelp* LunaTraits< wxHtmlModalHelp >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlModalHelp::_bind_ctor(L);
}

void LunaTraits< wxHtmlModalHelp >::_bind_dtor(wxHtmlModalHelp* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlModalHelp >::className[] = "wxHtmlModalHelp";
const char LunaTraits< wxHtmlModalHelp >::fullName[] = "wxHtmlModalHelp";
const char LunaTraits< wxHtmlModalHelp >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlModalHelp >::parents[] = {0};
const int LunaTraits< wxHtmlModalHelp >::hash = 51847095;
const int LunaTraits< wxHtmlModalHelp >::uniqueIDs[] = {51847095,0};

luna_RegType LunaTraits< wxHtmlModalHelp >::methods[] = {
	{"dynCast", &luna_wrapper_wxHtmlModalHelp::_bind_dynCast},
	{"__eq", &luna_wrapper_wxHtmlModalHelp::_bind___eq},
	{"fromVoid", &luna_wrapper_wxHtmlModalHelp::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxHtmlModalHelp::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlModalHelp >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlModalHelp >::enumValues[] = {
	{0,0}
};


