#include <plug_common.h>

class luna_wrapper_D3DCOLORVALUE {
public:
	typedef Luna< D3DCOLORVALUE > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,79250946) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(D3DCOLORVALUE*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		D3DCOLORVALUE* rhs =(Luna< D3DCOLORVALUE >::check(L,2));
		D3DCOLORVALUE* self=(Luna< D3DCOLORVALUE >::check(L,1));
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

		D3DCOLORVALUE* self= (D3DCOLORVALUE*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< D3DCOLORVALUE >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,79250946) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< D3DCOLORVALUE >::check(L,1));
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

		D3DCOLORVALUE* self=(Luna< D3DCOLORVALUE >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("D3DCOLORVALUE");
		
		return luna_dynamicCast(L,converters,"D3DCOLORVALUE",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getR(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getG(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setR(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setG(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// float D3DCOLORVALUE::r()
	static int _bind_getR(lua_State *L) {
		if (!_lg_typecheck_getR(L)) {
			luaL_error(L, "luna typecheck failed in float D3DCOLORVALUE::r() function, expected prototype:\nfloat D3DCOLORVALUE::r()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCOLORVALUE* self=(Luna< D3DCOLORVALUE >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DCOLORVALUE::r(). Got : '%s'\n%s",typeid(Luna< D3DCOLORVALUE >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->r;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float D3DCOLORVALUE::g()
	static int _bind_getG(lua_State *L) {
		if (!_lg_typecheck_getG(L)) {
			luaL_error(L, "luna typecheck failed in float D3DCOLORVALUE::g() function, expected prototype:\nfloat D3DCOLORVALUE::g()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCOLORVALUE* self=(Luna< D3DCOLORVALUE >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DCOLORVALUE::g(). Got : '%s'\n%s",typeid(Luna< D3DCOLORVALUE >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->g;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float D3DCOLORVALUE::b()
	static int _bind_getB(lua_State *L) {
		if (!_lg_typecheck_getB(L)) {
			luaL_error(L, "luna typecheck failed in float D3DCOLORVALUE::b() function, expected prototype:\nfloat D3DCOLORVALUE::b()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCOLORVALUE* self=(Luna< D3DCOLORVALUE >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DCOLORVALUE::b(). Got : '%s'\n%s",typeid(Luna< D3DCOLORVALUE >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->b;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float D3DCOLORVALUE::a()
	static int _bind_getA(lua_State *L) {
		if (!_lg_typecheck_getA(L)) {
			luaL_error(L, "luna typecheck failed in float D3DCOLORVALUE::a() function, expected prototype:\nfloat D3DCOLORVALUE::a()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCOLORVALUE* self=(Luna< D3DCOLORVALUE >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DCOLORVALUE::a(). Got : '%s'\n%s",typeid(Luna< D3DCOLORVALUE >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->a;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void D3DCOLORVALUE::r(float value)
	static int _bind_setR(lua_State *L) {
		if (!_lg_typecheck_setR(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCOLORVALUE::r(float value) function, expected prototype:\nvoid D3DCOLORVALUE::r(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DCOLORVALUE* self=(Luna< D3DCOLORVALUE >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCOLORVALUE::r(float). Got : '%s'\n%s",typeid(Luna< D3DCOLORVALUE >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->r = value;

		return 0;
	}

	// void D3DCOLORVALUE::g(float value)
	static int _bind_setG(lua_State *L) {
		if (!_lg_typecheck_setG(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCOLORVALUE::g(float value) function, expected prototype:\nvoid D3DCOLORVALUE::g(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DCOLORVALUE* self=(Luna< D3DCOLORVALUE >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCOLORVALUE::g(float). Got : '%s'\n%s",typeid(Luna< D3DCOLORVALUE >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->g = value;

		return 0;
	}

	// void D3DCOLORVALUE::b(float value)
	static int _bind_setB(lua_State *L) {
		if (!_lg_typecheck_setB(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCOLORVALUE::b(float value) function, expected prototype:\nvoid D3DCOLORVALUE::b(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DCOLORVALUE* self=(Luna< D3DCOLORVALUE >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCOLORVALUE::b(float). Got : '%s'\n%s",typeid(Luna< D3DCOLORVALUE >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->b = value;

		return 0;
	}

	// void D3DCOLORVALUE::a(float value)
	static int _bind_setA(lua_State *L) {
		if (!_lg_typecheck_setA(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCOLORVALUE::a(float value) function, expected prototype:\nvoid D3DCOLORVALUE::a(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DCOLORVALUE* self=(Luna< D3DCOLORVALUE >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCOLORVALUE::a(float). Got : '%s'\n%s",typeid(Luna< D3DCOLORVALUE >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->a = value;

		return 0;
	}


	// Operator binds:

};

D3DCOLORVALUE* LunaTraits< D3DCOLORVALUE >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< D3DCOLORVALUE >::_bind_dtor(D3DCOLORVALUE* obj) {
	delete obj;
}

const char LunaTraits< D3DCOLORVALUE >::className[] = "D3DCOLORVALUE";
const char LunaTraits< D3DCOLORVALUE >::fullName[] = "D3DCOLORVALUE";
const char LunaTraits< D3DCOLORVALUE >::moduleName[] = "dx9";
const char* LunaTraits< D3DCOLORVALUE >::parents[] = {0};
const int LunaTraits< D3DCOLORVALUE >::hash = 79250946;
const int LunaTraits< D3DCOLORVALUE >::uniqueIDs[] = {79250946,0};

luna_RegType LunaTraits< D3DCOLORVALUE >::methods[] = {
	{"getR", &luna_wrapper_D3DCOLORVALUE::_bind_getR},
	{"getG", &luna_wrapper_D3DCOLORVALUE::_bind_getG},
	{"getB", &luna_wrapper_D3DCOLORVALUE::_bind_getB},
	{"getA", &luna_wrapper_D3DCOLORVALUE::_bind_getA},
	{"setR", &luna_wrapper_D3DCOLORVALUE::_bind_setR},
	{"setG", &luna_wrapper_D3DCOLORVALUE::_bind_setG},
	{"setB", &luna_wrapper_D3DCOLORVALUE::_bind_setB},
	{"setA", &luna_wrapper_D3DCOLORVALUE::_bind_setA},
	{"dynCast", &luna_wrapper_D3DCOLORVALUE::_bind_dynCast},
	{"__eq", &luna_wrapper_D3DCOLORVALUE::_bind___eq},
	{"fromVoid", &luna_wrapper_D3DCOLORVALUE::_bind_fromVoid},
	{"asVoid", &luna_wrapper_D3DCOLORVALUE::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< D3DCOLORVALUE >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< D3DCOLORVALUE >::enumValues[] = {
	{0,0}
};


