#include <plug_common.h>

class luna_wrapper_wxTextInputStream {
public:
	typedef Luna< wxTextInputStream > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88780389) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTextInputStream*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxTextInputStream* rhs =(Luna< wxTextInputStream >::check(L,2));
		wxTextInputStream* self=(Luna< wxTextInputStream >::check(L,1));
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

		wxTextInputStream* self= (wxTextInputStream*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTextInputStream >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88780389) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxTextInputStream >::check(L,1));
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

		wxTextInputStream* self=(Luna< wxTextInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTextInputStream");
		
		return luna_dynamicCast(L,converters,"wxTextInputStream",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetInputStream(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Read16(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read16S(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read32(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read32S(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read8(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read8S(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReadDouble(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ReadLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ReadWord(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetStringSeparators(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// const wxInputStream & wxTextInputStream::GetInputStream() const
	static int _bind_GetInputStream(lua_State *L) {
		if (!_lg_typecheck_GetInputStream(L)) {
			luaL_error(L, "luna typecheck failed in const wxInputStream & wxTextInputStream::GetInputStream() const function, expected prototype:\nconst wxInputStream & wxTextInputStream::GetInputStream() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextInputStream* self=(Luna< wxTextInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxInputStream & wxTextInputStream::GetInputStream() const. Got : '%s'\n%s",typeid(Luna< wxTextInputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxInputStream* lret = &self->GetInputStream();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxInputStream >::push(L,lret,false);

		return 1;
	}

	// unsigned short wxTextInputStream::Read16(int base = 10)
	static int _bind_Read16(lua_State *L) {
		if (!_lg_typecheck_Read16(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short wxTextInputStream::Read16(int base = 10) function, expected prototype:\nunsigned short wxTextInputStream::Read16(int base = 10)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int base=luatop>1 ? (int)lua_tointeger(L,2) : (int)10;

		wxTextInputStream* self=(Luna< wxTextInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short wxTextInputStream::Read16(int). Got : '%s'\n%s",typeid(Luna< wxTextInputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->Read16(base);
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed short wxTextInputStream::Read16S(int base = 10)
	static int _bind_Read16S(lua_State *L) {
		if (!_lg_typecheck_Read16S(L)) {
			luaL_error(L, "luna typecheck failed in signed short wxTextInputStream::Read16S(int base = 10) function, expected prototype:\nsigned short wxTextInputStream::Read16S(int base = 10)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int base=luatop>1 ? (int)lua_tointeger(L,2) : (int)10;

		wxTextInputStream* self=(Luna< wxTextInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed short wxTextInputStream::Read16S(int). Got : '%s'\n%s",typeid(Luna< wxTextInputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed short lret = self->Read16S(base);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int wxTextInputStream::Read32(int base = 10)
	static int _bind_Read32(lua_State *L) {
		if (!_lg_typecheck_Read32(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxTextInputStream::Read32(int base = 10) function, expected prototype:\nunsigned int wxTextInputStream::Read32(int base = 10)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int base=luatop>1 ? (int)lua_tointeger(L,2) : (int)10;

		wxTextInputStream* self=(Luna< wxTextInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxTextInputStream::Read32(int). Got : '%s'\n%s",typeid(Luna< wxTextInputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Read32(base);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTextInputStream::Read32S(int base = 10)
	static int _bind_Read32S(lua_State *L) {
		if (!_lg_typecheck_Read32S(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextInputStream::Read32S(int base = 10) function, expected prototype:\nint wxTextInputStream::Read32S(int base = 10)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int base=luatop>1 ? (int)lua_tointeger(L,2) : (int)10;

		wxTextInputStream* self=(Luna< wxTextInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextInputStream::Read32S(int). Got : '%s'\n%s",typeid(Luna< wxTextInputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Read32S(base);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned char wxTextInputStream::Read8(int base = 10)
	static int _bind_Read8(lua_State *L) {
		if (!_lg_typecheck_Read8(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char wxTextInputStream::Read8(int base = 10) function, expected prototype:\nunsigned char wxTextInputStream::Read8(int base = 10)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int base=luatop>1 ? (int)lua_tointeger(L,2) : (int)10;

		wxTextInputStream* self=(Luna< wxTextInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char wxTextInputStream::Read8(int). Got : '%s'\n%s",typeid(Luna< wxTextInputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->Read8(base);
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// signed char wxTextInputStream::Read8S(int base = 10)
	static int _bind_Read8S(lua_State *L) {
		if (!_lg_typecheck_Read8S(L)) {
			luaL_error(L, "luna typecheck failed in signed char wxTextInputStream::Read8S(int base = 10) function, expected prototype:\nsigned char wxTextInputStream::Read8S(int base = 10)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int base=luatop>1 ? (int)lua_tointeger(L,2) : (int)10;

		wxTextInputStream* self=(Luna< wxTextInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char wxTextInputStream::Read8S(int). Got : '%s'\n%s",typeid(Luna< wxTextInputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char lret = self->Read8S(base);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxTextInputStream::ReadDouble()
	static int _bind_ReadDouble(lua_State *L) {
		if (!_lg_typecheck_ReadDouble(L)) {
			luaL_error(L, "luna typecheck failed in double wxTextInputStream::ReadDouble() function, expected prototype:\ndouble wxTextInputStream::ReadDouble()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextInputStream* self=(Luna< wxTextInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double wxTextInputStream::ReadDouble(). Got : '%s'\n%s",typeid(Luna< wxTextInputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->ReadDouble();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxTextInputStream::ReadLine()
	static int _bind_ReadLine(lua_State *L) {
		if (!_lg_typecheck_ReadLine(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTextInputStream::ReadLine() function, expected prototype:\nwxString wxTextInputStream::ReadLine()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextInputStream* self=(Luna< wxTextInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTextInputStream::ReadLine(). Got : '%s'\n%s",typeid(Luna< wxTextInputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->ReadLine();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxTextInputStream::ReadWord()
	static int _bind_ReadWord(lua_State *L) {
		if (!_lg_typecheck_ReadWord(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTextInputStream::ReadWord() function, expected prototype:\nwxString wxTextInputStream::ReadWord()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextInputStream* self=(Luna< wxTextInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTextInputStream::ReadWord(). Got : '%s'\n%s",typeid(Luna< wxTextInputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->ReadWord();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxTextInputStream::SetStringSeparators(const wxString & sep)
	static int _bind_SetStringSeparators(lua_State *L) {
		if (!_lg_typecheck_SetStringSeparators(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextInputStream::SetStringSeparators(const wxString & sep) function, expected prototype:\nvoid wxTextInputStream::SetStringSeparators(const wxString & sep)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString sep(lua_tostring(L,2),lua_objlen(L,2));

		wxTextInputStream* self=(Luna< wxTextInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextInputStream::SetStringSeparators(const wxString &). Got : '%s'\n%s",typeid(Luna< wxTextInputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetStringSeparators(sep);

		return 0;
	}


	// Operator binds:

};

wxTextInputStream* LunaTraits< wxTextInputStream >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxTextInputStream >::_bind_dtor(wxTextInputStream* obj) {
	delete obj;
}

const char LunaTraits< wxTextInputStream >::className[] = "wxTextInputStream";
const char LunaTraits< wxTextInputStream >::fullName[] = "wxTextInputStream";
const char LunaTraits< wxTextInputStream >::moduleName[] = "wx";
const char* LunaTraits< wxTextInputStream >::parents[] = {0};
const int LunaTraits< wxTextInputStream >::hash = 88780389;
const int LunaTraits< wxTextInputStream >::uniqueIDs[] = {88780389,0};

luna_RegType LunaTraits< wxTextInputStream >::methods[] = {
	{"GetInputStream", &luna_wrapper_wxTextInputStream::_bind_GetInputStream},
	{"Read16", &luna_wrapper_wxTextInputStream::_bind_Read16},
	{"Read16S", &luna_wrapper_wxTextInputStream::_bind_Read16S},
	{"Read32", &luna_wrapper_wxTextInputStream::_bind_Read32},
	{"Read32S", &luna_wrapper_wxTextInputStream::_bind_Read32S},
	{"Read8", &luna_wrapper_wxTextInputStream::_bind_Read8},
	{"Read8S", &luna_wrapper_wxTextInputStream::_bind_Read8S},
	{"ReadDouble", &luna_wrapper_wxTextInputStream::_bind_ReadDouble},
	{"ReadLine", &luna_wrapper_wxTextInputStream::_bind_ReadLine},
	{"ReadWord", &luna_wrapper_wxTextInputStream::_bind_ReadWord},
	{"SetStringSeparators", &luna_wrapper_wxTextInputStream::_bind_SetStringSeparators},
	{"dynCast", &luna_wrapper_wxTextInputStream::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTextInputStream::_bind___eq},
	{"fromVoid", &luna_wrapper_wxTextInputStream::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTextInputStream::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextInputStream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextInputStream >::enumValues[] = {
	{0,0}
};


