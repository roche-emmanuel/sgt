#include <plug_common.h>

#include <luna/wrappers/wrapper_wxIdleEvent.h>

class luna_wrapper_wxIdleEvent {
public:
	typedef Luna< wxIdleEvent > luna_t;

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

		wxIdleEvent* self= (wxIdleEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxIdleEvent >::push(L,self,false);
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
		//wxIdleEvent* ptr= dynamic_cast< wxIdleEvent* >(Luna< wxObject >::check(L,1));
		wxIdleEvent* ptr= luna_caster< wxObject, wxIdleEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxIdleEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_MoreRequested(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RequestMore(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMode(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
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
	// wxIdleEvent::wxIdleEvent(lua_Table * data)
	static wxIdleEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxIdleEvent::wxIdleEvent(lua_Table * data) function, expected prototype:\nwxIdleEvent::wxIdleEvent(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxIdleEvent(L,NULL);
	}


	// Function binds:
	// bool wxIdleEvent::MoreRequested() const
	static int _bind_MoreRequested(lua_State *L) {
		if (!_lg_typecheck_MoreRequested(L)) {
			luaL_error(L, "luna typecheck failed in bool wxIdleEvent::MoreRequested() const function, expected prototype:\nbool wxIdleEvent::MoreRequested() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxIdleEvent* self=Luna< wxObject >::checkSubType< wxIdleEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxIdleEvent::MoreRequested() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MoreRequested();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxIdleEvent::RequestMore(bool needMore = true)
	static int _bind_RequestMore(lua_State *L) {
		if (!_lg_typecheck_RequestMore(L)) {
			luaL_error(L, "luna typecheck failed in void wxIdleEvent::RequestMore(bool needMore = true) function, expected prototype:\nvoid wxIdleEvent::RequestMore(bool needMore = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool needMore=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxIdleEvent* self=Luna< wxObject >::checkSubType< wxIdleEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxIdleEvent::RequestMore(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RequestMore(needMore);

		return 0;
	}

	// static wxIdleMode wxIdleEvent::GetMode()
	static int _bind_GetMode(lua_State *L) {
		if (!_lg_typecheck_GetMode(L)) {
			luaL_error(L, "luna typecheck failed in static wxIdleMode wxIdleEvent::GetMode() function, expected prototype:\nstatic wxIdleMode wxIdleEvent::GetMode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxIdleMode lret = wxIdleEvent::GetMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void wxIdleEvent::SetMode(wxIdleMode mode)
	static int _bind_SetMode(lua_State *L) {
		if (!_lg_typecheck_SetMode(L)) {
			luaL_error(L, "luna typecheck failed in static void wxIdleEvent::SetMode(wxIdleMode mode) function, expected prototype:\nstatic void wxIdleEvent::SetMode(wxIdleMode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxIdleMode mode=(wxIdleMode)lua_tointeger(L,1);

		wxIdleEvent::SetMode(mode);

		return 0;
	}

	// wxClassInfo * wxIdleEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxIdleEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxIdleEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxIdleEvent* self=Luna< wxObject >::checkSubType< wxIdleEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxIdleEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxIdleEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxIdleEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxIdleEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxIdleEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxIdleEvent* self=Luna< wxObject >::checkSubType< wxIdleEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxIdleEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxIdleEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxIdleEvent* LunaTraits< wxIdleEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxIdleEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxIdleEvent >::_bind_dtor(wxIdleEvent* obj) {
	delete obj;
}

const char LunaTraits< wxIdleEvent >::className[] = "wxIdleEvent";
const char LunaTraits< wxIdleEvent >::fullName[] = "wxIdleEvent";
const char LunaTraits< wxIdleEvent >::moduleName[] = "wx";
const char* LunaTraits< wxIdleEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxIdleEvent >::hash = 61589214;
const int LunaTraits< wxIdleEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxIdleEvent >::methods[] = {
	{"MoreRequested", &luna_wrapper_wxIdleEvent::_bind_MoreRequested},
	{"RequestMore", &luna_wrapper_wxIdleEvent::_bind_RequestMore},
	{"GetMode", &luna_wrapper_wxIdleEvent::_bind_GetMode},
	{"SetMode", &luna_wrapper_wxIdleEvent::_bind_SetMode},
	{"base_GetClassInfo", &luna_wrapper_wxIdleEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxIdleEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxIdleEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxIdleEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxIdleEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxIdleEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxIdleEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxIdleEvent >::enumValues[] = {
	{0,0}
};


