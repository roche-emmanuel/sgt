#include <plug_common.h>

class luna_wrapper_wxFSVolume {
public:
	typedef Luna< wxFSVolume > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,8757657) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxFSVolume*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxFSVolume* rhs =(Luna< wxFSVolume >::check(L,2));
		wxFSVolume* self=(Luna< wxFSVolume >::check(L,1));
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

		wxFSVolume* self= (wxFSVolume*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFSVolume >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,8757657) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxFSVolume >::check(L,1));
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

		wxFSVolume* self=(Luna< wxFSVolume >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxFSVolume");
		
		return luna_dynamicCast(L,converters,"wxFSVolume",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetKind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsWritable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDisplayName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetIcon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetVolumes(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CancelSearch(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFSVolume::wxFSVolume()
	static wxFSVolume* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxFSVolume::wxFSVolume() function, expected prototype:\nwxFSVolume::wxFSVolume()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxFSVolume();
	}

	// wxFSVolume::wxFSVolume(const wxString & name)
	static wxFSVolume* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxFSVolume::wxFSVolume(const wxString & name) function, expected prototype:\nwxFSVolume::wxFSVolume(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,1),lua_objlen(L,1));

		return new wxFSVolume(name);
	}

	// Overload binder for wxFSVolume::wxFSVolume
	static wxFSVolume* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxFSVolume, cannot match any of the overloads for function wxFSVolume:\n  wxFSVolume()\n  wxFSVolume(const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxFSVolume::Create(const wxString & name)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFSVolume::Create(const wxString & name) function, expected prototype:\nbool wxFSVolume::Create(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxFSVolume* self=(Luna< wxFSVolume >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFSVolume::Create(const wxString &). Got : '%s'\n%s",typeid(Luna< wxFSVolume >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFSVolume::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFSVolume::IsOk() const function, expected prototype:\nbool wxFSVolume::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFSVolume* self=(Luna< wxFSVolume >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFSVolume::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxFSVolume >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxFSVolumeKind wxFSVolume::GetKind() const
	static int _bind_GetKind(lua_State *L) {
		if (!_lg_typecheck_GetKind(L)) {
			luaL_error(L, "luna typecheck failed in wxFSVolumeKind wxFSVolume::GetKind() const function, expected prototype:\nwxFSVolumeKind wxFSVolume::GetKind() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFSVolume* self=(Luna< wxFSVolume >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFSVolumeKind wxFSVolume::GetKind() const. Got : '%s'\n%s",typeid(Luna< wxFSVolume >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFSVolumeKind lret = self->GetKind();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxFSVolume::GetFlags() const
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luaL_error(L, "luna typecheck failed in int wxFSVolume::GetFlags() const function, expected prototype:\nint wxFSVolume::GetFlags() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFSVolume* self=(Luna< wxFSVolume >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFSVolume::GetFlags() const. Got : '%s'\n%s",typeid(Luna< wxFSVolume >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFSVolume::IsWritable() const
	static int _bind_IsWritable(lua_State *L) {
		if (!_lg_typecheck_IsWritable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFSVolume::IsWritable() const function, expected prototype:\nbool wxFSVolume::IsWritable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFSVolume* self=(Luna< wxFSVolume >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFSVolume::IsWritable() const. Got : '%s'\n%s",typeid(Luna< wxFSVolume >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsWritable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxFSVolume::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFSVolume::GetName() const function, expected prototype:\nwxString wxFSVolume::GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFSVolume* self=(Luna< wxFSVolume >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFSVolume::GetName() const. Got : '%s'\n%s",typeid(Luna< wxFSVolume >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxFSVolume::GetDisplayName() const
	static int _bind_GetDisplayName(lua_State *L) {
		if (!_lg_typecheck_GetDisplayName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFSVolume::GetDisplayName() const function, expected prototype:\nwxString wxFSVolume::GetDisplayName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFSVolume* self=(Luna< wxFSVolume >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFSVolume::GetDisplayName() const. Got : '%s'\n%s",typeid(Luna< wxFSVolume >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetDisplayName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxIcon wxFSVolume::GetIcon(wxFSIconType type) const
	static int _bind_GetIcon(lua_State *L) {
		if (!_lg_typecheck_GetIcon(L)) {
			luaL_error(L, "luna typecheck failed in wxIcon wxFSVolume::GetIcon(wxFSIconType type) const function, expected prototype:\nwxIcon wxFSVolume::GetIcon(wxFSIconType type) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFSIconType type=(wxFSIconType)lua_tointeger(L,2);

		wxFSVolume* self=(Luna< wxFSVolume >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxIcon wxFSVolume::GetIcon(wxFSIconType) const. Got : '%s'\n%s",typeid(Luna< wxFSVolume >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxIcon stack_lret = self->GetIcon(type);
		wxIcon* lret = new wxIcon(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIcon >::push(L,lret,true);

		return 1;
	}

	// static wxArrayString wxFSVolume::GetVolumes(int flagsSet = ::wxFS_VOL_MOUNTED, int flagsUnset = 0)
	static int _bind_GetVolumes(lua_State *L) {
		if (!_lg_typecheck_GetVolumes(L)) {
			luaL_error(L, "luna typecheck failed in static wxArrayString wxFSVolume::GetVolumes(int flagsSet = ::wxFS_VOL_MOUNTED, int flagsUnset = 0) function, expected prototype:\nstatic wxArrayString wxFSVolume::GetVolumes(int flagsSet = ::wxFS_VOL_MOUNTED, int flagsUnset = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flagsSet=luatop>0 ? (int)lua_tointeger(L,1) : (int)::wxFS_VOL_MOUNTED;
		int flagsUnset=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxArrayString stack_lret = wxFSVolume::GetVolumes(flagsSet, flagsUnset);
		wxArrayString* lret = new wxArrayString(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayString >::push(L,lret,true);

		return 1;
	}

	// static void wxFSVolume::CancelSearch()
	static int _bind_CancelSearch(lua_State *L) {
		if (!_lg_typecheck_CancelSearch(L)) {
			luaL_error(L, "luna typecheck failed in static void wxFSVolume::CancelSearch() function, expected prototype:\nstatic void wxFSVolume::CancelSearch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFSVolume::CancelSearch();

		return 0;
	}


	// Operator binds:

};

wxFSVolume* LunaTraits< wxFSVolume >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFSVolume::_bind_ctor(L);
}

void LunaTraits< wxFSVolume >::_bind_dtor(wxFSVolume* obj) {
	delete obj;
}

const char LunaTraits< wxFSVolume >::className[] = "wxFSVolume";
const char LunaTraits< wxFSVolume >::fullName[] = "wxFSVolume";
const char LunaTraits< wxFSVolume >::moduleName[] = "wx";
const char* LunaTraits< wxFSVolume >::parents[] = {0};
const int LunaTraits< wxFSVolume >::hash = 8757657;
const int LunaTraits< wxFSVolume >::uniqueIDs[] = {8757657,0};

luna_RegType LunaTraits< wxFSVolume >::methods[] = {
	{"Create", &luna_wrapper_wxFSVolume::_bind_Create},
	{"IsOk", &luna_wrapper_wxFSVolume::_bind_IsOk},
	{"GetKind", &luna_wrapper_wxFSVolume::_bind_GetKind},
	{"GetFlags", &luna_wrapper_wxFSVolume::_bind_GetFlags},
	{"IsWritable", &luna_wrapper_wxFSVolume::_bind_IsWritable},
	{"GetName", &luna_wrapper_wxFSVolume::_bind_GetName},
	{"GetDisplayName", &luna_wrapper_wxFSVolume::_bind_GetDisplayName},
	{"GetIcon", &luna_wrapper_wxFSVolume::_bind_GetIcon},
	{"GetVolumes", &luna_wrapper_wxFSVolume::_bind_GetVolumes},
	{"CancelSearch", &luna_wrapper_wxFSVolume::_bind_CancelSearch},
	{"dynCast", &luna_wrapper_wxFSVolume::_bind_dynCast},
	{"__eq", &luna_wrapper_wxFSVolume::_bind___eq},
	{"fromVoid", &luna_wrapper_wxFSVolume::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFSVolume::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxFSVolume >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxFSVolume >::enumValues[] = {
	{0,0}
};


