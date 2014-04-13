#include <plug_common.h>

class luna_wrapper_ork_Font_Vertex {
public:
	typedef Luna< ork::Font::Vertex > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,35303943) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::Font::Vertex*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Font::Vertex* rhs =(Luna< ork::Font::Vertex >::check(L,2));
		ork::Font::Vertex* self=(Luna< ork::Font::Vertex >::check(L,1));
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

		ork::Font::Vertex* self= (ork::Font::Vertex*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::Font::Vertex >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,35303943) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Font::Vertex >::check(L,1));
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

		ork::Font::Vertex* self=(Luna< ork::Font::Vertex >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::Font::Vertex");
		
		return luna_dynamicCast(L,converters,"ork::Font::Vertex",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304304) ) return false;
		if( (!(Luna< ork::vec4h >::check(L,1))) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_get_pos_uv(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

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

	inline static bool _lg_typecheck_set_pos_uv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304304) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setR(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setG(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::Font::Vertex::Vertex()
	static ork::Font::Vertex* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::Font::Vertex::Vertex() function, expected prototype:\nork::Font::Vertex::Vertex()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::Font::Vertex();
	}

	// ork::Font::Vertex::Vertex(const ork::vec4h & pos_uv, int color)
	static ork::Font::Vertex* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Font::Vertex::Vertex(const ork::vec4h & pos_uv, int color) function, expected prototype:\nork::Font::Vertex::Vertex(const ork::vec4h & pos_uv, int color)\nClass arguments details:\narg 1 ID = 81304304\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4h* pos_uv_ptr=(Luna< ork::vec4h >::check(L,1));
		if( !pos_uv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos_uv in ork::Font::Vertex::Vertex function");
		}
		const ork::vec4h & pos_uv=*pos_uv_ptr;
		int color=(int)lua_tointeger(L,2);

		return new ork::Font::Vertex(pos_uv, color);
	}

	// Overload binder for ork::Font::Vertex::Vertex
	static ork::Font::Vertex* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Vertex, cannot match any of the overloads for function Vertex:\n  Vertex()\n  Vertex(const ork::vec4h &, int)\n");
		return NULL;
	}


	// Function binds:
	// ork::vec4h ork::Font::Vertex::pos_uv()
	static int _bind_get_pos_uv(lua_State *L) {
		if (!_lg_typecheck_get_pos_uv(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4h ork::Font::Vertex::pos_uv() function, expected prototype:\nork::vec4h ork::Font::Vertex::pos_uv()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Font::Vertex* self=(Luna< ork::Font::Vertex >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4h ork::Font::Vertex::pos_uv(). Got : '%s'\n%s",typeid(Luna< ork::Font::Vertex >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::vec4h* lret = &self->pos_uv;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4h >::push(L,lret,false);

		return 1;
	}

	// unsigned char ork::Font::Vertex::r()
	static int _bind_getR(lua_State *L) {
		if (!_lg_typecheck_getR(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char ork::Font::Vertex::r() function, expected prototype:\nunsigned char ork::Font::Vertex::r()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Font::Vertex* self=(Luna< ork::Font::Vertex >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char ork::Font::Vertex::r(). Got : '%s'\n%s",typeid(Luna< ork::Font::Vertex >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->r;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char ork::Font::Vertex::g()
	static int _bind_getG(lua_State *L) {
		if (!_lg_typecheck_getG(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char ork::Font::Vertex::g() function, expected prototype:\nunsigned char ork::Font::Vertex::g()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Font::Vertex* self=(Luna< ork::Font::Vertex >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char ork::Font::Vertex::g(). Got : '%s'\n%s",typeid(Luna< ork::Font::Vertex >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->g;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char ork::Font::Vertex::b()
	static int _bind_getB(lua_State *L) {
		if (!_lg_typecheck_getB(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char ork::Font::Vertex::b() function, expected prototype:\nunsigned char ork::Font::Vertex::b()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Font::Vertex* self=(Luna< ork::Font::Vertex >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char ork::Font::Vertex::b(). Got : '%s'\n%s",typeid(Luna< ork::Font::Vertex >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->b;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char ork::Font::Vertex::a()
	static int _bind_getA(lua_State *L) {
		if (!_lg_typecheck_getA(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char ork::Font::Vertex::a() function, expected prototype:\nunsigned char ork::Font::Vertex::a()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Font::Vertex* self=(Luna< ork::Font::Vertex >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char ork::Font::Vertex::a(). Got : '%s'\n%s",typeid(Luna< ork::Font::Vertex >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->a;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// void ork::Font::Vertex::pos_uv(ork::vec4h value)
	static int _bind_set_pos_uv(lua_State *L) {
		if (!_lg_typecheck_set_pos_uv(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Font::Vertex::pos_uv(ork::vec4h value) function, expected prototype:\nvoid ork::Font::Vertex::pos_uv(ork::vec4h value)\nClass arguments details:\narg 1 ID = 81304304\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec4h* value_ptr=(Luna< ork::vec4h >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in ork::Font::Vertex::pos_uv function");
		}
		ork::vec4h value=*value_ptr;

		ork::Font::Vertex* self=(Luna< ork::Font::Vertex >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Font::Vertex::pos_uv(ork::vec4h). Got : '%s'\n%s",typeid(Luna< ork::Font::Vertex >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pos_uv = value;

		return 0;
	}

	// void ork::Font::Vertex::r(unsigned char value)
	static int _bind_setR(lua_State *L) {
		if (!_lg_typecheck_setR(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Font::Vertex::r(unsigned char value) function, expected prototype:\nvoid ork::Font::Vertex::r(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		ork::Font::Vertex* self=(Luna< ork::Font::Vertex >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Font::Vertex::r(unsigned char). Got : '%s'\n%s",typeid(Luna< ork::Font::Vertex >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->r = value;

		return 0;
	}

	// void ork::Font::Vertex::g(unsigned char value)
	static int _bind_setG(lua_State *L) {
		if (!_lg_typecheck_setG(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Font::Vertex::g(unsigned char value) function, expected prototype:\nvoid ork::Font::Vertex::g(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		ork::Font::Vertex* self=(Luna< ork::Font::Vertex >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Font::Vertex::g(unsigned char). Got : '%s'\n%s",typeid(Luna< ork::Font::Vertex >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->g = value;

		return 0;
	}

	// void ork::Font::Vertex::b(unsigned char value)
	static int _bind_setB(lua_State *L) {
		if (!_lg_typecheck_setB(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Font::Vertex::b(unsigned char value) function, expected prototype:\nvoid ork::Font::Vertex::b(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		ork::Font::Vertex* self=(Luna< ork::Font::Vertex >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Font::Vertex::b(unsigned char). Got : '%s'\n%s",typeid(Luna< ork::Font::Vertex >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->b = value;

		return 0;
	}

	// void ork::Font::Vertex::a(unsigned char value)
	static int _bind_setA(lua_State *L) {
		if (!_lg_typecheck_setA(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Font::Vertex::a(unsigned char value) function, expected prototype:\nvoid ork::Font::Vertex::a(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		ork::Font::Vertex* self=(Luna< ork::Font::Vertex >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Font::Vertex::a(unsigned char). Got : '%s'\n%s",typeid(Luna< ork::Font::Vertex >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->a = value;

		return 0;
	}


	// Operator binds:

};

ork::Font::Vertex* LunaTraits< ork::Font::Vertex >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_Font_Vertex::_bind_ctor(L);
}

void LunaTraits< ork::Font::Vertex >::_bind_dtor(ork::Font::Vertex* obj) {
	delete obj;
}

const char LunaTraits< ork::Font::Vertex >::className[] = "Font_Vertex";
const char LunaTraits< ork::Font::Vertex >::fullName[] = "ork::Font::Vertex";
const char LunaTraits< ork::Font::Vertex >::moduleName[] = "ork";
const char* LunaTraits< ork::Font::Vertex >::parents[] = {0};
const int LunaTraits< ork::Font::Vertex >::hash = 35303943;
const int LunaTraits< ork::Font::Vertex >::uniqueIDs[] = {35303943,0};

luna_RegType LunaTraits< ork::Font::Vertex >::methods[] = {
	{"get_pos_uv", &luna_wrapper_ork_Font_Vertex::_bind_get_pos_uv},
	{"getR", &luna_wrapper_ork_Font_Vertex::_bind_getR},
	{"getG", &luna_wrapper_ork_Font_Vertex::_bind_getG},
	{"getB", &luna_wrapper_ork_Font_Vertex::_bind_getB},
	{"getA", &luna_wrapper_ork_Font_Vertex::_bind_getA},
	{"set_pos_uv", &luna_wrapper_ork_Font_Vertex::_bind_set_pos_uv},
	{"setR", &luna_wrapper_ork_Font_Vertex::_bind_setR},
	{"setG", &luna_wrapper_ork_Font_Vertex::_bind_setG},
	{"setB", &luna_wrapper_ork_Font_Vertex::_bind_setB},
	{"setA", &luna_wrapper_ork_Font_Vertex::_bind_setA},
	{"dynCast", &luna_wrapper_ork_Font_Vertex::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_Font_Vertex::_bind___eq},
	{"fromVoid", &luna_wrapper_ork_Font_Vertex::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_Font_Vertex::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::Font::Vertex >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Font::Vertex >::enumValues[] = {
	{0,0}
};


