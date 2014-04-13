#include <plug_common.h>

class luna_wrapper_ork_vec4f {
public:
	typedef Luna< ork::vec4f > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec4f* self= (ork::vec4f*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::vec4f >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304302) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::vec4f >::check(L,1));
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

		ork::vec4f* self=(Luna< ork::vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::vec4f");
		
		return luna_dynamicCast(L,converters,"ork::vec4f",name);
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

		if( !Luna<void>::has_uniqueid(L,1,81304302) ) return false;
		if( (!(Luna< ork::vec4f >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304271) ) return false;
		if( (!(Luna< ork::vec3f >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304271) ) return false;
		if( (!(Luna< ork::vec3f >::check(L,1))) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,81304302) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304302) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304302) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304302) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304302) ) return false;
		if( (!(Luna< ork::vec4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304302) ) return false;
		if( (!(Luna< ork::vec4f >::check(L,2))) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,81304302) ) return false;
		return true;
	}


	// Constructor binds:
	// ork::vec4f::vec4f()
	static ork::vec4f* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f::vec4f() function, expected prototype:\nork::vec4f::vec4f()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::vec4f();
	}

	// ork::vec4f::vec4f(float xi, float yi, float zi, float wi)
	static ork::vec4f* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f::vec4f(float xi, float yi, float zi, float wi) function, expected prototype:\nork::vec4f::vec4f(float xi, float yi, float zi, float wi)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float xi=(float)lua_tonumber(L,1);
		float yi=(float)lua_tonumber(L,2);
		float zi=(float)lua_tonumber(L,3);
		float wi=(float)lua_tonumber(L,4);

		return new ork::vec4f(xi, yi, zi, wi);
	}

	// ork::vec4f::vec4f(const ork::vec4f & v)
	static ork::vec4f* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f::vec4f(const ork::vec4f & v) function, expected prototype:\nork::vec4f::vec4f(const ork::vec4f & v)\nClass arguments details:\narg 1 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4f* v_ptr=(Luna< ork::vec4f >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4f::vec4f function");
		}
		const ork::vec4f & v=*v_ptr;

		return new ork::vec4f(v);
	}

	// ork::vec4f::vec4f(const ork::vec3f & v)
	static ork::vec4f* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f::vec4f(const ork::vec3f & v) function, expected prototype:\nork::vec4f::vec4f(const ork::vec3f & v)\nClass arguments details:\narg 1 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3f* v_ptr=(Luna< ork::vec3f >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4f::vec4f function");
		}
		const ork::vec3f & v=*v_ptr;

		return new ork::vec4f(v);
	}

	// ork::vec4f::vec4f(const ork::vec3f & v, float wi)
	static ork::vec4f* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f::vec4f(const ork::vec3f & v, float wi) function, expected prototype:\nork::vec4f::vec4f(const ork::vec3f & v, float wi)\nClass arguments details:\narg 1 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3f* v_ptr=(Luna< ork::vec3f >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4f::vec4f function");
		}
		const ork::vec3f & v=*v_ptr;
		float wi=(float)lua_tonumber(L,2);

		return new ork::vec4f(v, wi);
	}

	// Overload binder for ork::vec4f::vec4f
	static ork::vec4f* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);

		luaL_error(L, "error in function vec4f, cannot match any of the overloads for function vec4f:\n  vec4f()\n  vec4f(float, float, float, float)\n  vec4f(const ork::vec4f &)\n  vec4f(const ork::vec3f &)\n  vec4f(const ork::vec3f &, float)\n");
		return NULL;
	}


	// Function binds:
	// ork::vec3f ork::vec4f::xyzw() const
	static int _bind_xyzw(lua_State *L) {
		if (!_lg_typecheck_xyzw(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3f ork::vec4f::xyzw() const function, expected prototype:\nork::vec3f ork::vec4f::xyzw() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4f* self=(Luna< ork::vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3f ork::vec4f::xyzw() const. Got : '%s'\n%s",typeid(Luna< ork::vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3f stack_lret = self->xyzw();
		ork::vec3f* lret = new ork::vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3f >::push(L,lret,true);

		return 1;
	}

	// ork::vec3f ork::vec4f::xyz() const
	static int _bind_xyz(lua_State *L) {
		if (!_lg_typecheck_xyz(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3f ork::vec4f::xyz() const function, expected prototype:\nork::vec3f ork::vec4f::xyz() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4f* self=(Luna< ork::vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3f ork::vec4f::xyz() const. Got : '%s'\n%s",typeid(Luna< ork::vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3f stack_lret = self->xyz();
		ork::vec3f* lret = new ork::vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3f >::push(L,lret,true);

		return 1;
	}

	// ork::vec2f ork::vec4f::xy() const
	static int _bind_xy(lua_State *L) {
		if (!_lg_typecheck_xy(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2f ork::vec4f::xy() const function, expected prototype:\nork::vec2f ork::vec4f::xy() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4f* self=(Luna< ork::vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2f ork::vec4f::xy() const. Got : '%s'\n%s",typeid(Luna< ork::vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2f stack_lret = self->xy();
		ork::vec2f* lret = new ork::vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2f >::push(L,lret,true);

		return 1;
	}

	// float ork::vec4f::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in float ork::vec4f::x() function, expected prototype:\nfloat ork::vec4f::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4f* self=(Luna< ork::vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::vec4f::x(). Got : '%s'\n%s",typeid(Luna< ork::vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::vec4f::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in float ork::vec4f::y() function, expected prototype:\nfloat ork::vec4f::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4f* self=(Luna< ork::vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::vec4f::y(). Got : '%s'\n%s",typeid(Luna< ork::vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::vec4f::z()
	static int _bind_getZ(lua_State *L) {
		if (!_lg_typecheck_getZ(L)) {
			luaL_error(L, "luna typecheck failed in float ork::vec4f::z() function, expected prototype:\nfloat ork::vec4f::z()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4f* self=(Luna< ork::vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::vec4f::z(). Got : '%s'\n%s",typeid(Luna< ork::vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->z;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::vec4f::w()
	static int _bind_getW(lua_State *L) {
		if (!_lg_typecheck_getW(L)) {
			luaL_error(L, "luna typecheck failed in float ork::vec4f::w() function, expected prototype:\nfloat ork::vec4f::w()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4f* self=(Luna< ork::vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::vec4f::w(). Got : '%s'\n%s",typeid(Luna< ork::vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->w;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::vec4f::x(float value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void ork::vec4f::x(float value) function, expected prototype:\nvoid ork::vec4f::x(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		ork::vec4f* self=(Luna< ork::vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::vec4f::x(float). Got : '%s'\n%s",typeid(Luna< ork::vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void ork::vec4f::y(float value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void ork::vec4f::y(float value) function, expected prototype:\nvoid ork::vec4f::y(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		ork::vec4f* self=(Luna< ork::vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::vec4f::y(float). Got : '%s'\n%s",typeid(Luna< ork::vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}

	// void ork::vec4f::z(float value)
	static int _bind_setZ(lua_State *L) {
		if (!_lg_typecheck_setZ(L)) {
			luaL_error(L, "luna typecheck failed in void ork::vec4f::z(float value) function, expected prototype:\nvoid ork::vec4f::z(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		ork::vec4f* self=(Luna< ork::vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::vec4f::z(float). Got : '%s'\n%s",typeid(Luna< ork::vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->z = value;

		return 0;
	}

	// void ork::vec4f::w(float value)
	static int _bind_setW(lua_State *L) {
		if (!_lg_typecheck_setW(L)) {
			luaL_error(L, "luna typecheck failed in void ork::vec4f::w(float value) function, expected prototype:\nvoid ork::vec4f::w(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		ork::vec4f* self=(Luna< ork::vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::vec4f::w(float). Got : '%s'\n%s",typeid(Luna< ork::vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->w = value;

		return 0;
	}


	// Operator binds:
	// float & ork::vec4f::operator[](const int i)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luaL_error(L, "luna typecheck failed in float & ork::vec4f::operator[](const int i) function, expected prototype:\nfloat & ork::vec4f::operator[](const int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const int i=(const int)lua_tointeger(L,2);

		ork::vec4f* self=(Luna< ork::vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float & ork::vec4f::operator[](const int). Got : '%s'\n%s",typeid(Luna< ork::vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool ork::vec4f::operator==(const ork::vec4f & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::vec4f::operator==(const ork::vec4f & v) const function, expected prototype:\nbool ork::vec4f::operator==(const ork::vec4f & v) const\nClass arguments details:\narg 1 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4f* v_ptr=(Luna< ork::vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4f::operator== function");
		}
		const ork::vec4f & v=*v_ptr;

		ork::vec4f* self=(Luna< ork::vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::vec4f::operator==(const ork::vec4f &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::vec4f::operator!=(const ork::vec4f & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::vec4f::operator!=(const ork::vec4f & v) const function, expected prototype:\nbool ork::vec4f::operator!=(const ork::vec4f & v) const\nClass arguments details:\narg 1 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4f* v_ptr=(Luna< ork::vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4f::operator!= function");
		}
		const ork::vec4f & v=*v_ptr;

		ork::vec4f* self=(Luna< ork::vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::vec4f::operator!=(const ork::vec4f &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::vec4f ork::vec4f::operator+(const ork::vec4f & v) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f ork::vec4f::operator+(const ork::vec4f & v) const function, expected prototype:\nork::vec4f ork::vec4f::operator+(const ork::vec4f & v) const\nClass arguments details:\narg 1 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4f* v_ptr=(Luna< ork::vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4f::operator+ function");
		}
		const ork::vec4f & v=*v_ptr;

		ork::vec4f* self=(Luna< ork::vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4f ork::vec4f::operator+(const ork::vec4f &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4f stack_lret = self->operator+(v);
		ork::vec4f* lret = new ork::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4f >::push(L,lret,true);

		return 1;
	}

	// ork::vec4f ork::vec4f::operator-(const ork::vec4f & v) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f ork::vec4f::operator-(const ork::vec4f & v) const function, expected prototype:\nork::vec4f ork::vec4f::operator-(const ork::vec4f & v) const\nClass arguments details:\narg 1 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4f* v_ptr=(Luna< ork::vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4f::operator- function");
		}
		const ork::vec4f & v=*v_ptr;

		ork::vec4f* self=(Luna< ork::vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4f ork::vec4f::operator-(const ork::vec4f &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4f stack_lret = self->operator-(v);
		ork::vec4f* lret = new ork::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4f >::push(L,lret,true);

		return 1;
	}

	// ork::vec4f ork::vec4f::operator*(const ork::vec4f & v) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f ork::vec4f::operator*(const ork::vec4f & v) const function, expected prototype:\nork::vec4f ork::vec4f::operator*(const ork::vec4f & v) const\nClass arguments details:\narg 1 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4f* v_ptr=(Luna< ork::vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4f::operator* function");
		}
		const ork::vec4f & v=*v_ptr;

		ork::vec4f* self=(Luna< ork::vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4f ork::vec4f::operator*(const ork::vec4f &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4f stack_lret = self->operator*(v);
		ork::vec4f* lret = new ork::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4f >::push(L,lret,true);

		return 1;
	}

	// ork::vec4f ork::vec4f::operator*(const float scalar) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f ork::vec4f::operator*(const float scalar) const function, expected prototype:\nork::vec4f ork::vec4f::operator*(const float scalar) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const float scalar=(const float)lua_tonumber(L,2);

		ork::vec4f* self=(Luna< ork::vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4f ork::vec4f::operator*(const float) const. Got : '%s'\n%s",typeid(Luna< ork::vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4f stack_lret = self->operator*(scalar);
		ork::vec4f* lret = new ork::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::vec4f::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const ork::vec4f &)\n  operator*(const float)\n");
		return 0;
	}

	// ork::vec4f ork::vec4f::operator/(const ork::vec4f & v) const
	static int _bind___div_overload_1(lua_State *L) {
		if (!_lg_typecheck___div_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f ork::vec4f::operator/(const ork::vec4f & v) const function, expected prototype:\nork::vec4f ork::vec4f::operator/(const ork::vec4f & v) const\nClass arguments details:\narg 1 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4f* v_ptr=(Luna< ork::vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4f::operator/ function");
		}
		const ork::vec4f & v=*v_ptr;

		ork::vec4f* self=(Luna< ork::vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4f ork::vec4f::operator/(const ork::vec4f &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4f stack_lret = self->operator/(v);
		ork::vec4f* lret = new ork::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4f >::push(L,lret,true);

		return 1;
	}

	// ork::vec4f ork::vec4f::operator/(const float scalar) const
	static int _bind___div_overload_2(lua_State *L) {
		if (!_lg_typecheck___div_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f ork::vec4f::operator/(const float scalar) const function, expected prototype:\nork::vec4f ork::vec4f::operator/(const float scalar) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const float scalar=(const float)lua_tonumber(L,2);

		ork::vec4f* self=(Luna< ork::vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4f ork::vec4f::operator/(const float) const. Got : '%s'\n%s",typeid(Luna< ork::vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4f stack_lret = self->operator/(scalar);
		ork::vec4f* lret = new ork::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::vec4f::operator/
	static int _bind___div(lua_State *L) {
		if (_lg_typecheck___div_overload_1(L)) return _bind___div_overload_1(L);
		if (_lg_typecheck___div_overload_2(L)) return _bind___div_overload_2(L);

		luaL_error(L, "error in function operator/, cannot match any of the overloads for function operator/:\n  operator/(const ork::vec4f &)\n  operator/(const float)\n");
		return 0;
	}

	// ork::vec4f ork::vec4f::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f ork::vec4f::operator-() const function, expected prototype:\nork::vec4f ork::vec4f::operator-() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4f* self=(Luna< ork::vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4f ork::vec4f::operator-() const. Got : '%s'\n%s",typeid(Luna< ork::vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4f stack_lret = self->operator-();
		ork::vec4f* lret = new ork::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4f >::push(L,lret,true);

		return 1;
	}

	// bool ork::vec4f::operator<(const ork::vec4f & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::vec4f::operator<(const ork::vec4f & v) const function, expected prototype:\nbool ork::vec4f::operator<(const ork::vec4f & v) const\nClass arguments details:\narg 1 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4f* v_ptr=(Luna< ork::vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4f::operator< function");
		}
		const ork::vec4f & v=*v_ptr;

		ork::vec4f* self=(Luna< ork::vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::vec4f::operator<(const ork::vec4f &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

ork::vec4f* LunaTraits< ork::vec4f >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_vec4f::_bind_ctor(L);
}

void LunaTraits< ork::vec4f >::_bind_dtor(ork::vec4f* obj) {
	delete obj;
}

const char LunaTraits< ork::vec4f >::className[] = "vec4f";
const char LunaTraits< ork::vec4f >::fullName[] = "ork::vec4f";
const char LunaTraits< ork::vec4f >::moduleName[] = "ork";
const char* LunaTraits< ork::vec4f >::parents[] = {0};
const int LunaTraits< ork::vec4f >::hash = 81304302;
const int LunaTraits< ork::vec4f >::uniqueIDs[] = {81304302,0};

luna_RegType LunaTraits< ork::vec4f >::methods[] = {
	{"xyzw", &luna_wrapper_ork_vec4f::_bind_xyzw},
	{"xyz", &luna_wrapper_ork_vec4f::_bind_xyz},
	{"xy", &luna_wrapper_ork_vec4f::_bind_xy},
	{"getX", &luna_wrapper_ork_vec4f::_bind_getX},
	{"getY", &luna_wrapper_ork_vec4f::_bind_getY},
	{"getZ", &luna_wrapper_ork_vec4f::_bind_getZ},
	{"getW", &luna_wrapper_ork_vec4f::_bind_getW},
	{"setX", &luna_wrapper_ork_vec4f::_bind_setX},
	{"setY", &luna_wrapper_ork_vec4f::_bind_setY},
	{"setZ", &luna_wrapper_ork_vec4f::_bind_setZ},
	{"setW", &luna_wrapper_ork_vec4f::_bind_setW},
	{"op_index", &luna_wrapper_ork_vec4f::_bind_op_index},
	{"__eq", &luna_wrapper_ork_vec4f::_bind___eq},
	{"op_neq", &luna_wrapper_ork_vec4f::_bind_op_neq},
	{"__add", &luna_wrapper_ork_vec4f::_bind___add},
	{"__sub", &luna_wrapper_ork_vec4f::_bind___sub},
	{"__mul", &luna_wrapper_ork_vec4f::_bind___mul},
	{"__div", &luna_wrapper_ork_vec4f::_bind___div},
	{"__unm", &luna_wrapper_ork_vec4f::_bind___unm},
	{"__lt", &luna_wrapper_ork_vec4f::_bind___lt},
	{"dynCast", &luna_wrapper_ork_vec4f::_bind_dynCast},
	{"fromVoid", &luna_wrapper_ork_vec4f::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_vec4f::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::vec4f >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::vec4f >::enumValues[] = {
	{0,0}
};


