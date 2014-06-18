#include <plug_common.h>

class luna_wrapper_D3DRASTER_STATUS {
public:
	typedef Luna< D3DRASTER_STATUS > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,29207024) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(D3DRASTER_STATUS*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		D3DRASTER_STATUS* rhs =(Luna< D3DRASTER_STATUS >::check(L,2));
		D3DRASTER_STATUS* self=(Luna< D3DRASTER_STATUS >::check(L,1));
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

		D3DRASTER_STATUS* self= (D3DRASTER_STATUS*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< D3DRASTER_STATUS >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,29207024) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< D3DRASTER_STATUS >::check(L,1));
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

		D3DRASTER_STATUS* self=(Luna< D3DRASTER_STATUS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("D3DRASTER_STATUS");
		
		return luna_dynamicCast(L,converters,"D3DRASTER_STATUS",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getInVBlank(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScanLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInVBlank(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScanLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int D3DRASTER_STATUS::InVBlank()
	static int _bind_getInVBlank(lua_State *L) {
		if (!_lg_typecheck_getInVBlank(L)) {
			luaL_error(L, "luna typecheck failed in int D3DRASTER_STATUS::InVBlank() function, expected prototype:\nint D3DRASTER_STATUS::InVBlank()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DRASTER_STATUS* self=(Luna< D3DRASTER_STATUS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int D3DRASTER_STATUS::InVBlank(). Got : '%s'\n%s",typeid(Luna< D3DRASTER_STATUS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->InVBlank;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int D3DRASTER_STATUS::ScanLine()
	static int _bind_getScanLine(lua_State *L) {
		if (!_lg_typecheck_getScanLine(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int D3DRASTER_STATUS::ScanLine() function, expected prototype:\nunsigned int D3DRASTER_STATUS::ScanLine()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DRASTER_STATUS* self=(Luna< D3DRASTER_STATUS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int D3DRASTER_STATUS::ScanLine(). Got : '%s'\n%s",typeid(Luna< D3DRASTER_STATUS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->ScanLine;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void D3DRASTER_STATUS::InVBlank(int value)
	static int _bind_setInVBlank(lua_State *L) {
		if (!_lg_typecheck_setInVBlank(L)) {
			luaL_error(L, "luna typecheck failed in void D3DRASTER_STATUS::InVBlank(int value) function, expected prototype:\nvoid D3DRASTER_STATUS::InVBlank(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		D3DRASTER_STATUS* self=(Luna< D3DRASTER_STATUS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DRASTER_STATUS::InVBlank(int). Got : '%s'\n%s",typeid(Luna< D3DRASTER_STATUS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->InVBlank = value;

		return 0;
	}

	// void D3DRASTER_STATUS::ScanLine(unsigned int value)
	static int _bind_setScanLine(lua_State *L) {
		if (!_lg_typecheck_setScanLine(L)) {
			luaL_error(L, "luna typecheck failed in void D3DRASTER_STATUS::ScanLine(unsigned int value) function, expected prototype:\nvoid D3DRASTER_STATUS::ScanLine(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		D3DRASTER_STATUS* self=(Luna< D3DRASTER_STATUS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DRASTER_STATUS::ScanLine(unsigned int). Got : '%s'\n%s",typeid(Luna< D3DRASTER_STATUS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ScanLine = value;

		return 0;
	}


	// Operator binds:

};

D3DRASTER_STATUS* LunaTraits< D3DRASTER_STATUS >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< D3DRASTER_STATUS >::_bind_dtor(D3DRASTER_STATUS* obj) {
	delete obj;
}

const char LunaTraits< D3DRASTER_STATUS >::className[] = "D3DRASTER_STATUS";
const char LunaTraits< D3DRASTER_STATUS >::fullName[] = "D3DRASTER_STATUS";
const char LunaTraits< D3DRASTER_STATUS >::moduleName[] = "dx9";
const char* LunaTraits< D3DRASTER_STATUS >::parents[] = {0};
const int LunaTraits< D3DRASTER_STATUS >::hash = 29207024;
const int LunaTraits< D3DRASTER_STATUS >::uniqueIDs[] = {29207024,0};

luna_RegType LunaTraits< D3DRASTER_STATUS >::methods[] = {
	{"getInVBlank", &luna_wrapper_D3DRASTER_STATUS::_bind_getInVBlank},
	{"getScanLine", &luna_wrapper_D3DRASTER_STATUS::_bind_getScanLine},
	{"setInVBlank", &luna_wrapper_D3DRASTER_STATUS::_bind_setInVBlank},
	{"setScanLine", &luna_wrapper_D3DRASTER_STATUS::_bind_setScanLine},
	{"dynCast", &luna_wrapper_D3DRASTER_STATUS::_bind_dynCast},
	{"__eq", &luna_wrapper_D3DRASTER_STATUS::_bind___eq},
	{"fromVoid", &luna_wrapper_D3DRASTER_STATUS::_bind_fromVoid},
	{"asVoid", &luna_wrapper_D3DRASTER_STATUS::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< D3DRASTER_STATUS >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< D3DRASTER_STATUS >::enumValues[] = {
	{0,0}
};


