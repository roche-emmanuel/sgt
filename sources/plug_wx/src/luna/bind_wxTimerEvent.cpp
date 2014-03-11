#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTimerEvent.h>

class luna_wrapper_wxTimerEvent {
public:
	typedef Luna< wxTimerEvent > luna_t;

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

		wxTimerEvent* self= (wxTimerEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTimerEvent >::push(L,self,false);
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
		//wxTimerEvent* ptr= dynamic_cast< wxTimerEvent* >(Luna< wxObject >::check(L,1));
		wxTimerEvent* ptr= luna_caster< wxObject, wxTimerEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTimerEvent >::push(L,ptr,false);
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
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxTimer >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetInterval(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTimer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTimerEvent::wxTimerEvent(lua_Table * data)
	static wxTimerEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxTimerEvent::wxTimerEvent(lua_Table * data) function, expected prototype:\nwxTimerEvent::wxTimerEvent(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxTimerEvent(L,NULL);
	}

	// wxTimerEvent::wxTimerEvent(lua_Table * data, wxTimer & timer)
	static wxTimerEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxTimerEvent::wxTimerEvent(lua_Table * data, wxTimer & timer) function, expected prototype:\nwxTimerEvent::wxTimerEvent(lua_Table * data, wxTimer & timer)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTimer* timer_ptr=(Luna< wxObject >::checkSubType< wxTimer >(L,2));
		if( !timer_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg timer in wxTimerEvent::wxTimerEvent function");
		}
		wxTimer & timer=*timer_ptr;

		return new wrapper_wxTimerEvent(L,NULL, timer);
	}

	// Overload binder for wxTimerEvent::wxTimerEvent
	static wxTimerEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxTimerEvent, cannot match any of the overloads for function wxTimerEvent:\n  wxTimerEvent(lua_Table *)\n  wxTimerEvent(lua_Table *, wxTimer &)\n");
		return NULL;
	}


	// Function binds:
	// int wxTimerEvent::GetInterval() const
	static int _bind_GetInterval(lua_State *L) {
		if (!_lg_typecheck_GetInterval(L)) {
			luaL_error(L, "luna typecheck failed in int wxTimerEvent::GetInterval() const function, expected prototype:\nint wxTimerEvent::GetInterval() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTimerEvent* self=Luna< wxObject >::checkSubType< wxTimerEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTimerEvent::GetInterval() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetInterval();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxTimer & wxTimerEvent::GetTimer() const
	static int _bind_GetTimer(lua_State *L) {
		if (!_lg_typecheck_GetTimer(L)) {
			luaL_error(L, "luna typecheck failed in wxTimer & wxTimerEvent::GetTimer() const function, expected prototype:\nwxTimer & wxTimerEvent::GetTimer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTimerEvent* self=Luna< wxObject >::checkSubType< wxTimerEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTimer & wxTimerEvent::GetTimer() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTimer* lret = &self->GetTimer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimer >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxTimerEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxTimerEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxTimerEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTimerEvent* self=Luna< wxObject >::checkSubType< wxTimerEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxTimerEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxTimerEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxTimerEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxTimerEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxTimerEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTimerEvent* self=Luna< wxObject >::checkSubType< wxTimerEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxTimerEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxTimerEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxTimerEvent* LunaTraits< wxTimerEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTimerEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxTimerEvent >::_bind_dtor(wxTimerEvent* obj) {
	delete obj;
}

const char LunaTraits< wxTimerEvent >::className[] = "wxTimerEvent";
const char LunaTraits< wxTimerEvent >::fullName[] = "wxTimerEvent";
const char LunaTraits< wxTimerEvent >::moduleName[] = "wx";
const char* LunaTraits< wxTimerEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxTimerEvent >::hash = 41551325;
const int LunaTraits< wxTimerEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxTimerEvent >::methods[] = {
	{"GetInterval", &luna_wrapper_wxTimerEvent::_bind_GetInterval},
	{"GetTimer", &luna_wrapper_wxTimerEvent::_bind_GetTimer},
	{"base_GetClassInfo", &luna_wrapper_wxTimerEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxTimerEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxTimerEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTimerEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxTimerEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxTimerEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxTimerEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTimerEvent >::enumValues[] = {
	{0,0}
};


