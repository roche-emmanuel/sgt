#include <plug_common.h>

#include <luna/wrappers/wrapper_wxEvtHandler.h>

class luna_wrapper_wxEvtHandler {
public:
	typedef Luna< wxEvtHandler > luna_t;

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

		wxEvtHandler* self= (wxEvtHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxEvtHandler >::push(L,self,false);
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
		//wxEvtHandler* ptr= dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		wxEvtHandler* ptr= luna_caster< wxObject, wxEvtHandler >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxEvtHandler >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_QueueEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddPendingEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ProcessEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ProcessEventLocally(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeletePendingEvents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetClientData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetClientObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetClientData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClientObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetEvtHandlerEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNextHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPreviousHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetEvtHandlerEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNextHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPreviousHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Unlink(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsUnlinked(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AddFilter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81056638)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveFilter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81056638)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_disconnect_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxEvtHandler >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_disconnect_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxEvtHandler >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_disconnect_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxEvtHandler >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_connect_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxEvtHandler >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isfunction(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_connect_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxEvtHandler >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isfunction(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_connect_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxEvtHandler >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isfunction(L,3)==0 ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxEvtHandler::wxEvtHandler()
	static wxEvtHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxEvtHandler::wxEvtHandler() function, expected prototype:\nwxEvtHandler::wxEvtHandler()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxEvtHandler();
	}

	// wxEvtHandler::wxEvtHandler(lua_Table * data)
	static wxEvtHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxEvtHandler::wxEvtHandler(lua_Table * data) function, expected prototype:\nwxEvtHandler::wxEvtHandler(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxEvtHandler(L,NULL);
	}

	// Overload binder for wxEvtHandler::wxEvtHandler
	static wxEvtHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxEvtHandler, cannot match any of the overloads for function wxEvtHandler:\n  wxEvtHandler()\n  wxEvtHandler(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void wxEvtHandler::QueueEvent(wxEvent * event)
	static int _bind_QueueEvent(lua_State *L) {
		if (!_lg_typecheck_QueueEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxEvtHandler::QueueEvent(wxEvent * event) function, expected prototype:\nvoid wxEvtHandler::QueueEvent(wxEvent * event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event=(Luna< wxObject >::checkSubType< wxEvent >(L,2));

		wxEvtHandler* self=Luna< wxObject >::checkSubType< wxEvtHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxEvtHandler::QueueEvent(wxEvent *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->QueueEvent(event);

		return 0;
	}

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	static int _bind_AddPendingEvent(lua_State *L) {
		if (!_lg_typecheck_AddPendingEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxEvtHandler::AddPendingEvent(const wxEvent & event) function, expected prototype:\nvoid wxEvtHandler::AddPendingEvent(const wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxEvtHandler::AddPendingEvent function");
		}
		const wxEvent & event=*event_ptr;

		wxEvtHandler* self=Luna< wxObject >::checkSubType< wxEvtHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxEvtHandler::AddPendingEvent(const wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddPendingEvent(event);

		return 0;
	}

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	static int _bind_ProcessEvent(lua_State *L) {
		if (!_lg_typecheck_ProcessEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxEvtHandler::ProcessEvent(wxEvent & event) function, expected prototype:\nbool wxEvtHandler::ProcessEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxEvtHandler::ProcessEvent function");
		}
		wxEvent & event=*event_ptr;

		wxEvtHandler* self=Luna< wxObject >::checkSubType< wxEvtHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxEvtHandler::ProcessEvent(wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ProcessEvent(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxEvtHandler::ProcessEventLocally(wxEvent & event)
	static int _bind_ProcessEventLocally(lua_State *L) {
		if (!_lg_typecheck_ProcessEventLocally(L)) {
			luaL_error(L, "luna typecheck failed in bool wxEvtHandler::ProcessEventLocally(wxEvent & event) function, expected prototype:\nbool wxEvtHandler::ProcessEventLocally(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxEvtHandler::ProcessEventLocally function");
		}
		wxEvent & event=*event_ptr;

		wxEvtHandler* self=Luna< wxObject >::checkSubType< wxEvtHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxEvtHandler::ProcessEventLocally(wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ProcessEventLocally(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxEvtHandler::DeletePendingEvents()
	static int _bind_DeletePendingEvents(lua_State *L) {
		if (!_lg_typecheck_DeletePendingEvents(L)) {
			luaL_error(L, "luna typecheck failed in void wxEvtHandler::DeletePendingEvents() function, expected prototype:\nvoid wxEvtHandler::DeletePendingEvents()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxEvtHandler* self=Luna< wxObject >::checkSubType< wxEvtHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxEvtHandler::DeletePendingEvents(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeletePendingEvents();

		return 0;
	}

	// void * wxEvtHandler::GetClientData() const
	static int _bind_GetClientData(lua_State *L) {
		if (!_lg_typecheck_GetClientData(L)) {
			luaL_error(L, "luna typecheck failed in void * wxEvtHandler::GetClientData() const function, expected prototype:\nvoid * wxEvtHandler::GetClientData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxEvtHandler* self=Luna< wxObject >::checkSubType< wxEvtHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void * wxEvtHandler::GetClientData() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->GetClientData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// wxClientData * wxEvtHandler::GetClientObject() const
	static int _bind_GetClientObject(lua_State *L) {
		if (!_lg_typecheck_GetClientObject(L)) {
			luaL_error(L, "luna typecheck failed in wxClientData * wxEvtHandler::GetClientObject() const function, expected prototype:\nwxClientData * wxEvtHandler::GetClientObject() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxEvtHandler* self=Luna< wxObject >::checkSubType< wxEvtHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClientData * wxEvtHandler::GetClientObject() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClientData * lret = self->GetClientObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClientData >::push(L,lret,false);

		return 1;
	}

	// void wxEvtHandler::SetClientData(void * data)
	static int _bind_SetClientData(lua_State *L) {
		if (!_lg_typecheck_SetClientData(L)) {
			luaL_error(L, "luna typecheck failed in void wxEvtHandler::SetClientData(void * data) function, expected prototype:\nvoid wxEvtHandler::SetClientData(void * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* data=(Luna< void >::check(L,2));

		wxEvtHandler* self=Luna< wxObject >::checkSubType< wxEvtHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxEvtHandler::SetClientData(void *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetClientData(data);

		return 0;
	}

	// void wxEvtHandler::SetClientObject(wxClientData * data)
	static int _bind_SetClientObject(lua_State *L) {
		if (!_lg_typecheck_SetClientObject(L)) {
			luaL_error(L, "luna typecheck failed in void wxEvtHandler::SetClientObject(wxClientData * data) function, expected prototype:\nvoid wxEvtHandler::SetClientObject(wxClientData * data)\nClass arguments details:\narg 1 ID = 50457573\n\n%s",luna_dumpStack(L).c_str());
		}

		wxClientData* data=(Luna< wxClientData >::check(L,2));

		wxEvtHandler* self=Luna< wxObject >::checkSubType< wxEvtHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxEvtHandler::SetClientObject(wxClientData *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetClientObject(data);

		return 0;
	}

	// bool wxEvtHandler::GetEvtHandlerEnabled() const
	static int _bind_GetEvtHandlerEnabled(lua_State *L) {
		if (!_lg_typecheck_GetEvtHandlerEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxEvtHandler::GetEvtHandlerEnabled() const function, expected prototype:\nbool wxEvtHandler::GetEvtHandlerEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxEvtHandler* self=Luna< wxObject >::checkSubType< wxEvtHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxEvtHandler::GetEvtHandlerEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetEvtHandlerEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxEvtHandler * wxEvtHandler::GetNextHandler() const
	static int _bind_GetNextHandler(lua_State *L) {
		if (!_lg_typecheck_GetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in wxEvtHandler * wxEvtHandler::GetNextHandler() const function, expected prototype:\nwxEvtHandler * wxEvtHandler::GetNextHandler() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxEvtHandler* self=Luna< wxObject >::checkSubType< wxEvtHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvtHandler * wxEvtHandler::GetNextHandler() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvtHandler * lret = self->GetNextHandler();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvtHandler >::push(L,lret,false);

		return 1;
	}

	// wxEvtHandler * wxEvtHandler::GetPreviousHandler() const
	static int _bind_GetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_GetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in wxEvtHandler * wxEvtHandler::GetPreviousHandler() const function, expected prototype:\nwxEvtHandler * wxEvtHandler::GetPreviousHandler() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxEvtHandler* self=Luna< wxObject >::checkSubType< wxEvtHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvtHandler * wxEvtHandler::GetPreviousHandler() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvtHandler * lret = self->GetPreviousHandler();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvtHandler >::push(L,lret,false);

		return 1;
	}

	// void wxEvtHandler::SetEvtHandlerEnabled(bool enabled)
	static int _bind_SetEvtHandlerEnabled(lua_State *L) {
		if (!_lg_typecheck_SetEvtHandlerEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxEvtHandler::SetEvtHandlerEnabled(bool enabled) function, expected prototype:\nvoid wxEvtHandler::SetEvtHandlerEnabled(bool enabled)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enabled=(bool)(lua_toboolean(L,2)==1);

		wxEvtHandler* self=Luna< wxObject >::checkSubType< wxEvtHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxEvtHandler::SetEvtHandlerEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetEvtHandlerEnabled(enabled);

		return 0;
	}

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	static int _bind_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxEvtHandler::SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxEvtHandler::SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxEvtHandler* self=Luna< wxObject >::checkSubType< wxEvtHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxEvtHandler::SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetNextHandler(handler);

		return 0;
	}

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxEvtHandler* self=Luna< wxObject >::checkSubType< wxEvtHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxEvtHandler::SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPreviousHandler(handler);

		return 0;
	}

	// void wxEvtHandler::Unlink()
	static int _bind_Unlink(lua_State *L) {
		if (!_lg_typecheck_Unlink(L)) {
			luaL_error(L, "luna typecheck failed in void wxEvtHandler::Unlink() function, expected prototype:\nvoid wxEvtHandler::Unlink()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxEvtHandler* self=Luna< wxObject >::checkSubType< wxEvtHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxEvtHandler::Unlink(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Unlink();

		return 0;
	}

	// bool wxEvtHandler::IsUnlinked() const
	static int _bind_IsUnlinked(lua_State *L) {
		if (!_lg_typecheck_IsUnlinked(L)) {
			luaL_error(L, "luna typecheck failed in bool wxEvtHandler::IsUnlinked() const function, expected prototype:\nbool wxEvtHandler::IsUnlinked() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxEvtHandler* self=Luna< wxObject >::checkSubType< wxEvtHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxEvtHandler::IsUnlinked() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsUnlinked();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static void wxEvtHandler::AddFilter(wxEventFilter * filter)
	static int _bind_AddFilter(lua_State *L) {
		if (!_lg_typecheck_AddFilter(L)) {
			luaL_error(L, "luna typecheck failed in static void wxEvtHandler::AddFilter(wxEventFilter * filter) function, expected prototype:\nstatic void wxEvtHandler::AddFilter(wxEventFilter * filter)\nClass arguments details:\narg 1 ID = 81056638\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEventFilter* filter=(Luna< wxEventFilter >::check(L,1));

		wxEvtHandler::AddFilter(filter);

		return 0;
	}

	// static void wxEvtHandler::RemoveFilter(wxEventFilter * filter)
	static int _bind_RemoveFilter(lua_State *L) {
		if (!_lg_typecheck_RemoveFilter(L)) {
			luaL_error(L, "luna typecheck failed in static void wxEvtHandler::RemoveFilter(wxEventFilter * filter) function, expected prototype:\nstatic void wxEvtHandler::RemoveFilter(wxEventFilter * filter)\nClass arguments details:\narg 1 ID = 81056638\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEventFilter* filter=(Luna< wxEventFilter >::check(L,1));

		wxEvtHandler::RemoveFilter(filter);

		return 0;
	}

	// bool wxEvtHandler::disconnect(wxEvtHandler * handler, int id, int id2, int eventType)
	static int _bind_disconnect_overload_1(lua_State *L) {
		if (!_lg_typecheck_disconnect_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxEvtHandler::disconnect(wxEvtHandler * handler, int id, int id2, int eventType) function, expected prototype:\nbool wxEvtHandler::disconnect(wxEvtHandler * handler, int id, int id2, int eventType)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,1));
		int id=(int)lua_tointeger(L,2);
		int id2=(int)lua_tointeger(L,3);
		int eventType=(int)lua_tointeger(L,4);

		bool lret = disconnect(handler, id, id2, eventType);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxEvtHandler::disconnect(wxEvtHandler * handler, int id, int eventType)
	static int _bind_disconnect_overload_2(lua_State *L) {
		if (!_lg_typecheck_disconnect_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxEvtHandler::disconnect(wxEvtHandler * handler, int id, int eventType) function, expected prototype:\nbool wxEvtHandler::disconnect(wxEvtHandler * handler, int id, int eventType)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,1));
		int id=(int)lua_tointeger(L,2);
		int eventType=(int)lua_tointeger(L,3);

		bool lret = disconnect(handler, id, eventType);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxEvtHandler::disconnect(wxEvtHandler * handler, int eventType)
	static int _bind_disconnect_overload_3(lua_State *L) {
		if (!_lg_typecheck_disconnect_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxEvtHandler::disconnect(wxEvtHandler * handler, int eventType) function, expected prototype:\nbool wxEvtHandler::disconnect(wxEvtHandler * handler, int eventType)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,1));
		int eventType=(int)lua_tointeger(L,2);

		bool lret = disconnect(handler, eventType);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxEvtHandler::disconnect
	static int _bind_disconnect(lua_State *L) {
		if (_lg_typecheck_disconnect_overload_1(L)) return _bind_disconnect_overload_1(L);
		if (_lg_typecheck_disconnect_overload_2(L)) return _bind_disconnect_overload_2(L);
		if (_lg_typecheck_disconnect_overload_3(L)) return _bind_disconnect_overload_3(L);

		luaL_error(L, "error in function disconnect, cannot match any of the overloads for function disconnect:\n  disconnect(wxEvtHandler *, int, int, int)\n  disconnect(wxEvtHandler *, int, int)\n  disconnect(wxEvtHandler *, int)\n");
		return 0;
	}

	// int wxEvtHandler::connect(wxEvtHandler * handler, int id, int id2, int eventType, lua_Function * dummy, lua_State * L)
	static int _bind_connect_overload_1(lua_State *L) {
		if (!_lg_typecheck_connect_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in int wxEvtHandler::connect(wxEvtHandler * handler, int id, int id2, int eventType, lua_Function * dummy, lua_State * L) function, expected prototype:\nint wxEvtHandler::connect(wxEvtHandler * handler, int id, int id2, int eventType, lua_Function * dummy, lua_State * L)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,1));
		int id=(int)lua_tointeger(L,2);
		int id2=(int)lua_tointeger(L,3);
		int eventType=(int)lua_tointeger(L,4);

		return connect(handler, id, id2, eventType, NULL, L);
	}

	// int wxEvtHandler::connect(wxEvtHandler * handler, int id, int eventType, lua_Function * dummy, lua_State * L)
	static int _bind_connect_overload_2(lua_State *L) {
		if (!_lg_typecheck_connect_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in int wxEvtHandler::connect(wxEvtHandler * handler, int id, int eventType, lua_Function * dummy, lua_State * L) function, expected prototype:\nint wxEvtHandler::connect(wxEvtHandler * handler, int id, int eventType, lua_Function * dummy, lua_State * L)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,1));
		int id=(int)lua_tointeger(L,2);
		int eventType=(int)lua_tointeger(L,3);

		return connect(handler, id, eventType, NULL, L);
	}

	// int wxEvtHandler::connect(wxEvtHandler * handler, int eventType, lua_Function * dummy, lua_State * L)
	static int _bind_connect_overload_3(lua_State *L) {
		if (!_lg_typecheck_connect_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in int wxEvtHandler::connect(wxEvtHandler * handler, int eventType, lua_Function * dummy, lua_State * L) function, expected prototype:\nint wxEvtHandler::connect(wxEvtHandler * handler, int eventType, lua_Function * dummy, lua_State * L)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,1));
		int eventType=(int)lua_tointeger(L,2);

		return connect(handler, eventType, NULL, L);
	}

	// Overload binder for wxEvtHandler::connect
	static int _bind_connect(lua_State *L) {
		if (_lg_typecheck_connect_overload_1(L)) return _bind_connect_overload_1(L);
		if (_lg_typecheck_connect_overload_2(L)) return _bind_connect_overload_2(L);
		if (_lg_typecheck_connect_overload_3(L)) return _bind_connect_overload_3(L);

		luaL_error(L, "error in function connect, cannot match any of the overloads for function connect:\n  connect(wxEvtHandler *, int, int, int, lua_Function *, lua_State *)\n  connect(wxEvtHandler *, int, int, lua_Function *, lua_State *)\n  connect(wxEvtHandler *, int, lua_Function *, lua_State *)\n");
		return 0;
	}

	// wxClassInfo * wxEvtHandler::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxEvtHandler::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxEvtHandler::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxEvtHandler* self=Luna< wxObject >::checkSubType< wxEvtHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxEvtHandler::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxEvtHandler::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void wxEvtHandler::base_QueueEvent(wxEvent * event)
	static int _bind_base_QueueEvent(lua_State *L) {
		if (!_lg_typecheck_base_QueueEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxEvtHandler::base_QueueEvent(wxEvent * event) function, expected prototype:\nvoid wxEvtHandler::base_QueueEvent(wxEvent * event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event=(Luna< wxObject >::checkSubType< wxEvent >(L,2));

		wxEvtHandler* self=Luna< wxObject >::checkSubType< wxEvtHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxEvtHandler::base_QueueEvent(wxEvent *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxEvtHandler::QueueEvent(event);

		return 0;
	}

	// void wxEvtHandler::base_AddPendingEvent(const wxEvent & event)
	static int _bind_base_AddPendingEvent(lua_State *L) {
		if (!_lg_typecheck_base_AddPendingEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxEvtHandler::base_AddPendingEvent(const wxEvent & event) function, expected prototype:\nvoid wxEvtHandler::base_AddPendingEvent(const wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxEvtHandler::base_AddPendingEvent function");
		}
		const wxEvent & event=*event_ptr;

		wxEvtHandler* self=Luna< wxObject >::checkSubType< wxEvtHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxEvtHandler::base_AddPendingEvent(const wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxEvtHandler::AddPendingEvent(event);

		return 0;
	}

	// bool wxEvtHandler::base_ProcessEvent(wxEvent & event)
	static int _bind_base_ProcessEvent(lua_State *L) {
		if (!_lg_typecheck_base_ProcessEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxEvtHandler::base_ProcessEvent(wxEvent & event) function, expected prototype:\nbool wxEvtHandler::base_ProcessEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxEvtHandler::base_ProcessEvent function");
		}
		wxEvent & event=*event_ptr;

		wxEvtHandler* self=Luna< wxObject >::checkSubType< wxEvtHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxEvtHandler::base_ProcessEvent(wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxEvtHandler::ProcessEvent(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxEvtHandler::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxEvtHandler::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxEvtHandler::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxEvtHandler* self=Luna< wxObject >::checkSubType< wxEvtHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxEvtHandler::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxEvtHandler::SetNextHandler(handler);

		return 0;
	}

	// void wxEvtHandler::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxEvtHandler::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxEvtHandler::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxEvtHandler* self=Luna< wxObject >::checkSubType< wxEvtHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxEvtHandler::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxEvtHandler::SetPreviousHandler(handler);

		return 0;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_wxTrackable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_wxTrackable(lua_State *L) {
		if (!_lg_typecheck_baseCast_wxTrackable(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_wxTrackable function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		wxTrackable* res = luna_caster<wxObject,wxTrackable>::cast(self); // dynamic_cast<wxTrackable*>(self);
		if(!res)
			return 0;
			
		Luna< wxTrackable >::push(L,res,false);
		return 1;

	}

};

wxEvtHandler* LunaTraits< wxEvtHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxEvtHandler::_bind_ctor(L);
}

void LunaTraits< wxEvtHandler >::_bind_dtor(wxEvtHandler* obj) {
	delete obj;
}

const char LunaTraits< wxEvtHandler >::className[] = "wxEvtHandler";
const char LunaTraits< wxEvtHandler >::fullName[] = "wxEvtHandler";
const char LunaTraits< wxEvtHandler >::moduleName[] = "wx";
const char* LunaTraits< wxEvtHandler >::parents[] = {"wx.wxObject", "wx.wxTrackable", 0};
const int LunaTraits< wxEvtHandler >::hash = 24002421;
const int LunaTraits< wxEvtHandler >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxEvtHandler >::methods[] = {
	{"QueueEvent", &luna_wrapper_wxEvtHandler::_bind_QueueEvent},
	{"AddPendingEvent", &luna_wrapper_wxEvtHandler::_bind_AddPendingEvent},
	{"ProcessEvent", &luna_wrapper_wxEvtHandler::_bind_ProcessEvent},
	{"ProcessEventLocally", &luna_wrapper_wxEvtHandler::_bind_ProcessEventLocally},
	{"DeletePendingEvents", &luna_wrapper_wxEvtHandler::_bind_DeletePendingEvents},
	{"GetClientData", &luna_wrapper_wxEvtHandler::_bind_GetClientData},
	{"GetClientObject", &luna_wrapper_wxEvtHandler::_bind_GetClientObject},
	{"SetClientData", &luna_wrapper_wxEvtHandler::_bind_SetClientData},
	{"SetClientObject", &luna_wrapper_wxEvtHandler::_bind_SetClientObject},
	{"GetEvtHandlerEnabled", &luna_wrapper_wxEvtHandler::_bind_GetEvtHandlerEnabled},
	{"GetNextHandler", &luna_wrapper_wxEvtHandler::_bind_GetNextHandler},
	{"GetPreviousHandler", &luna_wrapper_wxEvtHandler::_bind_GetPreviousHandler},
	{"SetEvtHandlerEnabled", &luna_wrapper_wxEvtHandler::_bind_SetEvtHandlerEnabled},
	{"SetNextHandler", &luna_wrapper_wxEvtHandler::_bind_SetNextHandler},
	{"SetPreviousHandler", &luna_wrapper_wxEvtHandler::_bind_SetPreviousHandler},
	{"Unlink", &luna_wrapper_wxEvtHandler::_bind_Unlink},
	{"IsUnlinked", &luna_wrapper_wxEvtHandler::_bind_IsUnlinked},
	{"AddFilter", &luna_wrapper_wxEvtHandler::_bind_AddFilter},
	{"RemoveFilter", &luna_wrapper_wxEvtHandler::_bind_RemoveFilter},
	{"disconnect", &luna_wrapper_wxEvtHandler::_bind_disconnect},
	{"connect", &luna_wrapper_wxEvtHandler::_bind_connect},
	{"base_GetClassInfo", &luna_wrapper_wxEvtHandler::_bind_base_GetClassInfo},
	{"base_QueueEvent", &luna_wrapper_wxEvtHandler::_bind_base_QueueEvent},
	{"base_AddPendingEvent", &luna_wrapper_wxEvtHandler::_bind_base_AddPendingEvent},
	{"base_ProcessEvent", &luna_wrapper_wxEvtHandler::_bind_base_ProcessEvent},
	{"base_SetNextHandler", &luna_wrapper_wxEvtHandler::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxEvtHandler::_bind_base_SetPreviousHandler},
	{"fromVoid", &luna_wrapper_wxEvtHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxEvtHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_wxEvtHandler::_bind_getTable},
	{"aswxTrackable", &luna_wrapper_wxEvtHandler::_bind_baseCast_wxTrackable},
	{0,0}
};

luna_ConverterType LunaTraits< wxEvtHandler >::converters[] = {
	{"wxObject", &luna_wrapper_wxEvtHandler::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxEvtHandler >::enumValues[] = {
	{0,0}
};


