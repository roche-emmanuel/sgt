#include <plug_common.h>

class luna_wrapper_D3DVECTOR {
public:
	typedef Luna< D3DVECTOR > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,8428048) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(D3DVECTOR*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		D3DVECTOR* rhs =(Luna< D3DVECTOR >::check(L,2));
		D3DVECTOR* self=(Luna< D3DVECTOR >::check(L,1));
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

		D3DVECTOR* self= (D3DVECTOR*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< D3DVECTOR >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,8428048) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< D3DVECTOR >::check(L,1));
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

		D3DVECTOR* self=(Luna< D3DVECTOR >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("D3DVECTOR");
		
		return luna_dynamicCast(L,converters,"D3DVECTOR",name);
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

	inline static bool _lg_typecheck_getZ(lua_State *L) {
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

	inline static bool _lg_typecheck_setZ(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// float D3DVECTOR::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in float D3DVECTOR::x() function, expected prototype:\nfloat D3DVECTOR::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DVECTOR* self=(Luna< D3DVECTOR >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DVECTOR::x(). Got : '%s'\n%s",typeid(Luna< D3DVECTOR >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float D3DVECTOR::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in float D3DVECTOR::y() function, expected prototype:\nfloat D3DVECTOR::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DVECTOR* self=(Luna< D3DVECTOR >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DVECTOR::y(). Got : '%s'\n%s",typeid(Luna< D3DVECTOR >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float D3DVECTOR::z()
	static int _bind_getZ(lua_State *L) {
		if (!_lg_typecheck_getZ(L)) {
			luaL_error(L, "luna typecheck failed in float D3DVECTOR::z() function, expected prototype:\nfloat D3DVECTOR::z()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DVECTOR* self=(Luna< D3DVECTOR >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DVECTOR::z(). Got : '%s'\n%s",typeid(Luna< D3DVECTOR >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->z;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void D3DVECTOR::x(float value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void D3DVECTOR::x(float value) function, expected prototype:\nvoid D3DVECTOR::x(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DVECTOR* self=(Luna< D3DVECTOR >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DVECTOR::x(float). Got : '%s'\n%s",typeid(Luna< D3DVECTOR >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void D3DVECTOR::y(float value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void D3DVECTOR::y(float value) function, expected prototype:\nvoid D3DVECTOR::y(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DVECTOR* self=(Luna< D3DVECTOR >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DVECTOR::y(float). Got : '%s'\n%s",typeid(Luna< D3DVECTOR >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}

	// void D3DVECTOR::z(float value)
	static int _bind_setZ(lua_State *L) {
		if (!_lg_typecheck_setZ(L)) {
			luaL_error(L, "luna typecheck failed in void D3DVECTOR::z(float value) function, expected prototype:\nvoid D3DVECTOR::z(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DVECTOR* self=(Luna< D3DVECTOR >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DVECTOR::z(float). Got : '%s'\n%s",typeid(Luna< D3DVECTOR >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->z = value;

		return 0;
	}


	// Operator binds:

};

D3DVECTOR* LunaTraits< D3DVECTOR >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< D3DVECTOR >::_bind_dtor(D3DVECTOR* obj) {
	delete obj;
}

const char LunaTraits< D3DVECTOR >::className[] = "D3DVECTOR";
const char LunaTraits< D3DVECTOR >::fullName[] = "D3DVECTOR";
const char LunaTraits< D3DVECTOR >::moduleName[] = "dx9";
const char* LunaTraits< D3DVECTOR >::parents[] = {0};
const int LunaTraits< D3DVECTOR >::hash = 8428048;
const int LunaTraits< D3DVECTOR >::uniqueIDs[] = {8428048,0};

luna_RegType LunaTraits< D3DVECTOR >::methods[] = {
	{"getX", &luna_wrapper_D3DVECTOR::_bind_getX},
	{"getY", &luna_wrapper_D3DVECTOR::_bind_getY},
	{"getZ", &luna_wrapper_D3DVECTOR::_bind_getZ},
	{"setX", &luna_wrapper_D3DVECTOR::_bind_setX},
	{"setY", &luna_wrapper_D3DVECTOR::_bind_setY},
	{"setZ", &luna_wrapper_D3DVECTOR::_bind_setZ},
	{"dynCast", &luna_wrapper_D3DVECTOR::_bind_dynCast},
	{"__eq", &luna_wrapper_D3DVECTOR::_bind___eq},
	{"fromVoid", &luna_wrapper_D3DVECTOR::_bind_fromVoid},
	{"asVoid", &luna_wrapper_D3DVECTOR::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< D3DVECTOR >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< D3DVECTOR >::enumValues[] = {
	{0,0}
};


