#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFileSystem.h>

class luna_wrapper_wxFileSystem {
public:
	typedef Luna< wxFileSystem > luna_t;

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

		wxFileSystem* self= (wxFileSystem*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFileSystem >::push(L,self,false);
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
		//wxFileSystem* ptr= dynamic_cast< wxFileSystem* >(Luna< wxObject >::check(L,1));
		wxFileSystem* ptr= luna_caster< wxObject, wxFileSystem >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileSystem >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_ChangePathTo(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindFileInPath(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
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

	inline static bool _lg_typecheck_GetPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OpenFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FileNameToURL(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53530938) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasHandlerForPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_URLToFileName(lua_State *L) {
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
	// wxFileSystem::wxFileSystem()
	static wxFileSystem* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxFileSystem::wxFileSystem() function, expected prototype:\nwxFileSystem::wxFileSystem()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxFileSystem();
	}

	// wxFileSystem::wxFileSystem(lua_Table * data)
	static wxFileSystem* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxFileSystem::wxFileSystem(lua_Table * data) function, expected prototype:\nwxFileSystem::wxFileSystem(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxFileSystem(L,NULL);
	}

	// Overload binder for wxFileSystem::wxFileSystem
	static wxFileSystem* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxFileSystem, cannot match any of the overloads for function wxFileSystem:\n  wxFileSystem()\n  wxFileSystem(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void wxFileSystem::ChangePathTo(const wxString & location, bool is_dir = false)
	static int _bind_ChangePathTo(lua_State *L) {
		if (!_lg_typecheck_ChangePathTo(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileSystem::ChangePathTo(const wxString & location, bool is_dir = false) function, expected prototype:\nvoid wxFileSystem::ChangePathTo(const wxString & location, bool is_dir = false)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString location(lua_tostring(L,2),lua_objlen(L,2));
		bool is_dir=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxFileSystem* self=Luna< wxObject >::checkSubType< wxFileSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileSystem::ChangePathTo(const wxString &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ChangePathTo(location, is_dir);

		return 0;
	}

	// bool wxFileSystem::FindFileInPath(wxString * pStr, const wxString & path, const wxString & file)
	static int _bind_FindFileInPath(lua_State *L) {
		if (!_lg_typecheck_FindFileInPath(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileSystem::FindFileInPath(wxString * pStr, const wxString & path, const wxString & file) function, expected prototype:\nbool wxFileSystem::FindFileInPath(wxString * pStr, const wxString & path, const wxString & file)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString pStr(lua_tostring(L,2),lua_objlen(L,2));
		wxString path(lua_tostring(L,3),lua_objlen(L,3));
		wxString file(lua_tostring(L,4),lua_objlen(L,4));

		wxFileSystem* self=Luna< wxObject >::checkSubType< wxFileSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileSystem::FindFileInPath(wxString *, const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FindFileInPath(&pStr, path, file);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxFileSystem::FindFirst(const wxString & wildcard, int flags = 0)
	static int _bind_FindFirst(lua_State *L) {
		if (!_lg_typecheck_FindFirst(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileSystem::FindFirst(const wxString & wildcard, int flags = 0) function, expected prototype:\nwxString wxFileSystem::FindFirst(const wxString & wildcard, int flags = 0)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString wildcard(lua_tostring(L,2),lua_objlen(L,2));
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		wxFileSystem* self=Luna< wxObject >::checkSubType< wxFileSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileSystem::FindFirst(const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->FindFirst(wildcard, flags);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxFileSystem::FindNext()
	static int _bind_FindNext(lua_State *L) {
		if (!_lg_typecheck_FindNext(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileSystem::FindNext() function, expected prototype:\nwxString wxFileSystem::FindNext()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileSystem* self=Luna< wxObject >::checkSubType< wxFileSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileSystem::FindNext(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->FindNext();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxFileSystem::GetPath() const
	static int _bind_GetPath(lua_State *L) {
		if (!_lg_typecheck_GetPath(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileSystem::GetPath() const function, expected prototype:\nwxString wxFileSystem::GetPath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileSystem* self=Luna< wxObject >::checkSubType< wxFileSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileSystem::GetPath() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetPath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxFSFile * wxFileSystem::OpenFile(const wxString & location, int flags = ::wxFS_READ)
	static int _bind_OpenFile(lua_State *L) {
		if (!_lg_typecheck_OpenFile(L)) {
			luaL_error(L, "luna typecheck failed in wxFSFile * wxFileSystem::OpenFile(const wxString & location, int flags = ::wxFS_READ) function, expected prototype:\nwxFSFile * wxFileSystem::OpenFile(const wxString & location, int flags = ::wxFS_READ)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString location(lua_tostring(L,2),lua_objlen(L,2));
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxFS_READ;

		wxFileSystem* self=Luna< wxObject >::checkSubType< wxFileSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFSFile * wxFileSystem::OpenFile(const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFSFile * lret = self->OpenFile(location, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFSFile >::push(L,lret,false);

		return 1;
	}

	// static void wxFileSystem::AddHandler(wxFileSystemHandler * handler)
	static int _bind_AddHandler(lua_State *L) {
		if (!_lg_typecheck_AddHandler(L)) {
			luaL_error(L, "luna typecheck failed in static void wxFileSystem::AddHandler(wxFileSystemHandler * handler) function, expected prototype:\nstatic void wxFileSystem::AddHandler(wxFileSystemHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFileSystemHandler* handler=(Luna< wxObject >::checkSubType< wxFileSystemHandler >(L,1));

		wxFileSystem::AddHandler(handler);

		return 0;
	}

	// static wxString wxFileSystem::FileNameToURL(const wxFileName & filename)
	static int _bind_FileNameToURL(lua_State *L) {
		if (!_lg_typecheck_FileNameToURL(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxFileSystem::FileNameToURL(const wxFileName & filename) function, expected prototype:\nstatic wxString wxFileSystem::FileNameToURL(const wxFileName & filename)\nClass arguments details:\narg 1 ID = 53530938\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFileName* filename_ptr=(Luna< wxFileName >::check(L,1));
		if( !filename_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg filename in wxFileSystem::FileNameToURL function");
		}
		const wxFileName & filename=*filename_ptr;

		wxString lret = wxFileSystem::FileNameToURL(filename);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static bool wxFileSystem::HasHandlerForPath(const wxString & location)
	static int _bind_HasHandlerForPath(lua_State *L) {
		if (!_lg_typecheck_HasHandlerForPath(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxFileSystem::HasHandlerForPath(const wxString & location) function, expected prototype:\nstatic bool wxFileSystem::HasHandlerForPath(const wxString & location)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString location(lua_tostring(L,1),lua_objlen(L,1));

		bool lret = wxFileSystem::HasHandlerForPath(location);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static wxFileName wxFileSystem::URLToFileName(const wxString & url)
	static int _bind_URLToFileName(lua_State *L) {
		if (!_lg_typecheck_URLToFileName(L)) {
			luaL_error(L, "luna typecheck failed in static wxFileName wxFileSystem::URLToFileName(const wxString & url) function, expected prototype:\nstatic wxFileName wxFileSystem::URLToFileName(const wxString & url)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString url(lua_tostring(L,1),lua_objlen(L,1));

		wxFileName stack_lret = wxFileSystem::URLToFileName(url);
		wxFileName* lret = new wxFileName(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileName >::push(L,lret,true);

		return 1;
	}

	// wxClassInfo * wxFileSystem::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxFileSystem::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxFileSystem::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileSystem* self=Luna< wxObject >::checkSubType< wxFileSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxFileSystem::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxFileSystem::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxFileSystem* LunaTraits< wxFileSystem >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFileSystem::_bind_ctor(L);
}

void LunaTraits< wxFileSystem >::_bind_dtor(wxFileSystem* obj) {
	delete obj;
}

const char LunaTraits< wxFileSystem >::className[] = "wxFileSystem";
const char LunaTraits< wxFileSystem >::fullName[] = "wxFileSystem";
const char LunaTraits< wxFileSystem >::moduleName[] = "wx";
const char* LunaTraits< wxFileSystem >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxFileSystem >::hash = 8732382;
const int LunaTraits< wxFileSystem >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFileSystem >::methods[] = {
	{"ChangePathTo", &luna_wrapper_wxFileSystem::_bind_ChangePathTo},
	{"FindFileInPath", &luna_wrapper_wxFileSystem::_bind_FindFileInPath},
	{"FindFirst", &luna_wrapper_wxFileSystem::_bind_FindFirst},
	{"FindNext", &luna_wrapper_wxFileSystem::_bind_FindNext},
	{"GetPath", &luna_wrapper_wxFileSystem::_bind_GetPath},
	{"OpenFile", &luna_wrapper_wxFileSystem::_bind_OpenFile},
	{"AddHandler", &luna_wrapper_wxFileSystem::_bind_AddHandler},
	{"FileNameToURL", &luna_wrapper_wxFileSystem::_bind_FileNameToURL},
	{"HasHandlerForPath", &luna_wrapper_wxFileSystem::_bind_HasHandlerForPath},
	{"URLToFileName", &luna_wrapper_wxFileSystem::_bind_URLToFileName},
	{"base_GetClassInfo", &luna_wrapper_wxFileSystem::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxFileSystem::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFileSystem::_bind_asVoid},
	{"getTable", &luna_wrapper_wxFileSystem::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileSystem >::converters[] = {
	{"wxObject", &luna_wrapper_wxFileSystem::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileSystem >::enumValues[] = {
	{0,0}
};


