#include <plug_common.h>

#include <luna/wrappers/wrapper_wxKeyEvent.h>

class luna_wrapper_wxKeyEvent {
public:
	typedef Luna< wxKeyEvent > luna_t;

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

		wxKeyEvent* self= (wxKeyEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxKeyEvent >::push(L,self,false);
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
		//wxKeyEvent* ptr= dynamic_cast< wxKeyEvent* >(Luna< wxObject >::check(L,1));
		wxKeyEvent* ptr= luna_caster< wxObject, wxKeyEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxKeyEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetKeyCode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsKeyInCategory(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPosition_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosition_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRawKeyCode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRawKeyFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DoAllowNextEvent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsNextEventAllowed(lua_State *L) {
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
	// wxKeyEvent::wxKeyEvent(lua_Table * data, int keyEventType = wxEVT_NULL)
	static wxKeyEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxKeyEvent::wxKeyEvent(lua_Table * data, int keyEventType = wxEVT_NULL) function, expected prototype:\nwxKeyEvent::wxKeyEvent(lua_Table * data, int keyEventType = wxEVT_NULL)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int keyEventType=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxEVT_NULL;

		return new wrapper_wxKeyEvent(L,NULL, keyEventType);
	}


	// Function binds:
	// int wxKeyEvent::GetKeyCode() const
	static int _bind_GetKeyCode(lua_State *L) {
		if (!_lg_typecheck_GetKeyCode(L)) {
			luaL_error(L, "luna typecheck failed in int wxKeyEvent::GetKeyCode() const function, expected prototype:\nint wxKeyEvent::GetKeyCode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxKeyEvent* self=Luna< wxObject >::checkSubType< wxKeyEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxKeyEvent::GetKeyCode() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetKeyCode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxKeyEvent::IsKeyInCategory(int category) const
	static int _bind_IsKeyInCategory(lua_State *L) {
		if (!_lg_typecheck_IsKeyInCategory(L)) {
			luaL_error(L, "luna typecheck failed in bool wxKeyEvent::IsKeyInCategory(int category) const function, expected prototype:\nbool wxKeyEvent::IsKeyInCategory(int category) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int category=(int)lua_tointeger(L,2);

		wxKeyEvent* self=Luna< wxObject >::checkSubType< wxKeyEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxKeyEvent::IsKeyInCategory(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsKeyInCategory(category);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxPoint wxKeyEvent::GetPosition() const
	static int _bind_GetPosition_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetPosition_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxKeyEvent::GetPosition() const function, expected prototype:\nwxPoint wxKeyEvent::GetPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxKeyEvent* self=Luna< wxObject >::checkSubType< wxKeyEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxKeyEvent::GetPosition() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->GetPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxKeyEvent::GetPosition(long * x, long * y) const
	static int _bind_GetPosition_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetPosition_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxKeyEvent::GetPosition(long * x, long * y) const function, expected prototype:\nvoid wxKeyEvent::GetPosition(long * x, long * y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long* x=(long*)Luna< void >::check(L,2);
		long* y=(long*)Luna< void >::check(L,3);

		wxKeyEvent* self=Luna< wxObject >::checkSubType< wxKeyEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxKeyEvent::GetPosition(long *, long *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetPosition(x, y);

		return 0;
	}

	// Overload binder for wxKeyEvent::GetPosition
	static int _bind_GetPosition(lua_State *L) {
		if (_lg_typecheck_GetPosition_overload_1(L)) return _bind_GetPosition_overload_1(L);
		if (_lg_typecheck_GetPosition_overload_2(L)) return _bind_GetPosition_overload_2(L);

		luaL_error(L, "error in function GetPosition, cannot match any of the overloads for function GetPosition:\n  GetPosition()\n  GetPosition(long *, long *)\n");
		return 0;
	}

	// unsigned int wxKeyEvent::GetRawKeyCode() const
	static int _bind_GetRawKeyCode(lua_State *L) {
		if (!_lg_typecheck_GetRawKeyCode(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxKeyEvent::GetRawKeyCode() const function, expected prototype:\nunsigned int wxKeyEvent::GetRawKeyCode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxKeyEvent* self=Luna< wxObject >::checkSubType< wxKeyEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxKeyEvent::GetRawKeyCode() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetRawKeyCode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int wxKeyEvent::GetRawKeyFlags() const
	static int _bind_GetRawKeyFlags(lua_State *L) {
		if (!_lg_typecheck_GetRawKeyFlags(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxKeyEvent::GetRawKeyFlags() const function, expected prototype:\nunsigned int wxKeyEvent::GetRawKeyFlags() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxKeyEvent* self=Luna< wxObject >::checkSubType< wxKeyEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxKeyEvent::GetRawKeyFlags() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetRawKeyFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxKeyEvent::GetX() const
	static int _bind_GetX(lua_State *L) {
		if (!_lg_typecheck_GetX(L)) {
			luaL_error(L, "luna typecheck failed in int wxKeyEvent::GetX() const function, expected prototype:\nint wxKeyEvent::GetX() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxKeyEvent* self=Luna< wxObject >::checkSubType< wxKeyEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxKeyEvent::GetX() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxKeyEvent::GetY() const
	static int _bind_GetY(lua_State *L) {
		if (!_lg_typecheck_GetY(L)) {
			luaL_error(L, "luna typecheck failed in int wxKeyEvent::GetY() const function, expected prototype:\nint wxKeyEvent::GetY() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxKeyEvent* self=Luna< wxObject >::checkSubType< wxKeyEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxKeyEvent::GetY() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxKeyEvent::DoAllowNextEvent()
	static int _bind_DoAllowNextEvent(lua_State *L) {
		if (!_lg_typecheck_DoAllowNextEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxKeyEvent::DoAllowNextEvent() function, expected prototype:\nvoid wxKeyEvent::DoAllowNextEvent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxKeyEvent* self=Luna< wxObject >::checkSubType< wxKeyEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxKeyEvent::DoAllowNextEvent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DoAllowNextEvent();

		return 0;
	}

	// bool wxKeyEvent::IsNextEventAllowed() const
	static int _bind_IsNextEventAllowed(lua_State *L) {
		if (!_lg_typecheck_IsNextEventAllowed(L)) {
			luaL_error(L, "luna typecheck failed in bool wxKeyEvent::IsNextEventAllowed() const function, expected prototype:\nbool wxKeyEvent::IsNextEventAllowed() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxKeyEvent* self=Luna< wxObject >::checkSubType< wxKeyEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxKeyEvent::IsNextEventAllowed() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsNextEventAllowed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxKeyEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxKeyEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxKeyEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxKeyEvent* self=Luna< wxObject >::checkSubType< wxKeyEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxKeyEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxKeyEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxKeyEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxKeyEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxKeyEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxKeyEvent* self=Luna< wxObject >::checkSubType< wxKeyEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxKeyEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxKeyEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_wxKeyboardState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_wxKeyboardState(lua_State *L) {
		if (!_lg_typecheck_baseCast_wxKeyboardState(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_wxKeyboardState function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		wxKeyboardState* res = luna_caster<wxObject,wxKeyboardState>::cast(self); // dynamic_cast<wxKeyboardState*>(self);
		if(!res)
			return 0;
			
		Luna< wxKeyboardState >::push(L,res,false);
		return 1;

	}

};

wxKeyEvent* LunaTraits< wxKeyEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxKeyEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxKeyEvent >::_bind_dtor(wxKeyEvent* obj) {
	delete obj;
}

const char LunaTraits< wxKeyEvent >::className[] = "wxKeyEvent";
const char LunaTraits< wxKeyEvent >::fullName[] = "wxKeyEvent";
const char LunaTraits< wxKeyEvent >::moduleName[] = "wx";
const char* LunaTraits< wxKeyEvent >::parents[] = {"wx.wxEvent", "wx.wxKeyboardState", 0};
const int LunaTraits< wxKeyEvent >::hash = 10397475;
const int LunaTraits< wxKeyEvent >::uniqueIDs[] = {56813631, 92036952,0};

luna_RegType LunaTraits< wxKeyEvent >::methods[] = {
	{"GetKeyCode", &luna_wrapper_wxKeyEvent::_bind_GetKeyCode},
	{"IsKeyInCategory", &luna_wrapper_wxKeyEvent::_bind_IsKeyInCategory},
	{"GetPosition", &luna_wrapper_wxKeyEvent::_bind_GetPosition},
	{"GetRawKeyCode", &luna_wrapper_wxKeyEvent::_bind_GetRawKeyCode},
	{"GetRawKeyFlags", &luna_wrapper_wxKeyEvent::_bind_GetRawKeyFlags},
	{"GetX", &luna_wrapper_wxKeyEvent::_bind_GetX},
	{"GetY", &luna_wrapper_wxKeyEvent::_bind_GetY},
	{"DoAllowNextEvent", &luna_wrapper_wxKeyEvent::_bind_DoAllowNextEvent},
	{"IsNextEventAllowed", &luna_wrapper_wxKeyEvent::_bind_IsNextEventAllowed},
	{"base_GetClassInfo", &luna_wrapper_wxKeyEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxKeyEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxKeyEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxKeyEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxKeyEvent::_bind_getTable},
	{"aswxKeyboardState", &luna_wrapper_wxKeyEvent::_bind_baseCast_wxKeyboardState},
	{0,0}
};

luna_ConverterType LunaTraits< wxKeyEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxKeyEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxKeyEvent >::enumValues[] = {
	{0,0}
};


