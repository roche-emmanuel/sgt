#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPGEditor.h>

class luna_wrapper_wxPGEditor {
public:
	typedef Luna< wxPGEditor > luna_t;

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

		wxPGEditor* self= (wxPGEditor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPGEditor >::push(L,self,false);
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
		//wxPGEditor* ptr= dynamic_cast< wxPGEditor* >(Luna< wxObject >::check(L,1));
		wxPGEditor* ptr= luna_caster< wxObject, wxPGEditor >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPGEditor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CreateControls(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UpdateControl(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawValue(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20234418) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnEvent(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValueToUnspecified(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetControlAppearance(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,56813631) ) return false;
		if( lua_isboolean(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetControlStringValue(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetControlIntValue(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertItem(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteItem(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFocus(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanContainCustomImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_DrawValue(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20234418) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetControlAppearance(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,56813631) ) return false;
		if( lua_isboolean(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetControlStringValue(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetControlIntValue(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_InsertItem(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DeleteItem(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnFocus(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CanContainCustomImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxPGEditor::wxPGEditor(lua_Table * data)
	static wxPGEditor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxPGEditor::wxPGEditor(lua_Table * data) function, expected prototype:\nwxPGEditor::wxPGEditor(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxPGEditor(L,NULL);
	}


	// Function binds:
	// wxString wxPGEditor::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPGEditor::GetName() const function, expected prototype:\nwxString wxPGEditor::GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGEditor* self=Luna< wxObject >::checkSubType< wxPGEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPGEditor::GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxPGWindowList wxPGEditor::CreateControls(wxPropertyGrid * propgrid, wxPGProperty * property, const wxPoint & pos, const wxSize & size) const
	static int _bind_CreateControls(lua_State *L) {
		if (!_lg_typecheck_CreateControls(L)) {
			luaL_error(L, "luna typecheck failed in wxPGWindowList wxPGEditor::CreateControls(wxPropertyGrid * propgrid, wxPGProperty * property, const wxPoint & pos, const wxSize & size) const function, expected prototype:\nwxPGWindowList wxPGEditor::CreateControls(wxPropertyGrid * propgrid, wxPGProperty * property, const wxPoint & pos, const wxSize & size) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPropertyGrid* propgrid=(Luna< wxObject >::checkSubType< wxPropertyGrid >(L,2));
		wxPGProperty* property=(Luna< wxObject >::checkSubType< wxPGProperty >(L,3));
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,4));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxPGEditor::CreateControls function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,5));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPGEditor::CreateControls function");
		}
		const wxSize & size=*size_ptr;

		wxPGEditor* self=Luna< wxObject >::checkSubType< wxPGEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGWindowList wxPGEditor::CreateControls(wxPropertyGrid *, wxPGProperty *, const wxPoint &, const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGWindowList stack_lret = self->CreateControls(propgrid, property, pos, size);
		wxPGWindowList* lret = new wxPGWindowList(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGWindowList >::push(L,lret,true);

		return 1;
	}

	// void wxPGEditor::UpdateControl(wxPGProperty * property, wxWindow * ctrl) const
	static int _bind_UpdateControl(lua_State *L) {
		if (!_lg_typecheck_UpdateControl(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGEditor::UpdateControl(wxPGProperty * property, wxWindow * ctrl) const function, expected prototype:\nvoid wxPGEditor::UpdateControl(wxPGProperty * property, wxWindow * ctrl) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGProperty* property=(Luna< wxObject >::checkSubType< wxPGProperty >(L,2));
		wxWindow* ctrl=(Luna< wxObject >::checkSubType< wxWindow >(L,3));

		wxPGEditor* self=Luna< wxObject >::checkSubType< wxPGEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGEditor::UpdateControl(wxPGProperty *, wxWindow *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UpdateControl(property, ctrl);

		return 0;
	}

	// void wxPGEditor::DrawValue(wxDC & dc, const wxRect & rect, wxPGProperty * property, const wxString & text) const
	static int _bind_DrawValue(lua_State *L) {
		if (!_lg_typecheck_DrawValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGEditor::DrawValue(wxDC & dc, const wxRect & rect, wxPGProperty * property, const wxString & text) const function, expected prototype:\nvoid wxPGEditor::DrawValue(wxDC & dc, const wxRect & rect, wxPGProperty * property, const wxString & text) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 20234418\narg 3 ID = 56813631\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxPGEditor::DrawValue function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,3));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxPGEditor::DrawValue function");
		}
		const wxRect & rect=*rect_ptr;
		wxPGProperty* property=(Luna< wxObject >::checkSubType< wxPGProperty >(L,4));
		wxString text(lua_tostring(L,5),lua_objlen(L,5));

		wxPGEditor* self=Luna< wxObject >::checkSubType< wxPGEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGEditor::DrawValue(wxDC &, const wxRect &, wxPGProperty *, const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawValue(dc, rect, property, text);

		return 0;
	}

	// bool wxPGEditor::OnEvent(wxPropertyGrid * propgrid, wxPGProperty * property, wxWindow * wnd_primary, wxEvent & event) const
	static int _bind_OnEvent(lua_State *L) {
		if (!_lg_typecheck_OnEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPGEditor::OnEvent(wxPropertyGrid * propgrid, wxPGProperty * property, wxWindow * wnd_primary, wxEvent & event) const function, expected prototype:\nbool wxPGEditor::OnEvent(wxPropertyGrid * propgrid, wxPGProperty * property, wxWindow * wnd_primary, wxEvent & event) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPropertyGrid* propgrid=(Luna< wxObject >::checkSubType< wxPropertyGrid >(L,2));
		wxPGProperty* property=(Luna< wxObject >::checkSubType< wxPGProperty >(L,3));
		wxWindow* wnd_primary=(Luna< wxObject >::checkSubType< wxWindow >(L,4));
		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,5));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxPGEditor::OnEvent function");
		}
		wxEvent & event=*event_ptr;

		wxPGEditor* self=Luna< wxObject >::checkSubType< wxPGEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPGEditor::OnEvent(wxPropertyGrid *, wxPGProperty *, wxWindow *, wxEvent &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnEvent(propgrid, property, wnd_primary, event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPGEditor::SetValueToUnspecified(wxPGProperty * property, wxWindow * ctrl) const
	static int _bind_SetValueToUnspecified(lua_State *L) {
		if (!_lg_typecheck_SetValueToUnspecified(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGEditor::SetValueToUnspecified(wxPGProperty * property, wxWindow * ctrl) const function, expected prototype:\nvoid wxPGEditor::SetValueToUnspecified(wxPGProperty * property, wxWindow * ctrl) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGProperty* property=(Luna< wxObject >::checkSubType< wxPGProperty >(L,2));
		wxWindow* ctrl=(Luna< wxObject >::checkSubType< wxWindow >(L,3));

		wxPGEditor* self=Luna< wxObject >::checkSubType< wxPGEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGEditor::SetValueToUnspecified(wxPGProperty *, wxWindow *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueToUnspecified(property, ctrl);

		return 0;
	}

	// void wxPGEditor::SetControlAppearance(wxPropertyGrid * pg, wxPGProperty * property, wxWindow * ctrl, const wxPGCell & appearance, const wxPGCell & oldAppearance, bool unspecified) const
	static int _bind_SetControlAppearance(lua_State *L) {
		if (!_lg_typecheck_SetControlAppearance(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGEditor::SetControlAppearance(wxPropertyGrid * pg, wxPGProperty * property, wxWindow * ctrl, const wxPGCell & appearance, const wxPGCell & oldAppearance, bool unspecified) const function, expected prototype:\nvoid wxPGEditor::SetControlAppearance(wxPropertyGrid * pg, wxPGProperty * property, wxWindow * ctrl, const wxPGCell & appearance, const wxPGCell & oldAppearance, bool unspecified) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 56813631\narg 5 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPropertyGrid* pg=(Luna< wxObject >::checkSubType< wxPropertyGrid >(L,2));
		wxPGProperty* property=(Luna< wxObject >::checkSubType< wxPGProperty >(L,3));
		wxWindow* ctrl=(Luna< wxObject >::checkSubType< wxWindow >(L,4));
		const wxPGCell* appearance_ptr=(Luna< wxObject >::checkSubType< wxPGCell >(L,5));
		if( !appearance_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg appearance in wxPGEditor::SetControlAppearance function");
		}
		const wxPGCell & appearance=*appearance_ptr;
		const wxPGCell* oldAppearance_ptr=(Luna< wxObject >::checkSubType< wxPGCell >(L,6));
		if( !oldAppearance_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg oldAppearance in wxPGEditor::SetControlAppearance function");
		}
		const wxPGCell & oldAppearance=*oldAppearance_ptr;
		bool unspecified=(bool)(lua_toboolean(L,7)==1);

		wxPGEditor* self=Luna< wxObject >::checkSubType< wxPGEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGEditor::SetControlAppearance(wxPropertyGrid *, wxPGProperty *, wxWindow *, const wxPGCell &, const wxPGCell &, bool) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetControlAppearance(pg, property, ctrl, appearance, oldAppearance, unspecified);

		return 0;
	}

	// void wxPGEditor::SetControlStringValue(wxPGProperty * property, wxWindow * ctrl, const wxString & txt) const
	static int _bind_SetControlStringValue(lua_State *L) {
		if (!_lg_typecheck_SetControlStringValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGEditor::SetControlStringValue(wxPGProperty * property, wxWindow * ctrl, const wxString & txt) const function, expected prototype:\nvoid wxPGEditor::SetControlStringValue(wxPGProperty * property, wxWindow * ctrl, const wxString & txt) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGProperty* property=(Luna< wxObject >::checkSubType< wxPGProperty >(L,2));
		wxWindow* ctrl=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		wxString txt(lua_tostring(L,4),lua_objlen(L,4));

		wxPGEditor* self=Luna< wxObject >::checkSubType< wxPGEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGEditor::SetControlStringValue(wxPGProperty *, wxWindow *, const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetControlStringValue(property, ctrl, txt);

		return 0;
	}

	// void wxPGEditor::SetControlIntValue(wxPGProperty * property, wxWindow * ctrl, int value) const
	static int _bind_SetControlIntValue(lua_State *L) {
		if (!_lg_typecheck_SetControlIntValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGEditor::SetControlIntValue(wxPGProperty * property, wxWindow * ctrl, int value) const function, expected prototype:\nvoid wxPGEditor::SetControlIntValue(wxPGProperty * property, wxWindow * ctrl, int value) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGProperty* property=(Luna< wxObject >::checkSubType< wxPGProperty >(L,2));
		wxWindow* ctrl=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		int value=(int)lua_tointeger(L,4);

		wxPGEditor* self=Luna< wxObject >::checkSubType< wxPGEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGEditor::SetControlIntValue(wxPGProperty *, wxWindow *, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetControlIntValue(property, ctrl, value);

		return 0;
	}

	// int wxPGEditor::InsertItem(wxWindow * ctrl, const wxString & label, int index) const
	static int _bind_InsertItem(lua_State *L) {
		if (!_lg_typecheck_InsertItem(L)) {
			luaL_error(L, "luna typecheck failed in int wxPGEditor::InsertItem(wxWindow * ctrl, const wxString & label, int index) const function, expected prototype:\nint wxPGEditor::InsertItem(wxWindow * ctrl, const wxString & label, int index) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* ctrl=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		int index=(int)lua_tointeger(L,4);

		wxPGEditor* self=Luna< wxObject >::checkSubType< wxPGEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPGEditor::InsertItem(wxWindow *, const wxString &, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->InsertItem(ctrl, label, index);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxPGEditor::DeleteItem(wxWindow * ctrl, int index) const
	static int _bind_DeleteItem(lua_State *L) {
		if (!_lg_typecheck_DeleteItem(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGEditor::DeleteItem(wxWindow * ctrl, int index) const function, expected prototype:\nvoid wxPGEditor::DeleteItem(wxWindow * ctrl, int index) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* ctrl=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int index=(int)lua_tointeger(L,3);

		wxPGEditor* self=Luna< wxObject >::checkSubType< wxPGEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGEditor::DeleteItem(wxWindow *, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeleteItem(ctrl, index);

		return 0;
	}

	// void wxPGEditor::OnFocus(wxPGProperty * property, wxWindow * wnd) const
	static int _bind_OnFocus(lua_State *L) {
		if (!_lg_typecheck_OnFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGEditor::OnFocus(wxPGProperty * property, wxWindow * wnd) const function, expected prototype:\nvoid wxPGEditor::OnFocus(wxPGProperty * property, wxWindow * wnd) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGProperty* property=(Luna< wxObject >::checkSubType< wxPGProperty >(L,2));
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));

		wxPGEditor* self=Luna< wxObject >::checkSubType< wxPGEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGEditor::OnFocus(wxPGProperty *, wxWindow *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnFocus(property, wnd);

		return 0;
	}

	// bool wxPGEditor::CanContainCustomImage() const
	static int _bind_CanContainCustomImage(lua_State *L) {
		if (!_lg_typecheck_CanContainCustomImage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPGEditor::CanContainCustomImage() const function, expected prototype:\nbool wxPGEditor::CanContainCustomImage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGEditor* self=Luna< wxObject >::checkSubType< wxPGEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPGEditor::CanContainCustomImage() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanContainCustomImage();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxPGEditor::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxPGEditor::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxPGEditor::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGEditor* self=Luna< wxObject >::checkSubType< wxPGEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxPGEditor::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxPGEditor::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxString wxPGEditor::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPGEditor::base_GetName() const function, expected prototype:\nwxString wxPGEditor::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGEditor* self=Luna< wxObject >::checkSubType< wxPGEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPGEditor::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxPGEditor::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxPGEditor::base_DrawValue(wxDC & dc, const wxRect & rect, wxPGProperty * property, const wxString & text) const
	static int _bind_base_DrawValue(lua_State *L) {
		if (!_lg_typecheck_base_DrawValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGEditor::base_DrawValue(wxDC & dc, const wxRect & rect, wxPGProperty * property, const wxString & text) const function, expected prototype:\nvoid wxPGEditor::base_DrawValue(wxDC & dc, const wxRect & rect, wxPGProperty * property, const wxString & text) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 20234418\narg 3 ID = 56813631\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxPGEditor::base_DrawValue function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,3));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxPGEditor::base_DrawValue function");
		}
		const wxRect & rect=*rect_ptr;
		wxPGProperty* property=(Luna< wxObject >::checkSubType< wxPGProperty >(L,4));
		wxString text(lua_tostring(L,5),lua_objlen(L,5));

		wxPGEditor* self=Luna< wxObject >::checkSubType< wxPGEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGEditor::base_DrawValue(wxDC &, const wxRect &, wxPGProperty *, const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPGEditor::DrawValue(dc, rect, property, text);

		return 0;
	}

	// void wxPGEditor::base_SetControlAppearance(wxPropertyGrid * pg, wxPGProperty * property, wxWindow * ctrl, const wxPGCell & appearance, const wxPGCell & oldAppearance, bool unspecified) const
	static int _bind_base_SetControlAppearance(lua_State *L) {
		if (!_lg_typecheck_base_SetControlAppearance(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGEditor::base_SetControlAppearance(wxPropertyGrid * pg, wxPGProperty * property, wxWindow * ctrl, const wxPGCell & appearance, const wxPGCell & oldAppearance, bool unspecified) const function, expected prototype:\nvoid wxPGEditor::base_SetControlAppearance(wxPropertyGrid * pg, wxPGProperty * property, wxWindow * ctrl, const wxPGCell & appearance, const wxPGCell & oldAppearance, bool unspecified) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 56813631\narg 5 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPropertyGrid* pg=(Luna< wxObject >::checkSubType< wxPropertyGrid >(L,2));
		wxPGProperty* property=(Luna< wxObject >::checkSubType< wxPGProperty >(L,3));
		wxWindow* ctrl=(Luna< wxObject >::checkSubType< wxWindow >(L,4));
		const wxPGCell* appearance_ptr=(Luna< wxObject >::checkSubType< wxPGCell >(L,5));
		if( !appearance_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg appearance in wxPGEditor::base_SetControlAppearance function");
		}
		const wxPGCell & appearance=*appearance_ptr;
		const wxPGCell* oldAppearance_ptr=(Luna< wxObject >::checkSubType< wxPGCell >(L,6));
		if( !oldAppearance_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg oldAppearance in wxPGEditor::base_SetControlAppearance function");
		}
		const wxPGCell & oldAppearance=*oldAppearance_ptr;
		bool unspecified=(bool)(lua_toboolean(L,7)==1);

		wxPGEditor* self=Luna< wxObject >::checkSubType< wxPGEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGEditor::base_SetControlAppearance(wxPropertyGrid *, wxPGProperty *, wxWindow *, const wxPGCell &, const wxPGCell &, bool) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPGEditor::SetControlAppearance(pg, property, ctrl, appearance, oldAppearance, unspecified);

		return 0;
	}

	// void wxPGEditor::base_SetControlStringValue(wxPGProperty * property, wxWindow * ctrl, const wxString & txt) const
	static int _bind_base_SetControlStringValue(lua_State *L) {
		if (!_lg_typecheck_base_SetControlStringValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGEditor::base_SetControlStringValue(wxPGProperty * property, wxWindow * ctrl, const wxString & txt) const function, expected prototype:\nvoid wxPGEditor::base_SetControlStringValue(wxPGProperty * property, wxWindow * ctrl, const wxString & txt) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGProperty* property=(Luna< wxObject >::checkSubType< wxPGProperty >(L,2));
		wxWindow* ctrl=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		wxString txt(lua_tostring(L,4),lua_objlen(L,4));

		wxPGEditor* self=Luna< wxObject >::checkSubType< wxPGEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGEditor::base_SetControlStringValue(wxPGProperty *, wxWindow *, const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPGEditor::SetControlStringValue(property, ctrl, txt);

		return 0;
	}

	// void wxPGEditor::base_SetControlIntValue(wxPGProperty * property, wxWindow * ctrl, int value) const
	static int _bind_base_SetControlIntValue(lua_State *L) {
		if (!_lg_typecheck_base_SetControlIntValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGEditor::base_SetControlIntValue(wxPGProperty * property, wxWindow * ctrl, int value) const function, expected prototype:\nvoid wxPGEditor::base_SetControlIntValue(wxPGProperty * property, wxWindow * ctrl, int value) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGProperty* property=(Luna< wxObject >::checkSubType< wxPGProperty >(L,2));
		wxWindow* ctrl=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		int value=(int)lua_tointeger(L,4);

		wxPGEditor* self=Luna< wxObject >::checkSubType< wxPGEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGEditor::base_SetControlIntValue(wxPGProperty *, wxWindow *, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPGEditor::SetControlIntValue(property, ctrl, value);

		return 0;
	}

	// int wxPGEditor::base_InsertItem(wxWindow * ctrl, const wxString & label, int index) const
	static int _bind_base_InsertItem(lua_State *L) {
		if (!_lg_typecheck_base_InsertItem(L)) {
			luaL_error(L, "luna typecheck failed in int wxPGEditor::base_InsertItem(wxWindow * ctrl, const wxString & label, int index) const function, expected prototype:\nint wxPGEditor::base_InsertItem(wxWindow * ctrl, const wxString & label, int index) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* ctrl=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		int index=(int)lua_tointeger(L,4);

		wxPGEditor* self=Luna< wxObject >::checkSubType< wxPGEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPGEditor::base_InsertItem(wxWindow *, const wxString &, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxPGEditor::InsertItem(ctrl, label, index);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxPGEditor::base_DeleteItem(wxWindow * ctrl, int index) const
	static int _bind_base_DeleteItem(lua_State *L) {
		if (!_lg_typecheck_base_DeleteItem(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGEditor::base_DeleteItem(wxWindow * ctrl, int index) const function, expected prototype:\nvoid wxPGEditor::base_DeleteItem(wxWindow * ctrl, int index) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* ctrl=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int index=(int)lua_tointeger(L,3);

		wxPGEditor* self=Luna< wxObject >::checkSubType< wxPGEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGEditor::base_DeleteItem(wxWindow *, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPGEditor::DeleteItem(ctrl, index);

		return 0;
	}

	// void wxPGEditor::base_OnFocus(wxPGProperty * property, wxWindow * wnd) const
	static int _bind_base_OnFocus(lua_State *L) {
		if (!_lg_typecheck_base_OnFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGEditor::base_OnFocus(wxPGProperty * property, wxWindow * wnd) const function, expected prototype:\nvoid wxPGEditor::base_OnFocus(wxPGProperty * property, wxWindow * wnd) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGProperty* property=(Luna< wxObject >::checkSubType< wxPGProperty >(L,2));
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));

		wxPGEditor* self=Luna< wxObject >::checkSubType< wxPGEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGEditor::base_OnFocus(wxPGProperty *, wxWindow *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPGEditor::OnFocus(property, wnd);

		return 0;
	}

	// bool wxPGEditor::base_CanContainCustomImage() const
	static int _bind_base_CanContainCustomImage(lua_State *L) {
		if (!_lg_typecheck_base_CanContainCustomImage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPGEditor::base_CanContainCustomImage() const function, expected prototype:\nbool wxPGEditor::base_CanContainCustomImage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGEditor* self=Luna< wxObject >::checkSubType< wxPGEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPGEditor::base_CanContainCustomImage() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPGEditor::CanContainCustomImage();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxPGEditor* LunaTraits< wxPGEditor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPGEditor::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxPGWindowList wxPGEditor::CreateControls(wxPropertyGrid * propgrid, wxPGProperty * property, const wxPoint & pos, const wxSize & size) const
	// void wxPGEditor::UpdateControl(wxPGProperty * property, wxWindow * ctrl) const
	// bool wxPGEditor::OnEvent(wxPropertyGrid * propgrid, wxPGProperty * property, wxWindow * wnd_primary, wxEvent & event) const
	// void wxPGEditor::SetValueToUnspecified(wxPGProperty * property, wxWindow * ctrl) const
}

void LunaTraits< wxPGEditor >::_bind_dtor(wxPGEditor* obj) {
	delete obj;
}

const char LunaTraits< wxPGEditor >::className[] = "wxPGEditor";
const char LunaTraits< wxPGEditor >::fullName[] = "wxPGEditor";
const char LunaTraits< wxPGEditor >::moduleName[] = "wx";
const char* LunaTraits< wxPGEditor >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxPGEditor >::hash = 87889166;
const int LunaTraits< wxPGEditor >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPGEditor >::methods[] = {
	{"GetName", &luna_wrapper_wxPGEditor::_bind_GetName},
	{"CreateControls", &luna_wrapper_wxPGEditor::_bind_CreateControls},
	{"UpdateControl", &luna_wrapper_wxPGEditor::_bind_UpdateControl},
	{"DrawValue", &luna_wrapper_wxPGEditor::_bind_DrawValue},
	{"OnEvent", &luna_wrapper_wxPGEditor::_bind_OnEvent},
	{"SetValueToUnspecified", &luna_wrapper_wxPGEditor::_bind_SetValueToUnspecified},
	{"SetControlAppearance", &luna_wrapper_wxPGEditor::_bind_SetControlAppearance},
	{"SetControlStringValue", &luna_wrapper_wxPGEditor::_bind_SetControlStringValue},
	{"SetControlIntValue", &luna_wrapper_wxPGEditor::_bind_SetControlIntValue},
	{"InsertItem", &luna_wrapper_wxPGEditor::_bind_InsertItem},
	{"DeleteItem", &luna_wrapper_wxPGEditor::_bind_DeleteItem},
	{"OnFocus", &luna_wrapper_wxPGEditor::_bind_OnFocus},
	{"CanContainCustomImage", &luna_wrapper_wxPGEditor::_bind_CanContainCustomImage},
	{"base_GetClassInfo", &luna_wrapper_wxPGEditor::_bind_base_GetClassInfo},
	{"base_GetName", &luna_wrapper_wxPGEditor::_bind_base_GetName},
	{"base_DrawValue", &luna_wrapper_wxPGEditor::_bind_base_DrawValue},
	{"base_SetControlAppearance", &luna_wrapper_wxPGEditor::_bind_base_SetControlAppearance},
	{"base_SetControlStringValue", &luna_wrapper_wxPGEditor::_bind_base_SetControlStringValue},
	{"base_SetControlIntValue", &luna_wrapper_wxPGEditor::_bind_base_SetControlIntValue},
	{"base_InsertItem", &luna_wrapper_wxPGEditor::_bind_base_InsertItem},
	{"base_DeleteItem", &luna_wrapper_wxPGEditor::_bind_base_DeleteItem},
	{"base_OnFocus", &luna_wrapper_wxPGEditor::_bind_base_OnFocus},
	{"base_CanContainCustomImage", &luna_wrapper_wxPGEditor::_bind_base_CanContainCustomImage},
	{"fromVoid", &luna_wrapper_wxPGEditor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPGEditor::_bind_asVoid},
	{"getTable", &luna_wrapper_wxPGEditor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxPGEditor >::converters[] = {
	{"wxObject", &luna_wrapper_wxPGEditor::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPGEditor >::enumValues[] = {
	{0,0}
};


