#include <plug_common.h>

class luna_wrapper_ork_quatd {
public:
	typedef Luna< ork::quatd > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,77163413) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::quatd*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::quatd* rhs =(Luna< ork::quatd >::check(L,2));
		ork::quatd* self=(Luna< ork::quatd >::check(L,1));
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

		ork::quatd* self= (ork::quatd*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::quatd >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,77163413) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::quatd >::check(L,1));
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

		ork::quatd* self=(Luna< ork::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::quatd");
		
		return luna_dynamicCast(L,converters,"ork::quatd",name);
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

		if( !Luna<void>::has_uniqueid(L,1,77163413) ) return false;
		if( (!(Luna< ork::quatd >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304269) ) return false;
		if( (!(Luna< ork::vec3d >::check(L,1))) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304269) ) return false;
		if( (!(Luna< ork::vec3d >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		if( (!(Luna< ork::vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72889753) ) return false;
		if( (!(Luna< ork::mat3d >::check(L,1))) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,77163413) ) return false;
		if( (!(Luna< ork::quatd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		if( (!(Luna< ork::vec3d >::check(L,2))) ) return false;
		return true;
	}


	// Constructor binds:
	// ork::quatd::quatd()
	static ork::quatd* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::quatd::quatd() function, expected prototype:\nork::quatd::quatd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::quatd();
	}

	// ork::quatd::quatd(double x, double y, double z, double w)
	static ork::quatd* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::quatd::quatd(double x, double y, double z, double w) function, expected prototype:\nork::quatd::quatd(double x, double y, double z, double w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,1);
		double y=(double)lua_tonumber(L,2);
		double z=(double)lua_tonumber(L,3);
		double w=(double)lua_tonumber(L,4);

		return new ork::quatd(x, y, z, w);
	}

	// ork::quatd::quatd(const ork::quatd & v)
	static ork::quatd* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::quatd::quatd(const ork::quatd & v) function, expected prototype:\nork::quatd::quatd(const ork::quatd & v)\nClass arguments details:\narg 1 ID = 77163413\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::quatd* v_ptr=(Luna< ork::quatd >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::quatd::quatd function");
		}
		const ork::quatd & v=*v_ptr;

		return new ork::quatd(v);
	}

	// ork::quatd::quatd(const ork::vec3d & axis, double angle)
	static ork::quatd* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in ork::quatd::quatd(const ork::vec3d & axis, double angle) function, expected prototype:\nork::quatd::quatd(const ork::vec3d & axis, double angle)\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* axis_ptr=(Luna< ork::vec3d >::check(L,1));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in ork::quatd::quatd function");
		}
		const ork::vec3d & axis=*axis_ptr;
		double angle=(double)lua_tonumber(L,2);

		return new ork::quatd(axis, angle);
	}

	// ork::quatd::quatd(const ork::vec3d & to, const ork::vec3d & from)
	static ork::quatd* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in ork::quatd::quatd(const ork::vec3d & to, const ork::vec3d & from) function, expected prototype:\nork::quatd::quatd(const ork::vec3d & to, const ork::vec3d & from)\nClass arguments details:\narg 1 ID = 81304269\narg 2 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* to_ptr=(Luna< ork::vec3d >::check(L,1));
		if( !to_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg to in ork::quatd::quatd function");
		}
		const ork::vec3d & to=*to_ptr;
		const ork::vec3d* from_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !from_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg from in ork::quatd::quatd function");
		}
		const ork::vec3d & from=*from_ptr;

		return new ork::quatd(to, from);
	}

	// ork::quatd::quatd(const ork::mat3d & m)
	static ork::quatd* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in ork::quatd::quatd(const ork::mat3d & m) function, expected prototype:\nork::quatd::quatd(const ork::mat3d & m)\nClass arguments details:\narg 1 ID = 72889753\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat3d* m_ptr=(Luna< ork::mat3d >::check(L,1));
		if( !m_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m in ork::quatd::quatd function");
		}
		const ork::mat3d & m=*m_ptr;

		return new ork::quatd(m);
	}

	// Overload binder for ork::quatd::quatd
	static ork::quatd* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function quatd, cannot match any of the overloads for function quatd:\n  quatd()\n  quatd(double, double, double, double)\n  quatd(const ork::quatd &)\n  quatd(const ork::vec3d &, double)\n  quatd(const ork::vec3d &, const ork::vec3d &)\n  quatd(const ork::mat3d &)\n");
		return NULL;
	}


	// Function binds:
	// ork::quatd ork::quatd::inverse() const
	static int _bind_inverse(lua_State *L) {
		if (!_lg_typecheck_inverse(L)) {
			luaL_error(L, "luna typecheck failed in ork::quatd ork::quatd::inverse() const function, expected prototype:\nork::quatd ork::quatd::inverse() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::quatd* self=(Luna< ork::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::quatd ork::quatd::inverse() const. Got : '%s'\n%s",typeid(Luna< ork::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::quatd stack_lret = self->inverse();
		ork::quatd* lret = new ork::quatd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::quatd >::push(L,lret,true);

		return 1;
	}

	// double ork::quatd::length() const
	static int _bind_length(lua_State *L) {
		if (!_lg_typecheck_length(L)) {
			luaL_error(L, "luna typecheck failed in double ork::quatd::length() const function, expected prototype:\ndouble ork::quatd::length() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::quatd* self=(Luna< ork::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::quatd::length() const. Got : '%s'\n%s",typeid(Luna< ork::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::quatd ork::quatd::normalize() const
	static int _bind_normalize(lua_State *L) {
		if (!_lg_typecheck_normalize(L)) {
			luaL_error(L, "luna typecheck failed in ork::quatd ork::quatd::normalize() const function, expected prototype:\nork::quatd ork::quatd::normalize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::quatd* self=(Luna< ork::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::quatd ork::quatd::normalize() const. Got : '%s'\n%s",typeid(Luna< ork::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::quatd stack_lret = self->normalize();
		ork::quatd* lret = new ork::quatd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::quatd >::push(L,lret,true);

		return 1;
	}

	// ork::mat3d ork::quatd::toMat3() const
	static int _bind_toMat3(lua_State *L) {
		if (!_lg_typecheck_toMat3(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat3d ork::quatd::toMat3() const function, expected prototype:\nork::mat3d ork::quatd::toMat3() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::quatd* self=(Luna< ork::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat3d ork::quatd::toMat3() const. Got : '%s'\n%s",typeid(Luna< ork::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat3d stack_lret = self->toMat3();
		ork::mat3d* lret = new ork::mat3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat3d >::push(L,lret,true);

		return 1;
	}

	// ork::mat4d ork::quatd::toMat4() const
	static int _bind_toMat4(lua_State *L) {
		if (!_lg_typecheck_toMat4(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d ork::quatd::toMat4() const function, expected prototype:\nork::mat4d ork::quatd::toMat4() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::quatd* self=(Luna< ork::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d ork::quatd::toMat4() const. Got : '%s'\n%s",typeid(Luna< ork::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4d stack_lret = self->toMat4();
		ork::mat4d* lret = new ork::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,true);

		return 1;
	}

	// ork::vec3d ork::quatd::getAxis() const
	static int _bind_getAxis(lua_State *L) {
		if (!_lg_typecheck_getAxis(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d ork::quatd::getAxis() const function, expected prototype:\nork::vec3d ork::quatd::getAxis() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::quatd* self=(Luna< ork::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d ork::quatd::getAxis() const. Got : '%s'\n%s",typeid(Luna< ork::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->getAxis();
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// double ork::quatd::getAngle() const
	static int _bind_getAngle(lua_State *L) {
		if (!_lg_typecheck_getAngle(L)) {
			luaL_error(L, "luna typecheck failed in double ork::quatd::getAngle() const function, expected prototype:\ndouble ork::quatd::getAngle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::quatd* self=(Luna< ork::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::quatd::getAngle() const. Got : '%s'\n%s",typeid(Luna< ork::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getAngle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::quatd::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in double ork::quatd::x() function, expected prototype:\ndouble ork::quatd::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::quatd* self=(Luna< ork::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::quatd::x(). Got : '%s'\n%s",typeid(Luna< ork::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::quatd::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in double ork::quatd::y() function, expected prototype:\ndouble ork::quatd::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::quatd* self=(Luna< ork::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::quatd::y(). Got : '%s'\n%s",typeid(Luna< ork::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::quatd::z()
	static int _bind_getZ(lua_State *L) {
		if (!_lg_typecheck_getZ(L)) {
			luaL_error(L, "luna typecheck failed in double ork::quatd::z() function, expected prototype:\ndouble ork::quatd::z()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::quatd* self=(Luna< ork::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::quatd::z(). Got : '%s'\n%s",typeid(Luna< ork::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->z;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::quatd::w()
	static int _bind_getW(lua_State *L) {
		if (!_lg_typecheck_getW(L)) {
			luaL_error(L, "luna typecheck failed in double ork::quatd::w() function, expected prototype:\ndouble ork::quatd::w()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::quatd* self=(Luna< ork::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::quatd::w(). Got : '%s'\n%s",typeid(Luna< ork::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->w;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::quatd::x(double value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void ork::quatd::x(double value) function, expected prototype:\nvoid ork::quatd::x(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		ork::quatd* self=(Luna< ork::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::quatd::x(double). Got : '%s'\n%s",typeid(Luna< ork::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void ork::quatd::y(double value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void ork::quatd::y(double value) function, expected prototype:\nvoid ork::quatd::y(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		ork::quatd* self=(Luna< ork::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::quatd::y(double). Got : '%s'\n%s",typeid(Luna< ork::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}

	// void ork::quatd::z(double value)
	static int _bind_setZ(lua_State *L) {
		if (!_lg_typecheck_setZ(L)) {
			luaL_error(L, "luna typecheck failed in void ork::quatd::z(double value) function, expected prototype:\nvoid ork::quatd::z(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		ork::quatd* self=(Luna< ork::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::quatd::z(double). Got : '%s'\n%s",typeid(Luna< ork::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->z = value;

		return 0;
	}

	// void ork::quatd::w(double value)
	static int _bind_setW(lua_State *L) {
		if (!_lg_typecheck_setW(L)) {
			luaL_error(L, "luna typecheck failed in void ork::quatd::w(double value) function, expected prototype:\nvoid ork::quatd::w(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		ork::quatd* self=(Luna< ork::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::quatd::w(double). Got : '%s'\n%s",typeid(Luna< ork::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->w = value;

		return 0;
	}


	// Operator binds:
	// ork::quatd ork::quatd::operator*(const ork::quatd & a) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::quatd ork::quatd::operator*(const ork::quatd & a) const function, expected prototype:\nork::quatd ork::quatd::operator*(const ork::quatd & a) const\nClass arguments details:\narg 1 ID = 77163413\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::quatd* a_ptr=(Luna< ork::quatd >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in ork::quatd::operator* function");
		}
		const ork::quatd & a=*a_ptr;

		ork::quatd* self=(Luna< ork::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::quatd ork::quatd::operator*(const ork::quatd &) const. Got : '%s'\n%s",typeid(Luna< ork::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::quatd stack_lret = self->operator*(a);
		ork::quatd* lret = new ork::quatd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::quatd >::push(L,lret,true);

		return 1;
	}

	// ork::vec3d ork::quatd::operator*(const ork::vec3d & a) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d ork::quatd::operator*(const ork::vec3d & a) const function, expected prototype:\nork::vec3d ork::quatd::operator*(const ork::vec3d & a) const\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* a_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in ork::quatd::operator* function");
		}
		const ork::vec3d & a=*a_ptr;

		ork::quatd* self=(Luna< ork::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d ork::quatd::operator*(const ork::vec3d &) const. Got : '%s'\n%s",typeid(Luna< ork::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->operator*(a);
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::quatd::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const ork::quatd &)\n  operator*(const ork::vec3d &)\n");
		return 0;
	}


};

ork::quatd* LunaTraits< ork::quatd >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_quatd::_bind_ctor(L);
}

void LunaTraits< ork::quatd >::_bind_dtor(ork::quatd* obj) {
	delete obj;
}

const char LunaTraits< ork::quatd >::className[] = "quatd";
const char LunaTraits< ork::quatd >::fullName[] = "ork::quatd";
const char LunaTraits< ork::quatd >::moduleName[] = "ork";
const char* LunaTraits< ork::quatd >::parents[] = {0};
const int LunaTraits< ork::quatd >::hash = 77163413;
const int LunaTraits< ork::quatd >::uniqueIDs[] = {77163413,0};

luna_RegType LunaTraits< ork::quatd >::methods[] = {
	{"inverse", &luna_wrapper_ork_quatd::_bind_inverse},
	{"length", &luna_wrapper_ork_quatd::_bind_length},
	{"normalize", &luna_wrapper_ork_quatd::_bind_normalize},
	{"toMat3", &luna_wrapper_ork_quatd::_bind_toMat3},
	{"toMat4", &luna_wrapper_ork_quatd::_bind_toMat4},
	{"getAxis", &luna_wrapper_ork_quatd::_bind_getAxis},
	{"getAngle", &luna_wrapper_ork_quatd::_bind_getAngle},
	{"getX", &luna_wrapper_ork_quatd::_bind_getX},
	{"getY", &luna_wrapper_ork_quatd::_bind_getY},
	{"getZ", &luna_wrapper_ork_quatd::_bind_getZ},
	{"getW", &luna_wrapper_ork_quatd::_bind_getW},
	{"setX", &luna_wrapper_ork_quatd::_bind_setX},
	{"setY", &luna_wrapper_ork_quatd::_bind_setY},
	{"setZ", &luna_wrapper_ork_quatd::_bind_setZ},
	{"setW", &luna_wrapper_ork_quatd::_bind_setW},
	{"__mul", &luna_wrapper_ork_quatd::_bind___mul},
	{"dynCast", &luna_wrapper_ork_quatd::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_quatd::_bind___eq},
	{"fromVoid", &luna_wrapper_ork_quatd::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_quatd::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::quatd >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::quatd >::enumValues[] = {
	{0,0}
};


