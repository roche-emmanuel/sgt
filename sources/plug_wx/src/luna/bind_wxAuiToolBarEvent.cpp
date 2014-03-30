#include <plug_common.h>

#include <luna/wrappers/wrapper_wxAuiToolBarEvent.h>

class luna_wrapper_wxAuiToolBarEvent {
public:
	typedef Luna< wxAuiToolBarEvent > luna_t;

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

		wxAuiToolBarEvent* self= (wxAuiToolBarEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxAuiToolBarEvent >::push(L,self,false);
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
		//wxAuiToolBarEvent* ptr= dynamic_cast< wxAuiToolBarEvent* >(Luna< wxObject >::check(L,1));
		wxAuiToolBarEvent* ptr= luna_caster< wxObject, wxAuiToolBarEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAuiToolBarEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_IsDropDownClicked(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetClickPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItemRect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetToolId(lua_State *L) {
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

	// Function binds:
	// bool wxAuiToolBarEvent::IsDropDownClicked() const
	static int _bind_IsDropDownClicked(lua_State *L) {
		if (!_lg_typecheck_IsDropDownClicked(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiToolBarEvent::IsDropDownClicked() const function, expected prototype:\nbool wxAuiToolBarEvent::IsDropDownClicked() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiToolBarEvent* self=Luna< wxObject >::checkSubType< wxAuiToolBarEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiToolBarEvent::IsDropDownClicked() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsDropDownClicked();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxPoint wxAuiToolBarEvent::GetClickPoint() const
	static int _bind_GetClickPoint(lua_State *L) {
		if (!_lg_typecheck_GetClickPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxAuiToolBarEvent::GetClickPoint() const function, expected prototype:\nwxPoint wxAuiToolBarEvent::GetClickPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiToolBarEvent* self=Luna< wxObject >::checkSubType< wxAuiToolBarEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxAuiToolBarEvent::GetClickPoint() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->GetClickPoint();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxRect wxAuiToolBarEvent::GetItemRect() const
	static int _bind_GetItemRect(lua_State *L) {
		if (!_lg_typecheck_GetItemRect(L)) {
			luaL_error(L, "luna typecheck failed in wxRect wxAuiToolBarEvent::GetItemRect() const function, expected prototype:\nwxRect wxAuiToolBarEvent::GetItemRect() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiToolBarEvent* self=Luna< wxObject >::checkSubType< wxAuiToolBarEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRect wxAuiToolBarEvent::GetItemRect() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRect stack_lret = self->GetItemRect();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// int wxAuiToolBarEvent::GetToolId() const
	static int _bind_GetToolId(lua_State *L) {
		if (!_lg_typecheck_GetToolId(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiToolBarEvent::GetToolId() const function, expected prototype:\nint wxAuiToolBarEvent::GetToolId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiToolBarEvent* self=Luna< wxObject >::checkSubType< wxAuiToolBarEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiToolBarEvent::GetToolId() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetToolId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxClassInfo * wxAuiToolBarEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxAuiToolBarEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxAuiToolBarEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiToolBarEvent* self=Luna< wxObject >::checkSubType< wxAuiToolBarEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxAuiToolBarEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxAuiToolBarEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxAuiToolBarEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxAuiToolBarEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxAuiToolBarEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiToolBarEvent* self=Luna< wxObject >::checkSubType< wxAuiToolBarEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxAuiToolBarEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxAuiToolBarEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxAuiToolBarEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxAuiToolBarEvent::base_Clone() const function, expected prototype:\nwxEvent * wxAuiToolBarEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiToolBarEvent* self=Luna< wxObject >::checkSubType< wxAuiToolBarEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxAuiToolBarEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxAuiToolBarEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxAuiToolBarEvent* LunaTraits< wxAuiToolBarEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxAuiToolBarEvent >::_bind_dtor(wxAuiToolBarEvent* obj) {
	delete obj;
}

const char LunaTraits< wxAuiToolBarEvent >::className[] = "wxAuiToolBarEvent";
const char LunaTraits< wxAuiToolBarEvent >::fullName[] = "wxAuiToolBarEvent";
const char LunaTraits< wxAuiToolBarEvent >::moduleName[] = "wx";
const char* LunaTraits< wxAuiToolBarEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxAuiToolBarEvent >::hash = 61045037;
const int LunaTraits< wxAuiToolBarEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxAuiToolBarEvent >::methods[] = {
	{"IsDropDownClicked", &luna_wrapper_wxAuiToolBarEvent::_bind_IsDropDownClicked},
	{"GetClickPoint", &luna_wrapper_wxAuiToolBarEvent::_bind_GetClickPoint},
	{"GetItemRect", &luna_wrapper_wxAuiToolBarEvent::_bind_GetItemRect},
	{"GetToolId", &luna_wrapper_wxAuiToolBarEvent::_bind_GetToolId},
	{"base_GetClassInfo", &luna_wrapper_wxAuiToolBarEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxAuiToolBarEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxAuiToolBarEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxAuiToolBarEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxAuiToolBarEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxAuiToolBarEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxAuiToolBarEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxAuiToolBarEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxAuiToolBarEvent >::enumValues[] = {
	{0,0}
};


