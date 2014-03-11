#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFindReplaceData.h>

class luna_wrapper_wxFindReplaceData {
public:
	typedef Luna< wxFindReplaceData > luna_t;

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

		wxFindReplaceData* self= (wxFindReplaceData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFindReplaceData >::push(L,self,false);
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
		//wxFindReplaceData* ptr= dynamic_cast< wxFindReplaceData* >(Luna< wxObject >::check(L,1));
		wxFindReplaceData* ptr= luna_caster< wxObject, wxFindReplaceData >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFindReplaceData >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetFindString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetReplaceString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFindString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetReplaceString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFindReplaceData::wxFindReplaceData(unsigned int flags = 0)
	static wxFindReplaceData* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxFindReplaceData::wxFindReplaceData(unsigned int flags = 0) function, expected prototype:\nwxFindReplaceData::wxFindReplaceData(unsigned int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int flags=luatop>0 ? (unsigned int)lua_tointeger(L,1) : (unsigned int)0;

		return new wxFindReplaceData(flags);
	}

	// wxFindReplaceData::wxFindReplaceData(lua_Table * data, unsigned int flags = 0)
	static wxFindReplaceData* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxFindReplaceData::wxFindReplaceData(lua_Table * data, unsigned int flags = 0) function, expected prototype:\nwxFindReplaceData::wxFindReplaceData(lua_Table * data, unsigned int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int flags=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)0;

		return new wrapper_wxFindReplaceData(L,NULL, flags);
	}

	// Overload binder for wxFindReplaceData::wxFindReplaceData
	static wxFindReplaceData* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxFindReplaceData, cannot match any of the overloads for function wxFindReplaceData:\n  wxFindReplaceData(unsigned int)\n  wxFindReplaceData(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// const wxString & wxFindReplaceData::GetFindString()
	static int _bind_GetFindString(lua_State *L) {
		if (!_lg_typecheck_GetFindString(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxFindReplaceData::GetFindString() function, expected prototype:\nconst wxString & wxFindReplaceData::GetFindString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFindReplaceData* self=Luna< wxObject >::checkSubType< wxFindReplaceData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxFindReplaceData::GetFindString(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetFindString();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxFindReplaceData::GetFlags() const
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luaL_error(L, "luna typecheck failed in int wxFindReplaceData::GetFlags() const function, expected prototype:\nint wxFindReplaceData::GetFlags() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFindReplaceData* self=Luna< wxObject >::checkSubType< wxFindReplaceData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFindReplaceData::GetFlags() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxFindReplaceData::GetReplaceString()
	static int _bind_GetReplaceString(lua_State *L) {
		if (!_lg_typecheck_GetReplaceString(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxFindReplaceData::GetReplaceString() function, expected prototype:\nconst wxString & wxFindReplaceData::GetReplaceString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFindReplaceData* self=Luna< wxObject >::checkSubType< wxFindReplaceData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxFindReplaceData::GetReplaceString(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetReplaceString();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxFindReplaceData::SetFindString(const wxString & str)
	static int _bind_SetFindString(lua_State *L) {
		if (!_lg_typecheck_SetFindString(L)) {
			luaL_error(L, "luna typecheck failed in void wxFindReplaceData::SetFindString(const wxString & str) function, expected prototype:\nvoid wxFindReplaceData::SetFindString(const wxString & str)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString str(lua_tostring(L,2),lua_objlen(L,2));

		wxFindReplaceData* self=Luna< wxObject >::checkSubType< wxFindReplaceData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFindReplaceData::SetFindString(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFindString(str);

		return 0;
	}

	// void wxFindReplaceData::SetFlags(unsigned int flags)
	static int _bind_SetFlags(lua_State *L) {
		if (!_lg_typecheck_SetFlags(L)) {
			luaL_error(L, "luna typecheck failed in void wxFindReplaceData::SetFlags(unsigned int flags) function, expected prototype:\nvoid wxFindReplaceData::SetFlags(unsigned int flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int flags=(unsigned int)lua_tointeger(L,2);

		wxFindReplaceData* self=Luna< wxObject >::checkSubType< wxFindReplaceData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFindReplaceData::SetFlags(unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFlags(flags);

		return 0;
	}

	// void wxFindReplaceData::SetReplaceString(const wxString & str)
	static int _bind_SetReplaceString(lua_State *L) {
		if (!_lg_typecheck_SetReplaceString(L)) {
			luaL_error(L, "luna typecheck failed in void wxFindReplaceData::SetReplaceString(const wxString & str) function, expected prototype:\nvoid wxFindReplaceData::SetReplaceString(const wxString & str)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString str(lua_tostring(L,2),lua_objlen(L,2));

		wxFindReplaceData* self=Luna< wxObject >::checkSubType< wxFindReplaceData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFindReplaceData::SetReplaceString(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetReplaceString(str);

		return 0;
	}

	// wxClassInfo * wxFindReplaceData::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxFindReplaceData::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxFindReplaceData::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFindReplaceData* self=Luna< wxObject >::checkSubType< wxFindReplaceData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxFindReplaceData::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxFindReplaceData::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxFindReplaceData* LunaTraits< wxFindReplaceData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFindReplaceData::_bind_ctor(L);
}

void LunaTraits< wxFindReplaceData >::_bind_dtor(wxFindReplaceData* obj) {
	delete obj;
}

const char LunaTraits< wxFindReplaceData >::className[] = "wxFindReplaceData";
const char LunaTraits< wxFindReplaceData >::fullName[] = "wxFindReplaceData";
const char LunaTraits< wxFindReplaceData >::moduleName[] = "wx";
const char* LunaTraits< wxFindReplaceData >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxFindReplaceData >::hash = 19074490;
const int LunaTraits< wxFindReplaceData >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFindReplaceData >::methods[] = {
	{"GetFindString", &luna_wrapper_wxFindReplaceData::_bind_GetFindString},
	{"GetFlags", &luna_wrapper_wxFindReplaceData::_bind_GetFlags},
	{"GetReplaceString", &luna_wrapper_wxFindReplaceData::_bind_GetReplaceString},
	{"SetFindString", &luna_wrapper_wxFindReplaceData::_bind_SetFindString},
	{"SetFlags", &luna_wrapper_wxFindReplaceData::_bind_SetFlags},
	{"SetReplaceString", &luna_wrapper_wxFindReplaceData::_bind_SetReplaceString},
	{"base_GetClassInfo", &luna_wrapper_wxFindReplaceData::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxFindReplaceData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFindReplaceData::_bind_asVoid},
	{"getTable", &luna_wrapper_wxFindReplaceData::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxFindReplaceData >::converters[] = {
	{"wxObject", &luna_wrapper_wxFindReplaceData::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFindReplaceData >::enumValues[] = {
	{0,0}
};


