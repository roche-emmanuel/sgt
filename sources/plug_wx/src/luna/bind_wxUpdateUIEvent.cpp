#include <plug_common.h>

#include <luna/wrappers/wrapper_wxUpdateUIEvent.h>

class luna_wrapper_wxUpdateUIEvent {
public:
	typedef Luna< wxUpdateUIEvent > luna_t;

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

		wxUpdateUIEvent* self= (wxUpdateUIEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxUpdateUIEvent >::push(L,self,false);
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
		//wxUpdateUIEvent* ptr= dynamic_cast< wxUpdateUIEvent* >(Luna< wxObject >::check(L,1));
		wxUpdateUIEvent* ptr= luna_caster< wxObject, wxUpdateUIEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxUpdateUIEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Check(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Enable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetChecked(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSetChecked(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSetEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSetShown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSetText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetShown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Show(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanUpdate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMode(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUpdateInterval(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ResetUpdateTime(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUpdateInterval(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetEventCategory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxUpdateUIEvent::wxUpdateUIEvent(int commandId = 0)
	static wxUpdateUIEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxUpdateUIEvent::wxUpdateUIEvent(int commandId = 0) function, expected prototype:\nwxUpdateUIEvent::wxUpdateUIEvent(int commandId = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int commandId=luatop>0 ? (int)lua_tointeger(L,1) : (int)0;

		return new wxUpdateUIEvent(commandId);
	}

	// wxUpdateUIEvent::wxUpdateUIEvent(lua_Table * data, int commandId = 0)
	static wxUpdateUIEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxUpdateUIEvent::wxUpdateUIEvent(lua_Table * data, int commandId = 0) function, expected prototype:\nwxUpdateUIEvent::wxUpdateUIEvent(lua_Table * data, int commandId = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int commandId=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		return new wrapper_wxUpdateUIEvent(L,NULL, commandId);
	}

	// Overload binder for wxUpdateUIEvent::wxUpdateUIEvent
	static wxUpdateUIEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxUpdateUIEvent, cannot match any of the overloads for function wxUpdateUIEvent:\n  wxUpdateUIEvent(int)\n  wxUpdateUIEvent(lua_Table *, int)\n");
		return NULL;
	}


	// Function binds:
	// void wxUpdateUIEvent::Check(bool check)
	static int _bind_Check(lua_State *L) {
		if (!_lg_typecheck_Check(L)) {
			luaL_error(L, "luna typecheck failed in void wxUpdateUIEvent::Check(bool check) function, expected prototype:\nvoid wxUpdateUIEvent::Check(bool check)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool check=(bool)(lua_toboolean(L,2)==1);

		wxUpdateUIEvent* self=Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxUpdateUIEvent::Check(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Check(check);

		return 0;
	}

	// void wxUpdateUIEvent::Enable(bool enable)
	static int _bind_Enable(lua_State *L) {
		if (!_lg_typecheck_Enable(L)) {
			luaL_error(L, "luna typecheck failed in void wxUpdateUIEvent::Enable(bool enable) function, expected prototype:\nvoid wxUpdateUIEvent::Enable(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxUpdateUIEvent* self=Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxUpdateUIEvent::Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Enable(enable);

		return 0;
	}

	// bool wxUpdateUIEvent::GetChecked() const
	static int _bind_GetChecked(lua_State *L) {
		if (!_lg_typecheck_GetChecked(L)) {
			luaL_error(L, "luna typecheck failed in bool wxUpdateUIEvent::GetChecked() const function, expected prototype:\nbool wxUpdateUIEvent::GetChecked() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxUpdateUIEvent* self=Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxUpdateUIEvent::GetChecked() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetChecked();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxUpdateUIEvent::GetEnabled() const
	static int _bind_GetEnabled(lua_State *L) {
		if (!_lg_typecheck_GetEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxUpdateUIEvent::GetEnabled() const function, expected prototype:\nbool wxUpdateUIEvent::GetEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxUpdateUIEvent* self=Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxUpdateUIEvent::GetEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxUpdateUIEvent::GetSetChecked() const
	static int _bind_GetSetChecked(lua_State *L) {
		if (!_lg_typecheck_GetSetChecked(L)) {
			luaL_error(L, "luna typecheck failed in bool wxUpdateUIEvent::GetSetChecked() const function, expected prototype:\nbool wxUpdateUIEvent::GetSetChecked() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxUpdateUIEvent* self=Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxUpdateUIEvent::GetSetChecked() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetSetChecked();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxUpdateUIEvent::GetSetEnabled() const
	static int _bind_GetSetEnabled(lua_State *L) {
		if (!_lg_typecheck_GetSetEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxUpdateUIEvent::GetSetEnabled() const function, expected prototype:\nbool wxUpdateUIEvent::GetSetEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxUpdateUIEvent* self=Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxUpdateUIEvent::GetSetEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetSetEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxUpdateUIEvent::GetSetShown() const
	static int _bind_GetSetShown(lua_State *L) {
		if (!_lg_typecheck_GetSetShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxUpdateUIEvent::GetSetShown() const function, expected prototype:\nbool wxUpdateUIEvent::GetSetShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxUpdateUIEvent* self=Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxUpdateUIEvent::GetSetShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetSetShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxUpdateUIEvent::GetSetText() const
	static int _bind_GetSetText(lua_State *L) {
		if (!_lg_typecheck_GetSetText(L)) {
			luaL_error(L, "luna typecheck failed in bool wxUpdateUIEvent::GetSetText() const function, expected prototype:\nbool wxUpdateUIEvent::GetSetText() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxUpdateUIEvent* self=Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxUpdateUIEvent::GetSetText() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetSetText();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxUpdateUIEvent::GetShown() const
	static int _bind_GetShown(lua_State *L) {
		if (!_lg_typecheck_GetShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxUpdateUIEvent::GetShown() const function, expected prototype:\nbool wxUpdateUIEvent::GetShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxUpdateUIEvent* self=Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxUpdateUIEvent::GetShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxUpdateUIEvent::GetText() const
	static int _bind_GetText(lua_State *L) {
		if (!_lg_typecheck_GetText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxUpdateUIEvent::GetText() const function, expected prototype:\nwxString wxUpdateUIEvent::GetText() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxUpdateUIEvent* self=Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxUpdateUIEvent::GetText() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxUpdateUIEvent::SetText(const wxString & text)
	static int _bind_SetText(lua_State *L) {
		if (!_lg_typecheck_SetText(L)) {
			luaL_error(L, "luna typecheck failed in void wxUpdateUIEvent::SetText(const wxString & text) function, expected prototype:\nvoid wxUpdateUIEvent::SetText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxUpdateUIEvent* self=Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxUpdateUIEvent::SetText(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetText(text);

		return 0;
	}

	// void wxUpdateUIEvent::Show(bool show)
	static int _bind_Show(lua_State *L) {
		if (!_lg_typecheck_Show(L)) {
			luaL_error(L, "luna typecheck failed in void wxUpdateUIEvent::Show(bool show) function, expected prototype:\nvoid wxUpdateUIEvent::Show(bool show)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool show=(bool)(lua_toboolean(L,2)==1);

		wxUpdateUIEvent* self=Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxUpdateUIEvent::Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Show(show);

		return 0;
	}

	// static bool wxUpdateUIEvent::CanUpdate(wxWindow * window)
	static int _bind_CanUpdate(lua_State *L) {
		if (!_lg_typecheck_CanUpdate(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxUpdateUIEvent::CanUpdate(wxWindow * window) function, expected prototype:\nstatic bool wxUpdateUIEvent::CanUpdate(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,1));

		bool lret = wxUpdateUIEvent::CanUpdate(window);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static wxUpdateUIMode wxUpdateUIEvent::GetMode()
	static int _bind_GetMode(lua_State *L) {
		if (!_lg_typecheck_GetMode(L)) {
			luaL_error(L, "luna typecheck failed in static wxUpdateUIMode wxUpdateUIEvent::GetMode() function, expected prototype:\nstatic wxUpdateUIMode wxUpdateUIEvent::GetMode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxUpdateUIMode lret = wxUpdateUIEvent::GetMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static long wxUpdateUIEvent::GetUpdateInterval()
	static int _bind_GetUpdateInterval(lua_State *L) {
		if (!_lg_typecheck_GetUpdateInterval(L)) {
			luaL_error(L, "luna typecheck failed in static long wxUpdateUIEvent::GetUpdateInterval() function, expected prototype:\nstatic long wxUpdateUIEvent::GetUpdateInterval()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		long lret = wxUpdateUIEvent::GetUpdateInterval();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void wxUpdateUIEvent::ResetUpdateTime()
	static int _bind_ResetUpdateTime(lua_State *L) {
		if (!_lg_typecheck_ResetUpdateTime(L)) {
			luaL_error(L, "luna typecheck failed in static void wxUpdateUIEvent::ResetUpdateTime() function, expected prototype:\nstatic void wxUpdateUIEvent::ResetUpdateTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxUpdateUIEvent::ResetUpdateTime();

		return 0;
	}

	// static void wxUpdateUIEvent::SetMode(wxUpdateUIMode mode)
	static int _bind_SetMode(lua_State *L) {
		if (!_lg_typecheck_SetMode(L)) {
			luaL_error(L, "luna typecheck failed in static void wxUpdateUIEvent::SetMode(wxUpdateUIMode mode) function, expected prototype:\nstatic void wxUpdateUIEvent::SetMode(wxUpdateUIMode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIMode mode=(wxUpdateUIMode)lua_tointeger(L,1);

		wxUpdateUIEvent::SetMode(mode);

		return 0;
	}

	// static void wxUpdateUIEvent::SetUpdateInterval(long updateInterval)
	static int _bind_SetUpdateInterval(lua_State *L) {
		if (!_lg_typecheck_SetUpdateInterval(L)) {
			luaL_error(L, "luna typecheck failed in static void wxUpdateUIEvent::SetUpdateInterval(long updateInterval) function, expected prototype:\nstatic void wxUpdateUIEvent::SetUpdateInterval(long updateInterval)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long updateInterval=(long)lua_tonumber(L,1);

		wxUpdateUIEvent::SetUpdateInterval(updateInterval);

		return 0;
	}

	// wxClassInfo * wxUpdateUIEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxUpdateUIEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxUpdateUIEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxUpdateUIEvent* self=Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxUpdateUIEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxUpdateUIEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxUpdateUIEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxUpdateUIEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxUpdateUIEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxUpdateUIEvent* self=Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxUpdateUIEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxUpdateUIEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxUpdateUIEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxUpdateUIEvent::base_Clone() const function, expected prototype:\nwxEvent * wxUpdateUIEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxUpdateUIEvent* self=Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxUpdateUIEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxUpdateUIEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxUpdateUIEvent* LunaTraits< wxUpdateUIEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxUpdateUIEvent::_bind_ctor(L);
}

void LunaTraits< wxUpdateUIEvent >::_bind_dtor(wxUpdateUIEvent* obj) {
	delete obj;
}

const char LunaTraits< wxUpdateUIEvent >::className[] = "wxUpdateUIEvent";
const char LunaTraits< wxUpdateUIEvent >::fullName[] = "wxUpdateUIEvent";
const char LunaTraits< wxUpdateUIEvent >::moduleName[] = "wx";
const char* LunaTraits< wxUpdateUIEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxUpdateUIEvent >::hash = 87414300;
const int LunaTraits< wxUpdateUIEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxUpdateUIEvent >::methods[] = {
	{"Check", &luna_wrapper_wxUpdateUIEvent::_bind_Check},
	{"Enable", &luna_wrapper_wxUpdateUIEvent::_bind_Enable},
	{"GetChecked", &luna_wrapper_wxUpdateUIEvent::_bind_GetChecked},
	{"GetEnabled", &luna_wrapper_wxUpdateUIEvent::_bind_GetEnabled},
	{"GetSetChecked", &luna_wrapper_wxUpdateUIEvent::_bind_GetSetChecked},
	{"GetSetEnabled", &luna_wrapper_wxUpdateUIEvent::_bind_GetSetEnabled},
	{"GetSetShown", &luna_wrapper_wxUpdateUIEvent::_bind_GetSetShown},
	{"GetSetText", &luna_wrapper_wxUpdateUIEvent::_bind_GetSetText},
	{"GetShown", &luna_wrapper_wxUpdateUIEvent::_bind_GetShown},
	{"GetText", &luna_wrapper_wxUpdateUIEvent::_bind_GetText},
	{"SetText", &luna_wrapper_wxUpdateUIEvent::_bind_SetText},
	{"Show", &luna_wrapper_wxUpdateUIEvent::_bind_Show},
	{"CanUpdate", &luna_wrapper_wxUpdateUIEvent::_bind_CanUpdate},
	{"GetMode", &luna_wrapper_wxUpdateUIEvent::_bind_GetMode},
	{"GetUpdateInterval", &luna_wrapper_wxUpdateUIEvent::_bind_GetUpdateInterval},
	{"ResetUpdateTime", &luna_wrapper_wxUpdateUIEvent::_bind_ResetUpdateTime},
	{"SetMode", &luna_wrapper_wxUpdateUIEvent::_bind_SetMode},
	{"SetUpdateInterval", &luna_wrapper_wxUpdateUIEvent::_bind_SetUpdateInterval},
	{"base_GetClassInfo", &luna_wrapper_wxUpdateUIEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxUpdateUIEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxUpdateUIEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxUpdateUIEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxUpdateUIEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxUpdateUIEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxUpdateUIEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxUpdateUIEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxUpdateUIEvent >::enumValues[] = {
	{0,0}
};


