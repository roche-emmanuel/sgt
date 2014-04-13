#include <plug_common.h>

class luna_wrapper_ork_mat3d {
public:
	typedef Luna< ork::mat3d > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::mat3d* self= (ork::mat3d*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::mat3d >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72889753) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::mat3d >::check(L,1));
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

		ork::mat3d* self=(Luna< ork::mat3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::mat3d");
		
		return luna_dynamicCast(L,converters,"ork::mat3d",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( lua_type(L,8)!=LUA_TNUMBER ) return false;
		if( lua_type(L,9)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72889753) ) return false;
		if( (!(Luna< ork::mat3d >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_coefficients(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setColumn(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,81304269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_fromAxes(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,81304269) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,81304269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_transpose(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_inverse_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889753) ) return false;
		if( (!(Luna< ork::mat3d >::check(L,2))) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_inverse_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_determinant(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_trace(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 12 valid operators)
	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889753) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889753) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889753) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889753) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889753) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889753) ) return false;
		if( (!(Luna< ork::mat3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		if( (!(Luna< ork::vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151940) ) return false;
		if( (!(Luna< ork::box3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		return true;
	}


	// Constructor binds:
	// ork::mat3d::mat3d()
	static ork::mat3d* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat3d::mat3d() function, expected prototype:\nork::mat3d::mat3d()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::mat3d();
	}

	// ork::mat3d::mat3d(double m00, double m01, double m02, double m10, double m11, double m12, double m20, double m21, double m22)
	static ork::mat3d* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat3d::mat3d(double m00, double m01, double m02, double m10, double m11, double m12, double m20, double m21, double m22) function, expected prototype:\nork::mat3d::mat3d(double m00, double m01, double m02, double m10, double m11, double m12, double m20, double m21, double m22)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double m00=(double)lua_tonumber(L,1);
		double m01=(double)lua_tonumber(L,2);
		double m02=(double)lua_tonumber(L,3);
		double m10=(double)lua_tonumber(L,4);
		double m11=(double)lua_tonumber(L,5);
		double m12=(double)lua_tonumber(L,6);
		double m20=(double)lua_tonumber(L,7);
		double m21=(double)lua_tonumber(L,8);
		double m22=(double)lua_tonumber(L,9);

		return new ork::mat3d(m00, m01, m02, m10, m11, m12, m20, m21, m22);
	}

	// ork::mat3d::mat3d(const double * array)
	static ork::mat3d* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat3d::mat3d(const double * array) function, expected prototype:\nork::mat3d::mat3d(const double * array)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const double* array=(const double*)Luna< void >::check(L,1);

		return new ork::mat3d(array);
	}

	// ork::mat3d::mat3d(const ork::mat3d & mat)
	static ork::mat3d* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat3d::mat3d(const ork::mat3d & mat) function, expected prototype:\nork::mat3d::mat3d(const ork::mat3d & mat)\nClass arguments details:\narg 1 ID = 72889753\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat3d* mat_ptr=(Luna< ork::mat3d >::check(L,1));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in ork::mat3d::mat3d function");
		}
		const ork::mat3d & mat=*mat_ptr;

		return new ork::mat3d(mat);
	}

	// Overload binder for ork::mat3d::mat3d
	static ork::mat3d* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function mat3d, cannot match any of the overloads for function mat3d:\n  mat3d()\n  mat3d(double, double, double, double, double, double, double, double, double)\n  mat3d(const double *)\n  mat3d(const ork::mat3d &)\n");
		return NULL;
	}


	// Function binds:
	// const double * ork::mat3d::coefficients() const
	static int _bind_coefficients(lua_State *L) {
		if (!_lg_typecheck_coefficients(L)) {
			luaL_error(L, "luna typecheck failed in const double * ork::mat3d::coefficients() const function, expected prototype:\nconst double * ork::mat3d::coefficients() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat3d* self=(Luna< ork::mat3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const double * ork::mat3d::coefficients() const. Got : '%s'\n%s",typeid(Luna< ork::mat3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const double * lret = self->coefficients();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// ork::vec3d ork::mat3d::getColumn(int iCol) const
	static int _bind_getColumn(lua_State *L) {
		if (!_lg_typecheck_getColumn(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d ork::mat3d::getColumn(int iCol) const function, expected prototype:\nork::vec3d ork::mat3d::getColumn(int iCol) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int iCol=(int)lua_tointeger(L,2);

		ork::mat3d* self=(Luna< ork::mat3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d ork::mat3d::getColumn(int) const. Got : '%s'\n%s",typeid(Luna< ork::mat3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->getColumn(iCol);
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// void ork::mat3d::setColumn(int iCol, const ork::vec3d & v)
	static int _bind_setColumn(lua_State *L) {
		if (!_lg_typecheck_setColumn(L)) {
			luaL_error(L, "luna typecheck failed in void ork::mat3d::setColumn(int iCol, const ork::vec3d & v) function, expected prototype:\nvoid ork::mat3d::setColumn(int iCol, const ork::vec3d & v)\nClass arguments details:\narg 2 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		int iCol=(int)lua_tointeger(L,2);
		const ork::vec3d* v_ptr=(Luna< ork::vec3d >::check(L,3));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::mat3d::setColumn function");
		}
		const ork::vec3d & v=*v_ptr;

		ork::mat3d* self=(Luna< ork::mat3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::mat3d::setColumn(int, const ork::vec3d &). Got : '%s'\n%s",typeid(Luna< ork::mat3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColumn(iCol, v);

		return 0;
	}

	// void ork::mat3d::fromAxes(const ork::vec3d & xAxis, const ork::vec3d & yAxis, const ork::vec3d & zAxis)
	static int _bind_fromAxes(lua_State *L) {
		if (!_lg_typecheck_fromAxes(L)) {
			luaL_error(L, "luna typecheck failed in void ork::mat3d::fromAxes(const ork::vec3d & xAxis, const ork::vec3d & yAxis, const ork::vec3d & zAxis) function, expected prototype:\nvoid ork::mat3d::fromAxes(const ork::vec3d & xAxis, const ork::vec3d & yAxis, const ork::vec3d & zAxis)\nClass arguments details:\narg 1 ID = 81304269\narg 2 ID = 81304269\narg 3 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* xAxis_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !xAxis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xAxis in ork::mat3d::fromAxes function");
		}
		const ork::vec3d & xAxis=*xAxis_ptr;
		const ork::vec3d* yAxis_ptr=(Luna< ork::vec3d >::check(L,3));
		if( !yAxis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg yAxis in ork::mat3d::fromAxes function");
		}
		const ork::vec3d & yAxis=*yAxis_ptr;
		const ork::vec3d* zAxis_ptr=(Luna< ork::vec3d >::check(L,4));
		if( !zAxis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg zAxis in ork::mat3d::fromAxes function");
		}
		const ork::vec3d & zAxis=*zAxis_ptr;

		ork::mat3d* self=(Luna< ork::mat3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::mat3d::fromAxes(const ork::vec3d &, const ork::vec3d &, const ork::vec3d &). Got : '%s'\n%s",typeid(Luna< ork::mat3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->fromAxes(xAxis, yAxis, zAxis);

		return 0;
	}

	// ork::mat3d ork::mat3d::transpose() const
	static int _bind_transpose(lua_State *L) {
		if (!_lg_typecheck_transpose(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat3d ork::mat3d::transpose() const function, expected prototype:\nork::mat3d ork::mat3d::transpose() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat3d* self=(Luna< ork::mat3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat3d ork::mat3d::transpose() const. Got : '%s'\n%s",typeid(Luna< ork::mat3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat3d stack_lret = self->transpose();
		ork::mat3d* lret = new ork::mat3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat3d >::push(L,lret,true);

		return 1;
	}

	// bool ork::mat3d::inverse(ork::mat3d & mInv, double tolerance = 1e-06) const
	static int _bind_inverse_overload_1(lua_State *L) {
		if (!_lg_typecheck_inverse_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::mat3d::inverse(ork::mat3d & mInv, double tolerance = 1e-06) const function, expected prototype:\nbool ork::mat3d::inverse(ork::mat3d & mInv, double tolerance = 1e-06) const\nClass arguments details:\narg 1 ID = 72889753\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::mat3d* mInv_ptr=(Luna< ork::mat3d >::check(L,2));
		if( !mInv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mInv in ork::mat3d::inverse function");
		}
		ork::mat3d & mInv=*mInv_ptr;
		double tolerance=luatop>2 ? (double)lua_tonumber(L,3) : (double)1e-06;

		ork::mat3d* self=(Luna< ork::mat3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::mat3d::inverse(ork::mat3d &, double) const. Got : '%s'\n%s",typeid(Luna< ork::mat3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->inverse(mInv, tolerance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::mat3d ork::mat3d::inverse(double tolerance = 1e-06) const
	static int _bind_inverse_overload_2(lua_State *L) {
		if (!_lg_typecheck_inverse_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat3d ork::mat3d::inverse(double tolerance = 1e-06) const function, expected prototype:\nork::mat3d ork::mat3d::inverse(double tolerance = 1e-06) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double tolerance=luatop>1 ? (double)lua_tonumber(L,2) : (double)1e-06;

		ork::mat3d* self=(Luna< ork::mat3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat3d ork::mat3d::inverse(double) const. Got : '%s'\n%s",typeid(Luna< ork::mat3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat3d stack_lret = self->inverse(tolerance);
		ork::mat3d* lret = new ork::mat3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat3d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::mat3d::inverse
	static int _bind_inverse(lua_State *L) {
		if (_lg_typecheck_inverse_overload_1(L)) return _bind_inverse_overload_1(L);
		if (_lg_typecheck_inverse_overload_2(L)) return _bind_inverse_overload_2(L);

		luaL_error(L, "error in function inverse, cannot match any of the overloads for function inverse:\n  inverse(ork::mat3d &, double)\n  inverse(double)\n");
		return 0;
	}

	// double ork::mat3d::determinant() const
	static int _bind_determinant(lua_State *L) {
		if (!_lg_typecheck_determinant(L)) {
			luaL_error(L, "luna typecheck failed in double ork::mat3d::determinant() const function, expected prototype:\ndouble ork::mat3d::determinant() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat3d* self=(Luna< ork::mat3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::mat3d::determinant() const. Got : '%s'\n%s",typeid(Luna< ork::mat3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->determinant();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::mat3d::trace() const
	static int _bind_trace(lua_State *L) {
		if (!_lg_typecheck_trace(L)) {
			luaL_error(L, "luna typecheck failed in double ork::mat3d::trace() const function, expected prototype:\ndouble ork::mat3d::trace() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat3d* self=(Luna< ork::mat3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::mat3d::trace() const. Got : '%s'\n%s",typeid(Luna< ork::mat3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->trace();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// double * ork::mat3d::operator[](int iRow)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luaL_error(L, "luna typecheck failed in double * ork::mat3d::operator[](int iRow) function, expected prototype:\ndouble * ork::mat3d::operator[](int iRow)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int iRow=(int)lua_tointeger(L,2);

		ork::mat3d* self=(Luna< ork::mat3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double * ork::mat3d::operator[](int). Got : '%s'\n%s",typeid(Luna< ork::mat3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double * lret = self->operator[](iRow);
		lua_pushnumber(L,*lret);

		return 1;
	}

	// ork::mat3d & ork::mat3d::operator=(const ork::mat3d & mat)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat3d & ork::mat3d::operator=(const ork::mat3d & mat) function, expected prototype:\nork::mat3d & ork::mat3d::operator=(const ork::mat3d & mat)\nClass arguments details:\narg 1 ID = 72889753\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat3d* mat_ptr=(Luna< ork::mat3d >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in ork::mat3d::operator= function");
		}
		const ork::mat3d & mat=*mat_ptr;

		ork::mat3d* self=(Luna< ork::mat3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat3d & ork::mat3d::operator=(const ork::mat3d &). Got : '%s'\n%s",typeid(Luna< ork::mat3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::mat3d* lret = &self->operator=(mat);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat3d >::push(L,lret,false);

		return 1;
	}

	// bool ork::mat3d::operator==(const ork::mat3d & mat) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::mat3d::operator==(const ork::mat3d & mat) const function, expected prototype:\nbool ork::mat3d::operator==(const ork::mat3d & mat) const\nClass arguments details:\narg 1 ID = 72889753\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat3d* mat_ptr=(Luna< ork::mat3d >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in ork::mat3d::operator== function");
		}
		const ork::mat3d & mat=*mat_ptr;

		ork::mat3d* self=(Luna< ork::mat3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::mat3d::operator==(const ork::mat3d &) const. Got : '%s'\n%s",typeid(Luna< ork::mat3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(mat);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::mat3d::operator!=(const ork::mat3d & mat) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::mat3d::operator!=(const ork::mat3d & mat) const function, expected prototype:\nbool ork::mat3d::operator!=(const ork::mat3d & mat) const\nClass arguments details:\narg 1 ID = 72889753\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat3d* mat_ptr=(Luna< ork::mat3d >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in ork::mat3d::operator!= function");
		}
		const ork::mat3d & mat=*mat_ptr;

		ork::mat3d* self=(Luna< ork::mat3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::mat3d::operator!=(const ork::mat3d &) const. Got : '%s'\n%s",typeid(Luna< ork::mat3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(mat);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::mat3d ork::mat3d::operator+(const ork::mat3d & mat) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat3d ork::mat3d::operator+(const ork::mat3d & mat) const function, expected prototype:\nork::mat3d ork::mat3d::operator+(const ork::mat3d & mat) const\nClass arguments details:\narg 1 ID = 72889753\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat3d* mat_ptr=(Luna< ork::mat3d >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in ork::mat3d::operator+ function");
		}
		const ork::mat3d & mat=*mat_ptr;

		ork::mat3d* self=(Luna< ork::mat3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat3d ork::mat3d::operator+(const ork::mat3d &) const. Got : '%s'\n%s",typeid(Luna< ork::mat3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat3d stack_lret = self->operator+(mat);
		ork::mat3d* lret = new ork::mat3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat3d >::push(L,lret,true);

		return 1;
	}

	// ork::mat3d ork::mat3d::operator-(const ork::mat3d & mat) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat3d ork::mat3d::operator-(const ork::mat3d & mat) const function, expected prototype:\nork::mat3d ork::mat3d::operator-(const ork::mat3d & mat) const\nClass arguments details:\narg 1 ID = 72889753\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat3d* mat_ptr=(Luna< ork::mat3d >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in ork::mat3d::operator- function");
		}
		const ork::mat3d & mat=*mat_ptr;

		ork::mat3d* self=(Luna< ork::mat3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat3d ork::mat3d::operator-(const ork::mat3d &) const. Got : '%s'\n%s",typeid(Luna< ork::mat3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat3d stack_lret = self->operator-(mat);
		ork::mat3d* lret = new ork::mat3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat3d >::push(L,lret,true);

		return 1;
	}

	// ork::mat3d ork::mat3d::operator*(const ork::mat3d & mat) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat3d ork::mat3d::operator*(const ork::mat3d & mat) const function, expected prototype:\nork::mat3d ork::mat3d::operator*(const ork::mat3d & mat) const\nClass arguments details:\narg 1 ID = 72889753\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat3d* mat_ptr=(Luna< ork::mat3d >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in ork::mat3d::operator* function");
		}
		const ork::mat3d & mat=*mat_ptr;

		ork::mat3d* self=(Luna< ork::mat3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat3d ork::mat3d::operator*(const ork::mat3d &) const. Got : '%s'\n%s",typeid(Luna< ork::mat3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat3d stack_lret = self->operator*(mat);
		ork::mat3d* lret = new ork::mat3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat3d >::push(L,lret,true);

		return 1;
	}

	// ork::vec3d ork::mat3d::operator*(const ork::vec3d & v) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d ork::mat3d::operator*(const ork::vec3d & v) const function, expected prototype:\nork::vec3d ork::mat3d::operator*(const ork::vec3d & v) const\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* v_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::mat3d::operator* function");
		}
		const ork::vec3d & v=*v_ptr;

		ork::mat3d* self=(Luna< ork::mat3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d ork::mat3d::operator*(const ork::vec3d &) const. Got : '%s'\n%s",typeid(Luna< ork::mat3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->operator*(v);
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// ork::vec2d ork::mat3d::operator*(const ork::vec2d & v) const
	static int _bind___mul_overload_3(lua_State *L) {
		if (!_lg_typecheck___mul_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2d ork::mat3d::operator*(const ork::vec2d & v) const function, expected prototype:\nork::vec2d ork::mat3d::operator*(const ork::vec2d & v) const\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2d* v_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::mat3d::operator* function");
		}
		const ork::vec2d & v=*v_ptr;

		ork::mat3d* self=(Luna< ork::mat3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2d ork::mat3d::operator*(const ork::vec2d &) const. Got : '%s'\n%s",typeid(Luna< ork::mat3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2d stack_lret = self->operator*(v);
		ork::vec2d* lret = new ork::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2d >::push(L,lret,true);

		return 1;
	}

	// ork::box3d ork::mat3d::operator*(const ork::box3d & b) const
	static int _bind___mul_overload_4(lua_State *L) {
		if (!_lg_typecheck___mul_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in ork::box3d ork::mat3d::operator*(const ork::box3d & b) const function, expected prototype:\nork::box3d ork::mat3d::operator*(const ork::box3d & b) const\nClass arguments details:\narg 1 ID = 63151940\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box3d* b_ptr=(Luna< ork::box3d >::check(L,2));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in ork::mat3d::operator* function");
		}
		const ork::box3d & b=*b_ptr;

		ork::mat3d* self=(Luna< ork::mat3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box3d ork::mat3d::operator*(const ork::box3d &) const. Got : '%s'\n%s",typeid(Luna< ork::mat3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box3d stack_lret = self->operator*(b);
		ork::box3d* lret = new ork::box3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box3d >::push(L,lret,true);

		return 1;
	}

	// ork::mat3d ork::mat3d::operator*(const double scalar) const
	static int _bind___mul_overload_5(lua_State *L) {
		if (!_lg_typecheck___mul_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat3d ork::mat3d::operator*(const double scalar) const function, expected prototype:\nork::mat3d ork::mat3d::operator*(const double scalar) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const double scalar=(const double)lua_tonumber(L,2);

		ork::mat3d* self=(Luna< ork::mat3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat3d ork::mat3d::operator*(const double) const. Got : '%s'\n%s",typeid(Luna< ork::mat3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat3d stack_lret = self->operator*(scalar);
		ork::mat3d* lret = new ork::mat3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat3d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::mat3d::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);
		if (_lg_typecheck___mul_overload_3(L)) return _bind___mul_overload_3(L);
		if (_lg_typecheck___mul_overload_4(L)) return _bind___mul_overload_4(L);
		if (_lg_typecheck___mul_overload_5(L)) return _bind___mul_overload_5(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const ork::mat3d &)\n  operator*(const ork::vec3d &)\n  operator*(const ork::vec2d &)\n  operator*(const ork::box3d &)\n  operator*(const double)\n");
		return 0;
	}

	// ork::mat3d ork::mat3d::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat3d ork::mat3d::operator-() const function, expected prototype:\nork::mat3d ork::mat3d::operator-() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat3d* self=(Luna< ork::mat3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat3d ork::mat3d::operator-() const. Got : '%s'\n%s",typeid(Luna< ork::mat3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat3d stack_lret = self->operator-();
		ork::mat3d* lret = new ork::mat3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat3d >::push(L,lret,true);

		return 1;
	}


};

ork::mat3d* LunaTraits< ork::mat3d >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_mat3d::_bind_ctor(L);
}

void LunaTraits< ork::mat3d >::_bind_dtor(ork::mat3d* obj) {
	delete obj;
}

const char LunaTraits< ork::mat3d >::className[] = "mat3d";
const char LunaTraits< ork::mat3d >::fullName[] = "ork::mat3d";
const char LunaTraits< ork::mat3d >::moduleName[] = "ork";
const char* LunaTraits< ork::mat3d >::parents[] = {0};
const int LunaTraits< ork::mat3d >::hash = 72889753;
const int LunaTraits< ork::mat3d >::uniqueIDs[] = {72889753,0};

luna_RegType LunaTraits< ork::mat3d >::methods[] = {
	{"coefficients", &luna_wrapper_ork_mat3d::_bind_coefficients},
	{"getColumn", &luna_wrapper_ork_mat3d::_bind_getColumn},
	{"setColumn", &luna_wrapper_ork_mat3d::_bind_setColumn},
	{"fromAxes", &luna_wrapper_ork_mat3d::_bind_fromAxes},
	{"transpose", &luna_wrapper_ork_mat3d::_bind_transpose},
	{"inverse", &luna_wrapper_ork_mat3d::_bind_inverse},
	{"determinant", &luna_wrapper_ork_mat3d::_bind_determinant},
	{"trace", &luna_wrapper_ork_mat3d::_bind_trace},
	{"op_index", &luna_wrapper_ork_mat3d::_bind_op_index},
	{"op_assign", &luna_wrapper_ork_mat3d::_bind_op_assign},
	{"__eq", &luna_wrapper_ork_mat3d::_bind___eq},
	{"op_neq", &luna_wrapper_ork_mat3d::_bind_op_neq},
	{"__add", &luna_wrapper_ork_mat3d::_bind___add},
	{"__sub", &luna_wrapper_ork_mat3d::_bind___sub},
	{"__mul", &luna_wrapper_ork_mat3d::_bind___mul},
	{"__unm", &luna_wrapper_ork_mat3d::_bind___unm},
	{"dynCast", &luna_wrapper_ork_mat3d::_bind_dynCast},
	{"fromVoid", &luna_wrapper_ork_mat3d::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_mat3d::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::mat3d >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::mat3d >::enumValues[] = {
	{0,0}
};


