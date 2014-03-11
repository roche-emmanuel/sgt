#include <plug_common.h>

#include <luna/wrappers/wrapper_wxURL.h>

class luna_wrapper_wxURL {
public:
	typedef Luna< wxURL > luna_t;

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

		wxURL* self= (wxURL*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxURL >::push(L,self,false);
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
		//wxURL* ptr= dynamic_cast< wxURL* >(Luna< wxObject >::check(L,1));
		wxURL* ptr= luna_caster< wxObject, wxURL >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxURL >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetError(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetInputStream(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetProtocol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetProxy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetURL(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDefaultProxy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxURL::wxURL(const wxString & url = wxEmptyString)
	static wxURL* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxURL::wxURL(const wxString & url = wxEmptyString) function, expected prototype:\nwxURL::wxURL(const wxString & url = wxEmptyString)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString url(lua_tostring(L,1),lua_objlen(L,1));

		return new wxURL(url);
	}

	// wxURL::wxURL(lua_Table * data, const wxString & url = wxEmptyString)
	static wxURL* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxURL::wxURL(lua_Table * data, const wxString & url = wxEmptyString) function, expected prototype:\nwxURL::wxURL(lua_Table * data, const wxString & url = wxEmptyString)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString url(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_wxURL(L,NULL, url);
	}

	// Overload binder for wxURL::wxURL
	static wxURL* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxURL, cannot match any of the overloads for function wxURL:\n  wxURL(const wxString &)\n  wxURL(lua_Table *, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// wxURLError wxURL::GetError() const
	static int _bind_GetError(lua_State *L) {
		if (!_lg_typecheck_GetError(L)) {
			luaL_error(L, "luna typecheck failed in wxURLError wxURL::GetError() const function, expected prototype:\nwxURLError wxURL::GetError() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxURL* self=Luna< wxObject >::checkSubType< wxURL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxURLError wxURL::GetError() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxURLError lret = self->GetError();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxInputStream * wxURL::GetInputStream()
	static int _bind_GetInputStream(lua_State *L) {
		if (!_lg_typecheck_GetInputStream(L)) {
			luaL_error(L, "luna typecheck failed in wxInputStream * wxURL::GetInputStream() function, expected prototype:\nwxInputStream * wxURL::GetInputStream()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxURL* self=Luna< wxObject >::checkSubType< wxURL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxInputStream * wxURL::GetInputStream(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxInputStream * lret = self->GetInputStream();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxInputStream >::push(L,lret,false);

		return 1;
	}

	// wxProtocol & wxURL::GetProtocol()
	static int _bind_GetProtocol(lua_State *L) {
		if (!_lg_typecheck_GetProtocol(L)) {
			luaL_error(L, "luna typecheck failed in wxProtocol & wxURL::GetProtocol() function, expected prototype:\nwxProtocol & wxURL::GetProtocol()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxURL* self=Luna< wxObject >::checkSubType< wxURL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxProtocol & wxURL::GetProtocol(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxProtocol* lret = &self->GetProtocol();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxProtocol >::push(L,lret,false);

		return 1;
	}

	// bool wxURL::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxURL::IsOk() const function, expected prototype:\nbool wxURL::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxURL* self=Luna< wxObject >::checkSubType< wxURL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxURL::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxURL::SetProxy(const wxString & url_proxy)
	static int _bind_SetProxy(lua_State *L) {
		if (!_lg_typecheck_SetProxy(L)) {
			luaL_error(L, "luna typecheck failed in void wxURL::SetProxy(const wxString & url_proxy) function, expected prototype:\nvoid wxURL::SetProxy(const wxString & url_proxy)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString url_proxy(lua_tostring(L,2),lua_objlen(L,2));

		wxURL* self=Luna< wxObject >::checkSubType< wxURL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxURL::SetProxy(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetProxy(url_proxy);

		return 0;
	}

	// wxURLError wxURL::SetURL(const wxString & url)
	static int _bind_SetURL(lua_State *L) {
		if (!_lg_typecheck_SetURL(L)) {
			luaL_error(L, "luna typecheck failed in wxURLError wxURL::SetURL(const wxString & url) function, expected prototype:\nwxURLError wxURL::SetURL(const wxString & url)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString url(lua_tostring(L,2),lua_objlen(L,2));

		wxURL* self=Luna< wxObject >::checkSubType< wxURL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxURLError wxURL::SetURL(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxURLError lret = self->SetURL(url);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void wxURL::SetDefaultProxy(const wxString & url_proxy)
	static int _bind_SetDefaultProxy(lua_State *L) {
		if (!_lg_typecheck_SetDefaultProxy(L)) {
			luaL_error(L, "luna typecheck failed in static void wxURL::SetDefaultProxy(const wxString & url_proxy) function, expected prototype:\nstatic void wxURL::SetDefaultProxy(const wxString & url_proxy)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString url_proxy(lua_tostring(L,1),lua_objlen(L,1));

		wxURL::SetDefaultProxy(url_proxy);

		return 0;
	}

	// wxClassInfo * wxURL::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxURL::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxURL::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxURL* self=Luna< wxObject >::checkSubType< wxURL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxURL::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxURL::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxURL* LunaTraits< wxURL >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxURL::_bind_ctor(L);
}

void LunaTraits< wxURL >::_bind_dtor(wxURL* obj) {
	delete obj;
}

const char LunaTraits< wxURL >::className[] = "wxURL";
const char LunaTraits< wxURL >::fullName[] = "wxURL";
const char LunaTraits< wxURL >::moduleName[] = "wx";
const char* LunaTraits< wxURL >::parents[] = {"wx.wxURI", 0};
const int LunaTraits< wxURL >::hash = 13558217;
const int LunaTraits< wxURL >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxURL >::methods[] = {
	{"GetError", &luna_wrapper_wxURL::_bind_GetError},
	{"GetInputStream", &luna_wrapper_wxURL::_bind_GetInputStream},
	{"GetProtocol", &luna_wrapper_wxURL::_bind_GetProtocol},
	{"IsOk", &luna_wrapper_wxURL::_bind_IsOk},
	{"SetProxy", &luna_wrapper_wxURL::_bind_SetProxy},
	{"SetURL", &luna_wrapper_wxURL::_bind_SetURL},
	{"SetDefaultProxy", &luna_wrapper_wxURL::_bind_SetDefaultProxy},
	{"base_GetClassInfo", &luna_wrapper_wxURL::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxURL::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxURL::_bind_asVoid},
	{"getTable", &luna_wrapper_wxURL::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxURL >::converters[] = {
	{"wxObject", &luna_wrapper_wxURL::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxURL >::enumValues[] = {
	{0,0}
};


