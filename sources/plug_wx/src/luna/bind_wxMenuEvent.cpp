#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMenuEvent.h>

class luna_wrapper_wxMenuEvent {
public:
	typedef Luna< wxMenuEvent > luna_t;

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

		wxMenuEvent* self= (wxMenuEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxMenuEvent >::push(L,self,false);
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
		//wxMenuEvent* ptr= dynamic_cast< wxMenuEvent* >(Luna< wxObject >::check(L,1));
		wxMenuEvent* ptr= luna_caster< wxObject, wxMenuEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMenuEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetMenu(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMenuId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsPopup(lua_State *L) {
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
	// wxMenuEvent::wxMenuEvent(lua_Table * data, int type = wxEVT_NULL, int id = 0, wxMenu * menu = NULL)
	static wxMenuEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuEvent::wxMenuEvent(lua_Table * data, int type = wxEVT_NULL, int id = 0, wxMenu * menu = NULL) function, expected prototype:\nwxMenuEvent::wxMenuEvent(lua_Table * data, int type = wxEVT_NULL, int id = 0, wxMenu * menu = NULL)\nClass arguments details:\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int type=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxEVT_NULL;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		wxMenu* menu=luatop>3 ? (Luna< wxObject >::checkSubType< wxMenu >(L,4)) : (wxMenu*)NULL;

		return new wrapper_wxMenuEvent(L,NULL, type, id, menu);
	}


	// Function binds:
	// wxMenu * wxMenuEvent::GetMenu() const
	static int _bind_GetMenu(lua_State *L) {
		if (!_lg_typecheck_GetMenu(L)) {
			luaL_error(L, "luna typecheck failed in wxMenu * wxMenuEvent::GetMenu() const function, expected prototype:\nwxMenu * wxMenuEvent::GetMenu() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuEvent* self=Luna< wxObject >::checkSubType< wxMenuEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenu * wxMenuEvent::GetMenu() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenu * lret = self->GetMenu();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenu >::push(L,lret,false);

		return 1;
	}

	// int wxMenuEvent::GetMenuId() const
	static int _bind_GetMenuId(lua_State *L) {
		if (!_lg_typecheck_GetMenuId(L)) {
			luaL_error(L, "luna typecheck failed in int wxMenuEvent::GetMenuId() const function, expected prototype:\nint wxMenuEvent::GetMenuId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuEvent* self=Luna< wxObject >::checkSubType< wxMenuEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxMenuEvent::GetMenuId() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetMenuId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxMenuEvent::IsPopup() const
	static int _bind_IsPopup(lua_State *L) {
		if (!_lg_typecheck_IsPopup(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuEvent::IsPopup() const function, expected prototype:\nbool wxMenuEvent::IsPopup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuEvent* self=Luna< wxObject >::checkSubType< wxMenuEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuEvent::IsPopup() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsPopup();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxMenuEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxMenuEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxMenuEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuEvent* self=Luna< wxObject >::checkSubType< wxMenuEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxMenuEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxMenuEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxMenuEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxMenuEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxMenuEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuEvent* self=Luna< wxObject >::checkSubType< wxMenuEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxMenuEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxMenuEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxMenuEvent* LunaTraits< wxMenuEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMenuEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxMenuEvent >::_bind_dtor(wxMenuEvent* obj) {
	delete obj;
}

const char LunaTraits< wxMenuEvent >::className[] = "wxMenuEvent";
const char LunaTraits< wxMenuEvent >::fullName[] = "wxMenuEvent";
const char LunaTraits< wxMenuEvent >::moduleName[] = "wx";
const char* LunaTraits< wxMenuEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxMenuEvent >::hash = 71176912;
const int LunaTraits< wxMenuEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMenuEvent >::methods[] = {
	{"GetMenu", &luna_wrapper_wxMenuEvent::_bind_GetMenu},
	{"GetMenuId", &luna_wrapper_wxMenuEvent::_bind_GetMenuId},
	{"IsPopup", &luna_wrapper_wxMenuEvent::_bind_IsPopup},
	{"base_GetClassInfo", &luna_wrapper_wxMenuEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxMenuEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxMenuEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxMenuEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxMenuEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMenuEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxMenuEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMenuEvent >::enumValues[] = {
	{0,0}
};


