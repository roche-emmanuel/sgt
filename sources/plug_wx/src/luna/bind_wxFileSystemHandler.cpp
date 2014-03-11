#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFileSystemHandler.h>

class luna_wrapper_wxFileSystemHandler {
public:
	typedef Luna< wxFileSystemHandler > luna_t;

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

		wxFileSystemHandler* self= (wxFileSystemHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFileSystemHandler >::push(L,self,false);
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
		//wxFileSystemHandler* ptr= dynamic_cast< wxFileSystemHandler* >(Luna< wxObject >::check(L,1));
		wxFileSystemHandler* ptr= luna_caster< wxObject, wxFileSystemHandler >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileSystemHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CanOpen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindFirst(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OpenFile(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMimeTypeFromExt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_FindFirst(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_FindNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFileSystemHandler::wxFileSystemHandler(lua_Table * data)
	static wxFileSystemHandler* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxFileSystemHandler::wxFileSystemHandler(lua_Table * data) function, expected prototype:\nwxFileSystemHandler::wxFileSystemHandler(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxFileSystemHandler(L,NULL);
	}


	// Function binds:
	// bool wxFileSystemHandler::CanOpen(const wxString & location)
	static int _bind_CanOpen(lua_State *L) {
		if (!_lg_typecheck_CanOpen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileSystemHandler::CanOpen(const wxString & location) function, expected prototype:\nbool wxFileSystemHandler::CanOpen(const wxString & location)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString location(lua_tostring(L,2),lua_objlen(L,2));

		wxFileSystemHandler* self=Luna< wxObject >::checkSubType< wxFileSystemHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileSystemHandler::CanOpen(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanOpen(location);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxFileSystemHandler::FindFirst(const wxString & wildcard, int flags = 0)
	static int _bind_FindFirst(lua_State *L) {
		if (!_lg_typecheck_FindFirst(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileSystemHandler::FindFirst(const wxString & wildcard, int flags = 0) function, expected prototype:\nwxString wxFileSystemHandler::FindFirst(const wxString & wildcard, int flags = 0)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString wildcard(lua_tostring(L,2),lua_objlen(L,2));
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		wxFileSystemHandler* self=Luna< wxObject >::checkSubType< wxFileSystemHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileSystemHandler::FindFirst(const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->FindFirst(wildcard, flags);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxFileSystemHandler::FindNext()
	static int _bind_FindNext(lua_State *L) {
		if (!_lg_typecheck_FindNext(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileSystemHandler::FindNext() function, expected prototype:\nwxString wxFileSystemHandler::FindNext()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileSystemHandler* self=Luna< wxObject >::checkSubType< wxFileSystemHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileSystemHandler::FindNext(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->FindNext();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxFSFile * wxFileSystemHandler::OpenFile(wxFileSystem & fs, const wxString & location)
	static int _bind_OpenFile(lua_State *L) {
		if (!_lg_typecheck_OpenFile(L)) {
			luaL_error(L, "luna typecheck failed in wxFSFile * wxFileSystemHandler::OpenFile(wxFileSystem & fs, const wxString & location) function, expected prototype:\nwxFSFile * wxFileSystemHandler::OpenFile(wxFileSystem & fs, const wxString & location)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFileSystem* fs_ptr=(Luna< wxObject >::checkSubType< wxFileSystem >(L,2));
		if( !fs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fs in wxFileSystemHandler::OpenFile function");
		}
		wxFileSystem & fs=*fs_ptr;
		wxString location(lua_tostring(L,3),lua_objlen(L,3));

		wxFileSystemHandler* self=Luna< wxObject >::checkSubType< wxFileSystemHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFSFile * wxFileSystemHandler::OpenFile(wxFileSystem &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFSFile * lret = self->OpenFile(fs, location);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFSFile >::push(L,lret,false);

		return 1;
	}

	// static wxString wxFileSystemHandler::GetMimeTypeFromExt(const wxString & location)
	static int _bind_GetMimeTypeFromExt(lua_State *L) {
		if (!_lg_typecheck_GetMimeTypeFromExt(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxFileSystemHandler::GetMimeTypeFromExt(const wxString & location) function, expected prototype:\nstatic wxString wxFileSystemHandler::GetMimeTypeFromExt(const wxString & location)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString location(lua_tostring(L,1),lua_objlen(L,1));

		wxString lret = wxFileSystemHandler::GetMimeTypeFromExt(location);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxClassInfo * wxFileSystemHandler::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxFileSystemHandler::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxFileSystemHandler::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileSystemHandler* self=Luna< wxObject >::checkSubType< wxFileSystemHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxFileSystemHandler::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxFileSystemHandler::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxString wxFileSystemHandler::base_FindFirst(const wxString & wildcard, int flags = 0)
	static int _bind_base_FindFirst(lua_State *L) {
		if (!_lg_typecheck_base_FindFirst(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileSystemHandler::base_FindFirst(const wxString & wildcard, int flags = 0) function, expected prototype:\nwxString wxFileSystemHandler::base_FindFirst(const wxString & wildcard, int flags = 0)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString wildcard(lua_tostring(L,2),lua_objlen(L,2));
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		wxFileSystemHandler* self=Luna< wxObject >::checkSubType< wxFileSystemHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileSystemHandler::base_FindFirst(const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxFileSystemHandler::FindFirst(wildcard, flags);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxFileSystemHandler::base_FindNext()
	static int _bind_base_FindNext(lua_State *L) {
		if (!_lg_typecheck_base_FindNext(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileSystemHandler::base_FindNext() function, expected prototype:\nwxString wxFileSystemHandler::base_FindNext()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileSystemHandler* self=Luna< wxObject >::checkSubType< wxFileSystemHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileSystemHandler::base_FindNext(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxFileSystemHandler::FindNext();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxFileSystemHandler* LunaTraits< wxFileSystemHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFileSystemHandler::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool wxFileSystemHandler::CanOpen(const wxString & location)
	// wxFSFile * wxFileSystemHandler::OpenFile(wxFileSystem & fs, const wxString & location)
}

void LunaTraits< wxFileSystemHandler >::_bind_dtor(wxFileSystemHandler* obj) {
	delete obj;
}

const char LunaTraits< wxFileSystemHandler >::className[] = "wxFileSystemHandler";
const char LunaTraits< wxFileSystemHandler >::fullName[] = "wxFileSystemHandler";
const char LunaTraits< wxFileSystemHandler >::moduleName[] = "wx";
const char* LunaTraits< wxFileSystemHandler >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxFileSystemHandler >::hash = 30991035;
const int LunaTraits< wxFileSystemHandler >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFileSystemHandler >::methods[] = {
	{"CanOpen", &luna_wrapper_wxFileSystemHandler::_bind_CanOpen},
	{"FindFirst", &luna_wrapper_wxFileSystemHandler::_bind_FindFirst},
	{"FindNext", &luna_wrapper_wxFileSystemHandler::_bind_FindNext},
	{"OpenFile", &luna_wrapper_wxFileSystemHandler::_bind_OpenFile},
	{"GetMimeTypeFromExt", &luna_wrapper_wxFileSystemHandler::_bind_GetMimeTypeFromExt},
	{"base_GetClassInfo", &luna_wrapper_wxFileSystemHandler::_bind_base_GetClassInfo},
	{"base_FindFirst", &luna_wrapper_wxFileSystemHandler::_bind_base_FindFirst},
	{"base_FindNext", &luna_wrapper_wxFileSystemHandler::_bind_base_FindNext},
	{"fromVoid", &luna_wrapper_wxFileSystemHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFileSystemHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_wxFileSystemHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileSystemHandler >::converters[] = {
	{"wxObject", &luna_wrapper_wxFileSystemHandler::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileSystemHandler >::enumValues[] = {
	{0,0}
};


