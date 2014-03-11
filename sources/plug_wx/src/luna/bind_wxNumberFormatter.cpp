#include <plug_common.h>

class luna_wrapper_wxNumberFormatter {
public:
	typedef Luna< wxNumberFormatter > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,27021326) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxNumberFormatter*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxNumberFormatter* rhs =(Luna< wxNumberFormatter >::check(L,2));
		wxNumberFormatter* self=(Luna< wxNumberFormatter >::check(L,1));
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

		wxNumberFormatter* self= (wxNumberFormatter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxNumberFormatter >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,27021326) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxNumberFormatter >::check(L,1));
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

		wxNumberFormatter* self=(Luna< wxNumberFormatter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxNumberFormatter");
		
		return luna_dynamicCast(L,converters,"wxNumberFormatter",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_ToString_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ToString_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FromString_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FromString_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static wxString wxNumberFormatter::ToString(long val, int flags = wxNumberFormatter::Style_WithThousandsSep)
	static int _bind_ToString_overload_1(lua_State *L) {
		if (!_lg_typecheck_ToString_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxNumberFormatter::ToString(long val, int flags = wxNumberFormatter::Style_WithThousandsSep) function, expected prototype:\nstatic wxString wxNumberFormatter::ToString(long val, int flags = wxNumberFormatter::Style_WithThousandsSep)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long val=(long)lua_tonumber(L,1);
		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxNumberFormatter::Style_WithThousandsSep;

		wxString lret = wxNumberFormatter::ToString(val, flags);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxNumberFormatter::ToString(double val, int precision, int flags = wxNumberFormatter::Style_WithThousandsSep)
	static int _bind_ToString_overload_2(lua_State *L) {
		if (!_lg_typecheck_ToString_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxNumberFormatter::ToString(double val, int precision, int flags = wxNumberFormatter::Style_WithThousandsSep) function, expected prototype:\nstatic wxString wxNumberFormatter::ToString(double val, int precision, int flags = wxNumberFormatter::Style_WithThousandsSep)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double val=(double)lua_tonumber(L,1);
		int precision=(int)lua_tointeger(L,2);
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)wxNumberFormatter::Style_WithThousandsSep;

		wxString lret = wxNumberFormatter::ToString(val, precision, flags);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// Overload binder for wxNumberFormatter::ToString
	static int _bind_ToString(lua_State *L) {
		if (_lg_typecheck_ToString_overload_1(L)) return _bind_ToString_overload_1(L);
		if (_lg_typecheck_ToString_overload_2(L)) return _bind_ToString_overload_2(L);

		luaL_error(L, "error in function ToString, cannot match any of the overloads for function ToString:\n  ToString(long, int)\n  ToString(double, int, int)\n");
		return 0;
	}

	// static bool wxNumberFormatter::FromString(wxString s, long * val)
	static int _bind_FromString_overload_1(lua_State *L) {
		if (!_lg_typecheck_FromString_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxNumberFormatter::FromString(wxString s, long * val) function, expected prototype:\nstatic bool wxNumberFormatter::FromString(wxString s, long * val)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString s(lua_tostring(L,1),lua_objlen(L,1));
		long* val=(long*)Luna< void >::check(L,2);

		bool lret = wxNumberFormatter::FromString(s, val);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxNumberFormatter::FromString(wxString s, double * val)
	static int _bind_FromString_overload_2(lua_State *L) {
		if (!_lg_typecheck_FromString_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxNumberFormatter::FromString(wxString s, double * val) function, expected prototype:\nstatic bool wxNumberFormatter::FromString(wxString s, double * val)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString s(lua_tostring(L,1),lua_objlen(L,1));
		double* val=(double*)Luna< void >::check(L,2);

		bool lret = wxNumberFormatter::FromString(s, val);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxNumberFormatter::FromString
	static int _bind_FromString(lua_State *L) {
		if (_lg_typecheck_FromString_overload_1(L)) return _bind_FromString_overload_1(L);
		if (_lg_typecheck_FromString_overload_2(L)) return _bind_FromString_overload_2(L);

		luaL_error(L, "error in function FromString, cannot match any of the overloads for function FromString:\n  FromString(wxString, long *)\n  FromString(wxString, double *)\n");
		return 0;
	}


	// Operator binds:

};

wxNumberFormatter* LunaTraits< wxNumberFormatter >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxNumberFormatter >::_bind_dtor(wxNumberFormatter* obj) {
	delete obj;
}

const char LunaTraits< wxNumberFormatter >::className[] = "wxNumberFormatter";
const char LunaTraits< wxNumberFormatter >::fullName[] = "wxNumberFormatter";
const char LunaTraits< wxNumberFormatter >::moduleName[] = "wx";
const char* LunaTraits< wxNumberFormatter >::parents[] = {0};
const int LunaTraits< wxNumberFormatter >::hash = 27021326;
const int LunaTraits< wxNumberFormatter >::uniqueIDs[] = {27021326,0};

luna_RegType LunaTraits< wxNumberFormatter >::methods[] = {
	{"ToString", &luna_wrapper_wxNumberFormatter::_bind_ToString},
	{"FromString", &luna_wrapper_wxNumberFormatter::_bind_FromString},
	{"dynCast", &luna_wrapper_wxNumberFormatter::_bind_dynCast},
	{"__eq", &luna_wrapper_wxNumberFormatter::_bind___eq},
	{"fromVoid", &luna_wrapper_wxNumberFormatter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxNumberFormatter::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxNumberFormatter >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxNumberFormatter >::enumValues[] = {
	{"Style_None", wxNumberFormatter::Style_None},
	{"Style_WithThousandsSep", wxNumberFormatter::Style_WithThousandsSep},
	{"Style_NoTrailingZeroes", wxNumberFormatter::Style_NoTrailingZeroes},
	{0,0}
};


