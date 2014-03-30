#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDialUpEvent.h>

class luna_wrapper_wxDialUpEvent {
public:
	typedef Luna< wxDialUpEvent > luna_t;

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

		wxDialUpEvent* self= (wxDialUpEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDialUpEvent >::push(L,self,false);
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
		//wxDialUpEvent* ptr= dynamic_cast< wxDialUpEvent* >(Luna< wxObject >::check(L,1));
		wxDialUpEvent* ptr= luna_caster< wxObject, wxDialUpEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDialUpEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_IsConnectedEvent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOwnEvent(lua_State *L) {
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
	// wxDialUpEvent::wxDialUpEvent(lua_Table * data, bool isConnected, bool isOwnEvent)
	static wxDialUpEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxDialUpEvent::wxDialUpEvent(lua_Table * data, bool isConnected, bool isOwnEvent) function, expected prototype:\nwxDialUpEvent::wxDialUpEvent(lua_Table * data, bool isConnected, bool isOwnEvent)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool isConnected=(bool)(lua_toboolean(L,2)==1);
		bool isOwnEvent=(bool)(lua_toboolean(L,3)==1);

		return new wrapper_wxDialUpEvent(L,NULL, isConnected, isOwnEvent);
	}


	// Function binds:
	// bool wxDialUpEvent::IsConnectedEvent() const
	static int _bind_IsConnectedEvent(lua_State *L) {
		if (!_lg_typecheck_IsConnectedEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDialUpEvent::IsConnectedEvent() const function, expected prototype:\nbool wxDialUpEvent::IsConnectedEvent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDialUpEvent* self=Luna< wxObject >::checkSubType< wxDialUpEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDialUpEvent::IsConnectedEvent() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsConnectedEvent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDialUpEvent::IsOwnEvent() const
	static int _bind_IsOwnEvent(lua_State *L) {
		if (!_lg_typecheck_IsOwnEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDialUpEvent::IsOwnEvent() const function, expected prototype:\nbool wxDialUpEvent::IsOwnEvent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDialUpEvent* self=Luna< wxObject >::checkSubType< wxDialUpEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDialUpEvent::IsOwnEvent() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOwnEvent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxDialUpEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDialUpEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxDialUpEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDialUpEvent* self=Luna< wxObject >::checkSubType< wxDialUpEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDialUpEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxDialUpEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxDialUpEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxDialUpEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxDialUpEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDialUpEvent* self=Luna< wxObject >::checkSubType< wxDialUpEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxDialUpEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxDialUpEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxDialUpEvent* LunaTraits< wxDialUpEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDialUpEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxDialUpEvent >::_bind_dtor(wxDialUpEvent* obj) {
	delete obj;
}

const char LunaTraits< wxDialUpEvent >::className[] = "wxDialUpEvent";
const char LunaTraits< wxDialUpEvent >::fullName[] = "wxDialUpEvent";
const char LunaTraits< wxDialUpEvent >::moduleName[] = "wx";
const char* LunaTraits< wxDialUpEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxDialUpEvent >::hash = 78154200;
const int LunaTraits< wxDialUpEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDialUpEvent >::methods[] = {
	{"IsConnectedEvent", &luna_wrapper_wxDialUpEvent::_bind_IsConnectedEvent},
	{"IsOwnEvent", &luna_wrapper_wxDialUpEvent::_bind_IsOwnEvent},
	{"base_GetClassInfo", &luna_wrapper_wxDialUpEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxDialUpEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxDialUpEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDialUpEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDialUpEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDialUpEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxDialUpEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDialUpEvent >::enumValues[] = {
	{0,0}
};


