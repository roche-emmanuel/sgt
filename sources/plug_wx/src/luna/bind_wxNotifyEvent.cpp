#include <plug_common.h>

#include <luna/wrappers/wrapper_wxNotifyEvent.h>

class luna_wrapper_wxNotifyEvent {
public:
	typedef Luna< wxNotifyEvent > luna_t;

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

		wxNotifyEvent* self= (wxNotifyEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxNotifyEvent >::push(L,self,false);
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
		//wxNotifyEvent* ptr= dynamic_cast< wxNotifyEvent* >(Luna< wxObject >::check(L,1));
		wxNotifyEvent* ptr= luna_caster< wxObject, wxNotifyEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxNotifyEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Allow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsAllowed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Veto(lua_State *L) {
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

	inline static bool _lg_typecheck_base_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxNotifyEvent::wxNotifyEvent(int eventType = wxEVT_NULL, int id = 0)
	static wxNotifyEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxNotifyEvent::wxNotifyEvent(int eventType = wxEVT_NULL, int id = 0) function, expected prototype:\nwxNotifyEvent::wxNotifyEvent(int eventType = wxEVT_NULL, int id = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int eventType=luatop>0 ? (int)lua_tointeger(L,1) : (int)wxEVT_NULL;
		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		return new wxNotifyEvent(eventType, id);
	}

	// wxNotifyEvent::wxNotifyEvent(lua_Table * data, int eventType = wxEVT_NULL, int id = 0)
	static wxNotifyEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxNotifyEvent::wxNotifyEvent(lua_Table * data, int eventType = wxEVT_NULL, int id = 0) function, expected prototype:\nwxNotifyEvent::wxNotifyEvent(lua_Table * data, int eventType = wxEVT_NULL, int id = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int eventType=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxEVT_NULL;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		return new wrapper_wxNotifyEvent(L,NULL, eventType, id);
	}

	// Overload binder for wxNotifyEvent::wxNotifyEvent
	static wxNotifyEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxNotifyEvent, cannot match any of the overloads for function wxNotifyEvent:\n  wxNotifyEvent(int, int)\n  wxNotifyEvent(lua_Table *, int, int)\n");
		return NULL;
	}


	// Function binds:
	// void wxNotifyEvent::Allow()
	static int _bind_Allow(lua_State *L) {
		if (!_lg_typecheck_Allow(L)) {
			luaL_error(L, "luna typecheck failed in void wxNotifyEvent::Allow() function, expected prototype:\nvoid wxNotifyEvent::Allow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxNotifyEvent* self=Luna< wxObject >::checkSubType< wxNotifyEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxNotifyEvent::Allow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Allow();

		return 0;
	}

	// bool wxNotifyEvent::IsAllowed() const
	static int _bind_IsAllowed(lua_State *L) {
		if (!_lg_typecheck_IsAllowed(L)) {
			luaL_error(L, "luna typecheck failed in bool wxNotifyEvent::IsAllowed() const function, expected prototype:\nbool wxNotifyEvent::IsAllowed() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxNotifyEvent* self=Luna< wxObject >::checkSubType< wxNotifyEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxNotifyEvent::IsAllowed() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsAllowed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxNotifyEvent::Veto()
	static int _bind_Veto(lua_State *L) {
		if (!_lg_typecheck_Veto(L)) {
			luaL_error(L, "luna typecheck failed in void wxNotifyEvent::Veto() function, expected prototype:\nvoid wxNotifyEvent::Veto()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxNotifyEvent* self=Luna< wxObject >::checkSubType< wxNotifyEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxNotifyEvent::Veto(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Veto();

		return 0;
	}

	// wxClassInfo * wxNotifyEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxNotifyEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxNotifyEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxNotifyEvent* self=Luna< wxObject >::checkSubType< wxNotifyEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxNotifyEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxNotifyEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxNotifyEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxNotifyEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxNotifyEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxNotifyEvent* self=Luna< wxObject >::checkSubType< wxNotifyEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxNotifyEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxNotifyEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxNotifyEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxNotifyEvent::base_Clone() const function, expected prototype:\nwxEvent * wxNotifyEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxNotifyEvent* self=Luna< wxObject >::checkSubType< wxNotifyEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxNotifyEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxNotifyEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxNotifyEvent* LunaTraits< wxNotifyEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxNotifyEvent::_bind_ctor(L);
}

void LunaTraits< wxNotifyEvent >::_bind_dtor(wxNotifyEvent* obj) {
	delete obj;
}

const char LunaTraits< wxNotifyEvent >::className[] = "wxNotifyEvent";
const char LunaTraits< wxNotifyEvent >::fullName[] = "wxNotifyEvent";
const char LunaTraits< wxNotifyEvent >::moduleName[] = "wx";
const char* LunaTraits< wxNotifyEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxNotifyEvent >::hash = 50844681;
const int LunaTraits< wxNotifyEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxNotifyEvent >::methods[] = {
	{"Allow", &luna_wrapper_wxNotifyEvent::_bind_Allow},
	{"IsAllowed", &luna_wrapper_wxNotifyEvent::_bind_IsAllowed},
	{"Veto", &luna_wrapper_wxNotifyEvent::_bind_Veto},
	{"base_GetClassInfo", &luna_wrapper_wxNotifyEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxNotifyEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxNotifyEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxNotifyEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxNotifyEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxNotifyEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxNotifyEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxNotifyEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxNotifyEvent >::enumValues[] = {
	{0,0}
};


