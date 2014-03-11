#include <plug_common.h>

#include <luna/wrappers/wrapper_wxAppConsole.h>

class luna_wrapper_wxAppConsole {
public:
	typedef Luna< wxAppConsole > luna_t;

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

		wxAppConsole* self= (wxAppConsole*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxAppConsole >::push(L,self,false);
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
		//wxAppConsole* ptr= dynamic_cast< wxAppConsole* >(Luna< wxObject >::check(L,1));
		wxAppConsole* ptr= luna_caster< wxObject, wxAppConsole >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAppConsole >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxEventFilter(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxAppConsole* ptr= dynamic_cast< wxAppConsole* >(Luna< wxEventFilter >::check(L,1));
		wxAppConsole* ptr= luna_caster< wxEventFilter, wxAppConsole >::cast(Luna< wxEventFilter >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAppConsole >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_MainLoop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ExitMainLoop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FilterEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMainLoop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_UsesEventLoop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeletePendingEvents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasPendingEvents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SuspendProcessingOfPendingEvents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ResumeProcessingOfPendingEvents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ScheduleForDestruction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsScheduledForDestruction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Yield(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnCmdLineError(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87987501) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnCmdLineHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87987501) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnCmdLineParsed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87987501) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnEventLoopEnter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,77241040)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnEventLoopExit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,77241040)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnExceptionInMainLoop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnExit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnFatalException(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnInit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnInitCmdLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87987501) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnRun(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnUnhandledException(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAppDisplayName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAppName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTraits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVendorDisplayName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVendorName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAppDisplayName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAppName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClassName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVendorDisplayName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVendorName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetInstance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetInstance(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsMainLoopRunning(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getArgc(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setArgc(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int wxAppConsole::MainLoop()
	static int _bind_MainLoop(lua_State *L) {
		if (!_lg_typecheck_MainLoop(L)) {
			luaL_error(L, "luna typecheck failed in int wxAppConsole::MainLoop() function, expected prototype:\nint wxAppConsole::MainLoop()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAppConsole::MainLoop(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->MainLoop();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAppConsole::ExitMainLoop()
	static int _bind_ExitMainLoop(lua_State *L) {
		if (!_lg_typecheck_ExitMainLoop(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::ExitMainLoop() function, expected prototype:\nvoid wxAppConsole::ExitMainLoop()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::ExitMainLoop(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ExitMainLoop();

		return 0;
	}

	// int wxAppConsole::FilterEvent(wxEvent & event)
	static int _bind_FilterEvent(lua_State *L) {
		if (!_lg_typecheck_FilterEvent(L)) {
			luaL_error(L, "luna typecheck failed in int wxAppConsole::FilterEvent(wxEvent & event) function, expected prototype:\nint wxAppConsole::FilterEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxAppConsole::FilterEvent function");
		}
		wxEvent & event=*event_ptr;

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAppConsole::FilterEvent(wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->FilterEvent(event);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEventLoopBase * wxAppConsole::GetMainLoop() const
	static int _bind_GetMainLoop(lua_State *L) {
		if (!_lg_typecheck_GetMainLoop(L)) {
			luaL_error(L, "luna typecheck failed in wxEventLoopBase * wxAppConsole::GetMainLoop() const function, expected prototype:\nwxEventLoopBase * wxAppConsole::GetMainLoop() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventLoopBase * wxAppConsole::GetMainLoop() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventLoopBase * lret = self->GetMainLoop();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEventLoopBase >::push(L,lret,false);

		return 1;
	}

	// bool wxAppConsole::UsesEventLoop() const
	static int _bind_UsesEventLoop(lua_State *L) {
		if (!_lg_typecheck_UsesEventLoop(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAppConsole::UsesEventLoop() const function, expected prototype:\nbool wxAppConsole::UsesEventLoop() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAppConsole::UsesEventLoop() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->UsesEventLoop();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAppConsole::DeletePendingEvents()
	static int _bind_DeletePendingEvents(lua_State *L) {
		if (!_lg_typecheck_DeletePendingEvents(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::DeletePendingEvents() function, expected prototype:\nvoid wxAppConsole::DeletePendingEvents()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::DeletePendingEvents(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeletePendingEvents();

		return 0;
	}

	// bool wxAppConsole::HasPendingEvents() const
	static int _bind_HasPendingEvents(lua_State *L) {
		if (!_lg_typecheck_HasPendingEvents(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAppConsole::HasPendingEvents() const function, expected prototype:\nbool wxAppConsole::HasPendingEvents() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAppConsole::HasPendingEvents() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasPendingEvents();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAppConsole::SuspendProcessingOfPendingEvents()
	static int _bind_SuspendProcessingOfPendingEvents(lua_State *L) {
		if (!_lg_typecheck_SuspendProcessingOfPendingEvents(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::SuspendProcessingOfPendingEvents() function, expected prototype:\nvoid wxAppConsole::SuspendProcessingOfPendingEvents()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::SuspendProcessingOfPendingEvents(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SuspendProcessingOfPendingEvents();

		return 0;
	}

	// void wxAppConsole::ResumeProcessingOfPendingEvents()
	static int _bind_ResumeProcessingOfPendingEvents(lua_State *L) {
		if (!_lg_typecheck_ResumeProcessingOfPendingEvents(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::ResumeProcessingOfPendingEvents() function, expected prototype:\nvoid wxAppConsole::ResumeProcessingOfPendingEvents()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::ResumeProcessingOfPendingEvents(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ResumeProcessingOfPendingEvents();

		return 0;
	}

	// void wxAppConsole::ScheduleForDestruction(wxObject * object)
	static int _bind_ScheduleForDestruction(lua_State *L) {
		if (!_lg_typecheck_ScheduleForDestruction(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::ScheduleForDestruction(wxObject * object) function, expected prototype:\nvoid wxAppConsole::ScheduleForDestruction(wxObject * object)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* object=(Luna< wxObject >::check(L,2));

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::ScheduleForDestruction(wxObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ScheduleForDestruction(object);

		return 0;
	}

	// bool wxAppConsole::IsScheduledForDestruction(wxObject * object) const
	static int _bind_IsScheduledForDestruction(lua_State *L) {
		if (!_lg_typecheck_IsScheduledForDestruction(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAppConsole::IsScheduledForDestruction(wxObject * object) const function, expected prototype:\nbool wxAppConsole::IsScheduledForDestruction(wxObject * object) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* object=(Luna< wxObject >::check(L,2));

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAppConsole::IsScheduledForDestruction(wxObject *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsScheduledForDestruction(object);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAppConsole::Yield(bool onlyIfNeeded = false)
	static int _bind_Yield(lua_State *L) {
		if (!_lg_typecheck_Yield(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAppConsole::Yield(bool onlyIfNeeded = false) function, expected prototype:\nbool wxAppConsole::Yield(bool onlyIfNeeded = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool onlyIfNeeded=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAppConsole::Yield(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Yield(onlyIfNeeded);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAppConsole::OnCmdLineError(wxCmdLineParser & parser)
	static int _bind_OnCmdLineError(lua_State *L) {
		if (!_lg_typecheck_OnCmdLineError(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAppConsole::OnCmdLineError(wxCmdLineParser & parser) function, expected prototype:\nbool wxAppConsole::OnCmdLineError(wxCmdLineParser & parser)\nClass arguments details:\narg 1 ID = 87987501\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCmdLineParser* parser_ptr=(Luna< wxCmdLineParser >::check(L,2));
		if( !parser_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parser in wxAppConsole::OnCmdLineError function");
		}
		wxCmdLineParser & parser=*parser_ptr;

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAppConsole::OnCmdLineError(wxCmdLineParser &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnCmdLineError(parser);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAppConsole::OnCmdLineHelp(wxCmdLineParser & parser)
	static int _bind_OnCmdLineHelp(lua_State *L) {
		if (!_lg_typecheck_OnCmdLineHelp(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAppConsole::OnCmdLineHelp(wxCmdLineParser & parser) function, expected prototype:\nbool wxAppConsole::OnCmdLineHelp(wxCmdLineParser & parser)\nClass arguments details:\narg 1 ID = 87987501\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCmdLineParser* parser_ptr=(Luna< wxCmdLineParser >::check(L,2));
		if( !parser_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parser in wxAppConsole::OnCmdLineHelp function");
		}
		wxCmdLineParser & parser=*parser_ptr;

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAppConsole::OnCmdLineHelp(wxCmdLineParser &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnCmdLineHelp(parser);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAppConsole::OnCmdLineParsed(wxCmdLineParser & parser)
	static int _bind_OnCmdLineParsed(lua_State *L) {
		if (!_lg_typecheck_OnCmdLineParsed(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAppConsole::OnCmdLineParsed(wxCmdLineParser & parser) function, expected prototype:\nbool wxAppConsole::OnCmdLineParsed(wxCmdLineParser & parser)\nClass arguments details:\narg 1 ID = 87987501\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCmdLineParser* parser_ptr=(Luna< wxCmdLineParser >::check(L,2));
		if( !parser_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parser in wxAppConsole::OnCmdLineParsed function");
		}
		wxCmdLineParser & parser=*parser_ptr;

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAppConsole::OnCmdLineParsed(wxCmdLineParser &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnCmdLineParsed(parser);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAppConsole::OnEventLoopEnter(wxEventLoopBase * loop)
	static int _bind_OnEventLoopEnter(lua_State *L) {
		if (!_lg_typecheck_OnEventLoopEnter(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::OnEventLoopEnter(wxEventLoopBase * loop) function, expected prototype:\nvoid wxAppConsole::OnEventLoopEnter(wxEventLoopBase * loop)\nClass arguments details:\narg 1 ID = 77241040\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEventLoopBase* loop=(Luna< wxEventLoopBase >::check(L,2));

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::OnEventLoopEnter(wxEventLoopBase *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnEventLoopEnter(loop);

		return 0;
	}

	// void wxAppConsole::OnEventLoopExit(wxEventLoopBase * loop)
	static int _bind_OnEventLoopExit(lua_State *L) {
		if (!_lg_typecheck_OnEventLoopExit(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::OnEventLoopExit(wxEventLoopBase * loop) function, expected prototype:\nvoid wxAppConsole::OnEventLoopExit(wxEventLoopBase * loop)\nClass arguments details:\narg 1 ID = 77241040\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEventLoopBase* loop=(Luna< wxEventLoopBase >::check(L,2));

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::OnEventLoopExit(wxEventLoopBase *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnEventLoopExit(loop);

		return 0;
	}

	// bool wxAppConsole::OnExceptionInMainLoop()
	static int _bind_OnExceptionInMainLoop(lua_State *L) {
		if (!_lg_typecheck_OnExceptionInMainLoop(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAppConsole::OnExceptionInMainLoop() function, expected prototype:\nbool wxAppConsole::OnExceptionInMainLoop()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAppConsole::OnExceptionInMainLoop(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnExceptionInMainLoop();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxAppConsole::OnExit()
	static int _bind_OnExit(lua_State *L) {
		if (!_lg_typecheck_OnExit(L)) {
			luaL_error(L, "luna typecheck failed in int wxAppConsole::OnExit() function, expected prototype:\nint wxAppConsole::OnExit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAppConsole::OnExit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->OnExit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAppConsole::OnFatalException()
	static int _bind_OnFatalException(lua_State *L) {
		if (!_lg_typecheck_OnFatalException(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::OnFatalException() function, expected prototype:\nvoid wxAppConsole::OnFatalException()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::OnFatalException(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnFatalException();

		return 0;
	}

	// bool wxAppConsole::OnInit()
	static int _bind_OnInit(lua_State *L) {
		if (!_lg_typecheck_OnInit(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAppConsole::OnInit() function, expected prototype:\nbool wxAppConsole::OnInit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAppConsole::OnInit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnInit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAppConsole::OnInitCmdLine(wxCmdLineParser & parser)
	static int _bind_OnInitCmdLine(lua_State *L) {
		if (!_lg_typecheck_OnInitCmdLine(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::OnInitCmdLine(wxCmdLineParser & parser) function, expected prototype:\nvoid wxAppConsole::OnInitCmdLine(wxCmdLineParser & parser)\nClass arguments details:\narg 1 ID = 87987501\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCmdLineParser* parser_ptr=(Luna< wxCmdLineParser >::check(L,2));
		if( !parser_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parser in wxAppConsole::OnInitCmdLine function");
		}
		wxCmdLineParser & parser=*parser_ptr;

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::OnInitCmdLine(wxCmdLineParser &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnInitCmdLine(parser);

		return 0;
	}

	// int wxAppConsole::OnRun()
	static int _bind_OnRun(lua_State *L) {
		if (!_lg_typecheck_OnRun(L)) {
			luaL_error(L, "luna typecheck failed in int wxAppConsole::OnRun() function, expected prototype:\nint wxAppConsole::OnRun()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAppConsole::OnRun(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->OnRun();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAppConsole::OnUnhandledException()
	static int _bind_OnUnhandledException(lua_State *L) {
		if (!_lg_typecheck_OnUnhandledException(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::OnUnhandledException() function, expected prototype:\nvoid wxAppConsole::OnUnhandledException()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::OnUnhandledException(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnUnhandledException();

		return 0;
	}

	// wxString wxAppConsole::GetAppDisplayName() const
	static int _bind_GetAppDisplayName(lua_State *L) {
		if (!_lg_typecheck_GetAppDisplayName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxAppConsole::GetAppDisplayName() const function, expected prototype:\nwxString wxAppConsole::GetAppDisplayName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxAppConsole::GetAppDisplayName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetAppDisplayName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxAppConsole::GetAppName() const
	static int _bind_GetAppName(lua_State *L) {
		if (!_lg_typecheck_GetAppName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxAppConsole::GetAppName() const function, expected prototype:\nwxString wxAppConsole::GetAppName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxAppConsole::GetAppName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetAppName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxAppConsole::GetClassName() const
	static int _bind_GetClassName(lua_State *L) {
		if (!_lg_typecheck_GetClassName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxAppConsole::GetClassName() const function, expected prototype:\nwxString wxAppConsole::GetClassName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxAppConsole::GetClassName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxAppTraits * wxAppConsole::GetTraits()
	static int _bind_GetTraits(lua_State *L) {
		if (!_lg_typecheck_GetTraits(L)) {
			luaL_error(L, "luna typecheck failed in wxAppTraits * wxAppConsole::GetTraits() function, expected prototype:\nwxAppTraits * wxAppConsole::GetTraits()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAppTraits * wxAppConsole::GetTraits(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxAppTraits * lret = self->GetTraits();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAppTraits >::push(L,lret,false);

		return 1;
	}

	// const wxString & wxAppConsole::GetVendorDisplayName() const
	static int _bind_GetVendorDisplayName(lua_State *L) {
		if (!_lg_typecheck_GetVendorDisplayName(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxAppConsole::GetVendorDisplayName() const function, expected prototype:\nconst wxString & wxAppConsole::GetVendorDisplayName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxAppConsole::GetVendorDisplayName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetVendorDisplayName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxAppConsole::GetVendorName() const
	static int _bind_GetVendorName(lua_State *L) {
		if (!_lg_typecheck_GetVendorName(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxAppConsole::GetVendorName() const function, expected prototype:\nconst wxString & wxAppConsole::GetVendorName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxAppConsole::GetVendorName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetVendorName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxAppConsole::SetAppDisplayName(const wxString & name)
	static int _bind_SetAppDisplayName(lua_State *L) {
		if (!_lg_typecheck_SetAppDisplayName(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::SetAppDisplayName(const wxString & name) function, expected prototype:\nvoid wxAppConsole::SetAppDisplayName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::SetAppDisplayName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAppDisplayName(name);

		return 0;
	}

	// void wxAppConsole::SetAppName(const wxString & name)
	static int _bind_SetAppName(lua_State *L) {
		if (!_lg_typecheck_SetAppName(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::SetAppName(const wxString & name) function, expected prototype:\nvoid wxAppConsole::SetAppName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::SetAppName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAppName(name);

		return 0;
	}

	// void wxAppConsole::SetClassName(const wxString & name)
	static int _bind_SetClassName(lua_State *L) {
		if (!_lg_typecheck_SetClassName(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::SetClassName(const wxString & name) function, expected prototype:\nvoid wxAppConsole::SetClassName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::SetClassName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetClassName(name);

		return 0;
	}

	// void wxAppConsole::SetVendorDisplayName(const wxString & name)
	static int _bind_SetVendorDisplayName(lua_State *L) {
		if (!_lg_typecheck_SetVendorDisplayName(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::SetVendorDisplayName(const wxString & name) function, expected prototype:\nvoid wxAppConsole::SetVendorDisplayName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::SetVendorDisplayName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetVendorDisplayName(name);

		return 0;
	}

	// void wxAppConsole::SetVendorName(const wxString & name)
	static int _bind_SetVendorName(lua_State *L) {
		if (!_lg_typecheck_SetVendorName(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::SetVendorName(const wxString & name) function, expected prototype:\nvoid wxAppConsole::SetVendorName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::SetVendorName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetVendorName(name);

		return 0;
	}

	// static void wxAppConsole::SetInstance(wxAppConsole * app)
	static int _bind_SetInstance(lua_State *L) {
		if (!_lg_typecheck_SetInstance(L)) {
			luaL_error(L, "luna typecheck failed in static void wxAppConsole::SetInstance(wxAppConsole * app) function, expected prototype:\nstatic void wxAppConsole::SetInstance(wxAppConsole * app)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxAppConsole* app=(Luna< wxObject >::checkSubType< wxAppConsole >(L,1));

		wxAppConsole::SetInstance(app);

		return 0;
	}

	// static wxAppConsole * wxAppConsole::GetInstance()
	static int _bind_GetInstance(lua_State *L) {
		if (!_lg_typecheck_GetInstance(L)) {
			luaL_error(L, "luna typecheck failed in static wxAppConsole * wxAppConsole::GetInstance() function, expected prototype:\nstatic wxAppConsole * wxAppConsole::GetInstance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole * lret = wxAppConsole::GetInstance();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAppConsole >::push(L,lret,false);

		return 1;
	}

	// static bool wxAppConsole::IsMainLoopRunning()
	static int _bind_IsMainLoopRunning(lua_State *L) {
		if (!_lg_typecheck_IsMainLoopRunning(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxAppConsole::IsMainLoopRunning() function, expected prototype:\nstatic bool wxAppConsole::IsMainLoopRunning()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		bool lret = wxAppConsole::IsMainLoopRunning();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxAppConsole::argc()
	static int _bind_getArgc(lua_State *L) {
		if (!_lg_typecheck_getArgc(L)) {
			luaL_error(L, "luna typecheck failed in int wxAppConsole::argc() function, expected prototype:\nint wxAppConsole::argc()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAppConsole::argc(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->argc;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAppConsole::argc(int value)
	static int _bind_setArgc(lua_State *L) {
		if (!_lg_typecheck_setArgc(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::argc(int value) function, expected prototype:\nvoid wxAppConsole::argc(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::argc(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->argc = value;

		return 0;
	}

	// wxClassInfo * wxAppConsole::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxAppConsole::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxAppConsole::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxAppConsole::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxAppConsole::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void wxAppConsole::base_QueueEvent(wxEvent * event)
	static int _bind_base_QueueEvent(lua_State *L) {
		if (!_lg_typecheck_base_QueueEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::base_QueueEvent(wxEvent * event) function, expected prototype:\nvoid wxAppConsole::base_QueueEvent(wxEvent * event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event=(Luna< wxObject >::checkSubType< wxEvent >(L,2));

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::base_QueueEvent(wxEvent *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAppConsole::QueueEvent(event);

		return 0;
	}

	// void wxAppConsole::base_AddPendingEvent(const wxEvent & event)
	static int _bind_base_AddPendingEvent(lua_State *L) {
		if (!_lg_typecheck_base_AddPendingEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::base_AddPendingEvent(const wxEvent & event) function, expected prototype:\nvoid wxAppConsole::base_AddPendingEvent(const wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxAppConsole::base_AddPendingEvent function");
		}
		const wxEvent & event=*event_ptr;

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::base_AddPendingEvent(const wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAppConsole::AddPendingEvent(event);

		return 0;
	}

	// bool wxAppConsole::base_ProcessEvent(wxEvent & event)
	static int _bind_base_ProcessEvent(lua_State *L) {
		if (!_lg_typecheck_base_ProcessEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAppConsole::base_ProcessEvent(wxEvent & event) function, expected prototype:\nbool wxAppConsole::base_ProcessEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxAppConsole::base_ProcessEvent function");
		}
		wxEvent & event=*event_ptr;

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAppConsole::base_ProcessEvent(wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAppConsole::ProcessEvent(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAppConsole::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxAppConsole::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAppConsole::SetNextHandler(handler);

		return 0;
	}

	// void wxAppConsole::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxAppConsole::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAppConsole::SetPreviousHandler(handler);

		return 0;
	}

	// int wxAppConsole::base_MainLoop()
	static int _bind_base_MainLoop(lua_State *L) {
		if (!_lg_typecheck_base_MainLoop(L)) {
			luaL_error(L, "luna typecheck failed in int wxAppConsole::base_MainLoop() function, expected prototype:\nint wxAppConsole::base_MainLoop()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAppConsole::base_MainLoop(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxAppConsole::MainLoop();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAppConsole::base_ExitMainLoop()
	static int _bind_base_ExitMainLoop(lua_State *L) {
		if (!_lg_typecheck_base_ExitMainLoop(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::base_ExitMainLoop() function, expected prototype:\nvoid wxAppConsole::base_ExitMainLoop()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::base_ExitMainLoop(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAppConsole::ExitMainLoop();

		return 0;
	}

	// int wxAppConsole::base_FilterEvent(wxEvent & event)
	static int _bind_base_FilterEvent(lua_State *L) {
		if (!_lg_typecheck_base_FilterEvent(L)) {
			luaL_error(L, "luna typecheck failed in int wxAppConsole::base_FilterEvent(wxEvent & event) function, expected prototype:\nint wxAppConsole::base_FilterEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxAppConsole::base_FilterEvent function");
		}
		wxEvent & event=*event_ptr;

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAppConsole::base_FilterEvent(wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxAppConsole::FilterEvent(event);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxAppConsole::base_UsesEventLoop() const
	static int _bind_base_UsesEventLoop(lua_State *L) {
		if (!_lg_typecheck_base_UsesEventLoop(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAppConsole::base_UsesEventLoop() const function, expected prototype:\nbool wxAppConsole::base_UsesEventLoop() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAppConsole::base_UsesEventLoop() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAppConsole::UsesEventLoop();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAppConsole::base_OnCmdLineError(wxCmdLineParser & parser)
	static int _bind_base_OnCmdLineError(lua_State *L) {
		if (!_lg_typecheck_base_OnCmdLineError(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAppConsole::base_OnCmdLineError(wxCmdLineParser & parser) function, expected prototype:\nbool wxAppConsole::base_OnCmdLineError(wxCmdLineParser & parser)\nClass arguments details:\narg 1 ID = 87987501\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCmdLineParser* parser_ptr=(Luna< wxCmdLineParser >::check(L,2));
		if( !parser_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parser in wxAppConsole::base_OnCmdLineError function");
		}
		wxCmdLineParser & parser=*parser_ptr;

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAppConsole::base_OnCmdLineError(wxCmdLineParser &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAppConsole::OnCmdLineError(parser);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAppConsole::base_OnCmdLineHelp(wxCmdLineParser & parser)
	static int _bind_base_OnCmdLineHelp(lua_State *L) {
		if (!_lg_typecheck_base_OnCmdLineHelp(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAppConsole::base_OnCmdLineHelp(wxCmdLineParser & parser) function, expected prototype:\nbool wxAppConsole::base_OnCmdLineHelp(wxCmdLineParser & parser)\nClass arguments details:\narg 1 ID = 87987501\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCmdLineParser* parser_ptr=(Luna< wxCmdLineParser >::check(L,2));
		if( !parser_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parser in wxAppConsole::base_OnCmdLineHelp function");
		}
		wxCmdLineParser & parser=*parser_ptr;

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAppConsole::base_OnCmdLineHelp(wxCmdLineParser &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAppConsole::OnCmdLineHelp(parser);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAppConsole::base_OnCmdLineParsed(wxCmdLineParser & parser)
	static int _bind_base_OnCmdLineParsed(lua_State *L) {
		if (!_lg_typecheck_base_OnCmdLineParsed(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAppConsole::base_OnCmdLineParsed(wxCmdLineParser & parser) function, expected prototype:\nbool wxAppConsole::base_OnCmdLineParsed(wxCmdLineParser & parser)\nClass arguments details:\narg 1 ID = 87987501\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCmdLineParser* parser_ptr=(Luna< wxCmdLineParser >::check(L,2));
		if( !parser_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parser in wxAppConsole::base_OnCmdLineParsed function");
		}
		wxCmdLineParser & parser=*parser_ptr;

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAppConsole::base_OnCmdLineParsed(wxCmdLineParser &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAppConsole::OnCmdLineParsed(parser);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAppConsole::base_OnEventLoopEnter(wxEventLoopBase * loop)
	static int _bind_base_OnEventLoopEnter(lua_State *L) {
		if (!_lg_typecheck_base_OnEventLoopEnter(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::base_OnEventLoopEnter(wxEventLoopBase * loop) function, expected prototype:\nvoid wxAppConsole::base_OnEventLoopEnter(wxEventLoopBase * loop)\nClass arguments details:\narg 1 ID = 77241040\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEventLoopBase* loop=(Luna< wxEventLoopBase >::check(L,2));

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::base_OnEventLoopEnter(wxEventLoopBase *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAppConsole::OnEventLoopEnter(loop);

		return 0;
	}

	// void wxAppConsole::base_OnEventLoopExit(wxEventLoopBase * loop)
	static int _bind_base_OnEventLoopExit(lua_State *L) {
		if (!_lg_typecheck_base_OnEventLoopExit(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::base_OnEventLoopExit(wxEventLoopBase * loop) function, expected prototype:\nvoid wxAppConsole::base_OnEventLoopExit(wxEventLoopBase * loop)\nClass arguments details:\narg 1 ID = 77241040\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEventLoopBase* loop=(Luna< wxEventLoopBase >::check(L,2));

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::base_OnEventLoopExit(wxEventLoopBase *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAppConsole::OnEventLoopExit(loop);

		return 0;
	}

	// bool wxAppConsole::base_OnExceptionInMainLoop()
	static int _bind_base_OnExceptionInMainLoop(lua_State *L) {
		if (!_lg_typecheck_base_OnExceptionInMainLoop(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAppConsole::base_OnExceptionInMainLoop() function, expected prototype:\nbool wxAppConsole::base_OnExceptionInMainLoop()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAppConsole::base_OnExceptionInMainLoop(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAppConsole::OnExceptionInMainLoop();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxAppConsole::base_OnExit()
	static int _bind_base_OnExit(lua_State *L) {
		if (!_lg_typecheck_base_OnExit(L)) {
			luaL_error(L, "luna typecheck failed in int wxAppConsole::base_OnExit() function, expected prototype:\nint wxAppConsole::base_OnExit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAppConsole::base_OnExit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxAppConsole::OnExit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAppConsole::base_OnFatalException()
	static int _bind_base_OnFatalException(lua_State *L) {
		if (!_lg_typecheck_base_OnFatalException(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::base_OnFatalException() function, expected prototype:\nvoid wxAppConsole::base_OnFatalException()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::base_OnFatalException(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAppConsole::OnFatalException();

		return 0;
	}

	// bool wxAppConsole::base_OnInit()
	static int _bind_base_OnInit(lua_State *L) {
		if (!_lg_typecheck_base_OnInit(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAppConsole::base_OnInit() function, expected prototype:\nbool wxAppConsole::base_OnInit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAppConsole::base_OnInit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAppConsole::OnInit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAppConsole::base_OnInitCmdLine(wxCmdLineParser & parser)
	static int _bind_base_OnInitCmdLine(lua_State *L) {
		if (!_lg_typecheck_base_OnInitCmdLine(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::base_OnInitCmdLine(wxCmdLineParser & parser) function, expected prototype:\nvoid wxAppConsole::base_OnInitCmdLine(wxCmdLineParser & parser)\nClass arguments details:\narg 1 ID = 87987501\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCmdLineParser* parser_ptr=(Luna< wxCmdLineParser >::check(L,2));
		if( !parser_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parser in wxAppConsole::base_OnInitCmdLine function");
		}
		wxCmdLineParser & parser=*parser_ptr;

		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::base_OnInitCmdLine(wxCmdLineParser &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAppConsole::OnInitCmdLine(parser);

		return 0;
	}

	// int wxAppConsole::base_OnRun()
	static int _bind_base_OnRun(lua_State *L) {
		if (!_lg_typecheck_base_OnRun(L)) {
			luaL_error(L, "luna typecheck failed in int wxAppConsole::base_OnRun() function, expected prototype:\nint wxAppConsole::base_OnRun()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAppConsole::base_OnRun(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxAppConsole::OnRun();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAppConsole::base_OnUnhandledException()
	static int _bind_base_OnUnhandledException(lua_State *L) {
		if (!_lg_typecheck_base_OnUnhandledException(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppConsole::base_OnUnhandledException() function, expected prototype:\nvoid wxAppConsole::base_OnUnhandledException()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppConsole* self=Luna< wxObject >::checkSubType< wxAppConsole >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppConsole::base_OnUnhandledException(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAppConsole::OnUnhandledException();

		return 0;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_wxEventFilter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_wxEventFilter(lua_State *L) {
		if (!_lg_typecheck_baseCast_wxEventFilter(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_wxEventFilter function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		wxEventFilter* res = luna_caster<wxObject,wxEventFilter>::cast(self); // dynamic_cast<wxEventFilter*>(self);
		if(!res)
			return 0;
			
		Luna< wxEventFilter >::push(L,res,false);
		return 1;

	}

};

wxAppConsole* LunaTraits< wxAppConsole >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxAppConsole >::_bind_dtor(wxAppConsole* obj) {
	delete obj;
}

const char LunaTraits< wxAppConsole >::className[] = "wxAppConsole";
const char LunaTraits< wxAppConsole >::fullName[] = "wxAppConsole";
const char LunaTraits< wxAppConsole >::moduleName[] = "wx";
const char* LunaTraits< wxAppConsole >::parents[] = {"wx.wxEvtHandler", "wx.wxEventFilter", 0};
const int LunaTraits< wxAppConsole >::hash = 11491460;
const int LunaTraits< wxAppConsole >::uniqueIDs[] = {56813631, 53506535, 81056638,0};

luna_RegType LunaTraits< wxAppConsole >::methods[] = {
	{"MainLoop", &luna_wrapper_wxAppConsole::_bind_MainLoop},
	{"ExitMainLoop", &luna_wrapper_wxAppConsole::_bind_ExitMainLoop},
	{"FilterEvent", &luna_wrapper_wxAppConsole::_bind_FilterEvent},
	{"GetMainLoop", &luna_wrapper_wxAppConsole::_bind_GetMainLoop},
	{"UsesEventLoop", &luna_wrapper_wxAppConsole::_bind_UsesEventLoop},
	{"DeletePendingEvents", &luna_wrapper_wxAppConsole::_bind_DeletePendingEvents},
	{"HasPendingEvents", &luna_wrapper_wxAppConsole::_bind_HasPendingEvents},
	{"SuspendProcessingOfPendingEvents", &luna_wrapper_wxAppConsole::_bind_SuspendProcessingOfPendingEvents},
	{"ResumeProcessingOfPendingEvents", &luna_wrapper_wxAppConsole::_bind_ResumeProcessingOfPendingEvents},
	{"ScheduleForDestruction", &luna_wrapper_wxAppConsole::_bind_ScheduleForDestruction},
	{"IsScheduledForDestruction", &luna_wrapper_wxAppConsole::_bind_IsScheduledForDestruction},
	{"Yield", &luna_wrapper_wxAppConsole::_bind_Yield},
	{"OnCmdLineError", &luna_wrapper_wxAppConsole::_bind_OnCmdLineError},
	{"OnCmdLineHelp", &luna_wrapper_wxAppConsole::_bind_OnCmdLineHelp},
	{"OnCmdLineParsed", &luna_wrapper_wxAppConsole::_bind_OnCmdLineParsed},
	{"OnEventLoopEnter", &luna_wrapper_wxAppConsole::_bind_OnEventLoopEnter},
	{"OnEventLoopExit", &luna_wrapper_wxAppConsole::_bind_OnEventLoopExit},
	{"OnExceptionInMainLoop", &luna_wrapper_wxAppConsole::_bind_OnExceptionInMainLoop},
	{"OnExit", &luna_wrapper_wxAppConsole::_bind_OnExit},
	{"OnFatalException", &luna_wrapper_wxAppConsole::_bind_OnFatalException},
	{"OnInit", &luna_wrapper_wxAppConsole::_bind_OnInit},
	{"OnInitCmdLine", &luna_wrapper_wxAppConsole::_bind_OnInitCmdLine},
	{"OnRun", &luna_wrapper_wxAppConsole::_bind_OnRun},
	{"OnUnhandledException", &luna_wrapper_wxAppConsole::_bind_OnUnhandledException},
	{"GetAppDisplayName", &luna_wrapper_wxAppConsole::_bind_GetAppDisplayName},
	{"GetAppName", &luna_wrapper_wxAppConsole::_bind_GetAppName},
	{"GetClassName", &luna_wrapper_wxAppConsole::_bind_GetClassName},
	{"GetTraits", &luna_wrapper_wxAppConsole::_bind_GetTraits},
	{"GetVendorDisplayName", &luna_wrapper_wxAppConsole::_bind_GetVendorDisplayName},
	{"GetVendorName", &luna_wrapper_wxAppConsole::_bind_GetVendorName},
	{"SetAppDisplayName", &luna_wrapper_wxAppConsole::_bind_SetAppDisplayName},
	{"SetAppName", &luna_wrapper_wxAppConsole::_bind_SetAppName},
	{"SetClassName", &luna_wrapper_wxAppConsole::_bind_SetClassName},
	{"SetVendorDisplayName", &luna_wrapper_wxAppConsole::_bind_SetVendorDisplayName},
	{"SetVendorName", &luna_wrapper_wxAppConsole::_bind_SetVendorName},
	{"SetInstance", &luna_wrapper_wxAppConsole::_bind_SetInstance},
	{"GetInstance", &luna_wrapper_wxAppConsole::_bind_GetInstance},
	{"IsMainLoopRunning", &luna_wrapper_wxAppConsole::_bind_IsMainLoopRunning},
	{"getArgc", &luna_wrapper_wxAppConsole::_bind_getArgc},
	{"setArgc", &luna_wrapper_wxAppConsole::_bind_setArgc},
	{"base_GetClassInfo", &luna_wrapper_wxAppConsole::_bind_base_GetClassInfo},
	{"base_QueueEvent", &luna_wrapper_wxAppConsole::_bind_base_QueueEvent},
	{"base_AddPendingEvent", &luna_wrapper_wxAppConsole::_bind_base_AddPendingEvent},
	{"base_ProcessEvent", &luna_wrapper_wxAppConsole::_bind_base_ProcessEvent},
	{"base_SetNextHandler", &luna_wrapper_wxAppConsole::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxAppConsole::_bind_base_SetPreviousHandler},
	{"base_MainLoop", &luna_wrapper_wxAppConsole::_bind_base_MainLoop},
	{"base_ExitMainLoop", &luna_wrapper_wxAppConsole::_bind_base_ExitMainLoop},
	{"base_FilterEvent", &luna_wrapper_wxAppConsole::_bind_base_FilterEvent},
	{"base_UsesEventLoop", &luna_wrapper_wxAppConsole::_bind_base_UsesEventLoop},
	{"base_OnCmdLineError", &luna_wrapper_wxAppConsole::_bind_base_OnCmdLineError},
	{"base_OnCmdLineHelp", &luna_wrapper_wxAppConsole::_bind_base_OnCmdLineHelp},
	{"base_OnCmdLineParsed", &luna_wrapper_wxAppConsole::_bind_base_OnCmdLineParsed},
	{"base_OnEventLoopEnter", &luna_wrapper_wxAppConsole::_bind_base_OnEventLoopEnter},
	{"base_OnEventLoopExit", &luna_wrapper_wxAppConsole::_bind_base_OnEventLoopExit},
	{"base_OnExceptionInMainLoop", &luna_wrapper_wxAppConsole::_bind_base_OnExceptionInMainLoop},
	{"base_OnExit", &luna_wrapper_wxAppConsole::_bind_base_OnExit},
	{"base_OnFatalException", &luna_wrapper_wxAppConsole::_bind_base_OnFatalException},
	{"base_OnInit", &luna_wrapper_wxAppConsole::_bind_base_OnInit},
	{"base_OnInitCmdLine", &luna_wrapper_wxAppConsole::_bind_base_OnInitCmdLine},
	{"base_OnRun", &luna_wrapper_wxAppConsole::_bind_base_OnRun},
	{"base_OnUnhandledException", &luna_wrapper_wxAppConsole::_bind_base_OnUnhandledException},
	{"fromVoid", &luna_wrapper_wxAppConsole::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxAppConsole::_bind_asVoid},
	{"getTable", &luna_wrapper_wxAppConsole::_bind_getTable},
	{"aswxEventFilter", &luna_wrapper_wxAppConsole::_bind_baseCast_wxEventFilter},
	{0,0}
};

luna_ConverterType LunaTraits< wxAppConsole >::converters[] = {
	{"wxObject", &luna_wrapper_wxAppConsole::_cast_from_wxObject},
	{"wxEventFilter", &luna_wrapper_wxAppConsole::_cast_from_wxEventFilter},
	{0,0}
};

luna_RegEnumType LunaTraits< wxAppConsole >::enumValues[] = {
	{0,0}
};


