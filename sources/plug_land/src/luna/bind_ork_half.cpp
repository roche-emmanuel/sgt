#include <plug_common.h>

class luna_wrapper_ork_half {
public:
	typedef Luna< ork::half > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::half* self= (ork::half*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::half >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18331161) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::half >::check(L,1));
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

		ork::half* self=(Luna< ork::half >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::half");
		
		return luna_dynamicCast(L,converters,"ork::half",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_toFloat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isFinite(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isInf(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 6 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18331161) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18331161) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18331161) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18331161) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18331161) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18331161) ) return false;
		return true;
	}


	// Constructor binds:
	// ork::half::half()
	static ork::half* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::half::half() function, expected prototype:\nork::half::half()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::half();
	}

	// ork::half::half(float x)
	static ork::half* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::half::half(float x) function, expected prototype:\nork::half::half(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,1);

		return new ork::half(x);
	}

	// Overload binder for ork::half::half
	static ork::half* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function half, cannot match any of the overloads for function half:\n  half()\n  half(float)\n");
		return NULL;
	}


	// Function binds:
	// float ork::half::toFloat() const
	static int _bind_toFloat(lua_State *L) {
		if (!_lg_typecheck_toFloat(L)) {
			luaL_error(L, "luna typecheck failed in float ork::half::toFloat() const function, expected prototype:\nfloat ork::half::toFloat() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::half* self=(Luna< ork::half >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::half::toFloat() const. Got : '%s'\n%s",typeid(Luna< ork::half >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->toFloat();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool ork::half::isFinite() const
	static int _bind_isFinite(lua_State *L) {
		if (!_lg_typecheck_isFinite(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::half::isFinite() const function, expected prototype:\nbool ork::half::isFinite() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::half* self=(Luna< ork::half >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::half::isFinite() const. Got : '%s'\n%s",typeid(Luna< ork::half >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isFinite();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::half::isInf() const
	static int _bind_isInf(lua_State *L) {
		if (!_lg_typecheck_isInf(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::half::isInf() const function, expected prototype:\nbool ork::half::isInf() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::half* self=(Luna< ork::half >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::half::isInf() const. Got : '%s'\n%s",typeid(Luna< ork::half >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isInf();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::half::isNormal() const
	static int _bind_isNormal(lua_State *L) {
		if (!_lg_typecheck_isNormal(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::half::isNormal() const function, expected prototype:\nbool ork::half::isNormal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::half* self=(Luna< ork::half >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::half::isNormal() const. Got : '%s'\n%s",typeid(Luna< ork::half >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isNormal();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:
	// ork::half ork::half::operator==(const ork::half v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in ork::half ork::half::operator==(const ork::half v) const function, expected prototype:\nork::half ork::half::operator==(const ork::half v) const\nClass arguments details:\narg 1 ID = 18331161\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::half* v_ptr=(Luna< ork::half >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::half::operator== function");
		}
		const ork::half v=*v_ptr;

		ork::half* self=(Luna< ork::half >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::half ork::half::operator==(const ork::half) const. Got : '%s'\n%s",typeid(Luna< ork::half >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::half stack_lret = self->operator==(v);
		ork::half* lret = new ork::half(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::half >::push(L,lret,true);

		return 1;
	}

	// bool ork::half::operator!=(const ork::half v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::half::operator!=(const ork::half v) const function, expected prototype:\nbool ork::half::operator!=(const ork::half v) const\nClass arguments details:\narg 1 ID = 18331161\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::half* v_ptr=(Luna< ork::half >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::half::operator!= function");
		}
		const ork::half v=*v_ptr;

		ork::half* self=(Luna< ork::half >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::half::operator!=(const ork::half) const. Got : '%s'\n%s",typeid(Luna< ork::half >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::half ork::half::operator+(const ork::half v) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in ork::half ork::half::operator+(const ork::half v) const function, expected prototype:\nork::half ork::half::operator+(const ork::half v) const\nClass arguments details:\narg 1 ID = 18331161\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::half* v_ptr=(Luna< ork::half >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::half::operator+ function");
		}
		const ork::half v=*v_ptr;

		ork::half* self=(Luna< ork::half >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::half ork::half::operator+(const ork::half) const. Got : '%s'\n%s",typeid(Luna< ork::half >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::half stack_lret = self->operator+(v);
		ork::half* lret = new ork::half(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::half >::push(L,lret,true);

		return 1;
	}

	// ork::half ork::half::operator-(const ork::half v) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in ork::half ork::half::operator-(const ork::half v) const function, expected prototype:\nork::half ork::half::operator-(const ork::half v) const\nClass arguments details:\narg 1 ID = 18331161\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::half* v_ptr=(Luna< ork::half >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::half::operator- function");
		}
		const ork::half v=*v_ptr;

		ork::half* self=(Luna< ork::half >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::half ork::half::operator-(const ork::half) const. Got : '%s'\n%s",typeid(Luna< ork::half >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::half stack_lret = self->operator-(v);
		ork::half* lret = new ork::half(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::half >::push(L,lret,true);

		return 1;
	}

	// ork::half ork::half::operator*(const ork::half v) const
	static int _bind___mul(lua_State *L) {
		if (!_lg_typecheck___mul(L)) {
			luaL_error(L, "luna typecheck failed in ork::half ork::half::operator*(const ork::half v) const function, expected prototype:\nork::half ork::half::operator*(const ork::half v) const\nClass arguments details:\narg 1 ID = 18331161\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::half* v_ptr=(Luna< ork::half >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::half::operator* function");
		}
		const ork::half v=*v_ptr;

		ork::half* self=(Luna< ork::half >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::half ork::half::operator*(const ork::half) const. Got : '%s'\n%s",typeid(Luna< ork::half >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::half stack_lret = self->operator*(v);
		ork::half* lret = new ork::half(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::half >::push(L,lret,true);

		return 1;
	}

	// ork::half ork::half::operator/(const ork::half v) const
	static int _bind___div(lua_State *L) {
		if (!_lg_typecheck___div(L)) {
			luaL_error(L, "luna typecheck failed in ork::half ork::half::operator/(const ork::half v) const function, expected prototype:\nork::half ork::half::operator/(const ork::half v) const\nClass arguments details:\narg 1 ID = 18331161\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::half* v_ptr=(Luna< ork::half >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::half::operator/ function");
		}
		const ork::half v=*v_ptr;

		ork::half* self=(Luna< ork::half >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::half ork::half::operator/(const ork::half) const. Got : '%s'\n%s",typeid(Luna< ork::half >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::half stack_lret = self->operator/(v);
		ork::half* lret = new ork::half(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::half >::push(L,lret,true);

		return 1;
	}


};

ork::half* LunaTraits< ork::half >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_half::_bind_ctor(L);
}

void LunaTraits< ork::half >::_bind_dtor(ork::half* obj) {
	delete obj;
}

const char LunaTraits< ork::half >::className[] = "half";
const char LunaTraits< ork::half >::fullName[] = "ork::half";
const char LunaTraits< ork::half >::moduleName[] = "ork";
const char* LunaTraits< ork::half >::parents[] = {0};
const int LunaTraits< ork::half >::hash = 18331161;
const int LunaTraits< ork::half >::uniqueIDs[] = {18331161,0};

luna_RegType LunaTraits< ork::half >::methods[] = {
	{"toFloat", &luna_wrapper_ork_half::_bind_toFloat},
	{"isFinite", &luna_wrapper_ork_half::_bind_isFinite},
	{"isInf", &luna_wrapper_ork_half::_bind_isInf},
	{"isNormal", &luna_wrapper_ork_half::_bind_isNormal},
	{"__eq", &luna_wrapper_ork_half::_bind___eq},
	{"op_neq", &luna_wrapper_ork_half::_bind_op_neq},
	{"__add", &luna_wrapper_ork_half::_bind___add},
	{"__sub", &luna_wrapper_ork_half::_bind___sub},
	{"__mul", &luna_wrapper_ork_half::_bind___mul},
	{"__div", &luna_wrapper_ork_half::_bind___div},
	{"dynCast", &luna_wrapper_ork_half::_bind_dynCast},
	{"fromVoid", &luna_wrapper_ork_half::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_half::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::half >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::half >::enumValues[] = {
	{0,0}
};


