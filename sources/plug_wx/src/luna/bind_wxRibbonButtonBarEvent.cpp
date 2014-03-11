#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRibbonButtonBarEvent.h>

class luna_wrapper_wxRibbonButtonBarEvent {
public:
	typedef Luna< wxRibbonButtonBarEvent > luna_t;

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

		wxRibbonButtonBarEvent* self= (wxRibbonButtonBarEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRibbonButtonBarEvent >::push(L,self,false);
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
		//wxRibbonButtonBarEvent* ptr= dynamic_cast< wxRibbonButtonBarEvent* >(Luna< wxObject >::check(L,1));
		wxRibbonButtonBarEvent* ptr= luna_caster< wxObject, wxRibbonButtonBarEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRibbonButtonBarEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>3 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxRibbonButtonBar >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< wxObject >::checkSubType< wxRibbonButtonBar >(L,4)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetBar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PopupMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
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
	// wxRibbonButtonBarEvent::wxRibbonButtonBarEvent(int command_type = wxEVT_NULL, int win_id = 0, wxRibbonButtonBar * bar = NULL)
	static wxRibbonButtonBarEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonButtonBarEvent::wxRibbonButtonBarEvent(int command_type = wxEVT_NULL, int win_id = 0, wxRibbonButtonBar * bar = NULL) function, expected prototype:\nwxRibbonButtonBarEvent::wxRibbonButtonBarEvent(int command_type = wxEVT_NULL, int win_id = 0, wxRibbonButtonBar * bar = NULL)\nClass arguments details:\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int command_type=luatop>0 ? (int)lua_tointeger(L,1) : (int)wxEVT_NULL;
		int win_id=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		wxRibbonButtonBar* bar=luatop>2 ? (Luna< wxObject >::checkSubType< wxRibbonButtonBar >(L,3)) : (wxRibbonButtonBar*)NULL;

		return new wxRibbonButtonBarEvent(command_type, win_id, bar);
	}

	// wxRibbonButtonBarEvent::wxRibbonButtonBarEvent(lua_Table * data, int command_type = wxEVT_NULL, int win_id = 0, wxRibbonButtonBar * bar = NULL)
	static wxRibbonButtonBarEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonButtonBarEvent::wxRibbonButtonBarEvent(lua_Table * data, int command_type = wxEVT_NULL, int win_id = 0, wxRibbonButtonBar * bar = NULL) function, expected prototype:\nwxRibbonButtonBarEvent::wxRibbonButtonBarEvent(lua_Table * data, int command_type = wxEVT_NULL, int win_id = 0, wxRibbonButtonBar * bar = NULL)\nClass arguments details:\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int command_type=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxEVT_NULL;
		int win_id=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		wxRibbonButtonBar* bar=luatop>3 ? (Luna< wxObject >::checkSubType< wxRibbonButtonBar >(L,4)) : (wxRibbonButtonBar*)NULL;

		return new wrapper_wxRibbonButtonBarEvent(L,NULL, command_type, win_id, bar);
	}

	// Overload binder for wxRibbonButtonBarEvent::wxRibbonButtonBarEvent
	static wxRibbonButtonBarEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxRibbonButtonBarEvent, cannot match any of the overloads for function wxRibbonButtonBarEvent:\n  wxRibbonButtonBarEvent(int, int, wxRibbonButtonBar *)\n  wxRibbonButtonBarEvent(lua_Table *, int, int, wxRibbonButtonBar *)\n");
		return NULL;
	}


	// Function binds:
	// wxRibbonButtonBar * wxRibbonButtonBarEvent::GetBar()
	static int _bind_GetBar(lua_State *L) {
		if (!_lg_typecheck_GetBar(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonButtonBar * wxRibbonButtonBarEvent::GetBar() function, expected prototype:\nwxRibbonButtonBar * wxRibbonButtonBarEvent::GetBar()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonButtonBarEvent* self=Luna< wxObject >::checkSubType< wxRibbonButtonBarEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRibbonButtonBar * wxRibbonButtonBarEvent::GetBar(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRibbonButtonBar * lret = self->GetBar();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonButtonBar >::push(L,lret,false);

		return 1;
	}

	// void wxRibbonButtonBarEvent::SetBar(wxRibbonButtonBar * bar)
	static int _bind_SetBar(lua_State *L) {
		if (!_lg_typecheck_SetBar(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonButtonBarEvent::SetBar(wxRibbonButtonBar * bar) function, expected prototype:\nvoid wxRibbonButtonBarEvent::SetBar(wxRibbonButtonBar * bar)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxRibbonButtonBar* bar=(Luna< wxObject >::checkSubType< wxRibbonButtonBar >(L,2));

		wxRibbonButtonBarEvent* self=Luna< wxObject >::checkSubType< wxRibbonButtonBarEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonButtonBarEvent::SetBar(wxRibbonButtonBar *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBar(bar);

		return 0;
	}

	// bool wxRibbonButtonBarEvent::PopupMenu(wxMenu * menu)
	static int _bind_PopupMenu(lua_State *L) {
		if (!_lg_typecheck_PopupMenu(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonButtonBarEvent::PopupMenu(wxMenu * menu) function, expected prototype:\nbool wxRibbonButtonBarEvent::PopupMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,2));

		wxRibbonButtonBarEvent* self=Luna< wxObject >::checkSubType< wxRibbonButtonBarEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonButtonBarEvent::PopupMenu(wxMenu *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PopupMenu(menu);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxRibbonButtonBarEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxRibbonButtonBarEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxRibbonButtonBarEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonButtonBarEvent* self=Luna< wxObject >::checkSubType< wxRibbonButtonBarEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxRibbonButtonBarEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxRibbonButtonBarEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxRibbonButtonBarEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxRibbonButtonBarEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxRibbonButtonBarEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonButtonBarEvent* self=Luna< wxObject >::checkSubType< wxRibbonButtonBarEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxRibbonButtonBarEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxRibbonButtonBarEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxRibbonButtonBarEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxRibbonButtonBarEvent::base_Clone() const function, expected prototype:\nwxEvent * wxRibbonButtonBarEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonButtonBarEvent* self=Luna< wxObject >::checkSubType< wxRibbonButtonBarEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxRibbonButtonBarEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxRibbonButtonBarEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxRibbonButtonBarEvent* LunaTraits< wxRibbonButtonBarEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRibbonButtonBarEvent::_bind_ctor(L);
}

void LunaTraits< wxRibbonButtonBarEvent >::_bind_dtor(wxRibbonButtonBarEvent* obj) {
	delete obj;
}

const char LunaTraits< wxRibbonButtonBarEvent >::className[] = "wxRibbonButtonBarEvent";
const char LunaTraits< wxRibbonButtonBarEvent >::fullName[] = "wxRibbonButtonBarEvent";
const char LunaTraits< wxRibbonButtonBarEvent >::moduleName[] = "wx";
const char* LunaTraits< wxRibbonButtonBarEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxRibbonButtonBarEvent >::hash = 28960676;
const int LunaTraits< wxRibbonButtonBarEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRibbonButtonBarEvent >::methods[] = {
	{"GetBar", &luna_wrapper_wxRibbonButtonBarEvent::_bind_GetBar},
	{"SetBar", &luna_wrapper_wxRibbonButtonBarEvent::_bind_SetBar},
	{"PopupMenu", &luna_wrapper_wxRibbonButtonBarEvent::_bind_PopupMenu},
	{"base_GetClassInfo", &luna_wrapper_wxRibbonButtonBarEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxRibbonButtonBarEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxRibbonButtonBarEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxRibbonButtonBarEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRibbonButtonBarEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxRibbonButtonBarEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxRibbonButtonBarEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxRibbonButtonBarEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRibbonButtonBarEvent >::enumValues[] = {
	{0,0}
};


