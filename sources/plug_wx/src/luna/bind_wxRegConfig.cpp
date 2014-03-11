#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRegConfig.h>

class luna_wrapper_wxRegConfig {
public:
	typedef Luna< wxRegConfig > luna_t;

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

		wxRegConfig* self= (wxRegConfig*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRegConfig >::push(L,self,false);
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
		//wxRegConfig* ptr= dynamic_cast< wxRegConfig* >(Luna< wxObject >::check(L,1));
		wxRegConfig* ptr= luna_caster< wxObject, wxRegConfig >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRegConfig >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetEntryType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// wxClassInfo * wxRegConfig::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxRegConfig::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxRegConfig::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRegConfig* self=Luna< wxObject >::checkSubType< wxRegConfig >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxRegConfig::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxRegConfig::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxConfigBase::EntryType wxRegConfig::base_GetEntryType(const wxString & name) const
	static int _bind_base_GetEntryType(lua_State *L) {
		if (!_lg_typecheck_base_GetEntryType(L)) {
			luaL_error(L, "luna typecheck failed in wxConfigBase::EntryType wxRegConfig::base_GetEntryType(const wxString & name) const function, expected prototype:\nwxConfigBase::EntryType wxRegConfig::base_GetEntryType(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxRegConfig* self=Luna< wxObject >::checkSubType< wxRegConfig >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxConfigBase::EntryType wxRegConfig::base_GetEntryType(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxConfigBase::EntryType lret = self->wxRegConfig::GetEntryType(name);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxRegConfig* LunaTraits< wxRegConfig >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const wxString & wxConfigBase::GetPath() const
	// void wxConfigBase::SetPath(const wxString & strPath)
	// bool wxConfigBase::GetFirstEntry(wxString & str, long & index) const
	// bool wxConfigBase::GetFirstGroup(wxString & str, long & index) const
	// bool wxConfigBase::GetNextEntry(wxString & str, long & index) const
	// bool wxConfigBase::GetNextGroup(wxString & str, long & index) const
	// size_t wxConfigBase::GetNumberOfEntries(bool bRecursive = false) const
	// size_t wxConfigBase::GetNumberOfGroups(bool bRecursive = false) const
	// bool wxConfigBase::HasEntry(const wxString & strName) const
	// bool wxConfigBase::HasGroup(const wxString & strName) const
	// bool wxConfigBase::Flush(bool bCurrentOnly = false)
	// bool wxConfigBase::RenameEntry(const wxString & oldName, const wxString & newName)
	// bool wxConfigBase::RenameGroup(const wxString & oldName, const wxString & newName)
	// bool wxConfigBase::DeleteAll()
	// bool wxConfigBase::DeleteEntry(const wxString & key, bool bDeleteGroupIfEmpty = true)
	// bool wxConfigBase::DeleteGroup(const wxString & key)
}

void LunaTraits< wxRegConfig >::_bind_dtor(wxRegConfig* obj) {
	delete obj;
}

const char LunaTraits< wxRegConfig >::className[] = "wxRegConfig";
const char LunaTraits< wxRegConfig >::fullName[] = "wxRegConfig";
const char LunaTraits< wxRegConfig >::moduleName[] = "wx";
const char* LunaTraits< wxRegConfig >::parents[] = {"wx.wxConfigBase", 0};
const int LunaTraits< wxRegConfig >::hash = 20578487;
const int LunaTraits< wxRegConfig >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRegConfig >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxRegConfig::_bind_base_GetClassInfo},
	{"base_GetEntryType", &luna_wrapper_wxRegConfig::_bind_base_GetEntryType},
	{"fromVoid", &luna_wrapper_wxRegConfig::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRegConfig::_bind_asVoid},
	{"getTable", &luna_wrapper_wxRegConfig::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxRegConfig >::converters[] = {
	{"wxObject", &luna_wrapper_wxRegConfig::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRegConfig >::enumValues[] = {
	{0,0}
};


