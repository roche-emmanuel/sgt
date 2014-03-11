#include <plug_common.h>

#include <luna/wrappers/wrapper_wxToolTip.h>

class luna_wrapper_wxToolTip {
public:
	typedef Luna< wxToolTip > luna_t;

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

		wxToolTip* self= (wxToolTip*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxToolTip >::push(L,self,false);
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
		//wxToolTip* ptr= dynamic_cast< wxToolTip* >(Luna< wxObject >::check(L,1));
		wxToolTip* ptr= luna_caster< wxObject, wxToolTip >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxToolTip >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetTip(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetTip(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Enable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isboolean(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAutoPop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDelay(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMaxWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetReshow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxToolTip::wxToolTip(const wxString & tip)
	static wxToolTip* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxToolTip::wxToolTip(const wxString & tip) function, expected prototype:\nwxToolTip::wxToolTip(const wxString & tip)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString tip(lua_tostring(L,1),lua_objlen(L,1));

		return new wxToolTip(tip);
	}

	// wxToolTip::wxToolTip(lua_Table * data, const wxString & tip)
	static wxToolTip* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxToolTip::wxToolTip(lua_Table * data, const wxString & tip) function, expected prototype:\nwxToolTip::wxToolTip(lua_Table * data, const wxString & tip)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString tip(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_wxToolTip(L,NULL, tip);
	}

	// Overload binder for wxToolTip::wxToolTip
	static wxToolTip* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxToolTip, cannot match any of the overloads for function wxToolTip:\n  wxToolTip(const wxString &)\n  wxToolTip(lua_Table *, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// wxString wxToolTip::GetTip() const
	static int _bind_GetTip(lua_State *L) {
		if (!_lg_typecheck_GetTip(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxToolTip::GetTip() const function, expected prototype:\nwxString wxToolTip::GetTip() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolTip* self=Luna< wxObject >::checkSubType< wxToolTip >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxToolTip::GetTip() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetTip();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxWindow * wxToolTip::GetWindow() const
	static int _bind_GetWindow(lua_State *L) {
		if (!_lg_typecheck_GetWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxToolTip::GetWindow() const function, expected prototype:\nwxWindow * wxToolTip::GetWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolTip* self=Luna< wxObject >::checkSubType< wxToolTip >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxToolTip::GetWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// void wxToolTip::SetTip(const wxString & tip)
	static int _bind_SetTip(lua_State *L) {
		if (!_lg_typecheck_SetTip(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolTip::SetTip(const wxString & tip) function, expected prototype:\nvoid wxToolTip::SetTip(const wxString & tip)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString tip(lua_tostring(L,2),lua_objlen(L,2));

		wxToolTip* self=Luna< wxObject >::checkSubType< wxToolTip >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolTip::SetTip(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTip(tip);

		return 0;
	}

	// static void wxToolTip::Enable(bool flag)
	static int _bind_Enable(lua_State *L) {
		if (!_lg_typecheck_Enable(L)) {
			luaL_error(L, "luna typecheck failed in static void wxToolTip::Enable(bool flag) function, expected prototype:\nstatic void wxToolTip::Enable(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,1)==1);

		wxToolTip::Enable(flag);

		return 0;
	}

	// static void wxToolTip::SetAutoPop(long msecs)
	static int _bind_SetAutoPop(lua_State *L) {
		if (!_lg_typecheck_SetAutoPop(L)) {
			luaL_error(L, "luna typecheck failed in static void wxToolTip::SetAutoPop(long msecs) function, expected prototype:\nstatic void wxToolTip::SetAutoPop(long msecs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long msecs=(long)lua_tonumber(L,1);

		wxToolTip::SetAutoPop(msecs);

		return 0;
	}

	// static void wxToolTip::SetDelay(long msecs)
	static int _bind_SetDelay(lua_State *L) {
		if (!_lg_typecheck_SetDelay(L)) {
			luaL_error(L, "luna typecheck failed in static void wxToolTip::SetDelay(long msecs) function, expected prototype:\nstatic void wxToolTip::SetDelay(long msecs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long msecs=(long)lua_tonumber(L,1);

		wxToolTip::SetDelay(msecs);

		return 0;
	}

	// static void wxToolTip::SetMaxWidth(int width)
	static int _bind_SetMaxWidth(lua_State *L) {
		if (!_lg_typecheck_SetMaxWidth(L)) {
			luaL_error(L, "luna typecheck failed in static void wxToolTip::SetMaxWidth(int width) function, expected prototype:\nstatic void wxToolTip::SetMaxWidth(int width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,1);

		wxToolTip::SetMaxWidth(width);

		return 0;
	}

	// static void wxToolTip::SetReshow(long msecs)
	static int _bind_SetReshow(lua_State *L) {
		if (!_lg_typecheck_SetReshow(L)) {
			luaL_error(L, "luna typecheck failed in static void wxToolTip::SetReshow(long msecs) function, expected prototype:\nstatic void wxToolTip::SetReshow(long msecs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long msecs=(long)lua_tonumber(L,1);

		wxToolTip::SetReshow(msecs);

		return 0;
	}

	// wxClassInfo * wxToolTip::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxToolTip::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxToolTip::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolTip* self=Luna< wxObject >::checkSubType< wxToolTip >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxToolTip::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxToolTip::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxToolTip* LunaTraits< wxToolTip >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxToolTip::_bind_ctor(L);
}

void LunaTraits< wxToolTip >::_bind_dtor(wxToolTip* obj) {
	delete obj;
}

const char LunaTraits< wxToolTip >::className[] = "wxToolTip";
const char LunaTraits< wxToolTip >::fullName[] = "wxToolTip";
const char LunaTraits< wxToolTip >::moduleName[] = "wx";
const char* LunaTraits< wxToolTip >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxToolTip >::hash = 75730904;
const int LunaTraits< wxToolTip >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxToolTip >::methods[] = {
	{"GetTip", &luna_wrapper_wxToolTip::_bind_GetTip},
	{"GetWindow", &luna_wrapper_wxToolTip::_bind_GetWindow},
	{"SetTip", &luna_wrapper_wxToolTip::_bind_SetTip},
	{"Enable", &luna_wrapper_wxToolTip::_bind_Enable},
	{"SetAutoPop", &luna_wrapper_wxToolTip::_bind_SetAutoPop},
	{"SetDelay", &luna_wrapper_wxToolTip::_bind_SetDelay},
	{"SetMaxWidth", &luna_wrapper_wxToolTip::_bind_SetMaxWidth},
	{"SetReshow", &luna_wrapper_wxToolTip::_bind_SetReshow},
	{"base_GetClassInfo", &luna_wrapper_wxToolTip::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxToolTip::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxToolTip::_bind_asVoid},
	{"getTable", &luna_wrapper_wxToolTip::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxToolTip >::converters[] = {
	{"wxObject", &luna_wrapper_wxToolTip::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxToolTip >::enumValues[] = {
	{0,0}
};


