#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFileCtrlEvent.h>

class luna_wrapper_wxFileCtrlEvent {
public:
	typedef Luna< wxFileCtrlEvent > luna_t;

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

		wxFileCtrlEvent* self= (wxFileCtrlEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFileCtrlEvent >::push(L,self,false);
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
		//wxFileCtrlEvent* ptr= dynamic_cast< wxFileCtrlEvent* >(Luna< wxObject >::check(L,1));
		wxFileCtrlEvent* ptr= luna_caster< wxObject, wxFileCtrlEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileCtrlEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::check(L,3)) ) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetDirectory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFilterIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFiles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDirectory(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFilterIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
	// wxFileCtrlEvent::wxFileCtrlEvent(int type, wxObject * evtObject, int id)
	static wxFileCtrlEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxFileCtrlEvent::wxFileCtrlEvent(int type, wxObject * evtObject, int id) function, expected prototype:\nwxFileCtrlEvent::wxFileCtrlEvent(int type, wxObject * evtObject, int id)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int type=(int)lua_tointeger(L,1);
		wxObject* evtObject=(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);

		return new wxFileCtrlEvent(type, evtObject, id);
	}

	// wxFileCtrlEvent::wxFileCtrlEvent(lua_Table * data, int type, wxObject * evtObject, int id)
	static wxFileCtrlEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxFileCtrlEvent::wxFileCtrlEvent(lua_Table * data, int type, wxObject * evtObject, int id) function, expected prototype:\nwxFileCtrlEvent::wxFileCtrlEvent(lua_Table * data, int type, wxObject * evtObject, int id)\nClass arguments details:\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int type=(int)lua_tointeger(L,2);
		wxObject* evtObject=(Luna< wxObject >::check(L,3));
		int id=(int)lua_tointeger(L,4);

		return new wrapper_wxFileCtrlEvent(L,NULL, type, evtObject, id);
	}

	// Overload binder for wxFileCtrlEvent::wxFileCtrlEvent
	static wxFileCtrlEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxFileCtrlEvent, cannot match any of the overloads for function wxFileCtrlEvent:\n  wxFileCtrlEvent(int, wxObject *, int)\n  wxFileCtrlEvent(lua_Table *, int, wxObject *, int)\n");
		return NULL;
	}


	// Function binds:
	// wxString wxFileCtrlEvent::GetDirectory() const
	static int _bind_GetDirectory(lua_State *L) {
		if (!_lg_typecheck_GetDirectory(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileCtrlEvent::GetDirectory() const function, expected prototype:\nwxString wxFileCtrlEvent::GetDirectory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileCtrlEvent* self=Luna< wxObject >::checkSubType< wxFileCtrlEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileCtrlEvent::GetDirectory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetDirectory();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxFileCtrlEvent::GetFile() const
	static int _bind_GetFile(lua_State *L) {
		if (!_lg_typecheck_GetFile(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileCtrlEvent::GetFile() const function, expected prototype:\nwxString wxFileCtrlEvent::GetFile() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileCtrlEvent* self=Luna< wxObject >::checkSubType< wxFileCtrlEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileCtrlEvent::GetFile() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetFile();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxArrayString wxFileCtrlEvent::GetFiles() const
	static int _bind_GetFiles(lua_State *L) {
		if (!_lg_typecheck_GetFiles(L)) {
			luaL_error(L, "luna typecheck failed in wxArrayString wxFileCtrlEvent::GetFiles() const function, expected prototype:\nwxArrayString wxFileCtrlEvent::GetFiles() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileCtrlEvent* self=Luna< wxObject >::checkSubType< wxFileCtrlEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxArrayString wxFileCtrlEvent::GetFiles() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxArrayString stack_lret = self->GetFiles();
		wxArrayString* lret = new wxArrayString(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayString >::push(L,lret,true);

		return 1;
	}

	// int wxFileCtrlEvent::GetFilterIndex() const
	static int _bind_GetFilterIndex(lua_State *L) {
		if (!_lg_typecheck_GetFilterIndex(L)) {
			luaL_error(L, "luna typecheck failed in int wxFileCtrlEvent::GetFilterIndex() const function, expected prototype:\nint wxFileCtrlEvent::GetFilterIndex() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileCtrlEvent* self=Luna< wxObject >::checkSubType< wxFileCtrlEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFileCtrlEvent::GetFilterIndex() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetFilterIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxFileCtrlEvent::SetFiles(const wxArrayString & files)
	static int _bind_SetFiles(lua_State *L) {
		if (!_lg_typecheck_SetFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileCtrlEvent::SetFiles(const wxArrayString & files) function, expected prototype:\nvoid wxFileCtrlEvent::SetFiles(const wxArrayString & files)\nClass arguments details:\narg 1 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxArrayString* files_ptr=(Luna< wxArrayString >::check(L,2));
		if( !files_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg files in wxFileCtrlEvent::SetFiles function");
		}
		const wxArrayString & files=*files_ptr;

		wxFileCtrlEvent* self=Luna< wxObject >::checkSubType< wxFileCtrlEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileCtrlEvent::SetFiles(const wxArrayString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFiles(files);

		return 0;
	}

	// void wxFileCtrlEvent::SetDirectory(const wxString & directory)
	static int _bind_SetDirectory(lua_State *L) {
		if (!_lg_typecheck_SetDirectory(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileCtrlEvent::SetDirectory(const wxString & directory) function, expected prototype:\nvoid wxFileCtrlEvent::SetDirectory(const wxString & directory)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString directory(lua_tostring(L,2),lua_objlen(L,2));

		wxFileCtrlEvent* self=Luna< wxObject >::checkSubType< wxFileCtrlEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileCtrlEvent::SetDirectory(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDirectory(directory);

		return 0;
	}

	// void wxFileCtrlEvent::SetFilterIndex(int index)
	static int _bind_SetFilterIndex(lua_State *L) {
		if (!_lg_typecheck_SetFilterIndex(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileCtrlEvent::SetFilterIndex(int index) function, expected prototype:\nvoid wxFileCtrlEvent::SetFilterIndex(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		wxFileCtrlEvent* self=Luna< wxObject >::checkSubType< wxFileCtrlEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileCtrlEvent::SetFilterIndex(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFilterIndex(index);

		return 0;
	}

	// wxClassInfo * wxFileCtrlEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxFileCtrlEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxFileCtrlEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileCtrlEvent* self=Luna< wxObject >::checkSubType< wxFileCtrlEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxFileCtrlEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxFileCtrlEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxFileCtrlEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxFileCtrlEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxFileCtrlEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileCtrlEvent* self=Luna< wxObject >::checkSubType< wxFileCtrlEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxFileCtrlEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxFileCtrlEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxFileCtrlEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxFileCtrlEvent::base_Clone() const function, expected prototype:\nwxEvent * wxFileCtrlEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileCtrlEvent* self=Luna< wxObject >::checkSubType< wxFileCtrlEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxFileCtrlEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxFileCtrlEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxFileCtrlEvent* LunaTraits< wxFileCtrlEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFileCtrlEvent::_bind_ctor(L);
}

void LunaTraits< wxFileCtrlEvent >::_bind_dtor(wxFileCtrlEvent* obj) {
	delete obj;
}

const char LunaTraits< wxFileCtrlEvent >::className[] = "wxFileCtrlEvent";
const char LunaTraits< wxFileCtrlEvent >::fullName[] = "wxFileCtrlEvent";
const char LunaTraits< wxFileCtrlEvent >::moduleName[] = "wx";
const char* LunaTraits< wxFileCtrlEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxFileCtrlEvent >::hash = 82610722;
const int LunaTraits< wxFileCtrlEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFileCtrlEvent >::methods[] = {
	{"GetDirectory", &luna_wrapper_wxFileCtrlEvent::_bind_GetDirectory},
	{"GetFile", &luna_wrapper_wxFileCtrlEvent::_bind_GetFile},
	{"GetFiles", &luna_wrapper_wxFileCtrlEvent::_bind_GetFiles},
	{"GetFilterIndex", &luna_wrapper_wxFileCtrlEvent::_bind_GetFilterIndex},
	{"SetFiles", &luna_wrapper_wxFileCtrlEvent::_bind_SetFiles},
	{"SetDirectory", &luna_wrapper_wxFileCtrlEvent::_bind_SetDirectory},
	{"SetFilterIndex", &luna_wrapper_wxFileCtrlEvent::_bind_SetFilterIndex},
	{"base_GetClassInfo", &luna_wrapper_wxFileCtrlEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxFileCtrlEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxFileCtrlEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxFileCtrlEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFileCtrlEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxFileCtrlEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileCtrlEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxFileCtrlEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileCtrlEvent >::enumValues[] = {
	{0,0}
};


