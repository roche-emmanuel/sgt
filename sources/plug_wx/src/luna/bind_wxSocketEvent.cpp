#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSocketEvent.h>

class luna_wrapper_wxSocketEvent {
public:
	typedef Luna< wxSocketEvent > luna_t;

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

		wxSocketEvent* self= (wxSocketEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxSocketEvent >::push(L,self,false);
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
		//wxSocketEvent* ptr= dynamic_cast< wxSocketEvent* >(Luna< wxObject >::check(L,1));
		wxSocketEvent* ptr= luna_caster< wxObject, wxSocketEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSocketEvent >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_GetClientData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSocket(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSocketEvent(lua_State *L) {
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
	// wxSocketEvent::wxSocketEvent(lua_Table * data, int id = 0)
	static wxSocketEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxSocketEvent::wxSocketEvent(lua_Table * data, int id = 0) function, expected prototype:\nwxSocketEvent::wxSocketEvent(lua_Table * data, int id = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		return new wrapper_wxSocketEvent(L,NULL, id);
	}


	// Function binds:
	// void * wxSocketEvent::GetClientData() const
	static int _bind_GetClientData(lua_State *L) {
		if (!_lg_typecheck_GetClientData(L)) {
			luaL_error(L, "luna typecheck failed in void * wxSocketEvent::GetClientData() const function, expected prototype:\nvoid * wxSocketEvent::GetClientData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketEvent* self=Luna< wxObject >::checkSubType< wxSocketEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void * wxSocketEvent::GetClientData() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->GetClientData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// wxSocketBase * wxSocketEvent::GetSocket() const
	static int _bind_GetSocket(lua_State *L) {
		if (!_lg_typecheck_GetSocket(L)) {
			luaL_error(L, "luna typecheck failed in wxSocketBase * wxSocketEvent::GetSocket() const function, expected prototype:\nwxSocketBase * wxSocketEvent::GetSocket() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketEvent* self=Luna< wxObject >::checkSubType< wxSocketEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSocketBase * wxSocketEvent::GetSocket() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSocketBase * lret = self->GetSocket();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSocketBase >::push(L,lret,false);

		return 1;
	}

	// wxSocketNotify wxSocketEvent::GetSocketEvent() const
	static int _bind_GetSocketEvent(lua_State *L) {
		if (!_lg_typecheck_GetSocketEvent(L)) {
			luaL_error(L, "luna typecheck failed in wxSocketNotify wxSocketEvent::GetSocketEvent() const function, expected prototype:\nwxSocketNotify wxSocketEvent::GetSocketEvent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketEvent* self=Luna< wxObject >::checkSubType< wxSocketEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSocketNotify wxSocketEvent::GetSocketEvent() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSocketNotify lret = self->GetSocketEvent();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxClassInfo * wxSocketEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxSocketEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxSocketEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketEvent* self=Luna< wxObject >::checkSubType< wxSocketEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxSocketEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxSocketEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxSocketEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxSocketEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxSocketEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketEvent* self=Luna< wxObject >::checkSubType< wxSocketEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxSocketEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxSocketEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxSocketEvent* LunaTraits< wxSocketEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSocketEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxSocketEvent >::_bind_dtor(wxSocketEvent* obj) {
	delete obj;
}

const char LunaTraits< wxSocketEvent >::className[] = "wxSocketEvent";
const char LunaTraits< wxSocketEvent >::fullName[] = "wxSocketEvent";
const char LunaTraits< wxSocketEvent >::moduleName[] = "wx";
const char* LunaTraits< wxSocketEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxSocketEvent >::hash = 93561938;
const int LunaTraits< wxSocketEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSocketEvent >::methods[] = {
	{"GetClientData", &luna_wrapper_wxSocketEvent::_bind_GetClientData},
	{"GetSocket", &luna_wrapper_wxSocketEvent::_bind_GetSocket},
	{"GetSocketEvent", &luna_wrapper_wxSocketEvent::_bind_GetSocketEvent},
	{"base_GetClassInfo", &luna_wrapper_wxSocketEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxSocketEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxSocketEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxSocketEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxSocketEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSocketEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxSocketEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSocketEvent >::enumValues[] = {
	{0,0}
};


