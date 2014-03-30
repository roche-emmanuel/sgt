#include <plug_common.h>

#include <luna/wrappers/wrapper_wxConfigBase.h>

class luna_wrapper_wxConfigBase {
public:
	typedef Luna< wxConfigBase > luna_t;

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

		wxConfigBase* self= (wxConfigBase*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxConfigBase >::push(L,self,false);
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
		//wxConfigBase* ptr= dynamic_cast< wxConfigBase* >(Luna< wxObject >::check(L,1));
		wxConfigBase* ptr= luna_caster< wxObject, wxConfigBase >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxConfigBase >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetPath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFirstEntry(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFirstGroup(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNextEntry(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNextGroup(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNumberOfEntries(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNumberOfGroups(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Exists(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetEntryType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasEntry(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasGroup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAppName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVendorName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Flush(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read_overload_5(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read_overload_6(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read_overload_7(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read_overload_8(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read_overload_9(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read_overload_10(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read_overload_11(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReadBool(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReadDouble(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReadLong(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Write_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Write_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Write_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Write_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RenameEntry(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RenameGroup(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeleteEntry(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteGroup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsExpandingEnvVars(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsRecordingDefaults(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetExpandEnvVars(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRecordDefaults(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DontCreateOnDemand(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Get(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isboolean(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}

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
	// const wxString & wxConfigBase::GetPath() const
	static int _bind_GetPath(lua_State *L) {
		if (!_lg_typecheck_GetPath(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxConfigBase::GetPath() const function, expected prototype:\nconst wxString & wxConfigBase::GetPath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxConfigBase::GetPath() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetPath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxConfigBase::SetPath(const wxString & strPath)
	static int _bind_SetPath(lua_State *L) {
		if (!_lg_typecheck_SetPath(L)) {
			luaL_error(L, "luna typecheck failed in void wxConfigBase::SetPath(const wxString & strPath) function, expected prototype:\nvoid wxConfigBase::SetPath(const wxString & strPath)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString strPath(lua_tostring(L,2),lua_objlen(L,2));

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxConfigBase::SetPath(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPath(strPath);

		return 0;
	}

	// bool wxConfigBase::GetFirstEntry(wxString & str, long & index) const
	static int _bind_GetFirstEntry(lua_State *L) {
		if (!_lg_typecheck_GetFirstEntry(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::GetFirstEntry(wxString & str, long & index) const function, expected prototype:\nbool wxConfigBase::GetFirstEntry(wxString & str, long & index) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString str(lua_tostring(L,2),lua_objlen(L,2));
		long index=(long)lua_tonumber(L,3);

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::GetFirstEntry(wxString &, long &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetFirstEntry(str, index);
		lua_pushboolean(L,lret?1:0);

		lua_pushlstring(L,str.data(),str.size());
		lua_pushnumber(L,index);
		return 3;
	}

	// bool wxConfigBase::GetFirstGroup(wxString & str, long & index) const
	static int _bind_GetFirstGroup(lua_State *L) {
		if (!_lg_typecheck_GetFirstGroup(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::GetFirstGroup(wxString & str, long & index) const function, expected prototype:\nbool wxConfigBase::GetFirstGroup(wxString & str, long & index) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString str(lua_tostring(L,2),lua_objlen(L,2));
		long index=(long)lua_tonumber(L,3);

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::GetFirstGroup(wxString &, long &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetFirstGroup(str, index);
		lua_pushboolean(L,lret?1:0);

		lua_pushlstring(L,str.data(),str.size());
		lua_pushnumber(L,index);
		return 3;
	}

	// bool wxConfigBase::GetNextEntry(wxString & str, long & index) const
	static int _bind_GetNextEntry(lua_State *L) {
		if (!_lg_typecheck_GetNextEntry(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::GetNextEntry(wxString & str, long & index) const function, expected prototype:\nbool wxConfigBase::GetNextEntry(wxString & str, long & index) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString str(lua_tostring(L,2),lua_objlen(L,2));
		long index=(long)lua_tonumber(L,3);

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::GetNextEntry(wxString &, long &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetNextEntry(str, index);
		lua_pushboolean(L,lret?1:0);

		lua_pushlstring(L,str.data(),str.size());
		lua_pushnumber(L,index);
		return 3;
	}

	// bool wxConfigBase::GetNextGroup(wxString & str, long & index) const
	static int _bind_GetNextGroup(lua_State *L) {
		if (!_lg_typecheck_GetNextGroup(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::GetNextGroup(wxString & str, long & index) const function, expected prototype:\nbool wxConfigBase::GetNextGroup(wxString & str, long & index) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString str(lua_tostring(L,2),lua_objlen(L,2));
		long index=(long)lua_tonumber(L,3);

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::GetNextGroup(wxString &, long &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetNextGroup(str, index);
		lua_pushboolean(L,lret?1:0);

		lua_pushlstring(L,str.data(),str.size());
		lua_pushnumber(L,index);
		return 3;
	}

	// size_t wxConfigBase::GetNumberOfEntries(bool bRecursive = false) const
	static int _bind_GetNumberOfEntries(lua_State *L) {
		if (!_lg_typecheck_GetNumberOfEntries(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxConfigBase::GetNumberOfEntries(bool bRecursive = false) const function, expected prototype:\nsize_t wxConfigBase::GetNumberOfEntries(bool bRecursive = false) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool bRecursive=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxConfigBase::GetNumberOfEntries(bool) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetNumberOfEntries(bRecursive);
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxConfigBase::GetNumberOfGroups(bool bRecursive = false) const
	static int _bind_GetNumberOfGroups(lua_State *L) {
		if (!_lg_typecheck_GetNumberOfGroups(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxConfigBase::GetNumberOfGroups(bool bRecursive = false) const function, expected prototype:\nsize_t wxConfigBase::GetNumberOfGroups(bool bRecursive = false) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool bRecursive=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxConfigBase::GetNumberOfGroups(bool) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetNumberOfGroups(bRecursive);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxConfigBase::Exists(const wxString & strName) const
	static int _bind_Exists(lua_State *L) {
		if (!_lg_typecheck_Exists(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::Exists(const wxString & strName) const function, expected prototype:\nbool wxConfigBase::Exists(const wxString & strName) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString strName(lua_tostring(L,2),lua_objlen(L,2));

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::Exists(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Exists(strName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxConfigBase::EntryType wxConfigBase::GetEntryType(const wxString & name) const
	static int _bind_GetEntryType(lua_State *L) {
		if (!_lg_typecheck_GetEntryType(L)) {
			luaL_error(L, "luna typecheck failed in wxConfigBase::EntryType wxConfigBase::GetEntryType(const wxString & name) const function, expected prototype:\nwxConfigBase::EntryType wxConfigBase::GetEntryType(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxConfigBase::EntryType wxConfigBase::GetEntryType(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxConfigBase::EntryType lret = self->GetEntryType(name);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxConfigBase::HasEntry(const wxString & strName) const
	static int _bind_HasEntry(lua_State *L) {
		if (!_lg_typecheck_HasEntry(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::HasEntry(const wxString & strName) const function, expected prototype:\nbool wxConfigBase::HasEntry(const wxString & strName) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString strName(lua_tostring(L,2),lua_objlen(L,2));

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::HasEntry(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasEntry(strName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConfigBase::HasGroup(const wxString & strName) const
	static int _bind_HasGroup(lua_State *L) {
		if (!_lg_typecheck_HasGroup(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::HasGroup(const wxString & strName) const function, expected prototype:\nbool wxConfigBase::HasGroup(const wxString & strName) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString strName(lua_tostring(L,2),lua_objlen(L,2));

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::HasGroup(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasGroup(strName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxConfigBase::GetAppName() const
	static int _bind_GetAppName(lua_State *L) {
		if (!_lg_typecheck_GetAppName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxConfigBase::GetAppName() const function, expected prototype:\nwxString wxConfigBase::GetAppName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxConfigBase::GetAppName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetAppName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxConfigBase::GetVendorName() const
	static int _bind_GetVendorName(lua_State *L) {
		if (!_lg_typecheck_GetVendorName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxConfigBase::GetVendorName() const function, expected prototype:\nwxString wxConfigBase::GetVendorName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxConfigBase::GetVendorName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetVendorName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxConfigBase::Flush(bool bCurrentOnly = false)
	static int _bind_Flush(lua_State *L) {
		if (!_lg_typecheck_Flush(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::Flush(bool bCurrentOnly = false) function, expected prototype:\nbool wxConfigBase::Flush(bool bCurrentOnly = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool bCurrentOnly=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::Flush(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Flush(bCurrentOnly);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConfigBase::Read(const wxString & key, wxString * str) const
	static int _bind_Read_overload_1(lua_State *L) {
		if (!_lg_typecheck_Read_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::Read(const wxString & key, wxString * str) const function, expected prototype:\nbool wxConfigBase::Read(const wxString & key, wxString * str) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString key(lua_tostring(L,2),lua_objlen(L,2));
		wxString str(lua_tostring(L,3),lua_objlen(L,3));

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::Read(const wxString &, wxString *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Read(key, &str);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConfigBase::Read(const wxString & key, wxString * str, const wxString & defaultVal) const
	static int _bind_Read_overload_2(lua_State *L) {
		if (!_lg_typecheck_Read_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::Read(const wxString & key, wxString * str, const wxString & defaultVal) const function, expected prototype:\nbool wxConfigBase::Read(const wxString & key, wxString * str, const wxString & defaultVal) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString key(lua_tostring(L,2),lua_objlen(L,2));
		wxString str(lua_tostring(L,3),lua_objlen(L,3));
		wxString defaultVal(lua_tostring(L,4),lua_objlen(L,4));

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::Read(const wxString &, wxString *, const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Read(key, &str, defaultVal);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const wxString wxConfigBase::Read(const wxString & key, const wxString & defaultVal) const
	static int _bind_Read_overload_3(lua_State *L) {
		if (!_lg_typecheck_Read_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in const wxString wxConfigBase::Read(const wxString & key, const wxString & defaultVal) const function, expected prototype:\nconst wxString wxConfigBase::Read(const wxString & key, const wxString & defaultVal) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString key(lua_tostring(L,2),lua_objlen(L,2));
		wxString defaultVal(lua_tostring(L,3),lua_objlen(L,3));

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString wxConfigBase::Read(const wxString &, const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString lret = self->Read(key, defaultVal);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxConfigBase::Read(const wxString & key, long * l) const
	static int _bind_Read_overload_4(lua_State *L) {
		if (!_lg_typecheck_Read_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::Read(const wxString & key, long * l) const function, expected prototype:\nbool wxConfigBase::Read(const wxString & key, long * l) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString key(lua_tostring(L,2),lua_objlen(L,2));
		long* l=(long*)Luna< void >::check(L,3);

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::Read(const wxString &, long *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Read(key, l);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConfigBase::Read(const wxString & key, long * l, long defaultVal) const
	static int _bind_Read_overload_5(lua_State *L) {
		if (!_lg_typecheck_Read_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::Read(const wxString & key, long * l, long defaultVal) const function, expected prototype:\nbool wxConfigBase::Read(const wxString & key, long * l, long defaultVal) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString key(lua_tostring(L,2),lua_objlen(L,2));
		long* l=(long*)Luna< void >::check(L,3);
		long defaultVal=(long)lua_tonumber(L,4);

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::Read(const wxString &, long *, long) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Read(key, l, defaultVal);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConfigBase::Read(const wxString & key, double * d) const
	static int _bind_Read_overload_6(lua_State *L) {
		if (!_lg_typecheck_Read_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::Read(const wxString & key, double * d) const function, expected prototype:\nbool wxConfigBase::Read(const wxString & key, double * d) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString key(lua_tostring(L,2),lua_objlen(L,2));
		double* d=(double*)Luna< void >::check(L,3);

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::Read(const wxString &, double *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Read(key, d);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConfigBase::Read(const wxString & key, double * d, double defaultVal) const
	static int _bind_Read_overload_7(lua_State *L) {
		if (!_lg_typecheck_Read_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::Read(const wxString & key, double * d, double defaultVal) const function, expected prototype:\nbool wxConfigBase::Read(const wxString & key, double * d, double defaultVal) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString key(lua_tostring(L,2),lua_objlen(L,2));
		double* d=(double*)Luna< void >::check(L,3);
		double defaultVal=(double)lua_tonumber(L,4);

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::Read(const wxString &, double *, double) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Read(key, d, defaultVal);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConfigBase::Read(const wxString & key, float * f) const
	static int _bind_Read_overload_8(lua_State *L) {
		if (!_lg_typecheck_Read_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::Read(const wxString & key, float * f) const function, expected prototype:\nbool wxConfigBase::Read(const wxString & key, float * f) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString key(lua_tostring(L,2),lua_objlen(L,2));
		float* f=(float*)Luna< void >::check(L,3);

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::Read(const wxString &, float *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Read(key, f);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConfigBase::Read(const wxString & key, float * f, float defaultVal) const
	static int _bind_Read_overload_9(lua_State *L) {
		if (!_lg_typecheck_Read_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::Read(const wxString & key, float * f, float defaultVal) const function, expected prototype:\nbool wxConfigBase::Read(const wxString & key, float * f, float defaultVal) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString key(lua_tostring(L,2),lua_objlen(L,2));
		float* f=(float*)Luna< void >::check(L,3);
		float defaultVal=(float)lua_tonumber(L,4);

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::Read(const wxString &, float *, float) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Read(key, f, defaultVal);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConfigBase::Read(const wxString & key, bool * b) const
	static int _bind_Read_overload_10(lua_State *L) {
		if (!_lg_typecheck_Read_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::Read(const wxString & key, bool * b) const function, expected prototype:\nbool wxConfigBase::Read(const wxString & key, bool * b) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString key(lua_tostring(L,2),lua_objlen(L,2));
		bool* b=(bool*)(Luna< void >::check(L,3));

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::Read(const wxString &, bool *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Read(key, b);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConfigBase::Read(const wxString & key, bool * d, bool defaultVal) const
	static int _bind_Read_overload_11(lua_State *L) {
		if (!_lg_typecheck_Read_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::Read(const wxString & key, bool * d, bool defaultVal) const function, expected prototype:\nbool wxConfigBase::Read(const wxString & key, bool * d, bool defaultVal) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString key(lua_tostring(L,2),lua_objlen(L,2));
		bool* d=(bool*)(Luna< void >::check(L,3));
		bool defaultVal=(bool)(lua_toboolean(L,4)==1);

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::Read(const wxString &, bool *, bool) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Read(key, d, defaultVal);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxConfigBase::Read
	static int _bind_Read(lua_State *L) {
		if (_lg_typecheck_Read_overload_1(L)) return _bind_Read_overload_1(L);
		if (_lg_typecheck_Read_overload_2(L)) return _bind_Read_overload_2(L);
		if (_lg_typecheck_Read_overload_3(L)) return _bind_Read_overload_3(L);
		if (_lg_typecheck_Read_overload_4(L)) return _bind_Read_overload_4(L);
		if (_lg_typecheck_Read_overload_5(L)) return _bind_Read_overload_5(L);
		if (_lg_typecheck_Read_overload_6(L)) return _bind_Read_overload_6(L);
		if (_lg_typecheck_Read_overload_7(L)) return _bind_Read_overload_7(L);
		if (_lg_typecheck_Read_overload_8(L)) return _bind_Read_overload_8(L);
		if (_lg_typecheck_Read_overload_9(L)) return _bind_Read_overload_9(L);
		if (_lg_typecheck_Read_overload_10(L)) return _bind_Read_overload_10(L);
		if (_lg_typecheck_Read_overload_11(L)) return _bind_Read_overload_11(L);

		luaL_error(L, "error in function Read, cannot match any of the overloads for function Read:\n  Read(const wxString &, wxString *)\n  Read(const wxString &, wxString *, const wxString &)\n  Read(const wxString &, const wxString &)\n  Read(const wxString &, long *)\n  Read(const wxString &, long *, long)\n  Read(const wxString &, double *)\n  Read(const wxString &, double *, double)\n  Read(const wxString &, float *)\n  Read(const wxString &, float *, float)\n  Read(const wxString &, bool *)\n  Read(const wxString &, bool *, bool)\n");
		return 0;
	}

	// bool wxConfigBase::ReadBool(const wxString & key, bool defaultVal) const
	static int _bind_ReadBool(lua_State *L) {
		if (!_lg_typecheck_ReadBool(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::ReadBool(const wxString & key, bool defaultVal) const function, expected prototype:\nbool wxConfigBase::ReadBool(const wxString & key, bool defaultVal) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString key(lua_tostring(L,2),lua_objlen(L,2));
		bool defaultVal=(bool)(lua_toboolean(L,3)==1);

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::ReadBool(const wxString &, bool) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ReadBool(key, defaultVal);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// double wxConfigBase::ReadDouble(const wxString & key, double defaultVal) const
	static int _bind_ReadDouble(lua_State *L) {
		if (!_lg_typecheck_ReadDouble(L)) {
			luaL_error(L, "luna typecheck failed in double wxConfigBase::ReadDouble(const wxString & key, double defaultVal) const function, expected prototype:\ndouble wxConfigBase::ReadDouble(const wxString & key, double defaultVal) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString key(lua_tostring(L,2),lua_objlen(L,2));
		double defaultVal=(double)lua_tonumber(L,3);

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double wxConfigBase::ReadDouble(const wxString &, double) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->ReadDouble(key, defaultVal);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxConfigBase::ReadLong(const wxString & key, long defaultVal) const
	static int _bind_ReadLong(lua_State *L) {
		if (!_lg_typecheck_ReadLong(L)) {
			luaL_error(L, "luna typecheck failed in long wxConfigBase::ReadLong(const wxString & key, long defaultVal) const function, expected prototype:\nlong wxConfigBase::ReadLong(const wxString & key, long defaultVal) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString key(lua_tostring(L,2),lua_objlen(L,2));
		long defaultVal=(long)lua_tonumber(L,3);

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxConfigBase::ReadLong(const wxString &, long) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->ReadLong(key, defaultVal);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxConfigBase::Write(const wxString & key, const wxString & value)
	static int _bind_Write_overload_1(lua_State *L) {
		if (!_lg_typecheck_Write_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::Write(const wxString & key, const wxString & value) function, expected prototype:\nbool wxConfigBase::Write(const wxString & key, const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString key(lua_tostring(L,2),lua_objlen(L,2));
		wxString value(lua_tostring(L,3),lua_objlen(L,3));

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::Write(const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Write(key, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConfigBase::Write(const wxString & key, long value)
	static int _bind_Write_overload_2(lua_State *L) {
		if (!_lg_typecheck_Write_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::Write(const wxString & key, long value) function, expected prototype:\nbool wxConfigBase::Write(const wxString & key, long value)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString key(lua_tostring(L,2),lua_objlen(L,2));
		long value=(long)lua_tonumber(L,3);

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::Write(const wxString &, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Write(key, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConfigBase::Write(const wxString & key, double value)
	static int _bind_Write_overload_3(lua_State *L) {
		if (!_lg_typecheck_Write_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::Write(const wxString & key, double value) function, expected prototype:\nbool wxConfigBase::Write(const wxString & key, double value)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString key(lua_tostring(L,2),lua_objlen(L,2));
		double value=(double)lua_tonumber(L,3);

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::Write(const wxString &, double). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Write(key, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConfigBase::Write(const wxString & key, bool value)
	static int _bind_Write_overload_4(lua_State *L) {
		if (!_lg_typecheck_Write_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::Write(const wxString & key, bool value) function, expected prototype:\nbool wxConfigBase::Write(const wxString & key, bool value)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString key(lua_tostring(L,2),lua_objlen(L,2));
		bool value=(bool)(lua_toboolean(L,3)==1);

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::Write(const wxString &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Write(key, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxConfigBase::Write
	static int _bind_Write(lua_State *L) {
		if (_lg_typecheck_Write_overload_1(L)) return _bind_Write_overload_1(L);
		if (_lg_typecheck_Write_overload_2(L)) return _bind_Write_overload_2(L);
		if (_lg_typecheck_Write_overload_3(L)) return _bind_Write_overload_3(L);
		if (_lg_typecheck_Write_overload_4(L)) return _bind_Write_overload_4(L);

		luaL_error(L, "error in function Write, cannot match any of the overloads for function Write:\n  Write(const wxString &, const wxString &)\n  Write(const wxString &, long)\n  Write(const wxString &, double)\n  Write(const wxString &, bool)\n");
		return 0;
	}

	// bool wxConfigBase::RenameEntry(const wxString & oldName, const wxString & newName)
	static int _bind_RenameEntry(lua_State *L) {
		if (!_lg_typecheck_RenameEntry(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::RenameEntry(const wxString & oldName, const wxString & newName) function, expected prototype:\nbool wxConfigBase::RenameEntry(const wxString & oldName, const wxString & newName)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString oldName(lua_tostring(L,2),lua_objlen(L,2));
		wxString newName(lua_tostring(L,3),lua_objlen(L,3));

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::RenameEntry(const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RenameEntry(oldName, newName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConfigBase::RenameGroup(const wxString & oldName, const wxString & newName)
	static int _bind_RenameGroup(lua_State *L) {
		if (!_lg_typecheck_RenameGroup(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::RenameGroup(const wxString & oldName, const wxString & newName) function, expected prototype:\nbool wxConfigBase::RenameGroup(const wxString & oldName, const wxString & newName)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString oldName(lua_tostring(L,2),lua_objlen(L,2));
		wxString newName(lua_tostring(L,3),lua_objlen(L,3));

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::RenameGroup(const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RenameGroup(oldName, newName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConfigBase::DeleteAll()
	static int _bind_DeleteAll(lua_State *L) {
		if (!_lg_typecheck_DeleteAll(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::DeleteAll() function, expected prototype:\nbool wxConfigBase::DeleteAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::DeleteAll(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DeleteAll();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConfigBase::DeleteEntry(const wxString & key, bool bDeleteGroupIfEmpty = true)
	static int _bind_DeleteEntry(lua_State *L) {
		if (!_lg_typecheck_DeleteEntry(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::DeleteEntry(const wxString & key, bool bDeleteGroupIfEmpty = true) function, expected prototype:\nbool wxConfigBase::DeleteEntry(const wxString & key, bool bDeleteGroupIfEmpty = true)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString key(lua_tostring(L,2),lua_objlen(L,2));
		bool bDeleteGroupIfEmpty=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::DeleteEntry(const wxString &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DeleteEntry(key, bDeleteGroupIfEmpty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConfigBase::DeleteGroup(const wxString & key)
	static int _bind_DeleteGroup(lua_State *L) {
		if (!_lg_typecheck_DeleteGroup(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::DeleteGroup(const wxString & key) function, expected prototype:\nbool wxConfigBase::DeleteGroup(const wxString & key)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString key(lua_tostring(L,2),lua_objlen(L,2));

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::DeleteGroup(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DeleteGroup(key);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConfigBase::IsExpandingEnvVars() const
	static int _bind_IsExpandingEnvVars(lua_State *L) {
		if (!_lg_typecheck_IsExpandingEnvVars(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::IsExpandingEnvVars() const function, expected prototype:\nbool wxConfigBase::IsExpandingEnvVars() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::IsExpandingEnvVars() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsExpandingEnvVars();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConfigBase::IsRecordingDefaults() const
	static int _bind_IsRecordingDefaults(lua_State *L) {
		if (!_lg_typecheck_IsRecordingDefaults(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConfigBase::IsRecordingDefaults() const function, expected prototype:\nbool wxConfigBase::IsRecordingDefaults() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConfigBase::IsRecordingDefaults() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsRecordingDefaults();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxConfigBase::SetExpandEnvVars(bool bDoIt = true)
	static int _bind_SetExpandEnvVars(lua_State *L) {
		if (!_lg_typecheck_SetExpandEnvVars(L)) {
			luaL_error(L, "luna typecheck failed in void wxConfigBase::SetExpandEnvVars(bool bDoIt = true) function, expected prototype:\nvoid wxConfigBase::SetExpandEnvVars(bool bDoIt = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool bDoIt=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxConfigBase::SetExpandEnvVars(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetExpandEnvVars(bDoIt);

		return 0;
	}

	// void wxConfigBase::SetRecordDefaults(bool bDoIt = true)
	static int _bind_SetRecordDefaults(lua_State *L) {
		if (!_lg_typecheck_SetRecordDefaults(L)) {
			luaL_error(L, "luna typecheck failed in void wxConfigBase::SetRecordDefaults(bool bDoIt = true) function, expected prototype:\nvoid wxConfigBase::SetRecordDefaults(bool bDoIt = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool bDoIt=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxConfigBase::SetRecordDefaults(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRecordDefaults(bDoIt);

		return 0;
	}

	// static wxConfigBase * wxConfigBase::Create()
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in static wxConfigBase * wxConfigBase::Create() function, expected prototype:\nstatic wxConfigBase * wxConfigBase::Create()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxConfigBase * lret = wxConfigBase::Create();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxConfigBase >::push(L,lret,false);

		return 1;
	}

	// static void wxConfigBase::DontCreateOnDemand()
	static int _bind_DontCreateOnDemand(lua_State *L) {
		if (!_lg_typecheck_DontCreateOnDemand(L)) {
			luaL_error(L, "luna typecheck failed in static void wxConfigBase::DontCreateOnDemand() function, expected prototype:\nstatic void wxConfigBase::DontCreateOnDemand()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxConfigBase::DontCreateOnDemand();

		return 0;
	}

	// static wxConfigBase * wxConfigBase::Get(bool CreateOnDemand = true)
	static int _bind_Get(lua_State *L) {
		if (!_lg_typecheck_Get(L)) {
			luaL_error(L, "luna typecheck failed in static wxConfigBase * wxConfigBase::Get(bool CreateOnDemand = true) function, expected prototype:\nstatic wxConfigBase * wxConfigBase::Get(bool CreateOnDemand = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool CreateOnDemand=luatop>0 ? (bool)(lua_toboolean(L,1)==1) : (bool)true;

		wxConfigBase * lret = wxConfigBase::Get(CreateOnDemand);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxConfigBase >::push(L,lret,false);

		return 1;
	}

	// static wxConfigBase * wxConfigBase::Set(wxConfigBase * pConfig)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luaL_error(L, "luna typecheck failed in static wxConfigBase * wxConfigBase::Set(wxConfigBase * pConfig) function, expected prototype:\nstatic wxConfigBase * wxConfigBase::Set(wxConfigBase * pConfig)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxConfigBase* pConfig=(Luna< wxObject >::checkSubType< wxConfigBase >(L,1));

		wxConfigBase * lret = wxConfigBase::Set(pConfig);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxConfigBase >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxConfigBase::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxConfigBase::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxConfigBase::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxConfigBase::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxConfigBase::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxConfigBase::EntryType wxConfigBase::base_GetEntryType(const wxString & name) const
	static int _bind_base_GetEntryType(lua_State *L) {
		if (!_lg_typecheck_base_GetEntryType(L)) {
			luaL_error(L, "luna typecheck failed in wxConfigBase::EntryType wxConfigBase::base_GetEntryType(const wxString & name) const function, expected prototype:\nwxConfigBase::EntryType wxConfigBase::base_GetEntryType(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxConfigBase* self=Luna< wxObject >::checkSubType< wxConfigBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxConfigBase::EntryType wxConfigBase::base_GetEntryType(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxConfigBase::EntryType lret = self->wxConfigBase::GetEntryType(name);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxConfigBase* LunaTraits< wxConfigBase >::_bind_ctor(lua_State *L) {
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

void LunaTraits< wxConfigBase >::_bind_dtor(wxConfigBase* obj) {
	delete obj;
}

const char LunaTraits< wxConfigBase >::className[] = "wxConfigBase";
const char LunaTraits< wxConfigBase >::fullName[] = "wxConfigBase";
const char LunaTraits< wxConfigBase >::moduleName[] = "wx";
const char* LunaTraits< wxConfigBase >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxConfigBase >::hash = 18693024;
const int LunaTraits< wxConfigBase >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxConfigBase >::methods[] = {
	{"GetPath", &luna_wrapper_wxConfigBase::_bind_GetPath},
	{"SetPath", &luna_wrapper_wxConfigBase::_bind_SetPath},
	{"GetFirstEntry", &luna_wrapper_wxConfigBase::_bind_GetFirstEntry},
	{"GetFirstGroup", &luna_wrapper_wxConfigBase::_bind_GetFirstGroup},
	{"GetNextEntry", &luna_wrapper_wxConfigBase::_bind_GetNextEntry},
	{"GetNextGroup", &luna_wrapper_wxConfigBase::_bind_GetNextGroup},
	{"GetNumberOfEntries", &luna_wrapper_wxConfigBase::_bind_GetNumberOfEntries},
	{"GetNumberOfGroups", &luna_wrapper_wxConfigBase::_bind_GetNumberOfGroups},
	{"Exists", &luna_wrapper_wxConfigBase::_bind_Exists},
	{"GetEntryType", &luna_wrapper_wxConfigBase::_bind_GetEntryType},
	{"HasEntry", &luna_wrapper_wxConfigBase::_bind_HasEntry},
	{"HasGroup", &luna_wrapper_wxConfigBase::_bind_HasGroup},
	{"GetAppName", &luna_wrapper_wxConfigBase::_bind_GetAppName},
	{"GetVendorName", &luna_wrapper_wxConfigBase::_bind_GetVendorName},
	{"Flush", &luna_wrapper_wxConfigBase::_bind_Flush},
	{"Read", &luna_wrapper_wxConfigBase::_bind_Read},
	{"ReadBool", &luna_wrapper_wxConfigBase::_bind_ReadBool},
	{"ReadDouble", &luna_wrapper_wxConfigBase::_bind_ReadDouble},
	{"ReadLong", &luna_wrapper_wxConfigBase::_bind_ReadLong},
	{"Write", &luna_wrapper_wxConfigBase::_bind_Write},
	{"RenameEntry", &luna_wrapper_wxConfigBase::_bind_RenameEntry},
	{"RenameGroup", &luna_wrapper_wxConfigBase::_bind_RenameGroup},
	{"DeleteAll", &luna_wrapper_wxConfigBase::_bind_DeleteAll},
	{"DeleteEntry", &luna_wrapper_wxConfigBase::_bind_DeleteEntry},
	{"DeleteGroup", &luna_wrapper_wxConfigBase::_bind_DeleteGroup},
	{"IsExpandingEnvVars", &luna_wrapper_wxConfigBase::_bind_IsExpandingEnvVars},
	{"IsRecordingDefaults", &luna_wrapper_wxConfigBase::_bind_IsRecordingDefaults},
	{"SetExpandEnvVars", &luna_wrapper_wxConfigBase::_bind_SetExpandEnvVars},
	{"SetRecordDefaults", &luna_wrapper_wxConfigBase::_bind_SetRecordDefaults},
	{"Create", &luna_wrapper_wxConfigBase::_bind_Create},
	{"DontCreateOnDemand", &luna_wrapper_wxConfigBase::_bind_DontCreateOnDemand},
	{"Get", &luna_wrapper_wxConfigBase::_bind_Get},
	{"Set", &luna_wrapper_wxConfigBase::_bind_Set},
	{"base_GetClassInfo", &luna_wrapper_wxConfigBase::_bind_base_GetClassInfo},
	{"base_GetEntryType", &luna_wrapper_wxConfigBase::_bind_base_GetEntryType},
	{"fromVoid", &luna_wrapper_wxConfigBase::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxConfigBase::_bind_asVoid},
	{"getTable", &luna_wrapper_wxConfigBase::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxConfigBase >::converters[] = {
	{"wxObject", &luna_wrapper_wxConfigBase::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxConfigBase >::enumValues[] = {
	{"Type_Unknown", wxConfigBase::Type_Unknown},
	{"Type_String", wxConfigBase::Type_String},
	{"Type_Boolean", wxConfigBase::Type_Boolean},
	{"Type_Integer", wxConfigBase::Type_Integer},
	{"Type_Float", wxConfigBase::Type_Float},
	{0,0}
};


