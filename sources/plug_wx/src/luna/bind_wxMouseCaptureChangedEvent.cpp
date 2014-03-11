#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMouseCaptureChangedEvent.h>

class luna_wrapper_wxMouseCaptureChangedEvent {
public:
	typedef Luna< wxMouseCaptureChangedEvent > luna_t;

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

		wxMouseCaptureChangedEvent* self= (wxMouseCaptureChangedEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxMouseCaptureChangedEvent >::push(L,self,false);
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
		//wxMouseCaptureChangedEvent* ptr= dynamic_cast< wxMouseCaptureChangedEvent* >(Luna< wxObject >::check(L,1));
		wxMouseCaptureChangedEvent* ptr= luna_caster< wxObject, wxMouseCaptureChangedEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMouseCaptureChangedEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetCapturedWindow(lua_State *L) {
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
	// wxMouseCaptureChangedEvent::wxMouseCaptureChangedEvent(lua_Table * data, int windowId = 0, wxWindow * gainedCapture = NULL)
	static wxMouseCaptureChangedEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxMouseCaptureChangedEvent::wxMouseCaptureChangedEvent(lua_Table * data, int windowId = 0, wxWindow * gainedCapture = NULL) function, expected prototype:\nwxMouseCaptureChangedEvent::wxMouseCaptureChangedEvent(lua_Table * data, int windowId = 0, wxWindow * gainedCapture = NULL)\nClass arguments details:\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int windowId=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		wxWindow* gainedCapture=luatop>2 ? (Luna< wxObject >::checkSubType< wxWindow >(L,3)) : (wxWindow*)NULL;

		return new wrapper_wxMouseCaptureChangedEvent(L,NULL, windowId, gainedCapture);
	}


	// Function binds:
	// wxWindow * wxMouseCaptureChangedEvent::GetCapturedWindow() const
	static int _bind_GetCapturedWindow(lua_State *L) {
		if (!_lg_typecheck_GetCapturedWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxMouseCaptureChangedEvent::GetCapturedWindow() const function, expected prototype:\nwxWindow * wxMouseCaptureChangedEvent::GetCapturedWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMouseCaptureChangedEvent* self=Luna< wxObject >::checkSubType< wxMouseCaptureChangedEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxMouseCaptureChangedEvent::GetCapturedWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetCapturedWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxMouseCaptureChangedEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxMouseCaptureChangedEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxMouseCaptureChangedEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMouseCaptureChangedEvent* self=Luna< wxObject >::checkSubType< wxMouseCaptureChangedEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxMouseCaptureChangedEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxMouseCaptureChangedEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxMouseCaptureChangedEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxMouseCaptureChangedEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxMouseCaptureChangedEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMouseCaptureChangedEvent* self=Luna< wxObject >::checkSubType< wxMouseCaptureChangedEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxMouseCaptureChangedEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxMouseCaptureChangedEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxMouseCaptureChangedEvent* LunaTraits< wxMouseCaptureChangedEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMouseCaptureChangedEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxMouseCaptureChangedEvent >::_bind_dtor(wxMouseCaptureChangedEvent* obj) {
	delete obj;
}

const char LunaTraits< wxMouseCaptureChangedEvent >::className[] = "wxMouseCaptureChangedEvent";
const char LunaTraits< wxMouseCaptureChangedEvent >::fullName[] = "wxMouseCaptureChangedEvent";
const char LunaTraits< wxMouseCaptureChangedEvent >::moduleName[] = "wx";
const char* LunaTraits< wxMouseCaptureChangedEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxMouseCaptureChangedEvent >::hash = 39085411;
const int LunaTraits< wxMouseCaptureChangedEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMouseCaptureChangedEvent >::methods[] = {
	{"GetCapturedWindow", &luna_wrapper_wxMouseCaptureChangedEvent::_bind_GetCapturedWindow},
	{"base_GetClassInfo", &luna_wrapper_wxMouseCaptureChangedEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxMouseCaptureChangedEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxMouseCaptureChangedEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxMouseCaptureChangedEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxMouseCaptureChangedEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMouseCaptureChangedEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxMouseCaptureChangedEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMouseCaptureChangedEvent >::enumValues[] = {
	{0,0}
};


