#include <plug_common.h>

class luna_wrapper_ork_vec2h {
public:
	typedef Luna< ork::vec2h > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2h* self= (ork::vec2h*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::vec2h >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304242) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::vec2h >::check(L,1));
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

		ork::vec2h* self=(Luna< ork::vec2h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::vec2h");
		
		return luna_dynamicCast(L,converters,"ork::vec2h",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18331161) ) return false;
		if( (!(Luna< ork::half >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,18331161) ) return false;
		if( (!(Luna< ork::half >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304242) ) return false;
		if( (!(Luna< ork::vec2h >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_length(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_squaredLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_normalize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_normalize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18331161) ) return false;
		if( (!(Luna< ork::half >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_distanceTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304242) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_squaredDistanceTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304242) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dot(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304242) ) return false;
		return true;
	}

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

		if( !Luna<void>::has_uniqueid(L,2,18331161) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18331161) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 11 valid operators)
	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304242) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304242) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304242) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304242) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304242) ) return false;
		if( (!(Luna< ork::vec2h >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18331161) ) return false;
		if( (!(Luna< ork::half >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304242) ) return false;
		if( (!(Luna< ork::vec2h >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18331161) ) return false;
		if( (!(Luna< ork::half >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304242) ) return false;
		return true;
	}


	// Constructor binds:
	// ork::vec2h::vec2h()
	static ork::vec2h* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2h::vec2h() function, expected prototype:\nork::vec2h::vec2h()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::vec2h();
	}

	// ork::vec2h::vec2h(ork::half xi, ork::half yi)
	static ork::vec2h* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2h::vec2h(ork::half xi, ork::half yi) function, expected prototype:\nork::vec2h::vec2h(ork::half xi, ork::half yi)\nClass arguments details:\narg 1 ID = 18331161\narg 2 ID = 18331161\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::half* xi_ptr=(Luna< ork::half >::check(L,1));
		if( !xi_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xi in ork::vec2h::vec2h function");
		}
		ork::half xi=*xi_ptr;
		ork::half* yi_ptr=(Luna< ork::half >::check(L,2));
		if( !yi_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg yi in ork::vec2h::vec2h function");
		}
		ork::half yi=*yi_ptr;

		return new ork::vec2h(xi, yi);
	}

	// ork::vec2h::vec2h(const ork::vec2h & v)
	static ork::vec2h* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2h::vec2h(const ork::vec2h & v) function, expected prototype:\nork::vec2h::vec2h(const ork::vec2h & v)\nClass arguments details:\narg 1 ID = 81304242\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2h* v_ptr=(Luna< ork::vec2h >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec2h::vec2h function");
		}
		const ork::vec2h & v=*v_ptr;

		return new ork::vec2h(v);
	}

	// Overload binder for ork::vec2h::vec2h
	static ork::vec2h* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function vec2h, cannot match any of the overloads for function vec2h:\n  vec2h()\n  vec2h(ork::half, ork::half)\n  vec2h(const ork::vec2h &)\n");
		return NULL;
	}


	// Function binds:
	// ork::half ork::vec2h::length() const
	static int _bind_length(lua_State *L) {
		if (!_lg_typecheck_length(L)) {
			luaL_error(L, "luna typecheck failed in ork::half ork::vec2h::length() const function, expected prototype:\nork::half ork::vec2h::length() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec2h* self=(Luna< ork::vec2h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::half ork::vec2h::length() const. Got : '%s'\n%s",typeid(Luna< ork::vec2h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::half stack_lret = self->length();
		ork::half* lret = new ork::half(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::half >::push(L,lret,true);

		return 1;
	}

	// ork::half ork::vec2h::squaredLength() const
	static int _bind_squaredLength(lua_State *L) {
		if (!_lg_typecheck_squaredLength(L)) {
			luaL_error(L, "luna typecheck failed in ork::half ork::vec2h::squaredLength() const function, expected prototype:\nork::half ork::vec2h::squaredLength() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec2h* self=(Luna< ork::vec2h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::half ork::vec2h::squaredLength() const. Got : '%s'\n%s",typeid(Luna< ork::vec2h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::half stack_lret = self->squaredLength();
		ork::half* lret = new ork::half(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::half >::push(L,lret,true);

		return 1;
	}

	// ork::vec2h ork::vec2h::normalize() const
	static int _bind_normalize_overload_1(lua_State *L) {
		if (!_lg_typecheck_normalize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2h ork::vec2h::normalize() const function, expected prototype:\nork::vec2h ork::vec2h::normalize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec2h* self=(Luna< ork::vec2h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2h ork::vec2h::normalize() const. Got : '%s'\n%s",typeid(Luna< ork::vec2h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2h stack_lret = self->normalize();
		ork::vec2h* lret = new ork::vec2h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2h >::push(L,lret,true);

		return 1;
	}

	// ork::vec2h ork::vec2h::normalize(ork::half l) const
	static int _bind_normalize_overload_2(lua_State *L) {
		if (!_lg_typecheck_normalize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2h ork::vec2h::normalize(ork::half l) const function, expected prototype:\nork::vec2h ork::vec2h::normalize(ork::half l) const\nClass arguments details:\narg 1 ID = 18331161\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::half* l_ptr=(Luna< ork::half >::check(L,2));
		if( !l_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg l in ork::vec2h::normalize function");
		}
		ork::half l=*l_ptr;

		ork::vec2h* self=(Luna< ork::vec2h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2h ork::vec2h::normalize(ork::half) const. Got : '%s'\n%s",typeid(Luna< ork::vec2h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2h stack_lret = self->normalize(l);
		ork::vec2h* lret = new ork::vec2h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2h >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::vec2h::normalize
	static int _bind_normalize(lua_State *L) {
		if (_lg_typecheck_normalize_overload_1(L)) return _bind_normalize_overload_1(L);
		if (_lg_typecheck_normalize_overload_2(L)) return _bind_normalize_overload_2(L);

		luaL_error(L, "error in function normalize, cannot match any of the overloads for function normalize:\n  normalize()\n  normalize(ork::half)\n");
		return 0;
	}

	// ork::half ork::vec2h::distanceTo(const ork::vec2h & v) const
	static int _bind_distanceTo(lua_State *L) {
		if (!_lg_typecheck_distanceTo(L)) {
			luaL_error(L, "luna typecheck failed in ork::half ork::vec2h::distanceTo(const ork::vec2h & v) const function, expected prototype:\nork::half ork::vec2h::distanceTo(const ork::vec2h & v) const\nClass arguments details:\narg 1 ID = 81304242\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2h* v_ptr=(Luna< ork::vec2h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec2h::distanceTo function");
		}
		const ork::vec2h & v=*v_ptr;

		ork::vec2h* self=(Luna< ork::vec2h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::half ork::vec2h::distanceTo(const ork::vec2h &) const. Got : '%s'\n%s",typeid(Luna< ork::vec2h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::half stack_lret = self->distanceTo(v);
		ork::half* lret = new ork::half(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::half >::push(L,lret,true);

		return 1;
	}

	// ork::half ork::vec2h::squaredDistanceTo(const ork::vec2h & v) const
	static int _bind_squaredDistanceTo(lua_State *L) {
		if (!_lg_typecheck_squaredDistanceTo(L)) {
			luaL_error(L, "luna typecheck failed in ork::half ork::vec2h::squaredDistanceTo(const ork::vec2h & v) const function, expected prototype:\nork::half ork::vec2h::squaredDistanceTo(const ork::vec2h & v) const\nClass arguments details:\narg 1 ID = 81304242\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2h* v_ptr=(Luna< ork::vec2h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec2h::squaredDistanceTo function");
		}
		const ork::vec2h & v=*v_ptr;

		ork::vec2h* self=(Luna< ork::vec2h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::half ork::vec2h::squaredDistanceTo(const ork::vec2h &) const. Got : '%s'\n%s",typeid(Luna< ork::vec2h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::half stack_lret = self->squaredDistanceTo(v);
		ork::half* lret = new ork::half(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::half >::push(L,lret,true);

		return 1;
	}

	// ork::half ork::vec2h::dot(const ork::vec2h & v) const
	static int _bind_dot(lua_State *L) {
		if (!_lg_typecheck_dot(L)) {
			luaL_error(L, "luna typecheck failed in ork::half ork::vec2h::dot(const ork::vec2h & v) const function, expected prototype:\nork::half ork::vec2h::dot(const ork::vec2h & v) const\nClass arguments details:\narg 1 ID = 81304242\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2h* v_ptr=(Luna< ork::vec2h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec2h::dot function");
		}
		const ork::vec2h & v=*v_ptr;

		ork::vec2h* self=(Luna< ork::vec2h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::half ork::vec2h::dot(const ork::vec2h &) const. Got : '%s'\n%s",typeid(Luna< ork::vec2h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::half stack_lret = self->dot(v);
		ork::half* lret = new ork::half(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::half >::push(L,lret,true);

		return 1;
	}

	// ork::half ork::vec2h::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in ork::half ork::vec2h::x() function, expected prototype:\nork::half ork::vec2h::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec2h* self=(Luna< ork::vec2h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::half ork::vec2h::x(). Got : '%s'\n%s",typeid(Luna< ork::vec2h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::half* lret = &self->x;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::half >::push(L,lret,false);

		return 1;
	}

	// ork::half ork::vec2h::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in ork::half ork::vec2h::y() function, expected prototype:\nork::half ork::vec2h::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec2h* self=(Luna< ork::vec2h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::half ork::vec2h::y(). Got : '%s'\n%s",typeid(Luna< ork::vec2h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::half* lret = &self->y;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::half >::push(L,lret,false);

		return 1;
	}

	// void ork::vec2h::x(ork::half value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void ork::vec2h::x(ork::half value) function, expected prototype:\nvoid ork::vec2h::x(ork::half value)\nClass arguments details:\narg 1 ID = 18331161\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::half* value_ptr=(Luna< ork::half >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in ork::vec2h::x function");
		}
		ork::half value=*value_ptr;

		ork::vec2h* self=(Luna< ork::vec2h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::vec2h::x(ork::half). Got : '%s'\n%s",typeid(Luna< ork::vec2h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void ork::vec2h::y(ork::half value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void ork::vec2h::y(ork::half value) function, expected prototype:\nvoid ork::vec2h::y(ork::half value)\nClass arguments details:\narg 1 ID = 18331161\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::half* value_ptr=(Luna< ork::half >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in ork::vec2h::y function");
		}
		ork::half value=*value_ptr;

		ork::vec2h* self=(Luna< ork::vec2h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::vec2h::y(ork::half). Got : '%s'\n%s",typeid(Luna< ork::vec2h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}


	// Operator binds:
	// ork::half & ork::vec2h::operator[](const int i)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luaL_error(L, "luna typecheck failed in ork::half & ork::vec2h::operator[](const int i) function, expected prototype:\nork::half & ork::vec2h::operator[](const int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const int i=(const int)lua_tointeger(L,2);

		ork::vec2h* self=(Luna< ork::vec2h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::half & ork::vec2h::operator[](const int). Got : '%s'\n%s",typeid(Luna< ork::vec2h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::half* lret = &self->operator[](i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::half >::push(L,lret,false);

		return 1;
	}

	// bool ork::vec2h::operator==(const ork::vec2h & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::vec2h::operator==(const ork::vec2h & v) const function, expected prototype:\nbool ork::vec2h::operator==(const ork::vec2h & v) const\nClass arguments details:\narg 1 ID = 81304242\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2h* v_ptr=(Luna< ork::vec2h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec2h::operator== function");
		}
		const ork::vec2h & v=*v_ptr;

		ork::vec2h* self=(Luna< ork::vec2h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::vec2h::operator==(const ork::vec2h &) const. Got : '%s'\n%s",typeid(Luna< ork::vec2h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::vec2h::operator!=(const ork::vec2h & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::vec2h::operator!=(const ork::vec2h & v) const function, expected prototype:\nbool ork::vec2h::operator!=(const ork::vec2h & v) const\nClass arguments details:\narg 1 ID = 81304242\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2h* v_ptr=(Luna< ork::vec2h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec2h::operator!= function");
		}
		const ork::vec2h & v=*v_ptr;

		ork::vec2h* self=(Luna< ork::vec2h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::vec2h::operator!=(const ork::vec2h &) const. Got : '%s'\n%s",typeid(Luna< ork::vec2h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::vec2h ork::vec2h::operator+(const ork::vec2h & v) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2h ork::vec2h::operator+(const ork::vec2h & v) const function, expected prototype:\nork::vec2h ork::vec2h::operator+(const ork::vec2h & v) const\nClass arguments details:\narg 1 ID = 81304242\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2h* v_ptr=(Luna< ork::vec2h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec2h::operator+ function");
		}
		const ork::vec2h & v=*v_ptr;

		ork::vec2h* self=(Luna< ork::vec2h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2h ork::vec2h::operator+(const ork::vec2h &) const. Got : '%s'\n%s",typeid(Luna< ork::vec2h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2h stack_lret = self->operator+(v);
		ork::vec2h* lret = new ork::vec2h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2h >::push(L,lret,true);

		return 1;
	}

	// ork::vec2h ork::vec2h::operator-(const ork::vec2h & v) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2h ork::vec2h::operator-(const ork::vec2h & v) const function, expected prototype:\nork::vec2h ork::vec2h::operator-(const ork::vec2h & v) const\nClass arguments details:\narg 1 ID = 81304242\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2h* v_ptr=(Luna< ork::vec2h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec2h::operator- function");
		}
		const ork::vec2h & v=*v_ptr;

		ork::vec2h* self=(Luna< ork::vec2h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2h ork::vec2h::operator-(const ork::vec2h &) const. Got : '%s'\n%s",typeid(Luna< ork::vec2h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2h stack_lret = self->operator-(v);
		ork::vec2h* lret = new ork::vec2h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2h >::push(L,lret,true);

		return 1;
	}

	// ork::vec2h ork::vec2h::operator*(const ork::vec2h & v) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2h ork::vec2h::operator*(const ork::vec2h & v) const function, expected prototype:\nork::vec2h ork::vec2h::operator*(const ork::vec2h & v) const\nClass arguments details:\narg 1 ID = 81304242\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2h* v_ptr=(Luna< ork::vec2h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec2h::operator* function");
		}
		const ork::vec2h & v=*v_ptr;

		ork::vec2h* self=(Luna< ork::vec2h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2h ork::vec2h::operator*(const ork::vec2h &) const. Got : '%s'\n%s",typeid(Luna< ork::vec2h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2h stack_lret = self->operator*(v);
		ork::vec2h* lret = new ork::vec2h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2h >::push(L,lret,true);

		return 1;
	}

	// ork::vec2h ork::vec2h::operator*(const ork::half scalar) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2h ork::vec2h::operator*(const ork::half scalar) const function, expected prototype:\nork::vec2h ork::vec2h::operator*(const ork::half scalar) const\nClass arguments details:\narg 1 ID = 18331161\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::half* scalar_ptr=(Luna< ork::half >::check(L,2));
		if( !scalar_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scalar in ork::vec2h::operator* function");
		}
		const ork::half scalar=*scalar_ptr;

		ork::vec2h* self=(Luna< ork::vec2h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2h ork::vec2h::operator*(const ork::half) const. Got : '%s'\n%s",typeid(Luna< ork::vec2h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2h stack_lret = self->operator*(scalar);
		ork::vec2h* lret = new ork::vec2h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2h >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::vec2h::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const ork::vec2h &)\n  operator*(const ork::half)\n");
		return 0;
	}

	// ork::vec2h ork::vec2h::operator/(const ork::vec2h & v) const
	static int _bind___div_overload_1(lua_State *L) {
		if (!_lg_typecheck___div_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2h ork::vec2h::operator/(const ork::vec2h & v) const function, expected prototype:\nork::vec2h ork::vec2h::operator/(const ork::vec2h & v) const\nClass arguments details:\narg 1 ID = 81304242\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2h* v_ptr=(Luna< ork::vec2h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec2h::operator/ function");
		}
		const ork::vec2h & v=*v_ptr;

		ork::vec2h* self=(Luna< ork::vec2h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2h ork::vec2h::operator/(const ork::vec2h &) const. Got : '%s'\n%s",typeid(Luna< ork::vec2h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2h stack_lret = self->operator/(v);
		ork::vec2h* lret = new ork::vec2h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2h >::push(L,lret,true);

		return 1;
	}

	// ork::vec2h ork::vec2h::operator/(const ork::half scalar) const
	static int _bind___div_overload_2(lua_State *L) {
		if (!_lg_typecheck___div_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2h ork::vec2h::operator/(const ork::half scalar) const function, expected prototype:\nork::vec2h ork::vec2h::operator/(const ork::half scalar) const\nClass arguments details:\narg 1 ID = 18331161\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::half* scalar_ptr=(Luna< ork::half >::check(L,2));
		if( !scalar_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scalar in ork::vec2h::operator/ function");
		}
		const ork::half scalar=*scalar_ptr;

		ork::vec2h* self=(Luna< ork::vec2h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2h ork::vec2h::operator/(const ork::half) const. Got : '%s'\n%s",typeid(Luna< ork::vec2h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2h stack_lret = self->operator/(scalar);
		ork::vec2h* lret = new ork::vec2h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2h >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::vec2h::operator/
	static int _bind___div(lua_State *L) {
		if (_lg_typecheck___div_overload_1(L)) return _bind___div_overload_1(L);
		if (_lg_typecheck___div_overload_2(L)) return _bind___div_overload_2(L);

		luaL_error(L, "error in function operator/, cannot match any of the overloads for function operator/:\n  operator/(const ork::vec2h &)\n  operator/(const ork::half)\n");
		return 0;
	}

	// ork::vec2h ork::vec2h::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2h ork::vec2h::operator-() const function, expected prototype:\nork::vec2h ork::vec2h::operator-() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec2h* self=(Luna< ork::vec2h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2h ork::vec2h::operator-() const. Got : '%s'\n%s",typeid(Luna< ork::vec2h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2h stack_lret = self->operator-();
		ork::vec2h* lret = new ork::vec2h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2h >::push(L,lret,true);

		return 1;
	}

	// bool ork::vec2h::operator<(const ork::vec2h & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::vec2h::operator<(const ork::vec2h & v) const function, expected prototype:\nbool ork::vec2h::operator<(const ork::vec2h & v) const\nClass arguments details:\narg 1 ID = 81304242\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2h* v_ptr=(Luna< ork::vec2h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec2h::operator< function");
		}
		const ork::vec2h & v=*v_ptr;

		ork::vec2h* self=(Luna< ork::vec2h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::vec2h::operator<(const ork::vec2h &) const. Got : '%s'\n%s",typeid(Luna< ork::vec2h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

ork::vec2h* LunaTraits< ork::vec2h >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_vec2h::_bind_ctor(L);
}

void LunaTraits< ork::vec2h >::_bind_dtor(ork::vec2h* obj) {
	delete obj;
}

const char LunaTraits< ork::vec2h >::className[] = "vec2h";
const char LunaTraits< ork::vec2h >::fullName[] = "ork::vec2h";
const char LunaTraits< ork::vec2h >::moduleName[] = "ork";
const char* LunaTraits< ork::vec2h >::parents[] = {0};
const int LunaTraits< ork::vec2h >::hash = 81304242;
const int LunaTraits< ork::vec2h >::uniqueIDs[] = {81304242,0};

luna_RegType LunaTraits< ork::vec2h >::methods[] = {
	{"length", &luna_wrapper_ork_vec2h::_bind_length},
	{"squaredLength", &luna_wrapper_ork_vec2h::_bind_squaredLength},
	{"normalize", &luna_wrapper_ork_vec2h::_bind_normalize},
	{"distanceTo", &luna_wrapper_ork_vec2h::_bind_distanceTo},
	{"squaredDistanceTo", &luna_wrapper_ork_vec2h::_bind_squaredDistanceTo},
	{"dot", &luna_wrapper_ork_vec2h::_bind_dot},
	{"getX", &luna_wrapper_ork_vec2h::_bind_getX},
	{"getY", &luna_wrapper_ork_vec2h::_bind_getY},
	{"setX", &luna_wrapper_ork_vec2h::_bind_setX},
	{"setY", &luna_wrapper_ork_vec2h::_bind_setY},
	{"op_index", &luna_wrapper_ork_vec2h::_bind_op_index},
	{"__eq", &luna_wrapper_ork_vec2h::_bind___eq},
	{"op_neq", &luna_wrapper_ork_vec2h::_bind_op_neq},
	{"__add", &luna_wrapper_ork_vec2h::_bind___add},
	{"__sub", &luna_wrapper_ork_vec2h::_bind___sub},
	{"__mul", &luna_wrapper_ork_vec2h::_bind___mul},
	{"__div", &luna_wrapper_ork_vec2h::_bind___div},
	{"__unm", &luna_wrapper_ork_vec2h::_bind___unm},
	{"__lt", &luna_wrapper_ork_vec2h::_bind___lt},
	{"dynCast", &luna_wrapper_ork_vec2h::_bind_dynCast},
	{"fromVoid", &luna_wrapper_ork_vec2h::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_vec2h::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::vec2h >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::vec2h >::enumValues[] = {
	{0,0}
};


