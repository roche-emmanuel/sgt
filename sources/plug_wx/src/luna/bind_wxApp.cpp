#include <plug_common.h>

#include <luna/wrappers/wrapper_wxApp.h>

class luna_wrapper_wxApp {
public:
	typedef Luna< wxApp > luna_t;

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

		wxApp* self= (wxApp*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxApp >::push(L,self,false);
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
		//wxApp* ptr= dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		wxApp* ptr= luna_caster< wxObject, wxApp >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxApp >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxEventFilter(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxApp* ptr= dynamic_cast< wxApp* >(Luna< wxEventFilter >::check(L,1));
		wxApp* ptr= luna_caster< wxEventFilter, wxApp >::cast(Luna< wxEventFilter >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxApp >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_GetDisplayMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetExitOnFrameDelete(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLayoutDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUseBestVisual(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTopWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SafeYield(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SafeYieldFor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDisplayMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,44802589) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetExitOnFrameDelete(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNativeTheme(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTopWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUseBestVisual(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
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

	inline static bool _lg_typecheck_base_MainLoop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ExitMainLoop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_FilterEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_UsesEventLoop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OnCmdLineError(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87987501) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnCmdLineHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87987501) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnCmdLineParsed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87987501) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnEventLoopEnter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,77241040)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnEventLoopExit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,77241040)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnExceptionInMainLoop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OnExit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OnFatalException(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OnInit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OnInitCmdLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87987501) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnRun(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OnUnhandledException(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetDisplayMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetLayoutDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetTopWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SafeYield(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SafeYieldFor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetDisplayMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,44802589) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetNativeTheme(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxApp::wxApp()
	static wxApp* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxApp::wxApp() function, expected prototype:\nwxApp::wxApp()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxApp();
	}

	// wxApp::wxApp(lua_Table * data)
	static wxApp* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxApp::wxApp(lua_Table * data) function, expected prototype:\nwxApp::wxApp(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxApp(L,NULL);
	}

	// Overload binder for wxApp::wxApp
	static wxApp* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxApp, cannot match any of the overloads for function wxApp:\n  wxApp()\n  wxApp(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// wxVideoMode wxApp::GetDisplayMode() const
	static int _bind_GetDisplayMode(lua_State *L) {
		if (!_lg_typecheck_GetDisplayMode(L)) {
			luaL_error(L, "luna typecheck failed in wxVideoMode wxApp::GetDisplayMode() const function, expected prototype:\nwxVideoMode wxApp::GetDisplayMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVideoMode wxApp::GetDisplayMode() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVideoMode stack_lret = self->GetDisplayMode();
		wxVideoMode* lret = new wxVideoMode(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVideoMode >::push(L,lret,true);

		return 1;
	}

	// bool wxApp::GetExitOnFrameDelete() const
	static int _bind_GetExitOnFrameDelete(lua_State *L) {
		if (!_lg_typecheck_GetExitOnFrameDelete(L)) {
			luaL_error(L, "luna typecheck failed in bool wxApp::GetExitOnFrameDelete() const function, expected prototype:\nbool wxApp::GetExitOnFrameDelete() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxApp::GetExitOnFrameDelete() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetExitOnFrameDelete();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxApp::GetLayoutDirection() const
	static int _bind_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxApp::GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxApp::GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxApp::GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxApp::GetUseBestVisual() const
	static int _bind_GetUseBestVisual(lua_State *L) {
		if (!_lg_typecheck_GetUseBestVisual(L)) {
			luaL_error(L, "luna typecheck failed in bool wxApp::GetUseBestVisual() const function, expected prototype:\nbool wxApp::GetUseBestVisual() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxApp::GetUseBestVisual() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetUseBestVisual();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxWindow * wxApp::GetTopWindow() const
	static int _bind_GetTopWindow(lua_State *L) {
		if (!_lg_typecheck_GetTopWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxApp::GetTopWindow() const function, expected prototype:\nwxWindow * wxApp::GetTopWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxApp::GetTopWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetTopWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// bool wxApp::IsActive() const
	static int _bind_IsActive(lua_State *L) {
		if (!_lg_typecheck_IsActive(L)) {
			luaL_error(L, "luna typecheck failed in bool wxApp::IsActive() const function, expected prototype:\nbool wxApp::IsActive() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxApp::IsActive() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxApp::SafeYield(wxWindow * win, bool onlyIfNeeded)
	static int _bind_SafeYield(lua_State *L) {
		if (!_lg_typecheck_SafeYield(L)) {
			luaL_error(L, "luna typecheck failed in bool wxApp::SafeYield(wxWindow * win, bool onlyIfNeeded) function, expected prototype:\nbool wxApp::SafeYield(wxWindow * win, bool onlyIfNeeded)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		bool onlyIfNeeded=(bool)(lua_toboolean(L,3)==1);

		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxApp::SafeYield(wxWindow *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SafeYield(win, onlyIfNeeded);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxApp::SafeYieldFor(wxWindow * win, long eventsToProcess)
	static int _bind_SafeYieldFor(lua_State *L) {
		if (!_lg_typecheck_SafeYieldFor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxApp::SafeYieldFor(wxWindow * win, long eventsToProcess) function, expected prototype:\nbool wxApp::SafeYieldFor(wxWindow * win, long eventsToProcess)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		long eventsToProcess=(long)lua_tonumber(L,3);

		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxApp::SafeYieldFor(wxWindow *, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SafeYieldFor(win, eventsToProcess);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxApp::SetDisplayMode(const wxVideoMode & info)
	static int _bind_SetDisplayMode(lua_State *L) {
		if (!_lg_typecheck_SetDisplayMode(L)) {
			luaL_error(L, "luna typecheck failed in bool wxApp::SetDisplayMode(const wxVideoMode & info) function, expected prototype:\nbool wxApp::SetDisplayMode(const wxVideoMode & info)\nClass arguments details:\narg 1 ID = 44802589\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxVideoMode* info_ptr=(Luna< wxVideoMode >::check(L,2));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxApp::SetDisplayMode function");
		}
		const wxVideoMode & info=*info_ptr;

		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxApp::SetDisplayMode(const wxVideoMode &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetDisplayMode(info);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxApp::SetExitOnFrameDelete(bool flag)
	static int _bind_SetExitOnFrameDelete(lua_State *L) {
		if (!_lg_typecheck_SetExitOnFrameDelete(L)) {
			luaL_error(L, "luna typecheck failed in void wxApp::SetExitOnFrameDelete(bool flag) function, expected prototype:\nvoid wxApp::SetExitOnFrameDelete(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxApp::SetExitOnFrameDelete(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetExitOnFrameDelete(flag);

		return 0;
	}

	// bool wxApp::SetNativeTheme(const wxString & theme)
	static int _bind_SetNativeTheme(lua_State *L) {
		if (!_lg_typecheck_SetNativeTheme(L)) {
			luaL_error(L, "luna typecheck failed in bool wxApp::SetNativeTheme(const wxString & theme) function, expected prototype:\nbool wxApp::SetNativeTheme(const wxString & theme)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString theme(lua_tostring(L,2),lua_objlen(L,2));

		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxApp::SetNativeTheme(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetNativeTheme(theme);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxApp::SetTopWindow(wxWindow * window)
	static int _bind_SetTopWindow(lua_State *L) {
		if (!_lg_typecheck_SetTopWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxApp::SetTopWindow(wxWindow * window) function, expected prototype:\nvoid wxApp::SetTopWindow(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxApp::SetTopWindow(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTopWindow(window);

		return 0;
	}

	// void wxApp::SetUseBestVisual(bool flag, bool forceTrueColour = false)
	static int _bind_SetUseBestVisual(lua_State *L) {
		if (!_lg_typecheck_SetUseBestVisual(L)) {
			luaL_error(L, "luna typecheck failed in void wxApp::SetUseBestVisual(bool flag, bool forceTrueColour = false) function, expected prototype:\nvoid wxApp::SetUseBestVisual(bool flag, bool forceTrueColour = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool flag=(bool)(lua_toboolean(L,2)==1);
		bool forceTrueColour=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxApp::SetUseBestVisual(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetUseBestVisual(flag, forceTrueColour);

		return 0;
	}

	// wxClassInfo * wxApp::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxApp::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxApp::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxApp::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxApp::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void wxApp::base_QueueEvent(wxEvent * event)
	static int _bind_base_QueueEvent(lua_State *L) {
		if (!_lg_typecheck_base_QueueEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxApp::base_QueueEvent(wxEvent * event) function, expected prototype:\nvoid wxApp::base_QueueEvent(wxEvent * event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event=(Luna< wxObject >::checkSubType< wxEvent >(L,2));

		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxApp::base_QueueEvent(wxEvent *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxApp::QueueEvent(event);

		return 0;
	}

	// void wxApp::base_AddPendingEvent(const wxEvent & event)
	static int _bind_base_AddPendingEvent(lua_State *L) {
		if (!_lg_typecheck_base_AddPendingEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxApp::base_AddPendingEvent(const wxEvent & event) function, expected prototype:\nvoid wxApp::base_AddPendingEvent(const wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxApp::base_AddPendingEvent function");
		}
		const wxEvent & event=*event_ptr;

		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxApp::base_AddPendingEvent(const wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxApp::AddPendingEvent(event);

		return 0;
	}

	// bool wxApp::base_ProcessEvent(wxEvent & event)
	static int _bind_base_ProcessEvent(lua_State *L) {
		if (!_lg_typecheck_base_ProcessEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxApp::base_ProcessEvent(wxEvent & event) function, expected prototype:\nbool wxApp::base_ProcessEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxApp::base_ProcessEvent function");
		}
		wxEvent & event=*event_ptr;

		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxApp::base_ProcessEvent(wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxApp::ProcessEvent(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxApp::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxApp::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxApp::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxApp::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxApp::SetNextHandler(handler);

		return 0;
	}

	// void wxApp::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxApp::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxApp::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxApp::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxApp::SetPreviousHandler(handler);

		return 0;
	}

	// int wxApp::base_MainLoop()
	static int _bind_base_MainLoop(lua_State *L) {
		if (!_lg_typecheck_base_MainLoop(L)) {
			luaL_error(L, "luna typecheck failed in int wxApp::base_MainLoop() function, expected prototype:\nint wxApp::base_MainLoop()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxApp::base_MainLoop(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxApp::MainLoop();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxApp::base_ExitMainLoop()
	static int _bind_base_ExitMainLoop(lua_State *L) {
		if (!_lg_typecheck_base_ExitMainLoop(L)) {
			luaL_error(L, "luna typecheck failed in void wxApp::base_ExitMainLoop() function, expected prototype:\nvoid wxApp::base_ExitMainLoop()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxApp::base_ExitMainLoop(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxApp::ExitMainLoop();

		return 0;
	}

	// int wxApp::base_FilterEvent(wxEvent & event)
	static int _bind_base_FilterEvent(lua_State *L) {
		if (!_lg_typecheck_base_FilterEvent(L)) {
			luaL_error(L, "luna typecheck failed in int wxApp::base_FilterEvent(wxEvent & event) function, expected prototype:\nint wxApp::base_FilterEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxApp::base_FilterEvent function");
		}
		wxEvent & event=*event_ptr;

		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxApp::base_FilterEvent(wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxApp::FilterEvent(event);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxApp::base_UsesEventLoop() const
	static int _bind_base_UsesEventLoop(lua_State *L) {
		if (!_lg_typecheck_base_UsesEventLoop(L)) {
			luaL_error(L, "luna typecheck failed in bool wxApp::base_UsesEventLoop() const function, expected prototype:\nbool wxApp::base_UsesEventLoop() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxApp::base_UsesEventLoop() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxApp::UsesEventLoop();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxApp::base_OnCmdLineError(wxCmdLineParser & parser)
	static int _bind_base_OnCmdLineError(lua_State *L) {
		if (!_lg_typecheck_base_OnCmdLineError(L)) {
			luaL_error(L, "luna typecheck failed in bool wxApp::base_OnCmdLineError(wxCmdLineParser & parser) function, expected prototype:\nbool wxApp::base_OnCmdLineError(wxCmdLineParser & parser)\nClass arguments details:\narg 1 ID = 87987501\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCmdLineParser* parser_ptr=(Luna< wxCmdLineParser >::check(L,2));
		if( !parser_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parser in wxApp::base_OnCmdLineError function");
		}
		wxCmdLineParser & parser=*parser_ptr;

		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxApp::base_OnCmdLineError(wxCmdLineParser &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxApp::OnCmdLineError(parser);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxApp::base_OnCmdLineHelp(wxCmdLineParser & parser)
	static int _bind_base_OnCmdLineHelp(lua_State *L) {
		if (!_lg_typecheck_base_OnCmdLineHelp(L)) {
			luaL_error(L, "luna typecheck failed in bool wxApp::base_OnCmdLineHelp(wxCmdLineParser & parser) function, expected prototype:\nbool wxApp::base_OnCmdLineHelp(wxCmdLineParser & parser)\nClass arguments details:\narg 1 ID = 87987501\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCmdLineParser* parser_ptr=(Luna< wxCmdLineParser >::check(L,2));
		if( !parser_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parser in wxApp::base_OnCmdLineHelp function");
		}
		wxCmdLineParser & parser=*parser_ptr;

		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxApp::base_OnCmdLineHelp(wxCmdLineParser &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxApp::OnCmdLineHelp(parser);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxApp::base_OnCmdLineParsed(wxCmdLineParser & parser)
	static int _bind_base_OnCmdLineParsed(lua_State *L) {
		if (!_lg_typecheck_base_OnCmdLineParsed(L)) {
			luaL_error(L, "luna typecheck failed in bool wxApp::base_OnCmdLineParsed(wxCmdLineParser & parser) function, expected prototype:\nbool wxApp::base_OnCmdLineParsed(wxCmdLineParser & parser)\nClass arguments details:\narg 1 ID = 87987501\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCmdLineParser* parser_ptr=(Luna< wxCmdLineParser >::check(L,2));
		if( !parser_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parser in wxApp::base_OnCmdLineParsed function");
		}
		wxCmdLineParser & parser=*parser_ptr;

		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxApp::base_OnCmdLineParsed(wxCmdLineParser &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxApp::OnCmdLineParsed(parser);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxApp::base_OnEventLoopEnter(wxEventLoopBase * loop)
	static int _bind_base_OnEventLoopEnter(lua_State *L) {
		if (!_lg_typecheck_base_OnEventLoopEnter(L)) {
			luaL_error(L, "luna typecheck failed in void wxApp::base_OnEventLoopEnter(wxEventLoopBase * loop) function, expected prototype:\nvoid wxApp::base_OnEventLoopEnter(wxEventLoopBase * loop)\nClass arguments details:\narg 1 ID = 77241040\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEventLoopBase* loop=(Luna< wxEventLoopBase >::check(L,2));

		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxApp::base_OnEventLoopEnter(wxEventLoopBase *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxApp::OnEventLoopEnter(loop);

		return 0;
	}

	// void wxApp::base_OnEventLoopExit(wxEventLoopBase * loop)
	static int _bind_base_OnEventLoopExit(lua_State *L) {
		if (!_lg_typecheck_base_OnEventLoopExit(L)) {
			luaL_error(L, "luna typecheck failed in void wxApp::base_OnEventLoopExit(wxEventLoopBase * loop) function, expected prototype:\nvoid wxApp::base_OnEventLoopExit(wxEventLoopBase * loop)\nClass arguments details:\narg 1 ID = 77241040\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEventLoopBase* loop=(Luna< wxEventLoopBase >::check(L,2));

		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxApp::base_OnEventLoopExit(wxEventLoopBase *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxApp::OnEventLoopExit(loop);

		return 0;
	}

	// bool wxApp::base_OnExceptionInMainLoop()
	static int _bind_base_OnExceptionInMainLoop(lua_State *L) {
		if (!_lg_typecheck_base_OnExceptionInMainLoop(L)) {
			luaL_error(L, "luna typecheck failed in bool wxApp::base_OnExceptionInMainLoop() function, expected prototype:\nbool wxApp::base_OnExceptionInMainLoop()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxApp::base_OnExceptionInMainLoop(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxApp::OnExceptionInMainLoop();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxApp::base_OnExit()
	static int _bind_base_OnExit(lua_State *L) {
		if (!_lg_typecheck_base_OnExit(L)) {
			luaL_error(L, "luna typecheck failed in int wxApp::base_OnExit() function, expected prototype:\nint wxApp::base_OnExit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxApp::base_OnExit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxApp::OnExit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxApp::base_OnFatalException()
	static int _bind_base_OnFatalException(lua_State *L) {
		if (!_lg_typecheck_base_OnFatalException(L)) {
			luaL_error(L, "luna typecheck failed in void wxApp::base_OnFatalException() function, expected prototype:\nvoid wxApp::base_OnFatalException()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxApp::base_OnFatalException(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxApp::OnFatalException();

		return 0;
	}

	// bool wxApp::base_OnInit()
	static int _bind_base_OnInit(lua_State *L) {
		if (!_lg_typecheck_base_OnInit(L)) {
			luaL_error(L, "luna typecheck failed in bool wxApp::base_OnInit() function, expected prototype:\nbool wxApp::base_OnInit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxApp::base_OnInit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxApp::OnInit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxApp::base_OnInitCmdLine(wxCmdLineParser & parser)
	static int _bind_base_OnInitCmdLine(lua_State *L) {
		if (!_lg_typecheck_base_OnInitCmdLine(L)) {
			luaL_error(L, "luna typecheck failed in void wxApp::base_OnInitCmdLine(wxCmdLineParser & parser) function, expected prototype:\nvoid wxApp::base_OnInitCmdLine(wxCmdLineParser & parser)\nClass arguments details:\narg 1 ID = 87987501\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCmdLineParser* parser_ptr=(Luna< wxCmdLineParser >::check(L,2));
		if( !parser_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parser in wxApp::base_OnInitCmdLine function");
		}
		wxCmdLineParser & parser=*parser_ptr;

		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxApp::base_OnInitCmdLine(wxCmdLineParser &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxApp::OnInitCmdLine(parser);

		return 0;
	}

	// int wxApp::base_OnRun()
	static int _bind_base_OnRun(lua_State *L) {
		if (!_lg_typecheck_base_OnRun(L)) {
			luaL_error(L, "luna typecheck failed in int wxApp::base_OnRun() function, expected prototype:\nint wxApp::base_OnRun()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxApp::base_OnRun(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxApp::OnRun();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxApp::base_OnUnhandledException()
	static int _bind_base_OnUnhandledException(lua_State *L) {
		if (!_lg_typecheck_base_OnUnhandledException(L)) {
			luaL_error(L, "luna typecheck failed in void wxApp::base_OnUnhandledException() function, expected prototype:\nvoid wxApp::base_OnUnhandledException()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxApp::base_OnUnhandledException(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxApp::OnUnhandledException();

		return 0;
	}

	// wxVideoMode wxApp::base_GetDisplayMode() const
	static int _bind_base_GetDisplayMode(lua_State *L) {
		if (!_lg_typecheck_base_GetDisplayMode(L)) {
			luaL_error(L, "luna typecheck failed in wxVideoMode wxApp::base_GetDisplayMode() const function, expected prototype:\nwxVideoMode wxApp::base_GetDisplayMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVideoMode wxApp::base_GetDisplayMode() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVideoMode stack_lret = self->wxApp::GetDisplayMode();
		wxVideoMode* lret = new wxVideoMode(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVideoMode >::push(L,lret,true);

		return 1;
	}

	// wxLayoutDirection wxApp::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxApp::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxApp::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxApp::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxApp::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxWindow * wxApp::base_GetTopWindow() const
	static int _bind_base_GetTopWindow(lua_State *L) {
		if (!_lg_typecheck_base_GetTopWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxApp::base_GetTopWindow() const function, expected prototype:\nwxWindow * wxApp::base_GetTopWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxApp::base_GetTopWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->wxApp::GetTopWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// bool wxApp::base_IsActive() const
	static int _bind_base_IsActive(lua_State *L) {
		if (!_lg_typecheck_base_IsActive(L)) {
			luaL_error(L, "luna typecheck failed in bool wxApp::base_IsActive() const function, expected prototype:\nbool wxApp::base_IsActive() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxApp::base_IsActive() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxApp::IsActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxApp::base_SafeYield(wxWindow * win, bool onlyIfNeeded)
	static int _bind_base_SafeYield(lua_State *L) {
		if (!_lg_typecheck_base_SafeYield(L)) {
			luaL_error(L, "luna typecheck failed in bool wxApp::base_SafeYield(wxWindow * win, bool onlyIfNeeded) function, expected prototype:\nbool wxApp::base_SafeYield(wxWindow * win, bool onlyIfNeeded)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		bool onlyIfNeeded=(bool)(lua_toboolean(L,3)==1);

		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxApp::base_SafeYield(wxWindow *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxApp::SafeYield(win, onlyIfNeeded);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxApp::base_SafeYieldFor(wxWindow * win, long eventsToProcess)
	static int _bind_base_SafeYieldFor(lua_State *L) {
		if (!_lg_typecheck_base_SafeYieldFor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxApp::base_SafeYieldFor(wxWindow * win, long eventsToProcess) function, expected prototype:\nbool wxApp::base_SafeYieldFor(wxWindow * win, long eventsToProcess)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		long eventsToProcess=(long)lua_tonumber(L,3);

		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxApp::base_SafeYieldFor(wxWindow *, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxApp::SafeYieldFor(win, eventsToProcess);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxApp::base_SetDisplayMode(const wxVideoMode & info)
	static int _bind_base_SetDisplayMode(lua_State *L) {
		if (!_lg_typecheck_base_SetDisplayMode(L)) {
			luaL_error(L, "luna typecheck failed in bool wxApp::base_SetDisplayMode(const wxVideoMode & info) function, expected prototype:\nbool wxApp::base_SetDisplayMode(const wxVideoMode & info)\nClass arguments details:\narg 1 ID = 44802589\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxVideoMode* info_ptr=(Luna< wxVideoMode >::check(L,2));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxApp::base_SetDisplayMode function");
		}
		const wxVideoMode & info=*info_ptr;

		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxApp::base_SetDisplayMode(const wxVideoMode &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxApp::SetDisplayMode(info);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxApp::base_SetNativeTheme(const wxString & theme)
	static int _bind_base_SetNativeTheme(lua_State *L) {
		if (!_lg_typecheck_base_SetNativeTheme(L)) {
			luaL_error(L, "luna typecheck failed in bool wxApp::base_SetNativeTheme(const wxString & theme) function, expected prototype:\nbool wxApp::base_SetNativeTheme(const wxString & theme)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString theme(lua_tostring(L,2),lua_objlen(L,2));

		wxApp* self=Luna< wxObject >::checkSubType< wxApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxApp::base_SetNativeTheme(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxApp::SetNativeTheme(theme);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxApp* LunaTraits< wxApp >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxApp::_bind_ctor(L);
}

void LunaTraits< wxApp >::_bind_dtor(wxApp* obj) {
	delete obj;
}

const char LunaTraits< wxApp >::className[] = "wxApp";
const char LunaTraits< wxApp >::fullName[] = "wxApp";
const char LunaTraits< wxApp >::moduleName[] = "wx";
const char* LunaTraits< wxApp >::parents[] = {"wx.wxAppConsole", 0};
const int LunaTraits< wxApp >::hash = 13539963;
const int LunaTraits< wxApp >::uniqueIDs[] = {56813631, 53506535, 81056638,0};

luna_RegType LunaTraits< wxApp >::methods[] = {
	{"GetDisplayMode", &luna_wrapper_wxApp::_bind_GetDisplayMode},
	{"GetExitOnFrameDelete", &luna_wrapper_wxApp::_bind_GetExitOnFrameDelete},
	{"GetLayoutDirection", &luna_wrapper_wxApp::_bind_GetLayoutDirection},
	{"GetUseBestVisual", &luna_wrapper_wxApp::_bind_GetUseBestVisual},
	{"GetTopWindow", &luna_wrapper_wxApp::_bind_GetTopWindow},
	{"IsActive", &luna_wrapper_wxApp::_bind_IsActive},
	{"SafeYield", &luna_wrapper_wxApp::_bind_SafeYield},
	{"SafeYieldFor", &luna_wrapper_wxApp::_bind_SafeYieldFor},
	{"SetDisplayMode", &luna_wrapper_wxApp::_bind_SetDisplayMode},
	{"SetExitOnFrameDelete", &luna_wrapper_wxApp::_bind_SetExitOnFrameDelete},
	{"SetNativeTheme", &luna_wrapper_wxApp::_bind_SetNativeTheme},
	{"SetTopWindow", &luna_wrapper_wxApp::_bind_SetTopWindow},
	{"SetUseBestVisual", &luna_wrapper_wxApp::_bind_SetUseBestVisual},
	{"base_GetClassInfo", &luna_wrapper_wxApp::_bind_base_GetClassInfo},
	{"base_QueueEvent", &luna_wrapper_wxApp::_bind_base_QueueEvent},
	{"base_AddPendingEvent", &luna_wrapper_wxApp::_bind_base_AddPendingEvent},
	{"base_ProcessEvent", &luna_wrapper_wxApp::_bind_base_ProcessEvent},
	{"base_SetNextHandler", &luna_wrapper_wxApp::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxApp::_bind_base_SetPreviousHandler},
	{"base_MainLoop", &luna_wrapper_wxApp::_bind_base_MainLoop},
	{"base_ExitMainLoop", &luna_wrapper_wxApp::_bind_base_ExitMainLoop},
	{"base_FilterEvent", &luna_wrapper_wxApp::_bind_base_FilterEvent},
	{"base_UsesEventLoop", &luna_wrapper_wxApp::_bind_base_UsesEventLoop},
	{"base_OnCmdLineError", &luna_wrapper_wxApp::_bind_base_OnCmdLineError},
	{"base_OnCmdLineHelp", &luna_wrapper_wxApp::_bind_base_OnCmdLineHelp},
	{"base_OnCmdLineParsed", &luna_wrapper_wxApp::_bind_base_OnCmdLineParsed},
	{"base_OnEventLoopEnter", &luna_wrapper_wxApp::_bind_base_OnEventLoopEnter},
	{"base_OnEventLoopExit", &luna_wrapper_wxApp::_bind_base_OnEventLoopExit},
	{"base_OnExceptionInMainLoop", &luna_wrapper_wxApp::_bind_base_OnExceptionInMainLoop},
	{"base_OnExit", &luna_wrapper_wxApp::_bind_base_OnExit},
	{"base_OnFatalException", &luna_wrapper_wxApp::_bind_base_OnFatalException},
	{"base_OnInit", &luna_wrapper_wxApp::_bind_base_OnInit},
	{"base_OnInitCmdLine", &luna_wrapper_wxApp::_bind_base_OnInitCmdLine},
	{"base_OnRun", &luna_wrapper_wxApp::_bind_base_OnRun},
	{"base_OnUnhandledException", &luna_wrapper_wxApp::_bind_base_OnUnhandledException},
	{"base_GetDisplayMode", &luna_wrapper_wxApp::_bind_base_GetDisplayMode},
	{"base_GetLayoutDirection", &luna_wrapper_wxApp::_bind_base_GetLayoutDirection},
	{"base_GetTopWindow", &luna_wrapper_wxApp::_bind_base_GetTopWindow},
	{"base_IsActive", &luna_wrapper_wxApp::_bind_base_IsActive},
	{"base_SafeYield", &luna_wrapper_wxApp::_bind_base_SafeYield},
	{"base_SafeYieldFor", &luna_wrapper_wxApp::_bind_base_SafeYieldFor},
	{"base_SetDisplayMode", &luna_wrapper_wxApp::_bind_base_SetDisplayMode},
	{"base_SetNativeTheme", &luna_wrapper_wxApp::_bind_base_SetNativeTheme},
	{"fromVoid", &luna_wrapper_wxApp::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxApp::_bind_asVoid},
	{"getTable", &luna_wrapper_wxApp::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxApp >::converters[] = {
	{"wxObject", &luna_wrapper_wxApp::_cast_from_wxObject},
	{"wxEventFilter", &luna_wrapper_wxApp::_cast_from_wxEventFilter},
	{0,0}
};

luna_RegEnumType LunaTraits< wxApp >::enumValues[] = {
	{0,0}
};


