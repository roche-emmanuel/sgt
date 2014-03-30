#include <plug_common.h>

class luna_wrapper_wxRichToolTip {
public:
	typedef Luna< wxRichToolTip > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,32152960) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxRichToolTip*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxRichToolTip* rhs =(Luna< wxRichToolTip >::check(L,2));
		wxRichToolTip* self=(Luna< wxRichToolTip >::check(L,1));
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

		wxRichToolTip* self= (wxRichToolTip*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRichToolTip >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,32152960) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxRichToolTip >::check(L,1));
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

		wxRichToolTip* self=(Luna< wxRichToolTip >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRichToolTip");
		
		return luna_dynamicCast(L,converters,"wxRichToolTip",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetBackgroundColour(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetIcon_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetIcon_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxIcon >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTimeout(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTipKind(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowFor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxRichToolTip::wxRichToolTip(const wxString & title, const wxString & message)
	static wxRichToolTip* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxRichToolTip::wxRichToolTip(const wxString & title, const wxString & message) function, expected prototype:\nwxRichToolTip::wxRichToolTip(const wxString & title, const wxString & message)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString title(lua_tostring(L,1),lua_objlen(L,1));
		wxString message(lua_tostring(L,2),lua_objlen(L,2));

		return new wxRichToolTip(title, message);
	}


	// Function binds:
	// void wxRichToolTip::SetBackgroundColour(const wxColour & col, const wxColour & colEnd = wxColour ())
	static int _bind_SetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxRichToolTip::SetBackgroundColour(const wxColour & col, const wxColour & colEnd = wxColour ()) function, expected prototype:\nvoid wxRichToolTip::SetBackgroundColour(const wxColour & col, const wxColour & colEnd = wxColour ())\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxColour* col_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxRichToolTip::SetBackgroundColour function");
		}
		const wxColour & col=*col_ptr;
		const wxColour* colEnd_ptr=luatop>2 ? (Luna< wxObject >::checkSubType< wxColour >(L,3)) : NULL;
		if( luatop>2 && !colEnd_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colEnd in wxRichToolTip::SetBackgroundColour function");
		}
		const wxColour & colEnd=luatop>2 ? *colEnd_ptr : (const wxColour&)wxColour ();

		wxRichToolTip* self=(Luna< wxRichToolTip >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRichToolTip::SetBackgroundColour(const wxColour &, const wxColour &). Got : '%s'\n%s",typeid(Luna< wxRichToolTip >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBackgroundColour(col, colEnd);

		return 0;
	}

	// void wxRichToolTip::SetIcon(int icon = wxICON_INFORMATION)
	static int _bind_SetIcon_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetIcon_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxRichToolTip::SetIcon(int icon = wxICON_INFORMATION) function, expected prototype:\nvoid wxRichToolTip::SetIcon(int icon = wxICON_INFORMATION)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int icon=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxICON_INFORMATION;

		wxRichToolTip* self=(Luna< wxRichToolTip >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRichToolTip::SetIcon(int). Got : '%s'\n%s",typeid(Luna< wxRichToolTip >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetIcon(icon);

		return 0;
	}

	// void wxRichToolTip::SetIcon(const wxIcon & icon)
	static int _bind_SetIcon_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetIcon_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxRichToolTip::SetIcon(const wxIcon & icon) function, expected prototype:\nvoid wxRichToolTip::SetIcon(const wxIcon & icon)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxIcon* icon_ptr=(Luna< wxObject >::checkSubType< wxIcon >(L,2));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxRichToolTip::SetIcon function");
		}
		const wxIcon & icon=*icon_ptr;

		wxRichToolTip* self=(Luna< wxRichToolTip >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRichToolTip::SetIcon(const wxIcon &). Got : '%s'\n%s",typeid(Luna< wxRichToolTip >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetIcon(icon);

		return 0;
	}

	// Overload binder for wxRichToolTip::SetIcon
	static int _bind_SetIcon(lua_State *L) {
		if (_lg_typecheck_SetIcon_overload_1(L)) return _bind_SetIcon_overload_1(L);
		if (_lg_typecheck_SetIcon_overload_2(L)) return _bind_SetIcon_overload_2(L);

		luaL_error(L, "error in function SetIcon, cannot match any of the overloads for function SetIcon:\n  SetIcon(int)\n  SetIcon(const wxIcon &)\n");
		return 0;
	}

	// void wxRichToolTip::SetTimeout(unsigned int milliseconds)
	static int _bind_SetTimeout(lua_State *L) {
		if (!_lg_typecheck_SetTimeout(L)) {
			luaL_error(L, "luna typecheck failed in void wxRichToolTip::SetTimeout(unsigned int milliseconds) function, expected prototype:\nvoid wxRichToolTip::SetTimeout(unsigned int milliseconds)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned milliseconds=(unsigned)lua_tointeger(L,2);

		wxRichToolTip* self=(Luna< wxRichToolTip >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRichToolTip::SetTimeout(unsigned int). Got : '%s'\n%s",typeid(Luna< wxRichToolTip >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTimeout(milliseconds);

		return 0;
	}

	// void wxRichToolTip::SetTipKind(wxTipKind tipKind)
	static int _bind_SetTipKind(lua_State *L) {
		if (!_lg_typecheck_SetTipKind(L)) {
			luaL_error(L, "luna typecheck failed in void wxRichToolTip::SetTipKind(wxTipKind tipKind) function, expected prototype:\nvoid wxRichToolTip::SetTipKind(wxTipKind tipKind)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTipKind tipKind=(wxTipKind)lua_tointeger(L,2);

		wxRichToolTip* self=(Luna< wxRichToolTip >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRichToolTip::SetTipKind(wxTipKind). Got : '%s'\n%s",typeid(Luna< wxRichToolTip >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTipKind(tipKind);

		return 0;
	}

	// void wxRichToolTip::ShowFor(wxWindow * win)
	static int _bind_ShowFor(lua_State *L) {
		if (!_lg_typecheck_ShowFor(L)) {
			luaL_error(L, "luna typecheck failed in void wxRichToolTip::ShowFor(wxWindow * win) function, expected prototype:\nvoid wxRichToolTip::ShowFor(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxRichToolTip* self=(Luna< wxRichToolTip >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRichToolTip::ShowFor(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxRichToolTip >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShowFor(win);

		return 0;
	}


	// Operator binds:

};

wxRichToolTip* LunaTraits< wxRichToolTip >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRichToolTip::_bind_ctor(L);
}

void LunaTraits< wxRichToolTip >::_bind_dtor(wxRichToolTip* obj) {
	delete obj;
}

const char LunaTraits< wxRichToolTip >::className[] = "wxRichToolTip";
const char LunaTraits< wxRichToolTip >::fullName[] = "wxRichToolTip";
const char LunaTraits< wxRichToolTip >::moduleName[] = "wx";
const char* LunaTraits< wxRichToolTip >::parents[] = {0};
const int LunaTraits< wxRichToolTip >::hash = 32152960;
const int LunaTraits< wxRichToolTip >::uniqueIDs[] = {32152960,0};

luna_RegType LunaTraits< wxRichToolTip >::methods[] = {
	{"SetBackgroundColour", &luna_wrapper_wxRichToolTip::_bind_SetBackgroundColour},
	{"SetIcon", &luna_wrapper_wxRichToolTip::_bind_SetIcon},
	{"SetTimeout", &luna_wrapper_wxRichToolTip::_bind_SetTimeout},
	{"SetTipKind", &luna_wrapper_wxRichToolTip::_bind_SetTipKind},
	{"ShowFor", &luna_wrapper_wxRichToolTip::_bind_ShowFor},
	{"dynCast", &luna_wrapper_wxRichToolTip::_bind_dynCast},
	{"__eq", &luna_wrapper_wxRichToolTip::_bind___eq},
	{"fromVoid", &luna_wrapper_wxRichToolTip::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRichToolTip::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichToolTip >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichToolTip >::enumValues[] = {
	{0,0}
};


