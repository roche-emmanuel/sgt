#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSpinEvent.h>

class luna_wrapper_wxSpinEvent {
public:
	typedef Luna< wxSpinEvent > luna_t;

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

		wxSpinEvent* self= (wxSpinEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxSpinEvent >::push(L,self,false);
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
		//wxSpinEvent* ptr= dynamic_cast< wxSpinEvent* >(Luna< wxObject >::check(L,1));
		wxSpinEvent* ptr= luna_caster< wxObject, wxSpinEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSpinEvent >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetPosition(lua_State *L) {
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
	// wxSpinEvent::wxSpinEvent(int commandType = wxEVT_NULL, int id = 0)
	static wxSpinEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxSpinEvent::wxSpinEvent(int commandType = wxEVT_NULL, int id = 0) function, expected prototype:\nwxSpinEvent::wxSpinEvent(int commandType = wxEVT_NULL, int id = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int commandType=luatop>0 ? (int)lua_tointeger(L,1) : (int)wxEVT_NULL;
		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		return new wxSpinEvent(commandType, id);
	}

	// wxSpinEvent::wxSpinEvent(lua_Table * data, int commandType = wxEVT_NULL, int id = 0)
	static wxSpinEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSpinEvent::wxSpinEvent(lua_Table * data, int commandType = wxEVT_NULL, int id = 0) function, expected prototype:\nwxSpinEvent::wxSpinEvent(lua_Table * data, int commandType = wxEVT_NULL, int id = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int commandType=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxEVT_NULL;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		return new wrapper_wxSpinEvent(L,NULL, commandType, id);
	}

	// Overload binder for wxSpinEvent::wxSpinEvent
	static wxSpinEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxSpinEvent, cannot match any of the overloads for function wxSpinEvent:\n  wxSpinEvent(int, int)\n  wxSpinEvent(lua_Table *, int, int)\n");
		return NULL;
	}


	// Function binds:
	// int wxSpinEvent::GetPosition() const
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luaL_error(L, "luna typecheck failed in int wxSpinEvent::GetPosition() const function, expected prototype:\nint wxSpinEvent::GetPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSpinEvent* self=Luna< wxObject >::checkSubType< wxSpinEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSpinEvent::GetPosition() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxSpinEvent::SetPosition(int pos)
	static int _bind_SetPosition(lua_State *L) {
		if (!_lg_typecheck_SetPosition(L)) {
			luaL_error(L, "luna typecheck failed in void wxSpinEvent::SetPosition(int pos) function, expected prototype:\nvoid wxSpinEvent::SetPosition(int pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pos=(int)lua_tointeger(L,2);

		wxSpinEvent* self=Luna< wxObject >::checkSubType< wxSpinEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSpinEvent::SetPosition(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPosition(pos);

		return 0;
	}

	// wxClassInfo * wxSpinEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxSpinEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxSpinEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSpinEvent* self=Luna< wxObject >::checkSubType< wxSpinEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxSpinEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxSpinEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxSpinEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxSpinEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxSpinEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSpinEvent* self=Luna< wxObject >::checkSubType< wxSpinEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxSpinEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxSpinEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxSpinEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxSpinEvent::base_Clone() const function, expected prototype:\nwxEvent * wxSpinEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSpinEvent* self=Luna< wxObject >::checkSubType< wxSpinEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxSpinEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxSpinEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxSpinEvent* LunaTraits< wxSpinEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSpinEvent::_bind_ctor(L);
}

void LunaTraits< wxSpinEvent >::_bind_dtor(wxSpinEvent* obj) {
	delete obj;
}

const char LunaTraits< wxSpinEvent >::className[] = "wxSpinEvent";
const char LunaTraits< wxSpinEvent >::fullName[] = "wxSpinEvent";
const char LunaTraits< wxSpinEvent >::moduleName[] = "wx";
const char* LunaTraits< wxSpinEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxSpinEvent >::hash = 17777348;
const int LunaTraits< wxSpinEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSpinEvent >::methods[] = {
	{"GetPosition", &luna_wrapper_wxSpinEvent::_bind_GetPosition},
	{"SetPosition", &luna_wrapper_wxSpinEvent::_bind_SetPosition},
	{"base_GetClassInfo", &luna_wrapper_wxSpinEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxSpinEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxSpinEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxSpinEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxSpinEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxSpinEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSpinEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxSpinEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSpinEvent >::enumValues[] = {
	{0,0}
};


