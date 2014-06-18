#include <plug_common.h>

class luna_wrapper_D3DADAPTER_IDENTIFIER9 {
public:
	typedef Luna< D3DADAPTER_IDENTIFIER9 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,34471055) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(D3DADAPTER_IDENTIFIER9*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		D3DADAPTER_IDENTIFIER9* rhs =(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,2));
		D3DADAPTER_IDENTIFIER9* self=(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1));
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

		D3DADAPTER_IDENTIFIER9* self= (D3DADAPTER_IDENTIFIER9*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< D3DADAPTER_IDENTIFIER9 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,34471055) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1));
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

		D3DADAPTER_IDENTIFIER9* self=(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("D3DADAPTER_IDENTIFIER9");
		
		return luna_dynamicCast(L,converters,"D3DADAPTER_IDENTIFIER9",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getVendorId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDeviceId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSubSysId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRevision(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDeviceIdentifier(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWHQLLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVendorId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDeviceId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSubSysId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRevision(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDeviceIdentifier(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2199177) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWHQLLevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned long D3DADAPTER_IDENTIFIER9::VendorId()
	static int _bind_getVendorId(lua_State *L) {
		if (!_lg_typecheck_getVendorId(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DADAPTER_IDENTIFIER9::VendorId() function, expected prototype:\nunsigned long D3DADAPTER_IDENTIFIER9::VendorId()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DADAPTER_IDENTIFIER9* self=(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DADAPTER_IDENTIFIER9::VendorId(). Got : '%s'\n%s",typeid(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->VendorId;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DADAPTER_IDENTIFIER9::DeviceId()
	static int _bind_getDeviceId(lua_State *L) {
		if (!_lg_typecheck_getDeviceId(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DADAPTER_IDENTIFIER9::DeviceId() function, expected prototype:\nunsigned long D3DADAPTER_IDENTIFIER9::DeviceId()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DADAPTER_IDENTIFIER9* self=(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DADAPTER_IDENTIFIER9::DeviceId(). Got : '%s'\n%s",typeid(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->DeviceId;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DADAPTER_IDENTIFIER9::SubSysId()
	static int _bind_getSubSysId(lua_State *L) {
		if (!_lg_typecheck_getSubSysId(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DADAPTER_IDENTIFIER9::SubSysId() function, expected prototype:\nunsigned long D3DADAPTER_IDENTIFIER9::SubSysId()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DADAPTER_IDENTIFIER9* self=(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DADAPTER_IDENTIFIER9::SubSysId(). Got : '%s'\n%s",typeid(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->SubSysId;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DADAPTER_IDENTIFIER9::Revision()
	static int _bind_getRevision(lua_State *L) {
		if (!_lg_typecheck_getRevision(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DADAPTER_IDENTIFIER9::Revision() function, expected prototype:\nunsigned long D3DADAPTER_IDENTIFIER9::Revision()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DADAPTER_IDENTIFIER9* self=(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DADAPTER_IDENTIFIER9::Revision(). Got : '%s'\n%s",typeid(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->Revision;
		lua_pushnumber(L,lret);

		return 1;
	}

	// GUID D3DADAPTER_IDENTIFIER9::DeviceIdentifier()
	static int _bind_getDeviceIdentifier(lua_State *L) {
		if (!_lg_typecheck_getDeviceIdentifier(L)) {
			luaL_error(L, "luna typecheck failed in GUID D3DADAPTER_IDENTIFIER9::DeviceIdentifier() function, expected prototype:\nGUID D3DADAPTER_IDENTIFIER9::DeviceIdentifier()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DADAPTER_IDENTIFIER9* self=(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call GUID D3DADAPTER_IDENTIFIER9::DeviceIdentifier(). Got : '%s'\n%s",typeid(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const GUID* lret = &self->DeviceIdentifier;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< GUID >::push(L,lret,false);

		return 1;
	}

	// unsigned long D3DADAPTER_IDENTIFIER9::WHQLLevel()
	static int _bind_getWHQLLevel(lua_State *L) {
		if (!_lg_typecheck_getWHQLLevel(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DADAPTER_IDENTIFIER9::WHQLLevel() function, expected prototype:\nunsigned long D3DADAPTER_IDENTIFIER9::WHQLLevel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DADAPTER_IDENTIFIER9* self=(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DADAPTER_IDENTIFIER9::WHQLLevel(). Got : '%s'\n%s",typeid(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->WHQLLevel;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void D3DADAPTER_IDENTIFIER9::VendorId(unsigned long value)
	static int _bind_setVendorId(lua_State *L) {
		if (!_lg_typecheck_setVendorId(L)) {
			luaL_error(L, "luna typecheck failed in void D3DADAPTER_IDENTIFIER9::VendorId(unsigned long value) function, expected prototype:\nvoid D3DADAPTER_IDENTIFIER9::VendorId(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DADAPTER_IDENTIFIER9* self=(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DADAPTER_IDENTIFIER9::VendorId(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VendorId = value;

		return 0;
	}

	// void D3DADAPTER_IDENTIFIER9::DeviceId(unsigned long value)
	static int _bind_setDeviceId(lua_State *L) {
		if (!_lg_typecheck_setDeviceId(L)) {
			luaL_error(L, "luna typecheck failed in void D3DADAPTER_IDENTIFIER9::DeviceId(unsigned long value) function, expected prototype:\nvoid D3DADAPTER_IDENTIFIER9::DeviceId(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DADAPTER_IDENTIFIER9* self=(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DADAPTER_IDENTIFIER9::DeviceId(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeviceId = value;

		return 0;
	}

	// void D3DADAPTER_IDENTIFIER9::SubSysId(unsigned long value)
	static int _bind_setSubSysId(lua_State *L) {
		if (!_lg_typecheck_setSubSysId(L)) {
			luaL_error(L, "luna typecheck failed in void D3DADAPTER_IDENTIFIER9::SubSysId(unsigned long value) function, expected prototype:\nvoid D3DADAPTER_IDENTIFIER9::SubSysId(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DADAPTER_IDENTIFIER9* self=(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DADAPTER_IDENTIFIER9::SubSysId(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SubSysId = value;

		return 0;
	}

	// void D3DADAPTER_IDENTIFIER9::Revision(unsigned long value)
	static int _bind_setRevision(lua_State *L) {
		if (!_lg_typecheck_setRevision(L)) {
			luaL_error(L, "luna typecheck failed in void D3DADAPTER_IDENTIFIER9::Revision(unsigned long value) function, expected prototype:\nvoid D3DADAPTER_IDENTIFIER9::Revision(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DADAPTER_IDENTIFIER9* self=(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DADAPTER_IDENTIFIER9::Revision(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Revision = value;

		return 0;
	}

	// void D3DADAPTER_IDENTIFIER9::DeviceIdentifier(GUID value)
	static int _bind_setDeviceIdentifier(lua_State *L) {
		if (!_lg_typecheck_setDeviceIdentifier(L)) {
			luaL_error(L, "luna typecheck failed in void D3DADAPTER_IDENTIFIER9::DeviceIdentifier(GUID value) function, expected prototype:\nvoid D3DADAPTER_IDENTIFIER9::DeviceIdentifier(GUID value)\nClass arguments details:\narg 1 ID = 2199177\n\n%s",luna_dumpStack(L).c_str());
		}

		GUID* value_ptr=(Luna< GUID >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in D3DADAPTER_IDENTIFIER9::DeviceIdentifier function");
		}
		GUID value=*value_ptr;

		D3DADAPTER_IDENTIFIER9* self=(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DADAPTER_IDENTIFIER9::DeviceIdentifier(GUID). Got : '%s'\n%s",typeid(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeviceIdentifier = value;

		return 0;
	}

	// void D3DADAPTER_IDENTIFIER9::WHQLLevel(unsigned long value)
	static int _bind_setWHQLLevel(lua_State *L) {
		if (!_lg_typecheck_setWHQLLevel(L)) {
			luaL_error(L, "luna typecheck failed in void D3DADAPTER_IDENTIFIER9::WHQLLevel(unsigned long value) function, expected prototype:\nvoid D3DADAPTER_IDENTIFIER9::WHQLLevel(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DADAPTER_IDENTIFIER9* self=(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DADAPTER_IDENTIFIER9::WHQLLevel(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WHQLLevel = value;

		return 0;
	}


	// Operator binds:

};

D3DADAPTER_IDENTIFIER9* LunaTraits< D3DADAPTER_IDENTIFIER9 >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< D3DADAPTER_IDENTIFIER9 >::_bind_dtor(D3DADAPTER_IDENTIFIER9* obj) {
	delete obj;
}

const char LunaTraits< D3DADAPTER_IDENTIFIER9 >::className[] = "D3DADAPTER_IDENTIFIER9";
const char LunaTraits< D3DADAPTER_IDENTIFIER9 >::fullName[] = "D3DADAPTER_IDENTIFIER9";
const char LunaTraits< D3DADAPTER_IDENTIFIER9 >::moduleName[] = "dx9";
const char* LunaTraits< D3DADAPTER_IDENTIFIER9 >::parents[] = {0};
const int LunaTraits< D3DADAPTER_IDENTIFIER9 >::hash = 34471055;
const int LunaTraits< D3DADAPTER_IDENTIFIER9 >::uniqueIDs[] = {34471055,0};

luna_RegType LunaTraits< D3DADAPTER_IDENTIFIER9 >::methods[] = {
	{"getVendorId", &luna_wrapper_D3DADAPTER_IDENTIFIER9::_bind_getVendorId},
	{"getDeviceId", &luna_wrapper_D3DADAPTER_IDENTIFIER9::_bind_getDeviceId},
	{"getSubSysId", &luna_wrapper_D3DADAPTER_IDENTIFIER9::_bind_getSubSysId},
	{"getRevision", &luna_wrapper_D3DADAPTER_IDENTIFIER9::_bind_getRevision},
	{"getDeviceIdentifier", &luna_wrapper_D3DADAPTER_IDENTIFIER9::_bind_getDeviceIdentifier},
	{"getWHQLLevel", &luna_wrapper_D3DADAPTER_IDENTIFIER9::_bind_getWHQLLevel},
	{"setVendorId", &luna_wrapper_D3DADAPTER_IDENTIFIER9::_bind_setVendorId},
	{"setDeviceId", &luna_wrapper_D3DADAPTER_IDENTIFIER9::_bind_setDeviceId},
	{"setSubSysId", &luna_wrapper_D3DADAPTER_IDENTIFIER9::_bind_setSubSysId},
	{"setRevision", &luna_wrapper_D3DADAPTER_IDENTIFIER9::_bind_setRevision},
	{"setDeviceIdentifier", &luna_wrapper_D3DADAPTER_IDENTIFIER9::_bind_setDeviceIdentifier},
	{"setWHQLLevel", &luna_wrapper_D3DADAPTER_IDENTIFIER9::_bind_setWHQLLevel},
	{"dynCast", &luna_wrapper_D3DADAPTER_IDENTIFIER9::_bind_dynCast},
	{"__eq", &luna_wrapper_D3DADAPTER_IDENTIFIER9::_bind___eq},
	{"fromVoid", &luna_wrapper_D3DADAPTER_IDENTIFIER9::_bind_fromVoid},
	{"asVoid", &luna_wrapper_D3DADAPTER_IDENTIFIER9::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< D3DADAPTER_IDENTIFIER9 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< D3DADAPTER_IDENTIFIER9 >::enumValues[] = {
	{0,0}
};


