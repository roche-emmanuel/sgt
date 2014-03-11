#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTaskBarIcon.h>

class luna_wrapper_wxTaskBarIcon {
public:
	typedef Luna< wxTaskBarIcon > luna_t;

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

		wxTaskBarIcon* self= (wxTaskBarIcon*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTaskBarIcon >::push(L,self,false);
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
		//wxTaskBarIcon* ptr= dynamic_cast< wxTaskBarIcon* >(Luna< wxObject >::check(L,1));
		wxTaskBarIcon* ptr= luna_caster< wxObject, wxTaskBarIcon >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTaskBarIcon >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Destroy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsIconInstalled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PopupMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveIcon(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetIcon(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsAvailable(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_QueueEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AddPendingEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ProcessEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetNextHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetPreviousHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_PopupMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_RemoveIcon(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetIcon(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTaskBarIcon::wxTaskBarIcon()
	static wxTaskBarIcon* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxTaskBarIcon::wxTaskBarIcon() function, expected prototype:\nwxTaskBarIcon::wxTaskBarIcon()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxTaskBarIcon();
	}

	// wxTaskBarIcon::wxTaskBarIcon(lua_Table * data)
	static wxTaskBarIcon* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxTaskBarIcon::wxTaskBarIcon(lua_Table * data) function, expected prototype:\nwxTaskBarIcon::wxTaskBarIcon(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxTaskBarIcon(L,NULL);
	}

	// Overload binder for wxTaskBarIcon::wxTaskBarIcon
	static wxTaskBarIcon* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxTaskBarIcon, cannot match any of the overloads for function wxTaskBarIcon:\n  wxTaskBarIcon()\n  wxTaskBarIcon(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void wxTaskBarIcon::Destroy()
	static int _bind_Destroy(lua_State *L) {
		if (!_lg_typecheck_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in void wxTaskBarIcon::Destroy() function, expected prototype:\nvoid wxTaskBarIcon::Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTaskBarIcon* self=Luna< wxObject >::checkSubType< wxTaskBarIcon >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTaskBarIcon::Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Destroy();

		return 0;
	}

	// bool wxTaskBarIcon::IsIconInstalled() const
	static int _bind_IsIconInstalled(lua_State *L) {
		if (!_lg_typecheck_IsIconInstalled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTaskBarIcon::IsIconInstalled() const function, expected prototype:\nbool wxTaskBarIcon::IsIconInstalled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTaskBarIcon* self=Luna< wxObject >::checkSubType< wxTaskBarIcon >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTaskBarIcon::IsIconInstalled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsIconInstalled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTaskBarIcon::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTaskBarIcon::IsOk() const function, expected prototype:\nbool wxTaskBarIcon::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTaskBarIcon* self=Luna< wxObject >::checkSubType< wxTaskBarIcon >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTaskBarIcon::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTaskBarIcon::PopupMenu(wxMenu * menu)
	static int _bind_PopupMenu(lua_State *L) {
		if (!_lg_typecheck_PopupMenu(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTaskBarIcon::PopupMenu(wxMenu * menu) function, expected prototype:\nbool wxTaskBarIcon::PopupMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,2));

		wxTaskBarIcon* self=Luna< wxObject >::checkSubType< wxTaskBarIcon >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTaskBarIcon::PopupMenu(wxMenu *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PopupMenu(menu);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTaskBarIcon::RemoveIcon()
	static int _bind_RemoveIcon(lua_State *L) {
		if (!_lg_typecheck_RemoveIcon(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTaskBarIcon::RemoveIcon() function, expected prototype:\nbool wxTaskBarIcon::RemoveIcon()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTaskBarIcon* self=Luna< wxObject >::checkSubType< wxTaskBarIcon >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTaskBarIcon::RemoveIcon(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RemoveIcon();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTaskBarIcon::SetIcon(const wxIcon & icon, const wxString & tooltip = wxEmptyString)
	static int _bind_SetIcon(lua_State *L) {
		if (!_lg_typecheck_SetIcon(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTaskBarIcon::SetIcon(const wxIcon & icon, const wxString & tooltip = wxEmptyString) function, expected prototype:\nbool wxTaskBarIcon::SetIcon(const wxIcon & icon, const wxString & tooltip = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxIcon* icon_ptr=(Luna< wxObject >::checkSubType< wxIcon >(L,2));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxTaskBarIcon::SetIcon function");
		}
		const wxIcon & icon=*icon_ptr;
		wxString tooltip(lua_tostring(L,3),lua_objlen(L,3));

		wxTaskBarIcon* self=Luna< wxObject >::checkSubType< wxTaskBarIcon >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTaskBarIcon::SetIcon(const wxIcon &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetIcon(icon, tooltip);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxTaskBarIcon::IsAvailable()
	static int _bind_IsAvailable(lua_State *L) {
		if (!_lg_typecheck_IsAvailable(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxTaskBarIcon::IsAvailable() function, expected prototype:\nstatic bool wxTaskBarIcon::IsAvailable()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		bool lret = wxTaskBarIcon::IsAvailable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxTaskBarIcon::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxTaskBarIcon::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxTaskBarIcon::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTaskBarIcon* self=Luna< wxObject >::checkSubType< wxTaskBarIcon >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxTaskBarIcon::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxTaskBarIcon::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void wxTaskBarIcon::base_QueueEvent(wxEvent * event)
	static int _bind_base_QueueEvent(lua_State *L) {
		if (!_lg_typecheck_base_QueueEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxTaskBarIcon::base_QueueEvent(wxEvent * event) function, expected prototype:\nvoid wxTaskBarIcon::base_QueueEvent(wxEvent * event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event=(Luna< wxObject >::checkSubType< wxEvent >(L,2));

		wxTaskBarIcon* self=Luna< wxObject >::checkSubType< wxTaskBarIcon >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTaskBarIcon::base_QueueEvent(wxEvent *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTaskBarIcon::QueueEvent(event);

		return 0;
	}

	// void wxTaskBarIcon::base_AddPendingEvent(const wxEvent & event)
	static int _bind_base_AddPendingEvent(lua_State *L) {
		if (!_lg_typecheck_base_AddPendingEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxTaskBarIcon::base_AddPendingEvent(const wxEvent & event) function, expected prototype:\nvoid wxTaskBarIcon::base_AddPendingEvent(const wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxTaskBarIcon::base_AddPendingEvent function");
		}
		const wxEvent & event=*event_ptr;

		wxTaskBarIcon* self=Luna< wxObject >::checkSubType< wxTaskBarIcon >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTaskBarIcon::base_AddPendingEvent(const wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTaskBarIcon::AddPendingEvent(event);

		return 0;
	}

	// bool wxTaskBarIcon::base_ProcessEvent(wxEvent & event)
	static int _bind_base_ProcessEvent(lua_State *L) {
		if (!_lg_typecheck_base_ProcessEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTaskBarIcon::base_ProcessEvent(wxEvent & event) function, expected prototype:\nbool wxTaskBarIcon::base_ProcessEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxTaskBarIcon::base_ProcessEvent function");
		}
		wxEvent & event=*event_ptr;

		wxTaskBarIcon* self=Luna< wxObject >::checkSubType< wxTaskBarIcon >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTaskBarIcon::base_ProcessEvent(wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTaskBarIcon::ProcessEvent(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTaskBarIcon::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxTaskBarIcon::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxTaskBarIcon::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxTaskBarIcon* self=Luna< wxObject >::checkSubType< wxTaskBarIcon >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTaskBarIcon::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTaskBarIcon::SetNextHandler(handler);

		return 0;
	}

	// void wxTaskBarIcon::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxTaskBarIcon::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxTaskBarIcon::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxTaskBarIcon* self=Luna< wxObject >::checkSubType< wxTaskBarIcon >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTaskBarIcon::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTaskBarIcon::SetPreviousHandler(handler);

		return 0;
	}

	// bool wxTaskBarIcon::base_PopupMenu(wxMenu * menu)
	static int _bind_base_PopupMenu(lua_State *L) {
		if (!_lg_typecheck_base_PopupMenu(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTaskBarIcon::base_PopupMenu(wxMenu * menu) function, expected prototype:\nbool wxTaskBarIcon::base_PopupMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,2));

		wxTaskBarIcon* self=Luna< wxObject >::checkSubType< wxTaskBarIcon >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTaskBarIcon::base_PopupMenu(wxMenu *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTaskBarIcon::PopupMenu(menu);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTaskBarIcon::base_RemoveIcon()
	static int _bind_base_RemoveIcon(lua_State *L) {
		if (!_lg_typecheck_base_RemoveIcon(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTaskBarIcon::base_RemoveIcon() function, expected prototype:\nbool wxTaskBarIcon::base_RemoveIcon()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTaskBarIcon* self=Luna< wxObject >::checkSubType< wxTaskBarIcon >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTaskBarIcon::base_RemoveIcon(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTaskBarIcon::RemoveIcon();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTaskBarIcon::base_SetIcon(const wxIcon & icon, const wxString & tooltip = wxEmptyString)
	static int _bind_base_SetIcon(lua_State *L) {
		if (!_lg_typecheck_base_SetIcon(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTaskBarIcon::base_SetIcon(const wxIcon & icon, const wxString & tooltip = wxEmptyString) function, expected prototype:\nbool wxTaskBarIcon::base_SetIcon(const wxIcon & icon, const wxString & tooltip = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxIcon* icon_ptr=(Luna< wxObject >::checkSubType< wxIcon >(L,2));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxTaskBarIcon::base_SetIcon function");
		}
		const wxIcon & icon=*icon_ptr;
		wxString tooltip(lua_tostring(L,3),lua_objlen(L,3));

		wxTaskBarIcon* self=Luna< wxObject >::checkSubType< wxTaskBarIcon >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTaskBarIcon::base_SetIcon(const wxIcon &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTaskBarIcon::SetIcon(icon, tooltip);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxTaskBarIcon* LunaTraits< wxTaskBarIcon >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTaskBarIcon::_bind_ctor(L);
}

void LunaTraits< wxTaskBarIcon >::_bind_dtor(wxTaskBarIcon* obj) {
	delete obj;
}

const char LunaTraits< wxTaskBarIcon >::className[] = "wxTaskBarIcon";
const char LunaTraits< wxTaskBarIcon >::fullName[] = "wxTaskBarIcon";
const char LunaTraits< wxTaskBarIcon >::moduleName[] = "wx";
const char* LunaTraits< wxTaskBarIcon >::parents[] = {"wx.wxEvtHandler", 0};
const int LunaTraits< wxTaskBarIcon >::hash = 18851104;
const int LunaTraits< wxTaskBarIcon >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxTaskBarIcon >::methods[] = {
	{"Destroy", &luna_wrapper_wxTaskBarIcon::_bind_Destroy},
	{"IsIconInstalled", &luna_wrapper_wxTaskBarIcon::_bind_IsIconInstalled},
	{"IsOk", &luna_wrapper_wxTaskBarIcon::_bind_IsOk},
	{"PopupMenu", &luna_wrapper_wxTaskBarIcon::_bind_PopupMenu},
	{"RemoveIcon", &luna_wrapper_wxTaskBarIcon::_bind_RemoveIcon},
	{"SetIcon", &luna_wrapper_wxTaskBarIcon::_bind_SetIcon},
	{"IsAvailable", &luna_wrapper_wxTaskBarIcon::_bind_IsAvailable},
	{"base_GetClassInfo", &luna_wrapper_wxTaskBarIcon::_bind_base_GetClassInfo},
	{"base_QueueEvent", &luna_wrapper_wxTaskBarIcon::_bind_base_QueueEvent},
	{"base_AddPendingEvent", &luna_wrapper_wxTaskBarIcon::_bind_base_AddPendingEvent},
	{"base_ProcessEvent", &luna_wrapper_wxTaskBarIcon::_bind_base_ProcessEvent},
	{"base_SetNextHandler", &luna_wrapper_wxTaskBarIcon::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxTaskBarIcon::_bind_base_SetPreviousHandler},
	{"base_PopupMenu", &luna_wrapper_wxTaskBarIcon::_bind_base_PopupMenu},
	{"base_RemoveIcon", &luna_wrapper_wxTaskBarIcon::_bind_base_RemoveIcon},
	{"base_SetIcon", &luna_wrapper_wxTaskBarIcon::_bind_base_SetIcon},
	{"fromVoid", &luna_wrapper_wxTaskBarIcon::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTaskBarIcon::_bind_asVoid},
	{"getTable", &luna_wrapper_wxTaskBarIcon::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxTaskBarIcon >::converters[] = {
	{"wxObject", &luna_wrapper_wxTaskBarIcon::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTaskBarIcon >::enumValues[] = {
	{0,0}
};


