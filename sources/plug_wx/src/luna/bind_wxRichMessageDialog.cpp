#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRichMessageDialog.h>

class luna_wrapper_wxRichMessageDialog {
public:
	typedef Luna< wxRichMessageDialog > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxRichMessageDialog* self=(Luna< wxRichMessageDialog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxRichMessageDialog,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86910257) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxRichMessageDialog*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxRichMessageDialog* rhs =(Luna< wxRichMessageDialog >::check(L,2));
		wxRichMessageDialog* self=(Luna< wxRichMessageDialog >::check(L,1));
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

		wxRichMessageDialog* self= (wxRichMessageDialog*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRichMessageDialog >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86910257) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxRichMessageDialog >::check(L,1));
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

		wxRichMessageDialog* self=(Luna< wxRichMessageDialog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRichMessageDialog");
		
		return luna_dynamicCast(L,converters,"wxRichMessageDialog",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_ShowCheckBox(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCheckBoxText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ShowDetailedText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDetailedText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsCheckBoxChecked(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ShowModal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ShowModal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxRichMessageDialog::wxRichMessageDialog(wxWindow * parent, const wxString & message, const wxString & caption = wxMessageBoxCaptionStr, long style = wxOK | ::wxCENTRE)
	static wxRichMessageDialog* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxRichMessageDialog::wxRichMessageDialog(wxWindow * parent, const wxString & message, const wxString & caption = wxMessageBoxCaptionStr, long style = wxOK | ::wxCENTRE) function, expected prototype:\nwxRichMessageDialog::wxRichMessageDialog(wxWindow * parent, const wxString & message, const wxString & caption = wxMessageBoxCaptionStr, long style = wxOK | ::wxCENTRE)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		wxString message(lua_tostring(L,2),lua_objlen(L,2));
		wxString caption(lua_tostring(L,3),lua_objlen(L,3));
		long style=luatop>3 ? (long)lua_tonumber(L,4) : (long)wxOK | ::wxCENTRE;

		return new wxRichMessageDialog(parent, message, caption, style);
	}

	// wxRichMessageDialog::wxRichMessageDialog(lua_Table * data, wxWindow * parent, const wxString & message, const wxString & caption = wxMessageBoxCaptionStr, long style = wxOK | ::wxCENTRE)
	static wxRichMessageDialog* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxRichMessageDialog::wxRichMessageDialog(lua_Table * data, wxWindow * parent, const wxString & message, const wxString & caption = wxMessageBoxCaptionStr, long style = wxOK | ::wxCENTRE) function, expected prototype:\nwxRichMessageDialog::wxRichMessageDialog(lua_Table * data, wxWindow * parent, const wxString & message, const wxString & caption = wxMessageBoxCaptionStr, long style = wxOK | ::wxCENTRE)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxString message(lua_tostring(L,3),lua_objlen(L,3));
		wxString caption(lua_tostring(L,4),lua_objlen(L,4));
		long style=luatop>4 ? (long)lua_tonumber(L,5) : (long)wxOK | ::wxCENTRE;

		return new wrapper_wxRichMessageDialog(L,NULL, parent, message, caption, style);
	}

	// Overload binder for wxRichMessageDialog::wxRichMessageDialog
	static wxRichMessageDialog* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxRichMessageDialog, cannot match any of the overloads for function wxRichMessageDialog:\n  wxRichMessageDialog(wxWindow *, const wxString &, const wxString &, long)\n  wxRichMessageDialog(lua_Table *, wxWindow *, const wxString &, const wxString &, long)\n");
		return NULL;
	}


	// Function binds:
	// void wxRichMessageDialog::ShowCheckBox(const wxString & checkBoxText, bool checked = false)
	static int _bind_ShowCheckBox(lua_State *L) {
		if (!_lg_typecheck_ShowCheckBox(L)) {
			luaL_error(L, "luna typecheck failed in void wxRichMessageDialog::ShowCheckBox(const wxString & checkBoxText, bool checked = false) function, expected prototype:\nvoid wxRichMessageDialog::ShowCheckBox(const wxString & checkBoxText, bool checked = false)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString checkBoxText(lua_tostring(L,2),lua_objlen(L,2));
		bool checked=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxRichMessageDialog* self=(Luna< wxRichMessageDialog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRichMessageDialog::ShowCheckBox(const wxString &, bool). Got : '%s'\n%s",typeid(Luna< wxRichMessageDialog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShowCheckBox(checkBoxText, checked);

		return 0;
	}

	// wxString wxRichMessageDialog::GetCheckBoxText() const
	static int _bind_GetCheckBoxText(lua_State *L) {
		if (!_lg_typecheck_GetCheckBoxText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxRichMessageDialog::GetCheckBoxText() const function, expected prototype:\nwxString wxRichMessageDialog::GetCheckBoxText() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRichMessageDialog* self=(Luna< wxRichMessageDialog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxRichMessageDialog::GetCheckBoxText() const. Got : '%s'\n%s",typeid(Luna< wxRichMessageDialog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetCheckBoxText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxRichMessageDialog::ShowDetailedText(const wxString & detailedText)
	static int _bind_ShowDetailedText(lua_State *L) {
		if (!_lg_typecheck_ShowDetailedText(L)) {
			luaL_error(L, "luna typecheck failed in void wxRichMessageDialog::ShowDetailedText(const wxString & detailedText) function, expected prototype:\nvoid wxRichMessageDialog::ShowDetailedText(const wxString & detailedText)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString detailedText(lua_tostring(L,2),lua_objlen(L,2));

		wxRichMessageDialog* self=(Luna< wxRichMessageDialog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRichMessageDialog::ShowDetailedText(const wxString &). Got : '%s'\n%s",typeid(Luna< wxRichMessageDialog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShowDetailedText(detailedText);

		return 0;
	}

	// wxString wxRichMessageDialog::GetDetailedText() const
	static int _bind_GetDetailedText(lua_State *L) {
		if (!_lg_typecheck_GetDetailedText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxRichMessageDialog::GetDetailedText() const function, expected prototype:\nwxString wxRichMessageDialog::GetDetailedText() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRichMessageDialog* self=(Luna< wxRichMessageDialog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxRichMessageDialog::GetDetailedText() const. Got : '%s'\n%s",typeid(Luna< wxRichMessageDialog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetDetailedText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxRichMessageDialog::IsCheckBoxChecked() const
	static int _bind_IsCheckBoxChecked(lua_State *L) {
		if (!_lg_typecheck_IsCheckBoxChecked(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRichMessageDialog::IsCheckBoxChecked() const function, expected prototype:\nbool wxRichMessageDialog::IsCheckBoxChecked() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRichMessageDialog* self=(Luna< wxRichMessageDialog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRichMessageDialog::IsCheckBoxChecked() const. Got : '%s'\n%s",typeid(Luna< wxRichMessageDialog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsCheckBoxChecked();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxRichMessageDialog::ShowModal()
	static int _bind_ShowModal(lua_State *L) {
		if (!_lg_typecheck_ShowModal(L)) {
			luaL_error(L, "luna typecheck failed in int wxRichMessageDialog::ShowModal() function, expected prototype:\nint wxRichMessageDialog::ShowModal()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRichMessageDialog* self=(Luna< wxRichMessageDialog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxRichMessageDialog::ShowModal(). Got : '%s'\n%s",typeid(Luna< wxRichMessageDialog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ShowModal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRichMessageDialog::base_ShowModal()
	static int _bind_base_ShowModal(lua_State *L) {
		if (!_lg_typecheck_base_ShowModal(L)) {
			luaL_error(L, "luna typecheck failed in int wxRichMessageDialog::base_ShowModal() function, expected prototype:\nint wxRichMessageDialog::base_ShowModal()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRichMessageDialog* self=(Luna< wxRichMessageDialog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxRichMessageDialog::base_ShowModal(). Got : '%s'\n%s",typeid(Luna< wxRichMessageDialog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxRichMessageDialog::ShowModal();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxRichMessageDialog* LunaTraits< wxRichMessageDialog >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRichMessageDialog::_bind_ctor(L);
}

void LunaTraits< wxRichMessageDialog >::_bind_dtor(wxRichMessageDialog* obj) {
	delete obj;
}

const char LunaTraits< wxRichMessageDialog >::className[] = "wxRichMessageDialog";
const char LunaTraits< wxRichMessageDialog >::fullName[] = "wxRichMessageDialog";
const char LunaTraits< wxRichMessageDialog >::moduleName[] = "wx";
const char* LunaTraits< wxRichMessageDialog >::parents[] = {0};
const int LunaTraits< wxRichMessageDialog >::hash = 86910257;
const int LunaTraits< wxRichMessageDialog >::uniqueIDs[] = {86910257,0};

luna_RegType LunaTraits< wxRichMessageDialog >::methods[] = {
	{"ShowCheckBox", &luna_wrapper_wxRichMessageDialog::_bind_ShowCheckBox},
	{"GetCheckBoxText", &luna_wrapper_wxRichMessageDialog::_bind_GetCheckBoxText},
	{"ShowDetailedText", &luna_wrapper_wxRichMessageDialog::_bind_ShowDetailedText},
	{"GetDetailedText", &luna_wrapper_wxRichMessageDialog::_bind_GetDetailedText},
	{"IsCheckBoxChecked", &luna_wrapper_wxRichMessageDialog::_bind_IsCheckBoxChecked},
	{"ShowModal", &luna_wrapper_wxRichMessageDialog::_bind_ShowModal},
	{"base_ShowModal", &luna_wrapper_wxRichMessageDialog::_bind_base_ShowModal},
	{"dynCast", &luna_wrapper_wxRichMessageDialog::_bind_dynCast},
	{"__eq", &luna_wrapper_wxRichMessageDialog::_bind___eq},
	{"fromVoid", &luna_wrapper_wxRichMessageDialog::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRichMessageDialog::_bind_asVoid},
	{"getTable", &luna_wrapper_wxRichMessageDialog::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichMessageDialog >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichMessageDialog >::enumValues[] = {
	{0,0}
};


