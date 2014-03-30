#include <plug_common.h>

#include <luna/wrappers/wrapper_wxActivateEvent.h>

class luna_wrapper_wxActivateEvent {
public:
	typedef Luna< wxActivateEvent > luna_t;

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

		wxActivateEvent* self= (wxActivateEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxActivateEvent >::push(L,self,false);
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
		//wxActivateEvent* ptr= dynamic_cast< wxActivateEvent* >(Luna< wxObject >::check(L,1));
		wxActivateEvent* ptr= luna_caster< wxObject, wxActivateEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxActivateEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetActive(lua_State *L) {
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
	// wxActivateEvent::wxActivateEvent(lua_Table * data, int eventType = wxEVT_NULL, bool active = true, int id = 0)
	static wxActivateEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxActivateEvent::wxActivateEvent(lua_Table * data, int eventType = wxEVT_NULL, bool active = true, int id = 0) function, expected prototype:\nwxActivateEvent::wxActivateEvent(lua_Table * data, int eventType = wxEVT_NULL, bool active = true, int id = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int eventType=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxEVT_NULL;
		bool active=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;
		int id=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

		return new wrapper_wxActivateEvent(L,NULL, eventType, active, id);
	}


	// Function binds:
	// bool wxActivateEvent::GetActive() const
	static int _bind_GetActive(lua_State *L) {
		if (!_lg_typecheck_GetActive(L)) {
			luaL_error(L, "luna typecheck failed in bool wxActivateEvent::GetActive() const function, expected prototype:\nbool wxActivateEvent::GetActive() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxActivateEvent* self=Luna< wxObject >::checkSubType< wxActivateEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxActivateEvent::GetActive() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxActivateEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxActivateEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxActivateEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxActivateEvent* self=Luna< wxObject >::checkSubType< wxActivateEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxActivateEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxActivateEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxActivateEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxActivateEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxActivateEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxActivateEvent* self=Luna< wxObject >::checkSubType< wxActivateEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxActivateEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxActivateEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxActivateEvent* LunaTraits< wxActivateEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxActivateEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxActivateEvent >::_bind_dtor(wxActivateEvent* obj) {
	delete obj;
}

const char LunaTraits< wxActivateEvent >::className[] = "wxActivateEvent";
const char LunaTraits< wxActivateEvent >::fullName[] = "wxActivateEvent";
const char LunaTraits< wxActivateEvent >::moduleName[] = "wx";
const char* LunaTraits< wxActivateEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxActivateEvent >::hash = 65731750;
const int LunaTraits< wxActivateEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxActivateEvent >::methods[] = {
	{"GetActive", &luna_wrapper_wxActivateEvent::_bind_GetActive},
	{"base_GetClassInfo", &luna_wrapper_wxActivateEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxActivateEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxActivateEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxActivateEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxActivateEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxActivateEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxActivateEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxActivateEvent >::enumValues[] = {
	{0,0}
};


