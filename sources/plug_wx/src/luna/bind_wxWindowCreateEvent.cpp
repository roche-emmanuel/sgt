#include <plug_common.h>

#include <luna/wrappers/wrapper_wxWindowCreateEvent.h>

class luna_wrapper_wxWindowCreateEvent {
public:
	typedef Luna< wxWindowCreateEvent > luna_t;

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

		wxWindowCreateEvent* self= (wxWindowCreateEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxWindowCreateEvent >::push(L,self,false);
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
		//wxWindowCreateEvent* ptr= dynamic_cast< wxWindowCreateEvent* >(Luna< wxObject >::check(L,1));
		wxWindowCreateEvent* ptr= luna_caster< wxObject, wxWindowCreateEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxWindowCreateEvent >::push(L,ptr,false);
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
	// wxWindowCreateEvent::wxWindowCreateEvent(wxWindow * win = NULL)
	static wxWindowCreateEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxWindowCreateEvent::wxWindowCreateEvent(wxWindow * win = NULL) function, expected prototype:\nwxWindowCreateEvent::wxWindowCreateEvent(wxWindow * win = NULL)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=luatop>0 ? (Luna< wxObject >::checkSubType< wxWindow >(L,1)) : (wxWindow*)NULL;

		return new wxWindowCreateEvent(win);
	}

	// wxWindowCreateEvent::wxWindowCreateEvent(lua_Table * data, wxWindow * win = NULL)
	static wxWindowCreateEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxWindowCreateEvent::wxWindowCreateEvent(lua_Table * data, wxWindow * win = NULL) function, expected prototype:\nwxWindowCreateEvent::wxWindowCreateEvent(lua_Table * data, wxWindow * win = NULL)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=luatop>1 ? (Luna< wxObject >::checkSubType< wxWindow >(L,2)) : (wxWindow*)NULL;

		return new wrapper_wxWindowCreateEvent(L,NULL, win);
	}

	// Overload binder for wxWindowCreateEvent::wxWindowCreateEvent
	static wxWindowCreateEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxWindowCreateEvent, cannot match any of the overloads for function wxWindowCreateEvent:\n  wxWindowCreateEvent(wxWindow *)\n  wxWindowCreateEvent(lua_Table *, wxWindow *)\n");
		return NULL;
	}


	// Function binds:
	// wxWindow * wxWindowCreateEvent::GetWindow() const
	static int _bind_GetWindow(lua_State *L) {
		if (!_lg_typecheck_GetWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxWindowCreateEvent::GetWindow() const function, expected prototype:\nwxWindow * wxWindowCreateEvent::GetWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindowCreateEvent* self=Luna< wxObject >::checkSubType< wxWindowCreateEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxWindowCreateEvent::GetWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxWindowCreateEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxWindowCreateEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxWindowCreateEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindowCreateEvent* self=Luna< wxObject >::checkSubType< wxWindowCreateEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxWindowCreateEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxWindowCreateEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxWindowCreateEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxWindowCreateEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxWindowCreateEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindowCreateEvent* self=Luna< wxObject >::checkSubType< wxWindowCreateEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxWindowCreateEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxWindowCreateEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxWindowCreateEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxWindowCreateEvent::base_Clone() const function, expected prototype:\nwxEvent * wxWindowCreateEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindowCreateEvent* self=Luna< wxObject >::checkSubType< wxWindowCreateEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxWindowCreateEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxWindowCreateEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxWindowCreateEvent* LunaTraits< wxWindowCreateEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxWindowCreateEvent::_bind_ctor(L);
}

void LunaTraits< wxWindowCreateEvent >::_bind_dtor(wxWindowCreateEvent* obj) {
	delete obj;
}

const char LunaTraits< wxWindowCreateEvent >::className[] = "wxWindowCreateEvent";
const char LunaTraits< wxWindowCreateEvent >::fullName[] = "wxWindowCreateEvent";
const char LunaTraits< wxWindowCreateEvent >::moduleName[] = "wx";
const char* LunaTraits< wxWindowCreateEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxWindowCreateEvent >::hash = 53447837;
const int LunaTraits< wxWindowCreateEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxWindowCreateEvent >::methods[] = {
	{"GetWindow", &luna_wrapper_wxWindowCreateEvent::_bind_GetWindow},
	{"base_GetClassInfo", &luna_wrapper_wxWindowCreateEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxWindowCreateEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxWindowCreateEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxWindowCreateEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxWindowCreateEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxWindowCreateEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxWindowCreateEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxWindowCreateEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxWindowCreateEvent >::enumValues[] = {
	{0,0}
};


