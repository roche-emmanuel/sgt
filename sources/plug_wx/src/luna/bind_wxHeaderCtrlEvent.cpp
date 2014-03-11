#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHeaderCtrlEvent.h>

class luna_wrapper_wxHeaderCtrlEvent {
public:
	typedef Luna< wxHeaderCtrlEvent > luna_t;

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

		wxHeaderCtrlEvent* self= (wxHeaderCtrlEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxHeaderCtrlEvent >::push(L,self,false);
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
		//wxHeaderCtrlEvent* ptr= dynamic_cast< wxHeaderCtrlEvent* >(Luna< wxObject >::check(L,1));
		wxHeaderCtrlEvent* ptr= luna_caster< wxObject, wxHeaderCtrlEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHeaderCtrlEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetColumn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNewOrder(lua_State *L) {
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
	// int wxHeaderCtrlEvent::GetColumn() const
	static int _bind_GetColumn(lua_State *L) {
		if (!_lg_typecheck_GetColumn(L)) {
			luaL_error(L, "luna typecheck failed in int wxHeaderCtrlEvent::GetColumn() const function, expected prototype:\nint wxHeaderCtrlEvent::GetColumn() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderCtrlEvent* self=Luna< wxObject >::checkSubType< wxHeaderCtrlEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHeaderCtrlEvent::GetColumn() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetColumn();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHeaderCtrlEvent::GetWidth() const
	static int _bind_GetWidth(lua_State *L) {
		if (!_lg_typecheck_GetWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxHeaderCtrlEvent::GetWidth() const function, expected prototype:\nint wxHeaderCtrlEvent::GetWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderCtrlEvent* self=Luna< wxObject >::checkSubType< wxHeaderCtrlEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHeaderCtrlEvent::GetWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int wxHeaderCtrlEvent::GetNewOrder() const
	static int _bind_GetNewOrder(lua_State *L) {
		if (!_lg_typecheck_GetNewOrder(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxHeaderCtrlEvent::GetNewOrder() const function, expected prototype:\nunsigned int wxHeaderCtrlEvent::GetNewOrder() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderCtrlEvent* self=Luna< wxObject >::checkSubType< wxHeaderCtrlEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxHeaderCtrlEvent::GetNewOrder() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetNewOrder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxClassInfo * wxHeaderCtrlEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHeaderCtrlEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHeaderCtrlEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderCtrlEvent* self=Luna< wxObject >::checkSubType< wxHeaderCtrlEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHeaderCtrlEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxHeaderCtrlEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxHeaderCtrlEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxHeaderCtrlEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxHeaderCtrlEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderCtrlEvent* self=Luna< wxObject >::checkSubType< wxHeaderCtrlEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxHeaderCtrlEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxHeaderCtrlEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxHeaderCtrlEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxHeaderCtrlEvent::base_Clone() const function, expected prototype:\nwxEvent * wxHeaderCtrlEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderCtrlEvent* self=Luna< wxObject >::checkSubType< wxHeaderCtrlEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxHeaderCtrlEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxHeaderCtrlEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxHeaderCtrlEvent* LunaTraits< wxHeaderCtrlEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxHeaderCtrlEvent >::_bind_dtor(wxHeaderCtrlEvent* obj) {
	delete obj;
}

const char LunaTraits< wxHeaderCtrlEvent >::className[] = "wxHeaderCtrlEvent";
const char LunaTraits< wxHeaderCtrlEvent >::fullName[] = "wxHeaderCtrlEvent";
const char LunaTraits< wxHeaderCtrlEvent >::moduleName[] = "wx";
const char* LunaTraits< wxHeaderCtrlEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxHeaderCtrlEvent >::hash = 20721291;
const int LunaTraits< wxHeaderCtrlEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHeaderCtrlEvent >::methods[] = {
	{"GetColumn", &luna_wrapper_wxHeaderCtrlEvent::_bind_GetColumn},
	{"GetWidth", &luna_wrapper_wxHeaderCtrlEvent::_bind_GetWidth},
	{"GetNewOrder", &luna_wrapper_wxHeaderCtrlEvent::_bind_GetNewOrder},
	{"base_GetClassInfo", &luna_wrapper_wxHeaderCtrlEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxHeaderCtrlEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxHeaderCtrlEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxHeaderCtrlEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxHeaderCtrlEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxHeaderCtrlEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHeaderCtrlEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxHeaderCtrlEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHeaderCtrlEvent >::enumValues[] = {
	{0,0}
};


