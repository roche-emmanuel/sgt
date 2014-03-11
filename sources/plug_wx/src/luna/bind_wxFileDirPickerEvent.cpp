#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFileDirPickerEvent.h>

class luna_wrapper_wxFileDirPickerEvent {
public:
	typedef Luna< wxFileDirPickerEvent > luna_t;

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

		wxFileDirPickerEvent* self= (wxFileDirPickerEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFileDirPickerEvent >::push(L,self,false);
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
		//wxFileDirPickerEvent* ptr= dynamic_cast< wxFileDirPickerEvent* >(Luna< wxObject >::check(L,1));
		wxFileDirPickerEvent* ptr= luna_caster< wxObject, wxFileDirPickerEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileDirPickerEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::check(L,3)) ) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetPath(lua_State *L) {
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
	// wxFileDirPickerEvent::wxFileDirPickerEvent(int type, wxObject * generator, int id, const wxString & path)
	static wxFileDirPickerEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxFileDirPickerEvent::wxFileDirPickerEvent(int type, wxObject * generator, int id, const wxString & path) function, expected prototype:\nwxFileDirPickerEvent::wxFileDirPickerEvent(int type, wxObject * generator, int id, const wxString & path)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int type=(int)lua_tointeger(L,1);
		wxObject* generator=(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString path(lua_tostring(L,4),lua_objlen(L,4));

		return new wxFileDirPickerEvent(type, generator, id, path);
	}

	// wxFileDirPickerEvent::wxFileDirPickerEvent(lua_Table * data, int type, wxObject * generator, int id, const wxString & path)
	static wxFileDirPickerEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxFileDirPickerEvent::wxFileDirPickerEvent(lua_Table * data, int type, wxObject * generator, int id, const wxString & path) function, expected prototype:\nwxFileDirPickerEvent::wxFileDirPickerEvent(lua_Table * data, int type, wxObject * generator, int id, const wxString & path)\nClass arguments details:\narg 3 ID = 56813631\narg 5 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int type=(int)lua_tointeger(L,2);
		wxObject* generator=(Luna< wxObject >::check(L,3));
		int id=(int)lua_tointeger(L,4);
		wxString path(lua_tostring(L,5),lua_objlen(L,5));

		return new wrapper_wxFileDirPickerEvent(L,NULL, type, generator, id, path);
	}

	// Overload binder for wxFileDirPickerEvent::wxFileDirPickerEvent
	static wxFileDirPickerEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxFileDirPickerEvent, cannot match any of the overloads for function wxFileDirPickerEvent:\n  wxFileDirPickerEvent(int, wxObject *, int, const wxString &)\n  wxFileDirPickerEvent(lua_Table *, int, wxObject *, int, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// wxString wxFileDirPickerEvent::GetPath() const
	static int _bind_GetPath(lua_State *L) {
		if (!_lg_typecheck_GetPath(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileDirPickerEvent::GetPath() const function, expected prototype:\nwxString wxFileDirPickerEvent::GetPath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDirPickerEvent* self=Luna< wxObject >::checkSubType< wxFileDirPickerEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileDirPickerEvent::GetPath() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetPath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxFileDirPickerEvent::SetPath(const wxString & path)
	static int _bind_SetPath(lua_State *L) {
		if (!_lg_typecheck_SetPath(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDirPickerEvent::SetPath(const wxString & path) function, expected prototype:\nvoid wxFileDirPickerEvent::SetPath(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxFileDirPickerEvent* self=Luna< wxObject >::checkSubType< wxFileDirPickerEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDirPickerEvent::SetPath(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPath(path);

		return 0;
	}

	// wxClassInfo * wxFileDirPickerEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxFileDirPickerEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxFileDirPickerEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDirPickerEvent* self=Luna< wxObject >::checkSubType< wxFileDirPickerEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxFileDirPickerEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxFileDirPickerEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxFileDirPickerEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxFileDirPickerEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxFileDirPickerEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDirPickerEvent* self=Luna< wxObject >::checkSubType< wxFileDirPickerEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxFileDirPickerEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxFileDirPickerEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxFileDirPickerEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxFileDirPickerEvent::base_Clone() const function, expected prototype:\nwxEvent * wxFileDirPickerEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDirPickerEvent* self=Luna< wxObject >::checkSubType< wxFileDirPickerEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxFileDirPickerEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxFileDirPickerEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxFileDirPickerEvent* LunaTraits< wxFileDirPickerEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFileDirPickerEvent::_bind_ctor(L);
}

void LunaTraits< wxFileDirPickerEvent >::_bind_dtor(wxFileDirPickerEvent* obj) {
	delete obj;
}

const char LunaTraits< wxFileDirPickerEvent >::className[] = "wxFileDirPickerEvent";
const char LunaTraits< wxFileDirPickerEvent >::fullName[] = "wxFileDirPickerEvent";
const char LunaTraits< wxFileDirPickerEvent >::moduleName[] = "wx";
const char* LunaTraits< wxFileDirPickerEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxFileDirPickerEvent >::hash = 27421734;
const int LunaTraits< wxFileDirPickerEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFileDirPickerEvent >::methods[] = {
	{"GetPath", &luna_wrapper_wxFileDirPickerEvent::_bind_GetPath},
	{"SetPath", &luna_wrapper_wxFileDirPickerEvent::_bind_SetPath},
	{"base_GetClassInfo", &luna_wrapper_wxFileDirPickerEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxFileDirPickerEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxFileDirPickerEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxFileDirPickerEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFileDirPickerEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxFileDirPickerEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileDirPickerEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxFileDirPickerEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileDirPickerEvent >::enumValues[] = {
	{0,0}
};


