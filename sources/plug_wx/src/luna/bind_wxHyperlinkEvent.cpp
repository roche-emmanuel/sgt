#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHyperlinkEvent.h>

class luna_wrapper_wxHyperlinkEvent {
public:
	typedef Luna< wxHyperlinkEvent > luna_t;

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

		wxHyperlinkEvent* self= (wxHyperlinkEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxHyperlinkEvent >::push(L,self,false);
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
		//wxHyperlinkEvent* ptr= dynamic_cast< wxHyperlinkEvent* >(Luna< wxObject >::check(L,1));
		wxHyperlinkEvent* ptr= luna_caster< wxObject, wxHyperlinkEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHyperlinkEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetURL(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetURL(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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
	// wxHyperlinkEvent::wxHyperlinkEvent(wxObject * generator, int id, const wxString & url)
	static wxHyperlinkEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxHyperlinkEvent::wxHyperlinkEvent(wxObject * generator, int id, const wxString & url) function, expected prototype:\nwxHyperlinkEvent::wxHyperlinkEvent(wxObject * generator, int id, const wxString & url)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* generator=(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString url(lua_tostring(L,3),lua_objlen(L,3));

		return new wxHyperlinkEvent(generator, id, url);
	}

	// wxHyperlinkEvent::wxHyperlinkEvent(lua_Table * data, wxObject * generator, int id, const wxString & url)
	static wxHyperlinkEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxHyperlinkEvent::wxHyperlinkEvent(lua_Table * data, wxObject * generator, int id, const wxString & url) function, expected prototype:\nwxHyperlinkEvent::wxHyperlinkEvent(lua_Table * data, wxObject * generator, int id, const wxString & url)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* generator=(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString url(lua_tostring(L,4),lua_objlen(L,4));

		return new wrapper_wxHyperlinkEvent(L,NULL, generator, id, url);
	}

	// Overload binder for wxHyperlinkEvent::wxHyperlinkEvent
	static wxHyperlinkEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxHyperlinkEvent, cannot match any of the overloads for function wxHyperlinkEvent:\n  wxHyperlinkEvent(wxObject *, int, const wxString &)\n  wxHyperlinkEvent(lua_Table *, wxObject *, int, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// wxString wxHyperlinkEvent::GetURL() const
	static int _bind_GetURL(lua_State *L) {
		if (!_lg_typecheck_GetURL(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxHyperlinkEvent::GetURL() const function, expected prototype:\nwxString wxHyperlinkEvent::GetURL() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkEvent* self=Luna< wxObject >::checkSubType< wxHyperlinkEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxHyperlinkEvent::GetURL() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetURL();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxHyperlinkEvent::SetURL(const wxString & url)
	static int _bind_SetURL(lua_State *L) {
		if (!_lg_typecheck_SetURL(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkEvent::SetURL(const wxString & url) function, expected prototype:\nvoid wxHyperlinkEvent::SetURL(const wxString & url)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString url(lua_tostring(L,2),lua_objlen(L,2));

		wxHyperlinkEvent* self=Luna< wxObject >::checkSubType< wxHyperlinkEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkEvent::SetURL(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetURL(url);

		return 0;
	}

	// wxClassInfo * wxHyperlinkEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHyperlinkEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHyperlinkEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkEvent* self=Luna< wxObject >::checkSubType< wxHyperlinkEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHyperlinkEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxHyperlinkEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxHyperlinkEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxHyperlinkEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxHyperlinkEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkEvent* self=Luna< wxObject >::checkSubType< wxHyperlinkEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxHyperlinkEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxHyperlinkEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxHyperlinkEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxHyperlinkEvent::base_Clone() const function, expected prototype:\nwxEvent * wxHyperlinkEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkEvent* self=Luna< wxObject >::checkSubType< wxHyperlinkEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxHyperlinkEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxHyperlinkEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxHyperlinkEvent* LunaTraits< wxHyperlinkEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHyperlinkEvent::_bind_ctor(L);
}

void LunaTraits< wxHyperlinkEvent >::_bind_dtor(wxHyperlinkEvent* obj) {
	delete obj;
}

const char LunaTraits< wxHyperlinkEvent >::className[] = "wxHyperlinkEvent";
const char LunaTraits< wxHyperlinkEvent >::fullName[] = "wxHyperlinkEvent";
const char LunaTraits< wxHyperlinkEvent >::moduleName[] = "wx";
const char* LunaTraits< wxHyperlinkEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxHyperlinkEvent >::hash = 46548077;
const int LunaTraits< wxHyperlinkEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHyperlinkEvent >::methods[] = {
	{"GetURL", &luna_wrapper_wxHyperlinkEvent::_bind_GetURL},
	{"SetURL", &luna_wrapper_wxHyperlinkEvent::_bind_SetURL},
	{"base_GetClassInfo", &luna_wrapper_wxHyperlinkEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxHyperlinkEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxHyperlinkEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxHyperlinkEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxHyperlinkEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxHyperlinkEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHyperlinkEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxHyperlinkEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHyperlinkEvent >::enumValues[] = {
	{0,0}
};


