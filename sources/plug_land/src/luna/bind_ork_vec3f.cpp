#include <plug_common.h>

class luna_wrapper_ork_vec3f {
public:
	typedef Luna< ork::vec3f > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec3f* self= (ork::vec3f*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::vec3f >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304271) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::vec3f >::check(L,1));
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

		ork::vec3f* self=(Luna< ork::vec3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::vec3f");
		
		return luna_dynamicCast(L,converters,"ork::vec3f",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304271) ) return false;
		if( (!(Luna< ork::vec3f >::check(L,1))) ) return false;
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

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
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
	// (found 11 valid operators)
	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304271) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304271) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304271) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304271) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304271) ) return false;
		if( (!(Luna< ork::vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304271) ) return false;
		if( (!(Luna< ork::vec3f >::check(L,2))) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,81304271) ) return false;
		return true;
	}


	// Constructor binds:
	// ork::vec3f::vec3f()
	static ork::vec3f* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3f::vec3f() function, expected prototype:\nork::vec3f::vec3f()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::vec3f();
	}

	// ork::vec3f::vec3f(float xi, float yi, float zi)
	static ork::vec3f* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3f::vec3f(float xi, float yi, float zi) function, expected prototype:\nork::vec3f::vec3f(float xi, float yi, float zi)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float xi=(float)lua_tonumber(L,1);
		float yi=(float)lua_tonumber(L,2);
		float zi=(float)lua_tonumber(L,3);

		return new ork::vec3f(xi, yi, zi);
	}

	// ork::vec3f::vec3f(const ork::vec3f & v)
	static ork::vec3f* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3f::vec3f(const ork::vec3f & v) function, expected prototype:\nork::vec3f::vec3f(const ork::vec3f & v)\nClass arguments details:\narg 1 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3f* v_ptr=(Luna< ork::vec3f >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec3f::vec3f function");
		}
		const ork::vec3f & v=*v_ptr;

		return new ork::vec3f(v);
	}

	// Overload binder for ork::vec3f::vec3f
	static ork::vec3f* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function vec3f, cannot match any of the overloads for function vec3f:\n  vec3f()\n  vec3f(float, float, float)\n  vec3f(const ork::vec3f &)\n");
		return NULL;
	}


	// Function binds:
	// float ork::vec3f::length() const
	static int _bind_length(lua_State *L) {
		if (!_lg_typecheck_length(L)) {
			luaL_error(L, "luna typecheck failed in float ork::vec3f::length() const function, expected prototype:\nfloat ork::vec3f::length() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec3f* self=(Luna< ork::vec3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::vec3f::length() const. Got : '%s'\n%s",typeid(Luna< ork::vec3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::vec3f::squaredLength() const
	static int _bind_squaredLength(lua_State *L) {
		if (!_lg_typecheck_squaredLength(L)) {
			luaL_error(L, "luna typecheck failed in float ork::vec3f::squaredLength() const function, expected prototype:\nfloat ork::vec3f::squaredLength() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec3f* self=(Luna< ork::vec3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::vec3f::squaredLength() const. Got : '%s'\n%s",typeid(Luna< ork::vec3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->squaredLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::vec3f ork::vec3f::normalize() const
	static int _bind_normalize_overload_1(lua_State *L) {
		if (!_lg_typecheck_normalize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3f ork::vec3f::normalize() const function, expected prototype:\nork::vec3f ork::vec3f::normalize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec3f* self=(Luna< ork::vec3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3f ork::vec3f::normalize() const. Got : '%s'\n%s",typeid(Luna< ork::vec3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3f stack_lret = self->normalize();
		ork::vec3f* lret = new ork::vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3f >::push(L,lret,true);

		return 1;
	}

	// ork::vec3f ork::vec3f::normalize(float l) const
	static int _bind_normalize_overload_2(lua_State *L) {
		if (!_lg_typecheck_normalize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3f ork::vec3f::normalize(float l) const function, expected prototype:\nork::vec3f ork::vec3f::normalize(float l) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float l=(float)lua_tonumber(L,2);

		ork::vec3f* self=(Luna< ork::vec3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3f ork::vec3f::normalize(float) const. Got : '%s'\n%s",typeid(Luna< ork::vec3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3f stack_lret = self->normalize(l);
		ork::vec3f* lret = new ork::vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::vec3f::normalize
	static int _bind_normalize(lua_State *L) {
		if (_lg_typecheck_normalize_overload_1(L)) return _bind_normalize_overload_1(L);
		if (_lg_typecheck_normalize_overload_2(L)) return _bind_normalize_overload_2(L);

		luaL_error(L, "error in function normalize, cannot match any of the overloads for function normalize:\n  normalize()\n  normalize(float)\n");
		return 0;
	}

	// ork::vec2f ork::vec3f::xy() const
	static int _bind_xy(lua_State *L) {
		if (!_lg_typecheck_xy(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2f ork::vec3f::xy() const function, expected prototype:\nork::vec2f ork::vec3f::xy() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec3f* self=(Luna< ork::vec3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2f ork::vec3f::xy() const. Got : '%s'\n%s",typeid(Luna< ork::vec3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2f stack_lret = self->xy();
		ork::vec2f* lret = new ork::vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2f >::push(L,lret,true);

		return 1;
	}

	// float ork::vec3f::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in float ork::vec3f::x() function, expected prototype:\nfloat ork::vec3f::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec3f* self=(Luna< ork::vec3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::vec3f::x(). Got : '%s'\n%s",typeid(Luna< ork::vec3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::vec3f::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in float ork::vec3f::y() function, expected prototype:\nfloat ork::vec3f::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec3f* self=(Luna< ork::vec3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::vec3f::y(). Got : '%s'\n%s",typeid(Luna< ork::vec3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::vec3f::z()
	static int _bind_getZ(lua_State *L) {
		if (!_lg_typecheck_getZ(L)) {
			luaL_error(L, "luna typecheck failed in float ork::vec3f::z() function, expected prototype:\nfloat ork::vec3f::z()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec3f* self=(Luna< ork::vec3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::vec3f::z(). Got : '%s'\n%s",typeid(Luna< ork::vec3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->z;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::vec3f::x(float value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void ork::vec3f::x(float value) function, expected prototype:\nvoid ork::vec3f::x(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		ork::vec3f* self=(Luna< ork::vec3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::vec3f::x(float). Got : '%s'\n%s",typeid(Luna< ork::vec3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void ork::vec3f::y(float value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void ork::vec3f::y(float value) function, expected prototype:\nvoid ork::vec3f::y(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		ork::vec3f* self=(Luna< ork::vec3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::vec3f::y(float). Got : '%s'\n%s",typeid(Luna< ork::vec3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}

	// void ork::vec3f::z(float value)
	static int _bind_setZ(lua_State *L) {
		if (!_lg_typecheck_setZ(L)) {
			luaL_error(L, "luna typecheck failed in void ork::vec3f::z(float value) function, expected prototype:\nvoid ork::vec3f::z(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		ork::vec3f* self=(Luna< ork::vec3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::vec3f::z(float). Got : '%s'\n%s",typeid(Luna< ork::vec3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->z = value;

		return 0;
	}


	// Operator binds:
	// float & ork::vec3f::operator[](const int i)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luaL_error(L, "luna typecheck failed in float & ork::vec3f::operator[](const int i) function, expected prototype:\nfloat & ork::vec3f::operator[](const int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const int i=(const int)lua_tointeger(L,2);

		ork::vec3f* self=(Luna< ork::vec3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float & ork::vec3f::operator[](const int). Got : '%s'\n%s",typeid(Luna< ork::vec3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool ork::vec3f::operator==(const ork::vec3f & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::vec3f::operator==(const ork::vec3f & v) const function, expected prototype:\nbool ork::vec3f::operator==(const ork::vec3f & v) const\nClass arguments details:\narg 1 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3f* v_ptr=(Luna< ork::vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec3f::operator== function");
		}
		const ork::vec3f & v=*v_ptr;

		ork::vec3f* self=(Luna< ork::vec3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::vec3f::operator==(const ork::vec3f &) const. Got : '%s'\n%s",typeid(Luna< ork::vec3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::vec3f::operator!=(const ork::vec3f & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::vec3f::operator!=(const ork::vec3f & v) const function, expected prototype:\nbool ork::vec3f::operator!=(const ork::vec3f & v) const\nClass arguments details:\narg 1 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3f* v_ptr=(Luna< ork::vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec3f::operator!= function");
		}
		const ork::vec3f & v=*v_ptr;

		ork::vec3f* self=(Luna< ork::vec3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::vec3f::operator!=(const ork::vec3f &) const. Got : '%s'\n%s",typeid(Luna< ork::vec3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::vec3f ork::vec3f::operator+(const ork::vec3f & v) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3f ork::vec3f::operator+(const ork::vec3f & v) const function, expected prototype:\nork::vec3f ork::vec3f::operator+(const ork::vec3f & v) const\nClass arguments details:\narg 1 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3f* v_ptr=(Luna< ork::vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec3f::operator+ function");
		}
		const ork::vec3f & v=*v_ptr;

		ork::vec3f* self=(Luna< ork::vec3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3f ork::vec3f::operator+(const ork::vec3f &) const. Got : '%s'\n%s",typeid(Luna< ork::vec3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3f stack_lret = self->operator+(v);
		ork::vec3f* lret = new ork::vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3f >::push(L,lret,true);

		return 1;
	}

	// ork::vec3f ork::vec3f::operator-(const ork::vec3f & v) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3f ork::vec3f::operator-(const ork::vec3f & v) const function, expected prototype:\nork::vec3f ork::vec3f::operator-(const ork::vec3f & v) const\nClass arguments details:\narg 1 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3f* v_ptr=(Luna< ork::vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec3f::operator- function");
		}
		const ork::vec3f & v=*v_ptr;

		ork::vec3f* self=(Luna< ork::vec3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3f ork::vec3f::operator-(const ork::vec3f &) const. Got : '%s'\n%s",typeid(Luna< ork::vec3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3f stack_lret = self->operator-(v);
		ork::vec3f* lret = new ork::vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3f >::push(L,lret,true);

		return 1;
	}

	// ork::vec3f ork::vec3f::operator*(const ork::vec3f & v) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3f ork::vec3f::operator*(const ork::vec3f & v) const function, expected prototype:\nork::vec3f ork::vec3f::operator*(const ork::vec3f & v) const\nClass arguments details:\narg 1 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3f* v_ptr=(Luna< ork::vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec3f::operator* function");
		}
		const ork::vec3f & v=*v_ptr;

		ork::vec3f* self=(Luna< ork::vec3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3f ork::vec3f::operator*(const ork::vec3f &) const. Got : '%s'\n%s",typeid(Luna< ork::vec3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3f stack_lret = self->operator*(v);
		ork::vec3f* lret = new ork::vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3f >::push(L,lret,true);

		return 1;
	}

	// ork::vec3f ork::vec3f::operator*(const float scalar) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3f ork::vec3f::operator*(const float scalar) const function, expected prototype:\nork::vec3f ork::vec3f::operator*(const float scalar) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const float scalar=(const float)lua_tonumber(L,2);

		ork::vec3f* self=(Luna< ork::vec3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3f ork::vec3f::operator*(const float) const. Got : '%s'\n%s",typeid(Luna< ork::vec3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3f stack_lret = self->operator*(scalar);
		ork::vec3f* lret = new ork::vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::vec3f::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const ork::vec3f &)\n  operator*(const float)\n");
		return 0;
	}

	// ork::vec3f ork::vec3f::operator/(const ork::vec3f & v) const
	static int _bind___div_overload_1(lua_State *L) {
		if (!_lg_typecheck___div_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3f ork::vec3f::operator/(const ork::vec3f & v) const function, expected prototype:\nork::vec3f ork::vec3f::operator/(const ork::vec3f & v) const\nClass arguments details:\narg 1 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3f* v_ptr=(Luna< ork::vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec3f::operator/ function");
		}
		const ork::vec3f & v=*v_ptr;

		ork::vec3f* self=(Luna< ork::vec3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3f ork::vec3f::operator/(const ork::vec3f &) const. Got : '%s'\n%s",typeid(Luna< ork::vec3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3f stack_lret = self->operator/(v);
		ork::vec3f* lret = new ork::vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3f >::push(L,lret,true);

		return 1;
	}

	// ork::vec3f ork::vec3f::operator/(const float scalar) const
	static int _bind___div_overload_2(lua_State *L) {
		if (!_lg_typecheck___div_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3f ork::vec3f::operator/(const float scalar) const function, expected prototype:\nork::vec3f ork::vec3f::operator/(const float scalar) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const float scalar=(const float)lua_tonumber(L,2);

		ork::vec3f* self=(Luna< ork::vec3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3f ork::vec3f::operator/(const float) const. Got : '%s'\n%s",typeid(Luna< ork::vec3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3f stack_lret = self->operator/(scalar);
		ork::vec3f* lret = new ork::vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::vec3f::operator/
	static int _bind___div(lua_State *L) {
		if (_lg_typecheck___div_overload_1(L)) return _bind___div_overload_1(L);
		if (_lg_typecheck___div_overload_2(L)) return _bind___div_overload_2(L);

		luaL_error(L, "error in function operator/, cannot match any of the overloads for function operator/:\n  operator/(const ork::vec3f &)\n  operator/(const float)\n");
		return 0;
	}

	// ork::vec3f ork::vec3f::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3f ork::vec3f::operator-() const function, expected prototype:\nork::vec3f ork::vec3f::operator-() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec3f* self=(Luna< ork::vec3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3f ork::vec3f::operator-() const. Got : '%s'\n%s",typeid(Luna< ork::vec3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3f stack_lret = self->operator-();
		ork::vec3f* lret = new ork::vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3f >::push(L,lret,true);

		return 1;
	}

	// bool ork::vec3f::operator<(const ork::vec3f & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::vec3f::operator<(const ork::vec3f & v) const function, expected prototype:\nbool ork::vec3f::operator<(const ork::vec3f & v) const\nClass arguments details:\narg 1 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3f* v_ptr=(Luna< ork::vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec3f::operator< function");
		}
		const ork::vec3f & v=*v_ptr;

		ork::vec3f* self=(Luna< ork::vec3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::vec3f::operator<(const ork::vec3f &) const. Got : '%s'\n%s",typeid(Luna< ork::vec3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

ork::vec3f* LunaTraits< ork::vec3f >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_vec3f::_bind_ctor(L);
}

void LunaTraits< ork::vec3f >::_bind_dtor(ork::vec3f* obj) {
	delete obj;
}

const char LunaTraits< ork::vec3f >::className[] = "vec3f";
const char LunaTraits< ork::vec3f >::fullName[] = "ork::vec3f";
const char LunaTraits< ork::vec3f >::moduleName[] = "ork";
const char* LunaTraits< ork::vec3f >::parents[] = {0};
const int LunaTraits< ork::vec3f >::hash = 81304271;
const int LunaTraits< ork::vec3f >::uniqueIDs[] = {81304271,0};

luna_RegType LunaTraits< ork::vec3f >::methods[] = {
	{"length", &luna_wrapper_ork_vec3f::_bind_length},
	{"squaredLength", &luna_wrapper_ork_vec3f::_bind_squaredLength},
	{"normalize", &luna_wrapper_ork_vec3f::_bind_normalize},
	{"xy", &luna_wrapper_ork_vec3f::_bind_xy},
	{"getX", &luna_wrapper_ork_vec3f::_bind_getX},
	{"getY", &luna_wrapper_ork_vec3f::_bind_getY},
	{"getZ", &luna_wrapper_ork_vec3f::_bind_getZ},
	{"setX", &luna_wrapper_ork_vec3f::_bind_setX},
	{"setY", &luna_wrapper_ork_vec3f::_bind_setY},
	{"setZ", &luna_wrapper_ork_vec3f::_bind_setZ},
	{"op_index", &luna_wrapper_ork_vec3f::_bind_op_index},
	{"__eq", &luna_wrapper_ork_vec3f::_bind___eq},
	{"op_neq", &luna_wrapper_ork_vec3f::_bind_op_neq},
	{"__add", &luna_wrapper_ork_vec3f::_bind___add},
	{"__sub", &luna_wrapper_ork_vec3f::_bind___sub},
	{"__mul", &luna_wrapper_ork_vec3f::_bind___mul},
	{"__div", &luna_wrapper_ork_vec3f::_bind___div},
	{"__unm", &luna_wrapper_ork_vec3f::_bind___unm},
	{"__lt", &luna_wrapper_ork_vec3f::_bind___lt},
	{"dynCast", &luna_wrapper_ork_vec3f::_bind_dynCast},
	{"fromVoid", &luna_wrapper_ork_vec3f::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_vec3f::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::vec3f >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::vec3f >::enumValues[] = {
	{0,0}
};


