#include <plug_common.h>

class luna_wrapper_D3DVIEWPORT9 {
public:
	typedef Luna< D3DVIEWPORT9 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92207800) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(D3DVIEWPORT9*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		D3DVIEWPORT9* rhs =(Luna< D3DVIEWPORT9 >::check(L,2));
		D3DVIEWPORT9* self=(Luna< D3DVIEWPORT9 >::check(L,1));
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

		D3DVIEWPORT9* self= (D3DVIEWPORT9*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< D3DVIEWPORT9 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92207800) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< D3DVIEWPORT9 >::check(L,1));
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

		D3DVIEWPORT9* self=(Luna< D3DVIEWPORT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("D3DVIEWPORT9");
		
		return luna_dynamicCast(L,converters,"D3DVIEWPORT9",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMinZ(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxZ(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMinZ(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxZ(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned long D3DVIEWPORT9::X()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DVIEWPORT9::X() function, expected prototype:\nunsigned long D3DVIEWPORT9::X()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DVIEWPORT9* self=(Luna< D3DVIEWPORT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DVIEWPORT9::X(). Got : '%s'\n%s",typeid(Luna< D3DVIEWPORT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->X;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DVIEWPORT9::Y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DVIEWPORT9::Y() function, expected prototype:\nunsigned long D3DVIEWPORT9::Y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DVIEWPORT9* self=(Luna< D3DVIEWPORT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DVIEWPORT9::Y(). Got : '%s'\n%s",typeid(Luna< D3DVIEWPORT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->Y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DVIEWPORT9::Width()
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DVIEWPORT9::Width() function, expected prototype:\nunsigned long D3DVIEWPORT9::Width()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DVIEWPORT9* self=(Luna< D3DVIEWPORT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DVIEWPORT9::Width(). Got : '%s'\n%s",typeid(Luna< D3DVIEWPORT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->Width;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DVIEWPORT9::Height()
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DVIEWPORT9::Height() function, expected prototype:\nunsigned long D3DVIEWPORT9::Height()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DVIEWPORT9* self=(Luna< D3DVIEWPORT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DVIEWPORT9::Height(). Got : '%s'\n%s",typeid(Luna< D3DVIEWPORT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->Height;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float D3DVIEWPORT9::MinZ()
	static int _bind_getMinZ(lua_State *L) {
		if (!_lg_typecheck_getMinZ(L)) {
			luaL_error(L, "luna typecheck failed in float D3DVIEWPORT9::MinZ() function, expected prototype:\nfloat D3DVIEWPORT9::MinZ()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DVIEWPORT9* self=(Luna< D3DVIEWPORT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DVIEWPORT9::MinZ(). Got : '%s'\n%s",typeid(Luna< D3DVIEWPORT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->MinZ;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float D3DVIEWPORT9::MaxZ()
	static int _bind_getMaxZ(lua_State *L) {
		if (!_lg_typecheck_getMaxZ(L)) {
			luaL_error(L, "luna typecheck failed in float D3DVIEWPORT9::MaxZ() function, expected prototype:\nfloat D3DVIEWPORT9::MaxZ()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DVIEWPORT9* self=(Luna< D3DVIEWPORT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DVIEWPORT9::MaxZ(). Got : '%s'\n%s",typeid(Luna< D3DVIEWPORT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->MaxZ;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void D3DVIEWPORT9::X(unsigned long value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void D3DVIEWPORT9::X(unsigned long value) function, expected prototype:\nvoid D3DVIEWPORT9::X(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DVIEWPORT9* self=(Luna< D3DVIEWPORT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DVIEWPORT9::X(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DVIEWPORT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->X = value;

		return 0;
	}

	// void D3DVIEWPORT9::Y(unsigned long value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void D3DVIEWPORT9::Y(unsigned long value) function, expected prototype:\nvoid D3DVIEWPORT9::Y(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DVIEWPORT9* self=(Luna< D3DVIEWPORT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DVIEWPORT9::Y(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DVIEWPORT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Y = value;

		return 0;
	}

	// void D3DVIEWPORT9::Width(unsigned long value)
	static int _bind_setWidth(lua_State *L) {
		if (!_lg_typecheck_setWidth(L)) {
			luaL_error(L, "luna typecheck failed in void D3DVIEWPORT9::Width(unsigned long value) function, expected prototype:\nvoid D3DVIEWPORT9::Width(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DVIEWPORT9* self=(Luna< D3DVIEWPORT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DVIEWPORT9::Width(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DVIEWPORT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Width = value;

		return 0;
	}

	// void D3DVIEWPORT9::Height(unsigned long value)
	static int _bind_setHeight(lua_State *L) {
		if (!_lg_typecheck_setHeight(L)) {
			luaL_error(L, "luna typecheck failed in void D3DVIEWPORT9::Height(unsigned long value) function, expected prototype:\nvoid D3DVIEWPORT9::Height(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DVIEWPORT9* self=(Luna< D3DVIEWPORT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DVIEWPORT9::Height(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DVIEWPORT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Height = value;

		return 0;
	}

	// void D3DVIEWPORT9::MinZ(float value)
	static int _bind_setMinZ(lua_State *L) {
		if (!_lg_typecheck_setMinZ(L)) {
			luaL_error(L, "luna typecheck failed in void D3DVIEWPORT9::MinZ(float value) function, expected prototype:\nvoid D3DVIEWPORT9::MinZ(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DVIEWPORT9* self=(Luna< D3DVIEWPORT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DVIEWPORT9::MinZ(float). Got : '%s'\n%s",typeid(Luna< D3DVIEWPORT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MinZ = value;

		return 0;
	}

	// void D3DVIEWPORT9::MaxZ(float value)
	static int _bind_setMaxZ(lua_State *L) {
		if (!_lg_typecheck_setMaxZ(L)) {
			luaL_error(L, "luna typecheck failed in void D3DVIEWPORT9::MaxZ(float value) function, expected prototype:\nvoid D3DVIEWPORT9::MaxZ(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DVIEWPORT9* self=(Luna< D3DVIEWPORT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DVIEWPORT9::MaxZ(float). Got : '%s'\n%s",typeid(Luna< D3DVIEWPORT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaxZ = value;

		return 0;
	}


	// Operator binds:

};

D3DVIEWPORT9* LunaTraits< D3DVIEWPORT9 >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< D3DVIEWPORT9 >::_bind_dtor(D3DVIEWPORT9* obj) {
	delete obj;
}

const char LunaTraits< D3DVIEWPORT9 >::className[] = "D3DVIEWPORT9";
const char LunaTraits< D3DVIEWPORT9 >::fullName[] = "D3DVIEWPORT9";
const char LunaTraits< D3DVIEWPORT9 >::moduleName[] = "dx9";
const char* LunaTraits< D3DVIEWPORT9 >::parents[] = {0};
const int LunaTraits< D3DVIEWPORT9 >::hash = 92207800;
const int LunaTraits< D3DVIEWPORT9 >::uniqueIDs[] = {92207800,0};

luna_RegType LunaTraits< D3DVIEWPORT9 >::methods[] = {
	{"getX", &luna_wrapper_D3DVIEWPORT9::_bind_getX},
	{"getY", &luna_wrapper_D3DVIEWPORT9::_bind_getY},
	{"getWidth", &luna_wrapper_D3DVIEWPORT9::_bind_getWidth},
	{"getHeight", &luna_wrapper_D3DVIEWPORT9::_bind_getHeight},
	{"getMinZ", &luna_wrapper_D3DVIEWPORT9::_bind_getMinZ},
	{"getMaxZ", &luna_wrapper_D3DVIEWPORT9::_bind_getMaxZ},
	{"setX", &luna_wrapper_D3DVIEWPORT9::_bind_setX},
	{"setY", &luna_wrapper_D3DVIEWPORT9::_bind_setY},
	{"setWidth", &luna_wrapper_D3DVIEWPORT9::_bind_setWidth},
	{"setHeight", &luna_wrapper_D3DVIEWPORT9::_bind_setHeight},
	{"setMinZ", &luna_wrapper_D3DVIEWPORT9::_bind_setMinZ},
	{"setMaxZ", &luna_wrapper_D3DVIEWPORT9::_bind_setMaxZ},
	{"dynCast", &luna_wrapper_D3DVIEWPORT9::_bind_dynCast},
	{"__eq", &luna_wrapper_D3DVIEWPORT9::_bind___eq},
	{"fromVoid", &luna_wrapper_D3DVIEWPORT9::_bind_fromVoid},
	{"asVoid", &luna_wrapper_D3DVIEWPORT9::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< D3DVIEWPORT9 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< D3DVIEWPORT9 >::enumValues[] = {
	{0,0}
};


