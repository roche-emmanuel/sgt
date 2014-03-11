#include <plug_common.h>

#include <luna/wrappers/wrapper_wxServer.h>

class luna_wrapper_wxServer {
public:
	typedef Luna< wxServer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxServer* self=(Luna< wxServer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxServer,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74355515) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxServer*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxServer* rhs =(Luna< wxServer >::check(L,2));
		wxServer* self=(Luna< wxServer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		wxServer* self= (wxServer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxServer >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74355515) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxServer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		wxServer* self=(Luna< wxServer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxServer");
		
		return luna_dynamicCast(L,converters,"wxServer",name);
	}


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

	inline static bool _lg_typecheck_base_OnAcceptConnection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxServer::wxServer()
	static wxServer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxServer::wxServer() function, expected prototype:\nwxServer::wxServer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxServer();
	}

	// wxServer::wxServer(lua_Table * data)
	static wxServer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxServer::wxServer(lua_Table * data) function, expected prototype:\nwxServer::wxServer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxServer(L,NULL);
	}

	// Overload binder for wxServer::wxServer
	static wxServer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxServer, cannot match any of the overloads for function wxServer:\n  wxServer()\n  wxServer(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool wxServer::Create(const wxString & service)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxServer::Create(const wxString & service) function, expected prototype:\nbool wxServer::Create(const wxString & service)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString service(lua_tostring(L,2),lua_objlen(L,2));

		wxServer* self=(Luna< wxServer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxServer::Create(const wxString &). Got : '%s'\n%s",typeid(Luna< wxServer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(service);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxConnectionBase * wxServer::OnAcceptConnection(const wxString & topic)
	static int _bind_OnAcceptConnection(lua_State *L) {
		if (!_lg_typecheck_OnAcceptConnection(L)) {
			luaL_error(L, "luna typecheck failed in wxConnectionBase * wxServer::OnAcceptConnection(const wxString & topic) function, expected prototype:\nwxConnectionBase * wxServer::OnAcceptConnection(const wxString & topic)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString topic(lua_tostring(L,2),lua_objlen(L,2));

		wxServer* self=(Luna< wxServer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxConnectionBase * wxServer::OnAcceptConnection(const wxString &). Got : '%s'\n%s",typeid(Luna< wxServer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxConnectionBase * lret = self->OnAcceptConnection(topic);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxConnectionBase >::push(L,lret,false);

		return 1;
	}

	// wxConnectionBase * wxServer::base_OnAcceptConnection(const wxString & topic)
	static int _bind_base_OnAcceptConnection(lua_State *L) {
		if (!_lg_typecheck_base_OnAcceptConnection(L)) {
			luaL_error(L, "luna typecheck failed in wxConnectionBase * wxServer::base_OnAcceptConnection(const wxString & topic) function, expected prototype:\nwxConnectionBase * wxServer::base_OnAcceptConnection(const wxString & topic)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString topic(lua_tostring(L,2),lua_objlen(L,2));

		wxServer* self=(Luna< wxServer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxConnectionBase * wxServer::base_OnAcceptConnection(const wxString &). Got : '%s'\n%s",typeid(Luna< wxServer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxConnectionBase * lret = self->wxServer::OnAcceptConnection(topic);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxConnectionBase >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxServer* LunaTraits< wxServer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxServer::_bind_ctor(L);
}

void LunaTraits< wxServer >::_bind_dtor(wxServer* obj) {
	delete obj;
}

const char LunaTraits< wxServer >::className[] = "wxServer";
const char LunaTraits< wxServer >::fullName[] = "wxServer";
const char LunaTraits< wxServer >::moduleName[] = "wx";
const char* LunaTraits< wxServer >::parents[] = {0};
const int LunaTraits< wxServer >::hash = 74355515;
const int LunaTraits< wxServer >::uniqueIDs[] = {74355515,0};

luna_RegType LunaTraits< wxServer >::methods[] = {
	{"Create", &luna_wrapper_wxServer::_bind_Create},
	{"OnAcceptConnection", &luna_wrapper_wxServer::_bind_OnAcceptConnection},
	{"base_OnAcceptConnection", &luna_wrapper_wxServer::_bind_base_OnAcceptConnection},
	{"dynCast", &luna_wrapper_wxServer::_bind_dynCast},
	{"__eq", &luna_wrapper_wxServer::_bind___eq},
	{"fromVoid", &luna_wrapper_wxServer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxServer::_bind_asVoid},
	{"getTable", &luna_wrapper_wxServer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxServer >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxServer >::enumValues[] = {
	{0,0}
};


