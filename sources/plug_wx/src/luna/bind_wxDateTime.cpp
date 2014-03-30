#include <plug_common.h>

class luna_wrapper_wxDateTime {
public:
	typedef Luna< wxDateTime > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,57497519) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDateTime*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDateTime* rhs =(Luna< wxDateTime >::check(L,2));
		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
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

		wxDateTime* self= (wxDateTime*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDateTime >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,57497519) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxDateTime >::check(L,1));
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

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDateTime");
		
		return luna_dynamicCast(L,converters,"wxDateTime",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>7 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_ResetTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Set_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>8 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDay(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFromDOS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMillisecond(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMinute(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMonth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSecond(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToCurrent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetYear(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAsDOS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCentury_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCentury_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDateOnly(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDay(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDayOfYear(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHour(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMillisecond(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMinute(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMonth(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSecond(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTm(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWeekDay_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWeekDay_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWeekOfMonth(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWeekOfYear(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetYear(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsValid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsWorkDay(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsEarlierThan(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57497519) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsEqualTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57497519) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsEqualUpTo(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57497519) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,58889849) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsLaterThan(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57497519) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsSameDate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57497519) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsSameTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57497519) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsStrictlyBetween(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57497519) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,57497519) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsBetween(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57497519) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,57497519) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57474092) ) return false;
		if( (!(Luna< wxDateSpan >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57474092) ) return false;
		if( (!(Luna< wxDateSpan >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58889849) ) return false;
		if( (!(Luna< wxTimeSpan >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58889849) ) return false;
		if( (!(Luna< wxTimeSpan >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Subtract_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58889849) ) return false;
		if( (!(Luna< wxTimeSpan >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Subtract_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58889849) ) return false;
		if( (!(Luna< wxTimeSpan >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Subtract_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57474092) ) return false;
		if( (!(Luna< wxDateSpan >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Subtract_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57474092) ) return false;
		if( (!(Luna< wxDateSpan >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Subtract_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57497519) ) return false;
		if( (!(Luna< wxDateTime >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Format(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FormatDate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FormatISOCombined(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FormatISODate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FormatISOTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FormatTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ParseISOCombined(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ParseISODate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ParseISOTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLastMonthDay(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLastWeekDay(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNextWeekDay(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPrevWeekDay(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWeekDayInSameWeek(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetYearDay(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToLastMonthDay(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToLastWeekDay(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToNextWeekDay(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToPrevWeekDay(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToWeekDay(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToWeekDayInSameWeek(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToYearDay(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetJDN(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetJulianDayNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMJD(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetModifiedJulianDayNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRataDie(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FromTimezone(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsDST(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MakeFromTimezone(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MakeTimezone(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MakeUTC(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ToTimezone(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ToUTC(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ConvertYearToBC(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAmPmStrings(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBeginDST(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetEndDST(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCountry(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCurrentMonth(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCurrentYear(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetEnglishMonthName(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetEnglishWeekDayName(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMonthName(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNumberOfDays_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNumberOfDays_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWeekDayName(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsDSTApplicable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsLeapYear(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsWestEuropeanCountry(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Now(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCountry(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToWeekOfYear(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Today(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_UNow(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 4 valid operators)
	inline static bool _lg_typecheck_op_add_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57474092) ) return false;
		if( (!(Luna< wxDateSpan >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58889849) ) return false;
		if( (!(Luna< wxTimeSpan >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57474092) ) return false;
		if( (!(Luna< wxDateSpan >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58889849) ) return false;
		if( (!(Luna< wxTimeSpan >::check(L,2))) ) return false;
		return true;
	}


	// Constructor binds:
	// wxDateTime::wxDateTime()
	static wxDateTime* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime::wxDateTime() function, expected prototype:\nwxDateTime::wxDateTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxDateTime();
	}

	// wxDateTime::wxDateTime(double jdn)
	static wxDateTime* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime::wxDateTime(double jdn) function, expected prototype:\nwxDateTime::wxDateTime(double jdn)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double jdn=(double)lua_tonumber(L,1);

		return new wxDateTime(jdn);
	}

	// wxDateTime::wxDateTime(unsigned short hour, unsigned short minute = 0, unsigned short second = 0, unsigned short millisec = 0)
	static wxDateTime* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime::wxDateTime(unsigned short hour, unsigned short minute = 0, unsigned short second = 0, unsigned short millisec = 0) function, expected prototype:\nwxDateTime::wxDateTime(unsigned short hour, unsigned short minute = 0, unsigned short second = 0, unsigned short millisec = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned short hour=(unsigned short)lua_tointeger(L,1);
		unsigned short minute=luatop>1 ? (unsigned short)lua_tointeger(L,2) : (unsigned short)0;
		unsigned short second=luatop>2 ? (unsigned short)lua_tointeger(L,3) : (unsigned short)0;
		unsigned short millisec=luatop>3 ? (unsigned short)lua_tointeger(L,4) : (unsigned short)0;

		return new wxDateTime(hour, minute, second, millisec);
	}

	// wxDateTime::wxDateTime(unsigned short day, wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year, unsigned short hour = 0, unsigned short minute = 0, unsigned short second = 0, unsigned short millisec = 0)
	static wxDateTime* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime::wxDateTime(unsigned short day, wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year, unsigned short hour = 0, unsigned short minute = 0, unsigned short second = 0, unsigned short millisec = 0) function, expected prototype:\nwxDateTime::wxDateTime(unsigned short day, wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year, unsigned short hour = 0, unsigned short minute = 0, unsigned short second = 0, unsigned short millisec = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned short day=(unsigned short)lua_tointeger(L,1);
		wxDateTime::Month month=luatop>1 ? (wxDateTime::Month)lua_tointeger(L,2) : (wxDateTime::Month)wxDateTime::Inv_Month;
		int year=luatop>2 ? (int)lua_tointeger(L,3) : (int)wxDateTime::Inv_Year;
		unsigned short hour=luatop>3 ? (unsigned short)lua_tointeger(L,4) : (unsigned short)0;
		unsigned short minute=luatop>4 ? (unsigned short)lua_tointeger(L,5) : (unsigned short)0;
		unsigned short second=luatop>5 ? (unsigned short)lua_tointeger(L,6) : (unsigned short)0;
		unsigned short millisec=luatop>6 ? (unsigned short)lua_tointeger(L,7) : (unsigned short)0;

		return new wxDateTime(day, month, year, hour, minute, second, millisec);
	}

	// Overload binder for wxDateTime::wxDateTime
	static wxDateTime* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxDateTime, cannot match any of the overloads for function wxDateTime:\n  wxDateTime()\n  wxDateTime(double)\n  wxDateTime(unsigned short, unsigned short, unsigned short, unsigned short)\n  wxDateTime(unsigned short, wxDateTime::Month, int, unsigned short, unsigned short, unsigned short, unsigned short)\n");
		return NULL;
	}


	// Function binds:
	// wxDateTime & wxDateTime::ResetTime()
	static int _bind_ResetTime(lua_State *L) {
		if (!_lg_typecheck_ResetTime(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::ResetTime() function, expected prototype:\nwxDateTime & wxDateTime::ResetTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::ResetTime(). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->ResetTime();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// wxDateTime & wxDateTime::Set(double jdn)
	static int _bind_Set_overload_1(lua_State *L) {
		if (!_lg_typecheck_Set_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::Set(double jdn) function, expected prototype:\nwxDateTime & wxDateTime::Set(double jdn)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double jdn=(double)lua_tonumber(L,2);

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::Set(double). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->Set(jdn);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// wxDateTime & wxDateTime::Set(unsigned short hour, unsigned short minute = 0, unsigned short second = 0, unsigned short millisec = 0)
	static int _bind_Set_overload_2(lua_State *L) {
		if (!_lg_typecheck_Set_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::Set(unsigned short hour, unsigned short minute = 0, unsigned short second = 0, unsigned short millisec = 0) function, expected prototype:\nwxDateTime & wxDateTime::Set(unsigned short hour, unsigned short minute = 0, unsigned short second = 0, unsigned short millisec = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned short hour=(unsigned short)lua_tointeger(L,2);
		unsigned short minute=luatop>2 ? (unsigned short)lua_tointeger(L,3) : (unsigned short)0;
		unsigned short second=luatop>3 ? (unsigned short)lua_tointeger(L,4) : (unsigned short)0;
		unsigned short millisec=luatop>4 ? (unsigned short)lua_tointeger(L,5) : (unsigned short)0;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::Set(unsigned short, unsigned short, unsigned short, unsigned short). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->Set(hour, minute, second, millisec);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// wxDateTime & wxDateTime::Set(unsigned short day, wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year, unsigned short hour = 0, unsigned short minute = 0, unsigned short second = 0, unsigned short millisec = 0)
	static int _bind_Set_overload_3(lua_State *L) {
		if (!_lg_typecheck_Set_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::Set(unsigned short day, wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year, unsigned short hour = 0, unsigned short minute = 0, unsigned short second = 0, unsigned short millisec = 0) function, expected prototype:\nwxDateTime & wxDateTime::Set(unsigned short day, wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year, unsigned short hour = 0, unsigned short minute = 0, unsigned short second = 0, unsigned short millisec = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned short day=(unsigned short)lua_tointeger(L,2);
		wxDateTime::Month month=luatop>2 ? (wxDateTime::Month)lua_tointeger(L,3) : (wxDateTime::Month)wxDateTime::Inv_Month;
		int year=luatop>3 ? (int)lua_tointeger(L,4) : (int)wxDateTime::Inv_Year;
		unsigned short hour=luatop>4 ? (unsigned short)lua_tointeger(L,5) : (unsigned short)0;
		unsigned short minute=luatop>5 ? (unsigned short)lua_tointeger(L,6) : (unsigned short)0;
		unsigned short second=luatop>6 ? (unsigned short)lua_tointeger(L,7) : (unsigned short)0;
		unsigned short millisec=luatop>7 ? (unsigned short)lua_tointeger(L,8) : (unsigned short)0;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::Set(unsigned short, wxDateTime::Month, int, unsigned short, unsigned short, unsigned short, unsigned short). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->Set(day, month, year, hour, minute, second, millisec);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxDateTime::Set
	static int _bind_Set(lua_State *L) {
		if (_lg_typecheck_Set_overload_1(L)) return _bind_Set_overload_1(L);
		if (_lg_typecheck_Set_overload_2(L)) return _bind_Set_overload_2(L);
		if (_lg_typecheck_Set_overload_3(L)) return _bind_Set_overload_3(L);

		luaL_error(L, "error in function Set, cannot match any of the overloads for function Set:\n  Set(double)\n  Set(unsigned short, unsigned short, unsigned short, unsigned short)\n  Set(unsigned short, wxDateTime::Month, int, unsigned short, unsigned short, unsigned short, unsigned short)\n");
		return 0;
	}

	// wxDateTime & wxDateTime::SetDay(unsigned short day)
	static int _bind_SetDay(lua_State *L) {
		if (!_lg_typecheck_SetDay(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::SetDay(unsigned short day) function, expected prototype:\nwxDateTime & wxDateTime::SetDay(unsigned short day)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short day=(unsigned short)lua_tointeger(L,2);

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::SetDay(unsigned short). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->SetDay(day);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// wxDateTime & wxDateTime::SetFromDOS(unsigned long ddt)
	static int _bind_SetFromDOS(lua_State *L) {
		if (!_lg_typecheck_SetFromDOS(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::SetFromDOS(unsigned long ddt) function, expected prototype:\nwxDateTime & wxDateTime::SetFromDOS(unsigned long ddt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long ddt=(unsigned long)lua_tonumber(L,2);

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::SetFromDOS(unsigned long). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->SetFromDOS(ddt);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// wxDateTime & wxDateTime::SetHour(unsigned short hour)
	static int _bind_SetHour(lua_State *L) {
		if (!_lg_typecheck_SetHour(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::SetHour(unsigned short hour) function, expected prototype:\nwxDateTime & wxDateTime::SetHour(unsigned short hour)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short hour=(unsigned short)lua_tointeger(L,2);

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::SetHour(unsigned short). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->SetHour(hour);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// wxDateTime & wxDateTime::SetMillisecond(unsigned short millisecond)
	static int _bind_SetMillisecond(lua_State *L) {
		if (!_lg_typecheck_SetMillisecond(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::SetMillisecond(unsigned short millisecond) function, expected prototype:\nwxDateTime & wxDateTime::SetMillisecond(unsigned short millisecond)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short millisecond=(unsigned short)lua_tointeger(L,2);

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::SetMillisecond(unsigned short). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->SetMillisecond(millisecond);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// wxDateTime & wxDateTime::SetMinute(unsigned short minute)
	static int _bind_SetMinute(lua_State *L) {
		if (!_lg_typecheck_SetMinute(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::SetMinute(unsigned short minute) function, expected prototype:\nwxDateTime & wxDateTime::SetMinute(unsigned short minute)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short minute=(unsigned short)lua_tointeger(L,2);

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::SetMinute(unsigned short). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->SetMinute(minute);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// wxDateTime & wxDateTime::SetMonth(wxDateTime::Month month)
	static int _bind_SetMonth(lua_State *L) {
		if (!_lg_typecheck_SetMonth(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::SetMonth(wxDateTime::Month month) function, expected prototype:\nwxDateTime & wxDateTime::SetMonth(wxDateTime::Month month)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDateTime::Month month=(wxDateTime::Month)lua_tointeger(L,2);

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::SetMonth(wxDateTime::Month). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->SetMonth(month);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// wxDateTime & wxDateTime::SetSecond(unsigned short second)
	static int _bind_SetSecond(lua_State *L) {
		if (!_lg_typecheck_SetSecond(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::SetSecond(unsigned short second) function, expected prototype:\nwxDateTime & wxDateTime::SetSecond(unsigned short second)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short second=(unsigned short)lua_tointeger(L,2);

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::SetSecond(unsigned short). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->SetSecond(second);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// wxDateTime & wxDateTime::SetToCurrent()
	static int _bind_SetToCurrent(lua_State *L) {
		if (!_lg_typecheck_SetToCurrent(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::SetToCurrent() function, expected prototype:\nwxDateTime & wxDateTime::SetToCurrent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::SetToCurrent(). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->SetToCurrent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// wxDateTime & wxDateTime::SetYear(int year)
	static int _bind_SetYear(lua_State *L) {
		if (!_lg_typecheck_SetYear(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::SetYear(int year) function, expected prototype:\nwxDateTime & wxDateTime::SetYear(int year)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int year=(int)lua_tointeger(L,2);

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::SetYear(int). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->SetYear(year);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// long unsigned int wxDateTime::GetAsDOS() const
	static int _bind_GetAsDOS(lua_State *L) {
		if (!_lg_typecheck_GetAsDOS(L)) {
			luaL_error(L, "luna typecheck failed in long unsigned int wxDateTime::GetAsDOS() const function, expected prototype:\nlong unsigned int wxDateTime::GetAsDOS() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long unsigned int wxDateTime::GetAsDOS() const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long unsigned int lret = self->GetAsDOS();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDateTime::GetCentury(const wxDateTime::TimeZone & tz = wxDateTime::Local) const
	static int _bind_GetCentury_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetCentury_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in int wxDateTime::GetCentury(const wxDateTime::TimeZone & tz = wxDateTime::Local) const function, expected prototype:\nint wxDateTime::GetCentury(const wxDateTime::TimeZone & tz = wxDateTime::Local) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDateTime::TimeZone tz=luatop>1 ? (const wxDateTime::TimeZone)lua_tointeger(L,2) : (const wxDateTime::TimeZone&)wxDateTime::Local;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDateTime::GetCentury(const wxDateTime::TimeZone &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetCentury(tz);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static int wxDateTime::GetCentury(int year)
	static int _bind_GetCentury_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetCentury_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static int wxDateTime::GetCentury(int year) function, expected prototype:\nstatic int wxDateTime::GetCentury(int year)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int year=(int)lua_tointeger(L,1);

		int lret = wxDateTime::GetCentury(year);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxDateTime::GetCentury
	static int _bind_GetCentury(lua_State *L) {
		if (_lg_typecheck_GetCentury_overload_1(L)) return _bind_GetCentury_overload_1(L);
		if (_lg_typecheck_GetCentury_overload_2(L)) return _bind_GetCentury_overload_2(L);

		luaL_error(L, "error in function GetCentury, cannot match any of the overloads for function GetCentury:\n  GetCentury(const wxDateTime::TimeZone &)\n  GetCentury(int)\n");
		return 0;
	}

	// wxDateTime wxDateTime::GetDateOnly() const
	static int _bind_GetDateOnly(lua_State *L) {
		if (!_lg_typecheck_GetDateOnly(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime wxDateTime::GetDateOnly() const function, expected prototype:\nwxDateTime wxDateTime::GetDateOnly() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime wxDateTime::GetDateOnly() const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateTime stack_lret = self->GetDateOnly();
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// short unsigned int wxDateTime::GetDay(const wxDateTime::TimeZone & tz = wxDateTime::Local) const
	static int _bind_GetDay(lua_State *L) {
		if (!_lg_typecheck_GetDay(L)) {
			luaL_error(L, "luna typecheck failed in short unsigned int wxDateTime::GetDay(const wxDateTime::TimeZone & tz = wxDateTime::Local) const function, expected prototype:\nshort unsigned int wxDateTime::GetDay(const wxDateTime::TimeZone & tz = wxDateTime::Local) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDateTime::TimeZone tz=luatop>1 ? (const wxDateTime::TimeZone)lua_tointeger(L,2) : (const wxDateTime::TimeZone&)wxDateTime::Local;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short unsigned int wxDateTime::GetDay(const wxDateTime::TimeZone &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short unsigned int lret = self->GetDay(tz);
		lua_pushnumber(L,lret);

		return 1;
	}

	// short unsigned int wxDateTime::GetDayOfYear(const wxDateTime::TimeZone & tz = wxDateTime::Local) const
	static int _bind_GetDayOfYear(lua_State *L) {
		if (!_lg_typecheck_GetDayOfYear(L)) {
			luaL_error(L, "luna typecheck failed in short unsigned int wxDateTime::GetDayOfYear(const wxDateTime::TimeZone & tz = wxDateTime::Local) const function, expected prototype:\nshort unsigned int wxDateTime::GetDayOfYear(const wxDateTime::TimeZone & tz = wxDateTime::Local) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDateTime::TimeZone tz=luatop>1 ? (const wxDateTime::TimeZone)lua_tointeger(L,2) : (const wxDateTime::TimeZone&)wxDateTime::Local;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short unsigned int wxDateTime::GetDayOfYear(const wxDateTime::TimeZone &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short unsigned int lret = self->GetDayOfYear(tz);
		lua_pushnumber(L,lret);

		return 1;
	}

	// short unsigned int wxDateTime::GetHour(const wxDateTime::TimeZone & tz = wxDateTime::Local) const
	static int _bind_GetHour(lua_State *L) {
		if (!_lg_typecheck_GetHour(L)) {
			luaL_error(L, "luna typecheck failed in short unsigned int wxDateTime::GetHour(const wxDateTime::TimeZone & tz = wxDateTime::Local) const function, expected prototype:\nshort unsigned int wxDateTime::GetHour(const wxDateTime::TimeZone & tz = wxDateTime::Local) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDateTime::TimeZone tz=luatop>1 ? (const wxDateTime::TimeZone)lua_tointeger(L,2) : (const wxDateTime::TimeZone&)wxDateTime::Local;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short unsigned int wxDateTime::GetHour(const wxDateTime::TimeZone &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short unsigned int lret = self->GetHour(tz);
		lua_pushnumber(L,lret);

		return 1;
	}

	// short unsigned int wxDateTime::GetMillisecond(const wxDateTime::TimeZone & tz = wxDateTime::Local) const
	static int _bind_GetMillisecond(lua_State *L) {
		if (!_lg_typecheck_GetMillisecond(L)) {
			luaL_error(L, "luna typecheck failed in short unsigned int wxDateTime::GetMillisecond(const wxDateTime::TimeZone & tz = wxDateTime::Local) const function, expected prototype:\nshort unsigned int wxDateTime::GetMillisecond(const wxDateTime::TimeZone & tz = wxDateTime::Local) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDateTime::TimeZone tz=luatop>1 ? (const wxDateTime::TimeZone)lua_tointeger(L,2) : (const wxDateTime::TimeZone&)wxDateTime::Local;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short unsigned int wxDateTime::GetMillisecond(const wxDateTime::TimeZone &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short unsigned int lret = self->GetMillisecond(tz);
		lua_pushnumber(L,lret);

		return 1;
	}

	// short unsigned int wxDateTime::GetMinute(const wxDateTime::TimeZone & tz = wxDateTime::Local) const
	static int _bind_GetMinute(lua_State *L) {
		if (!_lg_typecheck_GetMinute(L)) {
			luaL_error(L, "luna typecheck failed in short unsigned int wxDateTime::GetMinute(const wxDateTime::TimeZone & tz = wxDateTime::Local) const function, expected prototype:\nshort unsigned int wxDateTime::GetMinute(const wxDateTime::TimeZone & tz = wxDateTime::Local) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDateTime::TimeZone tz=luatop>1 ? (const wxDateTime::TimeZone)lua_tointeger(L,2) : (const wxDateTime::TimeZone&)wxDateTime::Local;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short unsigned int wxDateTime::GetMinute(const wxDateTime::TimeZone &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short unsigned int lret = self->GetMinute(tz);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDateTime::Month wxDateTime::GetMonth(const wxDateTime::TimeZone & tz = wxDateTime::Local) const
	static int _bind_GetMonth(lua_State *L) {
		if (!_lg_typecheck_GetMonth(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime::Month wxDateTime::GetMonth(const wxDateTime::TimeZone & tz = wxDateTime::Local) const function, expected prototype:\nwxDateTime::Month wxDateTime::GetMonth(const wxDateTime::TimeZone & tz = wxDateTime::Local) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDateTime::TimeZone tz=luatop>1 ? (const wxDateTime::TimeZone)lua_tointeger(L,2) : (const wxDateTime::TimeZone&)wxDateTime::Local;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime::Month wxDateTime::GetMonth(const wxDateTime::TimeZone &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateTime::Month lret = self->GetMonth(tz);
		lua_pushnumber(L,lret);

		return 1;
	}

	// short unsigned int wxDateTime::GetSecond(const wxDateTime::TimeZone & tz = wxDateTime::Local) const
	static int _bind_GetSecond(lua_State *L) {
		if (!_lg_typecheck_GetSecond(L)) {
			luaL_error(L, "luna typecheck failed in short unsigned int wxDateTime::GetSecond(const wxDateTime::TimeZone & tz = wxDateTime::Local) const function, expected prototype:\nshort unsigned int wxDateTime::GetSecond(const wxDateTime::TimeZone & tz = wxDateTime::Local) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDateTime::TimeZone tz=luatop>1 ? (const wxDateTime::TimeZone)lua_tointeger(L,2) : (const wxDateTime::TimeZone&)wxDateTime::Local;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short unsigned int wxDateTime::GetSecond(const wxDateTime::TimeZone &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short unsigned int lret = self->GetSecond(tz);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDateTime::Tm wxDateTime::GetTm(const wxDateTime::TimeZone & tz = wxDateTime::Local) const
	static int _bind_GetTm(lua_State *L) {
		if (!_lg_typecheck_GetTm(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime::Tm wxDateTime::GetTm(const wxDateTime::TimeZone & tz = wxDateTime::Local) const function, expected prototype:\nwxDateTime::Tm wxDateTime::GetTm(const wxDateTime::TimeZone & tz = wxDateTime::Local) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDateTime::TimeZone tz=luatop>1 ? (const wxDateTime::TimeZone)lua_tointeger(L,2) : (const wxDateTime::TimeZone&)wxDateTime::Local;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime::Tm wxDateTime::GetTm(const wxDateTime::TimeZone &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateTime::Tm stack_lret = self->GetTm(tz);
		wxDateTime::Tm* lret = new wxDateTime::Tm(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime::Tm >::push(L,lret,true);

		return 1;
	}

	// wxDateTime::WeekDay wxDateTime::GetWeekDay(const wxDateTime::TimeZone & tz = wxDateTime::Local) const
	static int _bind_GetWeekDay_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetWeekDay_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime::WeekDay wxDateTime::GetWeekDay(const wxDateTime::TimeZone & tz = wxDateTime::Local) const function, expected prototype:\nwxDateTime::WeekDay wxDateTime::GetWeekDay(const wxDateTime::TimeZone & tz = wxDateTime::Local) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDateTime::TimeZone tz=luatop>1 ? (const wxDateTime::TimeZone)lua_tointeger(L,2) : (const wxDateTime::TimeZone&)wxDateTime::Local;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime::WeekDay wxDateTime::GetWeekDay(const wxDateTime::TimeZone &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateTime::WeekDay lret = self->GetWeekDay(tz);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDateTime wxDateTime::GetWeekDay(wxDateTime::WeekDay weekday, int n = 1, wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year) const
	static int _bind_GetWeekDay_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetWeekDay_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime wxDateTime::GetWeekDay(wxDateTime::WeekDay weekday, int n = 1, wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year) const function, expected prototype:\nwxDateTime wxDateTime::GetWeekDay(wxDateTime::WeekDay weekday, int n = 1, wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDateTime::WeekDay weekday=(wxDateTime::WeekDay)lua_tointeger(L,2);
		int n=luatop>2 ? (int)lua_tointeger(L,3) : (int)1;
		wxDateTime::Month month=luatop>3 ? (wxDateTime::Month)lua_tointeger(L,4) : (wxDateTime::Month)wxDateTime::Inv_Month;
		int year=luatop>4 ? (int)lua_tointeger(L,5) : (int)wxDateTime::Inv_Year;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime wxDateTime::GetWeekDay(wxDateTime::WeekDay, int, wxDateTime::Month, int) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateTime stack_lret = self->GetWeekDay(weekday, n, month, year);
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxDateTime::GetWeekDay
	static int _bind_GetWeekDay(lua_State *L) {
		if (_lg_typecheck_GetWeekDay_overload_1(L)) return _bind_GetWeekDay_overload_1(L);
		if (_lg_typecheck_GetWeekDay_overload_2(L)) return _bind_GetWeekDay_overload_2(L);

		luaL_error(L, "error in function GetWeekDay, cannot match any of the overloads for function GetWeekDay:\n  GetWeekDay(const wxDateTime::TimeZone &)\n  GetWeekDay(wxDateTime::WeekDay, int, wxDateTime::Month, int)\n");
		return 0;
	}

	// unsigned short wxDateTime::GetWeekOfMonth(wxDateTime::WeekFlags flags = wxDateTime::Monday_First, const wxDateTime::TimeZone & tz = wxDateTime::Local) const
	static int _bind_GetWeekOfMonth(lua_State *L) {
		if (!_lg_typecheck_GetWeekOfMonth(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short wxDateTime::GetWeekOfMonth(wxDateTime::WeekFlags flags = wxDateTime::Monday_First, const wxDateTime::TimeZone & tz = wxDateTime::Local) const function, expected prototype:\nunsigned short wxDateTime::GetWeekOfMonth(wxDateTime::WeekFlags flags = wxDateTime::Monday_First, const wxDateTime::TimeZone & tz = wxDateTime::Local) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDateTime::WeekFlags flags=luatop>1 ? (wxDateTime::WeekFlags)lua_tointeger(L,2) : (wxDateTime::WeekFlags)wxDateTime::Monday_First;
		const wxDateTime::TimeZone tz=luatop>2 ? (const wxDateTime::TimeZone)lua_tointeger(L,3) : (const wxDateTime::TimeZone&)wxDateTime::Local;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short wxDateTime::GetWeekOfMonth(wxDateTime::WeekFlags, const wxDateTime::TimeZone &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->GetWeekOfMonth(flags, tz);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short wxDateTime::GetWeekOfYear(wxDateTime::WeekFlags flags = wxDateTime::Monday_First, const wxDateTime::TimeZone & tz = wxDateTime::Local) const
	static int _bind_GetWeekOfYear(lua_State *L) {
		if (!_lg_typecheck_GetWeekOfYear(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short wxDateTime::GetWeekOfYear(wxDateTime::WeekFlags flags = wxDateTime::Monday_First, const wxDateTime::TimeZone & tz = wxDateTime::Local) const function, expected prototype:\nunsigned short wxDateTime::GetWeekOfYear(wxDateTime::WeekFlags flags = wxDateTime::Monday_First, const wxDateTime::TimeZone & tz = wxDateTime::Local) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDateTime::WeekFlags flags=luatop>1 ? (wxDateTime::WeekFlags)lua_tointeger(L,2) : (wxDateTime::WeekFlags)wxDateTime::Monday_First;
		const wxDateTime::TimeZone tz=luatop>2 ? (const wxDateTime::TimeZone)lua_tointeger(L,3) : (const wxDateTime::TimeZone&)wxDateTime::Local;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short wxDateTime::GetWeekOfYear(wxDateTime::WeekFlags, const wxDateTime::TimeZone &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->GetWeekOfYear(flags, tz);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDateTime::GetYear(const wxDateTime::TimeZone & tz = wxDateTime::Local) const
	static int _bind_GetYear(lua_State *L) {
		if (!_lg_typecheck_GetYear(L)) {
			luaL_error(L, "luna typecheck failed in int wxDateTime::GetYear(const wxDateTime::TimeZone & tz = wxDateTime::Local) const function, expected prototype:\nint wxDateTime::GetYear(const wxDateTime::TimeZone & tz = wxDateTime::Local) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDateTime::TimeZone tz=luatop>1 ? (const wxDateTime::TimeZone)lua_tointeger(L,2) : (const wxDateTime::TimeZone&)wxDateTime::Local;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDateTime::GetYear(const wxDateTime::TimeZone &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetYear(tz);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxDateTime::IsValid() const
	static int _bind_IsValid(lua_State *L) {
		if (!_lg_typecheck_IsValid(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDateTime::IsValid() const function, expected prototype:\nbool wxDateTime::IsValid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDateTime::IsValid() const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsValid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDateTime::IsWorkDay(wxDateTime::Country country = wxDateTime::Country_Default) const
	static int _bind_IsWorkDay(lua_State *L) {
		if (!_lg_typecheck_IsWorkDay(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDateTime::IsWorkDay(wxDateTime::Country country = wxDateTime::Country_Default) const function, expected prototype:\nbool wxDateTime::IsWorkDay(wxDateTime::Country country = wxDateTime::Country_Default) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDateTime::Country country=luatop>1 ? (wxDateTime::Country)lua_tointeger(L,2) : (wxDateTime::Country)wxDateTime::Country_Default;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDateTime::IsWorkDay(wxDateTime::Country) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsWorkDay(country);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDateTime::IsEarlierThan(const wxDateTime & datetime) const
	static int _bind_IsEarlierThan(lua_State *L) {
		if (!_lg_typecheck_IsEarlierThan(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDateTime::IsEarlierThan(const wxDateTime & datetime) const function, expected prototype:\nbool wxDateTime::IsEarlierThan(const wxDateTime & datetime) const\nClass arguments details:\narg 1 ID = 57497519\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateTime* datetime_ptr=(Luna< wxDateTime >::check(L,2));
		if( !datetime_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg datetime in wxDateTime::IsEarlierThan function");
		}
		const wxDateTime & datetime=*datetime_ptr;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDateTime::IsEarlierThan(const wxDateTime &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsEarlierThan(datetime);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDateTime::IsEqualTo(const wxDateTime & datetime) const
	static int _bind_IsEqualTo(lua_State *L) {
		if (!_lg_typecheck_IsEqualTo(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDateTime::IsEqualTo(const wxDateTime & datetime) const function, expected prototype:\nbool wxDateTime::IsEqualTo(const wxDateTime & datetime) const\nClass arguments details:\narg 1 ID = 57497519\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateTime* datetime_ptr=(Luna< wxDateTime >::check(L,2));
		if( !datetime_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg datetime in wxDateTime::IsEqualTo function");
		}
		const wxDateTime & datetime=*datetime_ptr;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDateTime::IsEqualTo(const wxDateTime &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsEqualTo(datetime);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDateTime::IsEqualUpTo(const wxDateTime & dt, const wxTimeSpan & ts) const
	static int _bind_IsEqualUpTo(lua_State *L) {
		if (!_lg_typecheck_IsEqualUpTo(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDateTime::IsEqualUpTo(const wxDateTime & dt, const wxTimeSpan & ts) const function, expected prototype:\nbool wxDateTime::IsEqualUpTo(const wxDateTime & dt, const wxTimeSpan & ts) const\nClass arguments details:\narg 1 ID = 57497519\narg 2 ID = 58889849\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateTime* dt_ptr=(Luna< wxDateTime >::check(L,2));
		if( !dt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dt in wxDateTime::IsEqualUpTo function");
		}
		const wxDateTime & dt=*dt_ptr;
		const wxTimeSpan* ts_ptr=(Luna< wxTimeSpan >::check(L,3));
		if( !ts_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ts in wxDateTime::IsEqualUpTo function");
		}
		const wxTimeSpan & ts=*ts_ptr;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDateTime::IsEqualUpTo(const wxDateTime &, const wxTimeSpan &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsEqualUpTo(dt, ts);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDateTime::IsLaterThan(const wxDateTime & datetime) const
	static int _bind_IsLaterThan(lua_State *L) {
		if (!_lg_typecheck_IsLaterThan(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDateTime::IsLaterThan(const wxDateTime & datetime) const function, expected prototype:\nbool wxDateTime::IsLaterThan(const wxDateTime & datetime) const\nClass arguments details:\narg 1 ID = 57497519\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateTime* datetime_ptr=(Luna< wxDateTime >::check(L,2));
		if( !datetime_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg datetime in wxDateTime::IsLaterThan function");
		}
		const wxDateTime & datetime=*datetime_ptr;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDateTime::IsLaterThan(const wxDateTime &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsLaterThan(datetime);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDateTime::IsSameDate(const wxDateTime & dt) const
	static int _bind_IsSameDate(lua_State *L) {
		if (!_lg_typecheck_IsSameDate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDateTime::IsSameDate(const wxDateTime & dt) const function, expected prototype:\nbool wxDateTime::IsSameDate(const wxDateTime & dt) const\nClass arguments details:\narg 1 ID = 57497519\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateTime* dt_ptr=(Luna< wxDateTime >::check(L,2));
		if( !dt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dt in wxDateTime::IsSameDate function");
		}
		const wxDateTime & dt=*dt_ptr;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDateTime::IsSameDate(const wxDateTime &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsSameDate(dt);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDateTime::IsSameTime(const wxDateTime & dt) const
	static int _bind_IsSameTime(lua_State *L) {
		if (!_lg_typecheck_IsSameTime(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDateTime::IsSameTime(const wxDateTime & dt) const function, expected prototype:\nbool wxDateTime::IsSameTime(const wxDateTime & dt) const\nClass arguments details:\narg 1 ID = 57497519\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateTime* dt_ptr=(Luna< wxDateTime >::check(L,2));
		if( !dt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dt in wxDateTime::IsSameTime function");
		}
		const wxDateTime & dt=*dt_ptr;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDateTime::IsSameTime(const wxDateTime &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsSameTime(dt);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDateTime::IsStrictlyBetween(const wxDateTime & t1, const wxDateTime & t2) const
	static int _bind_IsStrictlyBetween(lua_State *L) {
		if (!_lg_typecheck_IsStrictlyBetween(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDateTime::IsStrictlyBetween(const wxDateTime & t1, const wxDateTime & t2) const function, expected prototype:\nbool wxDateTime::IsStrictlyBetween(const wxDateTime & t1, const wxDateTime & t2) const\nClass arguments details:\narg 1 ID = 57497519\narg 2 ID = 57497519\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateTime* t1_ptr=(Luna< wxDateTime >::check(L,2));
		if( !t1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t1 in wxDateTime::IsStrictlyBetween function");
		}
		const wxDateTime & t1=*t1_ptr;
		const wxDateTime* t2_ptr=(Luna< wxDateTime >::check(L,3));
		if( !t2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t2 in wxDateTime::IsStrictlyBetween function");
		}
		const wxDateTime & t2=*t2_ptr;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDateTime::IsStrictlyBetween(const wxDateTime &, const wxDateTime &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsStrictlyBetween(t1, t2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDateTime::IsBetween(const wxDateTime & t1, const wxDateTime & t2) const
	static int _bind_IsBetween(lua_State *L) {
		if (!_lg_typecheck_IsBetween(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDateTime::IsBetween(const wxDateTime & t1, const wxDateTime & t2) const function, expected prototype:\nbool wxDateTime::IsBetween(const wxDateTime & t1, const wxDateTime & t2) const\nClass arguments details:\narg 1 ID = 57497519\narg 2 ID = 57497519\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateTime* t1_ptr=(Luna< wxDateTime >::check(L,2));
		if( !t1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t1 in wxDateTime::IsBetween function");
		}
		const wxDateTime & t1=*t1_ptr;
		const wxDateTime* t2_ptr=(Luna< wxDateTime >::check(L,3));
		if( !t2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t2 in wxDateTime::IsBetween function");
		}
		const wxDateTime & t2=*t2_ptr;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDateTime::IsBetween(const wxDateTime &, const wxDateTime &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsBetween(t1, t2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDateTime wxDateTime::Add(const wxDateSpan & diff) const
	static int _bind_Add_overload_1(lua_State *L) {
		if (!_lg_typecheck_Add_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime wxDateTime::Add(const wxDateSpan & diff) const function, expected prototype:\nwxDateTime wxDateTime::Add(const wxDateSpan & diff) const\nClass arguments details:\narg 1 ID = 57474092\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateSpan* diff_ptr=(Luna< wxDateSpan >::check(L,2));
		if( !diff_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg diff in wxDateTime::Add function");
		}
		const wxDateSpan & diff=*diff_ptr;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime wxDateTime::Add(const wxDateSpan &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateTime stack_lret = self->Add(diff);
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// wxDateTime wxDateTime::Add(const wxDateSpan & diff)
	static int _bind_Add_overload_2(lua_State *L) {
		if (!_lg_typecheck_Add_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime wxDateTime::Add(const wxDateSpan & diff) function, expected prototype:\nwxDateTime wxDateTime::Add(const wxDateSpan & diff)\nClass arguments details:\narg 1 ID = 57474092\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateSpan* diff_ptr=(Luna< wxDateSpan >::check(L,2));
		if( !diff_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg diff in wxDateTime::Add function");
		}
		const wxDateSpan & diff=*diff_ptr;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime wxDateTime::Add(const wxDateSpan &). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateTime stack_lret = self->Add(diff);
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// wxDateTime wxDateTime::Add(const wxTimeSpan & diff) const
	static int _bind_Add_overload_3(lua_State *L) {
		if (!_lg_typecheck_Add_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime wxDateTime::Add(const wxTimeSpan & diff) const function, expected prototype:\nwxDateTime wxDateTime::Add(const wxTimeSpan & diff) const\nClass arguments details:\narg 1 ID = 58889849\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTimeSpan* diff_ptr=(Luna< wxTimeSpan >::check(L,2));
		if( !diff_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg diff in wxDateTime::Add function");
		}
		const wxTimeSpan & diff=*diff_ptr;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime wxDateTime::Add(const wxTimeSpan &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateTime stack_lret = self->Add(diff);
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// wxDateTime & wxDateTime::Add(const wxTimeSpan & diff)
	static int _bind_Add_overload_4(lua_State *L) {
		if (!_lg_typecheck_Add_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::Add(const wxTimeSpan & diff) function, expected prototype:\nwxDateTime & wxDateTime::Add(const wxTimeSpan & diff)\nClass arguments details:\narg 1 ID = 58889849\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTimeSpan* diff_ptr=(Luna< wxTimeSpan >::check(L,2));
		if( !diff_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg diff in wxDateTime::Add function");
		}
		const wxTimeSpan & diff=*diff_ptr;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::Add(const wxTimeSpan &). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->Add(diff);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxDateTime::Add
	static int _bind_Add(lua_State *L) {
		if (_lg_typecheck_Add_overload_1(L)) return _bind_Add_overload_1(L);
		if (_lg_typecheck_Add_overload_2(L)) return _bind_Add_overload_2(L);
		if (_lg_typecheck_Add_overload_3(L)) return _bind_Add_overload_3(L);
		if (_lg_typecheck_Add_overload_4(L)) return _bind_Add_overload_4(L);

		luaL_error(L, "error in function Add, cannot match any of the overloads for function Add:\n  Add(const wxDateSpan &)\n  Add(const wxDateSpan &)\n  Add(const wxTimeSpan &)\n  Add(const wxTimeSpan &)\n");
		return 0;
	}

	// wxDateTime wxDateTime::Subtract(const wxTimeSpan & diff) const
	static int _bind_Subtract_overload_1(lua_State *L) {
		if (!_lg_typecheck_Subtract_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime wxDateTime::Subtract(const wxTimeSpan & diff) const function, expected prototype:\nwxDateTime wxDateTime::Subtract(const wxTimeSpan & diff) const\nClass arguments details:\narg 1 ID = 58889849\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTimeSpan* diff_ptr=(Luna< wxTimeSpan >::check(L,2));
		if( !diff_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg diff in wxDateTime::Subtract function");
		}
		const wxTimeSpan & diff=*diff_ptr;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime wxDateTime::Subtract(const wxTimeSpan &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateTime stack_lret = self->Subtract(diff);
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// wxDateTime & wxDateTime::Subtract(const wxTimeSpan & diff)
	static int _bind_Subtract_overload_2(lua_State *L) {
		if (!_lg_typecheck_Subtract_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::Subtract(const wxTimeSpan & diff) function, expected prototype:\nwxDateTime & wxDateTime::Subtract(const wxTimeSpan & diff)\nClass arguments details:\narg 1 ID = 58889849\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTimeSpan* diff_ptr=(Luna< wxTimeSpan >::check(L,2));
		if( !diff_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg diff in wxDateTime::Subtract function");
		}
		const wxTimeSpan & diff=*diff_ptr;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::Subtract(const wxTimeSpan &). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->Subtract(diff);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// wxDateTime wxDateTime::Subtract(const wxDateSpan & diff) const
	static int _bind_Subtract_overload_3(lua_State *L) {
		if (!_lg_typecheck_Subtract_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime wxDateTime::Subtract(const wxDateSpan & diff) const function, expected prototype:\nwxDateTime wxDateTime::Subtract(const wxDateSpan & diff) const\nClass arguments details:\narg 1 ID = 57474092\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateSpan* diff_ptr=(Luna< wxDateSpan >::check(L,2));
		if( !diff_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg diff in wxDateTime::Subtract function");
		}
		const wxDateSpan & diff=*diff_ptr;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime wxDateTime::Subtract(const wxDateSpan &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateTime stack_lret = self->Subtract(diff);
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// wxDateTime & wxDateTime::Subtract(const wxDateSpan & diff)
	static int _bind_Subtract_overload_4(lua_State *L) {
		if (!_lg_typecheck_Subtract_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::Subtract(const wxDateSpan & diff) function, expected prototype:\nwxDateTime & wxDateTime::Subtract(const wxDateSpan & diff)\nClass arguments details:\narg 1 ID = 57474092\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateSpan* diff_ptr=(Luna< wxDateSpan >::check(L,2));
		if( !diff_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg diff in wxDateTime::Subtract function");
		}
		const wxDateSpan & diff=*diff_ptr;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::Subtract(const wxDateSpan &). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->Subtract(diff);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// wxTimeSpan wxDateTime::Subtract(const wxDateTime & dt) const
	static int _bind_Subtract_overload_5(lua_State *L) {
		if (!_lg_typecheck_Subtract_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxTimeSpan wxDateTime::Subtract(const wxDateTime & dt) const function, expected prototype:\nwxTimeSpan wxDateTime::Subtract(const wxDateTime & dt) const\nClass arguments details:\narg 1 ID = 57497519\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateTime* dt_ptr=(Luna< wxDateTime >::check(L,2));
		if( !dt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dt in wxDateTime::Subtract function");
		}
		const wxDateTime & dt=*dt_ptr;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTimeSpan wxDateTime::Subtract(const wxDateTime &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTimeSpan stack_lret = self->Subtract(dt);
		wxTimeSpan* lret = new wxTimeSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimeSpan >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxDateTime::Subtract
	static int _bind_Subtract(lua_State *L) {
		if (_lg_typecheck_Subtract_overload_1(L)) return _bind_Subtract_overload_1(L);
		if (_lg_typecheck_Subtract_overload_2(L)) return _bind_Subtract_overload_2(L);
		if (_lg_typecheck_Subtract_overload_3(L)) return _bind_Subtract_overload_3(L);
		if (_lg_typecheck_Subtract_overload_4(L)) return _bind_Subtract_overload_4(L);
		if (_lg_typecheck_Subtract_overload_5(L)) return _bind_Subtract_overload_5(L);

		luaL_error(L, "error in function Subtract, cannot match any of the overloads for function Subtract:\n  Subtract(const wxTimeSpan &)\n  Subtract(const wxTimeSpan &)\n  Subtract(const wxDateSpan &)\n  Subtract(const wxDateSpan &)\n  Subtract(const wxDateTime &)\n");
		return 0;
	}

	// wxString wxDateTime::Format(const wxString & format = wxDefaultDateTimeFormat, const wxDateTime::TimeZone & tz = wxDateTime::Local) const
	static int _bind_Format(lua_State *L) {
		if (!_lg_typecheck_Format(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDateTime::Format(const wxString & format = wxDefaultDateTimeFormat, const wxDateTime::TimeZone & tz = wxDateTime::Local) const function, expected prototype:\nwxString wxDateTime::Format(const wxString & format = wxDefaultDateTimeFormat, const wxDateTime::TimeZone & tz = wxDateTime::Local) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString format(lua_tostring(L,2),lua_objlen(L,2));
		const wxDateTime::TimeZone tz=luatop>2 ? (const wxDateTime::TimeZone)lua_tointeger(L,3) : (const wxDateTime::TimeZone&)wxDateTime::Local;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDateTime::Format(const wxString &, const wxDateTime::TimeZone &) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->Format(format, tz);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxDateTime::FormatDate() const
	static int _bind_FormatDate(lua_State *L) {
		if (!_lg_typecheck_FormatDate(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDateTime::FormatDate() const function, expected prototype:\nwxString wxDateTime::FormatDate() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDateTime::FormatDate() const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->FormatDate();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxDateTime::FormatISOCombined(char sep = 'T') const
	static int _bind_FormatISOCombined(lua_State *L) {
		if (!_lg_typecheck_FormatISOCombined(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDateTime::FormatISOCombined(char sep = 'T') const function, expected prototype:\nwxString wxDateTime::FormatISOCombined(char sep = 'T') const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		char sep=luatop>1 ? (char)lua_tointeger(L,2) : (char)'T';

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDateTime::FormatISOCombined(char) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->FormatISOCombined(sep);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxDateTime::FormatISODate() const
	static int _bind_FormatISODate(lua_State *L) {
		if (!_lg_typecheck_FormatISODate(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDateTime::FormatISODate() const function, expected prototype:\nwxString wxDateTime::FormatISODate() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDateTime::FormatISODate() const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->FormatISODate();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxDateTime::FormatISOTime() const
	static int _bind_FormatISOTime(lua_State *L) {
		if (!_lg_typecheck_FormatISOTime(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDateTime::FormatISOTime() const function, expected prototype:\nwxString wxDateTime::FormatISOTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDateTime::FormatISOTime() const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->FormatISOTime();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxDateTime::FormatTime() const
	static int _bind_FormatTime(lua_State *L) {
		if (!_lg_typecheck_FormatTime(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDateTime::FormatTime() const function, expected prototype:\nwxString wxDateTime::FormatTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDateTime::FormatTime() const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->FormatTime();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxDateTime::ParseISOCombined(const wxString & date, char sep = 'T')
	static int _bind_ParseISOCombined(lua_State *L) {
		if (!_lg_typecheck_ParseISOCombined(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDateTime::ParseISOCombined(const wxString & date, char sep = 'T') function, expected prototype:\nbool wxDateTime::ParseISOCombined(const wxString & date, char sep = 'T')\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString date(lua_tostring(L,2),lua_objlen(L,2));
		char sep=luatop>2 ? (char)lua_tointeger(L,3) : (char)'T';

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDateTime::ParseISOCombined(const wxString &, char). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ParseISOCombined(date, sep);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDateTime::ParseISODate(const wxString & date)
	static int _bind_ParseISODate(lua_State *L) {
		if (!_lg_typecheck_ParseISODate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDateTime::ParseISODate(const wxString & date) function, expected prototype:\nbool wxDateTime::ParseISODate(const wxString & date)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString date(lua_tostring(L,2),lua_objlen(L,2));

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDateTime::ParseISODate(const wxString &). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ParseISODate(date);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDateTime::ParseISOTime(const wxString & date)
	static int _bind_ParseISOTime(lua_State *L) {
		if (!_lg_typecheck_ParseISOTime(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDateTime::ParseISOTime(const wxString & date) function, expected prototype:\nbool wxDateTime::ParseISOTime(const wxString & date)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString date(lua_tostring(L,2),lua_objlen(L,2));

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDateTime::ParseISOTime(const wxString &). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ParseISOTime(date);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDateTime wxDateTime::GetLastMonthDay(wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year) const
	static int _bind_GetLastMonthDay(lua_State *L) {
		if (!_lg_typecheck_GetLastMonthDay(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime wxDateTime::GetLastMonthDay(wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year) const function, expected prototype:\nwxDateTime wxDateTime::GetLastMonthDay(wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDateTime::Month month=luatop>1 ? (wxDateTime::Month)lua_tointeger(L,2) : (wxDateTime::Month)wxDateTime::Inv_Month;
		int year=luatop>2 ? (int)lua_tointeger(L,3) : (int)wxDateTime::Inv_Year;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime wxDateTime::GetLastMonthDay(wxDateTime::Month, int) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateTime stack_lret = self->GetLastMonthDay(month, year);
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// wxDateTime wxDateTime::GetLastWeekDay(wxDateTime::WeekDay weekday, wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year)
	static int _bind_GetLastWeekDay(lua_State *L) {
		if (!_lg_typecheck_GetLastWeekDay(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime wxDateTime::GetLastWeekDay(wxDateTime::WeekDay weekday, wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year) function, expected prototype:\nwxDateTime wxDateTime::GetLastWeekDay(wxDateTime::WeekDay weekday, wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDateTime::WeekDay weekday=(wxDateTime::WeekDay)lua_tointeger(L,2);
		wxDateTime::Month month=luatop>2 ? (wxDateTime::Month)lua_tointeger(L,3) : (wxDateTime::Month)wxDateTime::Inv_Month;
		int year=luatop>3 ? (int)lua_tointeger(L,4) : (int)wxDateTime::Inv_Year;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime wxDateTime::GetLastWeekDay(wxDateTime::WeekDay, wxDateTime::Month, int). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateTime stack_lret = self->GetLastWeekDay(weekday, month, year);
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// wxDateTime wxDateTime::GetNextWeekDay(wxDateTime::WeekDay weekday) const
	static int _bind_GetNextWeekDay(lua_State *L) {
		if (!_lg_typecheck_GetNextWeekDay(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime wxDateTime::GetNextWeekDay(wxDateTime::WeekDay weekday) const function, expected prototype:\nwxDateTime wxDateTime::GetNextWeekDay(wxDateTime::WeekDay weekday) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDateTime::WeekDay weekday=(wxDateTime::WeekDay)lua_tointeger(L,2);

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime wxDateTime::GetNextWeekDay(wxDateTime::WeekDay) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateTime stack_lret = self->GetNextWeekDay(weekday);
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// wxDateTime wxDateTime::GetPrevWeekDay(wxDateTime::WeekDay weekday) const
	static int _bind_GetPrevWeekDay(lua_State *L) {
		if (!_lg_typecheck_GetPrevWeekDay(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime wxDateTime::GetPrevWeekDay(wxDateTime::WeekDay weekday) const function, expected prototype:\nwxDateTime wxDateTime::GetPrevWeekDay(wxDateTime::WeekDay weekday) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDateTime::WeekDay weekday=(wxDateTime::WeekDay)lua_tointeger(L,2);

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime wxDateTime::GetPrevWeekDay(wxDateTime::WeekDay) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateTime stack_lret = self->GetPrevWeekDay(weekday);
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// wxDateTime wxDateTime::GetWeekDayInSameWeek(wxDateTime::WeekDay weekday, wxDateTime::WeekFlags flags = wxDateTime::Monday_First) const
	static int _bind_GetWeekDayInSameWeek(lua_State *L) {
		if (!_lg_typecheck_GetWeekDayInSameWeek(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime wxDateTime::GetWeekDayInSameWeek(wxDateTime::WeekDay weekday, wxDateTime::WeekFlags flags = wxDateTime::Monday_First) const function, expected prototype:\nwxDateTime wxDateTime::GetWeekDayInSameWeek(wxDateTime::WeekDay weekday, wxDateTime::WeekFlags flags = wxDateTime::Monday_First) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDateTime::WeekDay weekday=(wxDateTime::WeekDay)lua_tointeger(L,2);
		wxDateTime::WeekFlags flags=luatop>2 ? (wxDateTime::WeekFlags)lua_tointeger(L,3) : (wxDateTime::WeekFlags)wxDateTime::Monday_First;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime wxDateTime::GetWeekDayInSameWeek(wxDateTime::WeekDay, wxDateTime::WeekFlags) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateTime stack_lret = self->GetWeekDayInSameWeek(weekday, flags);
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// wxDateTime wxDateTime::GetYearDay(unsigned short yday) const
	static int _bind_GetYearDay(lua_State *L) {
		if (!_lg_typecheck_GetYearDay(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime wxDateTime::GetYearDay(unsigned short yday) const function, expected prototype:\nwxDateTime wxDateTime::GetYearDay(unsigned short yday) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short yday=(unsigned short)lua_tointeger(L,2);

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime wxDateTime::GetYearDay(unsigned short) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateTime stack_lret = self->GetYearDay(yday);
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// wxDateTime & wxDateTime::SetToLastMonthDay(wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year)
	static int _bind_SetToLastMonthDay(lua_State *L) {
		if (!_lg_typecheck_SetToLastMonthDay(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::SetToLastMonthDay(wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year) function, expected prototype:\nwxDateTime & wxDateTime::SetToLastMonthDay(wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDateTime::Month month=luatop>1 ? (wxDateTime::Month)lua_tointeger(L,2) : (wxDateTime::Month)wxDateTime::Inv_Month;
		int year=luatop>2 ? (int)lua_tointeger(L,3) : (int)wxDateTime::Inv_Year;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::SetToLastMonthDay(wxDateTime::Month, int). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->SetToLastMonthDay(month, year);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// bool wxDateTime::SetToLastWeekDay(wxDateTime::WeekDay weekday, wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year)
	static int _bind_SetToLastWeekDay(lua_State *L) {
		if (!_lg_typecheck_SetToLastWeekDay(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDateTime::SetToLastWeekDay(wxDateTime::WeekDay weekday, wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year) function, expected prototype:\nbool wxDateTime::SetToLastWeekDay(wxDateTime::WeekDay weekday, wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDateTime::WeekDay weekday=(wxDateTime::WeekDay)lua_tointeger(L,2);
		wxDateTime::Month month=luatop>2 ? (wxDateTime::Month)lua_tointeger(L,3) : (wxDateTime::Month)wxDateTime::Inv_Month;
		int year=luatop>3 ? (int)lua_tointeger(L,4) : (int)wxDateTime::Inv_Year;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDateTime::SetToLastWeekDay(wxDateTime::WeekDay, wxDateTime::Month, int). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetToLastWeekDay(weekday, month, year);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDateTime & wxDateTime::SetToNextWeekDay(wxDateTime::WeekDay weekday)
	static int _bind_SetToNextWeekDay(lua_State *L) {
		if (!_lg_typecheck_SetToNextWeekDay(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::SetToNextWeekDay(wxDateTime::WeekDay weekday) function, expected prototype:\nwxDateTime & wxDateTime::SetToNextWeekDay(wxDateTime::WeekDay weekday)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDateTime::WeekDay weekday=(wxDateTime::WeekDay)lua_tointeger(L,2);

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::SetToNextWeekDay(wxDateTime::WeekDay). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->SetToNextWeekDay(weekday);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// wxDateTime & wxDateTime::SetToPrevWeekDay(wxDateTime::WeekDay weekday)
	static int _bind_SetToPrevWeekDay(lua_State *L) {
		if (!_lg_typecheck_SetToPrevWeekDay(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::SetToPrevWeekDay(wxDateTime::WeekDay weekday) function, expected prototype:\nwxDateTime & wxDateTime::SetToPrevWeekDay(wxDateTime::WeekDay weekday)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDateTime::WeekDay weekday=(wxDateTime::WeekDay)lua_tointeger(L,2);

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::SetToPrevWeekDay(wxDateTime::WeekDay). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->SetToPrevWeekDay(weekday);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// bool wxDateTime::SetToWeekDay(wxDateTime::WeekDay weekday, int n = 1, wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year)
	static int _bind_SetToWeekDay(lua_State *L) {
		if (!_lg_typecheck_SetToWeekDay(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDateTime::SetToWeekDay(wxDateTime::WeekDay weekday, int n = 1, wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year) function, expected prototype:\nbool wxDateTime::SetToWeekDay(wxDateTime::WeekDay weekday, int n = 1, wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDateTime::WeekDay weekday=(wxDateTime::WeekDay)lua_tointeger(L,2);
		int n=luatop>2 ? (int)lua_tointeger(L,3) : (int)1;
		wxDateTime::Month month=luatop>3 ? (wxDateTime::Month)lua_tointeger(L,4) : (wxDateTime::Month)wxDateTime::Inv_Month;
		int year=luatop>4 ? (int)lua_tointeger(L,5) : (int)wxDateTime::Inv_Year;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDateTime::SetToWeekDay(wxDateTime::WeekDay, int, wxDateTime::Month, int). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetToWeekDay(weekday, n, month, year);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDateTime & wxDateTime::SetToWeekDayInSameWeek(wxDateTime::WeekDay weekday, wxDateTime::WeekFlags flags = wxDateTime::Monday_First)
	static int _bind_SetToWeekDayInSameWeek(lua_State *L) {
		if (!_lg_typecheck_SetToWeekDayInSameWeek(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::SetToWeekDayInSameWeek(wxDateTime::WeekDay weekday, wxDateTime::WeekFlags flags = wxDateTime::Monday_First) function, expected prototype:\nwxDateTime & wxDateTime::SetToWeekDayInSameWeek(wxDateTime::WeekDay weekday, wxDateTime::WeekFlags flags = wxDateTime::Monday_First)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDateTime::WeekDay weekday=(wxDateTime::WeekDay)lua_tointeger(L,2);
		wxDateTime::WeekFlags flags=luatop>2 ? (wxDateTime::WeekFlags)lua_tointeger(L,3) : (wxDateTime::WeekFlags)wxDateTime::Monday_First;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::SetToWeekDayInSameWeek(wxDateTime::WeekDay, wxDateTime::WeekFlags). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->SetToWeekDayInSameWeek(weekday, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// wxDateTime & wxDateTime::SetToYearDay(unsigned short yday)
	static int _bind_SetToYearDay(lua_State *L) {
		if (!_lg_typecheck_SetToYearDay(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::SetToYearDay(unsigned short yday) function, expected prototype:\nwxDateTime & wxDateTime::SetToYearDay(unsigned short yday)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short yday=(unsigned short)lua_tointeger(L,2);

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::SetToYearDay(unsigned short). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->SetToYearDay(yday);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// double wxDateTime::GetJDN() const
	static int _bind_GetJDN(lua_State *L) {
		if (!_lg_typecheck_GetJDN(L)) {
			luaL_error(L, "luna typecheck failed in double wxDateTime::GetJDN() const function, expected prototype:\ndouble wxDateTime::GetJDN() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double wxDateTime::GetJDN() const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->GetJDN();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxDateTime::GetJulianDayNumber() const
	static int _bind_GetJulianDayNumber(lua_State *L) {
		if (!_lg_typecheck_GetJulianDayNumber(L)) {
			luaL_error(L, "luna typecheck failed in double wxDateTime::GetJulianDayNumber() const function, expected prototype:\ndouble wxDateTime::GetJulianDayNumber() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double wxDateTime::GetJulianDayNumber() const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->GetJulianDayNumber();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxDateTime::GetMJD() const
	static int _bind_GetMJD(lua_State *L) {
		if (!_lg_typecheck_GetMJD(L)) {
			luaL_error(L, "luna typecheck failed in double wxDateTime::GetMJD() const function, expected prototype:\ndouble wxDateTime::GetMJD() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double wxDateTime::GetMJD() const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->GetMJD();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxDateTime::GetModifiedJulianDayNumber() const
	static int _bind_GetModifiedJulianDayNumber(lua_State *L) {
		if (!_lg_typecheck_GetModifiedJulianDayNumber(L)) {
			luaL_error(L, "luna typecheck failed in double wxDateTime::GetModifiedJulianDayNumber() const function, expected prototype:\ndouble wxDateTime::GetModifiedJulianDayNumber() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double wxDateTime::GetModifiedJulianDayNumber() const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->GetModifiedJulianDayNumber();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxDateTime::GetRataDie() const
	static int _bind_GetRataDie(lua_State *L) {
		if (!_lg_typecheck_GetRataDie(L)) {
			luaL_error(L, "luna typecheck failed in double wxDateTime::GetRataDie() const function, expected prototype:\ndouble wxDateTime::GetRataDie() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double wxDateTime::GetRataDie() const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->GetRataDie();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDateTime wxDateTime::FromTimezone(const wxDateTime::TimeZone & tz, bool noDST = false) const
	static int _bind_FromTimezone(lua_State *L) {
		if (!_lg_typecheck_FromTimezone(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime wxDateTime::FromTimezone(const wxDateTime::TimeZone & tz, bool noDST = false) const function, expected prototype:\nwxDateTime wxDateTime::FromTimezone(const wxDateTime::TimeZone & tz, bool noDST = false) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDateTime::TimeZone tz=(const wxDateTime::TimeZone)lua_tointeger(L,2);
		bool noDST=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime wxDateTime::FromTimezone(const wxDateTime::TimeZone &, bool) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateTime stack_lret = self->FromTimezone(tz, noDST);
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// int wxDateTime::IsDST(wxDateTime::Country country = wxDateTime::Country_Default) const
	static int _bind_IsDST(lua_State *L) {
		if (!_lg_typecheck_IsDST(L)) {
			luaL_error(L, "luna typecheck failed in int wxDateTime::IsDST(wxDateTime::Country country = wxDateTime::Country_Default) const function, expected prototype:\nint wxDateTime::IsDST(wxDateTime::Country country = wxDateTime::Country_Default) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDateTime::Country country=luatop>1 ? (wxDateTime::Country)lua_tointeger(L,2) : (wxDateTime::Country)wxDateTime::Country_Default;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDateTime::IsDST(wxDateTime::Country) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->IsDST(country);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDateTime & wxDateTime::MakeFromTimezone(const wxDateTime::TimeZone & tz, bool noDST = false)
	static int _bind_MakeFromTimezone(lua_State *L) {
		if (!_lg_typecheck_MakeFromTimezone(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::MakeFromTimezone(const wxDateTime::TimeZone & tz, bool noDST = false) function, expected prototype:\nwxDateTime & wxDateTime::MakeFromTimezone(const wxDateTime::TimeZone & tz, bool noDST = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDateTime::TimeZone tz=(const wxDateTime::TimeZone)lua_tointeger(L,2);
		bool noDST=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::MakeFromTimezone(const wxDateTime::TimeZone &, bool). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->MakeFromTimezone(tz, noDST);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// wxDateTime & wxDateTime::MakeTimezone(const wxDateTime::TimeZone & tz, bool noDST = false)
	static int _bind_MakeTimezone(lua_State *L) {
		if (!_lg_typecheck_MakeTimezone(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::MakeTimezone(const wxDateTime::TimeZone & tz, bool noDST = false) function, expected prototype:\nwxDateTime & wxDateTime::MakeTimezone(const wxDateTime::TimeZone & tz, bool noDST = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDateTime::TimeZone tz=(const wxDateTime::TimeZone)lua_tointeger(L,2);
		bool noDST=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::MakeTimezone(const wxDateTime::TimeZone &, bool). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->MakeTimezone(tz, noDST);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// wxDateTime & wxDateTime::MakeUTC(bool noDST = false)
	static int _bind_MakeUTC(lua_State *L) {
		if (!_lg_typecheck_MakeUTC(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::MakeUTC(bool noDST = false) function, expected prototype:\nwxDateTime & wxDateTime::MakeUTC(bool noDST = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool noDST=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::MakeUTC(bool). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->MakeUTC(noDST);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// wxDateTime wxDateTime::ToTimezone(const wxDateTime::TimeZone & tz, bool noDST = false) const
	static int _bind_ToTimezone(lua_State *L) {
		if (!_lg_typecheck_ToTimezone(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime wxDateTime::ToTimezone(const wxDateTime::TimeZone & tz, bool noDST = false) const function, expected prototype:\nwxDateTime wxDateTime::ToTimezone(const wxDateTime::TimeZone & tz, bool noDST = false) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDateTime::TimeZone tz=(const wxDateTime::TimeZone)lua_tointeger(L,2);
		bool noDST=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime wxDateTime::ToTimezone(const wxDateTime::TimeZone &, bool) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateTime stack_lret = self->ToTimezone(tz, noDST);
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// wxDateTime wxDateTime::ToUTC(bool noDST = false) const
	static int _bind_ToUTC(lua_State *L) {
		if (!_lg_typecheck_ToUTC(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime wxDateTime::ToUTC(bool noDST = false) const function, expected prototype:\nwxDateTime wxDateTime::ToUTC(bool noDST = false) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool noDST=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime wxDateTime::ToUTC(bool) const. Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateTime stack_lret = self->ToUTC(noDST);
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// static int wxDateTime::ConvertYearToBC(int year)
	static int _bind_ConvertYearToBC(lua_State *L) {
		if (!_lg_typecheck_ConvertYearToBC(L)) {
			luaL_error(L, "luna typecheck failed in static int wxDateTime::ConvertYearToBC(int year) function, expected prototype:\nstatic int wxDateTime::ConvertYearToBC(int year)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int year=(int)lua_tointeger(L,1);

		int lret = wxDateTime::ConvertYearToBC(year);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void wxDateTime::GetAmPmStrings(wxString * am, wxString * pm)
	static int _bind_GetAmPmStrings(lua_State *L) {
		if (!_lg_typecheck_GetAmPmStrings(L)) {
			luaL_error(L, "luna typecheck failed in static void wxDateTime::GetAmPmStrings(wxString * am, wxString * pm) function, expected prototype:\nstatic void wxDateTime::GetAmPmStrings(wxString * am, wxString * pm)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString am(lua_tostring(L,1),lua_objlen(L,1));
		wxString pm(lua_tostring(L,2),lua_objlen(L,2));

		wxDateTime::GetAmPmStrings(&am, &pm);

		return 0;
	}

	// static wxDateTime wxDateTime::GetBeginDST(int year = wxDateTime::Inv_Year, wxDateTime::Country country = wxDateTime::Country_Default)
	static int _bind_GetBeginDST(lua_State *L) {
		if (!_lg_typecheck_GetBeginDST(L)) {
			luaL_error(L, "luna typecheck failed in static wxDateTime wxDateTime::GetBeginDST(int year = wxDateTime::Inv_Year, wxDateTime::Country country = wxDateTime::Country_Default) function, expected prototype:\nstatic wxDateTime wxDateTime::GetBeginDST(int year = wxDateTime::Inv_Year, wxDateTime::Country country = wxDateTime::Country_Default)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int year=luatop>0 ? (int)lua_tointeger(L,1) : (int)wxDateTime::Inv_Year;
		wxDateTime::Country country=luatop>1 ? (wxDateTime::Country)lua_tointeger(L,2) : (wxDateTime::Country)wxDateTime::Country_Default;

		wxDateTime stack_lret = wxDateTime::GetBeginDST(year, country);
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// static wxDateTime wxDateTime::GetEndDST(int year = wxDateTime::Inv_Year, wxDateTime::Country country = wxDateTime::Country_Default)
	static int _bind_GetEndDST(lua_State *L) {
		if (!_lg_typecheck_GetEndDST(L)) {
			luaL_error(L, "luna typecheck failed in static wxDateTime wxDateTime::GetEndDST(int year = wxDateTime::Inv_Year, wxDateTime::Country country = wxDateTime::Country_Default) function, expected prototype:\nstatic wxDateTime wxDateTime::GetEndDST(int year = wxDateTime::Inv_Year, wxDateTime::Country country = wxDateTime::Country_Default)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int year=luatop>0 ? (int)lua_tointeger(L,1) : (int)wxDateTime::Inv_Year;
		wxDateTime::Country country=luatop>1 ? (wxDateTime::Country)lua_tointeger(L,2) : (wxDateTime::Country)wxDateTime::Country_Default;

		wxDateTime stack_lret = wxDateTime::GetEndDST(year, country);
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// static wxDateTime::Country wxDateTime::GetCountry()
	static int _bind_GetCountry(lua_State *L) {
		if (!_lg_typecheck_GetCountry(L)) {
			luaL_error(L, "luna typecheck failed in static wxDateTime::Country wxDateTime::GetCountry() function, expected prototype:\nstatic wxDateTime::Country wxDateTime::GetCountry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateTime::Country lret = wxDateTime::GetCountry();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static wxDateTime::Month wxDateTime::GetCurrentMonth(wxDateTime::Calendar cal = wxDateTime::Gregorian)
	static int _bind_GetCurrentMonth(lua_State *L) {
		if (!_lg_typecheck_GetCurrentMonth(L)) {
			luaL_error(L, "luna typecheck failed in static wxDateTime::Month wxDateTime::GetCurrentMonth(wxDateTime::Calendar cal = wxDateTime::Gregorian) function, expected prototype:\nstatic wxDateTime::Month wxDateTime::GetCurrentMonth(wxDateTime::Calendar cal = wxDateTime::Gregorian)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDateTime::Calendar cal=luatop>0 ? (wxDateTime::Calendar)lua_tointeger(L,1) : (wxDateTime::Calendar)wxDateTime::Gregorian;

		wxDateTime::Month lret = wxDateTime::GetCurrentMonth(cal);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static int wxDateTime::GetCurrentYear(wxDateTime::Calendar cal = wxDateTime::Gregorian)
	static int _bind_GetCurrentYear(lua_State *L) {
		if (!_lg_typecheck_GetCurrentYear(L)) {
			luaL_error(L, "luna typecheck failed in static int wxDateTime::GetCurrentYear(wxDateTime::Calendar cal = wxDateTime::Gregorian) function, expected prototype:\nstatic int wxDateTime::GetCurrentYear(wxDateTime::Calendar cal = wxDateTime::Gregorian)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDateTime::Calendar cal=luatop>0 ? (wxDateTime::Calendar)lua_tointeger(L,1) : (wxDateTime::Calendar)wxDateTime::Gregorian;

		int lret = wxDateTime::GetCurrentYear(cal);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static wxString wxDateTime::GetEnglishMonthName(wxDateTime::Month month, wxDateTime::NameFlags flags = wxDateTime::Name_Full)
	static int _bind_GetEnglishMonthName(lua_State *L) {
		if (!_lg_typecheck_GetEnglishMonthName(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxDateTime::GetEnglishMonthName(wxDateTime::Month month, wxDateTime::NameFlags flags = wxDateTime::Name_Full) function, expected prototype:\nstatic wxString wxDateTime::GetEnglishMonthName(wxDateTime::Month month, wxDateTime::NameFlags flags = wxDateTime::Name_Full)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDateTime::Month month=(wxDateTime::Month)lua_tointeger(L,1);
		wxDateTime::NameFlags flags=luatop>1 ? (wxDateTime::NameFlags)lua_tointeger(L,2) : (wxDateTime::NameFlags)wxDateTime::Name_Full;

		wxString lret = wxDateTime::GetEnglishMonthName(month, flags);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxDateTime::GetEnglishWeekDayName(wxDateTime::WeekDay weekday, wxDateTime::NameFlags flags = wxDateTime::Name_Full)
	static int _bind_GetEnglishWeekDayName(lua_State *L) {
		if (!_lg_typecheck_GetEnglishWeekDayName(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxDateTime::GetEnglishWeekDayName(wxDateTime::WeekDay weekday, wxDateTime::NameFlags flags = wxDateTime::Name_Full) function, expected prototype:\nstatic wxString wxDateTime::GetEnglishWeekDayName(wxDateTime::WeekDay weekday, wxDateTime::NameFlags flags = wxDateTime::Name_Full)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDateTime::WeekDay weekday=(wxDateTime::WeekDay)lua_tointeger(L,1);
		wxDateTime::NameFlags flags=luatop>1 ? (wxDateTime::NameFlags)lua_tointeger(L,2) : (wxDateTime::NameFlags)wxDateTime::Name_Full;

		wxString lret = wxDateTime::GetEnglishWeekDayName(weekday, flags);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxDateTime::GetMonthName(wxDateTime::Month month, wxDateTime::NameFlags flags = wxDateTime::Name_Full)
	static int _bind_GetMonthName(lua_State *L) {
		if (!_lg_typecheck_GetMonthName(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxDateTime::GetMonthName(wxDateTime::Month month, wxDateTime::NameFlags flags = wxDateTime::Name_Full) function, expected prototype:\nstatic wxString wxDateTime::GetMonthName(wxDateTime::Month month, wxDateTime::NameFlags flags = wxDateTime::Name_Full)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDateTime::Month month=(wxDateTime::Month)lua_tointeger(L,1);
		wxDateTime::NameFlags flags=luatop>1 ? (wxDateTime::NameFlags)lua_tointeger(L,2) : (wxDateTime::NameFlags)wxDateTime::Name_Full;

		wxString lret = wxDateTime::GetMonthName(month, flags);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static unsigned short wxDateTime::GetNumberOfDays(int year, wxDateTime::Calendar cal = wxDateTime::Gregorian)
	static int _bind_GetNumberOfDays_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetNumberOfDays_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in static unsigned short wxDateTime::GetNumberOfDays(int year, wxDateTime::Calendar cal = wxDateTime::Gregorian) function, expected prototype:\nstatic unsigned short wxDateTime::GetNumberOfDays(int year, wxDateTime::Calendar cal = wxDateTime::Gregorian)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int year=(int)lua_tointeger(L,1);
		wxDateTime::Calendar cal=luatop>1 ? (wxDateTime::Calendar)lua_tointeger(L,2) : (wxDateTime::Calendar)wxDateTime::Gregorian;

		unsigned short lret = wxDateTime::GetNumberOfDays(year, cal);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static unsigned short wxDateTime::GetNumberOfDays(wxDateTime::Month month, int year = wxDateTime::Inv_Year, wxDateTime::Calendar cal = wxDateTime::Gregorian)
	static int _bind_GetNumberOfDays_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetNumberOfDays_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static unsigned short wxDateTime::GetNumberOfDays(wxDateTime::Month month, int year = wxDateTime::Inv_Year, wxDateTime::Calendar cal = wxDateTime::Gregorian) function, expected prototype:\nstatic unsigned short wxDateTime::GetNumberOfDays(wxDateTime::Month month, int year = wxDateTime::Inv_Year, wxDateTime::Calendar cal = wxDateTime::Gregorian)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDateTime::Month month=(wxDateTime::Month)lua_tointeger(L,1);
		int year=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxDateTime::Inv_Year;
		wxDateTime::Calendar cal=luatop>2 ? (wxDateTime::Calendar)lua_tointeger(L,3) : (wxDateTime::Calendar)wxDateTime::Gregorian;

		unsigned short lret = wxDateTime::GetNumberOfDays(month, year, cal);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxDateTime::GetNumberOfDays
	static int _bind_GetNumberOfDays(lua_State *L) {
		if (_lg_typecheck_GetNumberOfDays_overload_1(L)) return _bind_GetNumberOfDays_overload_1(L);
		if (_lg_typecheck_GetNumberOfDays_overload_2(L)) return _bind_GetNumberOfDays_overload_2(L);

		luaL_error(L, "error in function GetNumberOfDays, cannot match any of the overloads for function GetNumberOfDays:\n  GetNumberOfDays(int, wxDateTime::Calendar)\n  GetNumberOfDays(wxDateTime::Month, int, wxDateTime::Calendar)\n");
		return 0;
	}

	// static wxString wxDateTime::GetWeekDayName(wxDateTime::WeekDay weekday, wxDateTime::NameFlags flags = wxDateTime::Name_Full)
	static int _bind_GetWeekDayName(lua_State *L) {
		if (!_lg_typecheck_GetWeekDayName(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxDateTime::GetWeekDayName(wxDateTime::WeekDay weekday, wxDateTime::NameFlags flags = wxDateTime::Name_Full) function, expected prototype:\nstatic wxString wxDateTime::GetWeekDayName(wxDateTime::WeekDay weekday, wxDateTime::NameFlags flags = wxDateTime::Name_Full)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDateTime::WeekDay weekday=(wxDateTime::WeekDay)lua_tointeger(L,1);
		wxDateTime::NameFlags flags=luatop>1 ? (wxDateTime::NameFlags)lua_tointeger(L,2) : (wxDateTime::NameFlags)wxDateTime::Name_Full;

		wxString lret = wxDateTime::GetWeekDayName(weekday, flags);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static bool wxDateTime::IsDSTApplicable(int year = wxDateTime::Inv_Year, wxDateTime::Country country = wxDateTime::Country_Default)
	static int _bind_IsDSTApplicable(lua_State *L) {
		if (!_lg_typecheck_IsDSTApplicable(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxDateTime::IsDSTApplicable(int year = wxDateTime::Inv_Year, wxDateTime::Country country = wxDateTime::Country_Default) function, expected prototype:\nstatic bool wxDateTime::IsDSTApplicable(int year = wxDateTime::Inv_Year, wxDateTime::Country country = wxDateTime::Country_Default)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int year=luatop>0 ? (int)lua_tointeger(L,1) : (int)wxDateTime::Inv_Year;
		wxDateTime::Country country=luatop>1 ? (wxDateTime::Country)lua_tointeger(L,2) : (wxDateTime::Country)wxDateTime::Country_Default;

		bool lret = wxDateTime::IsDSTApplicable(year, country);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxDateTime::IsLeapYear(int year = wxDateTime::Inv_Year, wxDateTime::Calendar cal = wxDateTime::Gregorian)
	static int _bind_IsLeapYear(lua_State *L) {
		if (!_lg_typecheck_IsLeapYear(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxDateTime::IsLeapYear(int year = wxDateTime::Inv_Year, wxDateTime::Calendar cal = wxDateTime::Gregorian) function, expected prototype:\nstatic bool wxDateTime::IsLeapYear(int year = wxDateTime::Inv_Year, wxDateTime::Calendar cal = wxDateTime::Gregorian)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int year=luatop>0 ? (int)lua_tointeger(L,1) : (int)wxDateTime::Inv_Year;
		wxDateTime::Calendar cal=luatop>1 ? (wxDateTime::Calendar)lua_tointeger(L,2) : (wxDateTime::Calendar)wxDateTime::Gregorian;

		bool lret = wxDateTime::IsLeapYear(year, cal);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxDateTime::IsWestEuropeanCountry(wxDateTime::Country country = wxDateTime::Country_Default)
	static int _bind_IsWestEuropeanCountry(lua_State *L) {
		if (!_lg_typecheck_IsWestEuropeanCountry(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxDateTime::IsWestEuropeanCountry(wxDateTime::Country country = wxDateTime::Country_Default) function, expected prototype:\nstatic bool wxDateTime::IsWestEuropeanCountry(wxDateTime::Country country = wxDateTime::Country_Default)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDateTime::Country country=luatop>0 ? (wxDateTime::Country)lua_tointeger(L,1) : (wxDateTime::Country)wxDateTime::Country_Default;

		bool lret = wxDateTime::IsWestEuropeanCountry(country);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static wxDateTime wxDateTime::Now()
	static int _bind_Now(lua_State *L) {
		if (!_lg_typecheck_Now(L)) {
			luaL_error(L, "luna typecheck failed in static wxDateTime wxDateTime::Now() function, expected prototype:\nstatic wxDateTime wxDateTime::Now()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateTime stack_lret = wxDateTime::Now();
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// static void wxDateTime::SetCountry(wxDateTime::Country country)
	static int _bind_SetCountry(lua_State *L) {
		if (!_lg_typecheck_SetCountry(L)) {
			luaL_error(L, "luna typecheck failed in static void wxDateTime::SetCountry(wxDateTime::Country country) function, expected prototype:\nstatic void wxDateTime::SetCountry(wxDateTime::Country country)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDateTime::Country country=(wxDateTime::Country)lua_tointeger(L,1);

		wxDateTime::SetCountry(country);

		return 0;
	}

	// static wxDateTime wxDateTime::SetToWeekOfYear(int year, unsigned short numWeek, wxDateTime::WeekDay weekday = wxDateTime::Mon)
	static int _bind_SetToWeekOfYear(lua_State *L) {
		if (!_lg_typecheck_SetToWeekOfYear(L)) {
			luaL_error(L, "luna typecheck failed in static wxDateTime wxDateTime::SetToWeekOfYear(int year, unsigned short numWeek, wxDateTime::WeekDay weekday = wxDateTime::Mon) function, expected prototype:\nstatic wxDateTime wxDateTime::SetToWeekOfYear(int year, unsigned short numWeek, wxDateTime::WeekDay weekday = wxDateTime::Mon)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int year=(int)lua_tointeger(L,1);
		unsigned short numWeek=(unsigned short)lua_tointeger(L,2);
		wxDateTime::WeekDay weekday=luatop>2 ? (wxDateTime::WeekDay)lua_tointeger(L,3) : (wxDateTime::WeekDay)wxDateTime::Mon;

		wxDateTime stack_lret = wxDateTime::SetToWeekOfYear(year, numWeek, weekday);
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// static wxDateTime wxDateTime::Today()
	static int _bind_Today(lua_State *L) {
		if (!_lg_typecheck_Today(L)) {
			luaL_error(L, "luna typecheck failed in static wxDateTime wxDateTime::Today() function, expected prototype:\nstatic wxDateTime wxDateTime::Today()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateTime stack_lret = wxDateTime::Today();
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// static wxDateTime wxDateTime::UNow()
	static int _bind_UNow(lua_State *L) {
		if (!_lg_typecheck_UNow(L)) {
			luaL_error(L, "luna typecheck failed in static wxDateTime wxDateTime::UNow() function, expected prototype:\nstatic wxDateTime wxDateTime::UNow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateTime stack_lret = wxDateTime::UNow();
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}


	// Operator binds:
	// wxDateTime wxDateTime::operator+=(const wxDateSpan & diff)
	static int _bind_op_add_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_add_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime wxDateTime::operator+=(const wxDateSpan & diff) function, expected prototype:\nwxDateTime wxDateTime::operator+=(const wxDateSpan & diff)\nClass arguments details:\narg 1 ID = 57474092\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateSpan* diff_ptr=(Luna< wxDateSpan >::check(L,2));
		if( !diff_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg diff in wxDateTime::operator+= function");
		}
		const wxDateSpan & diff=*diff_ptr;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime wxDateTime::operator+=(const wxDateSpan &). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateTime stack_lret = self->operator+=(diff);
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// wxDateTime & wxDateTime::operator+=(const wxTimeSpan & diff)
	static int _bind_op_add_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_add_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::operator+=(const wxTimeSpan & diff) function, expected prototype:\nwxDateTime & wxDateTime::operator+=(const wxTimeSpan & diff)\nClass arguments details:\narg 1 ID = 58889849\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTimeSpan* diff_ptr=(Luna< wxTimeSpan >::check(L,2));
		if( !diff_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg diff in wxDateTime::operator+= function");
		}
		const wxTimeSpan & diff=*diff_ptr;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::operator+=(const wxTimeSpan &). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->operator+=(diff);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxDateTime::operator+=
	static int _bind_op_add(lua_State *L) {
		if (_lg_typecheck_op_add_overload_1(L)) return _bind_op_add_overload_1(L);
		if (_lg_typecheck_op_add_overload_2(L)) return _bind_op_add_overload_2(L);

		luaL_error(L, "error in function operator+=, cannot match any of the overloads for function operator+=:\n  operator+=(const wxDateSpan &)\n  operator+=(const wxTimeSpan &)\n");
		return 0;
	}

	// wxDateTime & wxDateTime::operator-=(const wxDateSpan & diff)
	static int _bind_op_sub_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_sub_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::operator-=(const wxDateSpan & diff) function, expected prototype:\nwxDateTime & wxDateTime::operator-=(const wxDateSpan & diff)\nClass arguments details:\narg 1 ID = 57474092\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateSpan* diff_ptr=(Luna< wxDateSpan >::check(L,2));
		if( !diff_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg diff in wxDateTime::operator-= function");
		}
		const wxDateSpan & diff=*diff_ptr;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::operator-=(const wxDateSpan &). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->operator-=(diff);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// wxDateTime & wxDateTime::operator-=(const wxTimeSpan & diff)
	static int _bind_op_sub_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_sub_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime & wxDateTime::operator-=(const wxTimeSpan & diff) function, expected prototype:\nwxDateTime & wxDateTime::operator-=(const wxTimeSpan & diff)\nClass arguments details:\narg 1 ID = 58889849\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTimeSpan* diff_ptr=(Luna< wxTimeSpan >::check(L,2));
		if( !diff_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg diff in wxDateTime::operator-= function");
		}
		const wxTimeSpan & diff=*diff_ptr;

		wxDateTime* self=(Luna< wxDateTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime & wxDateTime::operator-=(const wxTimeSpan &). Got : '%s'\n%s",typeid(Luna< wxDateTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateTime* lret = &self->operator-=(diff);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxDateTime::operator-=
	static int _bind_op_sub(lua_State *L) {
		if (_lg_typecheck_op_sub_overload_1(L)) return _bind_op_sub_overload_1(L);
		if (_lg_typecheck_op_sub_overload_2(L)) return _bind_op_sub_overload_2(L);

		luaL_error(L, "error in function operator-=, cannot match any of the overloads for function operator-=:\n  operator-=(const wxDateSpan &)\n  operator-=(const wxTimeSpan &)\n");
		return 0;
	}


};

wxDateTime* LunaTraits< wxDateTime >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDateTime::_bind_ctor(L);
}

void LunaTraits< wxDateTime >::_bind_dtor(wxDateTime* obj) {
	delete obj;
}

const char LunaTraits< wxDateTime >::className[] = "wxDateTime";
const char LunaTraits< wxDateTime >::fullName[] = "wxDateTime";
const char LunaTraits< wxDateTime >::moduleName[] = "wx";
const char* LunaTraits< wxDateTime >::parents[] = {0};
const int LunaTraits< wxDateTime >::hash = 57497519;
const int LunaTraits< wxDateTime >::uniqueIDs[] = {57497519,0};

luna_RegType LunaTraits< wxDateTime >::methods[] = {
	{"ResetTime", &luna_wrapper_wxDateTime::_bind_ResetTime},
	{"Set", &luna_wrapper_wxDateTime::_bind_Set},
	{"SetDay", &luna_wrapper_wxDateTime::_bind_SetDay},
	{"SetFromDOS", &luna_wrapper_wxDateTime::_bind_SetFromDOS},
	{"SetHour", &luna_wrapper_wxDateTime::_bind_SetHour},
	{"SetMillisecond", &luna_wrapper_wxDateTime::_bind_SetMillisecond},
	{"SetMinute", &luna_wrapper_wxDateTime::_bind_SetMinute},
	{"SetMonth", &luna_wrapper_wxDateTime::_bind_SetMonth},
	{"SetSecond", &luna_wrapper_wxDateTime::_bind_SetSecond},
	{"SetToCurrent", &luna_wrapper_wxDateTime::_bind_SetToCurrent},
	{"SetYear", &luna_wrapper_wxDateTime::_bind_SetYear},
	{"GetAsDOS", &luna_wrapper_wxDateTime::_bind_GetAsDOS},
	{"GetCentury", &luna_wrapper_wxDateTime::_bind_GetCentury},
	{"GetDateOnly", &luna_wrapper_wxDateTime::_bind_GetDateOnly},
	{"GetDay", &luna_wrapper_wxDateTime::_bind_GetDay},
	{"GetDayOfYear", &luna_wrapper_wxDateTime::_bind_GetDayOfYear},
	{"GetHour", &luna_wrapper_wxDateTime::_bind_GetHour},
	{"GetMillisecond", &luna_wrapper_wxDateTime::_bind_GetMillisecond},
	{"GetMinute", &luna_wrapper_wxDateTime::_bind_GetMinute},
	{"GetMonth", &luna_wrapper_wxDateTime::_bind_GetMonth},
	{"GetSecond", &luna_wrapper_wxDateTime::_bind_GetSecond},
	{"GetTm", &luna_wrapper_wxDateTime::_bind_GetTm},
	{"GetWeekDay", &luna_wrapper_wxDateTime::_bind_GetWeekDay},
	{"GetWeekOfMonth", &luna_wrapper_wxDateTime::_bind_GetWeekOfMonth},
	{"GetWeekOfYear", &luna_wrapper_wxDateTime::_bind_GetWeekOfYear},
	{"GetYear", &luna_wrapper_wxDateTime::_bind_GetYear},
	{"IsValid", &luna_wrapper_wxDateTime::_bind_IsValid},
	{"IsWorkDay", &luna_wrapper_wxDateTime::_bind_IsWorkDay},
	{"IsEarlierThan", &luna_wrapper_wxDateTime::_bind_IsEarlierThan},
	{"IsEqualTo", &luna_wrapper_wxDateTime::_bind_IsEqualTo},
	{"IsEqualUpTo", &luna_wrapper_wxDateTime::_bind_IsEqualUpTo},
	{"IsLaterThan", &luna_wrapper_wxDateTime::_bind_IsLaterThan},
	{"IsSameDate", &luna_wrapper_wxDateTime::_bind_IsSameDate},
	{"IsSameTime", &luna_wrapper_wxDateTime::_bind_IsSameTime},
	{"IsStrictlyBetween", &luna_wrapper_wxDateTime::_bind_IsStrictlyBetween},
	{"IsBetween", &luna_wrapper_wxDateTime::_bind_IsBetween},
	{"Add", &luna_wrapper_wxDateTime::_bind_Add},
	{"Subtract", &luna_wrapper_wxDateTime::_bind_Subtract},
	{"Format", &luna_wrapper_wxDateTime::_bind_Format},
	{"FormatDate", &luna_wrapper_wxDateTime::_bind_FormatDate},
	{"FormatISOCombined", &luna_wrapper_wxDateTime::_bind_FormatISOCombined},
	{"FormatISODate", &luna_wrapper_wxDateTime::_bind_FormatISODate},
	{"FormatISOTime", &luna_wrapper_wxDateTime::_bind_FormatISOTime},
	{"FormatTime", &luna_wrapper_wxDateTime::_bind_FormatTime},
	{"ParseISOCombined", &luna_wrapper_wxDateTime::_bind_ParseISOCombined},
	{"ParseISODate", &luna_wrapper_wxDateTime::_bind_ParseISODate},
	{"ParseISOTime", &luna_wrapper_wxDateTime::_bind_ParseISOTime},
	{"GetLastMonthDay", &luna_wrapper_wxDateTime::_bind_GetLastMonthDay},
	{"GetLastWeekDay", &luna_wrapper_wxDateTime::_bind_GetLastWeekDay},
	{"GetNextWeekDay", &luna_wrapper_wxDateTime::_bind_GetNextWeekDay},
	{"GetPrevWeekDay", &luna_wrapper_wxDateTime::_bind_GetPrevWeekDay},
	{"GetWeekDayInSameWeek", &luna_wrapper_wxDateTime::_bind_GetWeekDayInSameWeek},
	{"GetYearDay", &luna_wrapper_wxDateTime::_bind_GetYearDay},
	{"SetToLastMonthDay", &luna_wrapper_wxDateTime::_bind_SetToLastMonthDay},
	{"SetToLastWeekDay", &luna_wrapper_wxDateTime::_bind_SetToLastWeekDay},
	{"SetToNextWeekDay", &luna_wrapper_wxDateTime::_bind_SetToNextWeekDay},
	{"SetToPrevWeekDay", &luna_wrapper_wxDateTime::_bind_SetToPrevWeekDay},
	{"SetToWeekDay", &luna_wrapper_wxDateTime::_bind_SetToWeekDay},
	{"SetToWeekDayInSameWeek", &luna_wrapper_wxDateTime::_bind_SetToWeekDayInSameWeek},
	{"SetToYearDay", &luna_wrapper_wxDateTime::_bind_SetToYearDay},
	{"GetJDN", &luna_wrapper_wxDateTime::_bind_GetJDN},
	{"GetJulianDayNumber", &luna_wrapper_wxDateTime::_bind_GetJulianDayNumber},
	{"GetMJD", &luna_wrapper_wxDateTime::_bind_GetMJD},
	{"GetModifiedJulianDayNumber", &luna_wrapper_wxDateTime::_bind_GetModifiedJulianDayNumber},
	{"GetRataDie", &luna_wrapper_wxDateTime::_bind_GetRataDie},
	{"FromTimezone", &luna_wrapper_wxDateTime::_bind_FromTimezone},
	{"IsDST", &luna_wrapper_wxDateTime::_bind_IsDST},
	{"MakeFromTimezone", &luna_wrapper_wxDateTime::_bind_MakeFromTimezone},
	{"MakeTimezone", &luna_wrapper_wxDateTime::_bind_MakeTimezone},
	{"MakeUTC", &luna_wrapper_wxDateTime::_bind_MakeUTC},
	{"ToTimezone", &luna_wrapper_wxDateTime::_bind_ToTimezone},
	{"ToUTC", &luna_wrapper_wxDateTime::_bind_ToUTC},
	{"ConvertYearToBC", &luna_wrapper_wxDateTime::_bind_ConvertYearToBC},
	{"GetAmPmStrings", &luna_wrapper_wxDateTime::_bind_GetAmPmStrings},
	{"GetBeginDST", &luna_wrapper_wxDateTime::_bind_GetBeginDST},
	{"GetEndDST", &luna_wrapper_wxDateTime::_bind_GetEndDST},
	{"GetCountry", &luna_wrapper_wxDateTime::_bind_GetCountry},
	{"GetCurrentMonth", &luna_wrapper_wxDateTime::_bind_GetCurrentMonth},
	{"GetCurrentYear", &luna_wrapper_wxDateTime::_bind_GetCurrentYear},
	{"GetEnglishMonthName", &luna_wrapper_wxDateTime::_bind_GetEnglishMonthName},
	{"GetEnglishWeekDayName", &luna_wrapper_wxDateTime::_bind_GetEnglishWeekDayName},
	{"GetMonthName", &luna_wrapper_wxDateTime::_bind_GetMonthName},
	{"GetNumberOfDays", &luna_wrapper_wxDateTime::_bind_GetNumberOfDays},
	{"GetWeekDayName", &luna_wrapper_wxDateTime::_bind_GetWeekDayName},
	{"IsDSTApplicable", &luna_wrapper_wxDateTime::_bind_IsDSTApplicable},
	{"IsLeapYear", &luna_wrapper_wxDateTime::_bind_IsLeapYear},
	{"IsWestEuropeanCountry", &luna_wrapper_wxDateTime::_bind_IsWestEuropeanCountry},
	{"Now", &luna_wrapper_wxDateTime::_bind_Now},
	{"SetCountry", &luna_wrapper_wxDateTime::_bind_SetCountry},
	{"SetToWeekOfYear", &luna_wrapper_wxDateTime::_bind_SetToWeekOfYear},
	{"Today", &luna_wrapper_wxDateTime::_bind_Today},
	{"UNow", &luna_wrapper_wxDateTime::_bind_UNow},
	{"op_add", &luna_wrapper_wxDateTime::_bind_op_add},
	{"op_sub", &luna_wrapper_wxDateTime::_bind_op_sub},
	{"dynCast", &luna_wrapper_wxDateTime::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDateTime::_bind___eq},
	{"fromVoid", &luna_wrapper_wxDateTime::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDateTime::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxDateTime >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDateTime >::enumValues[] = {
	{"Local", wxDateTime::Local},
	{"GMT_12", wxDateTime::GMT_12},
	{"GMT_11", wxDateTime::GMT_11},
	{"GMT_10", wxDateTime::GMT_10},
	{"GMT_9", wxDateTime::GMT_9},
	{"GMT_8", wxDateTime::GMT_8},
	{"GMT_7", wxDateTime::GMT_7},
	{"GMT_6", wxDateTime::GMT_6},
	{"GMT_5", wxDateTime::GMT_5},
	{"GMT_4", wxDateTime::GMT_4},
	{"GMT_3", wxDateTime::GMT_3},
	{"GMT_2", wxDateTime::GMT_2},
	{"GMT_1", wxDateTime::GMT_1},
	{"GMT0", wxDateTime::GMT0},
	{"GMT1", wxDateTime::GMT1},
	{"GMT2", wxDateTime::GMT2},
	{"GMT3", wxDateTime::GMT3},
	{"GMT4", wxDateTime::GMT4},
	{"GMT5", wxDateTime::GMT5},
	{"GMT6", wxDateTime::GMT6},
	{"GMT7", wxDateTime::GMT7},
	{"GMT8", wxDateTime::GMT8},
	{"GMT9", wxDateTime::GMT9},
	{"GMT10", wxDateTime::GMT10},
	{"GMT11", wxDateTime::GMT11},
	{"GMT12", wxDateTime::GMT12},
	{"GMT13", wxDateTime::GMT13},
	{"WET", wxDateTime::WET},
	{"WEST", wxDateTime::WEST},
	{"CET", wxDateTime::CET},
	{"CEST", wxDateTime::CEST},
	{"EET", wxDateTime::EET},
	{"EEST", wxDateTime::EEST},
	{"MSK", wxDateTime::MSK},
	{"MSD", wxDateTime::MSD},
	{"AST", wxDateTime::AST},
	{"ADT", wxDateTime::ADT},
	{"EST", wxDateTime::EST},
	{"EDT", wxDateTime::EDT},
	{"CST", wxDateTime::CST},
	{"CDT", wxDateTime::CDT},
	{"MST", wxDateTime::MST},
	{"MDT", wxDateTime::MDT},
	{"PST", wxDateTime::PST},
	{"PDT", wxDateTime::PDT},
	{"HST", wxDateTime::HST},
	{"AKST", wxDateTime::AKST},
	{"AKDT", wxDateTime::AKDT},
	{"A_WST", wxDateTime::A_WST},
	{"A_CST", wxDateTime::A_CST},
	{"A_EST", wxDateTime::A_EST},
	{"A_ESST", wxDateTime::A_ESST},
	{"NZST", wxDateTime::NZST},
	{"NZDT", wxDateTime::NZDT},
	{"UTC", wxDateTime::UTC},
	{"Gregorian", wxDateTime::Gregorian},
	{"Julian", wxDateTime::Julian},
	{"Gr_Unknown", wxDateTime::Gr_Unknown},
	{"Gr_Standard", wxDateTime::Gr_Standard},
	{"Gr_Alaska", wxDateTime::Gr_Alaska},
	{"Gr_Albania", wxDateTime::Gr_Albania},
	{"Gr_Austria", wxDateTime::Gr_Austria},
	{"Gr_Austria_Brixen", wxDateTime::Gr_Austria_Brixen},
	{"Gr_Austria_Salzburg", wxDateTime::Gr_Austria_Salzburg},
	{"Gr_Austria_Tyrol", wxDateTime::Gr_Austria_Tyrol},
	{"Gr_Austria_Carinthia", wxDateTime::Gr_Austria_Carinthia},
	{"Gr_Austria_Styria", wxDateTime::Gr_Austria_Styria},
	{"Gr_Belgium", wxDateTime::Gr_Belgium},
	{"Gr_Bulgaria", wxDateTime::Gr_Bulgaria},
	{"Gr_Bulgaria_1", wxDateTime::Gr_Bulgaria_1},
	{"Gr_Bulgaria_2", wxDateTime::Gr_Bulgaria_2},
	{"Gr_Bulgaria_3", wxDateTime::Gr_Bulgaria_3},
	{"Gr_Canada", wxDateTime::Gr_Canada},
	{"Gr_China", wxDateTime::Gr_China},
	{"Gr_China_1", wxDateTime::Gr_China_1},
	{"Gr_China_2", wxDateTime::Gr_China_2},
	{"Gr_Czechoslovakia", wxDateTime::Gr_Czechoslovakia},
	{"Gr_Denmark", wxDateTime::Gr_Denmark},
	{"Gr_Egypt", wxDateTime::Gr_Egypt},
	{"Gr_Estonia", wxDateTime::Gr_Estonia},
	{"Gr_Finland", wxDateTime::Gr_Finland},
	{"Gr_France", wxDateTime::Gr_France},
	{"Gr_France_Alsace", wxDateTime::Gr_France_Alsace},
	{"Gr_France_Lorraine", wxDateTime::Gr_France_Lorraine},
	{"Gr_France_Strasbourg", wxDateTime::Gr_France_Strasbourg},
	{"Gr_Germany", wxDateTime::Gr_Germany},
	{"Gr_Germany_Catholic", wxDateTime::Gr_Germany_Catholic},
	{"Gr_Germany_Prussia", wxDateTime::Gr_Germany_Prussia},
	{"Gr_Germany_Protestant", wxDateTime::Gr_Germany_Protestant},
	{"Gr_GreatBritain", wxDateTime::Gr_GreatBritain},
	{"Gr_Greece", wxDateTime::Gr_Greece},
	{"Gr_Hungary", wxDateTime::Gr_Hungary},
	{"Gr_Ireland", wxDateTime::Gr_Ireland},
	{"Gr_Italy", wxDateTime::Gr_Italy},
	{"Gr_Japan", wxDateTime::Gr_Japan},
	{"Gr_Japan_1", wxDateTime::Gr_Japan_1},
	{"Gr_Japan_2", wxDateTime::Gr_Japan_2},
	{"Gr_Japan_3", wxDateTime::Gr_Japan_3},
	{"Gr_Latvia", wxDateTime::Gr_Latvia},
	{"Gr_Lithuania", wxDateTime::Gr_Lithuania},
	{"Gr_Luxemburg", wxDateTime::Gr_Luxemburg},
	{"Gr_Netherlands", wxDateTime::Gr_Netherlands},
	{"Gr_Netherlands_Groningen", wxDateTime::Gr_Netherlands_Groningen},
	{"Gr_Netherlands_Gelderland", wxDateTime::Gr_Netherlands_Gelderland},
	{"Gr_Netherlands_Utrecht", wxDateTime::Gr_Netherlands_Utrecht},
	{"Gr_Netherlands_Friesland", wxDateTime::Gr_Netherlands_Friesland},
	{"Gr_Norway", wxDateTime::Gr_Norway},
	{"Gr_Poland", wxDateTime::Gr_Poland},
	{"Gr_Portugal", wxDateTime::Gr_Portugal},
	{"Gr_Romania", wxDateTime::Gr_Romania},
	{"Gr_Russia", wxDateTime::Gr_Russia},
	{"Gr_Scotland", wxDateTime::Gr_Scotland},
	{"Gr_Spain", wxDateTime::Gr_Spain},
	{"Gr_Sweden", wxDateTime::Gr_Sweden},
	{"Gr_Switzerland", wxDateTime::Gr_Switzerland},
	{"Gr_Switzerland_Catholic", wxDateTime::Gr_Switzerland_Catholic},
	{"Gr_Switzerland_Protestant", wxDateTime::Gr_Switzerland_Protestant},
	{"Gr_Turkey", wxDateTime::Gr_Turkey},
	{"Gr_USA", wxDateTime::Gr_USA},
	{"Gr_Wales", wxDateTime::Gr_Wales},
	{"Gr_Yugoslavia", wxDateTime::Gr_Yugoslavia},
	{"Country_Unknown", wxDateTime::Country_Unknown},
	{"Country_Default", wxDateTime::Country_Default},
	{"Country_WesternEurope_Start", wxDateTime::Country_WesternEurope_Start},
	{"Country_EEC", wxDateTime::Country_EEC},
	{"France", wxDateTime::France},
	{"Germany", wxDateTime::Germany},
	{"UK", wxDateTime::UK},
	{"Country_WesternEurope_End", wxDateTime::Country_WesternEurope_End},
	{"Russia", wxDateTime::Russia},
	{"USA", wxDateTime::USA},
	{"Jan", wxDateTime::Jan},
	{"Feb", wxDateTime::Feb},
	{"Mar", wxDateTime::Mar},
	{"Apr", wxDateTime::Apr},
	{"May", wxDateTime::May},
	{"Jun", wxDateTime::Jun},
	{"Jul", wxDateTime::Jul},
	{"Aug", wxDateTime::Aug},
	{"Sep", wxDateTime::Sep},
	{"Oct", wxDateTime::Oct},
	{"Nov", wxDateTime::Nov},
	{"Dec", wxDateTime::Dec},
	{"Inv_Month", wxDateTime::Inv_Month},
	{"Sun", wxDateTime::Sun},
	{"Mon", wxDateTime::Mon},
	{"Tue", wxDateTime::Tue},
	{"Wed", wxDateTime::Wed},
	{"Thu", wxDateTime::Thu},
	{"Fri", wxDateTime::Fri},
	{"Sat", wxDateTime::Sat},
	{"Inv_WeekDay", wxDateTime::Inv_WeekDay},
	{"Inv_Year", wxDateTime::Inv_Year},
	{"Name_Full", wxDateTime::Name_Full},
	{"Name_Abbr", wxDateTime::Name_Abbr},
	{"Default_First", wxDateTime::Default_First},
	{"Monday_First", wxDateTime::Monday_First},
	{"Sunday_First", wxDateTime::Sunday_First},
	{0,0}
};


