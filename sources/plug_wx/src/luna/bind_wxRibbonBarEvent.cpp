#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRibbonBarEvent.h>

class luna_wrapper_wxRibbonBarEvent {
public:
	typedef Luna< wxRibbonBarEvent > luna_t;

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

		wxRibbonBarEvent* self= (wxRibbonBarEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRibbonBarEvent >::push(L,self,false);
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
		//wxRibbonBarEvent* ptr= dynamic_cast< wxRibbonBarEvent* >(Luna< wxObject >::check(L,1));
		wxRibbonBarEvent* ptr= luna_caster< wxObject, wxRibbonBarEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRibbonBarEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>3 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxRibbonPage >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< wxObject >::checkSubType< wxRibbonPage >(L,4)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetPage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetPage(lua_State *L) {
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
	// wxRibbonBarEvent::wxRibbonBarEvent(int command_type = wxEVT_NULL, int win_id = 0, wxRibbonPage * page = NULL)
	static wxRibbonBarEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonBarEvent::wxRibbonBarEvent(int command_type = wxEVT_NULL, int win_id = 0, wxRibbonPage * page = NULL) function, expected prototype:\nwxRibbonBarEvent::wxRibbonBarEvent(int command_type = wxEVT_NULL, int win_id = 0, wxRibbonPage * page = NULL)\nClass arguments details:\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int command_type=luatop>0 ? (int)lua_tointeger(L,1) : (int)wxEVT_NULL;
		int win_id=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		wxRibbonPage* page=luatop>2 ? (Luna< wxObject >::checkSubType< wxRibbonPage >(L,3)) : (wxRibbonPage*)NULL;

		return new wxRibbonBarEvent(command_type, win_id, page);
	}

	// wxRibbonBarEvent::wxRibbonBarEvent(lua_Table * data, int command_type = wxEVT_NULL, int win_id = 0, wxRibbonPage * page = NULL)
	static wxRibbonBarEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonBarEvent::wxRibbonBarEvent(lua_Table * data, int command_type = wxEVT_NULL, int win_id = 0, wxRibbonPage * page = NULL) function, expected prototype:\nwxRibbonBarEvent::wxRibbonBarEvent(lua_Table * data, int command_type = wxEVT_NULL, int win_id = 0, wxRibbonPage * page = NULL)\nClass arguments details:\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int command_type=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxEVT_NULL;
		int win_id=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		wxRibbonPage* page=luatop>3 ? (Luna< wxObject >::checkSubType< wxRibbonPage >(L,4)) : (wxRibbonPage*)NULL;

		return new wrapper_wxRibbonBarEvent(L,NULL, command_type, win_id, page);
	}

	// Overload binder for wxRibbonBarEvent::wxRibbonBarEvent
	static wxRibbonBarEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxRibbonBarEvent, cannot match any of the overloads for function wxRibbonBarEvent:\n  wxRibbonBarEvent(int, int, wxRibbonPage *)\n  wxRibbonBarEvent(lua_Table *, int, int, wxRibbonPage *)\n");
		return NULL;
	}


	// Function binds:
	// wxRibbonPage * wxRibbonBarEvent::GetPage()
	static int _bind_GetPage(lua_State *L) {
		if (!_lg_typecheck_GetPage(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonPage * wxRibbonBarEvent::GetPage() function, expected prototype:\nwxRibbonPage * wxRibbonBarEvent::GetPage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonBarEvent* self=Luna< wxObject >::checkSubType< wxRibbonBarEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRibbonPage * wxRibbonBarEvent::GetPage(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRibbonPage * lret = self->GetPage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonPage >::push(L,lret,false);

		return 1;
	}

	// void wxRibbonBarEvent::SetPage(wxRibbonPage * page)
	static int _bind_SetPage(lua_State *L) {
		if (!_lg_typecheck_SetPage(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonBarEvent::SetPage(wxRibbonPage * page) function, expected prototype:\nvoid wxRibbonBarEvent::SetPage(wxRibbonPage * page)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxRibbonPage* page=(Luna< wxObject >::checkSubType< wxRibbonPage >(L,2));

		wxRibbonBarEvent* self=Luna< wxObject >::checkSubType< wxRibbonBarEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonBarEvent::SetPage(wxRibbonPage *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPage(page);

		return 0;
	}

	// wxClassInfo * wxRibbonBarEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxRibbonBarEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxRibbonBarEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonBarEvent* self=Luna< wxObject >::checkSubType< wxRibbonBarEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxRibbonBarEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxRibbonBarEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxRibbonBarEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxRibbonBarEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxRibbonBarEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonBarEvent* self=Luna< wxObject >::checkSubType< wxRibbonBarEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxRibbonBarEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxRibbonBarEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxRibbonBarEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxRibbonBarEvent::base_Clone() const function, expected prototype:\nwxEvent * wxRibbonBarEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonBarEvent* self=Luna< wxObject >::checkSubType< wxRibbonBarEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxRibbonBarEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxRibbonBarEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxRibbonBarEvent* LunaTraits< wxRibbonBarEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRibbonBarEvent::_bind_ctor(L);
}

void LunaTraits< wxRibbonBarEvent >::_bind_dtor(wxRibbonBarEvent* obj) {
	delete obj;
}

const char LunaTraits< wxRibbonBarEvent >::className[] = "wxRibbonBarEvent";
const char LunaTraits< wxRibbonBarEvent >::fullName[] = "wxRibbonBarEvent";
const char LunaTraits< wxRibbonBarEvent >::moduleName[] = "wx";
const char* LunaTraits< wxRibbonBarEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxRibbonBarEvent >::hash = 20571283;
const int LunaTraits< wxRibbonBarEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRibbonBarEvent >::methods[] = {
	{"GetPage", &luna_wrapper_wxRibbonBarEvent::_bind_GetPage},
	{"SetPage", &luna_wrapper_wxRibbonBarEvent::_bind_SetPage},
	{"base_GetClassInfo", &luna_wrapper_wxRibbonBarEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxRibbonBarEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxRibbonBarEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxRibbonBarEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRibbonBarEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxRibbonBarEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxRibbonBarEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxRibbonBarEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRibbonBarEvent >::enumValues[] = {
	{0,0}
};


