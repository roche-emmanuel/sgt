#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFileHistory.h>

class luna_wrapper_wxFileHistory {
public:
	typedef Luna< wxFileHistory > luna_t;

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

		wxFileHistory* self= (wxFileHistory*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFileHistory >::push(L,self,false);
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
		//wxFileHistory* ptr= dynamic_cast< wxFileHistory* >(Luna< wxObject >::check(L,1));
		wxFileHistory* ptr= luna_caster< wxObject, wxFileHistory >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileHistory >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_AddFileToHistory(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddFilesToMenu_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AddFilesToMenu_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxMenu >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBaseId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHistoryFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMaxFiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMenus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Load(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveFileFromHistory(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Save(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBaseId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UseMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_AddFileToHistory(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AddFilesToMenu_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_AddFilesToMenu_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxMenu >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetHistoryFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetMaxFiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Load(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_RemoveFileFromHistory(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_RemoveMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Save(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_UseMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxFileHistory::AddFileToHistory(const wxString & filename)
	static int _bind_AddFileToHistory(lua_State *L) {
		if (!_lg_typecheck_AddFileToHistory(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileHistory::AddFileToHistory(const wxString & filename) function, expected prototype:\nvoid wxFileHistory::AddFileToHistory(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileHistory::AddFileToHistory(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddFileToHistory(filename);

		return 0;
	}

	// void wxFileHistory::AddFilesToMenu()
	static int _bind_AddFilesToMenu_overload_1(lua_State *L) {
		if (!_lg_typecheck_AddFilesToMenu_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileHistory::AddFilesToMenu() function, expected prototype:\nvoid wxFileHistory::AddFilesToMenu()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileHistory::AddFilesToMenu(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddFilesToMenu();

		return 0;
	}

	// void wxFileHistory::AddFilesToMenu(wxMenu * menu)
	static int _bind_AddFilesToMenu_overload_2(lua_State *L) {
		if (!_lg_typecheck_AddFilesToMenu_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileHistory::AddFilesToMenu(wxMenu * menu) function, expected prototype:\nvoid wxFileHistory::AddFilesToMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,2));

		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileHistory::AddFilesToMenu(wxMenu *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddFilesToMenu(menu);

		return 0;
	}

	// Overload binder for wxFileHistory::AddFilesToMenu
	static int _bind_AddFilesToMenu(lua_State *L) {
		if (_lg_typecheck_AddFilesToMenu_overload_1(L)) return _bind_AddFilesToMenu_overload_1(L);
		if (_lg_typecheck_AddFilesToMenu_overload_2(L)) return _bind_AddFilesToMenu_overload_2(L);

		luaL_error(L, "error in function AddFilesToMenu, cannot match any of the overloads for function AddFilesToMenu:\n  AddFilesToMenu()\n  AddFilesToMenu(wxMenu *)\n");
		return 0;
	}

	// int wxFileHistory::GetBaseId() const
	static int _bind_GetBaseId(lua_State *L) {
		if (!_lg_typecheck_GetBaseId(L)) {
			luaL_error(L, "luna typecheck failed in int wxFileHistory::GetBaseId() const function, expected prototype:\nint wxFileHistory::GetBaseId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFileHistory::GetBaseId() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetBaseId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxFileHistory::GetCount() const
	static int _bind_GetCount(lua_State *L) {
		if (!_lg_typecheck_GetCount(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxFileHistory::GetCount() const function, expected prototype:\nsize_t wxFileHistory::GetCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxFileHistory::GetCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxFileHistory::GetHistoryFile(size_t index) const
	static int _bind_GetHistoryFile(lua_State *L) {
		if (!_lg_typecheck_GetHistoryFile(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileHistory::GetHistoryFile(size_t index) const function, expected prototype:\nwxString wxFileHistory::GetHistoryFile(size_t index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t index=(size_t)lua_tointeger(L,2);

		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileHistory::GetHistoryFile(size_t) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetHistoryFile(index);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxFileHistory::GetMaxFiles() const
	static int _bind_GetMaxFiles(lua_State *L) {
		if (!_lg_typecheck_GetMaxFiles(L)) {
			luaL_error(L, "luna typecheck failed in int wxFileHistory::GetMaxFiles() const function, expected prototype:\nint wxFileHistory::GetMaxFiles() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFileHistory::GetMaxFiles() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetMaxFiles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxList & wxFileHistory::GetMenus() const
	static int _bind_GetMenus(lua_State *L) {
		if (!_lg_typecheck_GetMenus(L)) {
			luaL_error(L, "luna typecheck failed in const wxList & wxFileHistory::GetMenus() const function, expected prototype:\nconst wxList & wxFileHistory::GetMenus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxList & wxFileHistory::GetMenus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxList* lret = &self->GetMenus();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxList >::push(L,lret,false);

		return 1;
	}

	// void wxFileHistory::Load(const wxConfigBase & config)
	static int _bind_Load(lua_State *L) {
		if (!_lg_typecheck_Load(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileHistory::Load(const wxConfigBase & config) function, expected prototype:\nvoid wxFileHistory::Load(const wxConfigBase & config)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxConfigBase* config_ptr=(Luna< wxObject >::checkSubType< wxConfigBase >(L,2));
		if( !config_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg config in wxFileHistory::Load function");
		}
		const wxConfigBase & config=*config_ptr;

		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileHistory::Load(const wxConfigBase &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Load(config);

		return 0;
	}

	// void wxFileHistory::RemoveFileFromHistory(size_t i)
	static int _bind_RemoveFileFromHistory(lua_State *L) {
		if (!_lg_typecheck_RemoveFileFromHistory(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileHistory::RemoveFileFromHistory(size_t i) function, expected prototype:\nvoid wxFileHistory::RemoveFileFromHistory(size_t i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t i=(size_t)lua_tointeger(L,2);

		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileHistory::RemoveFileFromHistory(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RemoveFileFromHistory(i);

		return 0;
	}

	// void wxFileHistory::RemoveMenu(wxMenu * menu)
	static int _bind_RemoveMenu(lua_State *L) {
		if (!_lg_typecheck_RemoveMenu(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileHistory::RemoveMenu(wxMenu * menu) function, expected prototype:\nvoid wxFileHistory::RemoveMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,2));

		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileHistory::RemoveMenu(wxMenu *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RemoveMenu(menu);

		return 0;
	}

	// void wxFileHistory::Save(wxConfigBase & config)
	static int _bind_Save(lua_State *L) {
		if (!_lg_typecheck_Save(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileHistory::Save(wxConfigBase & config) function, expected prototype:\nvoid wxFileHistory::Save(wxConfigBase & config)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxConfigBase* config_ptr=(Luna< wxObject >::checkSubType< wxConfigBase >(L,2));
		if( !config_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg config in wxFileHistory::Save function");
		}
		wxConfigBase & config=*config_ptr;

		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileHistory::Save(wxConfigBase &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Save(config);

		return 0;
	}

	// void wxFileHistory::SetBaseId(int baseId)
	static int _bind_SetBaseId(lua_State *L) {
		if (!_lg_typecheck_SetBaseId(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileHistory::SetBaseId(int baseId) function, expected prototype:\nvoid wxFileHistory::SetBaseId(int baseId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int baseId=(int)lua_tointeger(L,2);

		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileHistory::SetBaseId(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBaseId(baseId);

		return 0;
	}

	// void wxFileHistory::UseMenu(wxMenu * menu)
	static int _bind_UseMenu(lua_State *L) {
		if (!_lg_typecheck_UseMenu(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileHistory::UseMenu(wxMenu * menu) function, expected prototype:\nvoid wxFileHistory::UseMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,2));

		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileHistory::UseMenu(wxMenu *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UseMenu(menu);

		return 0;
	}

	// wxClassInfo * wxFileHistory::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxFileHistory::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxFileHistory::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxFileHistory::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxFileHistory::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void wxFileHistory::base_AddFileToHistory(const wxString & filename)
	static int _bind_base_AddFileToHistory(lua_State *L) {
		if (!_lg_typecheck_base_AddFileToHistory(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileHistory::base_AddFileToHistory(const wxString & filename) function, expected prototype:\nvoid wxFileHistory::base_AddFileToHistory(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileHistory::base_AddFileToHistory(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileHistory::AddFileToHistory(filename);

		return 0;
	}

	// void wxFileHistory::base_AddFilesToMenu()
	static int _bind_base_AddFilesToMenu_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_AddFilesToMenu_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileHistory::base_AddFilesToMenu() function, expected prototype:\nvoid wxFileHistory::base_AddFilesToMenu()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileHistory::base_AddFilesToMenu(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileHistory::AddFilesToMenu();

		return 0;
	}

	// void wxFileHistory::base_AddFilesToMenu(wxMenu * menu)
	static int _bind_base_AddFilesToMenu_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_AddFilesToMenu_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileHistory::base_AddFilesToMenu(wxMenu * menu) function, expected prototype:\nvoid wxFileHistory::base_AddFilesToMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,2));

		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileHistory::base_AddFilesToMenu(wxMenu *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileHistory::AddFilesToMenu(menu);

		return 0;
	}

	// Overload binder for wxFileHistory::base_AddFilesToMenu
	static int _bind_base_AddFilesToMenu(lua_State *L) {
		if (_lg_typecheck_base_AddFilesToMenu_overload_1(L)) return _bind_base_AddFilesToMenu_overload_1(L);
		if (_lg_typecheck_base_AddFilesToMenu_overload_2(L)) return _bind_base_AddFilesToMenu_overload_2(L);

		luaL_error(L, "error in function base_AddFilesToMenu, cannot match any of the overloads for function base_AddFilesToMenu:\n  base_AddFilesToMenu()\n  base_AddFilesToMenu(wxMenu *)\n");
		return 0;
	}

	// size_t wxFileHistory::base_GetCount() const
	static int _bind_base_GetCount(lua_State *L) {
		if (!_lg_typecheck_base_GetCount(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxFileHistory::base_GetCount() const function, expected prototype:\nsize_t wxFileHistory::base_GetCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxFileHistory::base_GetCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->wxFileHistory::GetCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxFileHistory::base_GetHistoryFile(size_t index) const
	static int _bind_base_GetHistoryFile(lua_State *L) {
		if (!_lg_typecheck_base_GetHistoryFile(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileHistory::base_GetHistoryFile(size_t index) const function, expected prototype:\nwxString wxFileHistory::base_GetHistoryFile(size_t index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t index=(size_t)lua_tointeger(L,2);

		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileHistory::base_GetHistoryFile(size_t) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxFileHistory::GetHistoryFile(index);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxFileHistory::base_GetMaxFiles() const
	static int _bind_base_GetMaxFiles(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxFiles(L)) {
			luaL_error(L, "luna typecheck failed in int wxFileHistory::base_GetMaxFiles() const function, expected prototype:\nint wxFileHistory::base_GetMaxFiles() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFileHistory::base_GetMaxFiles() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxFileHistory::GetMaxFiles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxFileHistory::base_Load(const wxConfigBase & config)
	static int _bind_base_Load(lua_State *L) {
		if (!_lg_typecheck_base_Load(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileHistory::base_Load(const wxConfigBase & config) function, expected prototype:\nvoid wxFileHistory::base_Load(const wxConfigBase & config)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxConfigBase* config_ptr=(Luna< wxObject >::checkSubType< wxConfigBase >(L,2));
		if( !config_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg config in wxFileHistory::base_Load function");
		}
		const wxConfigBase & config=*config_ptr;

		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileHistory::base_Load(const wxConfigBase &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileHistory::Load(config);

		return 0;
	}

	// void wxFileHistory::base_RemoveFileFromHistory(size_t i)
	static int _bind_base_RemoveFileFromHistory(lua_State *L) {
		if (!_lg_typecheck_base_RemoveFileFromHistory(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileHistory::base_RemoveFileFromHistory(size_t i) function, expected prototype:\nvoid wxFileHistory::base_RemoveFileFromHistory(size_t i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t i=(size_t)lua_tointeger(L,2);

		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileHistory::base_RemoveFileFromHistory(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileHistory::RemoveFileFromHistory(i);

		return 0;
	}

	// void wxFileHistory::base_RemoveMenu(wxMenu * menu)
	static int _bind_base_RemoveMenu(lua_State *L) {
		if (!_lg_typecheck_base_RemoveMenu(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileHistory::base_RemoveMenu(wxMenu * menu) function, expected prototype:\nvoid wxFileHistory::base_RemoveMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,2));

		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileHistory::base_RemoveMenu(wxMenu *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileHistory::RemoveMenu(menu);

		return 0;
	}

	// void wxFileHistory::base_Save(wxConfigBase & config)
	static int _bind_base_Save(lua_State *L) {
		if (!_lg_typecheck_base_Save(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileHistory::base_Save(wxConfigBase & config) function, expected prototype:\nvoid wxFileHistory::base_Save(wxConfigBase & config)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxConfigBase* config_ptr=(Luna< wxObject >::checkSubType< wxConfigBase >(L,2));
		if( !config_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg config in wxFileHistory::base_Save function");
		}
		wxConfigBase & config=*config_ptr;

		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileHistory::base_Save(wxConfigBase &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileHistory::Save(config);

		return 0;
	}

	// void wxFileHistory::base_UseMenu(wxMenu * menu)
	static int _bind_base_UseMenu(lua_State *L) {
		if (!_lg_typecheck_base_UseMenu(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileHistory::base_UseMenu(wxMenu * menu) function, expected prototype:\nvoid wxFileHistory::base_UseMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,2));

		wxFileHistory* self=Luna< wxObject >::checkSubType< wxFileHistory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileHistory::base_UseMenu(wxMenu *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileHistory::UseMenu(menu);

		return 0;
	}


	// Operator binds:

};

wxFileHistory* LunaTraits< wxFileHistory >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxFileHistory >::_bind_dtor(wxFileHistory* obj) {
	delete obj;
}

const char LunaTraits< wxFileHistory >::className[] = "wxFileHistory";
const char LunaTraits< wxFileHistory >::fullName[] = "wxFileHistory";
const char LunaTraits< wxFileHistory >::moduleName[] = "wx";
const char* LunaTraits< wxFileHistory >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxFileHistory >::hash = 50107997;
const int LunaTraits< wxFileHistory >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFileHistory >::methods[] = {
	{"AddFileToHistory", &luna_wrapper_wxFileHistory::_bind_AddFileToHistory},
	{"AddFilesToMenu", &luna_wrapper_wxFileHistory::_bind_AddFilesToMenu},
	{"GetBaseId", &luna_wrapper_wxFileHistory::_bind_GetBaseId},
	{"GetCount", &luna_wrapper_wxFileHistory::_bind_GetCount},
	{"GetHistoryFile", &luna_wrapper_wxFileHistory::_bind_GetHistoryFile},
	{"GetMaxFiles", &luna_wrapper_wxFileHistory::_bind_GetMaxFiles},
	{"GetMenus", &luna_wrapper_wxFileHistory::_bind_GetMenus},
	{"Load", &luna_wrapper_wxFileHistory::_bind_Load},
	{"RemoveFileFromHistory", &luna_wrapper_wxFileHistory::_bind_RemoveFileFromHistory},
	{"RemoveMenu", &luna_wrapper_wxFileHistory::_bind_RemoveMenu},
	{"Save", &luna_wrapper_wxFileHistory::_bind_Save},
	{"SetBaseId", &luna_wrapper_wxFileHistory::_bind_SetBaseId},
	{"UseMenu", &luna_wrapper_wxFileHistory::_bind_UseMenu},
	{"base_GetClassInfo", &luna_wrapper_wxFileHistory::_bind_base_GetClassInfo},
	{"base_AddFileToHistory", &luna_wrapper_wxFileHistory::_bind_base_AddFileToHistory},
	{"base_AddFilesToMenu", &luna_wrapper_wxFileHistory::_bind_base_AddFilesToMenu},
	{"base_GetCount", &luna_wrapper_wxFileHistory::_bind_base_GetCount},
	{"base_GetHistoryFile", &luna_wrapper_wxFileHistory::_bind_base_GetHistoryFile},
	{"base_GetMaxFiles", &luna_wrapper_wxFileHistory::_bind_base_GetMaxFiles},
	{"base_Load", &luna_wrapper_wxFileHistory::_bind_base_Load},
	{"base_RemoveFileFromHistory", &luna_wrapper_wxFileHistory::_bind_base_RemoveFileFromHistory},
	{"base_RemoveMenu", &luna_wrapper_wxFileHistory::_bind_base_RemoveMenu},
	{"base_Save", &luna_wrapper_wxFileHistory::_bind_base_Save},
	{"base_UseMenu", &luna_wrapper_wxFileHistory::_bind_base_UseMenu},
	{"fromVoid", &luna_wrapper_wxFileHistory::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFileHistory::_bind_asVoid},
	{"getTable", &luna_wrapper_wxFileHistory::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileHistory >::converters[] = {
	{"wxObject", &luna_wrapper_wxFileHistory::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileHistory >::enumValues[] = {
	{0,0}
};


