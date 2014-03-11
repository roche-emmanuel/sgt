#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTarEntry.h>

class luna_wrapper_wxTarEntry {
public:
	typedef Luna< wxTarEntry > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxTarEntry,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,73261869) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTarEntry*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxTarEntry* rhs =(Luna< wxTarEntry >::check(L,2));
		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
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

		wxTarEntry* self= (wxTarEntry*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTarEntry >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,73261869) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxTarEntry >::check(L,1));
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

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTarEntry");
		
		return luna_dynamicCast(L,converters,"wxTarEntry",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>3 ) return false;

		if( luatop>0 && lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,57497519) ) return false;
		if( luatop>1 && (!(Luna< wxDateTime >::check(L,2))) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,73261869) ) return false;
		if( (!(Luna< wxTarEntry >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,57497519) ) return false;
		if( luatop>2 && (!(Luna< wxDateTime >::check(L,3))) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,73261869) ) return false;
		if( (!(Luna< wxTarEntry >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetAccessTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAccessTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57497519) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCreateTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCreateTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57497519) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDevMajor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDevMinor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDevMajor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDevMinor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetGroupId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUserId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetGroupId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUserId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetGroupName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetGroupName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUserName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLinkName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetLinkName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTypeFlag(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetTypeFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetInternalName_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetInternalName_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetInternalName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTarEntry::wxTarEntry(const wxString & name = wxEmptyString, const wxDateTime & dt = wxDateTime::Now (), long long size = wxInvalidOffset)
	static wxTarEntry* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxTarEntry::wxTarEntry(const wxString & name = wxEmptyString, const wxDateTime & dt = wxDateTime::Now (), long long size = wxInvalidOffset) function, expected prototype:\nwxTarEntry::wxTarEntry(const wxString & name = wxEmptyString, const wxDateTime & dt = wxDateTime::Now (), long long size = wxInvalidOffset)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 57497519\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,1),lua_objlen(L,1));
		const wxDateTime* dt_ptr=luatop>1 ? (Luna< wxDateTime >::check(L,2)) : NULL;
		if( luatop>1 && !dt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dt in wxTarEntry::wxTarEntry function");
		}
		const wxDateTime & dt=luatop>1 ? *dt_ptr : (const wxDateTime&)wxDateTime::Now ();
		long long size=luatop>2 ? (long long)lua_tonumber(L,3) : (long long)wxInvalidOffset;

		return new wxTarEntry(name, dt, size);
	}

	// wxTarEntry::wxTarEntry(const wxTarEntry & entry)
	static wxTarEntry* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxTarEntry::wxTarEntry(const wxTarEntry & entry) function, expected prototype:\nwxTarEntry::wxTarEntry(const wxTarEntry & entry)\nClass arguments details:\narg 1 ID = 73261869\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTarEntry* entry_ptr=(Luna< wxTarEntry >::check(L,1));
		if( !entry_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg entry in wxTarEntry::wxTarEntry function");
		}
		const wxTarEntry & entry=*entry_ptr;

		return new wxTarEntry(entry);
	}

	// wxTarEntry::wxTarEntry(lua_Table * data, const wxString & name = wxEmptyString, const wxDateTime & dt = wxDateTime::Now (), long long size = wxInvalidOffset)
	static wxTarEntry* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxTarEntry::wxTarEntry(lua_Table * data, const wxString & name = wxEmptyString, const wxDateTime & dt = wxDateTime::Now (), long long size = wxInvalidOffset) function, expected prototype:\nwxTarEntry::wxTarEntry(lua_Table * data, const wxString & name = wxEmptyString, const wxDateTime & dt = wxDateTime::Now (), long long size = wxInvalidOffset)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 57497519\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		const wxDateTime* dt_ptr=luatop>2 ? (Luna< wxDateTime >::check(L,3)) : NULL;
		if( luatop>2 && !dt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dt in wxTarEntry::wxTarEntry function");
		}
		const wxDateTime & dt=luatop>2 ? *dt_ptr : (const wxDateTime&)wxDateTime::Now ();
		long long size=luatop>3 ? (long long)lua_tonumber(L,4) : (long long)wxInvalidOffset;

		return new wrapper_wxTarEntry(L,NULL, name, dt, size);
	}

	// wxTarEntry::wxTarEntry(lua_Table * data, const wxTarEntry & entry)
	static wxTarEntry* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxTarEntry::wxTarEntry(lua_Table * data, const wxTarEntry & entry) function, expected prototype:\nwxTarEntry::wxTarEntry(lua_Table * data, const wxTarEntry & entry)\nClass arguments details:\narg 2 ID = 73261869\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTarEntry* entry_ptr=(Luna< wxTarEntry >::check(L,2));
		if( !entry_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg entry in wxTarEntry::wxTarEntry function");
		}
		const wxTarEntry & entry=*entry_ptr;

		return new wrapper_wxTarEntry(L,NULL, entry);
	}

	// Overload binder for wxTarEntry::wxTarEntry
	static wxTarEntry* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxTarEntry, cannot match any of the overloads for function wxTarEntry:\n  wxTarEntry(const wxString &, const wxDateTime &, long long)\n  wxTarEntry(const wxTarEntry &)\n  wxTarEntry(lua_Table *, const wxString &, const wxDateTime &, long long)\n  wxTarEntry(lua_Table *, const wxTarEntry &)\n");
		return NULL;
	}


	// Function binds:
	// wxDateTime wxTarEntry::GetAccessTime() const
	static int _bind_GetAccessTime(lua_State *L) {
		if (!_lg_typecheck_GetAccessTime(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime wxTarEntry::GetAccessTime() const function, expected prototype:\nwxDateTime wxTarEntry::GetAccessTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime wxTarEntry::GetAccessTime() const. Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateTime stack_lret = self->GetAccessTime();
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// void wxTarEntry::SetAccessTime(const wxDateTime & dt)
	static int _bind_SetAccessTime(lua_State *L) {
		if (!_lg_typecheck_SetAccessTime(L)) {
			luaL_error(L, "luna typecheck failed in void wxTarEntry::SetAccessTime(const wxDateTime & dt) function, expected prototype:\nvoid wxTarEntry::SetAccessTime(const wxDateTime & dt)\nClass arguments details:\narg 1 ID = 57497519\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateTime* dt_ptr=(Luna< wxDateTime >::check(L,2));
		if( !dt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dt in wxTarEntry::SetAccessTime function");
		}
		const wxDateTime & dt=*dt_ptr;

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTarEntry::SetAccessTime(const wxDateTime &). Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAccessTime(dt);

		return 0;
	}

	// wxDateTime wxTarEntry::GetCreateTime() const
	static int _bind_GetCreateTime(lua_State *L) {
		if (!_lg_typecheck_GetCreateTime(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime wxTarEntry::GetCreateTime() const function, expected prototype:\nwxDateTime wxTarEntry::GetCreateTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime wxTarEntry::GetCreateTime() const. Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateTime stack_lret = self->GetCreateTime();
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// void wxTarEntry::SetCreateTime(const wxDateTime & dt)
	static int _bind_SetCreateTime(lua_State *L) {
		if (!_lg_typecheck_SetCreateTime(L)) {
			luaL_error(L, "luna typecheck failed in void wxTarEntry::SetCreateTime(const wxDateTime & dt) function, expected prototype:\nvoid wxTarEntry::SetCreateTime(const wxDateTime & dt)\nClass arguments details:\narg 1 ID = 57497519\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateTime* dt_ptr=(Luna< wxDateTime >::check(L,2));
		if( !dt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dt in wxTarEntry::SetCreateTime function");
		}
		const wxDateTime & dt=*dt_ptr;

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTarEntry::SetCreateTime(const wxDateTime &). Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCreateTime(dt);

		return 0;
	}

	// int wxTarEntry::GetDevMajor() const
	static int _bind_GetDevMajor(lua_State *L) {
		if (!_lg_typecheck_GetDevMajor(L)) {
			luaL_error(L, "luna typecheck failed in int wxTarEntry::GetDevMajor() const function, expected prototype:\nint wxTarEntry::GetDevMajor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTarEntry::GetDevMajor() const. Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetDevMajor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTarEntry::GetDevMinor() const
	static int _bind_GetDevMinor(lua_State *L) {
		if (!_lg_typecheck_GetDevMinor(L)) {
			luaL_error(L, "luna typecheck failed in int wxTarEntry::GetDevMinor() const function, expected prototype:\nint wxTarEntry::GetDevMinor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTarEntry::GetDevMinor() const. Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetDevMinor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTarEntry::SetDevMajor(int dev)
	static int _bind_SetDevMajor(lua_State *L) {
		if (!_lg_typecheck_SetDevMajor(L)) {
			luaL_error(L, "luna typecheck failed in void wxTarEntry::SetDevMajor(int dev) function, expected prototype:\nvoid wxTarEntry::SetDevMajor(int dev)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int dev=(int)lua_tointeger(L,2);

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTarEntry::SetDevMajor(int). Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDevMajor(dev);

		return 0;
	}

	// void wxTarEntry::SetDevMinor(int dev)
	static int _bind_SetDevMinor(lua_State *L) {
		if (!_lg_typecheck_SetDevMinor(L)) {
			luaL_error(L, "luna typecheck failed in void wxTarEntry::SetDevMinor(int dev) function, expected prototype:\nvoid wxTarEntry::SetDevMinor(int dev)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int dev=(int)lua_tointeger(L,2);

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTarEntry::SetDevMinor(int). Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDevMinor(dev);

		return 0;
	}

	// int wxTarEntry::GetGroupId() const
	static int _bind_GetGroupId(lua_State *L) {
		if (!_lg_typecheck_GetGroupId(L)) {
			luaL_error(L, "luna typecheck failed in int wxTarEntry::GetGroupId() const function, expected prototype:\nint wxTarEntry::GetGroupId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTarEntry::GetGroupId() const. Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetGroupId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTarEntry::GetUserId() const
	static int _bind_GetUserId(lua_State *L) {
		if (!_lg_typecheck_GetUserId(L)) {
			luaL_error(L, "luna typecheck failed in int wxTarEntry::GetUserId() const function, expected prototype:\nint wxTarEntry::GetUserId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTarEntry::GetUserId() const. Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetUserId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTarEntry::SetGroupId(int id)
	static int _bind_SetGroupId(lua_State *L) {
		if (!_lg_typecheck_SetGroupId(L)) {
			luaL_error(L, "luna typecheck failed in void wxTarEntry::SetGroupId(int id) function, expected prototype:\nvoid wxTarEntry::SetGroupId(int id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTarEntry::SetGroupId(int). Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetGroupId(id);

		return 0;
	}

	// void wxTarEntry::SetUserId(int id)
	static int _bind_SetUserId(lua_State *L) {
		if (!_lg_typecheck_SetUserId(L)) {
			luaL_error(L, "luna typecheck failed in void wxTarEntry::SetUserId(int id) function, expected prototype:\nvoid wxTarEntry::SetUserId(int id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTarEntry::SetUserId(int). Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetUserId(id);

		return 0;
	}

	// wxString wxTarEntry::GetGroupName() const
	static int _bind_GetGroupName(lua_State *L) {
		if (!_lg_typecheck_GetGroupName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTarEntry::GetGroupName() const function, expected prototype:\nwxString wxTarEntry::GetGroupName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTarEntry::GetGroupName() const. Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetGroupName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxTarEntry::SetGroupName(const wxString & group)
	static int _bind_SetGroupName(lua_State *L) {
		if (!_lg_typecheck_SetGroupName(L)) {
			luaL_error(L, "luna typecheck failed in void wxTarEntry::SetGroupName(const wxString & group) function, expected prototype:\nvoid wxTarEntry::SetGroupName(const wxString & group)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString group(lua_tostring(L,2),lua_objlen(L,2));

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTarEntry::SetGroupName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetGroupName(group);

		return 0;
	}

	// void wxTarEntry::SetUserName(const wxString & user)
	static int _bind_SetUserName(lua_State *L) {
		if (!_lg_typecheck_SetUserName(L)) {
			luaL_error(L, "luna typecheck failed in void wxTarEntry::SetUserName(const wxString & user) function, expected prototype:\nvoid wxTarEntry::SetUserName(const wxString & user)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString user(lua_tostring(L,2),lua_objlen(L,2));

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTarEntry::SetUserName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetUserName(user);

		return 0;
	}

	// wxString wxTarEntry::GetLinkName() const
	static int _bind_GetLinkName(lua_State *L) {
		if (!_lg_typecheck_GetLinkName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTarEntry::GetLinkName() const function, expected prototype:\nwxString wxTarEntry::GetLinkName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTarEntry::GetLinkName() const. Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetLinkName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxTarEntry::SetLinkName(const wxString & link)
	static int _bind_SetLinkName(lua_State *L) {
		if (!_lg_typecheck_SetLinkName(L)) {
			luaL_error(L, "luna typecheck failed in void wxTarEntry::SetLinkName(const wxString & link) function, expected prototype:\nvoid wxTarEntry::SetLinkName(const wxString & link)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString link(lua_tostring(L,2),lua_objlen(L,2));

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTarEntry::SetLinkName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLinkName(link);

		return 0;
	}

	// int wxTarEntry::GetMode() const
	static int _bind_GetMode(lua_State *L) {
		if (!_lg_typecheck_GetMode(L)) {
			luaL_error(L, "luna typecheck failed in int wxTarEntry::GetMode() const function, expected prototype:\nint wxTarEntry::GetMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTarEntry::GetMode() const. Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTarEntry::SetMode(int mode)
	static int _bind_SetMode(lua_State *L) {
		if (!_lg_typecheck_SetMode(L)) {
			luaL_error(L, "luna typecheck failed in void wxTarEntry::SetMode(int mode) function, expected prototype:\nvoid wxTarEntry::SetMode(int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int mode=(int)lua_tointeger(L,2);

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTarEntry::SetMode(int). Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMode(mode);

		return 0;
	}

	// void wxTarEntry::SetSize(long long size)
	static int _bind_SetSize(lua_State *L) {
		if (!_lg_typecheck_SetSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxTarEntry::SetSize(long long size) function, expected prototype:\nvoid wxTarEntry::SetSize(long long size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long long size=(long long)lua_tonumber(L,2);

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTarEntry::SetSize(long long). Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSize(size);

		return 0;
	}

	// long long wxTarEntry::GetSize() const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in long long wxTarEntry::GetSize() const function, expected prototype:\nlong long wxTarEntry::GetSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long long wxTarEntry::GetSize() const. Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long long lret = self->GetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTarEntry::GetTypeFlag() const
	static int _bind_GetTypeFlag(lua_State *L) {
		if (!_lg_typecheck_GetTypeFlag(L)) {
			luaL_error(L, "luna typecheck failed in int wxTarEntry::GetTypeFlag() const function, expected prototype:\nint wxTarEntry::GetTypeFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTarEntry::GetTypeFlag() const. Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetTypeFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTarEntry::SetTypeFlag(int type)
	static int _bind_SetTypeFlag(lua_State *L) {
		if (!_lg_typecheck_SetTypeFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxTarEntry::SetTypeFlag(int type) function, expected prototype:\nvoid wxTarEntry::SetTypeFlag(int type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int type=(int)lua_tointeger(L,2);

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTarEntry::SetTypeFlag(int). Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTypeFlag(type);

		return 0;
	}

	// wxString wxTarEntry::GetInternalName() const
	static int _bind_GetInternalName_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetInternalName_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTarEntry::GetInternalName() const function, expected prototype:\nwxString wxTarEntry::GetInternalName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTarEntry::GetInternalName() const. Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetInternalName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxTarEntry::GetInternalName(const wxString & name, wxPathFormat format = ::wxPATH_NATIVE, bool * pIsDir = NULL)
	static int _bind_GetInternalName_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetInternalName_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxTarEntry::GetInternalName(const wxString & name, wxPathFormat format = ::wxPATH_NATIVE, bool * pIsDir = NULL) function, expected prototype:\nstatic wxString wxTarEntry::GetInternalName(const wxString & name, wxPathFormat format = ::wxPATH_NATIVE, bool * pIsDir = NULL)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,1),lua_objlen(L,1));
		wxPathFormat format=luatop>1 ? (wxPathFormat)lua_tointeger(L,2) : (wxPathFormat)::wxPATH_NATIVE;
		bool* pIsDir=luatop>2 ? (bool*)(Luna< void >::check(L,3)) : (bool*)NULL;

		wxString lret = wxTarEntry::GetInternalName(name, format, pIsDir);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// Overload binder for wxTarEntry::GetInternalName
	static int _bind_GetInternalName(lua_State *L) {
		if (_lg_typecheck_GetInternalName_overload_1(L)) return _bind_GetInternalName_overload_1(L);
		if (_lg_typecheck_GetInternalName_overload_2(L)) return _bind_GetInternalName_overload_2(L);

		luaL_error(L, "error in function GetInternalName, cannot match any of the overloads for function GetInternalName:\n  GetInternalName()\n  GetInternalName(const wxString &, wxPathFormat, bool *)\n");
		return 0;
	}

	// void wxTarEntry::base_SetSize(long long size)
	static int _bind_base_SetSize(lua_State *L) {
		if (!_lg_typecheck_base_SetSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxTarEntry::base_SetSize(long long size) function, expected prototype:\nvoid wxTarEntry::base_SetSize(long long size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long long size=(long long)lua_tonumber(L,2);

		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTarEntry::base_SetSize(long long). Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTarEntry::SetSize(size);

		return 0;
	}

	// long long wxTarEntry::base_GetSize() const
	static int _bind_base_GetSize(lua_State *L) {
		if (!_lg_typecheck_base_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in long long wxTarEntry::base_GetSize() const function, expected prototype:\nlong long wxTarEntry::base_GetSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long long wxTarEntry::base_GetSize() const. Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long long lret = self->wxTarEntry::GetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxTarEntry::base_GetInternalName() const
	static int _bind_base_GetInternalName(lua_State *L) {
		if (!_lg_typecheck_base_GetInternalName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTarEntry::base_GetInternalName() const function, expected prototype:\nwxString wxTarEntry::base_GetInternalName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTarEntry* self=(Luna< wxTarEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTarEntry::base_GetInternalName() const. Got : '%s'\n%s",typeid(Luna< wxTarEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxTarEntry::GetInternalName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxTarEntry* LunaTraits< wxTarEntry >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTarEntry::_bind_ctor(L);
}

void LunaTraits< wxTarEntry >::_bind_dtor(wxTarEntry* obj) {
	delete obj;
}

const char LunaTraits< wxTarEntry >::className[] = "wxTarEntry";
const char LunaTraits< wxTarEntry >::fullName[] = "wxTarEntry";
const char LunaTraits< wxTarEntry >::moduleName[] = "wx";
const char* LunaTraits< wxTarEntry >::parents[] = {0};
const int LunaTraits< wxTarEntry >::hash = 73261869;
const int LunaTraits< wxTarEntry >::uniqueIDs[] = {73261869,0};

luna_RegType LunaTraits< wxTarEntry >::methods[] = {
	{"GetAccessTime", &luna_wrapper_wxTarEntry::_bind_GetAccessTime},
	{"SetAccessTime", &luna_wrapper_wxTarEntry::_bind_SetAccessTime},
	{"GetCreateTime", &luna_wrapper_wxTarEntry::_bind_GetCreateTime},
	{"SetCreateTime", &luna_wrapper_wxTarEntry::_bind_SetCreateTime},
	{"GetDevMajor", &luna_wrapper_wxTarEntry::_bind_GetDevMajor},
	{"GetDevMinor", &luna_wrapper_wxTarEntry::_bind_GetDevMinor},
	{"SetDevMajor", &luna_wrapper_wxTarEntry::_bind_SetDevMajor},
	{"SetDevMinor", &luna_wrapper_wxTarEntry::_bind_SetDevMinor},
	{"GetGroupId", &luna_wrapper_wxTarEntry::_bind_GetGroupId},
	{"GetUserId", &luna_wrapper_wxTarEntry::_bind_GetUserId},
	{"SetGroupId", &luna_wrapper_wxTarEntry::_bind_SetGroupId},
	{"SetUserId", &luna_wrapper_wxTarEntry::_bind_SetUserId},
	{"GetGroupName", &luna_wrapper_wxTarEntry::_bind_GetGroupName},
	{"SetGroupName", &luna_wrapper_wxTarEntry::_bind_SetGroupName},
	{"SetUserName", &luna_wrapper_wxTarEntry::_bind_SetUserName},
	{"GetLinkName", &luna_wrapper_wxTarEntry::_bind_GetLinkName},
	{"SetLinkName", &luna_wrapper_wxTarEntry::_bind_SetLinkName},
	{"GetMode", &luna_wrapper_wxTarEntry::_bind_GetMode},
	{"SetMode", &luna_wrapper_wxTarEntry::_bind_SetMode},
	{"SetSize", &luna_wrapper_wxTarEntry::_bind_SetSize},
	{"GetSize", &luna_wrapper_wxTarEntry::_bind_GetSize},
	{"GetTypeFlag", &luna_wrapper_wxTarEntry::_bind_GetTypeFlag},
	{"SetTypeFlag", &luna_wrapper_wxTarEntry::_bind_SetTypeFlag},
	{"GetInternalName", &luna_wrapper_wxTarEntry::_bind_GetInternalName},
	{"base_SetSize", &luna_wrapper_wxTarEntry::_bind_base_SetSize},
	{"base_GetSize", &luna_wrapper_wxTarEntry::_bind_base_GetSize},
	{"base_GetInternalName", &luna_wrapper_wxTarEntry::_bind_base_GetInternalName},
	{"dynCast", &luna_wrapper_wxTarEntry::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTarEntry::_bind___eq},
	{"fromVoid", &luna_wrapper_wxTarEntry::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTarEntry::_bind_asVoid},
	{"getTable", &luna_wrapper_wxTarEntry::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxTarEntry >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTarEntry >::enumValues[] = {
	{0,0}
};


