#include <plug_common.h>

#include <luna/wrappers/wrapper_wxWindowDestroyEvent.h>

class luna_wrapper_wxWindowDestroyEvent {
public:
	typedef Luna< wxWindowDestroyEvent > luna_t;

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

		wxWindowDestroyEvent* self= (wxWindowDestroyEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxWindowDestroyEvent >::push(L,self,false);
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
		//wxWindowDestroyEvent* ptr= dynamic_cast< wxWindowDestroyEvent* >(Luna< wxObject >::check(L,1));
		wxWindowDestroyEvent* ptr= luna_caster< wxObject, wxWindowDestroyEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxWindowDestroyEvent >::push(L,ptr,false);
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
	// wxWindowDestroyEvent::wxWindowDestroyEvent(wxWindow * win = NULL)
	static wxWindowDestroyEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxWindowDestroyEvent::wxWindowDestroyEvent(wxWindow * win = NULL) function, expected prototype:\nwxWindowDestroyEvent::wxWindowDestroyEvent(wxWindow * win = NULL)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=luatop>0 ? (Luna< wxObject >::checkSubType< wxWindow >(L,1)) : (wxWindow*)NULL;

		return new wxWindowDestroyEvent(win);
	}

	// wxWindowDestroyEvent::wxWindowDestroyEvent(lua_Table * data, wxWindow * win = NULL)
	static wxWindowDestroyEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxWindowDestroyEvent::wxWindowDestroyEvent(lua_Table * data, wxWindow * win = NULL) function, expected prototype:\nwxWindowDestroyEvent::wxWindowDestroyEvent(lua_Table * data, wxWindow * win = NULL)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=luatop>1 ? (Luna< wxObject >::checkSubType< wxWindow >(L,2)) : (wxWindow*)NULL;

		return new wrapper_wxWindowDestroyEvent(L,NULL, win);
	}

	// Overload binder for wxWindowDestroyEvent::wxWindowDestroyEvent
	static wxWindowDestroyEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxWindowDestroyEvent, cannot match any of the overloads for function wxWindowDestroyEvent:\n  wxWindowDestroyEvent(wxWindow *)\n  wxWindowDestroyEvent(lua_Table *, wxWindow *)\n");
		return NULL;
	}


	// Function binds:
	// wxWindow * wxWindowDestroyEvent::GetWindow() const
	static int _bind_GetWindow(lua_State *L) {
		if (!_lg_typecheck_GetWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxWindowDestroyEvent::GetWindow() const function, expected prototype:\nwxWindow * wxWindowDestroyEvent::GetWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindowDestroyEvent* self=Luna< wxObject >::checkSubType< wxWindowDestroyEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxWindowDestroyEvent::GetWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxWindowDestroyEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxWindowDestroyEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxWindowDestroyEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindowDestroyEvent* self=Luna< wxObject >::checkSubType< wxWindowDestroyEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxWindowDestroyEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxWindowDestroyEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxWindowDestroyEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxWindowDestroyEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxWindowDestroyEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindowDestroyEvent* self=Luna< wxObject >::checkSubType< wxWindowDestroyEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxWindowDestroyEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxWindowDestroyEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxWindowDestroyEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxWindowDestroyEvent::base_Clone() const function, expected prototype:\nwxEvent * wxWindowDestroyEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindowDestroyEvent* self=Luna< wxObject >::checkSubType< wxWindowDestroyEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxWindowDestroyEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxWindowDestroyEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxWindowDestroyEvent* LunaTraits< wxWindowDestroyEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxWindowDestroyEvent::_bind_ctor(L);
}

void LunaTraits< wxWindowDestroyEvent >::_bind_dtor(wxWindowDestroyEvent* obj) {
	delete obj;
}

const char LunaTraits< wxWindowDestroyEvent >::className[] = "wxWindowDestroyEvent";
const char LunaTraits< wxWindowDestroyEvent >::fullName[] = "wxWindowDestroyEvent";
const char LunaTraits< wxWindowDestroyEvent >::moduleName[] = "wx";
const char* LunaTraits< wxWindowDestroyEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxWindowDestroyEvent >::hash = 77136317;
const int LunaTraits< wxWindowDestroyEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxWindowDestroyEvent >::methods[] = {
	{"GetWindow", &luna_wrapper_wxWindowDestroyEvent::_bind_GetWindow},
	{"base_GetClassInfo", &luna_wrapper_wxWindowDestroyEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxWindowDestroyEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxWindowDestroyEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxWindowDestroyEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxWindowDestroyEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxWindowDestroyEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxWindowDestroyEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxWindowDestroyEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxWindowDestroyEvent >::enumValues[] = {
	{0,0}
};


