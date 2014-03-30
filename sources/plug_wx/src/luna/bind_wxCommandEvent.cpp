#include <plug_common.h>

#include <luna/wrappers/wrapper_wxCommandEvent.h>

class luna_wrapper_wxCommandEvent {
public:
	typedef Luna< wxCommandEvent > luna_t;

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

		wxCommandEvent* self= (wxCommandEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxCommandEvent >::push(L,self,false);
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
		//wxCommandEvent* ptr= dynamic_cast< wxCommandEvent* >(Luna< wxObject >::check(L,1));
		wxCommandEvent* ptr= luna_caster< wxObject, wxCommandEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxCommandEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetClientData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetClientObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetExtraLong(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetInt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsChecked(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetClientData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClientObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetExtraLong(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetInt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clone(lua_State *L) {
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
	// wxCommandEvent::wxCommandEvent(int commandEventType = wxEVT_NULL, int id = 0)
	static wxCommandEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxCommandEvent::wxCommandEvent(int commandEventType = wxEVT_NULL, int id = 0) function, expected prototype:\nwxCommandEvent::wxCommandEvent(int commandEventType = wxEVT_NULL, int id = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int commandEventType=luatop>0 ? (int)lua_tointeger(L,1) : (int)wxEVT_NULL;
		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		return new wxCommandEvent(commandEventType, id);
	}

	// wxCommandEvent::wxCommandEvent(lua_Table * data, int commandEventType = wxEVT_NULL, int id = 0)
	static wxCommandEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxCommandEvent::wxCommandEvent(lua_Table * data, int commandEventType = wxEVT_NULL, int id = 0) function, expected prototype:\nwxCommandEvent::wxCommandEvent(lua_Table * data, int commandEventType = wxEVT_NULL, int id = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int commandEventType=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxEVT_NULL;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		return new wrapper_wxCommandEvent(L,NULL, commandEventType, id);
	}

	// Overload binder for wxCommandEvent::wxCommandEvent
	static wxCommandEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxCommandEvent, cannot match any of the overloads for function wxCommandEvent:\n  wxCommandEvent(int, int)\n  wxCommandEvent(lua_Table *, int, int)\n");
		return NULL;
	}


	// Function binds:
	// void * wxCommandEvent::GetClientData() const
	static int _bind_GetClientData(lua_State *L) {
		if (!_lg_typecheck_GetClientData(L)) {
			luaL_error(L, "luna typecheck failed in void * wxCommandEvent::GetClientData() const function, expected prototype:\nvoid * wxCommandEvent::GetClientData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCommandEvent* self=Luna< wxObject >::checkSubType< wxCommandEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void * wxCommandEvent::GetClientData() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->GetClientData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// wxClientData * wxCommandEvent::GetClientObject() const
	static int _bind_GetClientObject(lua_State *L) {
		if (!_lg_typecheck_GetClientObject(L)) {
			luaL_error(L, "luna typecheck failed in wxClientData * wxCommandEvent::GetClientObject() const function, expected prototype:\nwxClientData * wxCommandEvent::GetClientObject() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCommandEvent* self=Luna< wxObject >::checkSubType< wxCommandEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClientData * wxCommandEvent::GetClientObject() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClientData * lret = self->GetClientObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClientData >::push(L,lret,false);

		return 1;
	}

	// long wxCommandEvent::GetExtraLong() const
	static int _bind_GetExtraLong(lua_State *L) {
		if (!_lg_typecheck_GetExtraLong(L)) {
			luaL_error(L, "luna typecheck failed in long wxCommandEvent::GetExtraLong() const function, expected prototype:\nlong wxCommandEvent::GetExtraLong() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCommandEvent* self=Luna< wxObject >::checkSubType< wxCommandEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxCommandEvent::GetExtraLong() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetExtraLong();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxCommandEvent::GetInt() const
	static int _bind_GetInt(lua_State *L) {
		if (!_lg_typecheck_GetInt(L)) {
			luaL_error(L, "luna typecheck failed in int wxCommandEvent::GetInt() const function, expected prototype:\nint wxCommandEvent::GetInt() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCommandEvent* self=Luna< wxObject >::checkSubType< wxCommandEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxCommandEvent::GetInt() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetInt();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxCommandEvent::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luaL_error(L, "luna typecheck failed in int wxCommandEvent::GetSelection() const function, expected prototype:\nint wxCommandEvent::GetSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCommandEvent* self=Luna< wxObject >::checkSubType< wxCommandEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxCommandEvent::GetSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxCommandEvent::GetString() const
	static int _bind_GetString(lua_State *L) {
		if (!_lg_typecheck_GetString(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxCommandEvent::GetString() const function, expected prototype:\nwxString wxCommandEvent::GetString() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCommandEvent* self=Luna< wxObject >::checkSubType< wxCommandEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxCommandEvent::GetString() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetString();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxCommandEvent::IsChecked() const
	static int _bind_IsChecked(lua_State *L) {
		if (!_lg_typecheck_IsChecked(L)) {
			luaL_error(L, "luna typecheck failed in bool wxCommandEvent::IsChecked() const function, expected prototype:\nbool wxCommandEvent::IsChecked() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCommandEvent* self=Luna< wxObject >::checkSubType< wxCommandEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxCommandEvent::IsChecked() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsChecked();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxCommandEvent::IsSelection() const
	static int _bind_IsSelection(lua_State *L) {
		if (!_lg_typecheck_IsSelection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxCommandEvent::IsSelection() const function, expected prototype:\nbool wxCommandEvent::IsSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCommandEvent* self=Luna< wxObject >::checkSubType< wxCommandEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxCommandEvent::IsSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsSelection();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxCommandEvent::SetClientData(void * clientData)
	static int _bind_SetClientData(lua_State *L) {
		if (!_lg_typecheck_SetClientData(L)) {
			luaL_error(L, "luna typecheck failed in void wxCommandEvent::SetClientData(void * clientData) function, expected prototype:\nvoid wxCommandEvent::SetClientData(void * clientData)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* clientData=(Luna< void >::check(L,2));

		wxCommandEvent* self=Luna< wxObject >::checkSubType< wxCommandEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCommandEvent::SetClientData(void *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetClientData(clientData);

		return 0;
	}

	// void wxCommandEvent::SetClientObject(wxClientData * clientObject)
	static int _bind_SetClientObject(lua_State *L) {
		if (!_lg_typecheck_SetClientObject(L)) {
			luaL_error(L, "luna typecheck failed in void wxCommandEvent::SetClientObject(wxClientData * clientObject) function, expected prototype:\nvoid wxCommandEvent::SetClientObject(wxClientData * clientObject)\nClass arguments details:\narg 1 ID = 50457573\n\n%s",luna_dumpStack(L).c_str());
		}

		wxClientData* clientObject=(Luna< wxClientData >::check(L,2));

		wxCommandEvent* self=Luna< wxObject >::checkSubType< wxCommandEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCommandEvent::SetClientObject(wxClientData *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetClientObject(clientObject);

		return 0;
	}

	// void wxCommandEvent::SetExtraLong(long extraLong)
	static int _bind_SetExtraLong(lua_State *L) {
		if (!_lg_typecheck_SetExtraLong(L)) {
			luaL_error(L, "luna typecheck failed in void wxCommandEvent::SetExtraLong(long extraLong) function, expected prototype:\nvoid wxCommandEvent::SetExtraLong(long extraLong)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long extraLong=(long)lua_tonumber(L,2);

		wxCommandEvent* self=Luna< wxObject >::checkSubType< wxCommandEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCommandEvent::SetExtraLong(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetExtraLong(extraLong);

		return 0;
	}

	// void wxCommandEvent::SetInt(int intCommand)
	static int _bind_SetInt(lua_State *L) {
		if (!_lg_typecheck_SetInt(L)) {
			luaL_error(L, "luna typecheck failed in void wxCommandEvent::SetInt(int intCommand) function, expected prototype:\nvoid wxCommandEvent::SetInt(int intCommand)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int intCommand=(int)lua_tointeger(L,2);

		wxCommandEvent* self=Luna< wxObject >::checkSubType< wxCommandEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCommandEvent::SetInt(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetInt(intCommand);

		return 0;
	}

	// void wxCommandEvent::SetString(const wxString & string)
	static int _bind_SetString(lua_State *L) {
		if (!_lg_typecheck_SetString(L)) {
			luaL_error(L, "luna typecheck failed in void wxCommandEvent::SetString(const wxString & string) function, expected prototype:\nvoid wxCommandEvent::SetString(const wxString & string)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString string(lua_tostring(L,2),lua_objlen(L,2));

		wxCommandEvent* self=Luna< wxObject >::checkSubType< wxCommandEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCommandEvent::SetString(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetString(string);

		return 0;
	}

	// wxEvent * wxCommandEvent::Clone() const
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxCommandEvent::Clone() const function, expected prototype:\nwxEvent * wxCommandEvent::Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCommandEvent* self=Luna< wxObject >::checkSubType< wxCommandEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxCommandEvent::Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxCommandEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxCommandEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxCommandEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCommandEvent* self=Luna< wxObject >::checkSubType< wxCommandEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxCommandEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxCommandEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxCommandEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxCommandEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxCommandEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCommandEvent* self=Luna< wxObject >::checkSubType< wxCommandEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxCommandEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxCommandEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxCommandEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxCommandEvent::base_Clone() const function, expected prototype:\nwxEvent * wxCommandEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCommandEvent* self=Luna< wxObject >::checkSubType< wxCommandEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxCommandEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxCommandEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxCommandEvent* LunaTraits< wxCommandEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxCommandEvent::_bind_ctor(L);
}

void LunaTraits< wxCommandEvent >::_bind_dtor(wxCommandEvent* obj) {
	delete obj;
}

const char LunaTraits< wxCommandEvent >::className[] = "wxCommandEvent";
const char LunaTraits< wxCommandEvent >::fullName[] = "wxCommandEvent";
const char LunaTraits< wxCommandEvent >::moduleName[] = "wx";
const char* LunaTraits< wxCommandEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxCommandEvent >::hash = 40606061;
const int LunaTraits< wxCommandEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxCommandEvent >::methods[] = {
	{"GetClientData", &luna_wrapper_wxCommandEvent::_bind_GetClientData},
	{"GetClientObject", &luna_wrapper_wxCommandEvent::_bind_GetClientObject},
	{"GetExtraLong", &luna_wrapper_wxCommandEvent::_bind_GetExtraLong},
	{"GetInt", &luna_wrapper_wxCommandEvent::_bind_GetInt},
	{"GetSelection", &luna_wrapper_wxCommandEvent::_bind_GetSelection},
	{"GetString", &luna_wrapper_wxCommandEvent::_bind_GetString},
	{"IsChecked", &luna_wrapper_wxCommandEvent::_bind_IsChecked},
	{"IsSelection", &luna_wrapper_wxCommandEvent::_bind_IsSelection},
	{"SetClientData", &luna_wrapper_wxCommandEvent::_bind_SetClientData},
	{"SetClientObject", &luna_wrapper_wxCommandEvent::_bind_SetClientObject},
	{"SetExtraLong", &luna_wrapper_wxCommandEvent::_bind_SetExtraLong},
	{"SetInt", &luna_wrapper_wxCommandEvent::_bind_SetInt},
	{"SetString", &luna_wrapper_wxCommandEvent::_bind_SetString},
	{"Clone", &luna_wrapper_wxCommandEvent::_bind_Clone},
	{"base_GetClassInfo", &luna_wrapper_wxCommandEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxCommandEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxCommandEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxCommandEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxCommandEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxCommandEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxCommandEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxCommandEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxCommandEvent >::enumValues[] = {
	{0,0}
};


