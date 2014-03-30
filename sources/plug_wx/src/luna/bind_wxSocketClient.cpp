#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSocketClient.h>

class luna_wrapper_wxSocketClient {
public:
	typedef Luna< wxSocketClient > luna_t;

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

		wxSocketClient* self= (wxSocketClient*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxSocketClient >::push(L,self,false);
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
		//wxSocketClient* ptr= dynamic_cast< wxSocketClient* >(Luna< wxObject >::check(L,1));
		wxSocketClient* ptr= luna_caster< wxObject, wxSocketClient >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSocketClient >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_Connect_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxSockAddress >(L,2))) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Connect_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxSockAddress >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxSockAddress >(L,3))) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WaitOnConnect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetLocal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetPeer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Close(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetLocal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Connect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSocketClient::wxSocketClient(int flags = ::wxSOCKET_NONE)
	static wxSocketClient* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxSocketClient::wxSocketClient(int flags = ::wxSOCKET_NONE) function, expected prototype:\nwxSocketClient::wxSocketClient(int flags = ::wxSOCKET_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>0 ? (int)lua_tointeger(L,1) : (int)::wxSOCKET_NONE;

		return new wxSocketClient(flags);
	}

	// wxSocketClient::wxSocketClient(lua_Table * data, int flags = ::wxSOCKET_NONE)
	static wxSocketClient* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSocketClient::wxSocketClient(lua_Table * data, int flags = ::wxSOCKET_NONE) function, expected prototype:\nwxSocketClient::wxSocketClient(lua_Table * data, int flags = ::wxSOCKET_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxSOCKET_NONE;

		return new wrapper_wxSocketClient(L,NULL, flags);
	}

	// Overload binder for wxSocketClient::wxSocketClient
	static wxSocketClient* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxSocketClient, cannot match any of the overloads for function wxSocketClient:\n  wxSocketClient(int)\n  wxSocketClient(lua_Table *, int)\n");
		return NULL;
	}


	// Function binds:
	// bool wxSocketClient::Connect(const wxSockAddress & address, bool wait = true)
	static int _bind_Connect_overload_1(lua_State *L) {
		if (!_lg_typecheck_Connect_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketClient::Connect(const wxSockAddress & address, bool wait = true) function, expected prototype:\nbool wxSocketClient::Connect(const wxSockAddress & address, bool wait = true)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSockAddress* address_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,2));
		if( !address_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg address in wxSocketClient::Connect function");
		}
		const wxSockAddress & address=*address_ptr;
		bool wait=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxSocketClient* self=Luna< wxObject >::checkSubType< wxSocketClient >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketClient::Connect(const wxSockAddress &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Connect(address, wait);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSocketClient::Connect(const wxSockAddress & address, const wxSockAddress & local, bool wait = true)
	static int _bind_Connect_overload_2(lua_State *L) {
		if (!_lg_typecheck_Connect_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketClient::Connect(const wxSockAddress & address, const wxSockAddress & local, bool wait = true) function, expected prototype:\nbool wxSocketClient::Connect(const wxSockAddress & address, const wxSockAddress & local, bool wait = true)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSockAddress* address_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,2));
		if( !address_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg address in wxSocketClient::Connect function");
		}
		const wxSockAddress & address=*address_ptr;
		const wxSockAddress* local_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,3));
		if( !local_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg local in wxSocketClient::Connect function");
		}
		const wxSockAddress & local=*local_ptr;
		bool wait=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxSocketClient* self=Luna< wxObject >::checkSubType< wxSocketClient >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketClient::Connect(const wxSockAddress &, const wxSockAddress &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Connect(address, local, wait);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxSocketClient::Connect
	static int _bind_Connect(lua_State *L) {
		if (_lg_typecheck_Connect_overload_1(L)) return _bind_Connect_overload_1(L);
		if (_lg_typecheck_Connect_overload_2(L)) return _bind_Connect_overload_2(L);

		luaL_error(L, "error in function Connect, cannot match any of the overloads for function Connect:\n  Connect(const wxSockAddress &, bool)\n  Connect(const wxSockAddress &, const wxSockAddress &, bool)\n");
		return 0;
	}

	// bool wxSocketClient::WaitOnConnect(long seconds = -1, long milliseconds = 0)
	static int _bind_WaitOnConnect(lua_State *L) {
		if (!_lg_typecheck_WaitOnConnect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketClient::WaitOnConnect(long seconds = -1, long milliseconds = 0) function, expected prototype:\nbool wxSocketClient::WaitOnConnect(long seconds = -1, long milliseconds = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long seconds=luatop>1 ? (long)lua_tonumber(L,2) : (long)-1;
		long milliseconds=luatop>2 ? (long)lua_tonumber(L,3) : (long)0;

		wxSocketClient* self=Luna< wxObject >::checkSubType< wxSocketClient >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketClient::WaitOnConnect(long, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->WaitOnConnect(seconds, milliseconds);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxSocketClient::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxSocketClient::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxSocketClient::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketClient* self=Luna< wxObject >::checkSubType< wxSocketClient >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxSocketClient::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxSocketClient::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxSocketClient::base_GetLocal(wxSockAddress & addr) const
	static int _bind_base_GetLocal(lua_State *L) {
		if (!_lg_typecheck_base_GetLocal(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketClient::base_GetLocal(wxSockAddress & addr) const function, expected prototype:\nbool wxSocketClient::base_GetLocal(wxSockAddress & addr) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSockAddress* addr_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,2));
		if( !addr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg addr in wxSocketClient::base_GetLocal function");
		}
		wxSockAddress & addr=*addr_ptr;

		wxSocketClient* self=Luna< wxObject >::checkSubType< wxSocketClient >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketClient::base_GetLocal(wxSockAddress &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSocketClient::GetLocal(addr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSocketClient::base_GetPeer(wxSockAddress & addr) const
	static int _bind_base_GetPeer(lua_State *L) {
		if (!_lg_typecheck_base_GetPeer(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketClient::base_GetPeer(wxSockAddress & addr) const function, expected prototype:\nbool wxSocketClient::base_GetPeer(wxSockAddress & addr) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSockAddress* addr_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,2));
		if( !addr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg addr in wxSocketClient::base_GetPeer function");
		}
		wxSockAddress & addr=*addr_ptr;

		wxSocketClient* self=Luna< wxObject >::checkSubType< wxSocketClient >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketClient::base_GetPeer(wxSockAddress &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSocketClient::GetPeer(addr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSocketClient::base_Close()
	static int _bind_base_Close(lua_State *L) {
		if (!_lg_typecheck_base_Close(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketClient::base_Close() function, expected prototype:\nbool wxSocketClient::base_Close()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketClient* self=Luna< wxObject >::checkSubType< wxSocketClient >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketClient::base_Close(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSocketClient::Close();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSocketClient::base_SetLocal(const wxIPV4address & local)
	static int _bind_base_SetLocal(lua_State *L) {
		if (!_lg_typecheck_base_SetLocal(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketClient::base_SetLocal(const wxIPV4address & local) function, expected prototype:\nbool wxSocketClient::base_SetLocal(const wxIPV4address & local)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxIPV4address* local_ptr=(Luna< wxObject >::checkSubType< wxIPV4address >(L,2));
		if( !local_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg local in wxSocketClient::base_SetLocal function");
		}
		const wxIPV4address & local=*local_ptr;

		wxSocketClient* self=Luna< wxObject >::checkSubType< wxSocketClient >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketClient::base_SetLocal(const wxIPV4address &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSocketClient::SetLocal(local);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSocketClient::base_Connect(const wxSockAddress & address, bool wait = true)
	static int _bind_base_Connect(lua_State *L) {
		if (!_lg_typecheck_base_Connect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketClient::base_Connect(const wxSockAddress & address, bool wait = true) function, expected prototype:\nbool wxSocketClient::base_Connect(const wxSockAddress & address, bool wait = true)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSockAddress* address_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,2));
		if( !address_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg address in wxSocketClient::base_Connect function");
		}
		const wxSockAddress & address=*address_ptr;
		bool wait=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxSocketClient* self=Luna< wxObject >::checkSubType< wxSocketClient >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketClient::base_Connect(const wxSockAddress &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSocketClient::Connect(address, wait);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxSocketClient* LunaTraits< wxSocketClient >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSocketClient::_bind_ctor(L);
}

void LunaTraits< wxSocketClient >::_bind_dtor(wxSocketClient* obj) {
	delete obj;
}

const char LunaTraits< wxSocketClient >::className[] = "wxSocketClient";
const char LunaTraits< wxSocketClient >::fullName[] = "wxSocketClient";
const char LunaTraits< wxSocketClient >::moduleName[] = "wx";
const char* LunaTraits< wxSocketClient >::parents[] = {"wx.wxSocketBase", 0};
const int LunaTraits< wxSocketClient >::hash = 34036619;
const int LunaTraits< wxSocketClient >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSocketClient >::methods[] = {
	{"Connect", &luna_wrapper_wxSocketClient::_bind_Connect},
	{"WaitOnConnect", &luna_wrapper_wxSocketClient::_bind_WaitOnConnect},
	{"base_GetClassInfo", &luna_wrapper_wxSocketClient::_bind_base_GetClassInfo},
	{"base_GetLocal", &luna_wrapper_wxSocketClient::_bind_base_GetLocal},
	{"base_GetPeer", &luna_wrapper_wxSocketClient::_bind_base_GetPeer},
	{"base_Close", &luna_wrapper_wxSocketClient::_bind_base_Close},
	{"base_SetLocal", &luna_wrapper_wxSocketClient::_bind_base_SetLocal},
	{"base_Connect", &luna_wrapper_wxSocketClient::_bind_base_Connect},
	{"fromVoid", &luna_wrapper_wxSocketClient::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxSocketClient::_bind_asVoid},
	{"getTable", &luna_wrapper_wxSocketClient::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSocketClient >::converters[] = {
	{"wxObject", &luna_wrapper_wxSocketClient::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSocketClient >::enumValues[] = {
	{0,0}
};


