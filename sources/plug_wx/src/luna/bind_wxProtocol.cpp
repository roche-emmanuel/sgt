#include <plug_common.h>

#include <luna/wrappers/wrapper_wxProtocol.h>

class luna_wrapper_wxProtocol {
public:
	typedef Luna< wxProtocol > luna_t;

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

		wxProtocol* self= (wxProtocol*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxProtocol >::push(L,self,false);
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
		//wxProtocol* ptr= dynamic_cast< wxProtocol* >(Luna< wxObject >::check(L,1));
		wxProtocol* ptr= luna_caster< wxObject, wxProtocol >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxProtocol >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_Abort(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetContentType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetError(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetInputStream(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Reconnect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetPassword(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUser(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDefaultTimeout(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLog(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,45711597)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLog(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DetachLog(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LogRequest(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LogResponse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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

	inline static bool _lg_typecheck_base_GetError(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetPassword(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetUser(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// bool wxProtocol::Abort()
	static int _bind_Abort(lua_State *L) {
		if (!_lg_typecheck_Abort(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProtocol::Abort() function, expected prototype:\nbool wxProtocol::Abort()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProtocol* self=Luna< wxObject >::checkSubType< wxProtocol >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProtocol::Abort(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Abort();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxProtocol::GetContentType() const
	static int _bind_GetContentType(lua_State *L) {
		if (!_lg_typecheck_GetContentType(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxProtocol::GetContentType() const function, expected prototype:\nwxString wxProtocol::GetContentType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProtocol* self=Luna< wxObject >::checkSubType< wxProtocol >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxProtocol::GetContentType() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetContentType();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxProtocolError wxProtocol::GetError() const
	static int _bind_GetError(lua_State *L) {
		if (!_lg_typecheck_GetError(L)) {
			luaL_error(L, "luna typecheck failed in wxProtocolError wxProtocol::GetError() const function, expected prototype:\nwxProtocolError wxProtocol::GetError() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProtocol* self=Luna< wxObject >::checkSubType< wxProtocol >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxProtocolError wxProtocol::GetError() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxProtocolError lret = self->GetError();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxInputStream * wxProtocol::GetInputStream(const wxString & path)
	static int _bind_GetInputStream(lua_State *L) {
		if (!_lg_typecheck_GetInputStream(L)) {
			luaL_error(L, "luna typecheck failed in wxInputStream * wxProtocol::GetInputStream(const wxString & path) function, expected prototype:\nwxInputStream * wxProtocol::GetInputStream(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxProtocol* self=Luna< wxObject >::checkSubType< wxProtocol >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxInputStream * wxProtocol::GetInputStream(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxInputStream * lret = self->GetInputStream(path);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxInputStream >::push(L,lret,false);

		return 1;
	}

	// bool wxProtocol::Reconnect()
	static int _bind_Reconnect(lua_State *L) {
		if (!_lg_typecheck_Reconnect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProtocol::Reconnect() function, expected prototype:\nbool wxProtocol::Reconnect()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProtocol* self=Luna< wxObject >::checkSubType< wxProtocol >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProtocol::Reconnect(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Reconnect();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxProtocol::SetPassword(const wxString & user)
	static int _bind_SetPassword(lua_State *L) {
		if (!_lg_typecheck_SetPassword(L)) {
			luaL_error(L, "luna typecheck failed in void wxProtocol::SetPassword(const wxString & user) function, expected prototype:\nvoid wxProtocol::SetPassword(const wxString & user)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString user(lua_tostring(L,2),lua_objlen(L,2));

		wxProtocol* self=Luna< wxObject >::checkSubType< wxProtocol >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProtocol::SetPassword(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPassword(user);

		return 0;
	}

	// void wxProtocol::SetUser(const wxString & user)
	static int _bind_SetUser(lua_State *L) {
		if (!_lg_typecheck_SetUser(L)) {
			luaL_error(L, "luna typecheck failed in void wxProtocol::SetUser(const wxString & user) function, expected prototype:\nvoid wxProtocol::SetUser(const wxString & user)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString user(lua_tostring(L,2),lua_objlen(L,2));

		wxProtocol* self=Luna< wxObject >::checkSubType< wxProtocol >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProtocol::SetUser(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetUser(user);

		return 0;
	}

	// void wxProtocol::SetDefaultTimeout(unsigned int Value)
	static int _bind_SetDefaultTimeout(lua_State *L) {
		if (!_lg_typecheck_SetDefaultTimeout(L)) {
			luaL_error(L, "luna typecheck failed in void wxProtocol::SetDefaultTimeout(unsigned int Value) function, expected prototype:\nvoid wxProtocol::SetDefaultTimeout(unsigned int Value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int Value=(unsigned int)lua_tointeger(L,2);

		wxProtocol* self=Luna< wxObject >::checkSubType< wxProtocol >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProtocol::SetDefaultTimeout(unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDefaultTimeout(Value);

		return 0;
	}

	// void wxProtocol::SetLog(wxProtocolLog * log)
	static int _bind_SetLog(lua_State *L) {
		if (!_lg_typecheck_SetLog(L)) {
			luaL_error(L, "luna typecheck failed in void wxProtocol::SetLog(wxProtocolLog * log) function, expected prototype:\nvoid wxProtocol::SetLog(wxProtocolLog * log)\nClass arguments details:\narg 1 ID = 45711597\n\n%s",luna_dumpStack(L).c_str());
		}

		wxProtocolLog* log=(Luna< wxProtocolLog >::check(L,2));

		wxProtocol* self=Luna< wxObject >::checkSubType< wxProtocol >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProtocol::SetLog(wxProtocolLog *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLog(log);

		return 0;
	}

	// wxProtocolLog * wxProtocol::GetLog() const
	static int _bind_GetLog(lua_State *L) {
		if (!_lg_typecheck_GetLog(L)) {
			luaL_error(L, "luna typecheck failed in wxProtocolLog * wxProtocol::GetLog() const function, expected prototype:\nwxProtocolLog * wxProtocol::GetLog() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProtocol* self=Luna< wxObject >::checkSubType< wxProtocol >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxProtocolLog * wxProtocol::GetLog() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxProtocolLog * lret = self->GetLog();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxProtocolLog >::push(L,lret,false);

		return 1;
	}

	// wxProtocolLog * wxProtocol::DetachLog()
	static int _bind_DetachLog(lua_State *L) {
		if (!_lg_typecheck_DetachLog(L)) {
			luaL_error(L, "luna typecheck failed in wxProtocolLog * wxProtocol::DetachLog() function, expected prototype:\nwxProtocolLog * wxProtocol::DetachLog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProtocol* self=Luna< wxObject >::checkSubType< wxProtocol >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxProtocolLog * wxProtocol::DetachLog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxProtocolLog * lret = self->DetachLog();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxProtocolLog >::push(L,lret,false);

		return 1;
	}

	// void wxProtocol::LogRequest(const wxString & str)
	static int _bind_LogRequest(lua_State *L) {
		if (!_lg_typecheck_LogRequest(L)) {
			luaL_error(L, "luna typecheck failed in void wxProtocol::LogRequest(const wxString & str) function, expected prototype:\nvoid wxProtocol::LogRequest(const wxString & str)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString str(lua_tostring(L,2),lua_objlen(L,2));

		wxProtocol* self=Luna< wxObject >::checkSubType< wxProtocol >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProtocol::LogRequest(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LogRequest(str);

		return 0;
	}

	// void wxProtocol::LogResponse(const wxString & str)
	static int _bind_LogResponse(lua_State *L) {
		if (!_lg_typecheck_LogResponse(L)) {
			luaL_error(L, "luna typecheck failed in void wxProtocol::LogResponse(const wxString & str) function, expected prototype:\nvoid wxProtocol::LogResponse(const wxString & str)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString str(lua_tostring(L,2),lua_objlen(L,2));

		wxProtocol* self=Luna< wxObject >::checkSubType< wxProtocol >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProtocol::LogResponse(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LogResponse(str);

		return 0;
	}

	// wxClassInfo * wxProtocol::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxProtocol::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxProtocol::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProtocol* self=Luna< wxObject >::checkSubType< wxProtocol >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxProtocol::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxProtocol::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxProtocol::base_GetLocal(wxSockAddress & addr) const
	static int _bind_base_GetLocal(lua_State *L) {
		if (!_lg_typecheck_base_GetLocal(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProtocol::base_GetLocal(wxSockAddress & addr) const function, expected prototype:\nbool wxProtocol::base_GetLocal(wxSockAddress & addr) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSockAddress* addr_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,2));
		if( !addr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg addr in wxProtocol::base_GetLocal function");
		}
		wxSockAddress & addr=*addr_ptr;

		wxProtocol* self=Luna< wxObject >::checkSubType< wxProtocol >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProtocol::base_GetLocal(wxSockAddress &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProtocol::GetLocal(addr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProtocol::base_GetPeer(wxSockAddress & addr) const
	static int _bind_base_GetPeer(lua_State *L) {
		if (!_lg_typecheck_base_GetPeer(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProtocol::base_GetPeer(wxSockAddress & addr) const function, expected prototype:\nbool wxProtocol::base_GetPeer(wxSockAddress & addr) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSockAddress* addr_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,2));
		if( !addr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg addr in wxProtocol::base_GetPeer function");
		}
		wxSockAddress & addr=*addr_ptr;

		wxProtocol* self=Luna< wxObject >::checkSubType< wxProtocol >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProtocol::base_GetPeer(wxSockAddress &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProtocol::GetPeer(addr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProtocol::base_Close()
	static int _bind_base_Close(lua_State *L) {
		if (!_lg_typecheck_base_Close(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProtocol::base_Close() function, expected prototype:\nbool wxProtocol::base_Close()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProtocol* self=Luna< wxObject >::checkSubType< wxProtocol >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProtocol::base_Close(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProtocol::Close();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProtocol::base_SetLocal(const wxIPV4address & local)
	static int _bind_base_SetLocal(lua_State *L) {
		if (!_lg_typecheck_base_SetLocal(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProtocol::base_SetLocal(const wxIPV4address & local) function, expected prototype:\nbool wxProtocol::base_SetLocal(const wxIPV4address & local)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxIPV4address* local_ptr=(Luna< wxObject >::checkSubType< wxIPV4address >(L,2));
		if( !local_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg local in wxProtocol::base_SetLocal function");
		}
		const wxIPV4address & local=*local_ptr;

		wxProtocol* self=Luna< wxObject >::checkSubType< wxProtocol >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProtocol::base_SetLocal(const wxIPV4address &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProtocol::SetLocal(local);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProtocol::base_Connect(const wxSockAddress & address, bool wait = true)
	static int _bind_base_Connect(lua_State *L) {
		if (!_lg_typecheck_base_Connect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProtocol::base_Connect(const wxSockAddress & address, bool wait = true) function, expected prototype:\nbool wxProtocol::base_Connect(const wxSockAddress & address, bool wait = true)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSockAddress* address_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,2));
		if( !address_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg address in wxProtocol::base_Connect function");
		}
		const wxSockAddress & address=*address_ptr;
		bool wait=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxProtocol* self=Luna< wxObject >::checkSubType< wxProtocol >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProtocol::base_Connect(const wxSockAddress &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProtocol::Connect(address, wait);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxProtocolError wxProtocol::base_GetError() const
	static int _bind_base_GetError(lua_State *L) {
		if (!_lg_typecheck_base_GetError(L)) {
			luaL_error(L, "luna typecheck failed in wxProtocolError wxProtocol::base_GetError() const function, expected prototype:\nwxProtocolError wxProtocol::base_GetError() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProtocol* self=Luna< wxObject >::checkSubType< wxProtocol >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxProtocolError wxProtocol::base_GetError() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxProtocolError lret = self->wxProtocol::GetError();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxProtocol::base_SetPassword(const wxString & user)
	static int _bind_base_SetPassword(lua_State *L) {
		if (!_lg_typecheck_base_SetPassword(L)) {
			luaL_error(L, "luna typecheck failed in void wxProtocol::base_SetPassword(const wxString & user) function, expected prototype:\nvoid wxProtocol::base_SetPassword(const wxString & user)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString user(lua_tostring(L,2),lua_objlen(L,2));

		wxProtocol* self=Luna< wxObject >::checkSubType< wxProtocol >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProtocol::base_SetPassword(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProtocol::SetPassword(user);

		return 0;
	}

	// void wxProtocol::base_SetUser(const wxString & user)
	static int _bind_base_SetUser(lua_State *L) {
		if (!_lg_typecheck_base_SetUser(L)) {
			luaL_error(L, "luna typecheck failed in void wxProtocol::base_SetUser(const wxString & user) function, expected prototype:\nvoid wxProtocol::base_SetUser(const wxString & user)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString user(lua_tostring(L,2),lua_objlen(L,2));

		wxProtocol* self=Luna< wxObject >::checkSubType< wxProtocol >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProtocol::base_SetUser(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProtocol::SetUser(user);

		return 0;
	}


	// Operator binds:

};

wxProtocol* LunaTraits< wxProtocol >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool wxProtocol::Abort()
	// wxString wxProtocol::GetContentType() const
	// wxInputStream * wxProtocol::GetInputStream(const wxString & path)
}

void LunaTraits< wxProtocol >::_bind_dtor(wxProtocol* obj) {
	delete obj;
}

const char LunaTraits< wxProtocol >::className[] = "wxProtocol";
const char LunaTraits< wxProtocol >::fullName[] = "wxProtocol";
const char LunaTraits< wxProtocol >::moduleName[] = "wx";
const char* LunaTraits< wxProtocol >::parents[] = {"wx.wxSocketClient", 0};
const int LunaTraits< wxProtocol >::hash = 67907954;
const int LunaTraits< wxProtocol >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxProtocol >::methods[] = {
	{"Abort", &luna_wrapper_wxProtocol::_bind_Abort},
	{"GetContentType", &luna_wrapper_wxProtocol::_bind_GetContentType},
	{"GetError", &luna_wrapper_wxProtocol::_bind_GetError},
	{"GetInputStream", &luna_wrapper_wxProtocol::_bind_GetInputStream},
	{"Reconnect", &luna_wrapper_wxProtocol::_bind_Reconnect},
	{"SetPassword", &luna_wrapper_wxProtocol::_bind_SetPassword},
	{"SetUser", &luna_wrapper_wxProtocol::_bind_SetUser},
	{"SetDefaultTimeout", &luna_wrapper_wxProtocol::_bind_SetDefaultTimeout},
	{"SetLog", &luna_wrapper_wxProtocol::_bind_SetLog},
	{"GetLog", &luna_wrapper_wxProtocol::_bind_GetLog},
	{"DetachLog", &luna_wrapper_wxProtocol::_bind_DetachLog},
	{"LogRequest", &luna_wrapper_wxProtocol::_bind_LogRequest},
	{"LogResponse", &luna_wrapper_wxProtocol::_bind_LogResponse},
	{"base_GetClassInfo", &luna_wrapper_wxProtocol::_bind_base_GetClassInfo},
	{"base_GetLocal", &luna_wrapper_wxProtocol::_bind_base_GetLocal},
	{"base_GetPeer", &luna_wrapper_wxProtocol::_bind_base_GetPeer},
	{"base_Close", &luna_wrapper_wxProtocol::_bind_base_Close},
	{"base_SetLocal", &luna_wrapper_wxProtocol::_bind_base_SetLocal},
	{"base_Connect", &luna_wrapper_wxProtocol::_bind_base_Connect},
	{"base_GetError", &luna_wrapper_wxProtocol::_bind_base_GetError},
	{"base_SetPassword", &luna_wrapper_wxProtocol::_bind_base_SetPassword},
	{"base_SetUser", &luna_wrapper_wxProtocol::_bind_base_SetUser},
	{"fromVoid", &luna_wrapper_wxProtocol::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxProtocol::_bind_asVoid},
	{"getTable", &luna_wrapper_wxProtocol::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxProtocol >::converters[] = {
	{"wxObject", &luna_wrapper_wxProtocol::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxProtocol >::enumValues[] = {
	{0,0}
};


