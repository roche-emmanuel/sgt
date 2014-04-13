#include <plug_common.h>

class luna_wrapper_ork_vec4d {
public:
	typedef Luna< ork::vec4d > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec4d* self= (ork::vec4d*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::vec4d >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304300) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::vec4d >::check(L,1));
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

		ork::vec4d* self=(Luna< ork::vec4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::vec4d");
		
		return luna_dynamicCast(L,converters,"ork::vec4d",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304300) ) return false;
		if( (!(Luna< ork::vec4d >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304269) ) return false;
		if( (!(Luna< ork::vec3d >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304269) ) return false;
		if( (!(Luna< ork::vec3d >::check(L,1))) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_setW(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,81304300) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304300) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304300) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304300) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304300) ) return false;
		if( (!(Luna< ork::vec4d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304300) ) return false;
		if( (!(Luna< ork::vec4d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304300) ) return false;
		return true;
	}


	// Constructor binds:
	// ork::vec4d::vec4d()
	static ork::vec4d* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4d::vec4d() function, expected prototype:\nork::vec4d::vec4d()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::vec4d();
	}

	// ork::vec4d::vec4d(double xi, double yi, double zi, double wi)
	static ork::vec4d* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4d::vec4d(double xi, double yi, double zi, double wi) function, expected prototype:\nork::vec4d::vec4d(double xi, double yi, double zi, double wi)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double xi=(double)lua_tonumber(L,1);
		double yi=(double)lua_tonumber(L,2);
		double zi=(double)lua_tonumber(L,3);
		double wi=(double)lua_tonumber(L,4);

		return new ork::vec4d(xi, yi, zi, wi);
	}

	// ork::vec4d::vec4d(const ork::vec4d & v)
	static ork::vec4d* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4d::vec4d(const ork::vec4d & v) function, expected prototype:\nork::vec4d::vec4d(const ork::vec4d & v)\nClass arguments details:\narg 1 ID = 81304300\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4d* v_ptr=(Luna< ork::vec4d >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4d::vec4d function");
		}
		const ork::vec4d & v=*v_ptr;

		return new ork::vec4d(v);
	}

	// ork::vec4d::vec4d(const ork::vec3d & v)
	static ork::vec4d* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4d::vec4d(const ork::vec3d & v) function, expected prototype:\nork::vec4d::vec4d(const ork::vec3d & v)\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* v_ptr=(Luna< ork::vec3d >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4d::vec4d function");
		}
		const ork::vec3d & v=*v_ptr;

		return new ork::vec4d(v);
	}

	// ork::vec4d::vec4d(const ork::vec3d & v, double wi)
	static ork::vec4d* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4d::vec4d(const ork::vec3d & v, double wi) function, expected prototype:\nork::vec4d::vec4d(const ork::vec3d & v, double wi)\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* v_ptr=(Luna< ork::vec3d >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4d::vec4d function");
		}
		const ork::vec3d & v=*v_ptr;
		double wi=(double)lua_tonumber(L,2);

		return new ork::vec4d(v, wi);
	}

	// Overload binder for ork::vec4d::vec4d
	static ork::vec4d* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);

		luaL_error(L, "error in function vec4d, cannot match any of the overloads for function vec4d:\n  vec4d()\n  vec4d(double, double, double, double)\n  vec4d(const ork::vec4d &)\n  vec4d(const ork::vec3d &)\n  vec4d(const ork::vec3d &, double)\n");
		return NULL;
	}


	// Function binds:
	// ork::vec3d ork::vec4d::xyzw() const
	static int _bind_xyzw(lua_State *L) {
		if (!_lg_typecheck_xyzw(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d ork::vec4d::xyzw() const function, expected prototype:\nork::vec3d ork::vec4d::xyzw() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4d* self=(Luna< ork::vec4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d ork::vec4d::xyzw() const. Got : '%s'\n%s",typeid(Luna< ork::vec4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->xyzw();
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// ork::vec3d ork::vec4d::xyz() const
	static int _bind_xyz(lua_State *L) {
		if (!_lg_typecheck_xyz(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d ork::vec4d::xyz() const function, expected prototype:\nork::vec3d ork::vec4d::xyz() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4d* self=(Luna< ork::vec4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d ork::vec4d::xyz() const. Got : '%s'\n%s",typeid(Luna< ork::vec4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->xyz();
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// ork::vec2d ork::vec4d::xy() const
	static int _bind_xy(lua_State *L) {
		if (!_lg_typecheck_xy(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2d ork::vec4d::xy() const function, expected prototype:\nork::vec2d ork::vec4d::xy() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4d* self=(Luna< ork::vec4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2d ork::vec4d::xy() const. Got : '%s'\n%s",typeid(Luna< ork::vec4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2d stack_lret = self->xy();
		ork::vec2d* lret = new ork::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2d >::push(L,lret,true);

		return 1;
	}

	// double ork::vec4d::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in double ork::vec4d::x() function, expected prototype:\ndouble ork::vec4d::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4d* self=(Luna< ork::vec4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::vec4d::x(). Got : '%s'\n%s",typeid(Luna< ork::vec4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::vec4d::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in double ork::vec4d::y() function, expected prototype:\ndouble ork::vec4d::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4d* self=(Luna< ork::vec4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::vec4d::y(). Got : '%s'\n%s",typeid(Luna< ork::vec4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::vec4d::z()
	static int _bind_getZ(lua_State *L) {
		if (!_lg_typecheck_getZ(L)) {
			luaL_error(L, "luna typecheck failed in double ork::vec4d::z() function, expected prototype:\ndouble ork::vec4d::z()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4d* self=(Luna< ork::vec4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::vec4d::z(). Got : '%s'\n%s",typeid(Luna< ork::vec4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->z;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::vec4d::w()
	static int _bind_getW(lua_State *L) {
		if (!_lg_typecheck_getW(L)) {
			luaL_error(L, "luna typecheck failed in double ork::vec4d::w() function, expected prototype:\ndouble ork::vec4d::w()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4d* self=(Luna< ork::vec4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::vec4d::w(). Got : '%s'\n%s",typeid(Luna< ork::vec4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->w;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::vec4d::x(double value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void ork::vec4d::x(double value) function, expected prototype:\nvoid ork::vec4d::x(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		ork::vec4d* self=(Luna< ork::vec4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::vec4d::x(double). Got : '%s'\n%s",typeid(Luna< ork::vec4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void ork::vec4d::y(double value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void ork::vec4d::y(double value) function, expected prototype:\nvoid ork::vec4d::y(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		ork::vec4d* self=(Luna< ork::vec4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::vec4d::y(double). Got : '%s'\n%s",typeid(Luna< ork::vec4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}

	// void ork::vec4d::z(double value)
	static int _bind_setZ(lua_State *L) {
		if (!_lg_typecheck_setZ(L)) {
			luaL_error(L, "luna typecheck failed in void ork::vec4d::z(double value) function, expected prototype:\nvoid ork::vec4d::z(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		ork::vec4d* self=(Luna< ork::vec4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::vec4d::z(double). Got : '%s'\n%s",typeid(Luna< ork::vec4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->z = value;

		return 0;
	}

	// void ork::vec4d::w(double value)
	static int _bind_setW(lua_State *L) {
		if (!_lg_typecheck_setW(L)) {
			luaL_error(L, "luna typecheck failed in void ork::vec4d::w(double value) function, expected prototype:\nvoid ork::vec4d::w(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		ork::vec4d* self=(Luna< ork::vec4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::vec4d::w(double). Got : '%s'\n%s",typeid(Luna< ork::vec4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->w = value;

		return 0;
	}


	// Operator binds:
	// double & ork::vec4d::operator[](const int i)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luaL_error(L, "luna typecheck failed in double & ork::vec4d::operator[](const int i) function, expected prototype:\ndouble & ork::vec4d::operator[](const int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const int i=(const int)lua_tointeger(L,2);

		ork::vec4d* self=(Luna< ork::vec4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double & ork::vec4d::operator[](const int). Got : '%s'\n%s",typeid(Luna< ork::vec4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool ork::vec4d::operator==(const ork::vec4d & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::vec4d::operator==(const ork::vec4d & v) const function, expected prototype:\nbool ork::vec4d::operator==(const ork::vec4d & v) const\nClass arguments details:\narg 1 ID = 81304300\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4d* v_ptr=(Luna< ork::vec4d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4d::operator== function");
		}
		const ork::vec4d & v=*v_ptr;

		ork::vec4d* self=(Luna< ork::vec4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::vec4d::operator==(const ork::vec4d &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::vec4d::operator!=(const ork::vec4d & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::vec4d::operator!=(const ork::vec4d & v) const function, expected prototype:\nbool ork::vec4d::operator!=(const ork::vec4d & v) const\nClass arguments details:\narg 1 ID = 81304300\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4d* v_ptr=(Luna< ork::vec4d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4d::operator!= function");
		}
		const ork::vec4d & v=*v_ptr;

		ork::vec4d* self=(Luna< ork::vec4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::vec4d::operator!=(const ork::vec4d &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::vec4d ork::vec4d::operator+(const ork::vec4d & v) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4d ork::vec4d::operator+(const ork::vec4d & v) const function, expected prototype:\nork::vec4d ork::vec4d::operator+(const ork::vec4d & v) const\nClass arguments details:\narg 1 ID = 81304300\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4d* v_ptr=(Luna< ork::vec4d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4d::operator+ function");
		}
		const ork::vec4d & v=*v_ptr;

		ork::vec4d* self=(Luna< ork::vec4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4d ork::vec4d::operator+(const ork::vec4d &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4d stack_lret = self->operator+(v);
		ork::vec4d* lret = new ork::vec4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4d >::push(L,lret,true);

		return 1;
	}

	// ork::vec4d ork::vec4d::operator-(const ork::vec4d & v) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4d ork::vec4d::operator-(const ork::vec4d & v) const function, expected prototype:\nork::vec4d ork::vec4d::operator-(const ork::vec4d & v) const\nClass arguments details:\narg 1 ID = 81304300\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4d* v_ptr=(Luna< ork::vec4d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4d::operator- function");
		}
		const ork::vec4d & v=*v_ptr;

		ork::vec4d* self=(Luna< ork::vec4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4d ork::vec4d::operator-(const ork::vec4d &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4d stack_lret = self->operator-(v);
		ork::vec4d* lret = new ork::vec4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4d >::push(L,lret,true);

		return 1;
	}

	// ork::vec4d ork::vec4d::operator*(const ork::vec4d & v) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4d ork::vec4d::operator*(const ork::vec4d & v) const function, expected prototype:\nork::vec4d ork::vec4d::operator*(const ork::vec4d & v) const\nClass arguments details:\narg 1 ID = 81304300\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4d* v_ptr=(Luna< ork::vec4d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4d::operator* function");
		}
		const ork::vec4d & v=*v_ptr;

		ork::vec4d* self=(Luna< ork::vec4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4d ork::vec4d::operator*(const ork::vec4d &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4d stack_lret = self->operator*(v);
		ork::vec4d* lret = new ork::vec4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4d >::push(L,lret,true);

		return 1;
	}

	// ork::vec4d ork::vec4d::operator*(const double scalar) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4d ork::vec4d::operator*(const double scalar) const function, expected prototype:\nork::vec4d ork::vec4d::operator*(const double scalar) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const double scalar=(const double)lua_tonumber(L,2);

		ork::vec4d* self=(Luna< ork::vec4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4d ork::vec4d::operator*(const double) const. Got : '%s'\n%s",typeid(Luna< ork::vec4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4d stack_lret = self->operator*(scalar);
		ork::vec4d* lret = new ork::vec4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::vec4d::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const ork::vec4d &)\n  operator*(const double)\n");
		return 0;
	}

	// ork::vec4d ork::vec4d::operator/(const ork::vec4d & v) const
	static int _bind___div_overload_1(lua_State *L) {
		if (!_lg_typecheck___div_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4d ork::vec4d::operator/(const ork::vec4d & v) const function, expected prototype:\nork::vec4d ork::vec4d::operator/(const ork::vec4d & v) const\nClass arguments details:\narg 1 ID = 81304300\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4d* v_ptr=(Luna< ork::vec4d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4d::operator/ function");
		}
		const ork::vec4d & v=*v_ptr;

		ork::vec4d* self=(Luna< ork::vec4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4d ork::vec4d::operator/(const ork::vec4d &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4d stack_lret = self->operator/(v);
		ork::vec4d* lret = new ork::vec4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4d >::push(L,lret,true);

		return 1;
	}

	// ork::vec4d ork::vec4d::operator/(const double scalar) const
	static int _bind___div_overload_2(lua_State *L) {
		if (!_lg_typecheck___div_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4d ork::vec4d::operator/(const double scalar) const function, expected prototype:\nork::vec4d ork::vec4d::operator/(const double scalar) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const double scalar=(const double)lua_tonumber(L,2);

		ork::vec4d* self=(Luna< ork::vec4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4d ork::vec4d::operator/(const double) const. Got : '%s'\n%s",typeid(Luna< ork::vec4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4d stack_lret = self->operator/(scalar);
		ork::vec4d* lret = new ork::vec4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::vec4d::operator/
	static int _bind___div(lua_State *L) {
		if (_lg_typecheck___div_overload_1(L)) return _bind___div_overload_1(L);
		if (_lg_typecheck___div_overload_2(L)) return _bind___div_overload_2(L);

		luaL_error(L, "error in function operator/, cannot match any of the overloads for function operator/:\n  operator/(const ork::vec4d &)\n  operator/(const double)\n");
		return 0;
	}

	// ork::vec4d ork::vec4d::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4d ork::vec4d::operator-() const function, expected prototype:\nork::vec4d ork::vec4d::operator-() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4d* self=(Luna< ork::vec4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4d ork::vec4d::operator-() const. Got : '%s'\n%s",typeid(Luna< ork::vec4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4d stack_lret = self->operator-();
		ork::vec4d* lret = new ork::vec4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4d >::push(L,lret,true);

		return 1;
	}

	// bool ork::vec4d::operator<(const ork::vec4d & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::vec4d::operator<(const ork::vec4d & v) const function, expected prototype:\nbool ork::vec4d::operator<(const ork::vec4d & v) const\nClass arguments details:\narg 1 ID = 81304300\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4d* v_ptr=(Luna< ork::vec4d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4d::operator< function");
		}
		const ork::vec4d & v=*v_ptr;

		ork::vec4d* self=(Luna< ork::vec4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::vec4d::operator<(const ork::vec4d &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

ork::vec4d* LunaTraits< ork::vec4d >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_vec4d::_bind_ctor(L);
}

void LunaTraits< ork::vec4d >::_bind_dtor(ork::vec4d* obj) {
	delete obj;
}

const char LunaTraits< ork::vec4d >::className[] = "vec4d";
const char LunaTraits< ork::vec4d >::fullName[] = "ork::vec4d";
const char LunaTraits< ork::vec4d >::moduleName[] = "ork";
const char* LunaTraits< ork::vec4d >::parents[] = {0};
const int LunaTraits< ork::vec4d >::hash = 81304300;
const int LunaTraits< ork::vec4d >::uniqueIDs[] = {81304300,0};

luna_RegType LunaTraits< ork::vec4d >::methods[] = {
	{"xyzw", &luna_wrapper_ork_vec4d::_bind_xyzw},
	{"xyz", &luna_wrapper_ork_vec4d::_bind_xyz},
	{"xy", &luna_wrapper_ork_vec4d::_bind_xy},
	{"getX", &luna_wrapper_ork_vec4d::_bind_getX},
	{"getY", &luna_wrapper_ork_vec4d::_bind_getY},
	{"getZ", &luna_wrapper_ork_vec4d::_bind_getZ},
	{"getW", &luna_wrapper_ork_vec4d::_bind_getW},
	{"setX", &luna_wrapper_ork_vec4d::_bind_setX},
	{"setY", &luna_wrapper_ork_vec4d::_bind_setY},
	{"setZ", &luna_wrapper_ork_vec4d::_bind_setZ},
	{"setW", &luna_wrapper_ork_vec4d::_bind_setW},
	{"op_index", &luna_wrapper_ork_vec4d::_bind_op_index},
	{"__eq", &luna_wrapper_ork_vec4d::_bind___eq},
	{"op_neq", &luna_wrapper_ork_vec4d::_bind_op_neq},
	{"__add", &luna_wrapper_ork_vec4d::_bind___add},
	{"__sub", &luna_wrapper_ork_vec4d::_bind___sub},
	{"__mul", &luna_wrapper_ork_vec4d::_bind___mul},
	{"__div", &luna_wrapper_ork_vec4d::_bind___div},
	{"__unm", &luna_wrapper_ork_vec4d::_bind___unm},
	{"__lt", &luna_wrapper_ork_vec4d::_bind___lt},
	{"dynCast", &luna_wrapper_ork_vec4d::_bind_dynCast},
	{"fromVoid", &luna_wrapper_ork_vec4d::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_vec4d::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::vec4d >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::vec4d >::enumValues[] = {
	{0,0}
};


