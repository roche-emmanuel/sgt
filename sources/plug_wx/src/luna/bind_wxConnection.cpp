#include <plug_common.h>

#include <luna/wrappers/wrapper_wxConnection.h>

class luna_wrapper_wxConnection {
public:
	typedef Luna< wxConnection > luna_t;

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

		wxConnection* self= (wxConnection*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxConnection >::push(L,self,false);
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
		//wxConnection* ptr= dynamic_cast< wxConnection* >(Luna< wxObject >::check(L,1));
		wxConnection* ptr= luna_caster< wxObject, wxConnection >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxConnection >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Advise_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Advise_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Advise_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Disconnect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Execute_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Execute_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Execute_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnAdvise(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnDisconnect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnExec(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnPoke(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnRequest(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnStartAdvise(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnStopAdvise(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Poke_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Poke_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Poke_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Request(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StartAdvise(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StopAdvise(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsTextFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTextFromData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OnAdvise(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnDisconnect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OnExec(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnPoke(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnRequest(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnStartAdvise(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnStopAdvise(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxConnection::wxConnection()
	static wxConnection* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxConnection::wxConnection() function, expected prototype:\nwxConnection::wxConnection()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxConnection();
	}

	// wxConnection::wxConnection(void * buffer, size_t size)
	static wxConnection* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxConnection::wxConnection(void * buffer, size_t size) function, expected prototype:\nwxConnection::wxConnection(void * buffer, size_t size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* buffer=(Luna< void >::check(L,1));
		size_t size=(size_t)lua_tointeger(L,2);

		return new wxConnection(buffer, size);
	}

	// wxConnection::wxConnection(lua_Table * data)
	static wxConnection* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxConnection::wxConnection(lua_Table * data) function, expected prototype:\nwxConnection::wxConnection(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxConnection(L,NULL);
	}

	// wxConnection::wxConnection(lua_Table * data, void * buffer, size_t size)
	static wxConnection* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxConnection::wxConnection(lua_Table * data, void * buffer, size_t size) function, expected prototype:\nwxConnection::wxConnection(lua_Table * data, void * buffer, size_t size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* buffer=(Luna< void >::check(L,2));
		size_t size=(size_t)lua_tointeger(L,3);

		return new wrapper_wxConnection(L,NULL, buffer, size);
	}

	// Overload binder for wxConnection::wxConnection
	static wxConnection* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxConnection, cannot match any of the overloads for function wxConnection:\n  wxConnection()\n  wxConnection(void *, size_t)\n  wxConnection(lua_Table *)\n  wxConnection(lua_Table *, void *, size_t)\n");
		return NULL;
	}


	// Function binds:
	// bool wxConnection::Advise(const wxString & item, const void * data, size_t size, wxIPCFormat format = ::wxIPC_PRIVATE)
	static int _bind_Advise_overload_1(lua_State *L) {
		if (!_lg_typecheck_Advise_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnection::Advise(const wxString & item, const void * data, size_t size, wxIPCFormat format = ::wxIPC_PRIVATE) function, expected prototype:\nbool wxConnection::Advise(const wxString & item, const void * data, size_t size, wxIPCFormat format = ::wxIPC_PRIVATE)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		const void* data=(Luna< void >::check(L,3));
		size_t size=(size_t)lua_tointeger(L,4);
		wxIPCFormat format=luatop>4 ? (wxIPCFormat)lua_tointeger(L,5) : (wxIPCFormat)::wxIPC_PRIVATE;

		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnection::Advise(const wxString &, const void *, size_t, wxIPCFormat). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Advise(item, data, size, format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConnection::Advise(const wxString & item, const char * data)
	static int _bind_Advise_overload_2(lua_State *L) {
		if (!_lg_typecheck_Advise_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnection::Advise(const wxString & item, const char * data) function, expected prototype:\nbool wxConnection::Advise(const wxString & item, const char * data)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		const char * data=(const char *)lua_tostring(L,3);

		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnection::Advise(const wxString &, const char *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Advise(item, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConnection::Advise(const wxString & item, const wxString data)
	static int _bind_Advise_overload_3(lua_State *L) {
		if (!_lg_typecheck_Advise_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnection::Advise(const wxString & item, const wxString data) function, expected prototype:\nbool wxConnection::Advise(const wxString & item, const wxString data)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		wxString data(lua_tostring(L,3),lua_objlen(L,3));

		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnection::Advise(const wxString &, const wxString). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Advise(item, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxConnection::Advise
	static int _bind_Advise(lua_State *L) {
		if (_lg_typecheck_Advise_overload_1(L)) return _bind_Advise_overload_1(L);
		if (_lg_typecheck_Advise_overload_2(L)) return _bind_Advise_overload_2(L);
		if (_lg_typecheck_Advise_overload_3(L)) return _bind_Advise_overload_3(L);

		luaL_error(L, "error in function Advise, cannot match any of the overloads for function Advise:\n  Advise(const wxString &, const void *, size_t, wxIPCFormat)\n  Advise(const wxString &, const char *)\n  Advise(const wxString &, const wxString)\n");
		return 0;
	}

	// bool wxConnection::Disconnect()
	static int _bind_Disconnect(lua_State *L) {
		if (!_lg_typecheck_Disconnect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnection::Disconnect() function, expected prototype:\nbool wxConnection::Disconnect()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnection::Disconnect(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Disconnect();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConnection::Execute(const void * data, size_t size, wxIPCFormat format = ::wxIPC_PRIVATE)
	static int _bind_Execute_overload_1(lua_State *L) {
		if (!_lg_typecheck_Execute_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnection::Execute(const void * data, size_t size, wxIPCFormat format = ::wxIPC_PRIVATE) function, expected prototype:\nbool wxConnection::Execute(const void * data, size_t size, wxIPCFormat format = ::wxIPC_PRIVATE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const void* data=(Luna< void >::check(L,2));
		size_t size=(size_t)lua_tointeger(L,3);
		wxIPCFormat format=luatop>3 ? (wxIPCFormat)lua_tointeger(L,4) : (wxIPCFormat)::wxIPC_PRIVATE;

		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnection::Execute(const void *, size_t, wxIPCFormat). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Execute(data, size, format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConnection::Execute(const char * data)
	static int _bind_Execute_overload_2(lua_State *L) {
		if (!_lg_typecheck_Execute_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnection::Execute(const char * data) function, expected prototype:\nbool wxConnection::Execute(const char * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * data=(const char *)lua_tostring(L,2);

		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnection::Execute(const char *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Execute(data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConnection::Execute(const wxString data)
	static int _bind_Execute_overload_3(lua_State *L) {
		if (!_lg_typecheck_Execute_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnection::Execute(const wxString data) function, expected prototype:\nbool wxConnection::Execute(const wxString data)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString data(lua_tostring(L,2),lua_objlen(L,2));

		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnection::Execute(const wxString). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Execute(data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxConnection::Execute
	static int _bind_Execute(lua_State *L) {
		if (_lg_typecheck_Execute_overload_1(L)) return _bind_Execute_overload_1(L);
		if (_lg_typecheck_Execute_overload_2(L)) return _bind_Execute_overload_2(L);
		if (_lg_typecheck_Execute_overload_3(L)) return _bind_Execute_overload_3(L);

		luaL_error(L, "error in function Execute, cannot match any of the overloads for function Execute:\n  Execute(const void *, size_t, wxIPCFormat)\n  Execute(const char *)\n  Execute(const wxString)\n");
		return 0;
	}

	// bool wxConnection::OnAdvise(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format)
	static int _bind_OnAdvise(lua_State *L) {
		if (!_lg_typecheck_OnAdvise(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnection::OnAdvise(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format) function, expected prototype:\nbool wxConnection::OnAdvise(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString topic(lua_tostring(L,2),lua_objlen(L,2));
		wxString item(lua_tostring(L,3),lua_objlen(L,3));
		const void* data=(Luna< void >::check(L,4));
		size_t size=(size_t)lua_tointeger(L,5);
		wxIPCFormat format=(wxIPCFormat)lua_tointeger(L,6);

		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnection::OnAdvise(const wxString &, const wxString &, const void *, size_t, wxIPCFormat). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnAdvise(topic, item, data, size, format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConnection::OnDisconnect()
	static int _bind_OnDisconnect(lua_State *L) {
		if (!_lg_typecheck_OnDisconnect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnection::OnDisconnect() function, expected prototype:\nbool wxConnection::OnDisconnect()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnection::OnDisconnect(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnDisconnect();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConnection::OnExec(const wxString & topic, const wxString & data)
	static int _bind_OnExec(lua_State *L) {
		if (!_lg_typecheck_OnExec(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnection::OnExec(const wxString & topic, const wxString & data) function, expected prototype:\nbool wxConnection::OnExec(const wxString & topic, const wxString & data)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString topic(lua_tostring(L,2),lua_objlen(L,2));
		wxString data(lua_tostring(L,3),lua_objlen(L,3));

		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnection::OnExec(const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnExec(topic, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConnection::OnPoke(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format)
	static int _bind_OnPoke(lua_State *L) {
		if (!_lg_typecheck_OnPoke(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnection::OnPoke(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format) function, expected prototype:\nbool wxConnection::OnPoke(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString topic(lua_tostring(L,2),lua_objlen(L,2));
		wxString item(lua_tostring(L,3),lua_objlen(L,3));
		const void* data=(Luna< void >::check(L,4));
		size_t size=(size_t)lua_tointeger(L,5);
		wxIPCFormat format=(wxIPCFormat)lua_tointeger(L,6);

		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnection::OnPoke(const wxString &, const wxString &, const void *, size_t, wxIPCFormat). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnPoke(topic, item, data, size, format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const void * wxConnection::OnRequest(const wxString & topic, const wxString & item, size_t * size, wxIPCFormat format)
	static int _bind_OnRequest(lua_State *L) {
		if (!_lg_typecheck_OnRequest(L)) {
			luaL_error(L, "luna typecheck failed in const void * wxConnection::OnRequest(const wxString & topic, const wxString & item, size_t * size, wxIPCFormat format) function, expected prototype:\nconst void * wxConnection::OnRequest(const wxString & topic, const wxString & item, size_t * size, wxIPCFormat format)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString topic(lua_tostring(L,2),lua_objlen(L,2));
		wxString item(lua_tostring(L,3),lua_objlen(L,3));
		size_t* size=(size_t*)Luna< void >::check(L,4);
		wxIPCFormat format=(wxIPCFormat)lua_tointeger(L,5);

		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const void * wxConnection::OnRequest(const wxString &, const wxString &, size_t *, wxIPCFormat). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const void * lret = self->OnRequest(topic, item, size, format);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// bool wxConnection::OnStartAdvise(const wxString & topic, const wxString & item)
	static int _bind_OnStartAdvise(lua_State *L) {
		if (!_lg_typecheck_OnStartAdvise(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnection::OnStartAdvise(const wxString & topic, const wxString & item) function, expected prototype:\nbool wxConnection::OnStartAdvise(const wxString & topic, const wxString & item)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString topic(lua_tostring(L,2),lua_objlen(L,2));
		wxString item(lua_tostring(L,3),lua_objlen(L,3));

		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnection::OnStartAdvise(const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnStartAdvise(topic, item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConnection::OnStopAdvise(const wxString & topic, const wxString & item)
	static int _bind_OnStopAdvise(lua_State *L) {
		if (!_lg_typecheck_OnStopAdvise(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnection::OnStopAdvise(const wxString & topic, const wxString & item) function, expected prototype:\nbool wxConnection::OnStopAdvise(const wxString & topic, const wxString & item)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString topic(lua_tostring(L,2),lua_objlen(L,2));
		wxString item(lua_tostring(L,3),lua_objlen(L,3));

		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnection::OnStopAdvise(const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnStopAdvise(topic, item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConnection::Poke(const wxString & item, const void * data, size_t size, wxIPCFormat format = ::wxIPC_PRIVATE)
	static int _bind_Poke_overload_1(lua_State *L) {
		if (!_lg_typecheck_Poke_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnection::Poke(const wxString & item, const void * data, size_t size, wxIPCFormat format = ::wxIPC_PRIVATE) function, expected prototype:\nbool wxConnection::Poke(const wxString & item, const void * data, size_t size, wxIPCFormat format = ::wxIPC_PRIVATE)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		const void* data=(Luna< void >::check(L,3));
		size_t size=(size_t)lua_tointeger(L,4);
		wxIPCFormat format=luatop>4 ? (wxIPCFormat)lua_tointeger(L,5) : (wxIPCFormat)::wxIPC_PRIVATE;

		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnection::Poke(const wxString &, const void *, size_t, wxIPCFormat). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Poke(item, data, size, format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConnection::Poke(const wxString & item, const char * data)
	static int _bind_Poke_overload_2(lua_State *L) {
		if (!_lg_typecheck_Poke_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnection::Poke(const wxString & item, const char * data) function, expected prototype:\nbool wxConnection::Poke(const wxString & item, const char * data)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		const char * data=(const char *)lua_tostring(L,3);

		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnection::Poke(const wxString &, const char *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Poke(item, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConnection::Poke(const wxString & item, const wxString data)
	static int _bind_Poke_overload_3(lua_State *L) {
		if (!_lg_typecheck_Poke_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnection::Poke(const wxString & item, const wxString data) function, expected prototype:\nbool wxConnection::Poke(const wxString & item, const wxString data)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		wxString data(lua_tostring(L,3),lua_objlen(L,3));

		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnection::Poke(const wxString &, const wxString). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Poke(item, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxConnection::Poke
	static int _bind_Poke(lua_State *L) {
		if (_lg_typecheck_Poke_overload_1(L)) return _bind_Poke_overload_1(L);
		if (_lg_typecheck_Poke_overload_2(L)) return _bind_Poke_overload_2(L);
		if (_lg_typecheck_Poke_overload_3(L)) return _bind_Poke_overload_3(L);

		luaL_error(L, "error in function Poke, cannot match any of the overloads for function Poke:\n  Poke(const wxString &, const void *, size_t, wxIPCFormat)\n  Poke(const wxString &, const char *)\n  Poke(const wxString &, const wxString)\n");
		return 0;
	}

	// const void * wxConnection::Request(const wxString & item, size_t * size, wxIPCFormat format = ::wxIPC_TEXT)
	static int _bind_Request(lua_State *L) {
		if (!_lg_typecheck_Request(L)) {
			luaL_error(L, "luna typecheck failed in const void * wxConnection::Request(const wxString & item, size_t * size, wxIPCFormat format = ::wxIPC_TEXT) function, expected prototype:\nconst void * wxConnection::Request(const wxString & item, size_t * size, wxIPCFormat format = ::wxIPC_TEXT)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		size_t* size=(size_t*)Luna< void >::check(L,3);
		wxIPCFormat format=luatop>3 ? (wxIPCFormat)lua_tointeger(L,4) : (wxIPCFormat)::wxIPC_TEXT;

		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const void * wxConnection::Request(const wxString &, size_t *, wxIPCFormat). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const void * lret = self->Request(item, size, format);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// bool wxConnection::StartAdvise(const wxString & item)
	static int _bind_StartAdvise(lua_State *L) {
		if (!_lg_typecheck_StartAdvise(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnection::StartAdvise(const wxString & item) function, expected prototype:\nbool wxConnection::StartAdvise(const wxString & item)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString item(lua_tostring(L,2),lua_objlen(L,2));

		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnection::StartAdvise(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->StartAdvise(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConnection::StopAdvise(const wxString & item)
	static int _bind_StopAdvise(lua_State *L) {
		if (!_lg_typecheck_StopAdvise(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnection::StopAdvise(const wxString & item) function, expected prototype:\nbool wxConnection::StopAdvise(const wxString & item)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString item(lua_tostring(L,2),lua_objlen(L,2));

		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnection::StopAdvise(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->StopAdvise(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxConnection::IsTextFormat(wxIPCFormat format)
	static int _bind_IsTextFormat(lua_State *L) {
		if (!_lg_typecheck_IsTextFormat(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxConnection::IsTextFormat(wxIPCFormat format) function, expected prototype:\nstatic bool wxConnection::IsTextFormat(wxIPCFormat format)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxIPCFormat format=(wxIPCFormat)lua_tointeger(L,1);

		bool lret = wxConnection::IsTextFormat(format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static wxString wxConnection::GetTextFromData(const void * data, size_t size, wxIPCFormat format)
	static int _bind_GetTextFromData(lua_State *L) {
		if (!_lg_typecheck_GetTextFromData(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxConnection::GetTextFromData(const void * data, size_t size, wxIPCFormat format) function, expected prototype:\nstatic wxString wxConnection::GetTextFromData(const void * data, size_t size, wxIPCFormat format)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const void* data=(Luna< void >::check(L,1));
		size_t size=(size_t)lua_tointeger(L,2);
		wxIPCFormat format=(wxIPCFormat)lua_tointeger(L,3);

		wxString lret = wxConnection::GetTextFromData(data, size, format);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxClassInfo * wxConnection::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxConnection::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxConnection::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxConnection::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxConnection::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxConnection::base_OnAdvise(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format)
	static int _bind_base_OnAdvise(lua_State *L) {
		if (!_lg_typecheck_base_OnAdvise(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnection::base_OnAdvise(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format) function, expected prototype:\nbool wxConnection::base_OnAdvise(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString topic(lua_tostring(L,2),lua_objlen(L,2));
		wxString item(lua_tostring(L,3),lua_objlen(L,3));
		const void* data=(Luna< void >::check(L,4));
		size_t size=(size_t)lua_tointeger(L,5);
		wxIPCFormat format=(wxIPCFormat)lua_tointeger(L,6);

		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnection::base_OnAdvise(const wxString &, const wxString &, const void *, size_t, wxIPCFormat). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxConnection::OnAdvise(topic, item, data, size, format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConnection::base_OnDisconnect()
	static int _bind_base_OnDisconnect(lua_State *L) {
		if (!_lg_typecheck_base_OnDisconnect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnection::base_OnDisconnect() function, expected prototype:\nbool wxConnection::base_OnDisconnect()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnection::base_OnDisconnect(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxConnection::OnDisconnect();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConnection::base_OnExec(const wxString & topic, const wxString & data)
	static int _bind_base_OnExec(lua_State *L) {
		if (!_lg_typecheck_base_OnExec(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnection::base_OnExec(const wxString & topic, const wxString & data) function, expected prototype:\nbool wxConnection::base_OnExec(const wxString & topic, const wxString & data)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString topic(lua_tostring(L,2),lua_objlen(L,2));
		wxString data(lua_tostring(L,3),lua_objlen(L,3));

		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnection::base_OnExec(const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxConnection::OnExec(topic, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConnection::base_OnPoke(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format)
	static int _bind_base_OnPoke(lua_State *L) {
		if (!_lg_typecheck_base_OnPoke(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnection::base_OnPoke(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format) function, expected prototype:\nbool wxConnection::base_OnPoke(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString topic(lua_tostring(L,2),lua_objlen(L,2));
		wxString item(lua_tostring(L,3),lua_objlen(L,3));
		const void* data=(Luna< void >::check(L,4));
		size_t size=(size_t)lua_tointeger(L,5);
		wxIPCFormat format=(wxIPCFormat)lua_tointeger(L,6);

		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnection::base_OnPoke(const wxString &, const wxString &, const void *, size_t, wxIPCFormat). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxConnection::OnPoke(topic, item, data, size, format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const void * wxConnection::base_OnRequest(const wxString & topic, const wxString & item, size_t * size, wxIPCFormat format)
	static int _bind_base_OnRequest(lua_State *L) {
		if (!_lg_typecheck_base_OnRequest(L)) {
			luaL_error(L, "luna typecheck failed in const void * wxConnection::base_OnRequest(const wxString & topic, const wxString & item, size_t * size, wxIPCFormat format) function, expected prototype:\nconst void * wxConnection::base_OnRequest(const wxString & topic, const wxString & item, size_t * size, wxIPCFormat format)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString topic(lua_tostring(L,2),lua_objlen(L,2));
		wxString item(lua_tostring(L,3),lua_objlen(L,3));
		size_t* size=(size_t*)Luna< void >::check(L,4);
		wxIPCFormat format=(wxIPCFormat)lua_tointeger(L,5);

		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const void * wxConnection::base_OnRequest(const wxString &, const wxString &, size_t *, wxIPCFormat). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const void * lret = self->wxConnection::OnRequest(topic, item, size, format);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// bool wxConnection::base_OnStartAdvise(const wxString & topic, const wxString & item)
	static int _bind_base_OnStartAdvise(lua_State *L) {
		if (!_lg_typecheck_base_OnStartAdvise(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnection::base_OnStartAdvise(const wxString & topic, const wxString & item) function, expected prototype:\nbool wxConnection::base_OnStartAdvise(const wxString & topic, const wxString & item)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString topic(lua_tostring(L,2),lua_objlen(L,2));
		wxString item(lua_tostring(L,3),lua_objlen(L,3));

		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnection::base_OnStartAdvise(const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxConnection::OnStartAdvise(topic, item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConnection::base_OnStopAdvise(const wxString & topic, const wxString & item)
	static int _bind_base_OnStopAdvise(lua_State *L) {
		if (!_lg_typecheck_base_OnStopAdvise(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnection::base_OnStopAdvise(const wxString & topic, const wxString & item) function, expected prototype:\nbool wxConnection::base_OnStopAdvise(const wxString & topic, const wxString & item)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString topic(lua_tostring(L,2),lua_objlen(L,2));
		wxString item(lua_tostring(L,3),lua_objlen(L,3));

		wxConnection* self=Luna< wxObject >::checkSubType< wxConnection >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnection::base_OnStopAdvise(const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxConnection::OnStopAdvise(topic, item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxConnection* LunaTraits< wxConnection >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxConnection::_bind_ctor(L);
}

void LunaTraits< wxConnection >::_bind_dtor(wxConnection* obj) {
	delete obj;
}

const char LunaTraits< wxConnection >::className[] = "wxConnection";
const char LunaTraits< wxConnection >::fullName[] = "wxConnection";
const char LunaTraits< wxConnection >::moduleName[] = "wx";
const char* LunaTraits< wxConnection >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxConnection >::hash = 2009121;
const int LunaTraits< wxConnection >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxConnection >::methods[] = {
	{"Advise", &luna_wrapper_wxConnection::_bind_Advise},
	{"Disconnect", &luna_wrapper_wxConnection::_bind_Disconnect},
	{"Execute", &luna_wrapper_wxConnection::_bind_Execute},
	{"OnAdvise", &luna_wrapper_wxConnection::_bind_OnAdvise},
	{"OnDisconnect", &luna_wrapper_wxConnection::_bind_OnDisconnect},
	{"OnExec", &luna_wrapper_wxConnection::_bind_OnExec},
	{"OnPoke", &luna_wrapper_wxConnection::_bind_OnPoke},
	{"OnRequest", &luna_wrapper_wxConnection::_bind_OnRequest},
	{"OnStartAdvise", &luna_wrapper_wxConnection::_bind_OnStartAdvise},
	{"OnStopAdvise", &luna_wrapper_wxConnection::_bind_OnStopAdvise},
	{"Poke", &luna_wrapper_wxConnection::_bind_Poke},
	{"Request", &luna_wrapper_wxConnection::_bind_Request},
	{"StartAdvise", &luna_wrapper_wxConnection::_bind_StartAdvise},
	{"StopAdvise", &luna_wrapper_wxConnection::_bind_StopAdvise},
	{"IsTextFormat", &luna_wrapper_wxConnection::_bind_IsTextFormat},
	{"GetTextFromData", &luna_wrapper_wxConnection::_bind_GetTextFromData},
	{"base_GetClassInfo", &luna_wrapper_wxConnection::_bind_base_GetClassInfo},
	{"base_OnAdvise", &luna_wrapper_wxConnection::_bind_base_OnAdvise},
	{"base_OnDisconnect", &luna_wrapper_wxConnection::_bind_base_OnDisconnect},
	{"base_OnExec", &luna_wrapper_wxConnection::_bind_base_OnExec},
	{"base_OnPoke", &luna_wrapper_wxConnection::_bind_base_OnPoke},
	{"base_OnRequest", &luna_wrapper_wxConnection::_bind_base_OnRequest},
	{"base_OnStartAdvise", &luna_wrapper_wxConnection::_bind_base_OnStartAdvise},
	{"base_OnStopAdvise", &luna_wrapper_wxConnection::_bind_base_OnStopAdvise},
	{"fromVoid", &luna_wrapper_wxConnection::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxConnection::_bind_asVoid},
	{"getTable", &luna_wrapper_wxConnection::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxConnection >::converters[] = {
	{"wxObject", &luna_wrapper_wxConnection::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxConnection >::enumValues[] = {
	{0,0}
};


