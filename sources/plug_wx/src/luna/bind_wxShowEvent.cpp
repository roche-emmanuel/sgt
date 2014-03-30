#include <plug_common.h>

#include <luna/wrappers/wrapper_wxShowEvent.h>

class luna_wrapper_wxShowEvent {
public:
	typedef Luna< wxShowEvent > luna_t;

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

		wxShowEvent* self= (wxShowEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxShowEvent >::push(L,self,false);
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
		//wxShowEvent* ptr= dynamic_cast< wxShowEvent* >(Luna< wxObject >::check(L,1));
		wxShowEvent* ptr= luna_caster< wxObject, wxShowEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxShowEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetShow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsShown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetShow(lua_State *L) {
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
	// wxShowEvent::wxShowEvent(lua_Table * data, int winid = 0, bool show = false)
	static wxShowEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxShowEvent::wxShowEvent(lua_Table * data, int winid = 0, bool show = false) function, expected prototype:\nwxShowEvent::wxShowEvent(lua_Table * data, int winid = 0, bool show = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int winid=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		bool show=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		return new wrapper_wxShowEvent(L,NULL, winid, show);
	}


	// Function binds:
	// void wxShowEvent::SetShow(bool show)
	static int _bind_SetShow(lua_State *L) {
		if (!_lg_typecheck_SetShow(L)) {
			luaL_error(L, "luna typecheck failed in void wxShowEvent::SetShow(bool show) function, expected prototype:\nvoid wxShowEvent::SetShow(bool show)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool show=(bool)(lua_toboolean(L,2)==1);

		wxShowEvent* self=Luna< wxObject >::checkSubType< wxShowEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxShowEvent::SetShow(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetShow(show);

		return 0;
	}

	// bool wxShowEvent::IsShown() const
	static int _bind_IsShown(lua_State *L) {
		if (!_lg_typecheck_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxShowEvent::IsShown() const function, expected prototype:\nbool wxShowEvent::IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxShowEvent* self=Luna< wxObject >::checkSubType< wxShowEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxShowEvent::IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxShowEvent::GetShow() const
	static int _bind_GetShow(lua_State *L) {
		if (!_lg_typecheck_GetShow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxShowEvent::GetShow() const function, expected prototype:\nbool wxShowEvent::GetShow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxShowEvent* self=Luna< wxObject >::checkSubType< wxShowEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxShowEvent::GetShow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetShow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxShowEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxShowEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxShowEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxShowEvent* self=Luna< wxObject >::checkSubType< wxShowEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxShowEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxShowEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxShowEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxShowEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxShowEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxShowEvent* self=Luna< wxObject >::checkSubType< wxShowEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxShowEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxShowEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxShowEvent* LunaTraits< wxShowEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxShowEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxShowEvent >::_bind_dtor(wxShowEvent* obj) {
	delete obj;
}

const char LunaTraits< wxShowEvent >::className[] = "wxShowEvent";
const char LunaTraits< wxShowEvent >::fullName[] = "wxShowEvent";
const char LunaTraits< wxShowEvent >::moduleName[] = "wx";
const char* LunaTraits< wxShowEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxShowEvent >::hash = 99567489;
const int LunaTraits< wxShowEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxShowEvent >::methods[] = {
	{"SetShow", &luna_wrapper_wxShowEvent::_bind_SetShow},
	{"IsShown", &luna_wrapper_wxShowEvent::_bind_IsShown},
	{"GetShow", &luna_wrapper_wxShowEvent::_bind_GetShow},
	{"base_GetClassInfo", &luna_wrapper_wxShowEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxShowEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxShowEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxShowEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxShowEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxShowEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxShowEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxShowEvent >::enumValues[] = {
	{0,0}
};


