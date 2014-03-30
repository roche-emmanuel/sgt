#include <plug_common.h>

#include <luna/wrappers/wrapper_wxCollapsiblePaneEvent.h>

class luna_wrapper_wxCollapsiblePaneEvent {
public:
	typedef Luna< wxCollapsiblePaneEvent > luna_t;

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

		wxCollapsiblePaneEvent* self= (wxCollapsiblePaneEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxCollapsiblePaneEvent >::push(L,self,false);
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
		//wxCollapsiblePaneEvent* ptr= dynamic_cast< wxCollapsiblePaneEvent* >(Luna< wxObject >::check(L,1));
		wxCollapsiblePaneEvent* ptr= luna_caster< wxObject, wxCollapsiblePaneEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxCollapsiblePaneEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetCollapsed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCollapsed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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
	// wxCollapsiblePaneEvent::wxCollapsiblePaneEvent(wxObject * generator, int id, bool collapsed)
	static wxCollapsiblePaneEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxCollapsiblePaneEvent::wxCollapsiblePaneEvent(wxObject * generator, int id, bool collapsed) function, expected prototype:\nwxCollapsiblePaneEvent::wxCollapsiblePaneEvent(wxObject * generator, int id, bool collapsed)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* generator=(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		bool collapsed=(bool)(lua_toboolean(L,3)==1);

		return new wxCollapsiblePaneEvent(generator, id, collapsed);
	}

	// wxCollapsiblePaneEvent::wxCollapsiblePaneEvent(lua_Table * data, wxObject * generator, int id, bool collapsed)
	static wxCollapsiblePaneEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxCollapsiblePaneEvent::wxCollapsiblePaneEvent(lua_Table * data, wxObject * generator, int id, bool collapsed) function, expected prototype:\nwxCollapsiblePaneEvent::wxCollapsiblePaneEvent(lua_Table * data, wxObject * generator, int id, bool collapsed)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* generator=(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		bool collapsed=(bool)(lua_toboolean(L,4)==1);

		return new wrapper_wxCollapsiblePaneEvent(L,NULL, generator, id, collapsed);
	}

	// Overload binder for wxCollapsiblePaneEvent::wxCollapsiblePaneEvent
	static wxCollapsiblePaneEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxCollapsiblePaneEvent, cannot match any of the overloads for function wxCollapsiblePaneEvent:\n  wxCollapsiblePaneEvent(wxObject *, int, bool)\n  wxCollapsiblePaneEvent(lua_Table *, wxObject *, int, bool)\n");
		return NULL;
	}


	// Function binds:
	// bool wxCollapsiblePaneEvent::GetCollapsed() const
	static int _bind_GetCollapsed(lua_State *L) {
		if (!_lg_typecheck_GetCollapsed(L)) {
			luaL_error(L, "luna typecheck failed in bool wxCollapsiblePaneEvent::GetCollapsed() const function, expected prototype:\nbool wxCollapsiblePaneEvent::GetCollapsed() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCollapsiblePaneEvent* self=Luna< wxObject >::checkSubType< wxCollapsiblePaneEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxCollapsiblePaneEvent::GetCollapsed() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetCollapsed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxCollapsiblePaneEvent::SetCollapsed(bool collapsed)
	static int _bind_SetCollapsed(lua_State *L) {
		if (!_lg_typecheck_SetCollapsed(L)) {
			luaL_error(L, "luna typecheck failed in void wxCollapsiblePaneEvent::SetCollapsed(bool collapsed) function, expected prototype:\nvoid wxCollapsiblePaneEvent::SetCollapsed(bool collapsed)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool collapsed=(bool)(lua_toboolean(L,2)==1);

		wxCollapsiblePaneEvent* self=Luna< wxObject >::checkSubType< wxCollapsiblePaneEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCollapsiblePaneEvent::SetCollapsed(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCollapsed(collapsed);

		return 0;
	}

	// wxClassInfo * wxCollapsiblePaneEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxCollapsiblePaneEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxCollapsiblePaneEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCollapsiblePaneEvent* self=Luna< wxObject >::checkSubType< wxCollapsiblePaneEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxCollapsiblePaneEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxCollapsiblePaneEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxCollapsiblePaneEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxCollapsiblePaneEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxCollapsiblePaneEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCollapsiblePaneEvent* self=Luna< wxObject >::checkSubType< wxCollapsiblePaneEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxCollapsiblePaneEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxCollapsiblePaneEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxCollapsiblePaneEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxCollapsiblePaneEvent::base_Clone() const function, expected prototype:\nwxEvent * wxCollapsiblePaneEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCollapsiblePaneEvent* self=Luna< wxObject >::checkSubType< wxCollapsiblePaneEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxCollapsiblePaneEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxCollapsiblePaneEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxCollapsiblePaneEvent* LunaTraits< wxCollapsiblePaneEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxCollapsiblePaneEvent::_bind_ctor(L);
}

void LunaTraits< wxCollapsiblePaneEvent >::_bind_dtor(wxCollapsiblePaneEvent* obj) {
	delete obj;
}

const char LunaTraits< wxCollapsiblePaneEvent >::className[] = "wxCollapsiblePaneEvent";
const char LunaTraits< wxCollapsiblePaneEvent >::fullName[] = "wxCollapsiblePaneEvent";
const char LunaTraits< wxCollapsiblePaneEvent >::moduleName[] = "wx";
const char* LunaTraits< wxCollapsiblePaneEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxCollapsiblePaneEvent >::hash = 4452642;
const int LunaTraits< wxCollapsiblePaneEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxCollapsiblePaneEvent >::methods[] = {
	{"GetCollapsed", &luna_wrapper_wxCollapsiblePaneEvent::_bind_GetCollapsed},
	{"SetCollapsed", &luna_wrapper_wxCollapsiblePaneEvent::_bind_SetCollapsed},
	{"base_GetClassInfo", &luna_wrapper_wxCollapsiblePaneEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxCollapsiblePaneEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxCollapsiblePaneEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxCollapsiblePaneEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxCollapsiblePaneEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxCollapsiblePaneEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxCollapsiblePaneEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxCollapsiblePaneEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxCollapsiblePaneEvent >::enumValues[] = {
	{0,0}
};


