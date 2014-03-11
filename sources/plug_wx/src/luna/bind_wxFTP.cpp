#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFTP.h>

class luna_wrapper_wxFTP {
public:
	typedef Luna< wxFTP > luna_t;

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

		wxFTP* self= (wxFTP*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFTP >::push(L,self,false);
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
		//wxFTP* ptr= dynamic_cast< wxFTP* >(Luna< wxObject >::check(L,1));
		wxFTP* ptr= luna_caster< wxObject, wxFTP >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFTP >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Connect_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Connect_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Abort(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Close(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CheckCommand(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLastResult(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SendCommand(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAscii(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBinary(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetPassive(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPassword(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTransferMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUser(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ChDir(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MkDir(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Pwd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Rename(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RmDir(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RmFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FileExists(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDirList(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFileSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFilesList(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetInputStream(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetOutputStream(lua_State *L) {
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

	inline static bool _lg_typecheck_base_SetLocal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetError(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Connect_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Connect_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Abort(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Close(lua_State *L) {
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

	inline static bool _lg_typecheck_base_GetInputStream(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetOutputStream(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFTP::wxFTP(lua_Table * data)
	static wxFTP* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxFTP::wxFTP(lua_Table * data) function, expected prototype:\nwxFTP::wxFTP(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxFTP(L,NULL);
	}


	// Function binds:
	// bool wxFTP::Connect(const wxString & host)
	static int _bind_Connect_overload_1(lua_State *L) {
		if (!_lg_typecheck_Connect_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFTP::Connect(const wxString & host) function, expected prototype:\nbool wxFTP::Connect(const wxString & host)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString host(lua_tostring(L,2),lua_objlen(L,2));

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFTP::Connect(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Connect(host);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFTP::Connect(const wxString & host, unsigned short port)
	static int _bind_Connect_overload_2(lua_State *L) {
		if (!_lg_typecheck_Connect_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFTP::Connect(const wxString & host, unsigned short port) function, expected prototype:\nbool wxFTP::Connect(const wxString & host, unsigned short port)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString host(lua_tostring(L,2),lua_objlen(L,2));
		unsigned short port=(unsigned short)lua_tointeger(L,3);

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFTP::Connect(const wxString &, unsigned short). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Connect(host, port);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxFTP::Connect
	static int _bind_Connect(lua_State *L) {
		if (_lg_typecheck_Connect_overload_1(L)) return _bind_Connect_overload_1(L);
		if (_lg_typecheck_Connect_overload_2(L)) return _bind_Connect_overload_2(L);

		luaL_error(L, "error in function Connect, cannot match any of the overloads for function Connect:\n  Connect(const wxString &)\n  Connect(const wxString &, unsigned short)\n");
		return 0;
	}

	// bool wxFTP::Abort()
	static int _bind_Abort(lua_State *L) {
		if (!_lg_typecheck_Abort(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFTP::Abort() function, expected prototype:\nbool wxFTP::Abort()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFTP::Abort(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Abort();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFTP::Close()
	static int _bind_Close(lua_State *L) {
		if (!_lg_typecheck_Close(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFTP::Close() function, expected prototype:\nbool wxFTP::Close()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFTP::Close(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Close();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFTP::CheckCommand(const wxString & command, char ret)
	static int _bind_CheckCommand(lua_State *L) {
		if (!_lg_typecheck_CheckCommand(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFTP::CheckCommand(const wxString & command, char ret) function, expected prototype:\nbool wxFTP::CheckCommand(const wxString & command, char ret)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString command(lua_tostring(L,2),lua_objlen(L,2));
		char ret=(char)lua_tointeger(L,3);

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFTP::CheckCommand(const wxString &, char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CheckCommand(command, ret);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const wxString & wxFTP::GetLastResult()
	static int _bind_GetLastResult(lua_State *L) {
		if (!_lg_typecheck_GetLastResult(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxFTP::GetLastResult() function, expected prototype:\nconst wxString & wxFTP::GetLastResult()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxFTP::GetLastResult(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetLastResult();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// char wxFTP::SendCommand(const wxString & command)
	static int _bind_SendCommand(lua_State *L) {
		if (!_lg_typecheck_SendCommand(L)) {
			luaL_error(L, "luna typecheck failed in char wxFTP::SendCommand(const wxString & command) function, expected prototype:\nchar wxFTP::SendCommand(const wxString & command)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString command(lua_tostring(L,2),lua_objlen(L,2));

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call char wxFTP::SendCommand(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		char lret = self->SendCommand(command);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFTP::SetAscii()
	static int _bind_SetAscii(lua_State *L) {
		if (!_lg_typecheck_SetAscii(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFTP::SetAscii() function, expected prototype:\nbool wxFTP::SetAscii()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFTP::SetAscii(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetAscii();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFTP::SetBinary()
	static int _bind_SetBinary(lua_State *L) {
		if (!_lg_typecheck_SetBinary(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFTP::SetBinary() function, expected prototype:\nbool wxFTP::SetBinary()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFTP::SetBinary(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetBinary();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFTP::SetPassive(bool pasv)
	static int _bind_SetPassive(lua_State *L) {
		if (!_lg_typecheck_SetPassive(L)) {
			luaL_error(L, "luna typecheck failed in void wxFTP::SetPassive(bool pasv) function, expected prototype:\nvoid wxFTP::SetPassive(bool pasv)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool pasv=(bool)(lua_toboolean(L,2)==1);

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFTP::SetPassive(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPassive(pasv);

		return 0;
	}

	// void wxFTP::SetPassword(const wxString & passwd)
	static int _bind_SetPassword(lua_State *L) {
		if (!_lg_typecheck_SetPassword(L)) {
			luaL_error(L, "luna typecheck failed in void wxFTP::SetPassword(const wxString & passwd) function, expected prototype:\nvoid wxFTP::SetPassword(const wxString & passwd)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString passwd(lua_tostring(L,2),lua_objlen(L,2));

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFTP::SetPassword(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPassword(passwd);

		return 0;
	}

	// bool wxFTP::SetTransferMode(wxFTP::TransferMode mode)
	static int _bind_SetTransferMode(lua_State *L) {
		if (!_lg_typecheck_SetTransferMode(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFTP::SetTransferMode(wxFTP::TransferMode mode) function, expected prototype:\nbool wxFTP::SetTransferMode(wxFTP::TransferMode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFTP::TransferMode mode=(wxFTP::TransferMode)lua_tointeger(L,2);

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFTP::SetTransferMode(wxFTP::TransferMode). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetTransferMode(mode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFTP::SetUser(const wxString & user)
	static int _bind_SetUser(lua_State *L) {
		if (!_lg_typecheck_SetUser(L)) {
			luaL_error(L, "luna typecheck failed in void wxFTP::SetUser(const wxString & user) function, expected prototype:\nvoid wxFTP::SetUser(const wxString & user)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString user(lua_tostring(L,2),lua_objlen(L,2));

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFTP::SetUser(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetUser(user);

		return 0;
	}

	// bool wxFTP::ChDir(const wxString & dir)
	static int _bind_ChDir(lua_State *L) {
		if (!_lg_typecheck_ChDir(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFTP::ChDir(const wxString & dir) function, expected prototype:\nbool wxFTP::ChDir(const wxString & dir)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString dir(lua_tostring(L,2),lua_objlen(L,2));

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFTP::ChDir(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ChDir(dir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFTP::MkDir(const wxString & dir)
	static int _bind_MkDir(lua_State *L) {
		if (!_lg_typecheck_MkDir(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFTP::MkDir(const wxString & dir) function, expected prototype:\nbool wxFTP::MkDir(const wxString & dir)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString dir(lua_tostring(L,2),lua_objlen(L,2));

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFTP::MkDir(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MkDir(dir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxFTP::Pwd()
	static int _bind_Pwd(lua_State *L) {
		if (!_lg_typecheck_Pwd(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFTP::Pwd() function, expected prototype:\nwxString wxFTP::Pwd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFTP::Pwd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->Pwd();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxFTP::Rename(const wxString & src, const wxString & dst)
	static int _bind_Rename(lua_State *L) {
		if (!_lg_typecheck_Rename(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFTP::Rename(const wxString & src, const wxString & dst) function, expected prototype:\nbool wxFTP::Rename(const wxString & src, const wxString & dst)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString src(lua_tostring(L,2),lua_objlen(L,2));
		wxString dst(lua_tostring(L,3),lua_objlen(L,3));

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFTP::Rename(const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Rename(src, dst);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFTP::RmDir(const wxString & dir)
	static int _bind_RmDir(lua_State *L) {
		if (!_lg_typecheck_RmDir(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFTP::RmDir(const wxString & dir) function, expected prototype:\nbool wxFTP::RmDir(const wxString & dir)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString dir(lua_tostring(L,2),lua_objlen(L,2));

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFTP::RmDir(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RmDir(dir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFTP::RmFile(const wxString & path)
	static int _bind_RmFile(lua_State *L) {
		if (!_lg_typecheck_RmFile(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFTP::RmFile(const wxString & path) function, expected prototype:\nbool wxFTP::RmFile(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFTP::RmFile(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RmFile(path);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFTP::FileExists(const wxString & filename)
	static int _bind_FileExists(lua_State *L) {
		if (!_lg_typecheck_FileExists(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFTP::FileExists(const wxString & filename) function, expected prototype:\nbool wxFTP::FileExists(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFTP::FileExists(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FileExists(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFTP::GetDirList(wxArrayString & files, const wxString & wildcard = wxEmptyString)
	static int _bind_GetDirList(lua_State *L) {
		if (!_lg_typecheck_GetDirList(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFTP::GetDirList(wxArrayString & files, const wxString & wildcard = wxEmptyString) function, expected prototype:\nbool wxFTP::GetDirList(wxArrayString & files, const wxString & wildcard = wxEmptyString)\nClass arguments details:\narg 1 ID = 59507769\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxArrayString* files_ptr=(Luna< wxArrayString >::check(L,2));
		if( !files_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg files in wxFTP::GetDirList function");
		}
		wxArrayString & files=*files_ptr;
		wxString wildcard(lua_tostring(L,3),lua_objlen(L,3));

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFTP::GetDirList(wxArrayString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetDirList(files, wildcard);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxFTP::GetFileSize(const wxString & filename)
	static int _bind_GetFileSize(lua_State *L) {
		if (!_lg_typecheck_GetFileSize(L)) {
			luaL_error(L, "luna typecheck failed in int wxFTP::GetFileSize(const wxString & filename) function, expected prototype:\nint wxFTP::GetFileSize(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFTP::GetFileSize(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetFileSize(filename);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFTP::GetFilesList(wxArrayString & files, const wxString & wildcard = wxEmptyString)
	static int _bind_GetFilesList(lua_State *L) {
		if (!_lg_typecheck_GetFilesList(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFTP::GetFilesList(wxArrayString & files, const wxString & wildcard = wxEmptyString) function, expected prototype:\nbool wxFTP::GetFilesList(wxArrayString & files, const wxString & wildcard = wxEmptyString)\nClass arguments details:\narg 1 ID = 59507769\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxArrayString* files_ptr=(Luna< wxArrayString >::check(L,2));
		if( !files_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg files in wxFTP::GetFilesList function");
		}
		wxArrayString & files=*files_ptr;
		wxString wildcard(lua_tostring(L,3),lua_objlen(L,3));

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFTP::GetFilesList(wxArrayString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetFilesList(files, wildcard);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxInputStream * wxFTP::GetInputStream(const wxString & path)
	static int _bind_GetInputStream(lua_State *L) {
		if (!_lg_typecheck_GetInputStream(L)) {
			luaL_error(L, "luna typecheck failed in wxInputStream * wxFTP::GetInputStream(const wxString & path) function, expected prototype:\nwxInputStream * wxFTP::GetInputStream(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxInputStream * wxFTP::GetInputStream(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxInputStream * lret = self->GetInputStream(path);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxInputStream >::push(L,lret,false);

		return 1;
	}

	// wxOutputStream * wxFTP::GetOutputStream(const wxString & file)
	static int _bind_GetOutputStream(lua_State *L) {
		if (!_lg_typecheck_GetOutputStream(L)) {
			luaL_error(L, "luna typecheck failed in wxOutputStream * wxFTP::GetOutputStream(const wxString & file) function, expected prototype:\nwxOutputStream * wxFTP::GetOutputStream(const wxString & file)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString file(lua_tostring(L,2),lua_objlen(L,2));

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxOutputStream * wxFTP::GetOutputStream(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxOutputStream * lret = self->GetOutputStream(file);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxOutputStream >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxFTP::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxFTP::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxFTP::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxFTP::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxFTP::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxFTP::base_GetLocal(wxSockAddress & addr) const
	static int _bind_base_GetLocal(lua_State *L) {
		if (!_lg_typecheck_base_GetLocal(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFTP::base_GetLocal(wxSockAddress & addr) const function, expected prototype:\nbool wxFTP::base_GetLocal(wxSockAddress & addr) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSockAddress* addr_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,2));
		if( !addr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg addr in wxFTP::base_GetLocal function");
		}
		wxSockAddress & addr=*addr_ptr;

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFTP::base_GetLocal(wxSockAddress &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFTP::GetLocal(addr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFTP::base_GetPeer(wxSockAddress & addr) const
	static int _bind_base_GetPeer(lua_State *L) {
		if (!_lg_typecheck_base_GetPeer(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFTP::base_GetPeer(wxSockAddress & addr) const function, expected prototype:\nbool wxFTP::base_GetPeer(wxSockAddress & addr) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSockAddress* addr_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,2));
		if( !addr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg addr in wxFTP::base_GetPeer function");
		}
		wxSockAddress & addr=*addr_ptr;

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFTP::base_GetPeer(wxSockAddress &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFTP::GetPeer(addr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFTP::base_SetLocal(const wxIPV4address & local)
	static int _bind_base_SetLocal(lua_State *L) {
		if (!_lg_typecheck_base_SetLocal(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFTP::base_SetLocal(const wxIPV4address & local) function, expected prototype:\nbool wxFTP::base_SetLocal(const wxIPV4address & local)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxIPV4address* local_ptr=(Luna< wxObject >::checkSubType< wxIPV4address >(L,2));
		if( !local_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg local in wxFTP::base_SetLocal function");
		}
		const wxIPV4address & local=*local_ptr;

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFTP::base_SetLocal(const wxIPV4address &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFTP::SetLocal(local);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxProtocolError wxFTP::base_GetError() const
	static int _bind_base_GetError(lua_State *L) {
		if (!_lg_typecheck_base_GetError(L)) {
			luaL_error(L, "luna typecheck failed in wxProtocolError wxFTP::base_GetError() const function, expected prototype:\nwxProtocolError wxFTP::base_GetError() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxProtocolError wxFTP::base_GetError() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxProtocolError lret = self->wxFTP::GetError();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFTP::base_Connect(const wxString & host)
	static int _bind_base_Connect_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Connect_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFTP::base_Connect(const wxString & host) function, expected prototype:\nbool wxFTP::base_Connect(const wxString & host)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString host(lua_tostring(L,2),lua_objlen(L,2));

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFTP::base_Connect(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFTP::Connect(host);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFTP::base_Connect(const wxString & host, unsigned short port)
	static int _bind_base_Connect_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Connect_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFTP::base_Connect(const wxString & host, unsigned short port) function, expected prototype:\nbool wxFTP::base_Connect(const wxString & host, unsigned short port)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString host(lua_tostring(L,2),lua_objlen(L,2));
		unsigned short port=(unsigned short)lua_tointeger(L,3);

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFTP::base_Connect(const wxString &, unsigned short). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFTP::Connect(host, port);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxFTP::base_Connect
	static int _bind_base_Connect(lua_State *L) {
		if (_lg_typecheck_base_Connect_overload_1(L)) return _bind_base_Connect_overload_1(L);
		if (_lg_typecheck_base_Connect_overload_2(L)) return _bind_base_Connect_overload_2(L);

		luaL_error(L, "error in function base_Connect, cannot match any of the overloads for function base_Connect:\n  base_Connect(const wxString &)\n  base_Connect(const wxString &, unsigned short)\n");
		return 0;
	}

	// bool wxFTP::base_Abort()
	static int _bind_base_Abort(lua_State *L) {
		if (!_lg_typecheck_base_Abort(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFTP::base_Abort() function, expected prototype:\nbool wxFTP::base_Abort()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFTP::base_Abort(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFTP::Abort();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFTP::base_Close()
	static int _bind_base_Close(lua_State *L) {
		if (!_lg_typecheck_base_Close(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFTP::base_Close() function, expected prototype:\nbool wxFTP::base_Close()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFTP::base_Close(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFTP::Close();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFTP::base_SetPassword(const wxString & passwd)
	static int _bind_base_SetPassword(lua_State *L) {
		if (!_lg_typecheck_base_SetPassword(L)) {
			luaL_error(L, "luna typecheck failed in void wxFTP::base_SetPassword(const wxString & passwd) function, expected prototype:\nvoid wxFTP::base_SetPassword(const wxString & passwd)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString passwd(lua_tostring(L,2),lua_objlen(L,2));

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFTP::base_SetPassword(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFTP::SetPassword(passwd);

		return 0;
	}

	// void wxFTP::base_SetUser(const wxString & user)
	static int _bind_base_SetUser(lua_State *L) {
		if (!_lg_typecheck_base_SetUser(L)) {
			luaL_error(L, "luna typecheck failed in void wxFTP::base_SetUser(const wxString & user) function, expected prototype:\nvoid wxFTP::base_SetUser(const wxString & user)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString user(lua_tostring(L,2),lua_objlen(L,2));

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFTP::base_SetUser(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFTP::SetUser(user);

		return 0;
	}

	// wxInputStream * wxFTP::base_GetInputStream(const wxString & path)
	static int _bind_base_GetInputStream(lua_State *L) {
		if (!_lg_typecheck_base_GetInputStream(L)) {
			luaL_error(L, "luna typecheck failed in wxInputStream * wxFTP::base_GetInputStream(const wxString & path) function, expected prototype:\nwxInputStream * wxFTP::base_GetInputStream(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxInputStream * wxFTP::base_GetInputStream(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxInputStream * lret = self->wxFTP::GetInputStream(path);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxInputStream >::push(L,lret,false);

		return 1;
	}

	// wxOutputStream * wxFTP::base_GetOutputStream(const wxString & file)
	static int _bind_base_GetOutputStream(lua_State *L) {
		if (!_lg_typecheck_base_GetOutputStream(L)) {
			luaL_error(L, "luna typecheck failed in wxOutputStream * wxFTP::base_GetOutputStream(const wxString & file) function, expected prototype:\nwxOutputStream * wxFTP::base_GetOutputStream(const wxString & file)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString file(lua_tostring(L,2),lua_objlen(L,2));

		wxFTP* self=Luna< wxObject >::checkSubType< wxFTP >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxOutputStream * wxFTP::base_GetOutputStream(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxOutputStream * lret = self->wxFTP::GetOutputStream(file);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxOutputStream >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxFTP* LunaTraits< wxFTP >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFTP::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxString wxProtocol::GetContentType() const
}

void LunaTraits< wxFTP >::_bind_dtor(wxFTP* obj) {
	delete obj;
}

const char LunaTraits< wxFTP >::className[] = "wxFTP";
const char LunaTraits< wxFTP >::fullName[] = "wxFTP";
const char LunaTraits< wxFTP >::moduleName[] = "wx";
const char* LunaTraits< wxFTP >::parents[] = {"wx.wxProtocol", 0};
const int LunaTraits< wxFTP >::hash = 13543868;
const int LunaTraits< wxFTP >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFTP >::methods[] = {
	{"Connect", &luna_wrapper_wxFTP::_bind_Connect},
	{"Abort", &luna_wrapper_wxFTP::_bind_Abort},
	{"Close", &luna_wrapper_wxFTP::_bind_Close},
	{"CheckCommand", &luna_wrapper_wxFTP::_bind_CheckCommand},
	{"GetLastResult", &luna_wrapper_wxFTP::_bind_GetLastResult},
	{"SendCommand", &luna_wrapper_wxFTP::_bind_SendCommand},
	{"SetAscii", &luna_wrapper_wxFTP::_bind_SetAscii},
	{"SetBinary", &luna_wrapper_wxFTP::_bind_SetBinary},
	{"SetPassive", &luna_wrapper_wxFTP::_bind_SetPassive},
	{"SetPassword", &luna_wrapper_wxFTP::_bind_SetPassword},
	{"SetTransferMode", &luna_wrapper_wxFTP::_bind_SetTransferMode},
	{"SetUser", &luna_wrapper_wxFTP::_bind_SetUser},
	{"ChDir", &luna_wrapper_wxFTP::_bind_ChDir},
	{"MkDir", &luna_wrapper_wxFTP::_bind_MkDir},
	{"Pwd", &luna_wrapper_wxFTP::_bind_Pwd},
	{"Rename", &luna_wrapper_wxFTP::_bind_Rename},
	{"RmDir", &luna_wrapper_wxFTP::_bind_RmDir},
	{"RmFile", &luna_wrapper_wxFTP::_bind_RmFile},
	{"FileExists", &luna_wrapper_wxFTP::_bind_FileExists},
	{"GetDirList", &luna_wrapper_wxFTP::_bind_GetDirList},
	{"GetFileSize", &luna_wrapper_wxFTP::_bind_GetFileSize},
	{"GetFilesList", &luna_wrapper_wxFTP::_bind_GetFilesList},
	{"GetInputStream", &luna_wrapper_wxFTP::_bind_GetInputStream},
	{"GetOutputStream", &luna_wrapper_wxFTP::_bind_GetOutputStream},
	{"base_GetClassInfo", &luna_wrapper_wxFTP::_bind_base_GetClassInfo},
	{"base_GetLocal", &luna_wrapper_wxFTP::_bind_base_GetLocal},
	{"base_GetPeer", &luna_wrapper_wxFTP::_bind_base_GetPeer},
	{"base_SetLocal", &luna_wrapper_wxFTP::_bind_base_SetLocal},
	{"base_GetError", &luna_wrapper_wxFTP::_bind_base_GetError},
	{"base_Connect", &luna_wrapper_wxFTP::_bind_base_Connect},
	{"base_Abort", &luna_wrapper_wxFTP::_bind_base_Abort},
	{"base_Close", &luna_wrapper_wxFTP::_bind_base_Close},
	{"base_SetPassword", &luna_wrapper_wxFTP::_bind_base_SetPassword},
	{"base_SetUser", &luna_wrapper_wxFTP::_bind_base_SetUser},
	{"base_GetInputStream", &luna_wrapper_wxFTP::_bind_base_GetInputStream},
	{"base_GetOutputStream", &luna_wrapper_wxFTP::_bind_base_GetOutputStream},
	{"fromVoid", &luna_wrapper_wxFTP::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFTP::_bind_asVoid},
	{"getTable", &luna_wrapper_wxFTP::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxFTP >::converters[] = {
	{"wxObject", &luna_wrapper_wxFTP::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFTP >::enumValues[] = {
	{"NONE", wxFTP::NONE},
	{"ASCII", wxFTP::ASCII},
	{"BINARY", wxFTP::BINARY},
	{0,0}
};


