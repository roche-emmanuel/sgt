#include <plug_common.h>

#include <luna/wrappers/wrapper_wxURI.h>

class luna_wrapper_wxURI {
public:
	typedef Luna< wxURI > luna_t;

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

		wxURI* self= (wxURI*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxURI >::push(L,self,false);
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
		//wxURI* ptr= dynamic_cast< wxURI* >(Luna< wxObject >::check(L,1));
		wxURI* ptr= luna_caster< wxObject, wxURI >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxURI >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxURI >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxURI >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_BuildURI(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_BuildUnescapedURI(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFragment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHostType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPassword(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPort(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetQuery(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetScheme(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetServer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUser(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUserInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFragment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasPort(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasQuery(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasScheme(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasServer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsReference(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Resolve(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Unescape(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Constructor binds:
	// wxURI::wxURI()
	static wxURI* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxURI::wxURI() function, expected prototype:\nwxURI::wxURI()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxURI();
	}

	// wxURI::wxURI(const wxString & uri)
	static wxURI* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxURI::wxURI(const wxString & uri) function, expected prototype:\nwxURI::wxURI(const wxString & uri)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString uri(lua_tostring(L,1),lua_objlen(L,1));

		return new wxURI(uri);
	}

	// wxURI::wxURI(const wxURI & uri)
	static wxURI* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxURI::wxURI(const wxURI & uri) function, expected prototype:\nwxURI::wxURI(const wxURI & uri)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxURI* uri_ptr=(Luna< wxObject >::checkSubType< wxURI >(L,1));
		if( !uri_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg uri in wxURI::wxURI function");
		}
		const wxURI & uri=*uri_ptr;

		return new wxURI(uri);
	}

	// wxURI::wxURI(lua_Table * data)
	static wxURI* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxURI::wxURI(lua_Table * data) function, expected prototype:\nwxURI::wxURI(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxURI(L,NULL);
	}

	// wxURI::wxURI(lua_Table * data, const wxString & uri)
	static wxURI* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxURI::wxURI(lua_Table * data, const wxString & uri) function, expected prototype:\nwxURI::wxURI(lua_Table * data, const wxString & uri)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString uri(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_wxURI(L,NULL, uri);
	}

	// wxURI::wxURI(lua_Table * data, const wxURI & uri)
	static wxURI* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in wxURI::wxURI(lua_Table * data, const wxURI & uri) function, expected prototype:\nwxURI::wxURI(lua_Table * data, const wxURI & uri)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxURI* uri_ptr=(Luna< wxObject >::checkSubType< wxURI >(L,2));
		if( !uri_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg uri in wxURI::wxURI function");
		}
		const wxURI & uri=*uri_ptr;

		return new wrapper_wxURI(L,NULL, uri);
	}

	// Overload binder for wxURI::wxURI
	static wxURI* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function wxURI, cannot match any of the overloads for function wxURI:\n  wxURI()\n  wxURI(const wxString &)\n  wxURI(const wxURI &)\n  wxURI(lua_Table *)\n  wxURI(lua_Table *, const wxString &)\n  wxURI(lua_Table *, const wxURI &)\n");
		return NULL;
	}


	// Function binds:
	// wxString wxURI::BuildURI() const
	static int _bind_BuildURI(lua_State *L) {
		if (!_lg_typecheck_BuildURI(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxURI::BuildURI() const function, expected prototype:\nwxString wxURI::BuildURI() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxURI* self=Luna< wxObject >::checkSubType< wxURI >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxURI::BuildURI() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->BuildURI();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxURI::BuildUnescapedURI() const
	static int _bind_BuildUnescapedURI(lua_State *L) {
		if (!_lg_typecheck_BuildUnescapedURI(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxURI::BuildUnescapedURI() const function, expected prototype:\nwxString wxURI::BuildUnescapedURI() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxURI* self=Luna< wxObject >::checkSubType< wxURI >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxURI::BuildUnescapedURI() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->BuildUnescapedURI();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxURI::Create(const wxString & uri)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxURI::Create(const wxString & uri) function, expected prototype:\nbool wxURI::Create(const wxString & uri)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString uri(lua_tostring(L,2),lua_objlen(L,2));

		wxURI* self=Luna< wxObject >::checkSubType< wxURI >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxURI::Create(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(uri);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const wxString & wxURI::GetFragment() const
	static int _bind_GetFragment(lua_State *L) {
		if (!_lg_typecheck_GetFragment(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxURI::GetFragment() const function, expected prototype:\nconst wxString & wxURI::GetFragment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxURI* self=Luna< wxObject >::checkSubType< wxURI >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxURI::GetFragment() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetFragment();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxURIHostType wxURI::GetHostType() const
	static int _bind_GetHostType(lua_State *L) {
		if (!_lg_typecheck_GetHostType(L)) {
			luaL_error(L, "luna typecheck failed in wxURIHostType wxURI::GetHostType() const function, expected prototype:\nwxURIHostType wxURI::GetHostType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxURI* self=Luna< wxObject >::checkSubType< wxURI >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxURIHostType wxURI::GetHostType() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxURIHostType lret = self->GetHostType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxURI::GetPassword() const
	static int _bind_GetPassword(lua_State *L) {
		if (!_lg_typecheck_GetPassword(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxURI::GetPassword() const function, expected prototype:\nwxString wxURI::GetPassword() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxURI* self=Luna< wxObject >::checkSubType< wxURI >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxURI::GetPassword() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetPassword();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxURI::GetPath() const
	static int _bind_GetPath(lua_State *L) {
		if (!_lg_typecheck_GetPath(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxURI::GetPath() const function, expected prototype:\nconst wxString & wxURI::GetPath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxURI* self=Luna< wxObject >::checkSubType< wxURI >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxURI::GetPath() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetPath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxURI::GetPort() const
	static int _bind_GetPort(lua_State *L) {
		if (!_lg_typecheck_GetPort(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxURI::GetPort() const function, expected prototype:\nconst wxString & wxURI::GetPort() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxURI* self=Luna< wxObject >::checkSubType< wxURI >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxURI::GetPort() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetPort();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxURI::GetQuery() const
	static int _bind_GetQuery(lua_State *L) {
		if (!_lg_typecheck_GetQuery(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxURI::GetQuery() const function, expected prototype:\nconst wxString & wxURI::GetQuery() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxURI* self=Luna< wxObject >::checkSubType< wxURI >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxURI::GetQuery() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetQuery();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxURI::GetScheme() const
	static int _bind_GetScheme(lua_State *L) {
		if (!_lg_typecheck_GetScheme(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxURI::GetScheme() const function, expected prototype:\nconst wxString & wxURI::GetScheme() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxURI* self=Luna< wxObject >::checkSubType< wxURI >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxURI::GetScheme() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetScheme();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxURI::GetServer() const
	static int _bind_GetServer(lua_State *L) {
		if (!_lg_typecheck_GetServer(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxURI::GetServer() const function, expected prototype:\nconst wxString & wxURI::GetServer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxURI* self=Luna< wxObject >::checkSubType< wxURI >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxURI::GetServer() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetServer();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxURI::GetUser() const
	static int _bind_GetUser(lua_State *L) {
		if (!_lg_typecheck_GetUser(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxURI::GetUser() const function, expected prototype:\nwxString wxURI::GetUser() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxURI* self=Luna< wxObject >::checkSubType< wxURI >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxURI::GetUser() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetUser();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxURI::GetUserInfo() const
	static int _bind_GetUserInfo(lua_State *L) {
		if (!_lg_typecheck_GetUserInfo(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxURI::GetUserInfo() const function, expected prototype:\nconst wxString & wxURI::GetUserInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxURI* self=Luna< wxObject >::checkSubType< wxURI >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxURI::GetUserInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetUserInfo();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxURI::HasFragment() const
	static int _bind_HasFragment(lua_State *L) {
		if (!_lg_typecheck_HasFragment(L)) {
			luaL_error(L, "luna typecheck failed in bool wxURI::HasFragment() const function, expected prototype:\nbool wxURI::HasFragment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxURI* self=Luna< wxObject >::checkSubType< wxURI >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxURI::HasFragment() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasFragment();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxURI::HasPath() const
	static int _bind_HasPath(lua_State *L) {
		if (!_lg_typecheck_HasPath(L)) {
			luaL_error(L, "luna typecheck failed in bool wxURI::HasPath() const function, expected prototype:\nbool wxURI::HasPath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxURI* self=Luna< wxObject >::checkSubType< wxURI >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxURI::HasPath() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasPath();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxURI::HasPort() const
	static int _bind_HasPort(lua_State *L) {
		if (!_lg_typecheck_HasPort(L)) {
			luaL_error(L, "luna typecheck failed in bool wxURI::HasPort() const function, expected prototype:\nbool wxURI::HasPort() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxURI* self=Luna< wxObject >::checkSubType< wxURI >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxURI::HasPort() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasPort();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxURI::HasQuery() const
	static int _bind_HasQuery(lua_State *L) {
		if (!_lg_typecheck_HasQuery(L)) {
			luaL_error(L, "luna typecheck failed in bool wxURI::HasQuery() const function, expected prototype:\nbool wxURI::HasQuery() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxURI* self=Luna< wxObject >::checkSubType< wxURI >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxURI::HasQuery() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasQuery();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxURI::HasScheme() const
	static int _bind_HasScheme(lua_State *L) {
		if (!_lg_typecheck_HasScheme(L)) {
			luaL_error(L, "luna typecheck failed in bool wxURI::HasScheme() const function, expected prototype:\nbool wxURI::HasScheme() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxURI* self=Luna< wxObject >::checkSubType< wxURI >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxURI::HasScheme() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasScheme();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxURI::HasServer() const
	static int _bind_HasServer(lua_State *L) {
		if (!_lg_typecheck_HasServer(L)) {
			luaL_error(L, "luna typecheck failed in bool wxURI::HasServer() const function, expected prototype:\nbool wxURI::HasServer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxURI* self=Luna< wxObject >::checkSubType< wxURI >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxURI::HasServer() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasServer();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxURI::IsReference() const
	static int _bind_IsReference(lua_State *L) {
		if (!_lg_typecheck_IsReference(L)) {
			luaL_error(L, "luna typecheck failed in bool wxURI::IsReference() const function, expected prototype:\nbool wxURI::IsReference() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxURI* self=Luna< wxObject >::checkSubType< wxURI >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxURI::IsReference() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsReference();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxURI::Resolve(const wxURI & base, int flags = ::wxURI_STRICT)
	static int _bind_Resolve(lua_State *L) {
		if (!_lg_typecheck_Resolve(L)) {
			luaL_error(L, "luna typecheck failed in void wxURI::Resolve(const wxURI & base, int flags = ::wxURI_STRICT) function, expected prototype:\nvoid wxURI::Resolve(const wxURI & base, int flags = ::wxURI_STRICT)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxURI* base_ptr=(Luna< wxObject >::checkSubType< wxURI >(L,2));
		if( !base_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg base in wxURI::Resolve function");
		}
		const wxURI & base=*base_ptr;
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxURI_STRICT;

		wxURI* self=Luna< wxObject >::checkSubType< wxURI >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxURI::Resolve(const wxURI &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Resolve(base, flags);

		return 0;
	}

	// static wxString wxURI::Unescape(const wxString & uri)
	static int _bind_Unescape(lua_State *L) {
		if (!_lg_typecheck_Unescape(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxURI::Unescape(const wxString & uri) function, expected prototype:\nstatic wxString wxURI::Unescape(const wxString & uri)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString uri(lua_tostring(L,1),lua_objlen(L,1));

		wxString lret = wxURI::Unescape(uri);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxClassInfo * wxURI::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxURI::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxURI::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxURI* self=Luna< wxObject >::checkSubType< wxURI >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxURI::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxURI::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:
	// bool wxURI::operator==(const wxURI & uricomp) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxURI::operator==(const wxURI & uricomp) const function, expected prototype:\nbool wxURI::operator==(const wxURI & uricomp) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxURI* uricomp_ptr=(Luna< wxObject >::checkSubType< wxURI >(L,2));
		if( !uricomp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg uricomp in wxURI::operator== function");
		}
		const wxURI & uricomp=*uricomp_ptr;

		wxURI* self=Luna< wxObject >::checkSubType< wxURI >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxURI::operator==(const wxURI &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(uricomp);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxURI* LunaTraits< wxURI >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxURI::_bind_ctor(L);
}

void LunaTraits< wxURI >::_bind_dtor(wxURI* obj) {
	delete obj;
}

const char LunaTraits< wxURI >::className[] = "wxURI";
const char LunaTraits< wxURI >::fullName[] = "wxURI";
const char LunaTraits< wxURI >::moduleName[] = "wx";
const char* LunaTraits< wxURI >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxURI >::hash = 13558214;
const int LunaTraits< wxURI >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxURI >::methods[] = {
	{"BuildURI", &luna_wrapper_wxURI::_bind_BuildURI},
	{"BuildUnescapedURI", &luna_wrapper_wxURI::_bind_BuildUnescapedURI},
	{"Create", &luna_wrapper_wxURI::_bind_Create},
	{"GetFragment", &luna_wrapper_wxURI::_bind_GetFragment},
	{"GetHostType", &luna_wrapper_wxURI::_bind_GetHostType},
	{"GetPassword", &luna_wrapper_wxURI::_bind_GetPassword},
	{"GetPath", &luna_wrapper_wxURI::_bind_GetPath},
	{"GetPort", &luna_wrapper_wxURI::_bind_GetPort},
	{"GetQuery", &luna_wrapper_wxURI::_bind_GetQuery},
	{"GetScheme", &luna_wrapper_wxURI::_bind_GetScheme},
	{"GetServer", &luna_wrapper_wxURI::_bind_GetServer},
	{"GetUser", &luna_wrapper_wxURI::_bind_GetUser},
	{"GetUserInfo", &luna_wrapper_wxURI::_bind_GetUserInfo},
	{"HasFragment", &luna_wrapper_wxURI::_bind_HasFragment},
	{"HasPath", &luna_wrapper_wxURI::_bind_HasPath},
	{"HasPort", &luna_wrapper_wxURI::_bind_HasPort},
	{"HasQuery", &luna_wrapper_wxURI::_bind_HasQuery},
	{"HasScheme", &luna_wrapper_wxURI::_bind_HasScheme},
	{"HasServer", &luna_wrapper_wxURI::_bind_HasServer},
	{"IsReference", &luna_wrapper_wxURI::_bind_IsReference},
	{"Resolve", &luna_wrapper_wxURI::_bind_Resolve},
	{"Unescape", &luna_wrapper_wxURI::_bind_Unescape},
	{"base_GetClassInfo", &luna_wrapper_wxURI::_bind_base_GetClassInfo},
	{"__eq", &luna_wrapper_wxURI::_bind___eq},
	{"fromVoid", &luna_wrapper_wxURI::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxURI::_bind_asVoid},
	{"getTable", &luna_wrapper_wxURI::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxURI >::converters[] = {
	{"wxObject", &luna_wrapper_wxURI::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxURI >::enumValues[] = {
	{0,0}
};


