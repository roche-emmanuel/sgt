#include <plug_common.h>

#include <luna/wrappers/wrapper_wxJoystickEvent.h>

class luna_wrapper_wxJoystickEvent {
public:
	typedef Luna< wxJoystickEvent > luna_t;

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

		wxJoystickEvent* self= (wxJoystickEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxJoystickEvent >::push(L,self,false);
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
		//wxJoystickEvent* ptr= dynamic_cast< wxJoystickEvent* >(Luna< wxObject >::check(L,1));
		wxJoystickEvent* ptr= luna_caster< wxObject, wxJoystickEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxJoystickEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_ButtonDown(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ButtonIsDown(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ButtonUp(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetButtonChange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetButtonState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetJoystick(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetZPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsButton(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsMove(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsZMove(lua_State *L) {
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
	// wxJoystickEvent::wxJoystickEvent(lua_Table * data, int eventType = wxEVT_NULL, int state = 0, int joystick = ::wxJOYSTICK1, int change = 0)
	static wxJoystickEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxJoystickEvent::wxJoystickEvent(lua_Table * data, int eventType = wxEVT_NULL, int state = 0, int joystick = ::wxJOYSTICK1, int change = 0) function, expected prototype:\nwxJoystickEvent::wxJoystickEvent(lua_Table * data, int eventType = wxEVT_NULL, int state = 0, int joystick = ::wxJOYSTICK1, int change = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int eventType=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxEVT_NULL;
		int state=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		int joystick=luatop>3 ? (int)lua_tointeger(L,4) : (int)::wxJOYSTICK1;
		int change=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		return new wrapper_wxJoystickEvent(L,NULL, eventType, state, joystick, change);
	}


	// Function binds:
	// bool wxJoystickEvent::ButtonDown(int button = ::wxJOY_BUTTON_ANY) const
	static int _bind_ButtonDown(lua_State *L) {
		if (!_lg_typecheck_ButtonDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxJoystickEvent::ButtonDown(int button = ::wxJOY_BUTTON_ANY) const function, expected prototype:\nbool wxJoystickEvent::ButtonDown(int button = ::wxJOY_BUTTON_ANY) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int button=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxJOY_BUTTON_ANY;

		wxJoystickEvent* self=Luna< wxObject >::checkSubType< wxJoystickEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxJoystickEvent::ButtonDown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ButtonDown(button);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxJoystickEvent::ButtonIsDown(int button = ::wxJOY_BUTTON_ANY) const
	static int _bind_ButtonIsDown(lua_State *L) {
		if (!_lg_typecheck_ButtonIsDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxJoystickEvent::ButtonIsDown(int button = ::wxJOY_BUTTON_ANY) const function, expected prototype:\nbool wxJoystickEvent::ButtonIsDown(int button = ::wxJOY_BUTTON_ANY) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int button=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxJOY_BUTTON_ANY;

		wxJoystickEvent* self=Luna< wxObject >::checkSubType< wxJoystickEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxJoystickEvent::ButtonIsDown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ButtonIsDown(button);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxJoystickEvent::ButtonUp(int button = ::wxJOY_BUTTON_ANY) const
	static int _bind_ButtonUp(lua_State *L) {
		if (!_lg_typecheck_ButtonUp(L)) {
			luaL_error(L, "luna typecheck failed in bool wxJoystickEvent::ButtonUp(int button = ::wxJOY_BUTTON_ANY) const function, expected prototype:\nbool wxJoystickEvent::ButtonUp(int button = ::wxJOY_BUTTON_ANY) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int button=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxJOY_BUTTON_ANY;

		wxJoystickEvent* self=Luna< wxObject >::checkSubType< wxJoystickEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxJoystickEvent::ButtonUp(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ButtonUp(button);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxJoystickEvent::GetButtonChange() const
	static int _bind_GetButtonChange(lua_State *L) {
		if (!_lg_typecheck_GetButtonChange(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystickEvent::GetButtonChange() const function, expected prototype:\nint wxJoystickEvent::GetButtonChange() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystickEvent* self=Luna< wxObject >::checkSubType< wxJoystickEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystickEvent::GetButtonChange() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetButtonChange();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystickEvent::GetButtonState() const
	static int _bind_GetButtonState(lua_State *L) {
		if (!_lg_typecheck_GetButtonState(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystickEvent::GetButtonState() const function, expected prototype:\nint wxJoystickEvent::GetButtonState() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystickEvent* self=Luna< wxObject >::checkSubType< wxJoystickEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystickEvent::GetButtonState() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetButtonState();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystickEvent::GetJoystick() const
	static int _bind_GetJoystick(lua_State *L) {
		if (!_lg_typecheck_GetJoystick(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystickEvent::GetJoystick() const function, expected prototype:\nint wxJoystickEvent::GetJoystick() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystickEvent* self=Luna< wxObject >::checkSubType< wxJoystickEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystickEvent::GetJoystick() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetJoystick();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPoint wxJoystickEvent::GetPosition() const
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxJoystickEvent::GetPosition() const function, expected prototype:\nwxPoint wxJoystickEvent::GetPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystickEvent* self=Luna< wxObject >::checkSubType< wxJoystickEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxJoystickEvent::GetPosition() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->GetPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// int wxJoystickEvent::GetZPosition() const
	static int _bind_GetZPosition(lua_State *L) {
		if (!_lg_typecheck_GetZPosition(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystickEvent::GetZPosition() const function, expected prototype:\nint wxJoystickEvent::GetZPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystickEvent* self=Luna< wxObject >::checkSubType< wxJoystickEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystickEvent::GetZPosition() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetZPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxJoystickEvent::IsButton() const
	static int _bind_IsButton(lua_State *L) {
		if (!_lg_typecheck_IsButton(L)) {
			luaL_error(L, "luna typecheck failed in bool wxJoystickEvent::IsButton() const function, expected prototype:\nbool wxJoystickEvent::IsButton() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystickEvent* self=Luna< wxObject >::checkSubType< wxJoystickEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxJoystickEvent::IsButton() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsButton();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxJoystickEvent::IsMove() const
	static int _bind_IsMove(lua_State *L) {
		if (!_lg_typecheck_IsMove(L)) {
			luaL_error(L, "luna typecheck failed in bool wxJoystickEvent::IsMove() const function, expected prototype:\nbool wxJoystickEvent::IsMove() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystickEvent* self=Luna< wxObject >::checkSubType< wxJoystickEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxJoystickEvent::IsMove() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsMove();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxJoystickEvent::IsZMove() const
	static int _bind_IsZMove(lua_State *L) {
		if (!_lg_typecheck_IsZMove(L)) {
			luaL_error(L, "luna typecheck failed in bool wxJoystickEvent::IsZMove() const function, expected prototype:\nbool wxJoystickEvent::IsZMove() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystickEvent* self=Luna< wxObject >::checkSubType< wxJoystickEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxJoystickEvent::IsZMove() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsZMove();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxJoystickEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxJoystickEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxJoystickEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystickEvent* self=Luna< wxObject >::checkSubType< wxJoystickEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxJoystickEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxJoystickEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxJoystickEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxJoystickEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxJoystickEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystickEvent* self=Luna< wxObject >::checkSubType< wxJoystickEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxJoystickEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxJoystickEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxJoystickEvent* LunaTraits< wxJoystickEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxJoystickEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxJoystickEvent >::_bind_dtor(wxJoystickEvent* obj) {
	delete obj;
}

const char LunaTraits< wxJoystickEvent >::className[] = "wxJoystickEvent";
const char LunaTraits< wxJoystickEvent >::fullName[] = "wxJoystickEvent";
const char LunaTraits< wxJoystickEvent >::moduleName[] = "wx";
const char* LunaTraits< wxJoystickEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxJoystickEvent >::hash = 68693787;
const int LunaTraits< wxJoystickEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxJoystickEvent >::methods[] = {
	{"ButtonDown", &luna_wrapper_wxJoystickEvent::_bind_ButtonDown},
	{"ButtonIsDown", &luna_wrapper_wxJoystickEvent::_bind_ButtonIsDown},
	{"ButtonUp", &luna_wrapper_wxJoystickEvent::_bind_ButtonUp},
	{"GetButtonChange", &luna_wrapper_wxJoystickEvent::_bind_GetButtonChange},
	{"GetButtonState", &luna_wrapper_wxJoystickEvent::_bind_GetButtonState},
	{"GetJoystick", &luna_wrapper_wxJoystickEvent::_bind_GetJoystick},
	{"GetPosition", &luna_wrapper_wxJoystickEvent::_bind_GetPosition},
	{"GetZPosition", &luna_wrapper_wxJoystickEvent::_bind_GetZPosition},
	{"IsButton", &luna_wrapper_wxJoystickEvent::_bind_IsButton},
	{"IsMove", &luna_wrapper_wxJoystickEvent::_bind_IsMove},
	{"IsZMove", &luna_wrapper_wxJoystickEvent::_bind_IsZMove},
	{"base_GetClassInfo", &luna_wrapper_wxJoystickEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxJoystickEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxJoystickEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxJoystickEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxJoystickEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxJoystickEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxJoystickEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxJoystickEvent >::enumValues[] = {
	{0,0}
};


