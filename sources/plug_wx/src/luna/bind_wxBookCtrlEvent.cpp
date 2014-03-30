#include <plug_common.h>

#include <luna/wrappers/wrapper_wxBookCtrlEvent.h>

class luna_wrapper_wxBookCtrlEvent {
public:
	typedef Luna< wxBookCtrlEvent > luna_t;

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

		wxBookCtrlEvent* self= (wxBookCtrlEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxBookCtrlEvent >::push(L,self,false);
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
		//wxBookCtrlEvent* ptr= dynamic_cast< wxBookCtrlEvent* >(Luna< wxObject >::check(L,1));
		wxBookCtrlEvent* ptr= luna_caster< wxObject, wxBookCtrlEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxBookCtrlEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>4 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
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
	inline static bool _lg_typecheck_GetOldSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetOldSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelection(lua_State *L) {
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
	// wxBookCtrlEvent::wxBookCtrlEvent(int eventType = wxEVT_NULL, int id = 0, int sel = wxNOT_FOUND, int oldSel = wxNOT_FOUND)
	static wxBookCtrlEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxBookCtrlEvent::wxBookCtrlEvent(int eventType = wxEVT_NULL, int id = 0, int sel = wxNOT_FOUND, int oldSel = wxNOT_FOUND) function, expected prototype:\nwxBookCtrlEvent::wxBookCtrlEvent(int eventType = wxEVT_NULL, int id = 0, int sel = wxNOT_FOUND, int oldSel = wxNOT_FOUND)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int eventType=luatop>0 ? (int)lua_tointeger(L,1) : (int)wxEVT_NULL;
		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		int sel=luatop>2 ? (int)lua_tointeger(L,3) : (int)wxNOT_FOUND;
		int oldSel=luatop>3 ? (int)lua_tointeger(L,4) : (int)wxNOT_FOUND;

		return new wxBookCtrlEvent(eventType, id, sel, oldSel);
	}

	// wxBookCtrlEvent::wxBookCtrlEvent(lua_Table * data, int eventType = wxEVT_NULL, int id = 0, int sel = wxNOT_FOUND, int oldSel = wxNOT_FOUND)
	static wxBookCtrlEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxBookCtrlEvent::wxBookCtrlEvent(lua_Table * data, int eventType = wxEVT_NULL, int id = 0, int sel = wxNOT_FOUND, int oldSel = wxNOT_FOUND) function, expected prototype:\nwxBookCtrlEvent::wxBookCtrlEvent(lua_Table * data, int eventType = wxEVT_NULL, int id = 0, int sel = wxNOT_FOUND, int oldSel = wxNOT_FOUND)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int eventType=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxEVT_NULL;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		int sel=luatop>3 ? (int)lua_tointeger(L,4) : (int)wxNOT_FOUND;
		int oldSel=luatop>4 ? (int)lua_tointeger(L,5) : (int)wxNOT_FOUND;

		return new wrapper_wxBookCtrlEvent(L,NULL, eventType, id, sel, oldSel);
	}

	// Overload binder for wxBookCtrlEvent::wxBookCtrlEvent
	static wxBookCtrlEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxBookCtrlEvent, cannot match any of the overloads for function wxBookCtrlEvent:\n  wxBookCtrlEvent(int, int, int, int)\n  wxBookCtrlEvent(lua_Table *, int, int, int, int)\n");
		return NULL;
	}


	// Function binds:
	// int wxBookCtrlEvent::GetOldSelection() const
	static int _bind_GetOldSelection(lua_State *L) {
		if (!_lg_typecheck_GetOldSelection(L)) {
			luaL_error(L, "luna typecheck failed in int wxBookCtrlEvent::GetOldSelection() const function, expected prototype:\nint wxBookCtrlEvent::GetOldSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBookCtrlEvent* self=Luna< wxObject >::checkSubType< wxBookCtrlEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxBookCtrlEvent::GetOldSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetOldSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxBookCtrlEvent::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luaL_error(L, "luna typecheck failed in int wxBookCtrlEvent::GetSelection() const function, expected prototype:\nint wxBookCtrlEvent::GetSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBookCtrlEvent* self=Luna< wxObject >::checkSubType< wxBookCtrlEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxBookCtrlEvent::GetSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxBookCtrlEvent::SetOldSelection(int page)
	static int _bind_SetOldSelection(lua_State *L) {
		if (!_lg_typecheck_SetOldSelection(L)) {
			luaL_error(L, "luna typecheck failed in void wxBookCtrlEvent::SetOldSelection(int page) function, expected prototype:\nvoid wxBookCtrlEvent::SetOldSelection(int page)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int page=(int)lua_tointeger(L,2);

		wxBookCtrlEvent* self=Luna< wxObject >::checkSubType< wxBookCtrlEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBookCtrlEvent::SetOldSelection(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetOldSelection(page);

		return 0;
	}

	// void wxBookCtrlEvent::SetSelection(int page)
	static int _bind_SetSelection(lua_State *L) {
		if (!_lg_typecheck_SetSelection(L)) {
			luaL_error(L, "luna typecheck failed in void wxBookCtrlEvent::SetSelection(int page) function, expected prototype:\nvoid wxBookCtrlEvent::SetSelection(int page)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int page=(int)lua_tointeger(L,2);

		wxBookCtrlEvent* self=Luna< wxObject >::checkSubType< wxBookCtrlEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBookCtrlEvent::SetSelection(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSelection(page);

		return 0;
	}

	// wxClassInfo * wxBookCtrlEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxBookCtrlEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxBookCtrlEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBookCtrlEvent* self=Luna< wxObject >::checkSubType< wxBookCtrlEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxBookCtrlEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxBookCtrlEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxBookCtrlEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxBookCtrlEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxBookCtrlEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBookCtrlEvent* self=Luna< wxObject >::checkSubType< wxBookCtrlEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxBookCtrlEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxBookCtrlEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxBookCtrlEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxBookCtrlEvent::base_Clone() const function, expected prototype:\nwxEvent * wxBookCtrlEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBookCtrlEvent* self=Luna< wxObject >::checkSubType< wxBookCtrlEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxBookCtrlEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxBookCtrlEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxBookCtrlEvent* LunaTraits< wxBookCtrlEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxBookCtrlEvent::_bind_ctor(L);
}

void LunaTraits< wxBookCtrlEvent >::_bind_dtor(wxBookCtrlEvent* obj) {
	delete obj;
}

const char LunaTraits< wxBookCtrlEvent >::className[] = "wxBookCtrlEvent";
const char LunaTraits< wxBookCtrlEvent >::fullName[] = "wxBookCtrlEvent";
const char LunaTraits< wxBookCtrlEvent >::moduleName[] = "wx";
const char* LunaTraits< wxBookCtrlEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxBookCtrlEvent >::hash = 55450285;
const int LunaTraits< wxBookCtrlEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxBookCtrlEvent >::methods[] = {
	{"GetOldSelection", &luna_wrapper_wxBookCtrlEvent::_bind_GetOldSelection},
	{"GetSelection", &luna_wrapper_wxBookCtrlEvent::_bind_GetSelection},
	{"SetOldSelection", &luna_wrapper_wxBookCtrlEvent::_bind_SetOldSelection},
	{"SetSelection", &luna_wrapper_wxBookCtrlEvent::_bind_SetSelection},
	{"base_GetClassInfo", &luna_wrapper_wxBookCtrlEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxBookCtrlEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxBookCtrlEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxBookCtrlEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxBookCtrlEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxBookCtrlEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxBookCtrlEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxBookCtrlEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxBookCtrlEvent >::enumValues[] = {
	{0,0}
};


