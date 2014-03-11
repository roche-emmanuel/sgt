#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTCPServer.h>

class luna_wrapper_wxTCPServer {
public:
	typedef Luna< wxTCPServer > luna_t;

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

		wxTCPServer* self= (wxTCPServer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTCPServer >::push(L,self,false);
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
		//wxTCPServer* ptr= dynamic_cast< wxTCPServer* >(Luna< wxObject >::check(L,1));
		wxTCPServer* ptr= luna_caster< wxObject, wxTCPServer >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTCPServer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnAcceptConnection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Create(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnAcceptConnection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTCPServer::wxTCPServer()
	static wxTCPServer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxTCPServer::wxTCPServer() function, expected prototype:\nwxTCPServer::wxTCPServer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxTCPServer();
	}

	// wxTCPServer::wxTCPServer(lua_Table * data)
	static wxTCPServer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxTCPServer::wxTCPServer(lua_Table * data) function, expected prototype:\nwxTCPServer::wxTCPServer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxTCPServer(L,NULL);
	}

	// Overload binder for wxTCPServer::wxTCPServer
	static wxTCPServer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxTCPServer, cannot match any of the overloads for function wxTCPServer:\n  wxTCPServer()\n  wxTCPServer(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool wxTCPServer::Create(const wxString & service)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTCPServer::Create(const wxString & service) function, expected prototype:\nbool wxTCPServer::Create(const wxString & service)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString service(lua_tostring(L,2),lua_objlen(L,2));

		wxTCPServer* self=Luna< wxObject >::checkSubType< wxTCPServer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTCPServer::Create(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(service);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxConnectionBase * wxTCPServer::OnAcceptConnection(const wxString & topic)
	static int _bind_OnAcceptConnection(lua_State *L) {
		if (!_lg_typecheck_OnAcceptConnection(L)) {
			luaL_error(L, "luna typecheck failed in wxConnectionBase * wxTCPServer::OnAcceptConnection(const wxString & topic) function, expected prototype:\nwxConnectionBase * wxTCPServer::OnAcceptConnection(const wxString & topic)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString topic(lua_tostring(L,2),lua_objlen(L,2));

		wxTCPServer* self=Luna< wxObject >::checkSubType< wxTCPServer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxConnectionBase * wxTCPServer::OnAcceptConnection(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxConnectionBase * lret = self->OnAcceptConnection(topic);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxConnectionBase >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxTCPServer::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxTCPServer::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxTCPServer::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTCPServer* self=Luna< wxObject >::checkSubType< wxTCPServer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxTCPServer::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxTCPServer::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxTCPServer::base_Create(const wxString & service)
	static int _bind_base_Create(lua_State *L) {
		if (!_lg_typecheck_base_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTCPServer::base_Create(const wxString & service) function, expected prototype:\nbool wxTCPServer::base_Create(const wxString & service)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString service(lua_tostring(L,2),lua_objlen(L,2));

		wxTCPServer* self=Luna< wxObject >::checkSubType< wxTCPServer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTCPServer::base_Create(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTCPServer::Create(service);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxConnectionBase * wxTCPServer::base_OnAcceptConnection(const wxString & topic)
	static int _bind_base_OnAcceptConnection(lua_State *L) {
		if (!_lg_typecheck_base_OnAcceptConnection(L)) {
			luaL_error(L, "luna typecheck failed in wxConnectionBase * wxTCPServer::base_OnAcceptConnection(const wxString & topic) function, expected prototype:\nwxConnectionBase * wxTCPServer::base_OnAcceptConnection(const wxString & topic)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString topic(lua_tostring(L,2),lua_objlen(L,2));

		wxTCPServer* self=Luna< wxObject >::checkSubType< wxTCPServer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxConnectionBase * wxTCPServer::base_OnAcceptConnection(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxConnectionBase * lret = self->wxTCPServer::OnAcceptConnection(topic);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxConnectionBase >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxTCPServer* LunaTraits< wxTCPServer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTCPServer::_bind_ctor(L);
}

void LunaTraits< wxTCPServer >::_bind_dtor(wxTCPServer* obj) {
	delete obj;
}

const char LunaTraits< wxTCPServer >::className[] = "wxTCPServer";
const char LunaTraits< wxTCPServer >::fullName[] = "wxTCPServer";
const char LunaTraits< wxTCPServer >::moduleName[] = "wx";
const char* LunaTraits< wxTCPServer >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxTCPServer >::hash = 10086250;
const int LunaTraits< wxTCPServer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxTCPServer >::methods[] = {
	{"Create", &luna_wrapper_wxTCPServer::_bind_Create},
	{"OnAcceptConnection", &luna_wrapper_wxTCPServer::_bind_OnAcceptConnection},
	{"base_GetClassInfo", &luna_wrapper_wxTCPServer::_bind_base_GetClassInfo},
	{"base_Create", &luna_wrapper_wxTCPServer::_bind_base_Create},
	{"base_OnAcceptConnection", &luna_wrapper_wxTCPServer::_bind_base_OnAcceptConnection},
	{"fromVoid", &luna_wrapper_wxTCPServer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTCPServer::_bind_asVoid},
	{"getTable", &luna_wrapper_wxTCPServer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxTCPServer >::converters[] = {
	{"wxObject", &luna_wrapper_wxTCPServer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTCPServer >::enumValues[] = {
	{0,0}
};


