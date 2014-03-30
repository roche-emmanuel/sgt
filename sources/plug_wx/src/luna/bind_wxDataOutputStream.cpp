#include <plug_common.h>

class luna_wrapper_wxDataOutputStream {
public:
	typedef Luna< wxDataOutputStream > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26887015) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDataOutputStream*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDataOutputStream* rhs =(Luna< wxDataOutputStream >::check(L,2));
		wxDataOutputStream* self=(Luna< wxDataOutputStream >::check(L,1));
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

		wxDataOutputStream* self= (wxDataOutputStream*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDataOutputStream >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26887015) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxDataOutputStream >::check(L,1));
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

		wxDataOutputStream* self=(Luna< wxDataOutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDataOutputStream");
		
		return luna_dynamicCast(L,converters,"wxDataOutputStream",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_BigEndianOrdered(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Write8_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Write8_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Write16_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Write16_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Write32_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Write32_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WriteDouble_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WriteDouble_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WriteString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxDataOutputStream::BigEndianOrdered(bool be_order)
	static int _bind_BigEndianOrdered(lua_State *L) {
		if (!_lg_typecheck_BigEndianOrdered(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataOutputStream::BigEndianOrdered(bool be_order) function, expected prototype:\nvoid wxDataOutputStream::BigEndianOrdered(bool be_order)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool be_order=(bool)(lua_toboolean(L,2)==1);

		wxDataOutputStream* self=(Luna< wxDataOutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataOutputStream::BigEndianOrdered(bool). Got : '%s'\n%s",typeid(Luna< wxDataOutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BigEndianOrdered(be_order);

		return 0;
	}

	// void wxDataOutputStream::Write8(unsigned char i8)
	static int _bind_Write8_overload_1(lua_State *L) {
		if (!_lg_typecheck_Write8_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataOutputStream::Write8(unsigned char i8) function, expected prototype:\nvoid wxDataOutputStream::Write8(unsigned char i8)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char i8 = (unsigned char)(lua_tointeger(L,2));

		wxDataOutputStream* self=(Luna< wxDataOutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataOutputStream::Write8(unsigned char). Got : '%s'\n%s",typeid(Luna< wxDataOutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Write8(i8);

		return 0;
	}

	// void wxDataOutputStream::Write8(const unsigned char * buffer, size_t size)
	static int _bind_Write8_overload_2(lua_State *L) {
		if (!_lg_typecheck_Write8_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataOutputStream::Write8(const unsigned char * buffer, size_t size) function, expected prototype:\nvoid wxDataOutputStream::Write8(const unsigned char * buffer, size_t size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char buffer = (unsigned char)(lua_tointeger(L,2));
		size_t size=(size_t)lua_tointeger(L,3);

		wxDataOutputStream* self=(Luna< wxDataOutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataOutputStream::Write8(const unsigned char *, size_t). Got : '%s'\n%s",typeid(Luna< wxDataOutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Write8(&buffer, size);

		return 0;
	}

	// Overload binder for wxDataOutputStream::Write8
	static int _bind_Write8(lua_State *L) {
		if (_lg_typecheck_Write8_overload_1(L)) return _bind_Write8_overload_1(L);
		if (_lg_typecheck_Write8_overload_2(L)) return _bind_Write8_overload_2(L);

		luaL_error(L, "error in function Write8, cannot match any of the overloads for function Write8:\n  Write8(unsigned char)\n  Write8(const unsigned char *, size_t)\n");
		return 0;
	}

	// void wxDataOutputStream::Write16(unsigned short i16)
	static int _bind_Write16_overload_1(lua_State *L) {
		if (!_lg_typecheck_Write16_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataOutputStream::Write16(unsigned short i16) function, expected prototype:\nvoid wxDataOutputStream::Write16(unsigned short i16)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short i16=(unsigned short)lua_tointeger(L,2);

		wxDataOutputStream* self=(Luna< wxDataOutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataOutputStream::Write16(unsigned short). Got : '%s'\n%s",typeid(Luna< wxDataOutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Write16(i16);

		return 0;
	}

	// void wxDataOutputStream::Write16(const unsigned short * buffer, size_t size)
	static int _bind_Write16_overload_2(lua_State *L) {
		if (!_lg_typecheck_Write16_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataOutputStream::Write16(const unsigned short * buffer, size_t size) function, expected prototype:\nvoid wxDataOutputStream::Write16(const unsigned short * buffer, size_t size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const unsigned short* buffer=(const unsigned short*)Luna< void >::check(L,2);
		size_t size=(size_t)lua_tointeger(L,3);

		wxDataOutputStream* self=(Luna< wxDataOutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataOutputStream::Write16(const unsigned short *, size_t). Got : '%s'\n%s",typeid(Luna< wxDataOutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Write16(buffer, size);

		return 0;
	}

	// Overload binder for wxDataOutputStream::Write16
	static int _bind_Write16(lua_State *L) {
		if (_lg_typecheck_Write16_overload_1(L)) return _bind_Write16_overload_1(L);
		if (_lg_typecheck_Write16_overload_2(L)) return _bind_Write16_overload_2(L);

		luaL_error(L, "error in function Write16, cannot match any of the overloads for function Write16:\n  Write16(unsigned short)\n  Write16(const unsigned short *, size_t)\n");
		return 0;
	}

	// void wxDataOutputStream::Write32(unsigned int i32)
	static int _bind_Write32_overload_1(lua_State *L) {
		if (!_lg_typecheck_Write32_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataOutputStream::Write32(unsigned int i32) function, expected prototype:\nvoid wxDataOutputStream::Write32(unsigned int i32)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i32=(unsigned int)lua_tointeger(L,2);

		wxDataOutputStream* self=(Luna< wxDataOutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataOutputStream::Write32(unsigned int). Got : '%s'\n%s",typeid(Luna< wxDataOutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Write32(i32);

		return 0;
	}

	// void wxDataOutputStream::Write32(const unsigned int * buffer, size_t size)
	static int _bind_Write32_overload_2(lua_State *L) {
		if (!_lg_typecheck_Write32_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataOutputStream::Write32(const unsigned int * buffer, size_t size) function, expected prototype:\nvoid wxDataOutputStream::Write32(const unsigned int * buffer, size_t size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const unsigned int* buffer=(const unsigned int*)Luna< void >::check(L,2);
		size_t size=(size_t)lua_tointeger(L,3);

		wxDataOutputStream* self=(Luna< wxDataOutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataOutputStream::Write32(const unsigned int *, size_t). Got : '%s'\n%s",typeid(Luna< wxDataOutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Write32(buffer, size);

		return 0;
	}

	// Overload binder for wxDataOutputStream::Write32
	static int _bind_Write32(lua_State *L) {
		if (_lg_typecheck_Write32_overload_1(L)) return _bind_Write32_overload_1(L);
		if (_lg_typecheck_Write32_overload_2(L)) return _bind_Write32_overload_2(L);

		luaL_error(L, "error in function Write32, cannot match any of the overloads for function Write32:\n  Write32(unsigned int)\n  Write32(const unsigned int *, size_t)\n");
		return 0;
	}

	// void wxDataOutputStream::WriteDouble(double f)
	static int _bind_WriteDouble_overload_1(lua_State *L) {
		if (!_lg_typecheck_WriteDouble_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataOutputStream::WriteDouble(double f) function, expected prototype:\nvoid wxDataOutputStream::WriteDouble(double f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double f=(double)lua_tonumber(L,2);

		wxDataOutputStream* self=(Luna< wxDataOutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataOutputStream::WriteDouble(double). Got : '%s'\n%s",typeid(Luna< wxDataOutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WriteDouble(f);

		return 0;
	}

	// void wxDataOutputStream::WriteDouble(const double * buffer, size_t size)
	static int _bind_WriteDouble_overload_2(lua_State *L) {
		if (!_lg_typecheck_WriteDouble_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataOutputStream::WriteDouble(const double * buffer, size_t size) function, expected prototype:\nvoid wxDataOutputStream::WriteDouble(const double * buffer, size_t size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const double* buffer=(const double*)Luna< void >::check(L,2);
		size_t size=(size_t)lua_tointeger(L,3);

		wxDataOutputStream* self=(Luna< wxDataOutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataOutputStream::WriteDouble(const double *, size_t). Got : '%s'\n%s",typeid(Luna< wxDataOutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WriteDouble(buffer, size);

		return 0;
	}

	// Overload binder for wxDataOutputStream::WriteDouble
	static int _bind_WriteDouble(lua_State *L) {
		if (_lg_typecheck_WriteDouble_overload_1(L)) return _bind_WriteDouble_overload_1(L);
		if (_lg_typecheck_WriteDouble_overload_2(L)) return _bind_WriteDouble_overload_2(L);

		luaL_error(L, "error in function WriteDouble, cannot match any of the overloads for function WriteDouble:\n  WriteDouble(double)\n  WriteDouble(const double *, size_t)\n");
		return 0;
	}

	// void wxDataOutputStream::WriteString(const wxString & string)
	static int _bind_WriteString(lua_State *L) {
		if (!_lg_typecheck_WriteString(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataOutputStream::WriteString(const wxString & string) function, expected prototype:\nvoid wxDataOutputStream::WriteString(const wxString & string)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString string(lua_tostring(L,2),lua_objlen(L,2));

		wxDataOutputStream* self=(Luna< wxDataOutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataOutputStream::WriteString(const wxString &). Got : '%s'\n%s",typeid(Luna< wxDataOutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WriteString(string);

		return 0;
	}


	// Operator binds:

};

wxDataOutputStream* LunaTraits< wxDataOutputStream >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxDataOutputStream >::_bind_dtor(wxDataOutputStream* obj) {
	delete obj;
}

const char LunaTraits< wxDataOutputStream >::className[] = "wxDataOutputStream";
const char LunaTraits< wxDataOutputStream >::fullName[] = "wxDataOutputStream";
const char LunaTraits< wxDataOutputStream >::moduleName[] = "wx";
const char* LunaTraits< wxDataOutputStream >::parents[] = {0};
const int LunaTraits< wxDataOutputStream >::hash = 26887015;
const int LunaTraits< wxDataOutputStream >::uniqueIDs[] = {26887015,0};

luna_RegType LunaTraits< wxDataOutputStream >::methods[] = {
	{"BigEndianOrdered", &luna_wrapper_wxDataOutputStream::_bind_BigEndianOrdered},
	{"Write8", &luna_wrapper_wxDataOutputStream::_bind_Write8},
	{"Write16", &luna_wrapper_wxDataOutputStream::_bind_Write16},
	{"Write32", &luna_wrapper_wxDataOutputStream::_bind_Write32},
	{"WriteDouble", &luna_wrapper_wxDataOutputStream::_bind_WriteDouble},
	{"WriteString", &luna_wrapper_wxDataOutputStream::_bind_WriteString},
	{"dynCast", &luna_wrapper_wxDataOutputStream::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDataOutputStream::_bind___eq},
	{"fromVoid", &luna_wrapper_wxDataOutputStream::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDataOutputStream::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataOutputStream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataOutputStream >::enumValues[] = {
	{0,0}
};


