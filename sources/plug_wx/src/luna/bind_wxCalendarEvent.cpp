#include <plug_common.h>

#include <luna/wrappers/wrapper_wxCalendarEvent.h>

class luna_wrapper_wxCalendarEvent {
public:
	typedef Luna< wxCalendarEvent > luna_t;

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

		wxCalendarEvent* self= (wxCalendarEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxCalendarEvent >::push(L,self,false);
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
		//wxCalendarEvent* ptr= dynamic_cast< wxCalendarEvent* >(Luna< wxObject >::check(L,1));
		wxCalendarEvent* ptr= luna_caster< wxObject, wxCalendarEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxCalendarEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetWeekDay(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetWeekDay(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	// Function binds:
	// wxDateTime::WeekDay wxCalendarEvent::GetWeekDay() const
	static int _bind_GetWeekDay(lua_State *L) {
		if (!_lg_typecheck_GetWeekDay(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime::WeekDay wxCalendarEvent::GetWeekDay() const function, expected prototype:\nwxDateTime::WeekDay wxCalendarEvent::GetWeekDay() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCalendarEvent* self=Luna< wxObject >::checkSubType< wxCalendarEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime::WeekDay wxCalendarEvent::GetWeekDay() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateTime::WeekDay lret = self->GetWeekDay();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxCalendarEvent::SetWeekDay(const wxDateTime::WeekDay day)
	static int _bind_SetWeekDay(lua_State *L) {
		if (!_lg_typecheck_SetWeekDay(L)) {
			luaL_error(L, "luna typecheck failed in void wxCalendarEvent::SetWeekDay(const wxDateTime::WeekDay day) function, expected prototype:\nvoid wxCalendarEvent::SetWeekDay(const wxDateTime::WeekDay day)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateTime::WeekDay day=(const wxDateTime::WeekDay)lua_tointeger(L,2);

		wxCalendarEvent* self=Luna< wxObject >::checkSubType< wxCalendarEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCalendarEvent::SetWeekDay(const wxDateTime::WeekDay). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWeekDay(day);

		return 0;
	}

	// wxClassInfo * wxCalendarEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxCalendarEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxCalendarEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCalendarEvent* self=Luna< wxObject >::checkSubType< wxCalendarEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxCalendarEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxCalendarEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxCalendarEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxCalendarEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxCalendarEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCalendarEvent* self=Luna< wxObject >::checkSubType< wxCalendarEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxCalendarEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxCalendarEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxCalendarEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxCalendarEvent::base_Clone() const function, expected prototype:\nwxEvent * wxCalendarEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCalendarEvent* self=Luna< wxObject >::checkSubType< wxCalendarEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxCalendarEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxCalendarEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxCalendarEvent* LunaTraits< wxCalendarEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxCalendarEvent >::_bind_dtor(wxCalendarEvent* obj) {
	delete obj;
}

const char LunaTraits< wxCalendarEvent >::className[] = "wxCalendarEvent";
const char LunaTraits< wxCalendarEvent >::fullName[] = "wxCalendarEvent";
const char LunaTraits< wxCalendarEvent >::moduleName[] = "wx";
const char* LunaTraits< wxCalendarEvent >::parents[] = {"wx.wxDateEvent", 0};
const int LunaTraits< wxCalendarEvent >::hash = 25261490;
const int LunaTraits< wxCalendarEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxCalendarEvent >::methods[] = {
	{"GetWeekDay", &luna_wrapper_wxCalendarEvent::_bind_GetWeekDay},
	{"SetWeekDay", &luna_wrapper_wxCalendarEvent::_bind_SetWeekDay},
	{"base_GetClassInfo", &luna_wrapper_wxCalendarEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxCalendarEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxCalendarEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxCalendarEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxCalendarEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxCalendarEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxCalendarEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxCalendarEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxCalendarEvent >::enumValues[] = {
	{0,0}
};


