#include <plug_common.h>

class luna_wrapper_wxPlatformInfo {
public:
	typedef Luna< wxPlatformInfo > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxPlatformInfo* self= (wxPlatformInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPlatformInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92430623) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxPlatformInfo >::check(L,1));
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

		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxPlatformInfo");
		
		return luna_dynamicCast(L,converters,"wxPlatformInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>8 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CheckOSVersion(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CheckToolkitVersion(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsUsingUniversalWidgets(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetArchitecture(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEndianness_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEndianness_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetOSMajorVersion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOSMinorVersion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOperatingSystemId_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOperatingSystemId_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetOperatingSystemDescription(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPortId_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPortId_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLinuxDistributionInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDesktopEnvironment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetToolkitMajorVersion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetToolkitMinorVersion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetArchName_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetArchName_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetEndiannessName_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEndiannessName_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetOperatingSystemFamilyName_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOperatingSystemFamilyName_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetOperatingSystemIdName_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOperatingSystemIdName_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPortIdName_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPortIdName_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPortIdShortName_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPortIdShortName_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetArchitecture(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetEndianness(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOSVersion(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOperatingSystemId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPortId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolkitVersion(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOperatingSystemDescription(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDesktopEnvironment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLinuxDistributionInfo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,82275018) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Get(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetArch(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetOperatingSystemDirectory(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92430623) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92430623) ) return false;
		return true;
	}


	// Constructor binds:
	// wxPlatformInfo::wxPlatformInfo()
	static wxPlatformInfo* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPlatformInfo::wxPlatformInfo() function, expected prototype:\nwxPlatformInfo::wxPlatformInfo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxPlatformInfo();
	}

	// wxPlatformInfo::wxPlatformInfo(wxPortId pid, int tkMajor = -1, int tkMinor = -1, wxOperatingSystemId id = ::wxOS_UNKNOWN, int osMajor = -1, int osMinor = -1, wxArchitecture arch = ::wxARCH_INVALID, wxEndianness endian = ::wxENDIAN_INVALID)
	static wxPlatformInfo* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPlatformInfo::wxPlatformInfo(wxPortId pid, int tkMajor = -1, int tkMinor = -1, wxOperatingSystemId id = ::wxOS_UNKNOWN, int osMajor = -1, int osMinor = -1, wxArchitecture arch = ::wxARCH_INVALID, wxEndianness endian = ::wxENDIAN_INVALID) function, expected prototype:\nwxPlatformInfo::wxPlatformInfo(wxPortId pid, int tkMajor = -1, int tkMinor = -1, wxOperatingSystemId id = ::wxOS_UNKNOWN, int osMajor = -1, int osMinor = -1, wxArchitecture arch = ::wxARCH_INVALID, wxEndianness endian = ::wxENDIAN_INVALID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxPortId pid=(wxPortId)lua_tointeger(L,1);
		int tkMajor=luatop>1 ? (int)lua_tointeger(L,2) : (int)-1;
		int tkMinor=luatop>2 ? (int)lua_tointeger(L,3) : (int)-1;
		wxOperatingSystemId id=luatop>3 ? (wxOperatingSystemId)lua_tointeger(L,4) : (wxOperatingSystemId)::wxOS_UNKNOWN;
		int osMajor=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int osMinor=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		wxArchitecture arch=luatop>6 ? (wxArchitecture)lua_tointeger(L,7) : (wxArchitecture)::wxARCH_INVALID;
		wxEndianness endian=luatop>7 ? (wxEndianness)lua_tointeger(L,8) : (wxEndianness)::wxENDIAN_INVALID;

		return new wxPlatformInfo(pid, tkMajor, tkMinor, id, osMajor, osMinor, arch, endian);
	}

	// Overload binder for wxPlatformInfo::wxPlatformInfo
	static wxPlatformInfo* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxPlatformInfo, cannot match any of the overloads for function wxPlatformInfo:\n  wxPlatformInfo()\n  wxPlatformInfo(wxPortId, int, int, wxOperatingSystemId, int, int, wxArchitecture, wxEndianness)\n");
		return NULL;
	}


	// Function binds:
	// bool wxPlatformInfo::CheckOSVersion(int major, int minor) const
	static int _bind_CheckOSVersion(lua_State *L) {
		if (!_lg_typecheck_CheckOSVersion(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPlatformInfo::CheckOSVersion(int major, int minor) const function, expected prototype:\nbool wxPlatformInfo::CheckOSVersion(int major, int minor) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int major=(int)lua_tointeger(L,2);
		int minor=(int)lua_tointeger(L,3);

		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPlatformInfo::CheckOSVersion(int, int) const. Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CheckOSVersion(major, minor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPlatformInfo::CheckToolkitVersion(int major, int minor) const
	static int _bind_CheckToolkitVersion(lua_State *L) {
		if (!_lg_typecheck_CheckToolkitVersion(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPlatformInfo::CheckToolkitVersion(int major, int minor) const function, expected prototype:\nbool wxPlatformInfo::CheckToolkitVersion(int major, int minor) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int major=(int)lua_tointeger(L,2);
		int minor=(int)lua_tointeger(L,3);

		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPlatformInfo::CheckToolkitVersion(int, int) const. Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CheckToolkitVersion(major, minor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPlatformInfo::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPlatformInfo::IsOk() const function, expected prototype:\nbool wxPlatformInfo::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPlatformInfo::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPlatformInfo::IsUsingUniversalWidgets() const
	static int _bind_IsUsingUniversalWidgets(lua_State *L) {
		if (!_lg_typecheck_IsUsingUniversalWidgets(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPlatformInfo::IsUsingUniversalWidgets() const function, expected prototype:\nbool wxPlatformInfo::IsUsingUniversalWidgets() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPlatformInfo::IsUsingUniversalWidgets() const. Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsUsingUniversalWidgets();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxArchitecture wxPlatformInfo::GetArchitecture() const
	static int _bind_GetArchitecture(lua_State *L) {
		if (!_lg_typecheck_GetArchitecture(L)) {
			luaL_error(L, "luna typecheck failed in wxArchitecture wxPlatformInfo::GetArchitecture() const function, expected prototype:\nwxArchitecture wxPlatformInfo::GetArchitecture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxArchitecture wxPlatformInfo::GetArchitecture() const. Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxArchitecture lret = self->GetArchitecture();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEndianness wxPlatformInfo::GetEndianness() const
	static int _bind_GetEndianness_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetEndianness_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxEndianness wxPlatformInfo::GetEndianness() const function, expected prototype:\nwxEndianness wxPlatformInfo::GetEndianness() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEndianness wxPlatformInfo::GetEndianness() const. Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEndianness lret = self->GetEndianness();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static wxEndianness wxPlatformInfo::GetEndianness(const wxString & end)
	static int _bind_GetEndianness_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetEndianness_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static wxEndianness wxPlatformInfo::GetEndianness(const wxString & end) function, expected prototype:\nstatic wxEndianness wxPlatformInfo::GetEndianness(const wxString & end)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString end(lua_tostring(L,1),lua_objlen(L,1));

		wxEndianness lret = wxPlatformInfo::GetEndianness(end);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxPlatformInfo::GetEndianness
	static int _bind_GetEndianness(lua_State *L) {
		if (_lg_typecheck_GetEndianness_overload_1(L)) return _bind_GetEndianness_overload_1(L);
		if (_lg_typecheck_GetEndianness_overload_2(L)) return _bind_GetEndianness_overload_2(L);

		luaL_error(L, "error in function GetEndianness, cannot match any of the overloads for function GetEndianness:\n  GetEndianness()\n  GetEndianness(const wxString &)\n");
		return 0;
	}

	// int wxPlatformInfo::GetOSMajorVersion() const
	static int _bind_GetOSMajorVersion(lua_State *L) {
		if (!_lg_typecheck_GetOSMajorVersion(L)) {
			luaL_error(L, "luna typecheck failed in int wxPlatformInfo::GetOSMajorVersion() const function, expected prototype:\nint wxPlatformInfo::GetOSMajorVersion() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPlatformInfo::GetOSMajorVersion() const. Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetOSMajorVersion();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPlatformInfo::GetOSMinorVersion() const
	static int _bind_GetOSMinorVersion(lua_State *L) {
		if (!_lg_typecheck_GetOSMinorVersion(L)) {
			luaL_error(L, "luna typecheck failed in int wxPlatformInfo::GetOSMinorVersion() const function, expected prototype:\nint wxPlatformInfo::GetOSMinorVersion() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPlatformInfo::GetOSMinorVersion() const. Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetOSMinorVersion();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxOperatingSystemId wxPlatformInfo::GetOperatingSystemId() const
	static int _bind_GetOperatingSystemId_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetOperatingSystemId_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxOperatingSystemId wxPlatformInfo::GetOperatingSystemId() const function, expected prototype:\nwxOperatingSystemId wxPlatformInfo::GetOperatingSystemId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxOperatingSystemId wxPlatformInfo::GetOperatingSystemId() const. Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxOperatingSystemId lret = self->GetOperatingSystemId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static wxOperatingSystemId wxPlatformInfo::GetOperatingSystemId(const wxString & name)
	static int _bind_GetOperatingSystemId_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetOperatingSystemId_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static wxOperatingSystemId wxPlatformInfo::GetOperatingSystemId(const wxString & name) function, expected prototype:\nstatic wxOperatingSystemId wxPlatformInfo::GetOperatingSystemId(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,1),lua_objlen(L,1));

		wxOperatingSystemId lret = wxPlatformInfo::GetOperatingSystemId(name);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxPlatformInfo::GetOperatingSystemId
	static int _bind_GetOperatingSystemId(lua_State *L) {
		if (_lg_typecheck_GetOperatingSystemId_overload_1(L)) return _bind_GetOperatingSystemId_overload_1(L);
		if (_lg_typecheck_GetOperatingSystemId_overload_2(L)) return _bind_GetOperatingSystemId_overload_2(L);

		luaL_error(L, "error in function GetOperatingSystemId, cannot match any of the overloads for function GetOperatingSystemId:\n  GetOperatingSystemId()\n  GetOperatingSystemId(const wxString &)\n");
		return 0;
	}

	// wxString wxPlatformInfo::GetOperatingSystemDescription() const
	static int _bind_GetOperatingSystemDescription(lua_State *L) {
		if (!_lg_typecheck_GetOperatingSystemDescription(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPlatformInfo::GetOperatingSystemDescription() const function, expected prototype:\nwxString wxPlatformInfo::GetOperatingSystemDescription() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPlatformInfo::GetOperatingSystemDescription() const. Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetOperatingSystemDescription();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxPortId wxPlatformInfo::GetPortId() const
	static int _bind_GetPortId_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetPortId_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPortId wxPlatformInfo::GetPortId() const function, expected prototype:\nwxPortId wxPlatformInfo::GetPortId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPortId wxPlatformInfo::GetPortId() const. Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPortId lret = self->GetPortId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static wxPortId wxPlatformInfo::GetPortId(const wxString & portname)
	static int _bind_GetPortId_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetPortId_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static wxPortId wxPlatformInfo::GetPortId(const wxString & portname) function, expected prototype:\nstatic wxPortId wxPlatformInfo::GetPortId(const wxString & portname)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString portname(lua_tostring(L,1),lua_objlen(L,1));

		wxPortId lret = wxPlatformInfo::GetPortId(portname);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxPlatformInfo::GetPortId
	static int _bind_GetPortId(lua_State *L) {
		if (_lg_typecheck_GetPortId_overload_1(L)) return _bind_GetPortId_overload_1(L);
		if (_lg_typecheck_GetPortId_overload_2(L)) return _bind_GetPortId_overload_2(L);

		luaL_error(L, "error in function GetPortId, cannot match any of the overloads for function GetPortId:\n  GetPortId()\n  GetPortId(const wxString &)\n");
		return 0;
	}

	// wxLinuxDistributionInfo wxPlatformInfo::GetLinuxDistributionInfo() const
	static int _bind_GetLinuxDistributionInfo(lua_State *L) {
		if (!_lg_typecheck_GetLinuxDistributionInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxLinuxDistributionInfo wxPlatformInfo::GetLinuxDistributionInfo() const function, expected prototype:\nwxLinuxDistributionInfo wxPlatformInfo::GetLinuxDistributionInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLinuxDistributionInfo wxPlatformInfo::GetLinuxDistributionInfo() const. Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLinuxDistributionInfo stack_lret = self->GetLinuxDistributionInfo();
		wxLinuxDistributionInfo* lret = new wxLinuxDistributionInfo(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxLinuxDistributionInfo >::push(L,lret,true);

		return 1;
	}

	// wxString wxPlatformInfo::GetDesktopEnvironment() const
	static int _bind_GetDesktopEnvironment(lua_State *L) {
		if (!_lg_typecheck_GetDesktopEnvironment(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPlatformInfo::GetDesktopEnvironment() const function, expected prototype:\nwxString wxPlatformInfo::GetDesktopEnvironment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPlatformInfo::GetDesktopEnvironment() const. Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetDesktopEnvironment();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxPlatformInfo::GetToolkitMajorVersion() const
	static int _bind_GetToolkitMajorVersion(lua_State *L) {
		if (!_lg_typecheck_GetToolkitMajorVersion(L)) {
			luaL_error(L, "luna typecheck failed in int wxPlatformInfo::GetToolkitMajorVersion() const function, expected prototype:\nint wxPlatformInfo::GetToolkitMajorVersion() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPlatformInfo::GetToolkitMajorVersion() const. Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetToolkitMajorVersion();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPlatformInfo::GetToolkitMinorVersion() const
	static int _bind_GetToolkitMinorVersion(lua_State *L) {
		if (!_lg_typecheck_GetToolkitMinorVersion(L)) {
			luaL_error(L, "luna typecheck failed in int wxPlatformInfo::GetToolkitMinorVersion() const function, expected prototype:\nint wxPlatformInfo::GetToolkitMinorVersion() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPlatformInfo::GetToolkitMinorVersion() const. Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetToolkitMinorVersion();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxPlatformInfo::GetArchName() const
	static int _bind_GetArchName_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetArchName_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPlatformInfo::GetArchName() const function, expected prototype:\nwxString wxPlatformInfo::GetArchName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPlatformInfo::GetArchName() const. Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetArchName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxPlatformInfo::GetArchName(wxArchitecture arch)
	static int _bind_GetArchName_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetArchName_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxPlatformInfo::GetArchName(wxArchitecture arch) function, expected prototype:\nstatic wxString wxPlatformInfo::GetArchName(wxArchitecture arch)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxArchitecture arch=(wxArchitecture)lua_tointeger(L,1);

		wxString lret = wxPlatformInfo::GetArchName(arch);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// Overload binder for wxPlatformInfo::GetArchName
	static int _bind_GetArchName(lua_State *L) {
		if (_lg_typecheck_GetArchName_overload_1(L)) return _bind_GetArchName_overload_1(L);
		if (_lg_typecheck_GetArchName_overload_2(L)) return _bind_GetArchName_overload_2(L);

		luaL_error(L, "error in function GetArchName, cannot match any of the overloads for function GetArchName:\n  GetArchName()\n  GetArchName(wxArchitecture)\n");
		return 0;
	}

	// wxString wxPlatformInfo::GetEndiannessName() const
	static int _bind_GetEndiannessName_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetEndiannessName_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPlatformInfo::GetEndiannessName() const function, expected prototype:\nwxString wxPlatformInfo::GetEndiannessName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPlatformInfo::GetEndiannessName() const. Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetEndiannessName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxPlatformInfo::GetEndiannessName(wxEndianness end)
	static int _bind_GetEndiannessName_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetEndiannessName_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxPlatformInfo::GetEndiannessName(wxEndianness end) function, expected prototype:\nstatic wxString wxPlatformInfo::GetEndiannessName(wxEndianness end)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEndianness end=(wxEndianness)lua_tointeger(L,1);

		wxString lret = wxPlatformInfo::GetEndiannessName(end);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// Overload binder for wxPlatformInfo::GetEndiannessName
	static int _bind_GetEndiannessName(lua_State *L) {
		if (_lg_typecheck_GetEndiannessName_overload_1(L)) return _bind_GetEndiannessName_overload_1(L);
		if (_lg_typecheck_GetEndiannessName_overload_2(L)) return _bind_GetEndiannessName_overload_2(L);

		luaL_error(L, "error in function GetEndiannessName, cannot match any of the overloads for function GetEndiannessName:\n  GetEndiannessName()\n  GetEndiannessName(wxEndianness)\n");
		return 0;
	}

	// wxString wxPlatformInfo::GetOperatingSystemFamilyName() const
	static int _bind_GetOperatingSystemFamilyName_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetOperatingSystemFamilyName_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPlatformInfo::GetOperatingSystemFamilyName() const function, expected prototype:\nwxString wxPlatformInfo::GetOperatingSystemFamilyName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPlatformInfo::GetOperatingSystemFamilyName() const. Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetOperatingSystemFamilyName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxPlatformInfo::GetOperatingSystemFamilyName(wxOperatingSystemId os)
	static int _bind_GetOperatingSystemFamilyName_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetOperatingSystemFamilyName_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxPlatformInfo::GetOperatingSystemFamilyName(wxOperatingSystemId os) function, expected prototype:\nstatic wxString wxPlatformInfo::GetOperatingSystemFamilyName(wxOperatingSystemId os)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxOperatingSystemId os=(wxOperatingSystemId)lua_tointeger(L,1);

		wxString lret = wxPlatformInfo::GetOperatingSystemFamilyName(os);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// Overload binder for wxPlatformInfo::GetOperatingSystemFamilyName
	static int _bind_GetOperatingSystemFamilyName(lua_State *L) {
		if (_lg_typecheck_GetOperatingSystemFamilyName_overload_1(L)) return _bind_GetOperatingSystemFamilyName_overload_1(L);
		if (_lg_typecheck_GetOperatingSystemFamilyName_overload_2(L)) return _bind_GetOperatingSystemFamilyName_overload_2(L);

		luaL_error(L, "error in function GetOperatingSystemFamilyName, cannot match any of the overloads for function GetOperatingSystemFamilyName:\n  GetOperatingSystemFamilyName()\n  GetOperatingSystemFamilyName(wxOperatingSystemId)\n");
		return 0;
	}

	// wxString wxPlatformInfo::GetOperatingSystemIdName() const
	static int _bind_GetOperatingSystemIdName_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetOperatingSystemIdName_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPlatformInfo::GetOperatingSystemIdName() const function, expected prototype:\nwxString wxPlatformInfo::GetOperatingSystemIdName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPlatformInfo::GetOperatingSystemIdName() const. Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetOperatingSystemIdName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxPlatformInfo::GetOperatingSystemIdName(wxOperatingSystemId os)
	static int _bind_GetOperatingSystemIdName_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetOperatingSystemIdName_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxPlatformInfo::GetOperatingSystemIdName(wxOperatingSystemId os) function, expected prototype:\nstatic wxString wxPlatformInfo::GetOperatingSystemIdName(wxOperatingSystemId os)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxOperatingSystemId os=(wxOperatingSystemId)lua_tointeger(L,1);

		wxString lret = wxPlatformInfo::GetOperatingSystemIdName(os);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// Overload binder for wxPlatformInfo::GetOperatingSystemIdName
	static int _bind_GetOperatingSystemIdName(lua_State *L) {
		if (_lg_typecheck_GetOperatingSystemIdName_overload_1(L)) return _bind_GetOperatingSystemIdName_overload_1(L);
		if (_lg_typecheck_GetOperatingSystemIdName_overload_2(L)) return _bind_GetOperatingSystemIdName_overload_2(L);

		luaL_error(L, "error in function GetOperatingSystemIdName, cannot match any of the overloads for function GetOperatingSystemIdName:\n  GetOperatingSystemIdName()\n  GetOperatingSystemIdName(wxOperatingSystemId)\n");
		return 0;
	}

	// wxString wxPlatformInfo::GetPortIdName() const
	static int _bind_GetPortIdName_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetPortIdName_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPlatformInfo::GetPortIdName() const function, expected prototype:\nwxString wxPlatformInfo::GetPortIdName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPlatformInfo::GetPortIdName() const. Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetPortIdName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxPlatformInfo::GetPortIdName(wxPortId port, bool usingUniversal)
	static int _bind_GetPortIdName_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetPortIdName_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxPlatformInfo::GetPortIdName(wxPortId port, bool usingUniversal) function, expected prototype:\nstatic wxString wxPlatformInfo::GetPortIdName(wxPortId port, bool usingUniversal)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPortId port=(wxPortId)lua_tointeger(L,1);
		bool usingUniversal=(bool)(lua_toboolean(L,2)==1);

		wxString lret = wxPlatformInfo::GetPortIdName(port, usingUniversal);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// Overload binder for wxPlatformInfo::GetPortIdName
	static int _bind_GetPortIdName(lua_State *L) {
		if (_lg_typecheck_GetPortIdName_overload_1(L)) return _bind_GetPortIdName_overload_1(L);
		if (_lg_typecheck_GetPortIdName_overload_2(L)) return _bind_GetPortIdName_overload_2(L);

		luaL_error(L, "error in function GetPortIdName, cannot match any of the overloads for function GetPortIdName:\n  GetPortIdName()\n  GetPortIdName(wxPortId, bool)\n");
		return 0;
	}

	// wxString wxPlatformInfo::GetPortIdShortName() const
	static int _bind_GetPortIdShortName_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetPortIdShortName_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPlatformInfo::GetPortIdShortName() const function, expected prototype:\nwxString wxPlatformInfo::GetPortIdShortName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPlatformInfo::GetPortIdShortName() const. Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetPortIdShortName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxPlatformInfo::GetPortIdShortName(wxPortId port, bool usingUniversal)
	static int _bind_GetPortIdShortName_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetPortIdShortName_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxPlatformInfo::GetPortIdShortName(wxPortId port, bool usingUniversal) function, expected prototype:\nstatic wxString wxPlatformInfo::GetPortIdShortName(wxPortId port, bool usingUniversal)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPortId port=(wxPortId)lua_tointeger(L,1);
		bool usingUniversal=(bool)(lua_toboolean(L,2)==1);

		wxString lret = wxPlatformInfo::GetPortIdShortName(port, usingUniversal);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// Overload binder for wxPlatformInfo::GetPortIdShortName
	static int _bind_GetPortIdShortName(lua_State *L) {
		if (_lg_typecheck_GetPortIdShortName_overload_1(L)) return _bind_GetPortIdShortName_overload_1(L);
		if (_lg_typecheck_GetPortIdShortName_overload_2(L)) return _bind_GetPortIdShortName_overload_2(L);

		luaL_error(L, "error in function GetPortIdShortName, cannot match any of the overloads for function GetPortIdShortName:\n  GetPortIdShortName()\n  GetPortIdShortName(wxPortId, bool)\n");
		return 0;
	}

	// void wxPlatformInfo::SetArchitecture(wxArchitecture n)
	static int _bind_SetArchitecture(lua_State *L) {
		if (!_lg_typecheck_SetArchitecture(L)) {
			luaL_error(L, "luna typecheck failed in void wxPlatformInfo::SetArchitecture(wxArchitecture n) function, expected prototype:\nvoid wxPlatformInfo::SetArchitecture(wxArchitecture n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxArchitecture n=(wxArchitecture)lua_tointeger(L,2);

		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPlatformInfo::SetArchitecture(wxArchitecture). Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetArchitecture(n);

		return 0;
	}

	// void wxPlatformInfo::SetEndianness(wxEndianness n)
	static int _bind_SetEndianness(lua_State *L) {
		if (!_lg_typecheck_SetEndianness(L)) {
			luaL_error(L, "luna typecheck failed in void wxPlatformInfo::SetEndianness(wxEndianness n) function, expected prototype:\nvoid wxPlatformInfo::SetEndianness(wxEndianness n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEndianness n=(wxEndianness)lua_tointeger(L,2);

		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPlatformInfo::SetEndianness(wxEndianness). Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetEndianness(n);

		return 0;
	}

	// void wxPlatformInfo::SetOSVersion(int major, int minor)
	static int _bind_SetOSVersion(lua_State *L) {
		if (!_lg_typecheck_SetOSVersion(L)) {
			luaL_error(L, "luna typecheck failed in void wxPlatformInfo::SetOSVersion(int major, int minor) function, expected prototype:\nvoid wxPlatformInfo::SetOSVersion(int major, int minor)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int major=(int)lua_tointeger(L,2);
		int minor=(int)lua_tointeger(L,3);

		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPlatformInfo::SetOSVersion(int, int). Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetOSVersion(major, minor);

		return 0;
	}

	// void wxPlatformInfo::SetOperatingSystemId(wxOperatingSystemId n)
	static int _bind_SetOperatingSystemId(lua_State *L) {
		if (!_lg_typecheck_SetOperatingSystemId(L)) {
			luaL_error(L, "luna typecheck failed in void wxPlatformInfo::SetOperatingSystemId(wxOperatingSystemId n) function, expected prototype:\nvoid wxPlatformInfo::SetOperatingSystemId(wxOperatingSystemId n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxOperatingSystemId n=(wxOperatingSystemId)lua_tointeger(L,2);

		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPlatformInfo::SetOperatingSystemId(wxOperatingSystemId). Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetOperatingSystemId(n);

		return 0;
	}

	// void wxPlatformInfo::SetPortId(wxPortId n)
	static int _bind_SetPortId(lua_State *L) {
		if (!_lg_typecheck_SetPortId(L)) {
			luaL_error(L, "luna typecheck failed in void wxPlatformInfo::SetPortId(wxPortId n) function, expected prototype:\nvoid wxPlatformInfo::SetPortId(wxPortId n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPortId n=(wxPortId)lua_tointeger(L,2);

		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPlatformInfo::SetPortId(wxPortId). Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPortId(n);

		return 0;
	}

	// void wxPlatformInfo::SetToolkitVersion(int major, int minor)
	static int _bind_SetToolkitVersion(lua_State *L) {
		if (!_lg_typecheck_SetToolkitVersion(L)) {
			luaL_error(L, "luna typecheck failed in void wxPlatformInfo::SetToolkitVersion(int major, int minor) function, expected prototype:\nvoid wxPlatformInfo::SetToolkitVersion(int major, int minor)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int major=(int)lua_tointeger(L,2);
		int minor=(int)lua_tointeger(L,3);

		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPlatformInfo::SetToolkitVersion(int, int). Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetToolkitVersion(major, minor);

		return 0;
	}

	// void wxPlatformInfo::SetOperatingSystemDescription(const wxString & desc)
	static int _bind_SetOperatingSystemDescription(lua_State *L) {
		if (!_lg_typecheck_SetOperatingSystemDescription(L)) {
			luaL_error(L, "luna typecheck failed in void wxPlatformInfo::SetOperatingSystemDescription(const wxString & desc) function, expected prototype:\nvoid wxPlatformInfo::SetOperatingSystemDescription(const wxString & desc)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString desc(lua_tostring(L,2),lua_objlen(L,2));

		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPlatformInfo::SetOperatingSystemDescription(const wxString &). Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetOperatingSystemDescription(desc);

		return 0;
	}

	// void wxPlatformInfo::SetDesktopEnvironment(const wxString & de)
	static int _bind_SetDesktopEnvironment(lua_State *L) {
		if (!_lg_typecheck_SetDesktopEnvironment(L)) {
			luaL_error(L, "luna typecheck failed in void wxPlatformInfo::SetDesktopEnvironment(const wxString & de) function, expected prototype:\nvoid wxPlatformInfo::SetDesktopEnvironment(const wxString & de)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString de(lua_tostring(L,2),lua_objlen(L,2));

		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPlatformInfo::SetDesktopEnvironment(const wxString &). Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDesktopEnvironment(de);

		return 0;
	}

	// void wxPlatformInfo::SetLinuxDistributionInfo(const wxLinuxDistributionInfo & di)
	static int _bind_SetLinuxDistributionInfo(lua_State *L) {
		if (!_lg_typecheck_SetLinuxDistributionInfo(L)) {
			luaL_error(L, "luna typecheck failed in void wxPlatformInfo::SetLinuxDistributionInfo(const wxLinuxDistributionInfo & di) function, expected prototype:\nvoid wxPlatformInfo::SetLinuxDistributionInfo(const wxLinuxDistributionInfo & di)\nClass arguments details:\narg 1 ID = 82275018\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxLinuxDistributionInfo* di_ptr=(Luna< wxLinuxDistributionInfo >::check(L,2));
		if( !di_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg di in wxPlatformInfo::SetLinuxDistributionInfo function");
		}
		const wxLinuxDistributionInfo & di=*di_ptr;

		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPlatformInfo::SetLinuxDistributionInfo(const wxLinuxDistributionInfo &). Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLinuxDistributionInfo(di);

		return 0;
	}

	// static const wxPlatformInfo & wxPlatformInfo::Get()
	static int _bind_Get(lua_State *L) {
		if (!_lg_typecheck_Get(L)) {
			luaL_error(L, "luna typecheck failed in static const wxPlatformInfo & wxPlatformInfo::Get() function, expected prototype:\nstatic const wxPlatformInfo & wxPlatformInfo::Get()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		const wxPlatformInfo* lret = &wxPlatformInfo::Get();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPlatformInfo >::push(L,lret,false);

		return 1;
	}

	// static wxArchitecture wxPlatformInfo::GetArch(const wxString & arch)
	static int _bind_GetArch(lua_State *L) {
		if (!_lg_typecheck_GetArch(L)) {
			luaL_error(L, "luna typecheck failed in static wxArchitecture wxPlatformInfo::GetArch(const wxString & arch) function, expected prototype:\nstatic wxArchitecture wxPlatformInfo::GetArch(const wxString & arch)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString arch(lua_tostring(L,1),lua_objlen(L,1));

		wxArchitecture lret = wxPlatformInfo::GetArch(arch);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static wxString wxPlatformInfo::GetOperatingSystemDirectory()
	static int _bind_GetOperatingSystemDirectory(lua_State *L) {
		if (!_lg_typecheck_GetOperatingSystemDirectory(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxPlatformInfo::GetOperatingSystemDirectory() function, expected prototype:\nstatic wxString wxPlatformInfo::GetOperatingSystemDirectory()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxString lret = wxPlatformInfo::GetOperatingSystemDirectory();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:
	// bool wxPlatformInfo::operator!=(const wxPlatformInfo & t) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPlatformInfo::operator!=(const wxPlatformInfo & t) const function, expected prototype:\nbool wxPlatformInfo::operator!=(const wxPlatformInfo & t) const\nClass arguments details:\narg 1 ID = 92430623\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPlatformInfo* t_ptr=(Luna< wxPlatformInfo >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in wxPlatformInfo::operator!= function");
		}
		const wxPlatformInfo & t=*t_ptr;

		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPlatformInfo::operator!=(const wxPlatformInfo &) const. Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(t);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPlatformInfo::operator==(const wxPlatformInfo & t) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPlatformInfo::operator==(const wxPlatformInfo & t) const function, expected prototype:\nbool wxPlatformInfo::operator==(const wxPlatformInfo & t) const\nClass arguments details:\narg 1 ID = 92430623\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPlatformInfo* t_ptr=(Luna< wxPlatformInfo >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in wxPlatformInfo::operator== function");
		}
		const wxPlatformInfo & t=*t_ptr;

		wxPlatformInfo* self=(Luna< wxPlatformInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPlatformInfo::operator==(const wxPlatformInfo &) const. Got : '%s'\n%s",typeid(Luna< wxPlatformInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(t);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxPlatformInfo* LunaTraits< wxPlatformInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPlatformInfo::_bind_ctor(L);
}

void LunaTraits< wxPlatformInfo >::_bind_dtor(wxPlatformInfo* obj) {
	delete obj;
}

const char LunaTraits< wxPlatformInfo >::className[] = "wxPlatformInfo";
const char LunaTraits< wxPlatformInfo >::fullName[] = "wxPlatformInfo";
const char LunaTraits< wxPlatformInfo >::moduleName[] = "wx";
const char* LunaTraits< wxPlatformInfo >::parents[] = {0};
const int LunaTraits< wxPlatformInfo >::hash = 92430623;
const int LunaTraits< wxPlatformInfo >::uniqueIDs[] = {92430623,0};

luna_RegType LunaTraits< wxPlatformInfo >::methods[] = {
	{"CheckOSVersion", &luna_wrapper_wxPlatformInfo::_bind_CheckOSVersion},
	{"CheckToolkitVersion", &luna_wrapper_wxPlatformInfo::_bind_CheckToolkitVersion},
	{"IsOk", &luna_wrapper_wxPlatformInfo::_bind_IsOk},
	{"IsUsingUniversalWidgets", &luna_wrapper_wxPlatformInfo::_bind_IsUsingUniversalWidgets},
	{"GetArchitecture", &luna_wrapper_wxPlatformInfo::_bind_GetArchitecture},
	{"GetEndianness", &luna_wrapper_wxPlatformInfo::_bind_GetEndianness},
	{"GetOSMajorVersion", &luna_wrapper_wxPlatformInfo::_bind_GetOSMajorVersion},
	{"GetOSMinorVersion", &luna_wrapper_wxPlatformInfo::_bind_GetOSMinorVersion},
	{"GetOperatingSystemId", &luna_wrapper_wxPlatformInfo::_bind_GetOperatingSystemId},
	{"GetOperatingSystemDescription", &luna_wrapper_wxPlatformInfo::_bind_GetOperatingSystemDescription},
	{"GetPortId", &luna_wrapper_wxPlatformInfo::_bind_GetPortId},
	{"GetLinuxDistributionInfo", &luna_wrapper_wxPlatformInfo::_bind_GetLinuxDistributionInfo},
	{"GetDesktopEnvironment", &luna_wrapper_wxPlatformInfo::_bind_GetDesktopEnvironment},
	{"GetToolkitMajorVersion", &luna_wrapper_wxPlatformInfo::_bind_GetToolkitMajorVersion},
	{"GetToolkitMinorVersion", &luna_wrapper_wxPlatformInfo::_bind_GetToolkitMinorVersion},
	{"GetArchName", &luna_wrapper_wxPlatformInfo::_bind_GetArchName},
	{"GetEndiannessName", &luna_wrapper_wxPlatformInfo::_bind_GetEndiannessName},
	{"GetOperatingSystemFamilyName", &luna_wrapper_wxPlatformInfo::_bind_GetOperatingSystemFamilyName},
	{"GetOperatingSystemIdName", &luna_wrapper_wxPlatformInfo::_bind_GetOperatingSystemIdName},
	{"GetPortIdName", &luna_wrapper_wxPlatformInfo::_bind_GetPortIdName},
	{"GetPortIdShortName", &luna_wrapper_wxPlatformInfo::_bind_GetPortIdShortName},
	{"SetArchitecture", &luna_wrapper_wxPlatformInfo::_bind_SetArchitecture},
	{"SetEndianness", &luna_wrapper_wxPlatformInfo::_bind_SetEndianness},
	{"SetOSVersion", &luna_wrapper_wxPlatformInfo::_bind_SetOSVersion},
	{"SetOperatingSystemId", &luna_wrapper_wxPlatformInfo::_bind_SetOperatingSystemId},
	{"SetPortId", &luna_wrapper_wxPlatformInfo::_bind_SetPortId},
	{"SetToolkitVersion", &luna_wrapper_wxPlatformInfo::_bind_SetToolkitVersion},
	{"SetOperatingSystemDescription", &luna_wrapper_wxPlatformInfo::_bind_SetOperatingSystemDescription},
	{"SetDesktopEnvironment", &luna_wrapper_wxPlatformInfo::_bind_SetDesktopEnvironment},
	{"SetLinuxDistributionInfo", &luna_wrapper_wxPlatformInfo::_bind_SetLinuxDistributionInfo},
	{"Get", &luna_wrapper_wxPlatformInfo::_bind_Get},
	{"GetArch", &luna_wrapper_wxPlatformInfo::_bind_GetArch},
	{"GetOperatingSystemDirectory", &luna_wrapper_wxPlatformInfo::_bind_GetOperatingSystemDirectory},
	{"op_neq", &luna_wrapper_wxPlatformInfo::_bind_op_neq},
	{"__eq", &luna_wrapper_wxPlatformInfo::_bind___eq},
	{"dynCast", &luna_wrapper_wxPlatformInfo::_bind_dynCast},
	{"fromVoid", &luna_wrapper_wxPlatformInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPlatformInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxPlatformInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPlatformInfo >::enumValues[] = {
	{0,0}
};


