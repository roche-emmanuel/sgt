#include <plug_common.h>

class luna_wrapper_ork_vec4h {
public:
	typedef Luna< ork::vec4h > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec4h* self= (ork::vec4h*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::vec4h >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304304) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::vec4h >::check(L,1));
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

		ork::vec4h* self=(Luna< ork::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::vec4h");
		
		return luna_dynamicCast(L,converters,"ork::vec4h",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18331161) ) return false;
		if( (!(Luna< ork::half >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,18331161) ) return false;
		if( (!(Luna< ork::half >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18331161) ) return false;
		if( (!(Luna< ork::half >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,18331161) ) return false;
		if( (!(Luna< ork::half >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304304) ) return false;
		if( (!(Luna< ork::vec4h >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304273) ) return false;
		if( (!(Luna< ork::vec3h >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304273) ) return false;
		if( (!(Luna< ork::vec3h >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,18331161) ) return false;
		if( (!(Luna< ork::half >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_xyzw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_xyz(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_xy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_getZ(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getW(lua_State *L) {
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

	inline static bool _lg_typecheck_setZ(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18331161) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setW(lua_State *L) {
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

		if( !Luna<void>::has_uniqueid(L,2,81304304) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304304) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304304) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304304) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304304) ) return false;
		if( (!(Luna< ork::vec4h >::check(L,2))) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,81304304) ) return false;
		if( (!(Luna< ork::vec4h >::check(L,2))) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,81304304) ) return false;
		return true;
	}


	// Constructor binds:
	// ork::vec4h::vec4h()
	static ork::vec4h* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4h::vec4h() function, expected prototype:\nork::vec4h::vec4h()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::vec4h();
	}

	// ork::vec4h::vec4h(ork::half xi, ork::half yi, ork::half zi, ork::half wi)
	static ork::vec4h* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4h::vec4h(ork::half xi, ork::half yi, ork::half zi, ork::half wi) function, expected prototype:\nork::vec4h::vec4h(ork::half xi, ork::half yi, ork::half zi, ork::half wi)\nClass arguments details:\narg 1 ID = 18331161\narg 2 ID = 18331161\narg 3 ID = 18331161\narg 4 ID = 18331161\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::half* xi_ptr=(Luna< ork::half >::check(L,1));
		if( !xi_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xi in ork::vec4h::vec4h function");
		}
		ork::half xi=*xi_ptr;
		ork::half* yi_ptr=(Luna< ork::half >::check(L,2));
		if( !yi_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg yi in ork::vec4h::vec4h function");
		}
		ork::half yi=*yi_ptr;
		ork::half* zi_ptr=(Luna< ork::half >::check(L,3));
		if( !zi_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg zi in ork::vec4h::vec4h function");
		}
		ork::half zi=*zi_ptr;
		ork::half* wi_ptr=(Luna< ork::half >::check(L,4));
		if( !wi_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wi in ork::vec4h::vec4h function");
		}
		ork::half wi=*wi_ptr;

		return new ork::vec4h(xi, yi, zi, wi);
	}

	// ork::vec4h::vec4h(const ork::vec4h & v)
	static ork::vec4h* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4h::vec4h(const ork::vec4h & v) function, expected prototype:\nork::vec4h::vec4h(const ork::vec4h & v)\nClass arguments details:\narg 1 ID = 81304304\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4h* v_ptr=(Luna< ork::vec4h >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4h::vec4h function");
		}
		const ork::vec4h & v=*v_ptr;

		return new ork::vec4h(v);
	}

	// ork::vec4h::vec4h(const ork::vec3h & v)
	static ork::vec4h* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4h::vec4h(const ork::vec3h & v) function, expected prototype:\nork::vec4h::vec4h(const ork::vec3h & v)\nClass arguments details:\narg 1 ID = 81304273\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3h* v_ptr=(Luna< ork::vec3h >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4h::vec4h function");
		}
		const ork::vec3h & v=*v_ptr;

		return new ork::vec4h(v);
	}

	// ork::vec4h::vec4h(const ork::vec3h & v, ork::half wi)
	static ork::vec4h* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4h::vec4h(const ork::vec3h & v, ork::half wi) function, expected prototype:\nork::vec4h::vec4h(const ork::vec3h & v, ork::half wi)\nClass arguments details:\narg 1 ID = 81304273\narg 2 ID = 18331161\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3h* v_ptr=(Luna< ork::vec3h >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4h::vec4h function");
		}
		const ork::vec3h & v=*v_ptr;
		ork::half* wi_ptr=(Luna< ork::half >::check(L,2));
		if( !wi_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wi in ork::vec4h::vec4h function");
		}
		ork::half wi=*wi_ptr;

		return new ork::vec4h(v, wi);
	}

	// Overload binder for ork::vec4h::vec4h
	static ork::vec4h* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);

		luaL_error(L, "error in function vec4h, cannot match any of the overloads for function vec4h:\n  vec4h()\n  vec4h(ork::half, ork::half, ork::half, ork::half)\n  vec4h(const ork::vec4h &)\n  vec4h(const ork::vec3h &)\n  vec4h(const ork::vec3h &, ork::half)\n");
		return NULL;
	}


	// Function binds:
	// ork::vec3h ork::vec4h::xyzw() const
	static int _bind_xyzw(lua_State *L) {
		if (!_lg_typecheck_xyzw(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3h ork::vec4h::xyzw() const function, expected prototype:\nork::vec3h ork::vec4h::xyzw() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4h* self=(Luna< ork::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3h ork::vec4h::xyzw() const. Got : '%s'\n%s",typeid(Luna< ork::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3h stack_lret = self->xyzw();
		ork::vec3h* lret = new ork::vec3h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3h >::push(L,lret,true);

		return 1;
	}

	// ork::vec3h ork::vec4h::xyz() const
	static int _bind_xyz(lua_State *L) {
		if (!_lg_typecheck_xyz(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3h ork::vec4h::xyz() const function, expected prototype:\nork::vec3h ork::vec4h::xyz() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4h* self=(Luna< ork::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3h ork::vec4h::xyz() const. Got : '%s'\n%s",typeid(Luna< ork::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3h stack_lret = self->xyz();
		ork::vec3h* lret = new ork::vec3h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3h >::push(L,lret,true);

		return 1;
	}

	// ork::vec2h ork::vec4h::xy() const
	static int _bind_xy(lua_State *L) {
		if (!_lg_typecheck_xy(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2h ork::vec4h::xy() const function, expected prototype:\nork::vec2h ork::vec4h::xy() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4h* self=(Luna< ork::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2h ork::vec4h::xy() const. Got : '%s'\n%s",typeid(Luna< ork::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2h stack_lret = self->xy();
		ork::vec2h* lret = new ork::vec2h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2h >::push(L,lret,true);

		return 1;
	}

	// ork::half ork::vec4h::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in ork::half ork::vec4h::x() function, expected prototype:\nork::half ork::vec4h::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4h* self=(Luna< ork::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::half ork::vec4h::x(). Got : '%s'\n%s",typeid(Luna< ork::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::half* lret = &self->x;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::half >::push(L,lret,false);

		return 1;
	}

	// ork::half ork::vec4h::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in ork::half ork::vec4h::y() function, expected prototype:\nork::half ork::vec4h::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4h* self=(Luna< ork::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::half ork::vec4h::y(). Got : '%s'\n%s",typeid(Luna< ork::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::half* lret = &self->y;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::half >::push(L,lret,false);

		return 1;
	}

	// ork::half ork::vec4h::z()
	static int _bind_getZ(lua_State *L) {
		if (!_lg_typecheck_getZ(L)) {
			luaL_error(L, "luna typecheck failed in ork::half ork::vec4h::z() function, expected prototype:\nork::half ork::vec4h::z()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4h* self=(Luna< ork::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::half ork::vec4h::z(). Got : '%s'\n%s",typeid(Luna< ork::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::half* lret = &self->z;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::half >::push(L,lret,false);

		return 1;
	}

	// ork::half ork::vec4h::w()
	static int _bind_getW(lua_State *L) {
		if (!_lg_typecheck_getW(L)) {
			luaL_error(L, "luna typecheck failed in ork::half ork::vec4h::w() function, expected prototype:\nork::half ork::vec4h::w()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4h* self=(Luna< ork::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::half ork::vec4h::w(). Got : '%s'\n%s",typeid(Luna< ork::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::half* lret = &self->w;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::half >::push(L,lret,false);

		return 1;
	}

	// void ork::vec4h::x(ork::half value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void ork::vec4h::x(ork::half value) function, expected prototype:\nvoid ork::vec4h::x(ork::half value)\nClass arguments details:\narg 1 ID = 18331161\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::half* value_ptr=(Luna< ork::half >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in ork::vec4h::x function");
		}
		ork::half value=*value_ptr;

		ork::vec4h* self=(Luna< ork::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::vec4h::x(ork::half). Got : '%s'\n%s",typeid(Luna< ork::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void ork::vec4h::y(ork::half value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void ork::vec4h::y(ork::half value) function, expected prototype:\nvoid ork::vec4h::y(ork::half value)\nClass arguments details:\narg 1 ID = 18331161\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::half* value_ptr=(Luna< ork::half >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in ork::vec4h::y function");
		}
		ork::half value=*value_ptr;

		ork::vec4h* self=(Luna< ork::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::vec4h::y(ork::half). Got : '%s'\n%s",typeid(Luna< ork::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}

	// void ork::vec4h::z(ork::half value)
	static int _bind_setZ(lua_State *L) {
		if (!_lg_typecheck_setZ(L)) {
			luaL_error(L, "luna typecheck failed in void ork::vec4h::z(ork::half value) function, expected prototype:\nvoid ork::vec4h::z(ork::half value)\nClass arguments details:\narg 1 ID = 18331161\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::half* value_ptr=(Luna< ork::half >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in ork::vec4h::z function");
		}
		ork::half value=*value_ptr;

		ork::vec4h* self=(Luna< ork::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::vec4h::z(ork::half). Got : '%s'\n%s",typeid(Luna< ork::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->z = value;

		return 0;
	}

	// void ork::vec4h::w(ork::half value)
	static int _bind_setW(lua_State *L) {
		if (!_lg_typecheck_setW(L)) {
			luaL_error(L, "luna typecheck failed in void ork::vec4h::w(ork::half value) function, expected prototype:\nvoid ork::vec4h::w(ork::half value)\nClass arguments details:\narg 1 ID = 18331161\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::half* value_ptr=(Luna< ork::half >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in ork::vec4h::w function");
		}
		ork::half value=*value_ptr;

		ork::vec4h* self=(Luna< ork::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::vec4h::w(ork::half). Got : '%s'\n%s",typeid(Luna< ork::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->w = value;

		return 0;
	}


	// Operator binds:
	// ork::half & ork::vec4h::operator[](const int i)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luaL_error(L, "luna typecheck failed in ork::half & ork::vec4h::operator[](const int i) function, expected prototype:\nork::half & ork::vec4h::operator[](const int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const int i=(const int)lua_tointeger(L,2);

		ork::vec4h* self=(Luna< ork::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::half & ork::vec4h::operator[](const int). Got : '%s'\n%s",typeid(Luna< ork::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::half* lret = &self->operator[](i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::half >::push(L,lret,false);

		return 1;
	}

	// bool ork::vec4h::operator==(const ork::vec4h & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::vec4h::operator==(const ork::vec4h & v) const function, expected prototype:\nbool ork::vec4h::operator==(const ork::vec4h & v) const\nClass arguments details:\narg 1 ID = 81304304\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4h* v_ptr=(Luna< ork::vec4h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4h::operator== function");
		}
		const ork::vec4h & v=*v_ptr;

		ork::vec4h* self=(Luna< ork::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::vec4h::operator==(const ork::vec4h &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::vec4h::operator!=(const ork::vec4h & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::vec4h::operator!=(const ork::vec4h & v) const function, expected prototype:\nbool ork::vec4h::operator!=(const ork::vec4h & v) const\nClass arguments details:\narg 1 ID = 81304304\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4h* v_ptr=(Luna< ork::vec4h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4h::operator!= function");
		}
		const ork::vec4h & v=*v_ptr;

		ork::vec4h* self=(Luna< ork::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::vec4h::operator!=(const ork::vec4h &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::vec4h ork::vec4h::operator+(const ork::vec4h & v) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4h ork::vec4h::operator+(const ork::vec4h & v) const function, expected prototype:\nork::vec4h ork::vec4h::operator+(const ork::vec4h & v) const\nClass arguments details:\narg 1 ID = 81304304\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4h* v_ptr=(Luna< ork::vec4h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4h::operator+ function");
		}
		const ork::vec4h & v=*v_ptr;

		ork::vec4h* self=(Luna< ork::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4h ork::vec4h::operator+(const ork::vec4h &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4h stack_lret = self->operator+(v);
		ork::vec4h* lret = new ork::vec4h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4h >::push(L,lret,true);

		return 1;
	}

	// ork::vec4h ork::vec4h::operator-(const ork::vec4h & v) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4h ork::vec4h::operator-(const ork::vec4h & v) const function, expected prototype:\nork::vec4h ork::vec4h::operator-(const ork::vec4h & v) const\nClass arguments details:\narg 1 ID = 81304304\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4h* v_ptr=(Luna< ork::vec4h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4h::operator- function");
		}
		const ork::vec4h & v=*v_ptr;

		ork::vec4h* self=(Luna< ork::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4h ork::vec4h::operator-(const ork::vec4h &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4h stack_lret = self->operator-(v);
		ork::vec4h* lret = new ork::vec4h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4h >::push(L,lret,true);

		return 1;
	}

	// ork::vec4h ork::vec4h::operator*(const ork::vec4h & v) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4h ork::vec4h::operator*(const ork::vec4h & v) const function, expected prototype:\nork::vec4h ork::vec4h::operator*(const ork::vec4h & v) const\nClass arguments details:\narg 1 ID = 81304304\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4h* v_ptr=(Luna< ork::vec4h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4h::operator* function");
		}
		const ork::vec4h & v=*v_ptr;

		ork::vec4h* self=(Luna< ork::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4h ork::vec4h::operator*(const ork::vec4h &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4h stack_lret = self->operator*(v);
		ork::vec4h* lret = new ork::vec4h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4h >::push(L,lret,true);

		return 1;
	}

	// ork::vec4h ork::vec4h::operator*(const ork::half scalar) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4h ork::vec4h::operator*(const ork::half scalar) const function, expected prototype:\nork::vec4h ork::vec4h::operator*(const ork::half scalar) const\nClass arguments details:\narg 1 ID = 18331161\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::half* scalar_ptr=(Luna< ork::half >::check(L,2));
		if( !scalar_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scalar in ork::vec4h::operator* function");
		}
		const ork::half scalar=*scalar_ptr;

		ork::vec4h* self=(Luna< ork::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4h ork::vec4h::operator*(const ork::half) const. Got : '%s'\n%s",typeid(Luna< ork::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4h stack_lret = self->operator*(scalar);
		ork::vec4h* lret = new ork::vec4h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4h >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::vec4h::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const ork::vec4h &)\n  operator*(const ork::half)\n");
		return 0;
	}

	// ork::vec4h ork::vec4h::operator/(const ork::vec4h & v) const
	static int _bind___div_overload_1(lua_State *L) {
		if (!_lg_typecheck___div_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4h ork::vec4h::operator/(const ork::vec4h & v) const function, expected prototype:\nork::vec4h ork::vec4h::operator/(const ork::vec4h & v) const\nClass arguments details:\narg 1 ID = 81304304\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4h* v_ptr=(Luna< ork::vec4h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4h::operator/ function");
		}
		const ork::vec4h & v=*v_ptr;

		ork::vec4h* self=(Luna< ork::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4h ork::vec4h::operator/(const ork::vec4h &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4h stack_lret = self->operator/(v);
		ork::vec4h* lret = new ork::vec4h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4h >::push(L,lret,true);

		return 1;
	}

	// ork::vec4h ork::vec4h::operator/(const ork::half scalar) const
	static int _bind___div_overload_2(lua_State *L) {
		if (!_lg_typecheck___div_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4h ork::vec4h::operator/(const ork::half scalar) const function, expected prototype:\nork::vec4h ork::vec4h::operator/(const ork::half scalar) const\nClass arguments details:\narg 1 ID = 18331161\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::half* scalar_ptr=(Luna< ork::half >::check(L,2));
		if( !scalar_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scalar in ork::vec4h::operator/ function");
		}
		const ork::half scalar=*scalar_ptr;

		ork::vec4h* self=(Luna< ork::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4h ork::vec4h::operator/(const ork::half) const. Got : '%s'\n%s",typeid(Luna< ork::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4h stack_lret = self->operator/(scalar);
		ork::vec4h* lret = new ork::vec4h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4h >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::vec4h::operator/
	static int _bind___div(lua_State *L) {
		if (_lg_typecheck___div_overload_1(L)) return _bind___div_overload_1(L);
		if (_lg_typecheck___div_overload_2(L)) return _bind___div_overload_2(L);

		luaL_error(L, "error in function operator/, cannot match any of the overloads for function operator/:\n  operator/(const ork::vec4h &)\n  operator/(const ork::half)\n");
		return 0;
	}

	// ork::vec4h ork::vec4h::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4h ork::vec4h::operator-() const function, expected prototype:\nork::vec4h ork::vec4h::operator-() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4h* self=(Luna< ork::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4h ork::vec4h::operator-() const. Got : '%s'\n%s",typeid(Luna< ork::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4h stack_lret = self->operator-();
		ork::vec4h* lret = new ork::vec4h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4h >::push(L,lret,true);

		return 1;
	}

	// bool ork::vec4h::operator<(const ork::vec4h & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::vec4h::operator<(const ork::vec4h & v) const function, expected prototype:\nbool ork::vec4h::operator<(const ork::vec4h & v) const\nClass arguments details:\narg 1 ID = 81304304\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4h* v_ptr=(Luna< ork::vec4h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4h::operator< function");
		}
		const ork::vec4h & v=*v_ptr;

		ork::vec4h* self=(Luna< ork::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::vec4h::operator<(const ork::vec4h &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

ork::vec4h* LunaTraits< ork::vec4h >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_vec4h::_bind_ctor(L);
}

void LunaTraits< ork::vec4h >::_bind_dtor(ork::vec4h* obj) {
	delete obj;
}

const char LunaTraits< ork::vec4h >::className[] = "vec4h";
const char LunaTraits< ork::vec4h >::fullName[] = "ork::vec4h";
const char LunaTraits< ork::vec4h >::moduleName[] = "ork";
const char* LunaTraits< ork::vec4h >::parents[] = {0};
const int LunaTraits< ork::vec4h >::hash = 81304304;
const int LunaTraits< ork::vec4h >::uniqueIDs[] = {81304304,0};

luna_RegType LunaTraits< ork::vec4h >::methods[] = {
	{"xyzw", &luna_wrapper_ork_vec4h::_bind_xyzw},
	{"xyz", &luna_wrapper_ork_vec4h::_bind_xyz},
	{"xy", &luna_wrapper_ork_vec4h::_bind_xy},
	{"getX", &luna_wrapper_ork_vec4h::_bind_getX},
	{"getY", &luna_wrapper_ork_vec4h::_bind_getY},
	{"getZ", &luna_wrapper_ork_vec4h::_bind_getZ},
	{"getW", &luna_wrapper_ork_vec4h::_bind_getW},
	{"setX", &luna_wrapper_ork_vec4h::_bind_setX},
	{"setY", &luna_wrapper_ork_vec4h::_bind_setY},
	{"setZ", &luna_wrapper_ork_vec4h::_bind_setZ},
	{"setW", &luna_wrapper_ork_vec4h::_bind_setW},
	{"op_index", &luna_wrapper_ork_vec4h::_bind_op_index},
	{"__eq", &luna_wrapper_ork_vec4h::_bind___eq},
	{"op_neq", &luna_wrapper_ork_vec4h::_bind_op_neq},
	{"__add", &luna_wrapper_ork_vec4h::_bind___add},
	{"__sub", &luna_wrapper_ork_vec4h::_bind___sub},
	{"__mul", &luna_wrapper_ork_vec4h::_bind___mul},
	{"__div", &luna_wrapper_ork_vec4h::_bind___div},
	{"__unm", &luna_wrapper_ork_vec4h::_bind___unm},
	{"__lt", &luna_wrapper_ork_vec4h::_bind___lt},
	{"dynCast", &luna_wrapper_ork_vec4h::_bind_dynCast},
	{"fromVoid", &luna_wrapper_ork_vec4h::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_vec4h::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::vec4h >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::vec4h >::enumValues[] = {
	{0,0}
};


