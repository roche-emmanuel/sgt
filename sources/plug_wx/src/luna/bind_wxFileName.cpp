#include <plug_common.h>

class luna_wrapper_wxFileName {
public:
	typedef Luna< wxFileName > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxFileName* self= (wxFileName*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFileName >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53530938) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxFileName >::check(L,1));
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

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxFileName");
		
		return luna_dynamicCast(L,converters,"wxFileName",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53530938) ) return false;
		if( (!(Luna< wxFileName >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AppendDir(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Assign_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,53530938) ) return false;
		if( (!(Luna< wxFileName >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Assign_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Assign_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Assign_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Assign_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Assign_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AssignCwd(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AssignDir(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AssignHomeDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AssignTempFileName_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AssignTempFileName_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,19881034)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxFile >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ClearExt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DirExists_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DirExists_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FileExists_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FileExists_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDirCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDirs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetExt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFullName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFullPath(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHumanReadableSize_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHumanReadableSize_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,888873) ) return false;
		if( (!(Luna< wxULongLong >::check(L,1))) ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLongPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetModificationTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPath(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPathWithSep(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetShortPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTimes(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,57497519)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,57497519)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,57497519)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetVolume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasExt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasVolume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InsertDir(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsAbsolute(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsDirReadable_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsDirReadable_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsDirWritable_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsDirWritable_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsFileExecutable_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsFileExecutable_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsFileReadable_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsFileReadable_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsFileWritable_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsFileWritable_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsRelative(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MakeAbsolute(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MakeRelativeTo(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Mkdir_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Mkdir_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Normalize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependDir(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveDir(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveLastDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ReplaceEnvVariable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReplaceHomeDir(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Rmdir_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Rmdir_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SameAs(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,53530938) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCwd_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCwd_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetEmptyExt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetExt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFullName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPath(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTimes(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,57497519)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,57497519)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,57497519)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVolume(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Touch(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CreateTempFileName(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,19881034)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DirName(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FileName(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCwd(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetForbiddenChars(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFormat(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHomeDir(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPathSeparators(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPathTerminators(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTempDir(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVolumeSeparator(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetVolumeString(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsCaseSensitive(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsMSWUniqueVolumeNamePath(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SplitPath_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SplitPath_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SplitPath_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SplitVolume(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StripExtension(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 6 valid operators)
	inline static bool _lg_typecheck_op_neq_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,53530938) ) return false;
		if( (!(Luna< wxFileName >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,53530938) ) return false;
		if( (!(Luna< wxFileName >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_assign_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,53530938) ) return false;
		if( (!(Luna< wxFileName >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_assign_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Constructor binds:
	// wxFileName::wxFileName()
	static wxFileName* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxFileName::wxFileName() function, expected prototype:\nwxFileName::wxFileName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxFileName();
	}

	// wxFileName::wxFileName(const wxFileName & filename)
	static wxFileName* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxFileName::wxFileName(const wxFileName & filename) function, expected prototype:\nwxFileName::wxFileName(const wxFileName & filename)\nClass arguments details:\narg 1 ID = 53530938\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFileName* filename_ptr=(Luna< wxFileName >::check(L,1));
		if( !filename_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg filename in wxFileName::wxFileName function");
		}
		const wxFileName & filename=*filename_ptr;

		return new wxFileName(filename);
	}

	// wxFileName::wxFileName(const wxString & fullpath, wxPathFormat format = ::wxPATH_NATIVE)
	static wxFileName* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxFileName::wxFileName(const wxString & fullpath, wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nwxFileName::wxFileName(const wxString & fullpath, wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString fullpath(lua_tostring(L,1),lua_objlen(L,1));
		wxPathFormat format=luatop>1 ? (wxPathFormat)lua_tointeger(L,2) : (wxPathFormat)::wxPATH_NATIVE;

		return new wxFileName(fullpath, format);
	}

	// wxFileName::wxFileName(const wxString & path, const wxString & name, wxPathFormat format = ::wxPATH_NATIVE)
	static wxFileName* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxFileName::wxFileName(const wxString & path, const wxString & name, wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nwxFileName::wxFileName(const wxString & path, const wxString & name, wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString path(lua_tostring(L,1),lua_objlen(L,1));
		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxPathFormat format=luatop>2 ? (wxPathFormat)lua_tointeger(L,3) : (wxPathFormat)::wxPATH_NATIVE;

		return new wxFileName(path, name, format);
	}

	// wxFileName::wxFileName(const wxString & path, const wxString & name, const wxString & ext, wxPathFormat format = ::wxPATH_NATIVE)
	static wxFileName* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxFileName::wxFileName(const wxString & path, const wxString & name, const wxString & ext, wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nwxFileName::wxFileName(const wxString & path, const wxString & name, const wxString & ext, wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString path(lua_tostring(L,1),lua_objlen(L,1));
		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxString ext(lua_tostring(L,3),lua_objlen(L,3));
		wxPathFormat format=luatop>3 ? (wxPathFormat)lua_tointeger(L,4) : (wxPathFormat)::wxPATH_NATIVE;

		return new wxFileName(path, name, ext, format);
	}

	// wxFileName::wxFileName(const wxString & volume, const wxString & path, const wxString & name, const wxString & ext, wxPathFormat format = ::wxPATH_NATIVE)
	static wxFileName* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in wxFileName::wxFileName(const wxString & volume, const wxString & path, const wxString & name, const wxString & ext, wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nwxFileName::wxFileName(const wxString & volume, const wxString & path, const wxString & name, const wxString & ext, wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString volume(lua_tostring(L,1),lua_objlen(L,1));
		wxString path(lua_tostring(L,2),lua_objlen(L,2));
		wxString name(lua_tostring(L,3),lua_objlen(L,3));
		wxString ext(lua_tostring(L,4),lua_objlen(L,4));
		wxPathFormat format=luatop>4 ? (wxPathFormat)lua_tointeger(L,5) : (wxPathFormat)::wxPATH_NATIVE;

		return new wxFileName(volume, path, name, ext, format);
	}

	// Overload binder for wxFileName::wxFileName
	static wxFileName* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function wxFileName, cannot match any of the overloads for function wxFileName:\n  wxFileName()\n  wxFileName(const wxFileName &)\n  wxFileName(const wxString &, wxPathFormat)\n  wxFileName(const wxString &, const wxString &, wxPathFormat)\n  wxFileName(const wxString &, const wxString &, const wxString &, wxPathFormat)\n  wxFileName(const wxString &, const wxString &, const wxString &, const wxString &, wxPathFormat)\n");
		return NULL;
	}


	// Function binds:
	// void wxFileName::AppendDir(const wxString & dir)
	static int _bind_AppendDir(lua_State *L) {
		if (!_lg_typecheck_AppendDir(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileName::AppendDir(const wxString & dir) function, expected prototype:\nvoid wxFileName::AppendDir(const wxString & dir)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString dir(lua_tostring(L,2),lua_objlen(L,2));

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileName::AppendDir(const wxString &). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AppendDir(dir);

		return 0;
	}

	// void wxFileName::Assign(const wxFileName & filepath)
	static int _bind_Assign_overload_1(lua_State *L) {
		if (!_lg_typecheck_Assign_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileName::Assign(const wxFileName & filepath) function, expected prototype:\nvoid wxFileName::Assign(const wxFileName & filepath)\nClass arguments details:\narg 1 ID = 53530938\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFileName* filepath_ptr=(Luna< wxFileName >::check(L,2));
		if( !filepath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg filepath in wxFileName::Assign function");
		}
		const wxFileName & filepath=*filepath_ptr;

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileName::Assign(const wxFileName &). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Assign(filepath);

		return 0;
	}

	// void wxFileName::Assign(const wxString & fullpath, wxPathFormat format = ::wxPATH_NATIVE)
	static int _bind_Assign_overload_2(lua_State *L) {
		if (!_lg_typecheck_Assign_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileName::Assign(const wxString & fullpath, wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nvoid wxFileName::Assign(const wxString & fullpath, wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString fullpath(lua_tostring(L,2),lua_objlen(L,2));
		wxPathFormat format=luatop>2 ? (wxPathFormat)lua_tointeger(L,3) : (wxPathFormat)::wxPATH_NATIVE;

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileName::Assign(const wxString &, wxPathFormat). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Assign(fullpath, format);

		return 0;
	}

	// void wxFileName::Assign(const wxString & volume, const wxString & path, const wxString & name, const wxString & ext, bool hasExt, wxPathFormat format = ::wxPATH_NATIVE)
	static int _bind_Assign_overload_3(lua_State *L) {
		if (!_lg_typecheck_Assign_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileName::Assign(const wxString & volume, const wxString & path, const wxString & name, const wxString & ext, bool hasExt, wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nvoid wxFileName::Assign(const wxString & volume, const wxString & path, const wxString & name, const wxString & ext, bool hasExt, wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString volume(lua_tostring(L,2),lua_objlen(L,2));
		wxString path(lua_tostring(L,3),lua_objlen(L,3));
		wxString name(lua_tostring(L,4),lua_objlen(L,4));
		wxString ext(lua_tostring(L,5),lua_objlen(L,5));
		bool hasExt=(bool)(lua_toboolean(L,6)==1);
		wxPathFormat format=luatop>6 ? (wxPathFormat)lua_tointeger(L,7) : (wxPathFormat)::wxPATH_NATIVE;

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileName::Assign(const wxString &, const wxString &, const wxString &, const wxString &, bool, wxPathFormat). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Assign(volume, path, name, ext, hasExt, format);

		return 0;
	}

	// void wxFileName::Assign(const wxString & volume, const wxString & path, const wxString & name, const wxString & ext, wxPathFormat format = ::wxPATH_NATIVE)
	static int _bind_Assign_overload_4(lua_State *L) {
		if (!_lg_typecheck_Assign_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileName::Assign(const wxString & volume, const wxString & path, const wxString & name, const wxString & ext, wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nvoid wxFileName::Assign(const wxString & volume, const wxString & path, const wxString & name, const wxString & ext, wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString volume(lua_tostring(L,2),lua_objlen(L,2));
		wxString path(lua_tostring(L,3),lua_objlen(L,3));
		wxString name(lua_tostring(L,4),lua_objlen(L,4));
		wxString ext(lua_tostring(L,5),lua_objlen(L,5));
		wxPathFormat format=luatop>5 ? (wxPathFormat)lua_tointeger(L,6) : (wxPathFormat)::wxPATH_NATIVE;

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileName::Assign(const wxString &, const wxString &, const wxString &, const wxString &, wxPathFormat). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Assign(volume, path, name, ext, format);

		return 0;
	}

	// void wxFileName::Assign(const wxString & path, const wxString & name, wxPathFormat format = ::wxPATH_NATIVE)
	static int _bind_Assign_overload_5(lua_State *L) {
		if (!_lg_typecheck_Assign_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileName::Assign(const wxString & path, const wxString & name, wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nvoid wxFileName::Assign(const wxString & path, const wxString & name, wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString path(lua_tostring(L,2),lua_objlen(L,2));
		wxString name(lua_tostring(L,3),lua_objlen(L,3));
		wxPathFormat format=luatop>3 ? (wxPathFormat)lua_tointeger(L,4) : (wxPathFormat)::wxPATH_NATIVE;

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileName::Assign(const wxString &, const wxString &, wxPathFormat). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Assign(path, name, format);

		return 0;
	}

	// void wxFileName::Assign(const wxString & path, const wxString & name, const wxString & ext, wxPathFormat format = ::wxPATH_NATIVE)
	static int _bind_Assign_overload_6(lua_State *L) {
		if (!_lg_typecheck_Assign_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileName::Assign(const wxString & path, const wxString & name, const wxString & ext, wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nvoid wxFileName::Assign(const wxString & path, const wxString & name, const wxString & ext, wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString path(lua_tostring(L,2),lua_objlen(L,2));
		wxString name(lua_tostring(L,3),lua_objlen(L,3));
		wxString ext(lua_tostring(L,4),lua_objlen(L,4));
		wxPathFormat format=luatop>4 ? (wxPathFormat)lua_tointeger(L,5) : (wxPathFormat)::wxPATH_NATIVE;

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileName::Assign(const wxString &, const wxString &, const wxString &, wxPathFormat). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Assign(path, name, ext, format);

		return 0;
	}

	// Overload binder for wxFileName::Assign
	static int _bind_Assign(lua_State *L) {
		if (_lg_typecheck_Assign_overload_1(L)) return _bind_Assign_overload_1(L);
		if (_lg_typecheck_Assign_overload_2(L)) return _bind_Assign_overload_2(L);
		if (_lg_typecheck_Assign_overload_3(L)) return _bind_Assign_overload_3(L);
		if (_lg_typecheck_Assign_overload_4(L)) return _bind_Assign_overload_4(L);
		if (_lg_typecheck_Assign_overload_5(L)) return _bind_Assign_overload_5(L);
		if (_lg_typecheck_Assign_overload_6(L)) return _bind_Assign_overload_6(L);

		luaL_error(L, "error in function Assign, cannot match any of the overloads for function Assign:\n  Assign(const wxFileName &)\n  Assign(const wxString &, wxPathFormat)\n  Assign(const wxString &, const wxString &, const wxString &, const wxString &, bool, wxPathFormat)\n  Assign(const wxString &, const wxString &, const wxString &, const wxString &, wxPathFormat)\n  Assign(const wxString &, const wxString &, wxPathFormat)\n  Assign(const wxString &, const wxString &, const wxString &, wxPathFormat)\n");
		return 0;
	}

	// void wxFileName::AssignCwd(const wxString & volume = wxEmptyString)
	static int _bind_AssignCwd(lua_State *L) {
		if (!_lg_typecheck_AssignCwd(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileName::AssignCwd(const wxString & volume = wxEmptyString) function, expected prototype:\nvoid wxFileName::AssignCwd(const wxString & volume = wxEmptyString)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString volume(lua_tostring(L,2),lua_objlen(L,2));

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileName::AssignCwd(const wxString &). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AssignCwd(volume);

		return 0;
	}

	// void wxFileName::AssignDir(const wxString & dir, wxPathFormat format = ::wxPATH_NATIVE)
	static int _bind_AssignDir(lua_State *L) {
		if (!_lg_typecheck_AssignDir(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileName::AssignDir(const wxString & dir, wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nvoid wxFileName::AssignDir(const wxString & dir, wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString dir(lua_tostring(L,2),lua_objlen(L,2));
		wxPathFormat format=luatop>2 ? (wxPathFormat)lua_tointeger(L,3) : (wxPathFormat)::wxPATH_NATIVE;

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileName::AssignDir(const wxString &, wxPathFormat). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AssignDir(dir, format);

		return 0;
	}

	// void wxFileName::AssignHomeDir()
	static int _bind_AssignHomeDir(lua_State *L) {
		if (!_lg_typecheck_AssignHomeDir(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileName::AssignHomeDir() function, expected prototype:\nvoid wxFileName::AssignHomeDir()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileName::AssignHomeDir(). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AssignHomeDir();

		return 0;
	}

	// void wxFileName::AssignTempFileName(const wxString & prefix)
	static int _bind_AssignTempFileName_overload_1(lua_State *L) {
		if (!_lg_typecheck_AssignTempFileName_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileName::AssignTempFileName(const wxString & prefix) function, expected prototype:\nvoid wxFileName::AssignTempFileName(const wxString & prefix)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString prefix(lua_tostring(L,2),lua_objlen(L,2));

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileName::AssignTempFileName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AssignTempFileName(prefix);

		return 0;
	}

	// void wxFileName::AssignTempFileName(const wxString & prefix, wxFile * fileTemp)
	static int _bind_AssignTempFileName_overload_2(lua_State *L) {
		if (!_lg_typecheck_AssignTempFileName_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileName::AssignTempFileName(const wxString & prefix, wxFile * fileTemp) function, expected prototype:\nvoid wxFileName::AssignTempFileName(const wxString & prefix, wxFile * fileTemp)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 19881034\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString prefix(lua_tostring(L,2),lua_objlen(L,2));
		wxFile* fileTemp=(Luna< wxFile >::check(L,3));

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileName::AssignTempFileName(const wxString &, wxFile *). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AssignTempFileName(prefix, fileTemp);

		return 0;
	}

	// Overload binder for wxFileName::AssignTempFileName
	static int _bind_AssignTempFileName(lua_State *L) {
		if (_lg_typecheck_AssignTempFileName_overload_1(L)) return _bind_AssignTempFileName_overload_1(L);
		if (_lg_typecheck_AssignTempFileName_overload_2(L)) return _bind_AssignTempFileName_overload_2(L);

		luaL_error(L, "error in function AssignTempFileName, cannot match any of the overloads for function AssignTempFileName:\n  AssignTempFileName(const wxString &)\n  AssignTempFileName(const wxString &, wxFile *)\n");
		return 0;
	}

	// void wxFileName::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileName::Clear() function, expected prototype:\nvoid wxFileName::Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileName::Clear(). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Clear();

		return 0;
	}

	// void wxFileName::ClearExt()
	static int _bind_ClearExt(lua_State *L) {
		if (!_lg_typecheck_ClearExt(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileName::ClearExt() function, expected prototype:\nvoid wxFileName::ClearExt()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileName::ClearExt(). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClearExt();

		return 0;
	}

	// bool wxFileName::DirExists() const
	static int _bind_DirExists_overload_1(lua_State *L) {
		if (!_lg_typecheck_DirExists_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::DirExists() const function, expected prototype:\nbool wxFileName::DirExists() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::DirExists() const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DirExists();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxFileName::DirExists(const wxString & dir)
	static int _bind_DirExists_overload_2(lua_State *L) {
		if (!_lg_typecheck_DirExists_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxFileName::DirExists(const wxString & dir) function, expected prototype:\nstatic bool wxFileName::DirExists(const wxString & dir)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString dir(lua_tostring(L,1),lua_objlen(L,1));

		bool lret = wxFileName::DirExists(dir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxFileName::DirExists
	static int _bind_DirExists(lua_State *L) {
		if (_lg_typecheck_DirExists_overload_1(L)) return _bind_DirExists_overload_1(L);
		if (_lg_typecheck_DirExists_overload_2(L)) return _bind_DirExists_overload_2(L);

		luaL_error(L, "error in function DirExists, cannot match any of the overloads for function DirExists:\n  DirExists()\n  DirExists(const wxString &)\n");
		return 0;
	}

	// bool wxFileName::FileExists() const
	static int _bind_FileExists_overload_1(lua_State *L) {
		if (!_lg_typecheck_FileExists_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::FileExists() const function, expected prototype:\nbool wxFileName::FileExists() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::FileExists() const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FileExists();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxFileName::FileExists(const wxString & file)
	static int _bind_FileExists_overload_2(lua_State *L) {
		if (!_lg_typecheck_FileExists_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxFileName::FileExists(const wxString & file) function, expected prototype:\nstatic bool wxFileName::FileExists(const wxString & file)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString file(lua_tostring(L,1),lua_objlen(L,1));

		bool lret = wxFileName::FileExists(file);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxFileName::FileExists
	static int _bind_FileExists(lua_State *L) {
		if (_lg_typecheck_FileExists_overload_1(L)) return _bind_FileExists_overload_1(L);
		if (_lg_typecheck_FileExists_overload_2(L)) return _bind_FileExists_overload_2(L);

		luaL_error(L, "error in function FileExists, cannot match any of the overloads for function FileExists:\n  FileExists()\n  FileExists(const wxString &)\n");
		return 0;
	}

	// size_t wxFileName::GetDirCount() const
	static int _bind_GetDirCount(lua_State *L) {
		if (!_lg_typecheck_GetDirCount(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxFileName::GetDirCount() const function, expected prototype:\nsize_t wxFileName::GetDirCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxFileName::GetDirCount() const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetDirCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxArrayString & wxFileName::GetDirs() const
	static int _bind_GetDirs(lua_State *L) {
		if (!_lg_typecheck_GetDirs(L)) {
			luaL_error(L, "luna typecheck failed in const wxArrayString & wxFileName::GetDirs() const function, expected prototype:\nconst wxArrayString & wxFileName::GetDirs() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxArrayString & wxFileName::GetDirs() const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxArrayString* lret = &self->GetDirs();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayString >::push(L,lret,false);

		return 1;
	}

	// wxString wxFileName::GetExt() const
	static int _bind_GetExt(lua_State *L) {
		if (!_lg_typecheck_GetExt(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileName::GetExt() const function, expected prototype:\nwxString wxFileName::GetExt() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileName::GetExt() const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetExt();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxFileName::GetFullName() const
	static int _bind_GetFullName(lua_State *L) {
		if (!_lg_typecheck_GetFullName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileName::GetFullName() const function, expected prototype:\nwxString wxFileName::GetFullName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileName::GetFullName() const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetFullName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxFileName::GetFullPath(wxPathFormat format = ::wxPATH_NATIVE) const
	static int _bind_GetFullPath(lua_State *L) {
		if (!_lg_typecheck_GetFullPath(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileName::GetFullPath(wxPathFormat format = ::wxPATH_NATIVE) const function, expected prototype:\nwxString wxFileName::GetFullPath(wxPathFormat format = ::wxPATH_NATIVE) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxPathFormat format=luatop>1 ? (wxPathFormat)lua_tointeger(L,2) : (wxPathFormat)::wxPATH_NATIVE;

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileName::GetFullPath(wxPathFormat) const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetFullPath(format);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxFileName::GetHumanReadableSize(const wxString & failmsg = _ ("Not available"), int precision = 1, wxSizeConvention conv = ::wxSIZE_CONV_TRADITIONAL) const
	static int _bind_GetHumanReadableSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetHumanReadableSize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileName::GetHumanReadableSize(const wxString & failmsg = _ (\"Not available\"), int precision = 1, wxSizeConvention conv = ::wxSIZE_CONV_TRADITIONAL) const function, expected prototype:\nwxString wxFileName::GetHumanReadableSize(const wxString & failmsg = _ (\"Not available\"), int precision = 1, wxSizeConvention conv = ::wxSIZE_CONV_TRADITIONAL) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString failmsg(lua_tostring(L,2),lua_objlen(L,2));
		int precision=luatop>2 ? (int)lua_tointeger(L,3) : (int)1;
		wxSizeConvention conv=luatop>3 ? (wxSizeConvention)lua_tointeger(L,4) : (wxSizeConvention)::wxSIZE_CONV_TRADITIONAL;

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileName::GetHumanReadableSize(const wxString &, int, wxSizeConvention) const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetHumanReadableSize(failmsg, precision, conv);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxFileName::GetHumanReadableSize(const wxULongLong & bytes, const wxString & nullsize = _ ("Not available"), int precision = 1, wxSizeConvention conv = ::wxSIZE_CONV_TRADITIONAL)
	static int _bind_GetHumanReadableSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetHumanReadableSize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxFileName::GetHumanReadableSize(const wxULongLong & bytes, const wxString & nullsize = _ (\"Not available\"), int precision = 1, wxSizeConvention conv = ::wxSIZE_CONV_TRADITIONAL) function, expected prototype:\nstatic wxString wxFileName::GetHumanReadableSize(const wxULongLong & bytes, const wxString & nullsize = _ (\"Not available\"), int precision = 1, wxSizeConvention conv = ::wxSIZE_CONV_TRADITIONAL)\nClass arguments details:\narg 1 ID = 888873\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxULongLong* bytes_ptr=(Luna< wxULongLong >::check(L,1));
		if( !bytes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bytes in wxFileName::GetHumanReadableSize function");
		}
		const wxULongLong & bytes=*bytes_ptr;
		wxString nullsize(lua_tostring(L,2),lua_objlen(L,2));
		int precision=luatop>2 ? (int)lua_tointeger(L,3) : (int)1;
		wxSizeConvention conv=luatop>3 ? (wxSizeConvention)lua_tointeger(L,4) : (wxSizeConvention)::wxSIZE_CONV_TRADITIONAL;

		wxString lret = wxFileName::GetHumanReadableSize(bytes, nullsize, precision, conv);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// Overload binder for wxFileName::GetHumanReadableSize
	static int _bind_GetHumanReadableSize(lua_State *L) {
		if (_lg_typecheck_GetHumanReadableSize_overload_1(L)) return _bind_GetHumanReadableSize_overload_1(L);
		if (_lg_typecheck_GetHumanReadableSize_overload_2(L)) return _bind_GetHumanReadableSize_overload_2(L);

		luaL_error(L, "error in function GetHumanReadableSize, cannot match any of the overloads for function GetHumanReadableSize:\n  GetHumanReadableSize(const wxString &, int, wxSizeConvention)\n  GetHumanReadableSize(const wxULongLong &, const wxString &, int, wxSizeConvention)\n");
		return 0;
	}

	// wxString wxFileName::GetLongPath() const
	static int _bind_GetLongPath(lua_State *L) {
		if (!_lg_typecheck_GetLongPath(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileName::GetLongPath() const function, expected prototype:\nwxString wxFileName::GetLongPath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileName::GetLongPath() const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetLongPath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxDateTime wxFileName::GetModificationTime() const
	static int _bind_GetModificationTime(lua_State *L) {
		if (!_lg_typecheck_GetModificationTime(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime wxFileName::GetModificationTime() const function, expected prototype:\nwxDateTime wxFileName::GetModificationTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime wxFileName::GetModificationTime() const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateTime stack_lret = self->GetModificationTime();
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// wxString wxFileName::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileName::GetName() const function, expected prototype:\nwxString wxFileName::GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileName::GetName() const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxFileName::GetPath(int flags = ::wxPATH_GET_VOLUME, wxPathFormat format = ::wxPATH_NATIVE) const
	static int _bind_GetPath(lua_State *L) {
		if (!_lg_typecheck_GetPath(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileName::GetPath(int flags = ::wxPATH_GET_VOLUME, wxPathFormat format = ::wxPATH_NATIVE) const function, expected prototype:\nwxString wxFileName::GetPath(int flags = ::wxPATH_GET_VOLUME, wxPathFormat format = ::wxPATH_NATIVE) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxPATH_GET_VOLUME;
		wxPathFormat format=luatop>2 ? (wxPathFormat)lua_tointeger(L,3) : (wxPathFormat)::wxPATH_NATIVE;

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileName::GetPath(int, wxPathFormat) const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetPath(flags, format);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxFileName::GetPathWithSep(wxPathFormat format = ::wxPATH_NATIVE) const
	static int _bind_GetPathWithSep(lua_State *L) {
		if (!_lg_typecheck_GetPathWithSep(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileName::GetPathWithSep(wxPathFormat format = ::wxPATH_NATIVE) const function, expected prototype:\nwxString wxFileName::GetPathWithSep(wxPathFormat format = ::wxPATH_NATIVE) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxPathFormat format=luatop>1 ? (wxPathFormat)lua_tointeger(L,2) : (wxPathFormat)::wxPATH_NATIVE;

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileName::GetPathWithSep(wxPathFormat) const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetPathWithSep(format);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxFileName::GetShortPath() const
	static int _bind_GetShortPath(lua_State *L) {
		if (!_lg_typecheck_GetShortPath(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileName::GetShortPath() const function, expected prototype:\nwxString wxFileName::GetShortPath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileName::GetShortPath() const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetShortPath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxULongLong wxFileName::GetSize() const
	static int _bind_GetSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetSize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxULongLong wxFileName::GetSize() const function, expected prototype:\nwxULongLong wxFileName::GetSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxULongLong wxFileName::GetSize() const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxULongLong stack_lret = self->GetSize();
		wxULongLong* lret = new wxULongLong(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxULongLong >::push(L,lret,true);

		return 1;
	}

	// static wxULongLong wxFileName::GetSize(const wxString & filename)
	static int _bind_GetSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetSize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static wxULongLong wxFileName::GetSize(const wxString & filename) function, expected prototype:\nstatic wxULongLong wxFileName::GetSize(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filename(lua_tostring(L,1),lua_objlen(L,1));

		wxULongLong stack_lret = wxFileName::GetSize(filename);
		wxULongLong* lret = new wxULongLong(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxULongLong >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxFileName::GetSize
	static int _bind_GetSize(lua_State *L) {
		if (_lg_typecheck_GetSize_overload_1(L)) return _bind_GetSize_overload_1(L);
		if (_lg_typecheck_GetSize_overload_2(L)) return _bind_GetSize_overload_2(L);

		luaL_error(L, "error in function GetSize, cannot match any of the overloads for function GetSize:\n  GetSize()\n  GetSize(const wxString &)\n");
		return 0;
	}

	// bool wxFileName::GetTimes(wxDateTime * dtAccess, wxDateTime * dtMod, wxDateTime * dtCreate) const
	static int _bind_GetTimes(lua_State *L) {
		if (!_lg_typecheck_GetTimes(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::GetTimes(wxDateTime * dtAccess, wxDateTime * dtMod, wxDateTime * dtCreate) const function, expected prototype:\nbool wxFileName::GetTimes(wxDateTime * dtAccess, wxDateTime * dtMod, wxDateTime * dtCreate) const\nClass arguments details:\narg 1 ID = 57497519\narg 2 ID = 57497519\narg 3 ID = 57497519\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDateTime* dtAccess=(Luna< wxDateTime >::check(L,2));
		wxDateTime* dtMod=(Luna< wxDateTime >::check(L,3));
		wxDateTime* dtCreate=(Luna< wxDateTime >::check(L,4));

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::GetTimes(wxDateTime *, wxDateTime *, wxDateTime *) const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetTimes(dtAccess, dtMod, dtCreate);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxFileName::GetVolume() const
	static int _bind_GetVolume(lua_State *L) {
		if (!_lg_typecheck_GetVolume(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileName::GetVolume() const function, expected prototype:\nwxString wxFileName::GetVolume() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileName::GetVolume() const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetVolume();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxFileName::HasExt() const
	static int _bind_HasExt(lua_State *L) {
		if (!_lg_typecheck_HasExt(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::HasExt() const function, expected prototype:\nbool wxFileName::HasExt() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::HasExt() const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasExt();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileName::HasName() const
	static int _bind_HasName(lua_State *L) {
		if (!_lg_typecheck_HasName(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::HasName() const function, expected prototype:\nbool wxFileName::HasName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::HasName() const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasName();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileName::HasVolume() const
	static int _bind_HasVolume(lua_State *L) {
		if (!_lg_typecheck_HasVolume(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::HasVolume() const function, expected prototype:\nbool wxFileName::HasVolume() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::HasVolume() const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasVolume();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFileName::InsertDir(size_t before, const wxString & dir)
	static int _bind_InsertDir(lua_State *L) {
		if (!_lg_typecheck_InsertDir(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileName::InsertDir(size_t before, const wxString & dir) function, expected prototype:\nvoid wxFileName::InsertDir(size_t before, const wxString & dir)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t before=(size_t)lua_tointeger(L,2);
		wxString dir(lua_tostring(L,3),lua_objlen(L,3));

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileName::InsertDir(size_t, const wxString &). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->InsertDir(before, dir);

		return 0;
	}

	// bool wxFileName::IsAbsolute(wxPathFormat format = ::wxPATH_NATIVE) const
	static int _bind_IsAbsolute(lua_State *L) {
		if (!_lg_typecheck_IsAbsolute(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::IsAbsolute(wxPathFormat format = ::wxPATH_NATIVE) const function, expected prototype:\nbool wxFileName::IsAbsolute(wxPathFormat format = ::wxPATH_NATIVE) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxPathFormat format=luatop>1 ? (wxPathFormat)lua_tointeger(L,2) : (wxPathFormat)::wxPATH_NATIVE;

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::IsAbsolute(wxPathFormat) const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsAbsolute(format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileName::IsDir() const
	static int _bind_IsDir(lua_State *L) {
		if (!_lg_typecheck_IsDir(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::IsDir() const function, expected prototype:\nbool wxFileName::IsDir() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::IsDir() const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsDir();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileName::IsDirReadable() const
	static int _bind_IsDirReadable_overload_1(lua_State *L) {
		if (!_lg_typecheck_IsDirReadable_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::IsDirReadable() const function, expected prototype:\nbool wxFileName::IsDirReadable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::IsDirReadable() const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsDirReadable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxFileName::IsDirReadable(const wxString & dir)
	static int _bind_IsDirReadable_overload_2(lua_State *L) {
		if (!_lg_typecheck_IsDirReadable_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxFileName::IsDirReadable(const wxString & dir) function, expected prototype:\nstatic bool wxFileName::IsDirReadable(const wxString & dir)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString dir(lua_tostring(L,1),lua_objlen(L,1));

		bool lret = wxFileName::IsDirReadable(dir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxFileName::IsDirReadable
	static int _bind_IsDirReadable(lua_State *L) {
		if (_lg_typecheck_IsDirReadable_overload_1(L)) return _bind_IsDirReadable_overload_1(L);
		if (_lg_typecheck_IsDirReadable_overload_2(L)) return _bind_IsDirReadable_overload_2(L);

		luaL_error(L, "error in function IsDirReadable, cannot match any of the overloads for function IsDirReadable:\n  IsDirReadable()\n  IsDirReadable(const wxString &)\n");
		return 0;
	}

	// bool wxFileName::IsDirWritable() const
	static int _bind_IsDirWritable_overload_1(lua_State *L) {
		if (!_lg_typecheck_IsDirWritable_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::IsDirWritable() const function, expected prototype:\nbool wxFileName::IsDirWritable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::IsDirWritable() const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsDirWritable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxFileName::IsDirWritable(const wxString & dir)
	static int _bind_IsDirWritable_overload_2(lua_State *L) {
		if (!_lg_typecheck_IsDirWritable_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxFileName::IsDirWritable(const wxString & dir) function, expected prototype:\nstatic bool wxFileName::IsDirWritable(const wxString & dir)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString dir(lua_tostring(L,1),lua_objlen(L,1));

		bool lret = wxFileName::IsDirWritable(dir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxFileName::IsDirWritable
	static int _bind_IsDirWritable(lua_State *L) {
		if (_lg_typecheck_IsDirWritable_overload_1(L)) return _bind_IsDirWritable_overload_1(L);
		if (_lg_typecheck_IsDirWritable_overload_2(L)) return _bind_IsDirWritable_overload_2(L);

		luaL_error(L, "error in function IsDirWritable, cannot match any of the overloads for function IsDirWritable:\n  IsDirWritable()\n  IsDirWritable(const wxString &)\n");
		return 0;
	}

	// bool wxFileName::IsFileExecutable() const
	static int _bind_IsFileExecutable_overload_1(lua_State *L) {
		if (!_lg_typecheck_IsFileExecutable_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::IsFileExecutable() const function, expected prototype:\nbool wxFileName::IsFileExecutable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::IsFileExecutable() const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsFileExecutable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxFileName::IsFileExecutable(const wxString & file)
	static int _bind_IsFileExecutable_overload_2(lua_State *L) {
		if (!_lg_typecheck_IsFileExecutable_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxFileName::IsFileExecutable(const wxString & file) function, expected prototype:\nstatic bool wxFileName::IsFileExecutable(const wxString & file)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString file(lua_tostring(L,1),lua_objlen(L,1));

		bool lret = wxFileName::IsFileExecutable(file);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxFileName::IsFileExecutable
	static int _bind_IsFileExecutable(lua_State *L) {
		if (_lg_typecheck_IsFileExecutable_overload_1(L)) return _bind_IsFileExecutable_overload_1(L);
		if (_lg_typecheck_IsFileExecutable_overload_2(L)) return _bind_IsFileExecutable_overload_2(L);

		luaL_error(L, "error in function IsFileExecutable, cannot match any of the overloads for function IsFileExecutable:\n  IsFileExecutable()\n  IsFileExecutable(const wxString &)\n");
		return 0;
	}

	// bool wxFileName::IsFileReadable() const
	static int _bind_IsFileReadable_overload_1(lua_State *L) {
		if (!_lg_typecheck_IsFileReadable_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::IsFileReadable() const function, expected prototype:\nbool wxFileName::IsFileReadable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::IsFileReadable() const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsFileReadable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxFileName::IsFileReadable(const wxString & file)
	static int _bind_IsFileReadable_overload_2(lua_State *L) {
		if (!_lg_typecheck_IsFileReadable_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxFileName::IsFileReadable(const wxString & file) function, expected prototype:\nstatic bool wxFileName::IsFileReadable(const wxString & file)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString file(lua_tostring(L,1),lua_objlen(L,1));

		bool lret = wxFileName::IsFileReadable(file);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxFileName::IsFileReadable
	static int _bind_IsFileReadable(lua_State *L) {
		if (_lg_typecheck_IsFileReadable_overload_1(L)) return _bind_IsFileReadable_overload_1(L);
		if (_lg_typecheck_IsFileReadable_overload_2(L)) return _bind_IsFileReadable_overload_2(L);

		luaL_error(L, "error in function IsFileReadable, cannot match any of the overloads for function IsFileReadable:\n  IsFileReadable()\n  IsFileReadable(const wxString &)\n");
		return 0;
	}

	// bool wxFileName::IsFileWritable() const
	static int _bind_IsFileWritable_overload_1(lua_State *L) {
		if (!_lg_typecheck_IsFileWritable_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::IsFileWritable() const function, expected prototype:\nbool wxFileName::IsFileWritable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::IsFileWritable() const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsFileWritable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxFileName::IsFileWritable(const wxString & file)
	static int _bind_IsFileWritable_overload_2(lua_State *L) {
		if (!_lg_typecheck_IsFileWritable_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxFileName::IsFileWritable(const wxString & file) function, expected prototype:\nstatic bool wxFileName::IsFileWritable(const wxString & file)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString file(lua_tostring(L,1),lua_objlen(L,1));

		bool lret = wxFileName::IsFileWritable(file);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxFileName::IsFileWritable
	static int _bind_IsFileWritable(lua_State *L) {
		if (_lg_typecheck_IsFileWritable_overload_1(L)) return _bind_IsFileWritable_overload_1(L);
		if (_lg_typecheck_IsFileWritable_overload_2(L)) return _bind_IsFileWritable_overload_2(L);

		luaL_error(L, "error in function IsFileWritable, cannot match any of the overloads for function IsFileWritable:\n  IsFileWritable()\n  IsFileWritable(const wxString &)\n");
		return 0;
	}

	// bool wxFileName::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::IsOk() const function, expected prototype:\nbool wxFileName::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileName::IsRelative(wxPathFormat format = ::wxPATH_NATIVE) const
	static int _bind_IsRelative(lua_State *L) {
		if (!_lg_typecheck_IsRelative(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::IsRelative(wxPathFormat format = ::wxPATH_NATIVE) const function, expected prototype:\nbool wxFileName::IsRelative(wxPathFormat format = ::wxPATH_NATIVE) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxPathFormat format=luatop>1 ? (wxPathFormat)lua_tointeger(L,2) : (wxPathFormat)::wxPATH_NATIVE;

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::IsRelative(wxPathFormat) const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsRelative(format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileName::MakeAbsolute(const wxString & cwd = wxEmptyString, wxPathFormat format = ::wxPATH_NATIVE)
	static int _bind_MakeAbsolute(lua_State *L) {
		if (!_lg_typecheck_MakeAbsolute(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::MakeAbsolute(const wxString & cwd = wxEmptyString, wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nbool wxFileName::MakeAbsolute(const wxString & cwd = wxEmptyString, wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString cwd(lua_tostring(L,2),lua_objlen(L,2));
		wxPathFormat format=luatop>2 ? (wxPathFormat)lua_tointeger(L,3) : (wxPathFormat)::wxPATH_NATIVE;

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::MakeAbsolute(const wxString &, wxPathFormat). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MakeAbsolute(cwd, format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileName::MakeRelativeTo(const wxString & pathBase = wxEmptyString, wxPathFormat format = ::wxPATH_NATIVE)
	static int _bind_MakeRelativeTo(lua_State *L) {
		if (!_lg_typecheck_MakeRelativeTo(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::MakeRelativeTo(const wxString & pathBase = wxEmptyString, wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nbool wxFileName::MakeRelativeTo(const wxString & pathBase = wxEmptyString, wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString pathBase(lua_tostring(L,2),lua_objlen(L,2));
		wxPathFormat format=luatop>2 ? (wxPathFormat)lua_tointeger(L,3) : (wxPathFormat)::wxPATH_NATIVE;

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::MakeRelativeTo(const wxString &, wxPathFormat). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MakeRelativeTo(pathBase, format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileName::Mkdir(int perm = ::wxS_DIR_DEFAULT, int flags = 0) const
	static int _bind_Mkdir_overload_1(lua_State *L) {
		if (!_lg_typecheck_Mkdir_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::Mkdir(int perm = ::wxS_DIR_DEFAULT, int flags = 0) const function, expected prototype:\nbool wxFileName::Mkdir(int perm = ::wxS_DIR_DEFAULT, int flags = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int perm=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxS_DIR_DEFAULT;
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::Mkdir(int, int) const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Mkdir(perm, flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxFileName::Mkdir(const wxString & dir, int perm = ::wxS_DIR_DEFAULT, int flags = 0)
	static int _bind_Mkdir_overload_2(lua_State *L) {
		if (!_lg_typecheck_Mkdir_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxFileName::Mkdir(const wxString & dir, int perm = ::wxS_DIR_DEFAULT, int flags = 0) function, expected prototype:\nstatic bool wxFileName::Mkdir(const wxString & dir, int perm = ::wxS_DIR_DEFAULT, int flags = 0)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString dir(lua_tostring(L,1),lua_objlen(L,1));
		int perm=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxS_DIR_DEFAULT;
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		bool lret = wxFileName::Mkdir(dir, perm, flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxFileName::Mkdir
	static int _bind_Mkdir(lua_State *L) {
		if (_lg_typecheck_Mkdir_overload_1(L)) return _bind_Mkdir_overload_1(L);
		if (_lg_typecheck_Mkdir_overload_2(L)) return _bind_Mkdir_overload_2(L);

		luaL_error(L, "error in function Mkdir, cannot match any of the overloads for function Mkdir:\n  Mkdir(int, int)\n  Mkdir(const wxString &, int, int)\n");
		return 0;
	}

	// bool wxFileName::Normalize(int flags = ::wxPATH_NORM_ALL, const wxString & cwd = wxEmptyString, wxPathFormat format = ::wxPATH_NATIVE)
	static int _bind_Normalize(lua_State *L) {
		if (!_lg_typecheck_Normalize(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::Normalize(int flags = ::wxPATH_NORM_ALL, const wxString & cwd = wxEmptyString, wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nbool wxFileName::Normalize(int flags = ::wxPATH_NORM_ALL, const wxString & cwd = wxEmptyString, wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxPATH_NORM_ALL;
		wxString cwd(lua_tostring(L,3),lua_objlen(L,3));
		wxPathFormat format=luatop>3 ? (wxPathFormat)lua_tointeger(L,4) : (wxPathFormat)::wxPATH_NATIVE;

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::Normalize(int, const wxString &, wxPathFormat). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Normalize(flags, cwd, format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFileName::PrependDir(const wxString & dir)
	static int _bind_PrependDir(lua_State *L) {
		if (!_lg_typecheck_PrependDir(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileName::PrependDir(const wxString & dir) function, expected prototype:\nvoid wxFileName::PrependDir(const wxString & dir)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString dir(lua_tostring(L,2),lua_objlen(L,2));

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileName::PrependDir(const wxString &). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PrependDir(dir);

		return 0;
	}

	// void wxFileName::RemoveDir(size_t pos)
	static int _bind_RemoveDir(lua_State *L) {
		if (!_lg_typecheck_RemoveDir(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileName::RemoveDir(size_t pos) function, expected prototype:\nvoid wxFileName::RemoveDir(size_t pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t pos=(size_t)lua_tointeger(L,2);

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileName::RemoveDir(size_t). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RemoveDir(pos);

		return 0;
	}

	// void wxFileName::RemoveLastDir()
	static int _bind_RemoveLastDir(lua_State *L) {
		if (!_lg_typecheck_RemoveLastDir(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileName::RemoveLastDir() function, expected prototype:\nvoid wxFileName::RemoveLastDir()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileName::RemoveLastDir(). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RemoveLastDir();

		return 0;
	}

	// bool wxFileName::ReplaceEnvVariable(const wxString & envname, const wxString & replacementFmtString = "$%s", wxPathFormat format = ::wxPATH_NATIVE)
	static int _bind_ReplaceEnvVariable(lua_State *L) {
		if (!_lg_typecheck_ReplaceEnvVariable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::ReplaceEnvVariable(const wxString & envname, const wxString & replacementFmtString = \"$s\", wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nbool wxFileName::ReplaceEnvVariable(const wxString & envname, const wxString & replacementFmtString = \"$s\", wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString envname(lua_tostring(L,2),lua_objlen(L,2));
		wxString replacementFmtString(lua_tostring(L,3),lua_objlen(L,3));
		wxPathFormat format=luatop>3 ? (wxPathFormat)lua_tointeger(L,4) : (wxPathFormat)::wxPATH_NATIVE;

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::ReplaceEnvVariable(const wxString &, const wxString &, wxPathFormat). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ReplaceEnvVariable(envname, replacementFmtString, format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileName::ReplaceHomeDir(wxPathFormat format = ::wxPATH_NATIVE)
	static int _bind_ReplaceHomeDir(lua_State *L) {
		if (!_lg_typecheck_ReplaceHomeDir(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::ReplaceHomeDir(wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nbool wxFileName::ReplaceHomeDir(wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxPathFormat format=luatop>1 ? (wxPathFormat)lua_tointeger(L,2) : (wxPathFormat)::wxPATH_NATIVE;

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::ReplaceHomeDir(wxPathFormat). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ReplaceHomeDir(format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileName::Rmdir(int flags = 0) const
	static int _bind_Rmdir_overload_1(lua_State *L) {
		if (!_lg_typecheck_Rmdir_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::Rmdir(int flags = 0) const function, expected prototype:\nbool wxFileName::Rmdir(int flags = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::Rmdir(int) const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Rmdir(flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxFileName::Rmdir(const wxString & dir, int flags = 0)
	static int _bind_Rmdir_overload_2(lua_State *L) {
		if (!_lg_typecheck_Rmdir_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxFileName::Rmdir(const wxString & dir, int flags = 0) function, expected prototype:\nstatic bool wxFileName::Rmdir(const wxString & dir, int flags = 0)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString dir(lua_tostring(L,1),lua_objlen(L,1));
		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		bool lret = wxFileName::Rmdir(dir, flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxFileName::Rmdir
	static int _bind_Rmdir(lua_State *L) {
		if (_lg_typecheck_Rmdir_overload_1(L)) return _bind_Rmdir_overload_1(L);
		if (_lg_typecheck_Rmdir_overload_2(L)) return _bind_Rmdir_overload_2(L);

		luaL_error(L, "error in function Rmdir, cannot match any of the overloads for function Rmdir:\n  Rmdir(int)\n  Rmdir(const wxString &, int)\n");
		return 0;
	}

	// bool wxFileName::SameAs(const wxFileName & filepath, wxPathFormat format = ::wxPATH_NATIVE) const
	static int _bind_SameAs(lua_State *L) {
		if (!_lg_typecheck_SameAs(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::SameAs(const wxFileName & filepath, wxPathFormat format = ::wxPATH_NATIVE) const function, expected prototype:\nbool wxFileName::SameAs(const wxFileName & filepath, wxPathFormat format = ::wxPATH_NATIVE) const\nClass arguments details:\narg 1 ID = 53530938\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxFileName* filepath_ptr=(Luna< wxFileName >::check(L,2));
		if( !filepath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg filepath in wxFileName::SameAs function");
		}
		const wxFileName & filepath=*filepath_ptr;
		wxPathFormat format=luatop>2 ? (wxPathFormat)lua_tointeger(L,3) : (wxPathFormat)::wxPATH_NATIVE;

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::SameAs(const wxFileName &, wxPathFormat) const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SameAs(filepath, format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileName::SetCwd() const
	static int _bind_SetCwd_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetCwd_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::SetCwd() const function, expected prototype:\nbool wxFileName::SetCwd() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::SetCwd() const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetCwd();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxFileName::SetCwd(const wxString & cwd)
	static int _bind_SetCwd_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetCwd_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxFileName::SetCwd(const wxString & cwd) function, expected prototype:\nstatic bool wxFileName::SetCwd(const wxString & cwd)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString cwd(lua_tostring(L,1),lua_objlen(L,1));

		bool lret = wxFileName::SetCwd(cwd);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxFileName::SetCwd
	static int _bind_SetCwd(lua_State *L) {
		if (_lg_typecheck_SetCwd_overload_1(L)) return _bind_SetCwd_overload_1(L);
		if (_lg_typecheck_SetCwd_overload_2(L)) return _bind_SetCwd_overload_2(L);

		luaL_error(L, "error in function SetCwd, cannot match any of the overloads for function SetCwd:\n  SetCwd()\n  SetCwd(const wxString &)\n");
		return 0;
	}

	// void wxFileName::SetEmptyExt()
	static int _bind_SetEmptyExt(lua_State *L) {
		if (!_lg_typecheck_SetEmptyExt(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileName::SetEmptyExt() function, expected prototype:\nvoid wxFileName::SetEmptyExt()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileName::SetEmptyExt(). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetEmptyExt();

		return 0;
	}

	// void wxFileName::SetExt(const wxString & ext)
	static int _bind_SetExt(lua_State *L) {
		if (!_lg_typecheck_SetExt(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileName::SetExt(const wxString & ext) function, expected prototype:\nvoid wxFileName::SetExt(const wxString & ext)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString ext(lua_tostring(L,2),lua_objlen(L,2));

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileName::SetExt(const wxString &). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetExt(ext);

		return 0;
	}

	// void wxFileName::SetFullName(const wxString & fullname)
	static int _bind_SetFullName(lua_State *L) {
		if (!_lg_typecheck_SetFullName(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileName::SetFullName(const wxString & fullname) function, expected prototype:\nvoid wxFileName::SetFullName(const wxString & fullname)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString fullname(lua_tostring(L,2),lua_objlen(L,2));

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileName::SetFullName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFullName(fullname);

		return 0;
	}

	// void wxFileName::SetName(const wxString & name)
	static int _bind_SetName(lua_State *L) {
		if (!_lg_typecheck_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileName::SetName(const wxString & name) function, expected prototype:\nvoid wxFileName::SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileName::SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetName(name);

		return 0;
	}

	// void wxFileName::SetPath(const wxString & path, wxPathFormat format = ::wxPATH_NATIVE)
	static int _bind_SetPath(lua_State *L) {
		if (!_lg_typecheck_SetPath(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileName::SetPath(const wxString & path, wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nvoid wxFileName::SetPath(const wxString & path, wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString path(lua_tostring(L,2),lua_objlen(L,2));
		wxPathFormat format=luatop>2 ? (wxPathFormat)lua_tointeger(L,3) : (wxPathFormat)::wxPATH_NATIVE;

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileName::SetPath(const wxString &, wxPathFormat). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPath(path, format);

		return 0;
	}

	// bool wxFileName::SetTimes(const wxDateTime * dtAccess, const wxDateTime * dtMod, const wxDateTime * dtCreate) const
	static int _bind_SetTimes(lua_State *L) {
		if (!_lg_typecheck_SetTimes(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::SetTimes(const wxDateTime * dtAccess, const wxDateTime * dtMod, const wxDateTime * dtCreate) const function, expected prototype:\nbool wxFileName::SetTimes(const wxDateTime * dtAccess, const wxDateTime * dtMod, const wxDateTime * dtCreate) const\nClass arguments details:\narg 1 ID = 57497519\narg 2 ID = 57497519\narg 3 ID = 57497519\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateTime* dtAccess=(Luna< wxDateTime >::check(L,2));
		const wxDateTime* dtMod=(Luna< wxDateTime >::check(L,3));
		const wxDateTime* dtCreate=(Luna< wxDateTime >::check(L,4));

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::SetTimes(const wxDateTime *, const wxDateTime *, const wxDateTime *) const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetTimes(dtAccess, dtMod, dtCreate);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFileName::SetVolume(const wxString & volume)
	static int _bind_SetVolume(lua_State *L) {
		if (!_lg_typecheck_SetVolume(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileName::SetVolume(const wxString & volume) function, expected prototype:\nvoid wxFileName::SetVolume(const wxString & volume)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString volume(lua_tostring(L,2),lua_objlen(L,2));

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileName::SetVolume(const wxString &). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetVolume(volume);

		return 0;
	}

	// bool wxFileName::Touch() const
	static int _bind_Touch(lua_State *L) {
		if (!_lg_typecheck_Touch(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::Touch() const function, expected prototype:\nbool wxFileName::Touch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::Touch() const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Touch();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static wxString wxFileName::CreateTempFileName(const wxString & prefix, wxFile * fileTemp = NULL)
	static int _bind_CreateTempFileName(lua_State *L) {
		if (!_lg_typecheck_CreateTempFileName(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxFileName::CreateTempFileName(const wxString & prefix, wxFile * fileTemp = NULL) function, expected prototype:\nstatic wxString wxFileName::CreateTempFileName(const wxString & prefix, wxFile * fileTemp = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 19881034\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString prefix(lua_tostring(L,1),lua_objlen(L,1));
		wxFile* fileTemp=luatop>1 ? (Luna< wxFile >::check(L,2)) : (wxFile*)NULL;

		wxString lret = wxFileName::CreateTempFileName(prefix, fileTemp);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxFileName wxFileName::DirName(const wxString & dir, wxPathFormat format = ::wxPATH_NATIVE)
	static int _bind_DirName(lua_State *L) {
		if (!_lg_typecheck_DirName(L)) {
			luaL_error(L, "luna typecheck failed in static wxFileName wxFileName::DirName(const wxString & dir, wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nstatic wxFileName wxFileName::DirName(const wxString & dir, wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString dir(lua_tostring(L,1),lua_objlen(L,1));
		wxPathFormat format=luatop>1 ? (wxPathFormat)lua_tointeger(L,2) : (wxPathFormat)::wxPATH_NATIVE;

		wxFileName stack_lret = wxFileName::DirName(dir, format);
		wxFileName* lret = new wxFileName(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileName >::push(L,lret,true);

		return 1;
	}

	// static wxFileName wxFileName::FileName(const wxString & file, wxPathFormat format = ::wxPATH_NATIVE)
	static int _bind_FileName(lua_State *L) {
		if (!_lg_typecheck_FileName(L)) {
			luaL_error(L, "luna typecheck failed in static wxFileName wxFileName::FileName(const wxString & file, wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nstatic wxFileName wxFileName::FileName(const wxString & file, wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString file(lua_tostring(L,1),lua_objlen(L,1));
		wxPathFormat format=luatop>1 ? (wxPathFormat)lua_tointeger(L,2) : (wxPathFormat)::wxPATH_NATIVE;

		wxFileName stack_lret = wxFileName::FileName(file, format);
		wxFileName* lret = new wxFileName(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileName >::push(L,lret,true);

		return 1;
	}

	// static wxString wxFileName::GetCwd(const wxString & volume = wxEmptyString)
	static int _bind_GetCwd(lua_State *L) {
		if (!_lg_typecheck_GetCwd(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxFileName::GetCwd(const wxString & volume = wxEmptyString) function, expected prototype:\nstatic wxString wxFileName::GetCwd(const wxString & volume = wxEmptyString)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString volume(lua_tostring(L,1),lua_objlen(L,1));

		wxString lret = wxFileName::GetCwd(volume);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxFileName::GetForbiddenChars(wxPathFormat format = ::wxPATH_NATIVE)
	static int _bind_GetForbiddenChars(lua_State *L) {
		if (!_lg_typecheck_GetForbiddenChars(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxFileName::GetForbiddenChars(wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nstatic wxString wxFileName::GetForbiddenChars(wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxPathFormat format=luatop>0 ? (wxPathFormat)lua_tointeger(L,1) : (wxPathFormat)::wxPATH_NATIVE;

		wxString lret = wxFileName::GetForbiddenChars(format);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxPathFormat wxFileName::GetFormat(wxPathFormat format = ::wxPATH_NATIVE)
	static int _bind_GetFormat(lua_State *L) {
		if (!_lg_typecheck_GetFormat(L)) {
			luaL_error(L, "luna typecheck failed in static wxPathFormat wxFileName::GetFormat(wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nstatic wxPathFormat wxFileName::GetFormat(wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxPathFormat format=luatop>0 ? (wxPathFormat)lua_tointeger(L,1) : (wxPathFormat)::wxPATH_NATIVE;

		wxPathFormat lret = wxFileName::GetFormat(format);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static wxString wxFileName::GetHomeDir()
	static int _bind_GetHomeDir(lua_State *L) {
		if (!_lg_typecheck_GetHomeDir(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxFileName::GetHomeDir() function, expected prototype:\nstatic wxString wxFileName::GetHomeDir()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxString lret = wxFileName::GetHomeDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxFileName::GetPathSeparators(wxPathFormat format = ::wxPATH_NATIVE)
	static int _bind_GetPathSeparators(lua_State *L) {
		if (!_lg_typecheck_GetPathSeparators(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxFileName::GetPathSeparators(wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nstatic wxString wxFileName::GetPathSeparators(wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxPathFormat format=luatop>0 ? (wxPathFormat)lua_tointeger(L,1) : (wxPathFormat)::wxPATH_NATIVE;

		wxString lret = wxFileName::GetPathSeparators(format);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxFileName::GetPathTerminators(wxPathFormat format = ::wxPATH_NATIVE)
	static int _bind_GetPathTerminators(lua_State *L) {
		if (!_lg_typecheck_GetPathTerminators(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxFileName::GetPathTerminators(wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nstatic wxString wxFileName::GetPathTerminators(wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxPathFormat format=luatop>0 ? (wxPathFormat)lua_tointeger(L,1) : (wxPathFormat)::wxPATH_NATIVE;

		wxString lret = wxFileName::GetPathTerminators(format);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxFileName::GetTempDir()
	static int _bind_GetTempDir(lua_State *L) {
		if (!_lg_typecheck_GetTempDir(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxFileName::GetTempDir() function, expected prototype:\nstatic wxString wxFileName::GetTempDir()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxString lret = wxFileName::GetTempDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxFileName::GetVolumeSeparator(wxPathFormat format = ::wxPATH_NATIVE)
	static int _bind_GetVolumeSeparator(lua_State *L) {
		if (!_lg_typecheck_GetVolumeSeparator(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxFileName::GetVolumeSeparator(wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nstatic wxString wxFileName::GetVolumeSeparator(wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxPathFormat format=luatop>0 ? (wxPathFormat)lua_tointeger(L,1) : (wxPathFormat)::wxPATH_NATIVE;

		wxString lret = wxFileName::GetVolumeSeparator(format);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxFileName::GetVolumeString(char drive, int flags = ::wxPATH_GET_SEPARATOR)
	static int _bind_GetVolumeString(lua_State *L) {
		if (!_lg_typecheck_GetVolumeString(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxFileName::GetVolumeString(char drive, int flags = ::wxPATH_GET_SEPARATOR) function, expected prototype:\nstatic wxString wxFileName::GetVolumeString(char drive, int flags = ::wxPATH_GET_SEPARATOR)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		char drive=(char)lua_tointeger(L,1);
		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxPATH_GET_SEPARATOR;

		wxString lret = wxFileName::GetVolumeString(drive, flags);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static bool wxFileName::IsCaseSensitive(wxPathFormat format = ::wxPATH_NATIVE)
	static int _bind_IsCaseSensitive(lua_State *L) {
		if (!_lg_typecheck_IsCaseSensitive(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxFileName::IsCaseSensitive(wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nstatic bool wxFileName::IsCaseSensitive(wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxPathFormat format=luatop>0 ? (wxPathFormat)lua_tointeger(L,1) : (wxPathFormat)::wxPATH_NATIVE;

		bool lret = wxFileName::IsCaseSensitive(format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxFileName::IsMSWUniqueVolumeNamePath(const wxString & path, wxPathFormat format = ::wxPATH_NATIVE)
	static int _bind_IsMSWUniqueVolumeNamePath(lua_State *L) {
		if (!_lg_typecheck_IsMSWUniqueVolumeNamePath(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxFileName::IsMSWUniqueVolumeNamePath(const wxString & path, wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nstatic bool wxFileName::IsMSWUniqueVolumeNamePath(const wxString & path, wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString path(lua_tostring(L,1),lua_objlen(L,1));
		wxPathFormat format=luatop>1 ? (wxPathFormat)lua_tointeger(L,2) : (wxPathFormat)::wxPATH_NATIVE;

		bool lret = wxFileName::IsMSWUniqueVolumeNamePath(path, format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static void wxFileName::SplitPath(const wxString & fullpath, wxString * volume, wxString * path, wxString * name, wxString * ext, bool * hasExt = NULL, wxPathFormat format = ::wxPATH_NATIVE)
	static int _bind_SplitPath_overload_1(lua_State *L) {
		if (!_lg_typecheck_SplitPath_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in static void wxFileName::SplitPath(const wxString & fullpath, wxString * volume, wxString * path, wxString * name, wxString * ext, bool * hasExt = NULL, wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nstatic void wxFileName::SplitPath(const wxString & fullpath, wxString * volume, wxString * path, wxString * name, wxString * ext, bool * hasExt = NULL, wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 5 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString fullpath(lua_tostring(L,1),lua_objlen(L,1));
		wxString volume(lua_tostring(L,2),lua_objlen(L,2));
		wxString path(lua_tostring(L,3),lua_objlen(L,3));
		wxString name(lua_tostring(L,4),lua_objlen(L,4));
		wxString ext(lua_tostring(L,5),lua_objlen(L,5));
		bool* hasExt=luatop>5 ? (bool*)(Luna< void >::check(L,6)) : (bool*)NULL;
		wxPathFormat format=luatop>6 ? (wxPathFormat)lua_tointeger(L,7) : (wxPathFormat)::wxPATH_NATIVE;

		wxFileName::SplitPath(fullpath, &volume, &path, &name, &ext, hasExt, format);

		return 0;
	}

	// static void wxFileName::SplitPath(const wxString & fullpath, wxString * volume, wxString * path, wxString * name, wxString * ext, wxPathFormat format)
	static int _bind_SplitPath_overload_2(lua_State *L) {
		if (!_lg_typecheck_SplitPath_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static void wxFileName::SplitPath(const wxString & fullpath, wxString * volume, wxString * path, wxString * name, wxString * ext, wxPathFormat format) function, expected prototype:\nstatic void wxFileName::SplitPath(const wxString & fullpath, wxString * volume, wxString * path, wxString * name, wxString * ext, wxPathFormat format)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 5 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString fullpath(lua_tostring(L,1),lua_objlen(L,1));
		wxString volume(lua_tostring(L,2),lua_objlen(L,2));
		wxString path(lua_tostring(L,3),lua_objlen(L,3));
		wxString name(lua_tostring(L,4),lua_objlen(L,4));
		wxString ext(lua_tostring(L,5),lua_objlen(L,5));
		wxPathFormat format=(wxPathFormat)lua_tointeger(L,6);

		wxFileName::SplitPath(fullpath, &volume, &path, &name, &ext, format);

		return 0;
	}

	// static void wxFileName::SplitPath(const wxString & fullpath, wxString * path, wxString * name, wxString * ext, wxPathFormat format = ::wxPATH_NATIVE)
	static int _bind_SplitPath_overload_3(lua_State *L) {
		if (!_lg_typecheck_SplitPath_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in static void wxFileName::SplitPath(const wxString & fullpath, wxString * path, wxString * name, wxString * ext, wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nstatic void wxFileName::SplitPath(const wxString & fullpath, wxString * path, wxString * name, wxString * ext, wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString fullpath(lua_tostring(L,1),lua_objlen(L,1));
		wxString path(lua_tostring(L,2),lua_objlen(L,2));
		wxString name(lua_tostring(L,3),lua_objlen(L,3));
		wxString ext(lua_tostring(L,4),lua_objlen(L,4));
		wxPathFormat format=luatop>4 ? (wxPathFormat)lua_tointeger(L,5) : (wxPathFormat)::wxPATH_NATIVE;

		wxFileName::SplitPath(fullpath, &path, &name, &ext, format);

		return 0;
	}

	// Overload binder for wxFileName::SplitPath
	static int _bind_SplitPath(lua_State *L) {
		if (_lg_typecheck_SplitPath_overload_1(L)) return _bind_SplitPath_overload_1(L);
		if (_lg_typecheck_SplitPath_overload_2(L)) return _bind_SplitPath_overload_2(L);
		if (_lg_typecheck_SplitPath_overload_3(L)) return _bind_SplitPath_overload_3(L);

		luaL_error(L, "error in function SplitPath, cannot match any of the overloads for function SplitPath:\n  SplitPath(const wxString &, wxString *, wxString *, wxString *, wxString *, bool *, wxPathFormat)\n  SplitPath(const wxString &, wxString *, wxString *, wxString *, wxString *, wxPathFormat)\n  SplitPath(const wxString &, wxString *, wxString *, wxString *, wxPathFormat)\n");
		return 0;
	}

	// static void wxFileName::SplitVolume(const wxString & fullpath, wxString * volume, wxString * path, wxPathFormat format = ::wxPATH_NATIVE)
	static int _bind_SplitVolume(lua_State *L) {
		if (!_lg_typecheck_SplitVolume(L)) {
			luaL_error(L, "luna typecheck failed in static void wxFileName::SplitVolume(const wxString & fullpath, wxString * volume, wxString * path, wxPathFormat format = ::wxPATH_NATIVE) function, expected prototype:\nstatic void wxFileName::SplitVolume(const wxString & fullpath, wxString * volume, wxString * path, wxPathFormat format = ::wxPATH_NATIVE)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString fullpath(lua_tostring(L,1),lua_objlen(L,1));
		wxString volume(lua_tostring(L,2),lua_objlen(L,2));
		wxString path(lua_tostring(L,3),lua_objlen(L,3));
		wxPathFormat format=luatop>3 ? (wxPathFormat)lua_tointeger(L,4) : (wxPathFormat)::wxPATH_NATIVE;

		wxFileName::SplitVolume(fullpath, &volume, &path, format);

		return 0;
	}

	// static wxString wxFileName::StripExtension(const wxString & fullname)
	static int _bind_StripExtension(lua_State *L) {
		if (!_lg_typecheck_StripExtension(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxFileName::StripExtension(const wxString & fullname) function, expected prototype:\nstatic wxString wxFileName::StripExtension(const wxString & fullname)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString fullname(lua_tostring(L,1),lua_objlen(L,1));

		wxString lret = wxFileName::StripExtension(fullname);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:
	// bool wxFileName::operator!=(const wxFileName & filename) const
	static int _bind_op_neq_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_neq_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::operator!=(const wxFileName & filename) const function, expected prototype:\nbool wxFileName::operator!=(const wxFileName & filename) const\nClass arguments details:\narg 1 ID = 53530938\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFileName* filename_ptr=(Luna< wxFileName >::check(L,2));
		if( !filename_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg filename in wxFileName::operator!= function");
		}
		const wxFileName & filename=*filename_ptr;

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::operator!=(const wxFileName &) const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileName::operator!=(const wxString & filename) const
	static int _bind_op_neq_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_neq_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::operator!=(const wxString & filename) const function, expected prototype:\nbool wxFileName::operator!=(const wxString & filename) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::operator!=(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxFileName::operator!=
	static int _bind_op_neq(lua_State *L) {
		if (_lg_typecheck_op_neq_overload_1(L)) return _bind_op_neq_overload_1(L);
		if (_lg_typecheck_op_neq_overload_2(L)) return _bind_op_neq_overload_2(L);

		luaL_error(L, "error in function operator!=, cannot match any of the overloads for function operator!=:\n  operator!=(const wxFileName &)\n  operator!=(const wxString &)\n");
		return 0;
	}

	// bool wxFileName::operator==(const wxFileName & filename) const
	static int _bind___eq_overload_1(lua_State *L) {
		if (!_lg_typecheck___eq_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::operator==(const wxFileName & filename) const function, expected prototype:\nbool wxFileName::operator==(const wxFileName & filename) const\nClass arguments details:\narg 1 ID = 53530938\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFileName* filename_ptr=(Luna< wxFileName >::check(L,2));
		if( !filename_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg filename in wxFileName::operator== function");
		}
		const wxFileName & filename=*filename_ptr;

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::operator==(const wxFileName &) const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileName::operator==(const wxString & filename) const
	static int _bind___eq_overload_2(lua_State *L) {
		if (!_lg_typecheck___eq_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileName::operator==(const wxString & filename) const function, expected prototype:\nbool wxFileName::operator==(const wxString & filename) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileName::operator==(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxFileName::operator==
	static int _bind___eq(lua_State *L) {
		if (_lg_typecheck___eq_overload_1(L)) return _bind___eq_overload_1(L);
		if (_lg_typecheck___eq_overload_2(L)) return _bind___eq_overload_2(L);

		luaL_error(L, "error in function operator==, cannot match any of the overloads for function operator==:\n  operator==(const wxFileName &)\n  operator==(const wxString &)\n");
		return 0;
	}

	// wxFileName & wxFileName::operator=(const wxFileName & filename)
	static int _bind_op_assign_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_assign_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxFileName & wxFileName::operator=(const wxFileName & filename) function, expected prototype:\nwxFileName & wxFileName::operator=(const wxFileName & filename)\nClass arguments details:\narg 1 ID = 53530938\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFileName* filename_ptr=(Luna< wxFileName >::check(L,2));
		if( !filename_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg filename in wxFileName::operator= function");
		}
		const wxFileName & filename=*filename_ptr;

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFileName & wxFileName::operator=(const wxFileName &). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxFileName* lret = &self->operator=(filename);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileName >::push(L,lret,false);

		return 1;
	}

	// wxFileName & wxFileName::operator=(const wxString & filename)
	static int _bind_op_assign_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_assign_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxFileName & wxFileName::operator=(const wxString & filename) function, expected prototype:\nwxFileName & wxFileName::operator=(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		wxFileName* self=(Luna< wxFileName >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFileName & wxFileName::operator=(const wxString &). Got : '%s'\n%s",typeid(Luna< wxFileName >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxFileName* lret = &self->operator=(filename);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileName >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxFileName::operator=
	static int _bind_op_assign(lua_State *L) {
		if (_lg_typecheck_op_assign_overload_1(L)) return _bind_op_assign_overload_1(L);
		if (_lg_typecheck_op_assign_overload_2(L)) return _bind_op_assign_overload_2(L);

		luaL_error(L, "error in function operator=, cannot match any of the overloads for function operator=:\n  operator=(const wxFileName &)\n  operator=(const wxString &)\n");
		return 0;
	}


};

wxFileName* LunaTraits< wxFileName >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFileName::_bind_ctor(L);
}

void LunaTraits< wxFileName >::_bind_dtor(wxFileName* obj) {
	delete obj;
}

const char LunaTraits< wxFileName >::className[] = "wxFileName";
const char LunaTraits< wxFileName >::fullName[] = "wxFileName";
const char LunaTraits< wxFileName >::moduleName[] = "wx";
const char* LunaTraits< wxFileName >::parents[] = {0};
const int LunaTraits< wxFileName >::hash = 53530938;
const int LunaTraits< wxFileName >::uniqueIDs[] = {53530938,0};

luna_RegType LunaTraits< wxFileName >::methods[] = {
	{"AppendDir", &luna_wrapper_wxFileName::_bind_AppendDir},
	{"Assign", &luna_wrapper_wxFileName::_bind_Assign},
	{"AssignCwd", &luna_wrapper_wxFileName::_bind_AssignCwd},
	{"AssignDir", &luna_wrapper_wxFileName::_bind_AssignDir},
	{"AssignHomeDir", &luna_wrapper_wxFileName::_bind_AssignHomeDir},
	{"AssignTempFileName", &luna_wrapper_wxFileName::_bind_AssignTempFileName},
	{"Clear", &luna_wrapper_wxFileName::_bind_Clear},
	{"ClearExt", &luna_wrapper_wxFileName::_bind_ClearExt},
	{"DirExists", &luna_wrapper_wxFileName::_bind_DirExists},
	{"FileExists", &luna_wrapper_wxFileName::_bind_FileExists},
	{"GetDirCount", &luna_wrapper_wxFileName::_bind_GetDirCount},
	{"GetDirs", &luna_wrapper_wxFileName::_bind_GetDirs},
	{"GetExt", &luna_wrapper_wxFileName::_bind_GetExt},
	{"GetFullName", &luna_wrapper_wxFileName::_bind_GetFullName},
	{"GetFullPath", &luna_wrapper_wxFileName::_bind_GetFullPath},
	{"GetHumanReadableSize", &luna_wrapper_wxFileName::_bind_GetHumanReadableSize},
	{"GetLongPath", &luna_wrapper_wxFileName::_bind_GetLongPath},
	{"GetModificationTime", &luna_wrapper_wxFileName::_bind_GetModificationTime},
	{"GetName", &luna_wrapper_wxFileName::_bind_GetName},
	{"GetPath", &luna_wrapper_wxFileName::_bind_GetPath},
	{"GetPathWithSep", &luna_wrapper_wxFileName::_bind_GetPathWithSep},
	{"GetShortPath", &luna_wrapper_wxFileName::_bind_GetShortPath},
	{"GetSize", &luna_wrapper_wxFileName::_bind_GetSize},
	{"GetTimes", &luna_wrapper_wxFileName::_bind_GetTimes},
	{"GetVolume", &luna_wrapper_wxFileName::_bind_GetVolume},
	{"HasExt", &luna_wrapper_wxFileName::_bind_HasExt},
	{"HasName", &luna_wrapper_wxFileName::_bind_HasName},
	{"HasVolume", &luna_wrapper_wxFileName::_bind_HasVolume},
	{"InsertDir", &luna_wrapper_wxFileName::_bind_InsertDir},
	{"IsAbsolute", &luna_wrapper_wxFileName::_bind_IsAbsolute},
	{"IsDir", &luna_wrapper_wxFileName::_bind_IsDir},
	{"IsDirReadable", &luna_wrapper_wxFileName::_bind_IsDirReadable},
	{"IsDirWritable", &luna_wrapper_wxFileName::_bind_IsDirWritable},
	{"IsFileExecutable", &luna_wrapper_wxFileName::_bind_IsFileExecutable},
	{"IsFileReadable", &luna_wrapper_wxFileName::_bind_IsFileReadable},
	{"IsFileWritable", &luna_wrapper_wxFileName::_bind_IsFileWritable},
	{"IsOk", &luna_wrapper_wxFileName::_bind_IsOk},
	{"IsRelative", &luna_wrapper_wxFileName::_bind_IsRelative},
	{"MakeAbsolute", &luna_wrapper_wxFileName::_bind_MakeAbsolute},
	{"MakeRelativeTo", &luna_wrapper_wxFileName::_bind_MakeRelativeTo},
	{"Mkdir", &luna_wrapper_wxFileName::_bind_Mkdir},
	{"Normalize", &luna_wrapper_wxFileName::_bind_Normalize},
	{"PrependDir", &luna_wrapper_wxFileName::_bind_PrependDir},
	{"RemoveDir", &luna_wrapper_wxFileName::_bind_RemoveDir},
	{"RemoveLastDir", &luna_wrapper_wxFileName::_bind_RemoveLastDir},
	{"ReplaceEnvVariable", &luna_wrapper_wxFileName::_bind_ReplaceEnvVariable},
	{"ReplaceHomeDir", &luna_wrapper_wxFileName::_bind_ReplaceHomeDir},
	{"Rmdir", &luna_wrapper_wxFileName::_bind_Rmdir},
	{"SameAs", &luna_wrapper_wxFileName::_bind_SameAs},
	{"SetCwd", &luna_wrapper_wxFileName::_bind_SetCwd},
	{"SetEmptyExt", &luna_wrapper_wxFileName::_bind_SetEmptyExt},
	{"SetExt", &luna_wrapper_wxFileName::_bind_SetExt},
	{"SetFullName", &luna_wrapper_wxFileName::_bind_SetFullName},
	{"SetName", &luna_wrapper_wxFileName::_bind_SetName},
	{"SetPath", &luna_wrapper_wxFileName::_bind_SetPath},
	{"SetTimes", &luna_wrapper_wxFileName::_bind_SetTimes},
	{"SetVolume", &luna_wrapper_wxFileName::_bind_SetVolume},
	{"Touch", &luna_wrapper_wxFileName::_bind_Touch},
	{"CreateTempFileName", &luna_wrapper_wxFileName::_bind_CreateTempFileName},
	{"DirName", &luna_wrapper_wxFileName::_bind_DirName},
	{"FileName", &luna_wrapper_wxFileName::_bind_FileName},
	{"GetCwd", &luna_wrapper_wxFileName::_bind_GetCwd},
	{"GetForbiddenChars", &luna_wrapper_wxFileName::_bind_GetForbiddenChars},
	{"GetFormat", &luna_wrapper_wxFileName::_bind_GetFormat},
	{"GetHomeDir", &luna_wrapper_wxFileName::_bind_GetHomeDir},
	{"GetPathSeparators", &luna_wrapper_wxFileName::_bind_GetPathSeparators},
	{"GetPathTerminators", &luna_wrapper_wxFileName::_bind_GetPathTerminators},
	{"GetTempDir", &luna_wrapper_wxFileName::_bind_GetTempDir},
	{"GetVolumeSeparator", &luna_wrapper_wxFileName::_bind_GetVolumeSeparator},
	{"GetVolumeString", &luna_wrapper_wxFileName::_bind_GetVolumeString},
	{"IsCaseSensitive", &luna_wrapper_wxFileName::_bind_IsCaseSensitive},
	{"IsMSWUniqueVolumeNamePath", &luna_wrapper_wxFileName::_bind_IsMSWUniqueVolumeNamePath},
	{"SplitPath", &luna_wrapper_wxFileName::_bind_SplitPath},
	{"SplitVolume", &luna_wrapper_wxFileName::_bind_SplitVolume},
	{"StripExtension", &luna_wrapper_wxFileName::_bind_StripExtension},
	{"op_neq", &luna_wrapper_wxFileName::_bind_op_neq},
	{"__eq", &luna_wrapper_wxFileName::_bind___eq},
	{"op_assign", &luna_wrapper_wxFileName::_bind_op_assign},
	{"dynCast", &luna_wrapper_wxFileName::_bind_dynCast},
	{"fromVoid", &luna_wrapper_wxFileName::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFileName::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileName >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileName >::enumValues[] = {
	{0,0}
};


