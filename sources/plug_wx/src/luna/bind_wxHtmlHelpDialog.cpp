#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlHelpDialog.h>

class luna_wrapper_wxHtmlHelpDialog {
public:
	typedef Luna< wxHtmlHelpDialog > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
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

		wxHtmlHelpDialog* self= (wxHtmlHelpDialog*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxHtmlHelpDialog >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxHtmlHelpDialog* ptr= dynamic_cast< wxHtmlHelpDialog* >(Luna< wxObject >::check(L,1));
		wxHtmlHelpDialog* ptr= luna_caster< wxObject, wxHtmlHelpDialog >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlHelpDialog >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>0 && (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56813631)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !(Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,5)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !(Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,6)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddToolbarButtons(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetController(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetController(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,14199711)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTitleFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHtmlHelpDialog::wxHtmlHelpDialog(wxHtmlHelpData * data = NULL)
	static wxHtmlHelpDialog* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlHelpDialog::wxHtmlHelpDialog(wxHtmlHelpData * data = NULL) function, expected prototype:\nwxHtmlHelpDialog::wxHtmlHelpDialog(wxHtmlHelpData * data = NULL)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxHtmlHelpData* data=luatop>0 ? (Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,1)) : (wxHtmlHelpData*)NULL;

		return new wxHtmlHelpDialog(data);
	}

	// wxHtmlHelpDialog::wxHtmlHelpDialog(wxWindow * parent, int wxWindowID, const wxString & title = wxEmptyString, int style = wxHF_DEFAULT_STYLE, wxHtmlHelpData * data = NULL)
	static wxHtmlHelpDialog* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlHelpDialog::wxHtmlHelpDialog(wxWindow * parent, int wxWindowID, const wxString & title = wxEmptyString, int style = wxHF_DEFAULT_STYLE, wxHtmlHelpData * data = NULL) function, expected prototype:\nwxHtmlHelpDialog::wxHtmlHelpDialog(wxWindow * parent, int wxWindowID, const wxString & title = wxEmptyString, int style = wxHF_DEFAULT_STYLE, wxHtmlHelpData * data = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 5 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int wxWindowID=(int)lua_tointeger(L,2);
		wxString title(lua_tostring(L,3),lua_objlen(L,3));
		int style=luatop>3 ? (int)lua_tointeger(L,4) : (int)wxHF_DEFAULT_STYLE;
		wxHtmlHelpData* data=luatop>4 ? (Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,5)) : (wxHtmlHelpData*)NULL;

		return new wxHtmlHelpDialog(parent, wxWindowID, title, style, data);
	}

	// wxHtmlHelpDialog::wxHtmlHelpDialog(lua_Table * data, wxHtmlHelpData * data = NULL)
	static wxHtmlHelpDialog* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlHelpDialog::wxHtmlHelpDialog(lua_Table * data, wxHtmlHelpData * data = NULL) function, expected prototype:\nwxHtmlHelpDialog::wxHtmlHelpDialog(lua_Table * data, wxHtmlHelpData * data = NULL)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxHtmlHelpData* data=luatop>1 ? (Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,2)) : (wxHtmlHelpData*)NULL;

		return new wrapper_wxHtmlHelpDialog(L,NULL, data);
	}

	// wxHtmlHelpDialog::wxHtmlHelpDialog(lua_Table * data, wxWindow * parent, int wxWindowID, const wxString & title = wxEmptyString, int style = wxHF_DEFAULT_STYLE, wxHtmlHelpData * data = NULL)
	static wxHtmlHelpDialog* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlHelpDialog::wxHtmlHelpDialog(lua_Table * data, wxWindow * parent, int wxWindowID, const wxString & title = wxEmptyString, int style = wxHF_DEFAULT_STYLE, wxHtmlHelpData * data = NULL) function, expected prototype:\nwxHtmlHelpDialog::wxHtmlHelpDialog(lua_Table * data, wxWindow * parent, int wxWindowID, const wxString & title = wxEmptyString, int style = wxHF_DEFAULT_STYLE, wxHtmlHelpData * data = NULL)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 88196105\narg 6 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int wxWindowID=(int)lua_tointeger(L,3);
		wxString title(lua_tostring(L,4),lua_objlen(L,4));
		int style=luatop>4 ? (int)lua_tointeger(L,5) : (int)wxHF_DEFAULT_STYLE;
		wxHtmlHelpData* data=luatop>5 ? (Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,6)) : (wxHtmlHelpData*)NULL;

		return new wrapper_wxHtmlHelpDialog(L,NULL, parent, wxWindowID, title, style, data);
	}

	// Overload binder for wxHtmlHelpDialog::wxHtmlHelpDialog
	static wxHtmlHelpDialog* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxHtmlHelpDialog, cannot match any of the overloads for function wxHtmlHelpDialog:\n  wxHtmlHelpDialog(wxHtmlHelpData *)\n  wxHtmlHelpDialog(wxWindow *, int, const wxString &, int, wxHtmlHelpData *)\n  wxHtmlHelpDialog(lua_Table *, wxHtmlHelpData *)\n  wxHtmlHelpDialog(lua_Table *, wxWindow *, int, const wxString &, int, wxHtmlHelpData *)\n");
		return NULL;
	}


	// Function binds:
	// void wxHtmlHelpDialog::AddToolbarButtons(wxToolBar * toolBar, int style)
	static int _bind_AddToolbarButtons(lua_State *L) {
		if (!_lg_typecheck_AddToolbarButtons(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpDialog::AddToolbarButtons(wxToolBar * toolBar, int style) function, expected prototype:\nvoid wxHtmlHelpDialog::AddToolbarButtons(wxToolBar * toolBar, int style)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxToolBar* toolBar=(Luna< wxObject >::checkSubType< wxToolBar >(L,2));
		int style=(int)lua_tointeger(L,3);

		wxHtmlHelpDialog* self=Luna< wxObject >::checkSubType< wxHtmlHelpDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlHelpDialog::AddToolbarButtons(wxToolBar *, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddToolbarButtons(toolBar, style);

		return 0;
	}

	// bool wxHtmlHelpDialog::Create(wxWindow * parent, int id, const wxString & title = wxEmptyString, int style = wxHF_DEFAULT_STYLE)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpDialog::Create(wxWindow * parent, int id, const wxString & title = wxEmptyString, int style = wxHF_DEFAULT_STYLE) function, expected prototype:\nbool wxHtmlHelpDialog::Create(wxWindow * parent, int id, const wxString & title = wxEmptyString, int style = wxHF_DEFAULT_STYLE)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString title(lua_tostring(L,4),lua_objlen(L,4));
		int style=luatop>4 ? (int)lua_tointeger(L,5) : (int)wxHF_DEFAULT_STYLE;

		wxHtmlHelpDialog* self=Luna< wxObject >::checkSubType< wxHtmlHelpDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpDialog::Create(wxWindow *, int, const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(parent, id, title, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxHtmlHelpController * wxHtmlHelpDialog::GetController() const
	static int _bind_GetController(lua_State *L) {
		if (!_lg_typecheck_GetController(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlHelpController * wxHtmlHelpDialog::GetController() const function, expected prototype:\nwxHtmlHelpController * wxHtmlHelpDialog::GetController() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlHelpDialog* self=Luna< wxObject >::checkSubType< wxHtmlHelpDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxHtmlHelpController * wxHtmlHelpDialog::GetController() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxHtmlHelpController * lret = self->GetController();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlHelpController >::push(L,lret,false);

		return 1;
	}

	// void wxHtmlHelpDialog::SetController(wxHtmlHelpController * controller)
	static int _bind_SetController(lua_State *L) {
		if (!_lg_typecheck_SetController(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpDialog::SetController(wxHtmlHelpController * controller) function, expected prototype:\nvoid wxHtmlHelpDialog::SetController(wxHtmlHelpController * controller)\nClass arguments details:\narg 1 ID = 14199711\n\n%s",luna_dumpStack(L).c_str());
		}

		wxHtmlHelpController* controller=(Luna< wxHtmlHelpController >::check(L,2));

		wxHtmlHelpDialog* self=Luna< wxObject >::checkSubType< wxHtmlHelpDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlHelpDialog::SetController(wxHtmlHelpController *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetController(controller);

		return 0;
	}

	// void wxHtmlHelpDialog::SetTitleFormat(const wxString & format)
	static int _bind_SetTitleFormat(lua_State *L) {
		if (!_lg_typecheck_SetTitleFormat(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpDialog::SetTitleFormat(const wxString & format) function, expected prototype:\nvoid wxHtmlHelpDialog::SetTitleFormat(const wxString & format)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString format(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlHelpDialog* self=Luna< wxObject >::checkSubType< wxHtmlHelpDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlHelpDialog::SetTitleFormat(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTitleFormat(format);

		return 0;
	}


	// Operator binds:

};

wxHtmlHelpDialog* LunaTraits< wxHtmlHelpDialog >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlHelpDialog::_bind_ctor(L);
}

void LunaTraits< wxHtmlHelpDialog >::_bind_dtor(wxHtmlHelpDialog* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlHelpDialog >::className[] = "wxHtmlHelpDialog";
const char LunaTraits< wxHtmlHelpDialog >::fullName[] = "wxHtmlHelpDialog";
const char LunaTraits< wxHtmlHelpDialog >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlHelpDialog >::parents[] = {"wx.wxFrame", 0};
const int LunaTraits< wxHtmlHelpDialog >::hash = 2086609;
const int LunaTraits< wxHtmlHelpDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxHtmlHelpDialog >::methods[] = {
	{"AddToolbarButtons", &luna_wrapper_wxHtmlHelpDialog::_bind_AddToolbarButtons},
	{"Create", &luna_wrapper_wxHtmlHelpDialog::_bind_Create},
	{"GetController", &luna_wrapper_wxHtmlHelpDialog::_bind_GetController},
	{"SetController", &luna_wrapper_wxHtmlHelpDialog::_bind_SetController},
	{"SetTitleFormat", &luna_wrapper_wxHtmlHelpDialog::_bind_SetTitleFormat},
	{"fromVoid", &luna_wrapper_wxHtmlHelpDialog::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxHtmlHelpDialog::_bind_asVoid},
	{"getTable", &luna_wrapper_wxHtmlHelpDialog::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlHelpDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlHelpDialog::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlHelpDialog >::enumValues[] = {
	{0,0}
};


