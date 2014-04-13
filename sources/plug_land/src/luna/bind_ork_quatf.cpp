#include <plug_common.h>

class luna_wrapper_ork_quatf {
public:
	typedef Luna< ork::quatf > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,77163415) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::quatf*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::quatf* rhs =(Luna< ork::quatf >::check(L,2));
		ork::quatf* self=(Luna< ork::quatf >::check(L,1));
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

		ork::quatf* self= (ork::quatf*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::quatf >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,77163415) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::quatf >::check(L,1));
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

		ork::quatf* self=(Luna< ork::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::quatf");
		
		return luna_dynamicCast(L,converters,"ork::quatf",name);
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

		if( !Luna<void>::has_uniqueid(L,1,77163415) ) return false;
		if( (!(Luna< ork::quatf >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304271) ) return false;
		if( (!(Luna< ork::vec3f >::check(L,1))) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304271) ) return false;
		if( (!(Luna< ork::vec3f >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,81304271) ) return false;
		if( (!(Luna< ork::vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72889755) ) return false;
		if( (!(Luna< ork::mat3f >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_inverse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_length(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_normalize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_toMat3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_toMat4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngle(lua_State *L) {
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
	// (found 2 valid operators)
	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,77163415) ) return false;
		if( (!(Luna< ork::quatf >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304271) ) return false;
		if( (!(Luna< ork::vec3f >::check(L,2))) ) return false;
		return true;
	}


	// Constructor binds:
	// ork::quatf::quatf()
	static ork::quatf* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::quatf::quatf() function, expected prototype:\nork::quatf::quatf()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::quatf();
	}

	// ork::quatf::quatf(float x, float y, float z, float w)
	static ork::quatf* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::quatf::quatf(float x, float y, float z, float w) function, expected prototype:\nork::quatf::quatf(float x, float y, float z, float w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,1);
		float y=(float)lua_tonumber(L,2);
		float z=(float)lua_tonumber(L,3);
		float w=(float)lua_tonumber(L,4);

		return new ork::quatf(x, y, z, w);
	}

	// ork::quatf::quatf(const ork::quatf & v)
	static ork::quatf* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::quatf::quatf(const ork::quatf & v) function, expected prototype:\nork::quatf::quatf(const ork::quatf & v)\nClass arguments details:\narg 1 ID = 77163415\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::quatf* v_ptr=(Luna< ork::quatf >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::quatf::quatf function");
		}
		const ork::quatf & v=*v_ptr;

		return new ork::quatf(v);
	}

	// ork::quatf::quatf(const ork::vec3f & axis, float angle)
	static ork::quatf* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in ork::quatf::quatf(const ork::vec3f & axis, float angle) function, expected prototype:\nork::quatf::quatf(const ork::vec3f & axis, float angle)\nClass arguments details:\narg 1 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3f* axis_ptr=(Luna< ork::vec3f >::check(L,1));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in ork::quatf::quatf function");
		}
		const ork::vec3f & axis=*axis_ptr;
		float angle=(float)lua_tonumber(L,2);

		return new ork::quatf(axis, angle);
	}

	// ork::quatf::quatf(const ork::vec3f & to, const ork::vec3f & from)
	static ork::quatf* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in ork::quatf::quatf(const ork::vec3f & to, const ork::vec3f & from) function, expected prototype:\nork::quatf::quatf(const ork::vec3f & to, const ork::vec3f & from)\nClass arguments details:\narg 1 ID = 81304271\narg 2 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3f* to_ptr=(Luna< ork::vec3f >::check(L,1));
		if( !to_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg to in ork::quatf::quatf function");
		}
		const ork::vec3f & to=*to_ptr;
		const ork::vec3f* from_ptr=(Luna< ork::vec3f >::check(L,2));
		if( !from_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg from in ork::quatf::quatf function");
		}
		const ork::vec3f & from=*from_ptr;

		return new ork::quatf(to, from);
	}

	// ork::quatf::quatf(const ork::mat3f & m)
	static ork::quatf* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in ork::quatf::quatf(const ork::mat3f & m) function, expected prototype:\nork::quatf::quatf(const ork::mat3f & m)\nClass arguments details:\narg 1 ID = 72889755\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat3f* m_ptr=(Luna< ork::mat3f >::check(L,1));
		if( !m_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m in ork::quatf::quatf function");
		}
		const ork::mat3f & m=*m_ptr;

		return new ork::quatf(m);
	}

	// Overload binder for ork::quatf::quatf
	static ork::quatf* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function quatf, cannot match any of the overloads for function quatf:\n  quatf()\n  quatf(float, float, float, float)\n  quatf(const ork::quatf &)\n  quatf(const ork::vec3f &, float)\n  quatf(const ork::vec3f &, const ork::vec3f &)\n  quatf(const ork::mat3f &)\n");
		return NULL;
	}


	// Function binds:
	// ork::quatf ork::quatf::inverse() const
	static int _bind_inverse(lua_State *L) {
		if (!_lg_typecheck_inverse(L)) {
			luaL_error(L, "luna typecheck failed in ork::quatf ork::quatf::inverse() const function, expected prototype:\nork::quatf ork::quatf::inverse() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::quatf* self=(Luna< ork::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::quatf ork::quatf::inverse() const. Got : '%s'\n%s",typeid(Luna< ork::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::quatf stack_lret = self->inverse();
		ork::quatf* lret = new ork::quatf(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::quatf >::push(L,lret,true);

		return 1;
	}

	// float ork::quatf::length() const
	static int _bind_length(lua_State *L) {
		if (!_lg_typecheck_length(L)) {
			luaL_error(L, "luna typecheck failed in float ork::quatf::length() const function, expected prototype:\nfloat ork::quatf::length() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::quatf* self=(Luna< ork::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::quatf::length() const. Got : '%s'\n%s",typeid(Luna< ork::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::quatf ork::quatf::normalize() const
	static int _bind_normalize(lua_State *L) {
		if (!_lg_typecheck_normalize(L)) {
			luaL_error(L, "luna typecheck failed in ork::quatf ork::quatf::normalize() const function, expected prototype:\nork::quatf ork::quatf::normalize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::quatf* self=(Luna< ork::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::quatf ork::quatf::normalize() const. Got : '%s'\n%s",typeid(Luna< ork::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::quatf stack_lret = self->normalize();
		ork::quatf* lret = new ork::quatf(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::quatf >::push(L,lret,true);

		return 1;
	}

	// ork::mat3f ork::quatf::toMat3() const
	static int _bind_toMat3(lua_State *L) {
		if (!_lg_typecheck_toMat3(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat3f ork::quatf::toMat3() const function, expected prototype:\nork::mat3f ork::quatf::toMat3() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::quatf* self=(Luna< ork::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat3f ork::quatf::toMat3() const. Got : '%s'\n%s",typeid(Luna< ork::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat3f stack_lret = self->toMat3();
		ork::mat3f* lret = new ork::mat3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat3f >::push(L,lret,true);

		return 1;
	}

	// ork::mat4f ork::quatf::toMat4() const
	static int _bind_toMat4(lua_State *L) {
		if (!_lg_typecheck_toMat4(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4f ork::quatf::toMat4() const function, expected prototype:\nork::mat4f ork::quatf::toMat4() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::quatf* self=(Luna< ork::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4f ork::quatf::toMat4() const. Got : '%s'\n%s",typeid(Luna< ork::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4f stack_lret = self->toMat4();
		ork::mat4f* lret = new ork::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4f >::push(L,lret,true);

		return 1;
	}

	// ork::vec3f ork::quatf::getAxis() const
	static int _bind_getAxis(lua_State *L) {
		if (!_lg_typecheck_getAxis(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3f ork::quatf::getAxis() const function, expected prototype:\nork::vec3f ork::quatf::getAxis() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::quatf* self=(Luna< ork::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3f ork::quatf::getAxis() const. Got : '%s'\n%s",typeid(Luna< ork::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3f stack_lret = self->getAxis();
		ork::vec3f* lret = new ork::vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3f >::push(L,lret,true);

		return 1;
	}

	// float ork::quatf::getAngle() const
	static int _bind_getAngle(lua_State *L) {
		if (!_lg_typecheck_getAngle(L)) {
			luaL_error(L, "luna typecheck failed in float ork::quatf::getAngle() const function, expected prototype:\nfloat ork::quatf::getAngle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::quatf* self=(Luna< ork::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::quatf::getAngle() const. Got : '%s'\n%s",typeid(Luna< ork::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getAngle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::quatf::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in float ork::quatf::x() function, expected prototype:\nfloat ork::quatf::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::quatf* self=(Luna< ork::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::quatf::x(). Got : '%s'\n%s",typeid(Luna< ork::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::quatf::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in float ork::quatf::y() function, expected prototype:\nfloat ork::quatf::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::quatf* self=(Luna< ork::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::quatf::y(). Got : '%s'\n%s",typeid(Luna< ork::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::quatf::z()
	static int _bind_getZ(lua_State *L) {
		if (!_lg_typecheck_getZ(L)) {
			luaL_error(L, "luna typecheck failed in float ork::quatf::z() function, expected prototype:\nfloat ork::quatf::z()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::quatf* self=(Luna< ork::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::quatf::z(). Got : '%s'\n%s",typeid(Luna< ork::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->z;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::quatf::w()
	static int _bind_getW(lua_State *L) {
		if (!_lg_typecheck_getW(L)) {
			luaL_error(L, "luna typecheck failed in float ork::quatf::w() function, expected prototype:\nfloat ork::quatf::w()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::quatf* self=(Luna< ork::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::quatf::w(). Got : '%s'\n%s",typeid(Luna< ork::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->w;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::quatf::x(float value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void ork::quatf::x(float value) function, expected prototype:\nvoid ork::quatf::x(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		ork::quatf* self=(Luna< ork::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::quatf::x(float). Got : '%s'\n%s",typeid(Luna< ork::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void ork::quatf::y(float value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void ork::quatf::y(float value) function, expected prototype:\nvoid ork::quatf::y(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		ork::quatf* self=(Luna< ork::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::quatf::y(float). Got : '%s'\n%s",typeid(Luna< ork::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}

	// void ork::quatf::z(float value)
	static int _bind_setZ(lua_State *L) {
		if (!_lg_typecheck_setZ(L)) {
			luaL_error(L, "luna typecheck failed in void ork::quatf::z(float value) function, expected prototype:\nvoid ork::quatf::z(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		ork::quatf* self=(Luna< ork::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::quatf::z(float). Got : '%s'\n%s",typeid(Luna< ork::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->z = value;

		return 0;
	}

	// void ork::quatf::w(float value)
	static int _bind_setW(lua_State *L) {
		if (!_lg_typecheck_setW(L)) {
			luaL_error(L, "luna typecheck failed in void ork::quatf::w(float value) function, expected prototype:\nvoid ork::quatf::w(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		ork::quatf* self=(Luna< ork::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::quatf::w(float). Got : '%s'\n%s",typeid(Luna< ork::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->w = value;

		return 0;
	}


	// Operator binds:
	// ork::quatf ork::quatf::operator*(const ork::quatf & a) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::quatf ork::quatf::operator*(const ork::quatf & a) const function, expected prototype:\nork::quatf ork::quatf::operator*(const ork::quatf & a) const\nClass arguments details:\narg 1 ID = 77163415\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::quatf* a_ptr=(Luna< ork::quatf >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in ork::quatf::operator* function");
		}
		const ork::quatf & a=*a_ptr;

		ork::quatf* self=(Luna< ork::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::quatf ork::quatf::operator*(const ork::quatf &) const. Got : '%s'\n%s",typeid(Luna< ork::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::quatf stack_lret = self->operator*(a);
		ork::quatf* lret = new ork::quatf(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::quatf >::push(L,lret,true);

		return 1;
	}

	// ork::vec3f ork::quatf::operator*(const ork::vec3f & a) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3f ork::quatf::operator*(const ork::vec3f & a) const function, expected prototype:\nork::vec3f ork::quatf::operator*(const ork::vec3f & a) const\nClass arguments details:\narg 1 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3f* a_ptr=(Luna< ork::vec3f >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in ork::quatf::operator* function");
		}
		const ork::vec3f & a=*a_ptr;

		ork::quatf* self=(Luna< ork::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3f ork::quatf::operator*(const ork::vec3f &) const. Got : '%s'\n%s",typeid(Luna< ork::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3f stack_lret = self->operator*(a);
		ork::vec3f* lret = new ork::vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::quatf::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const ork::quatf &)\n  operator*(const ork::vec3f &)\n");
		return 0;
	}


};

ork::quatf* LunaTraits< ork::quatf >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_quatf::_bind_ctor(L);
}

void LunaTraits< ork::quatf >::_bind_dtor(ork::quatf* obj) {
	delete obj;
}

const char LunaTraits< ork::quatf >::className[] = "quatf";
const char LunaTraits< ork::quatf >::fullName[] = "ork::quatf";
const char LunaTraits< ork::quatf >::moduleName[] = "ork";
const char* LunaTraits< ork::quatf >::parents[] = {0};
const int LunaTraits< ork::quatf >::hash = 77163415;
const int LunaTraits< ork::quatf >::uniqueIDs[] = {77163415,0};

luna_RegType LunaTraits< ork::quatf >::methods[] = {
	{"inverse", &luna_wrapper_ork_quatf::_bind_inverse},
	{"length", &luna_wrapper_ork_quatf::_bind_length},
	{"normalize", &luna_wrapper_ork_quatf::_bind_normalize},
	{"toMat3", &luna_wrapper_ork_quatf::_bind_toMat3},
	{"toMat4", &luna_wrapper_ork_quatf::_bind_toMat4},
	{"getAxis", &luna_wrapper_ork_quatf::_bind_getAxis},
	{"getAngle", &luna_wrapper_ork_quatf::_bind_getAngle},
	{"getX", &luna_wrapper_ork_quatf::_bind_getX},
	{"getY", &luna_wrapper_ork_quatf::_bind_getY},
	{"getZ", &luna_wrapper_ork_quatf::_bind_getZ},
	{"getW", &luna_wrapper_ork_quatf::_bind_getW},
	{"setX", &luna_wrapper_ork_quatf::_bind_setX},
	{"setY", &luna_wrapper_ork_quatf::_bind_setY},
	{"setZ", &luna_wrapper_ork_quatf::_bind_setZ},
	{"setW", &luna_wrapper_ork_quatf::_bind_setW},
	{"__mul", &luna_wrapper_ork_quatf::_bind___mul},
	{"dynCast", &luna_wrapper_ork_quatf::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_quatf::_bind___eq},
	{"fromVoid", &luna_wrapper_ork_quatf::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_quatf::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::quatf >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::quatf >::enumValues[] = {
	{0,0}
};


