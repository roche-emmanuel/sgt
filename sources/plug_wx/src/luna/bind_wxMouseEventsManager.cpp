#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMouseEventsManager.h>

class luna_wrapper_wxMouseEventsManager {
public:
	typedef Luna< wxMouseEventsManager > luna_t;

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

		wxMouseEventsManager* self= (wxMouseEventsManager*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxMouseEventsManager >::push(L,self,false);
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
		//wxMouseEventsManager* ptr= dynamic_cast< wxMouseEventsManager* >(Luna< wxObject >::check(L,1));
		wxMouseEventsManager* ptr= luna_caster< wxObject, wxMouseEventsManager >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMouseEventsManager >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
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
	// wxMouseEventsManager::wxMouseEventsManager(lua_Table * data)
	static wxMouseEventsManager* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxMouseEventsManager::wxMouseEventsManager(lua_Table * data) function, expected prototype:\nwxMouseEventsManager::wxMouseEventsManager(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxMouseEventsManager(L,NULL);
	}

	// wxMouseEventsManager::wxMouseEventsManager(lua_Table * data, wxWindow * win)
	static wxMouseEventsManager* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxMouseEventsManager::wxMouseEventsManager(lua_Table * data, wxWindow * win) function, expected prototype:\nwxMouseEventsManager::wxMouseEventsManager(lua_Table * data, wxWindow * win)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		return new wrapper_wxMouseEventsManager(L,NULL, win);
	}

	// Overload binder for wxMouseEventsManager::wxMouseEventsManager
	static wxMouseEventsManager* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxMouseEventsManager, cannot match any of the overloads for function wxMouseEventsManager:\n  wxMouseEventsManager(lua_Table *)\n  wxMouseEventsManager(lua_Table *, wxWindow *)\n");
		return NULL;
	}


	// Function binds:
	// bool wxMouseEventsManager::Create(wxWindow * win)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMouseEventsManager::Create(wxWindow * win) function, expected prototype:\nbool wxMouseEventsManager::Create(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxMouseEventsManager* self=Luna< wxObject >::checkSubType< wxMouseEventsManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMouseEventsManager::Create(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(win);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxMouseEventsManager::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxMouseEventsManager::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxMouseEventsManager::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMouseEventsManager* self=Luna< wxObject >::checkSubType< wxMouseEventsManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxMouseEventsManager::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxMouseEventsManager::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void wxMouseEventsManager::base_QueueEvent(wxEvent * event)
	static int _bind_base_QueueEvent(lua_State *L) {
		if (!_lg_typecheck_base_QueueEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxMouseEventsManager::base_QueueEvent(wxEvent * event) function, expected prototype:\nvoid wxMouseEventsManager::base_QueueEvent(wxEvent * event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event=(Luna< wxObject >::checkSubType< wxEvent >(L,2));

		wxMouseEventsManager* self=Luna< wxObject >::checkSubType< wxMouseEventsManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMouseEventsManager::base_QueueEvent(wxEvent *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMouseEventsManager::QueueEvent(event);

		return 0;
	}

	// void wxMouseEventsManager::base_AddPendingEvent(const wxEvent & event)
	static int _bind_base_AddPendingEvent(lua_State *L) {
		if (!_lg_typecheck_base_AddPendingEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxMouseEventsManager::base_AddPendingEvent(const wxEvent & event) function, expected prototype:\nvoid wxMouseEventsManager::base_AddPendingEvent(const wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxMouseEventsManager::base_AddPendingEvent function");
		}
		const wxEvent & event=*event_ptr;

		wxMouseEventsManager* self=Luna< wxObject >::checkSubType< wxMouseEventsManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMouseEventsManager::base_AddPendingEvent(const wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMouseEventsManager::AddPendingEvent(event);

		return 0;
	}

	// bool wxMouseEventsManager::base_ProcessEvent(wxEvent & event)
	static int _bind_base_ProcessEvent(lua_State *L) {
		if (!_lg_typecheck_base_ProcessEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMouseEventsManager::base_ProcessEvent(wxEvent & event) function, expected prototype:\nbool wxMouseEventsManager::base_ProcessEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxMouseEventsManager::base_ProcessEvent function");
		}
		wxEvent & event=*event_ptr;

		wxMouseEventsManager* self=Luna< wxObject >::checkSubType< wxMouseEventsManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMouseEventsManager::base_ProcessEvent(wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMouseEventsManager::ProcessEvent(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMouseEventsManager::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxMouseEventsManager::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxMouseEventsManager::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxMouseEventsManager* self=Luna< wxObject >::checkSubType< wxMouseEventsManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMouseEventsManager::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMouseEventsManager::SetNextHandler(handler);

		return 0;
	}

	// void wxMouseEventsManager::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxMouseEventsManager::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxMouseEventsManager::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxMouseEventsManager* self=Luna< wxObject >::checkSubType< wxMouseEventsManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMouseEventsManager::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMouseEventsManager::SetPreviousHandler(handler);

		return 0;
	}


	// Operator binds:

};

wxMouseEventsManager* LunaTraits< wxMouseEventsManager >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMouseEventsManager::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// int wxMouseEventsManager::MouseHitTest(const wxPoint & pos)
	// bool wxMouseEventsManager::MouseClicked(int item)
	// bool wxMouseEventsManager::MouseDragBegin(int item, const wxPoint & pos)
	// void wxMouseEventsManager::MouseDragging(int item, const wxPoint & pos)
	// void wxMouseEventsManager::MouseDragEnd(int item, const wxPoint & pos)
	// void wxMouseEventsManager::MouseDragCancelled(int item)
}

void LunaTraits< wxMouseEventsManager >::_bind_dtor(wxMouseEventsManager* obj) {
	delete obj;
}

const char LunaTraits< wxMouseEventsManager >::className[] = "wxMouseEventsManager";
const char LunaTraits< wxMouseEventsManager >::fullName[] = "wxMouseEventsManager";
const char LunaTraits< wxMouseEventsManager >::moduleName[] = "wx";
const char* LunaTraits< wxMouseEventsManager >::parents[] = {"wx.wxEvtHandler", 0};
const int LunaTraits< wxMouseEventsManager >::hash = 54019244;
const int LunaTraits< wxMouseEventsManager >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxMouseEventsManager >::methods[] = {
	{"Create", &luna_wrapper_wxMouseEventsManager::_bind_Create},
	{"base_GetClassInfo", &luna_wrapper_wxMouseEventsManager::_bind_base_GetClassInfo},
	{"base_QueueEvent", &luna_wrapper_wxMouseEventsManager::_bind_base_QueueEvent},
	{"base_AddPendingEvent", &luna_wrapper_wxMouseEventsManager::_bind_base_AddPendingEvent},
	{"base_ProcessEvent", &luna_wrapper_wxMouseEventsManager::_bind_base_ProcessEvent},
	{"base_SetNextHandler", &luna_wrapper_wxMouseEventsManager::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxMouseEventsManager::_bind_base_SetPreviousHandler},
	{"fromVoid", &luna_wrapper_wxMouseEventsManager::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxMouseEventsManager::_bind_asVoid},
	{"getTable", &luna_wrapper_wxMouseEventsManager::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMouseEventsManager >::converters[] = {
	{"wxObject", &luna_wrapper_wxMouseEventsManager::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMouseEventsManager >::enumValues[] = {
	{0,0}
};


