#include <plug_common.h>

#include <luna/wrappers/wrapper_wxStandardPaths.h>

class luna_wrapper_wxStandardPaths {
public:
	typedef Luna< wxStandardPaths > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxStandardPaths,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,90497708) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxStandardPaths*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxStandardPaths* rhs =(Luna< wxStandardPaths >::check(L,2));
		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
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

		wxStandardPaths* self= (wxStandardPaths*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxStandardPaths >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,90497708) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxStandardPaths >::check(L,1));
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

		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxStandardPaths");
		
		return luna_dynamicCast(L,converters,"wxStandardPaths",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_DontIgnoreAppSubDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAppDocumentsDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetConfigDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDataDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDocumentsDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetExecutablePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLocalDataDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLocalizedResourcesDir(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPluginsDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetResourcesDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTempDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUserConfigDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUserDataDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUserLocalDataDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IgnoreAppSubDir(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IgnoreAppBuildSubDirs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_UseAppInfo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Get(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MSWGetShellDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetAppDocumentsDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetConfigDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetDataDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetDocumentsDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetExecutablePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetLocalDataDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetLocalizedResourcesDir(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetPluginsDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetResourcesDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetTempDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetUserConfigDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetUserDataDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetUserLocalDataDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxStandardPaths::DontIgnoreAppSubDir()
	static int _bind_DontIgnoreAppSubDir(lua_State *L) {
		if (!_lg_typecheck_DontIgnoreAppSubDir(L)) {
			luaL_error(L, "luna typecheck failed in void wxStandardPaths::DontIgnoreAppSubDir() function, expected prototype:\nvoid wxStandardPaths::DontIgnoreAppSubDir()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStandardPaths::DontIgnoreAppSubDir(). Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DontIgnoreAppSubDir();

		return 0;
	}

	// wxString wxStandardPaths::GetAppDocumentsDir() const
	static int _bind_GetAppDocumentsDir(lua_State *L) {
		if (!_lg_typecheck_GetAppDocumentsDir(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetAppDocumentsDir() const function, expected prototype:\nwxString wxStandardPaths::GetAppDocumentsDir() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetAppDocumentsDir() const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetAppDocumentsDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::GetConfigDir() const
	static int _bind_GetConfigDir(lua_State *L) {
		if (!_lg_typecheck_GetConfigDir(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetConfigDir() const function, expected prototype:\nwxString wxStandardPaths::GetConfigDir() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetConfigDir() const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetConfigDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::GetDataDir() const
	static int _bind_GetDataDir(lua_State *L) {
		if (!_lg_typecheck_GetDataDir(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetDataDir() const function, expected prototype:\nwxString wxStandardPaths::GetDataDir() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetDataDir() const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetDataDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::GetDocumentsDir() const
	static int _bind_GetDocumentsDir(lua_State *L) {
		if (!_lg_typecheck_GetDocumentsDir(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetDocumentsDir() const function, expected prototype:\nwxString wxStandardPaths::GetDocumentsDir() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetDocumentsDir() const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetDocumentsDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::GetExecutablePath() const
	static int _bind_GetExecutablePath(lua_State *L) {
		if (!_lg_typecheck_GetExecutablePath(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetExecutablePath() const function, expected prototype:\nwxString wxStandardPaths::GetExecutablePath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetExecutablePath() const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetExecutablePath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::GetLocalDataDir() const
	static int _bind_GetLocalDataDir(lua_State *L) {
		if (!_lg_typecheck_GetLocalDataDir(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetLocalDataDir() const function, expected prototype:\nwxString wxStandardPaths::GetLocalDataDir() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetLocalDataDir() const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetLocalDataDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::GetLocalizedResourcesDir(const wxString & lang, wxStandardPaths::ResourceCat category = wxStandardPaths::ResourceCat_None) const
	static int _bind_GetLocalizedResourcesDir(lua_State *L) {
		if (!_lg_typecheck_GetLocalizedResourcesDir(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetLocalizedResourcesDir(const wxString & lang, wxStandardPaths::ResourceCat category = wxStandardPaths::ResourceCat_None) const function, expected prototype:\nwxString wxStandardPaths::GetLocalizedResourcesDir(const wxString & lang, wxStandardPaths::ResourceCat category = wxStandardPaths::ResourceCat_None) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString lang(lua_tostring(L,2),lua_objlen(L,2));
		wxStandardPaths::ResourceCat category=luatop>2 ? (wxStandardPaths::ResourceCat)lua_tointeger(L,3) : (wxStandardPaths::ResourceCat)wxStandardPaths::ResourceCat_None;

		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetLocalizedResourcesDir(const wxString &, wxStandardPaths::ResourceCat) const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetLocalizedResourcesDir(lang, category);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::GetPluginsDir() const
	static int _bind_GetPluginsDir(lua_State *L) {
		if (!_lg_typecheck_GetPluginsDir(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetPluginsDir() const function, expected prototype:\nwxString wxStandardPaths::GetPluginsDir() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetPluginsDir() const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetPluginsDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::GetResourcesDir() const
	static int _bind_GetResourcesDir(lua_State *L) {
		if (!_lg_typecheck_GetResourcesDir(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetResourcesDir() const function, expected prototype:\nwxString wxStandardPaths::GetResourcesDir() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetResourcesDir() const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetResourcesDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::GetTempDir() const
	static int _bind_GetTempDir(lua_State *L) {
		if (!_lg_typecheck_GetTempDir(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetTempDir() const function, expected prototype:\nwxString wxStandardPaths::GetTempDir() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetTempDir() const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetTempDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::GetUserConfigDir() const
	static int _bind_GetUserConfigDir(lua_State *L) {
		if (!_lg_typecheck_GetUserConfigDir(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetUserConfigDir() const function, expected prototype:\nwxString wxStandardPaths::GetUserConfigDir() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetUserConfigDir() const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetUserConfigDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::GetUserDataDir() const
	static int _bind_GetUserDataDir(lua_State *L) {
		if (!_lg_typecheck_GetUserDataDir(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetUserDataDir() const function, expected prototype:\nwxString wxStandardPaths::GetUserDataDir() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetUserDataDir() const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetUserDataDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::GetUserLocalDataDir() const
	static int _bind_GetUserLocalDataDir(lua_State *L) {
		if (!_lg_typecheck_GetUserLocalDataDir(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetUserLocalDataDir() const function, expected prototype:\nwxString wxStandardPaths::GetUserLocalDataDir() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetUserLocalDataDir() const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetUserLocalDataDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxStandardPaths::IgnoreAppSubDir(const wxString & subdirPattern)
	static int _bind_IgnoreAppSubDir(lua_State *L) {
		if (!_lg_typecheck_IgnoreAppSubDir(L)) {
			luaL_error(L, "luna typecheck failed in void wxStandardPaths::IgnoreAppSubDir(const wxString & subdirPattern) function, expected prototype:\nvoid wxStandardPaths::IgnoreAppSubDir(const wxString & subdirPattern)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString subdirPattern(lua_tostring(L,2),lua_objlen(L,2));

		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStandardPaths::IgnoreAppSubDir(const wxString &). Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IgnoreAppSubDir(subdirPattern);

		return 0;
	}

	// void wxStandardPaths::IgnoreAppBuildSubDirs()
	static int _bind_IgnoreAppBuildSubDirs(lua_State *L) {
		if (!_lg_typecheck_IgnoreAppBuildSubDirs(L)) {
			luaL_error(L, "luna typecheck failed in void wxStandardPaths::IgnoreAppBuildSubDirs() function, expected prototype:\nvoid wxStandardPaths::IgnoreAppBuildSubDirs()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStandardPaths::IgnoreAppBuildSubDirs(). Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IgnoreAppBuildSubDirs();

		return 0;
	}

	// void wxStandardPaths::UseAppInfo(int info)
	static int _bind_UseAppInfo(lua_State *L) {
		if (!_lg_typecheck_UseAppInfo(L)) {
			luaL_error(L, "luna typecheck failed in void wxStandardPaths::UseAppInfo(int info) function, expected prototype:\nvoid wxStandardPaths::UseAppInfo(int info)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int info=(int)lua_tointeger(L,2);

		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStandardPaths::UseAppInfo(int). Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UseAppInfo(info);

		return 0;
	}

	// static wxStandardPaths & wxStandardPaths::Get()
	static int _bind_Get(lua_State *L) {
		if (!_lg_typecheck_Get(L)) {
			luaL_error(L, "luna typecheck failed in static wxStandardPaths & wxStandardPaths::Get() function, expected prototype:\nstatic wxStandardPaths & wxStandardPaths::Get()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		const wxStandardPaths* lret = &wxStandardPaths::Get();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStandardPaths >::push(L,lret,false);

		return 1;
	}

	// static wxString wxStandardPaths::MSWGetShellDir(int csidl)
	static int _bind_MSWGetShellDir(lua_State *L) {
		if (!_lg_typecheck_MSWGetShellDir(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxStandardPaths::MSWGetShellDir(int csidl) function, expected prototype:\nstatic wxString wxStandardPaths::MSWGetShellDir(int csidl)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int csidl=(int)lua_tointeger(L,1);

		wxString lret = wxStandardPaths::MSWGetShellDir(csidl);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::base_GetAppDocumentsDir() const
	static int _bind_base_GetAppDocumentsDir(lua_State *L) {
		if (!_lg_typecheck_base_GetAppDocumentsDir(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::base_GetAppDocumentsDir() const function, expected prototype:\nwxString wxStandardPaths::base_GetAppDocumentsDir() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::base_GetAppDocumentsDir() const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxStandardPaths::GetAppDocumentsDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::base_GetConfigDir() const
	static int _bind_base_GetConfigDir(lua_State *L) {
		if (!_lg_typecheck_base_GetConfigDir(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::base_GetConfigDir() const function, expected prototype:\nwxString wxStandardPaths::base_GetConfigDir() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::base_GetConfigDir() const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxStandardPaths::GetConfigDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::base_GetDataDir() const
	static int _bind_base_GetDataDir(lua_State *L) {
		if (!_lg_typecheck_base_GetDataDir(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::base_GetDataDir() const function, expected prototype:\nwxString wxStandardPaths::base_GetDataDir() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::base_GetDataDir() const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxStandardPaths::GetDataDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::base_GetDocumentsDir() const
	static int _bind_base_GetDocumentsDir(lua_State *L) {
		if (!_lg_typecheck_base_GetDocumentsDir(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::base_GetDocumentsDir() const function, expected prototype:\nwxString wxStandardPaths::base_GetDocumentsDir() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::base_GetDocumentsDir() const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxStandardPaths::GetDocumentsDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::base_GetExecutablePath() const
	static int _bind_base_GetExecutablePath(lua_State *L) {
		if (!_lg_typecheck_base_GetExecutablePath(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::base_GetExecutablePath() const function, expected prototype:\nwxString wxStandardPaths::base_GetExecutablePath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::base_GetExecutablePath() const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxStandardPaths::GetExecutablePath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::base_GetLocalDataDir() const
	static int _bind_base_GetLocalDataDir(lua_State *L) {
		if (!_lg_typecheck_base_GetLocalDataDir(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::base_GetLocalDataDir() const function, expected prototype:\nwxString wxStandardPaths::base_GetLocalDataDir() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::base_GetLocalDataDir() const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxStandardPaths::GetLocalDataDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::base_GetLocalizedResourcesDir(const wxString & lang, wxStandardPaths::ResourceCat category = wxStandardPaths::ResourceCat_None) const
	static int _bind_base_GetLocalizedResourcesDir(lua_State *L) {
		if (!_lg_typecheck_base_GetLocalizedResourcesDir(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::base_GetLocalizedResourcesDir(const wxString & lang, wxStandardPaths::ResourceCat category = wxStandardPaths::ResourceCat_None) const function, expected prototype:\nwxString wxStandardPaths::base_GetLocalizedResourcesDir(const wxString & lang, wxStandardPaths::ResourceCat category = wxStandardPaths::ResourceCat_None) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString lang(lua_tostring(L,2),lua_objlen(L,2));
		wxStandardPaths::ResourceCat category=luatop>2 ? (wxStandardPaths::ResourceCat)lua_tointeger(L,3) : (wxStandardPaths::ResourceCat)wxStandardPaths::ResourceCat_None;

		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::base_GetLocalizedResourcesDir(const wxString &, wxStandardPaths::ResourceCat) const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxStandardPaths::GetLocalizedResourcesDir(lang, category);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::base_GetPluginsDir() const
	static int _bind_base_GetPluginsDir(lua_State *L) {
		if (!_lg_typecheck_base_GetPluginsDir(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::base_GetPluginsDir() const function, expected prototype:\nwxString wxStandardPaths::base_GetPluginsDir() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::base_GetPluginsDir() const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxStandardPaths::GetPluginsDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::base_GetResourcesDir() const
	static int _bind_base_GetResourcesDir(lua_State *L) {
		if (!_lg_typecheck_base_GetResourcesDir(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::base_GetResourcesDir() const function, expected prototype:\nwxString wxStandardPaths::base_GetResourcesDir() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::base_GetResourcesDir() const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxStandardPaths::GetResourcesDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::base_GetTempDir() const
	static int _bind_base_GetTempDir(lua_State *L) {
		if (!_lg_typecheck_base_GetTempDir(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::base_GetTempDir() const function, expected prototype:\nwxString wxStandardPaths::base_GetTempDir() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::base_GetTempDir() const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxStandardPaths::GetTempDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::base_GetUserConfigDir() const
	static int _bind_base_GetUserConfigDir(lua_State *L) {
		if (!_lg_typecheck_base_GetUserConfigDir(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::base_GetUserConfigDir() const function, expected prototype:\nwxString wxStandardPaths::base_GetUserConfigDir() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::base_GetUserConfigDir() const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxStandardPaths::GetUserConfigDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::base_GetUserDataDir() const
	static int _bind_base_GetUserDataDir(lua_State *L) {
		if (!_lg_typecheck_base_GetUserDataDir(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::base_GetUserDataDir() const function, expected prototype:\nwxString wxStandardPaths::base_GetUserDataDir() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::base_GetUserDataDir() const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxStandardPaths::GetUserDataDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::base_GetUserLocalDataDir() const
	static int _bind_base_GetUserLocalDataDir(lua_State *L) {
		if (!_lg_typecheck_base_GetUserLocalDataDir(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::base_GetUserLocalDataDir() const function, expected prototype:\nwxString wxStandardPaths::base_GetUserLocalDataDir() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::base_GetUserLocalDataDir() const. Got : '%s'\n%s",typeid(Luna< wxStandardPaths >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxStandardPaths::GetUserLocalDataDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxStandardPaths* LunaTraits< wxStandardPaths >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxStandardPaths >::_bind_dtor(wxStandardPaths* obj) {
	delete obj;
}

const char LunaTraits< wxStandardPaths >::className[] = "wxStandardPaths";
const char LunaTraits< wxStandardPaths >::fullName[] = "wxStandardPaths";
const char LunaTraits< wxStandardPaths >::moduleName[] = "wx";
const char* LunaTraits< wxStandardPaths >::parents[] = {0};
const int LunaTraits< wxStandardPaths >::hash = 90497708;
const int LunaTraits< wxStandardPaths >::uniqueIDs[] = {90497708,0};

luna_RegType LunaTraits< wxStandardPaths >::methods[] = {
	{"DontIgnoreAppSubDir", &luna_wrapper_wxStandardPaths::_bind_DontIgnoreAppSubDir},
	{"GetAppDocumentsDir", &luna_wrapper_wxStandardPaths::_bind_GetAppDocumentsDir},
	{"GetConfigDir", &luna_wrapper_wxStandardPaths::_bind_GetConfigDir},
	{"GetDataDir", &luna_wrapper_wxStandardPaths::_bind_GetDataDir},
	{"GetDocumentsDir", &luna_wrapper_wxStandardPaths::_bind_GetDocumentsDir},
	{"GetExecutablePath", &luna_wrapper_wxStandardPaths::_bind_GetExecutablePath},
	{"GetLocalDataDir", &luna_wrapper_wxStandardPaths::_bind_GetLocalDataDir},
	{"GetLocalizedResourcesDir", &luna_wrapper_wxStandardPaths::_bind_GetLocalizedResourcesDir},
	{"GetPluginsDir", &luna_wrapper_wxStandardPaths::_bind_GetPluginsDir},
	{"GetResourcesDir", &luna_wrapper_wxStandardPaths::_bind_GetResourcesDir},
	{"GetTempDir", &luna_wrapper_wxStandardPaths::_bind_GetTempDir},
	{"GetUserConfigDir", &luna_wrapper_wxStandardPaths::_bind_GetUserConfigDir},
	{"GetUserDataDir", &luna_wrapper_wxStandardPaths::_bind_GetUserDataDir},
	{"GetUserLocalDataDir", &luna_wrapper_wxStandardPaths::_bind_GetUserLocalDataDir},
	{"IgnoreAppSubDir", &luna_wrapper_wxStandardPaths::_bind_IgnoreAppSubDir},
	{"IgnoreAppBuildSubDirs", &luna_wrapper_wxStandardPaths::_bind_IgnoreAppBuildSubDirs},
	{"UseAppInfo", &luna_wrapper_wxStandardPaths::_bind_UseAppInfo},
	{"Get", &luna_wrapper_wxStandardPaths::_bind_Get},
	{"MSWGetShellDir", &luna_wrapper_wxStandardPaths::_bind_MSWGetShellDir},
	{"base_GetAppDocumentsDir", &luna_wrapper_wxStandardPaths::_bind_base_GetAppDocumentsDir},
	{"base_GetConfigDir", &luna_wrapper_wxStandardPaths::_bind_base_GetConfigDir},
	{"base_GetDataDir", &luna_wrapper_wxStandardPaths::_bind_base_GetDataDir},
	{"base_GetDocumentsDir", &luna_wrapper_wxStandardPaths::_bind_base_GetDocumentsDir},
	{"base_GetExecutablePath", &luna_wrapper_wxStandardPaths::_bind_base_GetExecutablePath},
	{"base_GetLocalDataDir", &luna_wrapper_wxStandardPaths::_bind_base_GetLocalDataDir},
	{"base_GetLocalizedResourcesDir", &luna_wrapper_wxStandardPaths::_bind_base_GetLocalizedResourcesDir},
	{"base_GetPluginsDir", &luna_wrapper_wxStandardPaths::_bind_base_GetPluginsDir},
	{"base_GetResourcesDir", &luna_wrapper_wxStandardPaths::_bind_base_GetResourcesDir},
	{"base_GetTempDir", &luna_wrapper_wxStandardPaths::_bind_base_GetTempDir},
	{"base_GetUserConfigDir", &luna_wrapper_wxStandardPaths::_bind_base_GetUserConfigDir},
	{"base_GetUserDataDir", &luna_wrapper_wxStandardPaths::_bind_base_GetUserDataDir},
	{"base_GetUserLocalDataDir", &luna_wrapper_wxStandardPaths::_bind_base_GetUserLocalDataDir},
	{"dynCast", &luna_wrapper_wxStandardPaths::_bind_dynCast},
	{"__eq", &luna_wrapper_wxStandardPaths::_bind___eq},
	{"fromVoid", &luna_wrapper_wxStandardPaths::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxStandardPaths::_bind_asVoid},
	{"getTable", &luna_wrapper_wxStandardPaths::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxStandardPaths >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxStandardPaths >::enumValues[] = {
	{"ResourceCat_None", wxStandardPaths::ResourceCat_None},
	{"ResourceCat_Messages", wxStandardPaths::ResourceCat_Messages},
	{0,0}
};


