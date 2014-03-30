#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFocusEvent.h>

class luna_wrapper_wxFocusEvent {
public:
	typedef Luna< wxFocusEvent > luna_t;

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

		wxFocusEvent* self= (wxFocusEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFocusEvent >::push(L,self,false);
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
		//wxFocusEvent* ptr= dynamic_cast< wxFocusEvent* >(Luna< wxObject >::check(L,1));
		wxFocusEvent* ptr= luna_caster< wxObject, wxFocusEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFocusEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
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
	// wxFocusEvent::wxFocusEvent(lua_Table * data, int eventType = wxEVT_NULL, int id = 0)
	static wxFocusEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxFocusEvent::wxFocusEvent(lua_Table * data, int eventType = wxEVT_NULL, int id = 0) function, expected prototype:\nwxFocusEvent::wxFocusEvent(lua_Table * data, int eventType = wxEVT_NULL, int id = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int eventType=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxEVT_NULL;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		return new wrapper_wxFocusEvent(L,NULL, eventType, id);
	}


	// Function binds:
	// wxWindow * wxFocusEvent::GetWindow() const
	static int _bind_GetWindow(lua_State *L) {
		if (!_lg_typecheck_GetWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxFocusEvent::GetWindow() const function, expected prototype:\nwxWindow * wxFocusEvent::GetWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFocusEvent* self=Luna< wxObject >::checkSubType< wxFocusEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxFocusEvent::GetWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// void wxFocusEvent::SetWindow(wxWindow * win)
	static int _bind_SetWindow(lua_State *L) {
		if (!_lg_typecheck_SetWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxFocusEvent::SetWindow(wxWindow * win) function, expected prototype:\nvoid wxFocusEvent::SetWindow(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxFocusEvent* self=Luna< wxObject >::checkSubType< wxFocusEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFocusEvent::SetWindow(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWindow(win);

		return 0;
	}

	// wxClassInfo * wxFocusEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxFocusEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxFocusEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFocusEvent* self=Luna< wxObject >::checkSubType< wxFocusEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxFocusEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxFocusEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxFocusEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxFocusEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxFocusEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFocusEvent* self=Luna< wxObject >::checkSubType< wxFocusEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxFocusEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxFocusEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxFocusEvent* LunaTraits< wxFocusEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFocusEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxFocusEvent >::_bind_dtor(wxFocusEvent* obj) {
	delete obj;
}

const char LunaTraits< wxFocusEvent >::className[] = "wxFocusEvent";
const char LunaTraits< wxFocusEvent >::fullName[] = "wxFocusEvent";
const char LunaTraits< wxFocusEvent >::moduleName[] = "wx";
const char* LunaTraits< wxFocusEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxFocusEvent >::hash = 9245182;
const int LunaTraits< wxFocusEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFocusEvent >::methods[] = {
	{"GetWindow", &luna_wrapper_wxFocusEvent::_bind_GetWindow},
	{"SetWindow", &luna_wrapper_wxFocusEvent::_bind_SetWindow},
	{"base_GetClassInfo", &luna_wrapper_wxFocusEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxFocusEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxFocusEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFocusEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxFocusEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxFocusEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxFocusEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFocusEvent >::enumValues[] = {
	{0,0}
};


