#include <plug_common.h>

class luna_wrapper_wxDataInputStream {
public:
	typedef Luna< wxDataInputStream > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72882318) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDataInputStream*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDataInputStream* rhs =(Luna< wxDataInputStream >::check(L,2));
		wxDataInputStream* self=(Luna< wxDataInputStream >::check(L,1));
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

		wxDataInputStream* self= (wxDataInputStream*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDataInputStream >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72882318) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxDataInputStream >::check(L,1));
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

		wxDataInputStream* self=(Luna< wxDataInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDataInputStream");
		
		return luna_dynamicCast(L,converters,"wxDataInputStream",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_BigEndianOrdered(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read8_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Read8_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read16_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Read16_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read32_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Read32_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReadDouble_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ReadDouble_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReadString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxDataInputStream::BigEndianOrdered(bool be_order)
	static int _bind_BigEndianOrdered(lua_State *L) {
		if (!_lg_typecheck_BigEndianOrdered(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataInputStream::BigEndianOrdered(bool be_order) function, expected prototype:\nvoid wxDataInputStream::BigEndianOrdered(bool be_order)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool be_order=(bool)(lua_toboolean(L,2)==1);

		wxDataInputStream* self=(Luna< wxDataInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataInputStream::BigEndianOrdered(bool). Got : '%s'\n%s",typeid(Luna< wxDataInputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BigEndianOrdered(be_order);

		return 0;
	}

	// unsigned char wxDataInputStream::Read8()
	static int _bind_Read8_overload_1(lua_State *L) {
		if (!_lg_typecheck_Read8_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char wxDataInputStream::Read8() function, expected prototype:\nunsigned char wxDataInputStream::Read8()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataInputStream* self=(Luna< wxDataInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char wxDataInputStream::Read8(). Got : '%s'\n%s",typeid(Luna< wxDataInputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->Read8();
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// void wxDataInputStream::Read8(unsigned char * buffer, size_t size)
	static int _bind_Read8_overload_2(lua_State *L) {
		if (!_lg_typecheck_Read8_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataInputStream::Read8(unsigned char * buffer, size_t size) function, expected prototype:\nvoid wxDataInputStream::Read8(unsigned char * buffer, size_t size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char buffer = (unsigned char)(lua_tointeger(L,2));
		size_t size=(size_t)lua_tointeger(L,3);

		wxDataInputStream* self=(Luna< wxDataInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataInputStream::Read8(unsigned char *, size_t). Got : '%s'\n%s",typeid(Luna< wxDataInputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Read8(&buffer, size);

		return 0;
	}

	// Overload binder for wxDataInputStream::Read8
	static int _bind_Read8(lua_State *L) {
		if (_lg_typecheck_Read8_overload_1(L)) return _bind_Read8_overload_1(L);
		if (_lg_typecheck_Read8_overload_2(L)) return _bind_Read8_overload_2(L);

		luaL_error(L, "error in function Read8, cannot match any of the overloads for function Read8:\n  Read8()\n  Read8(unsigned char *, size_t)\n");
		return 0;
	}

	// unsigned short wxDataInputStream::Read16()
	static int _bind_Read16_overload_1(lua_State *L) {
		if (!_lg_typecheck_Read16_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short wxDataInputStream::Read16() function, expected prototype:\nunsigned short wxDataInputStream::Read16()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataInputStream* self=(Luna< wxDataInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short wxDataInputStream::Read16(). Got : '%s'\n%s",typeid(Luna< wxDataInputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->Read16();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDataInputStream::Read16(unsigned short * buffer, size_t size)
	static int _bind_Read16_overload_2(lua_State *L) {
		if (!_lg_typecheck_Read16_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataInputStream::Read16(unsigned short * buffer, size_t size) function, expected prototype:\nvoid wxDataInputStream::Read16(unsigned short * buffer, size_t size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short* buffer=(unsigned short*)Luna< void >::check(L,2);
		size_t size=(size_t)lua_tointeger(L,3);

		wxDataInputStream* self=(Luna< wxDataInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataInputStream::Read16(unsigned short *, size_t). Got : '%s'\n%s",typeid(Luna< wxDataInputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Read16(buffer, size);

		return 0;
	}

	// Overload binder for wxDataInputStream::Read16
	static int _bind_Read16(lua_State *L) {
		if (_lg_typecheck_Read16_overload_1(L)) return _bind_Read16_overload_1(L);
		if (_lg_typecheck_Read16_overload_2(L)) return _bind_Read16_overload_2(L);

		luaL_error(L, "error in function Read16, cannot match any of the overloads for function Read16:\n  Read16()\n  Read16(unsigned short *, size_t)\n");
		return 0;
	}

	// unsigned int wxDataInputStream::Read32()
	static int _bind_Read32_overload_1(lua_State *L) {
		if (!_lg_typecheck_Read32_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxDataInputStream::Read32() function, expected prototype:\nunsigned int wxDataInputStream::Read32()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataInputStream* self=(Luna< wxDataInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxDataInputStream::Read32(). Got : '%s'\n%s",typeid(Luna< wxDataInputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Read32();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDataInputStream::Read32(unsigned int * buffer, size_t size)
	static int _bind_Read32_overload_2(lua_State *L) {
		if (!_lg_typecheck_Read32_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataInputStream::Read32(unsigned int * buffer, size_t size) function, expected prototype:\nvoid wxDataInputStream::Read32(unsigned int * buffer, size_t size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int* buffer=(unsigned int*)Luna< void >::check(L,2);
		size_t size=(size_t)lua_tointeger(L,3);

		wxDataInputStream* self=(Luna< wxDataInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataInputStream::Read32(unsigned int *, size_t). Got : '%s'\n%s",typeid(Luna< wxDataInputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Read32(buffer, size);

		return 0;
	}

	// Overload binder for wxDataInputStream::Read32
	static int _bind_Read32(lua_State *L) {
		if (_lg_typecheck_Read32_overload_1(L)) return _bind_Read32_overload_1(L);
		if (_lg_typecheck_Read32_overload_2(L)) return _bind_Read32_overload_2(L);

		luaL_error(L, "error in function Read32, cannot match any of the overloads for function Read32:\n  Read32()\n  Read32(unsigned int *, size_t)\n");
		return 0;
	}

	// double wxDataInputStream::ReadDouble()
	static int _bind_ReadDouble_overload_1(lua_State *L) {
		if (!_lg_typecheck_ReadDouble_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double wxDataInputStream::ReadDouble() function, expected prototype:\ndouble wxDataInputStream::ReadDouble()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataInputStream* self=(Luna< wxDataInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double wxDataInputStream::ReadDouble(). Got : '%s'\n%s",typeid(Luna< wxDataInputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->ReadDouble();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDataInputStream::ReadDouble(double * buffer, size_t size)
	static int _bind_ReadDouble_overload_2(lua_State *L) {
		if (!_lg_typecheck_ReadDouble_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataInputStream::ReadDouble(double * buffer, size_t size) function, expected prototype:\nvoid wxDataInputStream::ReadDouble(double * buffer, size_t size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double* buffer=(double*)Luna< void >::check(L,2);
		size_t size=(size_t)lua_tointeger(L,3);

		wxDataInputStream* self=(Luna< wxDataInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataInputStream::ReadDouble(double *, size_t). Got : '%s'\n%s",typeid(Luna< wxDataInputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ReadDouble(buffer, size);

		return 0;
	}

	// Overload binder for wxDataInputStream::ReadDouble
	static int _bind_ReadDouble(lua_State *L) {
		if (_lg_typecheck_ReadDouble_overload_1(L)) return _bind_ReadDouble_overload_1(L);
		if (_lg_typecheck_ReadDouble_overload_2(L)) return _bind_ReadDouble_overload_2(L);

		luaL_error(L, "error in function ReadDouble, cannot match any of the overloads for function ReadDouble:\n  ReadDouble()\n  ReadDouble(double *, size_t)\n");
		return 0;
	}

	// wxString wxDataInputStream::ReadString()
	static int _bind_ReadString(lua_State *L) {
		if (!_lg_typecheck_ReadString(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDataInputStream::ReadString() function, expected prototype:\nwxString wxDataInputStream::ReadString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataInputStream* self=(Luna< wxDataInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDataInputStream::ReadString(). Got : '%s'\n%s",typeid(Luna< wxDataInputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->ReadString();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxDataInputStream* LunaTraits< wxDataInputStream >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxDataInputStream >::_bind_dtor(wxDataInputStream* obj) {
	delete obj;
}

const char LunaTraits< wxDataInputStream >::className[] = "wxDataInputStream";
const char LunaTraits< wxDataInputStream >::fullName[] = "wxDataInputStream";
const char LunaTraits< wxDataInputStream >::moduleName[] = "wx";
const char* LunaTraits< wxDataInputStream >::parents[] = {0};
const int LunaTraits< wxDataInputStream >::hash = 72882318;
const int LunaTraits< wxDataInputStream >::uniqueIDs[] = {72882318,0};

luna_RegType LunaTraits< wxDataInputStream >::methods[] = {
	{"BigEndianOrdered", &luna_wrapper_wxDataInputStream::_bind_BigEndianOrdered},
	{"Read8", &luna_wrapper_wxDataInputStream::_bind_Read8},
	{"Read16", &luna_wrapper_wxDataInputStream::_bind_Read16},
	{"Read32", &luna_wrapper_wxDataInputStream::_bind_Read32},
	{"ReadDouble", &luna_wrapper_wxDataInputStream::_bind_ReadDouble},
	{"ReadString", &luna_wrapper_wxDataInputStream::_bind_ReadString},
	{"dynCast", &luna_wrapper_wxDataInputStream::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDataInputStream::_bind___eq},
	{"fromVoid", &luna_wrapper_wxDataInputStream::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDataInputStream::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataInputStream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataInputStream >::enumValues[] = {
	{0,0}
};


