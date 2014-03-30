#include <plug_common.h>

#include <luna/wrappers/wrapper_wxChildFocusEvent.h>

class luna_wrapper_wxChildFocusEvent {
public:
	typedef Luna< wxChildFocusEvent > luna_t;

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

		wxChildFocusEvent* self= (wxChildFocusEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxChildFocusEvent >::push(L,self,false);
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
		//wxChildFocusEvent* ptr= dynamic_cast< wxChildFocusEvent* >(Luna< wxObject >::check(L,1));
		wxChildFocusEvent* ptr= luna_caster< wxObject, wxChildFocusEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxChildFocusEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>0 && (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetWindow(lua_State *L) {
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
	// wxChildFocusEvent::wxChildFocusEvent(wxWindow * win = NULL)
	static wxChildFocusEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxChildFocusEvent::wxChildFocusEvent(wxWindow * win = NULL) function, expected prototype:\nwxChildFocusEvent::wxChildFocusEvent(wxWindow * win = NULL)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=luatop>0 ? (Luna< wxObject >::checkSubType< wxWindow >(L,1)) : (wxWindow*)NULL;

		return new wxChildFocusEvent(win);
	}

	// wxChildFocusEvent::wxChildFocusEvent(lua_Table * data, wxWindow * win = NULL)
	static wxChildFocusEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxChildFocusEvent::wxChildFocusEvent(lua_Table * data, wxWindow * win = NULL) function, expected prototype:\nwxChildFocusEvent::wxChildFocusEvent(lua_Table * data, wxWindow * win = NULL)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=luatop>1 ? (Luna< wxObject >::checkSubType< wxWindow >(L,2)) : (wxWindow*)NULL;

		return new wrapper_wxChildFocusEvent(L,NULL, win);
	}

	// Overload binder for wxChildFocusEvent::wxChildFocusEvent
	static wxChildFocusEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxChildFocusEvent, cannot match any of the overloads for function wxChildFocusEvent:\n  wxChildFocusEvent(wxWindow *)\n  wxChildFocusEvent(lua_Table *, wxWindow *)\n");
		return NULL;
	}


	// Function binds:
	// wxWindow * wxChildFocusEvent::GetWindow() const
	static int _bind_GetWindow(lua_State *L) {
		if (!_lg_typecheck_GetWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxChildFocusEvent::GetWindow() const function, expected prototype:\nwxWindow * wxChildFocusEvent::GetWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChildFocusEvent* self=Luna< wxObject >::checkSubType< wxChildFocusEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxChildFocusEvent::GetWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxChildFocusEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxChildFocusEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxChildFocusEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChildFocusEvent* self=Luna< wxObject >::checkSubType< wxChildFocusEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxChildFocusEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxChildFocusEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxChildFocusEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxChildFocusEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxChildFocusEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChildFocusEvent* self=Luna< wxObject >::checkSubType< wxChildFocusEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxChildFocusEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxChildFocusEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxChildFocusEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxChildFocusEvent::base_Clone() const function, expected prototype:\nwxEvent * wxChildFocusEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChildFocusEvent* self=Luna< wxObject >::checkSubType< wxChildFocusEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxChildFocusEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxChildFocusEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxChildFocusEvent* LunaTraits< wxChildFocusEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxChildFocusEvent::_bind_ctor(L);
}

void LunaTraits< wxChildFocusEvent >::_bind_dtor(wxChildFocusEvent* obj) {
	delete obj;
}

const char LunaTraits< wxChildFocusEvent >::className[] = "wxChildFocusEvent";
const char LunaTraits< wxChildFocusEvent >::fullName[] = "wxChildFocusEvent";
const char LunaTraits< wxChildFocusEvent >::moduleName[] = "wx";
const char* LunaTraits< wxChildFocusEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxChildFocusEvent >::hash = 89457684;
const int LunaTraits< wxChildFocusEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxChildFocusEvent >::methods[] = {
	{"GetWindow", &luna_wrapper_wxChildFocusEvent::_bind_GetWindow},
	{"base_GetClassInfo", &luna_wrapper_wxChildFocusEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxChildFocusEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxChildFocusEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxChildFocusEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxChildFocusEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxChildFocusEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxChildFocusEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxChildFocusEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxChildFocusEvent >::enumValues[] = {
	{0,0}
};


