#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPropertyGridPage.h>

class luna_wrapper_wxPropertyGridPage {
public:
	typedef Luna< wxPropertyGridPage > luna_t;

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

		wxPropertyGridPage* self= (wxPropertyGridPage*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPropertyGridPage >::push(L,self,false);
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
		//wxPropertyGridPage* ptr= dynamic_cast< wxPropertyGridPage* >(Luna< wxObject >::check(L,1));
		wxPropertyGridPage* ptr= luna_caster< wxObject, wxPropertyGridPage >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPropertyGridPage >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxPropertyGridInterface(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxPropertyGridPage* ptr= dynamic_cast< wxPropertyGridPage* >(Luna< wxPropertyGridInterface >::check(L,1));
		wxPropertyGridPage* ptr= luna_caster< wxPropertyGridInterface, wxPropertyGridPage >::cast(Luna< wxPropertyGridInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPropertyGridPage >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FitColumns(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRoot(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSplitterPosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Init(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsHandlingAllEvents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnShow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RefreshProperty(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSplitterPosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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

	inline static bool _lg_typecheck_base_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Init(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsHandlingAllEvents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OnShow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_RefreshProperty(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxPropertyGridPage::wxPropertyGridPage()
	static wxPropertyGridPage* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPropertyGridPage::wxPropertyGridPage() function, expected prototype:\nwxPropertyGridPage::wxPropertyGridPage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxPropertyGridPage();
	}

	// wxPropertyGridPage::wxPropertyGridPage(lua_Table * data)
	static wxPropertyGridPage* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPropertyGridPage::wxPropertyGridPage(lua_Table * data) function, expected prototype:\nwxPropertyGridPage::wxPropertyGridPage(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxPropertyGridPage(L,NULL);
	}

	// Overload binder for wxPropertyGridPage::wxPropertyGridPage
	static wxPropertyGridPage* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxPropertyGridPage, cannot match any of the overloads for function wxPropertyGridPage:\n  wxPropertyGridPage()\n  wxPropertyGridPage(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void wxPropertyGridPage::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridPage::Clear() function, expected prototype:\nvoid wxPropertyGridPage::Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridPage* self=Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridPage::Clear(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Clear();

		return 0;
	}

	// wxSize wxPropertyGridPage::FitColumns()
	static int _bind_FitColumns(lua_State *L) {
		if (!_lg_typecheck_FitColumns(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxPropertyGridPage::FitColumns() function, expected prototype:\nwxSize wxPropertyGridPage::FitColumns()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridPage* self=Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxPropertyGridPage::FitColumns(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->FitColumns();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// int wxPropertyGridPage::GetIndex() const
	static int _bind_GetIndex(lua_State *L) {
		if (!_lg_typecheck_GetIndex(L)) {
			luaL_error(L, "luna typecheck failed in int wxPropertyGridPage::GetIndex() const function, expected prototype:\nint wxPropertyGridPage::GetIndex() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridPage* self=Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPropertyGridPage::GetIndex() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPGProperty * wxPropertyGridPage::GetRoot() const
	static int _bind_GetRoot(lua_State *L) {
		if (!_lg_typecheck_GetRoot(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGridPage::GetRoot() const function, expected prototype:\nwxPGProperty * wxPropertyGridPage::GetRoot() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridPage* self=Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGridPage::GetRoot() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGProperty * lret = self->GetRoot();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// int wxPropertyGridPage::GetSplitterPosition(int col = 0) const
	static int _bind_GetSplitterPosition(lua_State *L) {
		if (!_lg_typecheck_GetSplitterPosition(L)) {
			luaL_error(L, "luna typecheck failed in int wxPropertyGridPage::GetSplitterPosition(int col = 0) const function, expected prototype:\nint wxPropertyGridPage::GetSplitterPosition(int col = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int col=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxPropertyGridPage* self=Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPropertyGridPage::GetSplitterPosition(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetSplitterPosition(col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPropertyGridPage::GetToolId() const
	static int _bind_GetToolId(lua_State *L) {
		if (!_lg_typecheck_GetToolId(L)) {
			luaL_error(L, "luna typecheck failed in int wxPropertyGridPage::GetToolId() const function, expected prototype:\nint wxPropertyGridPage::GetToolId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridPage* self=Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPropertyGridPage::GetToolId() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetToolId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxPropertyGridPage::Init()
	static int _bind_Init(lua_State *L) {
		if (!_lg_typecheck_Init(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridPage::Init() function, expected prototype:\nvoid wxPropertyGridPage::Init()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridPage* self=Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridPage::Init(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Init();

		return 0;
	}

	// bool wxPropertyGridPage::IsHandlingAllEvents() const
	static int _bind_IsHandlingAllEvents(lua_State *L) {
		if (!_lg_typecheck_IsHandlingAllEvents(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridPage::IsHandlingAllEvents() const function, expected prototype:\nbool wxPropertyGridPage::IsHandlingAllEvents() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridPage* self=Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridPage::IsHandlingAllEvents() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsHandlingAllEvents();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGridPage::OnShow()
	static int _bind_OnShow(lua_State *L) {
		if (!_lg_typecheck_OnShow(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridPage::OnShow() function, expected prototype:\nvoid wxPropertyGridPage::OnShow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridPage* self=Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridPage::OnShow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnShow();

		return 0;
	}

	// void wxPropertyGridPage::RefreshProperty(wxPGProperty * p)
	static int _bind_RefreshProperty(lua_State *L) {
		if (!_lg_typecheck_RefreshProperty(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridPage::RefreshProperty(wxPGProperty * p) function, expected prototype:\nvoid wxPropertyGridPage::RefreshProperty(wxPGProperty * p)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGProperty* p=(Luna< wxObject >::checkSubType< wxPGProperty >(L,2));

		wxPropertyGridPage* self=Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridPage::RefreshProperty(wxPGProperty *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefreshProperty(p);

		return 0;
	}

	// void wxPropertyGridPage::SetSplitterPosition(int splitterPos, int col = 0)
	static int _bind_SetSplitterPosition(lua_State *L) {
		if (!_lg_typecheck_SetSplitterPosition(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridPage::SetSplitterPosition(int splitterPos, int col = 0) function, expected prototype:\nvoid wxPropertyGridPage::SetSplitterPosition(int splitterPos, int col = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int splitterPos=(int)lua_tointeger(L,2);
		int col=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		wxPropertyGridPage* self=Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridPage::SetSplitterPosition(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSplitterPosition(splitterPos, col);

		return 0;
	}

	// wxClassInfo * wxPropertyGridPage::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxPropertyGridPage::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxPropertyGridPage::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridPage* self=Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxPropertyGridPage::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxPropertyGridPage::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void wxPropertyGridPage::base_QueueEvent(wxEvent * event)
	static int _bind_base_QueueEvent(lua_State *L) {
		if (!_lg_typecheck_base_QueueEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridPage::base_QueueEvent(wxEvent * event) function, expected prototype:\nvoid wxPropertyGridPage::base_QueueEvent(wxEvent * event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event=(Luna< wxObject >::checkSubType< wxEvent >(L,2));

		wxPropertyGridPage* self=Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridPage::base_QueueEvent(wxEvent *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridPage::QueueEvent(event);

		return 0;
	}

	// void wxPropertyGridPage::base_AddPendingEvent(const wxEvent & event)
	static int _bind_base_AddPendingEvent(lua_State *L) {
		if (!_lg_typecheck_base_AddPendingEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridPage::base_AddPendingEvent(const wxEvent & event) function, expected prototype:\nvoid wxPropertyGridPage::base_AddPendingEvent(const wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxPropertyGridPage::base_AddPendingEvent function");
		}
		const wxEvent & event=*event_ptr;

		wxPropertyGridPage* self=Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridPage::base_AddPendingEvent(const wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridPage::AddPendingEvent(event);

		return 0;
	}

	// bool wxPropertyGridPage::base_ProcessEvent(wxEvent & event)
	static int _bind_base_ProcessEvent(lua_State *L) {
		if (!_lg_typecheck_base_ProcessEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridPage::base_ProcessEvent(wxEvent & event) function, expected prototype:\nbool wxPropertyGridPage::base_ProcessEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxPropertyGridPage::base_ProcessEvent function");
		}
		wxEvent & event=*event_ptr;

		wxPropertyGridPage* self=Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridPage::base_ProcessEvent(wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridPage::ProcessEvent(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGridPage::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridPage::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxPropertyGridPage::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxPropertyGridPage* self=Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridPage::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridPage::SetNextHandler(handler);

		return 0;
	}

	// void wxPropertyGridPage::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridPage::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxPropertyGridPage::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxPropertyGridPage* self=Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridPage::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridPage::SetPreviousHandler(handler);

		return 0;
	}

	// void wxPropertyGridPage::base_Clear()
	static int _bind_base_Clear(lua_State *L) {
		if (!_lg_typecheck_base_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridPage::base_Clear() function, expected prototype:\nvoid wxPropertyGridPage::base_Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridPage* self=Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridPage::base_Clear(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridPage::Clear();

		return 0;
	}

	// void wxPropertyGridPage::base_Init()
	static int _bind_base_Init(lua_State *L) {
		if (!_lg_typecheck_base_Init(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridPage::base_Init() function, expected prototype:\nvoid wxPropertyGridPage::base_Init()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridPage* self=Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridPage::base_Init(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridPage::Init();

		return 0;
	}

	// bool wxPropertyGridPage::base_IsHandlingAllEvents() const
	static int _bind_base_IsHandlingAllEvents(lua_State *L) {
		if (!_lg_typecheck_base_IsHandlingAllEvents(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridPage::base_IsHandlingAllEvents() const function, expected prototype:\nbool wxPropertyGridPage::base_IsHandlingAllEvents() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridPage* self=Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridPage::base_IsHandlingAllEvents() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridPage::IsHandlingAllEvents();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGridPage::base_OnShow()
	static int _bind_base_OnShow(lua_State *L) {
		if (!_lg_typecheck_base_OnShow(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridPage::base_OnShow() function, expected prototype:\nvoid wxPropertyGridPage::base_OnShow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridPage* self=Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridPage::base_OnShow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridPage::OnShow();

		return 0;
	}

	// void wxPropertyGridPage::base_RefreshProperty(wxPGProperty * p)
	static int _bind_base_RefreshProperty(lua_State *L) {
		if (!_lg_typecheck_base_RefreshProperty(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridPage::base_RefreshProperty(wxPGProperty * p) function, expected prototype:\nvoid wxPropertyGridPage::base_RefreshProperty(wxPGProperty * p)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGProperty* p=(Luna< wxObject >::checkSubType< wxPGProperty >(L,2));

		wxPropertyGridPage* self=Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridPage::base_RefreshProperty(wxPGProperty *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridPage::RefreshProperty(p);

		return 0;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_wxPropertyGridInterface(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_wxPropertyGridInterface(lua_State *L) {
		if (!_lg_typecheck_baseCast_wxPropertyGridInterface(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_wxPropertyGridInterface function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		wxPropertyGridInterface* res = luna_caster<wxObject,wxPropertyGridInterface>::cast(self); // dynamic_cast<wxPropertyGridInterface*>(self);
		if(!res)
			return 0;
			
		Luna< wxPropertyGridInterface >::push(L,res,false);
		return 1;

	}

};

wxPropertyGridPage* LunaTraits< wxPropertyGridPage >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPropertyGridPage::_bind_ctor(L);
}

void LunaTraits< wxPropertyGridPage >::_bind_dtor(wxPropertyGridPage* obj) {
	delete obj;
}

const char LunaTraits< wxPropertyGridPage >::className[] = "wxPropertyGridPage";
const char LunaTraits< wxPropertyGridPage >::fullName[] = "wxPropertyGridPage";
const char LunaTraits< wxPropertyGridPage >::moduleName[] = "wx";
const char* LunaTraits< wxPropertyGridPage >::parents[] = {"wx.wxEvtHandler", "wx.wxPropertyGridInterface", 0};
const int LunaTraits< wxPropertyGridPage >::hash = 6952928;
const int LunaTraits< wxPropertyGridPage >::uniqueIDs[] = {56813631, 53506535, 61417741,0};

luna_RegType LunaTraits< wxPropertyGridPage >::methods[] = {
	{"Clear", &luna_wrapper_wxPropertyGridPage::_bind_Clear},
	{"FitColumns", &luna_wrapper_wxPropertyGridPage::_bind_FitColumns},
	{"GetIndex", &luna_wrapper_wxPropertyGridPage::_bind_GetIndex},
	{"GetRoot", &luna_wrapper_wxPropertyGridPage::_bind_GetRoot},
	{"GetSplitterPosition", &luna_wrapper_wxPropertyGridPage::_bind_GetSplitterPosition},
	{"GetToolId", &luna_wrapper_wxPropertyGridPage::_bind_GetToolId},
	{"Init", &luna_wrapper_wxPropertyGridPage::_bind_Init},
	{"IsHandlingAllEvents", &luna_wrapper_wxPropertyGridPage::_bind_IsHandlingAllEvents},
	{"OnShow", &luna_wrapper_wxPropertyGridPage::_bind_OnShow},
	{"RefreshProperty", &luna_wrapper_wxPropertyGridPage::_bind_RefreshProperty},
	{"SetSplitterPosition", &luna_wrapper_wxPropertyGridPage::_bind_SetSplitterPosition},
	{"base_GetClassInfo", &luna_wrapper_wxPropertyGridPage::_bind_base_GetClassInfo},
	{"base_QueueEvent", &luna_wrapper_wxPropertyGridPage::_bind_base_QueueEvent},
	{"base_AddPendingEvent", &luna_wrapper_wxPropertyGridPage::_bind_base_AddPendingEvent},
	{"base_ProcessEvent", &luna_wrapper_wxPropertyGridPage::_bind_base_ProcessEvent},
	{"base_SetNextHandler", &luna_wrapper_wxPropertyGridPage::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxPropertyGridPage::_bind_base_SetPreviousHandler},
	{"base_Clear", &luna_wrapper_wxPropertyGridPage::_bind_base_Clear},
	{"base_Init", &luna_wrapper_wxPropertyGridPage::_bind_base_Init},
	{"base_IsHandlingAllEvents", &luna_wrapper_wxPropertyGridPage::_bind_base_IsHandlingAllEvents},
	{"base_OnShow", &luna_wrapper_wxPropertyGridPage::_bind_base_OnShow},
	{"base_RefreshProperty", &luna_wrapper_wxPropertyGridPage::_bind_base_RefreshProperty},
	{"fromVoid", &luna_wrapper_wxPropertyGridPage::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPropertyGridPage::_bind_asVoid},
	{"getTable", &luna_wrapper_wxPropertyGridPage::_bind_getTable},
	{"aswxPropertyGridInterface", &luna_wrapper_wxPropertyGridPage::_bind_baseCast_wxPropertyGridInterface},
	{0,0}
};

luna_ConverterType LunaTraits< wxPropertyGridPage >::converters[] = {
	{"wxObject", &luna_wrapper_wxPropertyGridPage::_cast_from_wxObject},
	{"wxPropertyGridInterface", &luna_wrapper_wxPropertyGridPage::_cast_from_wxPropertyGridInterface},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPropertyGridPage >::enumValues[] = {
	{0,0}
};


