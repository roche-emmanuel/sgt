#include <plug_common.h>

#include <luna/wrappers/wrapper_sgtApp.h>

class luna_wrapper_sgtApp {
public:
	typedef Luna< sgtApp > luna_t;

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

		sgtApp* self= (sgtApp*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgtApp >::push(L,self,false);
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
		//sgtApp* ptr= dynamic_cast< sgtApp* >(Luna< wxObject >::check(L,1));
		sgtApp* ptr= luna_caster< wxObject, sgtApp >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgtApp >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxEventFilter(lua_State *L) {
		// all checked are already performed before reaching this point.
		//sgtApp* ptr= dynamic_cast< sgtApp* >(Luna< wxEventFilter >::check(L,1));
		sgtApp* ptr= luna_caster< wxEventFilter, sgtApp >::cast(Luna< wxEventFilter >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgtApp >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
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

	// Function binds:
	// wxClassInfo * sgtApp::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * sgtApp::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * sgtApp::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * sgtApp::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->sgtApp::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void sgtApp::base_QueueEvent(wxEvent * event)
	static int _bind_base_QueueEvent(lua_State *L) {
		if (!_lg_typecheck_base_QueueEvent(L)) {
			luaL_error(L, "luna typecheck failed in void sgtApp::base_QueueEvent(wxEvent * event) function, expected prototype:\nvoid sgtApp::base_QueueEvent(wxEvent * event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event=(Luna< wxObject >::checkSubType< wxEvent >(L,2));

		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgtApp::base_QueueEvent(wxEvent *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->sgtApp::QueueEvent(event);

		return 0;
	}

	// void sgtApp::base_AddPendingEvent(const wxEvent & event)
	static int _bind_base_AddPendingEvent(lua_State *L) {
		if (!_lg_typecheck_base_AddPendingEvent(L)) {
			luaL_error(L, "luna typecheck failed in void sgtApp::base_AddPendingEvent(const wxEvent & event) function, expected prototype:\nvoid sgtApp::base_AddPendingEvent(const wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in sgtApp::base_AddPendingEvent function");
		}
		const wxEvent & event=*event_ptr;

		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgtApp::base_AddPendingEvent(const wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->sgtApp::AddPendingEvent(event);

		return 0;
	}

	// bool sgtApp::base_ProcessEvent(wxEvent & event)
	static int _bind_base_ProcessEvent(lua_State *L) {
		if (!_lg_typecheck_base_ProcessEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool sgtApp::base_ProcessEvent(wxEvent & event) function, expected prototype:\nbool sgtApp::base_ProcessEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in sgtApp::base_ProcessEvent function");
		}
		wxEvent & event=*event_ptr;

		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgtApp::base_ProcessEvent(wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->sgtApp::ProcessEvent(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void sgtApp::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void sgtApp::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid sgtApp::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgtApp::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->sgtApp::SetNextHandler(handler);

		return 0;
	}

	// void sgtApp::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void sgtApp::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid sgtApp::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgtApp::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->sgtApp::SetPreviousHandler(handler);

		return 0;
	}

	// int sgtApp::base_MainLoop()
	static int _bind_base_MainLoop(lua_State *L) {
		if (!_lg_typecheck_base_MainLoop(L)) {
			luaL_error(L, "luna typecheck failed in int sgtApp::base_MainLoop() function, expected prototype:\nint sgtApp::base_MainLoop()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgtApp::base_MainLoop(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->sgtApp::MainLoop();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgtApp::base_ExitMainLoop()
	static int _bind_base_ExitMainLoop(lua_State *L) {
		if (!_lg_typecheck_base_ExitMainLoop(L)) {
			luaL_error(L, "luna typecheck failed in void sgtApp::base_ExitMainLoop() function, expected prototype:\nvoid sgtApp::base_ExitMainLoop()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgtApp::base_ExitMainLoop(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->sgtApp::ExitMainLoop();

		return 0;
	}

	// int sgtApp::base_FilterEvent(wxEvent & event)
	static int _bind_base_FilterEvent(lua_State *L) {
		if (!_lg_typecheck_base_FilterEvent(L)) {
			luaL_error(L, "luna typecheck failed in int sgtApp::base_FilterEvent(wxEvent & event) function, expected prototype:\nint sgtApp::base_FilterEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in sgtApp::base_FilterEvent function");
		}
		wxEvent & event=*event_ptr;

		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgtApp::base_FilterEvent(wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->sgtApp::FilterEvent(event);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool sgtApp::base_UsesEventLoop() const
	static int _bind_base_UsesEventLoop(lua_State *L) {
		if (!_lg_typecheck_base_UsesEventLoop(L)) {
			luaL_error(L, "luna typecheck failed in bool sgtApp::base_UsesEventLoop() const function, expected prototype:\nbool sgtApp::base_UsesEventLoop() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgtApp::base_UsesEventLoop() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->sgtApp::UsesEventLoop();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgtApp::base_OnCmdLineError(wxCmdLineParser & parser)
	static int _bind_base_OnCmdLineError(lua_State *L) {
		if (!_lg_typecheck_base_OnCmdLineError(L)) {
			luaL_error(L, "luna typecheck failed in bool sgtApp::base_OnCmdLineError(wxCmdLineParser & parser) function, expected prototype:\nbool sgtApp::base_OnCmdLineError(wxCmdLineParser & parser)\nClass arguments details:\narg 1 ID = 87987501\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCmdLineParser* parser_ptr=(Luna< wxCmdLineParser >::check(L,2));
		if( !parser_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parser in sgtApp::base_OnCmdLineError function");
		}
		wxCmdLineParser & parser=*parser_ptr;

		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgtApp::base_OnCmdLineError(wxCmdLineParser &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->sgtApp::OnCmdLineError(parser);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgtApp::base_OnCmdLineHelp(wxCmdLineParser & parser)
	static int _bind_base_OnCmdLineHelp(lua_State *L) {
		if (!_lg_typecheck_base_OnCmdLineHelp(L)) {
			luaL_error(L, "luna typecheck failed in bool sgtApp::base_OnCmdLineHelp(wxCmdLineParser & parser) function, expected prototype:\nbool sgtApp::base_OnCmdLineHelp(wxCmdLineParser & parser)\nClass arguments details:\narg 1 ID = 87987501\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCmdLineParser* parser_ptr=(Luna< wxCmdLineParser >::check(L,2));
		if( !parser_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parser in sgtApp::base_OnCmdLineHelp function");
		}
		wxCmdLineParser & parser=*parser_ptr;

		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgtApp::base_OnCmdLineHelp(wxCmdLineParser &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->sgtApp::OnCmdLineHelp(parser);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgtApp::base_OnCmdLineParsed(wxCmdLineParser & parser)
	static int _bind_base_OnCmdLineParsed(lua_State *L) {
		if (!_lg_typecheck_base_OnCmdLineParsed(L)) {
			luaL_error(L, "luna typecheck failed in bool sgtApp::base_OnCmdLineParsed(wxCmdLineParser & parser) function, expected prototype:\nbool sgtApp::base_OnCmdLineParsed(wxCmdLineParser & parser)\nClass arguments details:\narg 1 ID = 87987501\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCmdLineParser* parser_ptr=(Luna< wxCmdLineParser >::check(L,2));
		if( !parser_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parser in sgtApp::base_OnCmdLineParsed function");
		}
		wxCmdLineParser & parser=*parser_ptr;

		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgtApp::base_OnCmdLineParsed(wxCmdLineParser &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->sgtApp::OnCmdLineParsed(parser);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void sgtApp::base_OnEventLoopEnter(wxEventLoopBase * loop)
	static int _bind_base_OnEventLoopEnter(lua_State *L) {
		if (!_lg_typecheck_base_OnEventLoopEnter(L)) {
			luaL_error(L, "luna typecheck failed in void sgtApp::base_OnEventLoopEnter(wxEventLoopBase * loop) function, expected prototype:\nvoid sgtApp::base_OnEventLoopEnter(wxEventLoopBase * loop)\nClass arguments details:\narg 1 ID = 77241040\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEventLoopBase* loop=(Luna< wxEventLoopBase >::check(L,2));

		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgtApp::base_OnEventLoopEnter(wxEventLoopBase *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->sgtApp::OnEventLoopEnter(loop);

		return 0;
	}

	// void sgtApp::base_OnEventLoopExit(wxEventLoopBase * loop)
	static int _bind_base_OnEventLoopExit(lua_State *L) {
		if (!_lg_typecheck_base_OnEventLoopExit(L)) {
			luaL_error(L, "luna typecheck failed in void sgtApp::base_OnEventLoopExit(wxEventLoopBase * loop) function, expected prototype:\nvoid sgtApp::base_OnEventLoopExit(wxEventLoopBase * loop)\nClass arguments details:\narg 1 ID = 77241040\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEventLoopBase* loop=(Luna< wxEventLoopBase >::check(L,2));

		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgtApp::base_OnEventLoopExit(wxEventLoopBase *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->sgtApp::OnEventLoopExit(loop);

		return 0;
	}

	// bool sgtApp::base_OnExceptionInMainLoop()
	static int _bind_base_OnExceptionInMainLoop(lua_State *L) {
		if (!_lg_typecheck_base_OnExceptionInMainLoop(L)) {
			luaL_error(L, "luna typecheck failed in bool sgtApp::base_OnExceptionInMainLoop() function, expected prototype:\nbool sgtApp::base_OnExceptionInMainLoop()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgtApp::base_OnExceptionInMainLoop(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->sgtApp::OnExceptionInMainLoop();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int sgtApp::base_OnExit()
	static int _bind_base_OnExit(lua_State *L) {
		if (!_lg_typecheck_base_OnExit(L)) {
			luaL_error(L, "luna typecheck failed in int sgtApp::base_OnExit() function, expected prototype:\nint sgtApp::base_OnExit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgtApp::base_OnExit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->sgtApp::OnExit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgtApp::base_OnFatalException()
	static int _bind_base_OnFatalException(lua_State *L) {
		if (!_lg_typecheck_base_OnFatalException(L)) {
			luaL_error(L, "luna typecheck failed in void sgtApp::base_OnFatalException() function, expected prototype:\nvoid sgtApp::base_OnFatalException()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgtApp::base_OnFatalException(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->sgtApp::OnFatalException();

		return 0;
	}

	// bool sgtApp::base_OnInit()
	static int _bind_base_OnInit(lua_State *L) {
		if (!_lg_typecheck_base_OnInit(L)) {
			luaL_error(L, "luna typecheck failed in bool sgtApp::base_OnInit() function, expected prototype:\nbool sgtApp::base_OnInit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgtApp::base_OnInit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->sgtApp::OnInit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void sgtApp::base_OnInitCmdLine(wxCmdLineParser & parser)
	static int _bind_base_OnInitCmdLine(lua_State *L) {
		if (!_lg_typecheck_base_OnInitCmdLine(L)) {
			luaL_error(L, "luna typecheck failed in void sgtApp::base_OnInitCmdLine(wxCmdLineParser & parser) function, expected prototype:\nvoid sgtApp::base_OnInitCmdLine(wxCmdLineParser & parser)\nClass arguments details:\narg 1 ID = 87987501\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCmdLineParser* parser_ptr=(Luna< wxCmdLineParser >::check(L,2));
		if( !parser_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parser in sgtApp::base_OnInitCmdLine function");
		}
		wxCmdLineParser & parser=*parser_ptr;

		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgtApp::base_OnInitCmdLine(wxCmdLineParser &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->sgtApp::OnInitCmdLine(parser);

		return 0;
	}

	// int sgtApp::base_OnRun()
	static int _bind_base_OnRun(lua_State *L) {
		if (!_lg_typecheck_base_OnRun(L)) {
			luaL_error(L, "luna typecheck failed in int sgtApp::base_OnRun() function, expected prototype:\nint sgtApp::base_OnRun()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgtApp::base_OnRun(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->sgtApp::OnRun();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgtApp::base_OnUnhandledException()
	static int _bind_base_OnUnhandledException(lua_State *L) {
		if (!_lg_typecheck_base_OnUnhandledException(L)) {
			luaL_error(L, "luna typecheck failed in void sgtApp::base_OnUnhandledException() function, expected prototype:\nvoid sgtApp::base_OnUnhandledException()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgtApp::base_OnUnhandledException(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->sgtApp::OnUnhandledException();

		return 0;
	}

	// wxVideoMode sgtApp::base_GetDisplayMode() const
	static int _bind_base_GetDisplayMode(lua_State *L) {
		if (!_lg_typecheck_base_GetDisplayMode(L)) {
			luaL_error(L, "luna typecheck failed in wxVideoMode sgtApp::base_GetDisplayMode() const function, expected prototype:\nwxVideoMode sgtApp::base_GetDisplayMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVideoMode sgtApp::base_GetDisplayMode() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVideoMode stack_lret = self->sgtApp::GetDisplayMode();
		wxVideoMode* lret = new wxVideoMode(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVideoMode >::push(L,lret,true);

		return 1;
	}

	// wxLayoutDirection sgtApp::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection sgtApp::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection sgtApp::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection sgtApp::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->sgtApp::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxWindow * sgtApp::base_GetTopWindow() const
	static int _bind_base_GetTopWindow(lua_State *L) {
		if (!_lg_typecheck_base_GetTopWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * sgtApp::base_GetTopWindow() const function, expected prototype:\nwxWindow * sgtApp::base_GetTopWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * sgtApp::base_GetTopWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->sgtApp::GetTopWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// bool sgtApp::base_IsActive() const
	static int _bind_base_IsActive(lua_State *L) {
		if (!_lg_typecheck_base_IsActive(L)) {
			luaL_error(L, "luna typecheck failed in bool sgtApp::base_IsActive() const function, expected prototype:\nbool sgtApp::base_IsActive() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgtApp::base_IsActive() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->sgtApp::IsActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgtApp::base_SafeYield(wxWindow * win, bool onlyIfNeeded)
	static int _bind_base_SafeYield(lua_State *L) {
		if (!_lg_typecheck_base_SafeYield(L)) {
			luaL_error(L, "luna typecheck failed in bool sgtApp::base_SafeYield(wxWindow * win, bool onlyIfNeeded) function, expected prototype:\nbool sgtApp::base_SafeYield(wxWindow * win, bool onlyIfNeeded)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		bool onlyIfNeeded=(bool)(lua_toboolean(L,3)==1);

		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgtApp::base_SafeYield(wxWindow *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->sgtApp::SafeYield(win, onlyIfNeeded);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgtApp::base_SafeYieldFor(wxWindow * win, long eventsToProcess)
	static int _bind_base_SafeYieldFor(lua_State *L) {
		if (!_lg_typecheck_base_SafeYieldFor(L)) {
			luaL_error(L, "luna typecheck failed in bool sgtApp::base_SafeYieldFor(wxWindow * win, long eventsToProcess) function, expected prototype:\nbool sgtApp::base_SafeYieldFor(wxWindow * win, long eventsToProcess)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		long eventsToProcess=(long)lua_tonumber(L,3);

		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgtApp::base_SafeYieldFor(wxWindow *, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->sgtApp::SafeYieldFor(win, eventsToProcess);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgtApp::base_SetDisplayMode(const wxVideoMode & info)
	static int _bind_base_SetDisplayMode(lua_State *L) {
		if (!_lg_typecheck_base_SetDisplayMode(L)) {
			luaL_error(L, "luna typecheck failed in bool sgtApp::base_SetDisplayMode(const wxVideoMode & info) function, expected prototype:\nbool sgtApp::base_SetDisplayMode(const wxVideoMode & info)\nClass arguments details:\narg 1 ID = 44802589\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxVideoMode* info_ptr=(Luna< wxVideoMode >::check(L,2));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in sgtApp::base_SetDisplayMode function");
		}
		const wxVideoMode & info=*info_ptr;

		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgtApp::base_SetDisplayMode(const wxVideoMode &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->sgtApp::SetDisplayMode(info);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgtApp::base_SetNativeTheme(const wxString & theme)
	static int _bind_base_SetNativeTheme(lua_State *L) {
		if (!_lg_typecheck_base_SetNativeTheme(L)) {
			luaL_error(L, "luna typecheck failed in bool sgtApp::base_SetNativeTheme(const wxString & theme) function, expected prototype:\nbool sgtApp::base_SetNativeTheme(const wxString & theme)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString theme(lua_tostring(L,2),lua_objlen(L,2));

		sgtApp* self=Luna< wxObject >::checkSubType< sgtApp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgtApp::base_SetNativeTheme(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->sgtApp::SetNativeTheme(theme);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

sgtApp* LunaTraits< sgtApp >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< sgtApp >::_bind_dtor(sgtApp* obj) {
	delete obj;
}

const char LunaTraits< sgtApp >::className[] = "sgtApp";
const char LunaTraits< sgtApp >::fullName[] = "sgtApp";
const char LunaTraits< sgtApp >::moduleName[] = "wx";
const char* LunaTraits< sgtApp >::parents[] = {"wx.wxApp", 0};
const int LunaTraits< sgtApp >::hash = 90996666;
const int LunaTraits< sgtApp >::uniqueIDs[] = {56813631, 53506535, 81056638,0};

luna_RegType LunaTraits< sgtApp >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_sgtApp::_bind_base_GetClassInfo},
	{"base_QueueEvent", &luna_wrapper_sgtApp::_bind_base_QueueEvent},
	{"base_AddPendingEvent", &luna_wrapper_sgtApp::_bind_base_AddPendingEvent},
	{"base_ProcessEvent", &luna_wrapper_sgtApp::_bind_base_ProcessEvent},
	{"base_SetNextHandler", &luna_wrapper_sgtApp::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_sgtApp::_bind_base_SetPreviousHandler},
	{"base_MainLoop", &luna_wrapper_sgtApp::_bind_base_MainLoop},
	{"base_ExitMainLoop", &luna_wrapper_sgtApp::_bind_base_ExitMainLoop},
	{"base_FilterEvent", &luna_wrapper_sgtApp::_bind_base_FilterEvent},
	{"base_UsesEventLoop", &luna_wrapper_sgtApp::_bind_base_UsesEventLoop},
	{"base_OnCmdLineError", &luna_wrapper_sgtApp::_bind_base_OnCmdLineError},
	{"base_OnCmdLineHelp", &luna_wrapper_sgtApp::_bind_base_OnCmdLineHelp},
	{"base_OnCmdLineParsed", &luna_wrapper_sgtApp::_bind_base_OnCmdLineParsed},
	{"base_OnEventLoopEnter", &luna_wrapper_sgtApp::_bind_base_OnEventLoopEnter},
	{"base_OnEventLoopExit", &luna_wrapper_sgtApp::_bind_base_OnEventLoopExit},
	{"base_OnExceptionInMainLoop", &luna_wrapper_sgtApp::_bind_base_OnExceptionInMainLoop},
	{"base_OnExit", &luna_wrapper_sgtApp::_bind_base_OnExit},
	{"base_OnFatalException", &luna_wrapper_sgtApp::_bind_base_OnFatalException},
	{"base_OnInit", &luna_wrapper_sgtApp::_bind_base_OnInit},
	{"base_OnInitCmdLine", &luna_wrapper_sgtApp::_bind_base_OnInitCmdLine},
	{"base_OnRun", &luna_wrapper_sgtApp::_bind_base_OnRun},
	{"base_OnUnhandledException", &luna_wrapper_sgtApp::_bind_base_OnUnhandledException},
	{"base_GetDisplayMode", &luna_wrapper_sgtApp::_bind_base_GetDisplayMode},
	{"base_GetLayoutDirection", &luna_wrapper_sgtApp::_bind_base_GetLayoutDirection},
	{"base_GetTopWindow", &luna_wrapper_sgtApp::_bind_base_GetTopWindow},
	{"base_IsActive", &luna_wrapper_sgtApp::_bind_base_IsActive},
	{"base_SafeYield", &luna_wrapper_sgtApp::_bind_base_SafeYield},
	{"base_SafeYieldFor", &luna_wrapper_sgtApp::_bind_base_SafeYieldFor},
	{"base_SetDisplayMode", &luna_wrapper_sgtApp::_bind_base_SetDisplayMode},
	{"base_SetNativeTheme", &luna_wrapper_sgtApp::_bind_base_SetNativeTheme},
	{"fromVoid", &luna_wrapper_sgtApp::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgtApp::_bind_asVoid},
	{"getTable", &luna_wrapper_sgtApp::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgtApp >::converters[] = {
	{"wxObject", &luna_wrapper_sgtApp::_cast_from_wxObject},
	{"wxEventFilter", &luna_wrapper_sgtApp::_cast_from_wxEventFilter},
	{0,0}
};

luna_RegEnumType LunaTraits< sgtApp >::enumValues[] = {
	{0,0}
};


