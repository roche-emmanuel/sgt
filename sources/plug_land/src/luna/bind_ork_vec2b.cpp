#include <plug_common.h>

class luna_wrapper_ork_vec2b {
public:
	typedef Luna< ork::vec2b > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2b* self= (ork::vec2b*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::vec2b >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304236) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::vec2b >::check(L,1));
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

		ork::vec2b* self=(Luna< ork::vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::vec2b");
		
		return luna_dynamicCast(L,converters,"ork::vec2b",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,1)==0 ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304236) ) return false;
		if( (!(Luna< ork::vec2b >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 3 valid operators)
	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304236) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304236) ) return false;
		return true;
	}


	// Constructor binds:
	// ork::vec2b::vec2b()
	static ork::vec2b* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2b::vec2b() function, expected prototype:\nork::vec2b::vec2b()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::vec2b();
	}

	// ork::vec2b::vec2b(bool xi, bool yi)
	static ork::vec2b* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2b::vec2b(bool xi, bool yi) function, expected prototype:\nork::vec2b::vec2b(bool xi, bool yi)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool xi=(bool)(lua_toboolean(L,1)==1);
		bool yi=(bool)(lua_toboolean(L,2)==1);

		return new ork::vec2b(xi, yi);
	}

	// ork::vec2b::vec2b(const ork::vec2b & v)
	static ork::vec2b* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2b::vec2b(const ork::vec2b & v) function, expected prototype:\nork::vec2b::vec2b(const ork::vec2b & v)\nClass arguments details:\narg 1 ID = 81304236\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2b* v_ptr=(Luna< ork::vec2b >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec2b::vec2b function");
		}
		const ork::vec2b & v=*v_ptr;

		return new ork::vec2b(v);
	}

	// Overload binder for ork::vec2b::vec2b
	static ork::vec2b* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function vec2b, cannot match any of the overloads for function vec2b:\n  vec2b()\n  vec2b(bool, bool)\n  vec2b(const ork::vec2b &)\n");
		return NULL;
	}


	// Function binds:
	// bool ork::vec2b::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::vec2b::x() function, expected prototype:\nbool ork::vec2b::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec2b* self=(Luna< ork::vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::vec2b::x(). Got : '%s'\n%s",typeid(Luna< ork::vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->x;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::vec2b::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::vec2b::y() function, expected prototype:\nbool ork::vec2b::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec2b* self=(Luna< ork::vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::vec2b::y(). Got : '%s'\n%s",typeid(Luna< ork::vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->y;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void ork::vec2b::x(bool value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void ork::vec2b::x(bool value) function, expected prototype:\nvoid ork::vec2b::x(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		ork::vec2b* self=(Luna< ork::vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::vec2b::x(bool). Got : '%s'\n%s",typeid(Luna< ork::vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void ork::vec2b::y(bool value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void ork::vec2b::y(bool value) function, expected prototype:\nvoid ork::vec2b::y(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		ork::vec2b* self=(Luna< ork::vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::vec2b::y(bool). Got : '%s'\n%s",typeid(Luna< ork::vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}


	// Operator binds:
	// bool & ork::vec2b::operator[](const int i)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luaL_error(L, "luna typecheck failed in bool & ork::vec2b::operator[](const int i) function, expected prototype:\nbool & ork::vec2b::operator[](const int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const int i=(const int)lua_tointeger(L,2);

		ork::vec2b* self=(Luna< ork::vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool & ork::vec2b::operator[](const int). Got : '%s'\n%s",typeid(Luna< ork::vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool & lret = self->operator[](i);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::vec2b::operator==(const ork::vec2b & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::vec2b::operator==(const ork::vec2b & v) const function, expected prototype:\nbool ork::vec2b::operator==(const ork::vec2b & v) const\nClass arguments details:\narg 1 ID = 81304236\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2b* v_ptr=(Luna< ork::vec2b >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec2b::operator== function");
		}
		const ork::vec2b & v=*v_ptr;

		ork::vec2b* self=(Luna< ork::vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::vec2b::operator==(const ork::vec2b &) const. Got : '%s'\n%s",typeid(Luna< ork::vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::vec2b::operator!=(const ork::vec2b & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::vec2b::operator!=(const ork::vec2b & v) const function, expected prototype:\nbool ork::vec2b::operator!=(const ork::vec2b & v) const\nClass arguments details:\narg 1 ID = 81304236\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2b* v_ptr=(Luna< ork::vec2b >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec2b::operator!= function");
		}
		const ork::vec2b & v=*v_ptr;

		ork::vec2b* self=(Luna< ork::vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::vec2b::operator!=(const ork::vec2b &) const. Got : '%s'\n%s",typeid(Luna< ork::vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

ork::vec2b* LunaTraits< ork::vec2b >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_vec2b::_bind_ctor(L);
}

void LunaTraits< ork::vec2b >::_bind_dtor(ork::vec2b* obj) {
	delete obj;
}

const char LunaTraits< ork::vec2b >::className[] = "vec2b";
const char LunaTraits< ork::vec2b >::fullName[] = "ork::vec2b";
const char LunaTraits< ork::vec2b >::moduleName[] = "ork";
const char* LunaTraits< ork::vec2b >::parents[] = {0};
const int LunaTraits< ork::vec2b >::hash = 81304236;
const int LunaTraits< ork::vec2b >::uniqueIDs[] = {81304236,0};

luna_RegType LunaTraits< ork::vec2b >::methods[] = {
	{"getX", &luna_wrapper_ork_vec2b::_bind_getX},
	{"getY", &luna_wrapper_ork_vec2b::_bind_getY},
	{"setX", &luna_wrapper_ork_vec2b::_bind_setX},
	{"setY", &luna_wrapper_ork_vec2b::_bind_setY},
	{"op_index", &luna_wrapper_ork_vec2b::_bind_op_index},
	{"__eq", &luna_wrapper_ork_vec2b::_bind___eq},
	{"op_neq", &luna_wrapper_ork_vec2b::_bind_op_neq},
	{"dynCast", &luna_wrapper_ork_vec2b::_bind_dynCast},
	{"fromVoid", &luna_wrapper_ork_vec2b::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_vec2b::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::vec2b >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::vec2b >::enumValues[] = {
	{0,0}
};


