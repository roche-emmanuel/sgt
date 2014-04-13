#include <plug_common.h>

class luna_wrapper_ork_mat4d {
public:
	typedef Luna< ork::mat4d > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::mat4d* self= (ork::mat4d*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::mat4d >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72889784) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::mat4d >::check(L,1));
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

		ork::mat4d* self=(Luna< ork::mat4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::mat4d");
		
		return luna_dynamicCast(L,converters,"ork::mat4d",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=16 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( lua_type(L,8)!=LUA_TNUMBER ) return false;
		if( lua_type(L,9)!=LUA_TNUMBER ) return false;
		if( lua_type(L,10)!=LUA_TNUMBER ) return false;
		if( lua_type(L,11)!=LUA_TNUMBER ) return false;
		if( lua_type(L,12)!=LUA_TNUMBER ) return false;
		if( lua_type(L,13)!=LUA_TNUMBER ) return false;
		if( lua_type(L,14)!=LUA_TNUMBER ) return false;
		if( lua_type(L,15)!=LUA_TNUMBER ) return false;
		if( lua_type(L,16)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_coefficients(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_transpose(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_adjoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_inverse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_mat3x3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_toMatrixd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_fromMatrixd(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_determinant(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_translate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rotatex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rotatey(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rotatez(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_perspectiveProjection(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_orthoProjection(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 12 valid operators)
	inline static bool _lg_typecheck_op_index_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index_overload_2(lua_State *L) {
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

		if( !Luna<void>::has_uniqueid(L,2,72889784) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889784) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889784) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889784) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889784) ) return false;
		if( (!(Luna< ork::mat4d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304300) ) return false;
		if( (!(Luna< ork::vec4d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		if( (!(Luna< ork::vec3d >::check(L,2))) ) return false;
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


	// Constructor binds:
	// ork::mat4d::mat4d()
	static ork::mat4d* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d::mat4d() function, expected prototype:\nork::mat4d::mat4d()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::mat4d();
	}

	// ork::mat4d::mat4d(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23, double m30, double m31, double m32, double m33)
	static ork::mat4d* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d::mat4d(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23, double m30, double m31, double m32, double m33) function, expected prototype:\nork::mat4d::mat4d(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23, double m30, double m31, double m32, double m33)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double m00=(double)lua_tonumber(L,1);
		double m01=(double)lua_tonumber(L,2);
		double m02=(double)lua_tonumber(L,3);
		double m03=(double)lua_tonumber(L,4);
		double m10=(double)lua_tonumber(L,5);
		double m11=(double)lua_tonumber(L,6);
		double m12=(double)lua_tonumber(L,7);
		double m13=(double)lua_tonumber(L,8);
		double m20=(double)lua_tonumber(L,9);
		double m21=(double)lua_tonumber(L,10);
		double m22=(double)lua_tonumber(L,11);
		double m23=(double)lua_tonumber(L,12);
		double m30=(double)lua_tonumber(L,13);
		double m31=(double)lua_tonumber(L,14);
		double m32=(double)lua_tonumber(L,15);
		double m33=(double)lua_tonumber(L,16);

		return new ork::mat4d(m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23, m30, m31, m32, m33);
	}

	// ork::mat4d::mat4d(const double * array)
	static ork::mat4d* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d::mat4d(const double * array) function, expected prototype:\nork::mat4d::mat4d(const double * array)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const double* array=(const double*)Luna< void >::check(L,1);

		return new ork::mat4d(array);
	}

	// ork::mat4d::mat4d(const ork::mat3d & m3x3)
	static ork::mat4d* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d::mat4d(const ork::mat3d & m3x3) function, expected prototype:\nork::mat4d::mat4d(const ork::mat3d & m3x3)\nClass arguments details:\narg 1 ID = 72889753\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat3d* m3x3_ptr=(Luna< ork::mat3d >::check(L,1));
		if( !m3x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x3 in ork::mat4d::mat4d function");
		}
		const ork::mat3d & m3x3=*m3x3_ptr;

		return new ork::mat4d(m3x3);
	}

	// ork::mat4d::mat4d(const osg::Matrixd & mat)
	static ork::mat4d* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d::mat4d(const osg::Matrixd & mat) function, expected prototype:\nork::mat4d::mat4d(const osg::Matrixd & mat)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* mat_ptr=(Luna< osg::Matrixd >::check(L,1));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in ork::mat4d::mat4d function");
		}
		const osg::Matrixd & mat=*mat_ptr;

		return new ork::mat4d(mat);
	}

	// Overload binder for ork::mat4d::mat4d
	static ork::mat4d* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);

		luaL_error(L, "error in function mat4d, cannot match any of the overloads for function mat4d:\n  mat4d()\n  mat4d(double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double)\n  mat4d(const double *)\n  mat4d(const ork::mat3d &)\n  mat4d(const osg::Matrixd &)\n");
		return NULL;
	}


	// Function binds:
	// const double * ork::mat4d::coefficients() const
	static int _bind_coefficients(lua_State *L) {
		if (!_lg_typecheck_coefficients(L)) {
			luaL_error(L, "luna typecheck failed in const double * ork::mat4d::coefficients() const function, expected prototype:\nconst double * ork::mat4d::coefficients() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat4d* self=(Luna< ork::mat4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const double * ork::mat4d::coefficients() const. Got : '%s'\n%s",typeid(Luna< ork::mat4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const double * lret = self->coefficients();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// ork::mat4d ork::mat4d::transpose() const
	static int _bind_transpose(lua_State *L) {
		if (!_lg_typecheck_transpose(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d ork::mat4d::transpose() const function, expected prototype:\nork::mat4d ork::mat4d::transpose() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat4d* self=(Luna< ork::mat4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d ork::mat4d::transpose() const. Got : '%s'\n%s",typeid(Luna< ork::mat4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4d stack_lret = self->transpose();
		ork::mat4d* lret = new ork::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,true);

		return 1;
	}

	// ork::mat4d ork::mat4d::adjoint() const
	static int _bind_adjoint(lua_State *L) {
		if (!_lg_typecheck_adjoint(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d ork::mat4d::adjoint() const function, expected prototype:\nork::mat4d ork::mat4d::adjoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat4d* self=(Luna< ork::mat4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d ork::mat4d::adjoint() const. Got : '%s'\n%s",typeid(Luna< ork::mat4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4d stack_lret = self->adjoint();
		ork::mat4d* lret = new ork::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,true);

		return 1;
	}

	// ork::mat4d ork::mat4d::inverse() const
	static int _bind_inverse(lua_State *L) {
		if (!_lg_typecheck_inverse(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d ork::mat4d::inverse() const function, expected prototype:\nork::mat4d ork::mat4d::inverse() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat4d* self=(Luna< ork::mat4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d ork::mat4d::inverse() const. Got : '%s'\n%s",typeid(Luna< ork::mat4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4d stack_lret = self->inverse();
		ork::mat4d* lret = new ork::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,true);

		return 1;
	}

	// ork::mat3d ork::mat4d::mat3x3() const
	static int _bind_mat3x3(lua_State *L) {
		if (!_lg_typecheck_mat3x3(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat3d ork::mat4d::mat3x3() const function, expected prototype:\nork::mat3d ork::mat4d::mat3x3() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat4d* self=(Luna< ork::mat4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat3d ork::mat4d::mat3x3() const. Got : '%s'\n%s",typeid(Luna< ork::mat4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat3d stack_lret = self->mat3x3();
		ork::mat3d* lret = new ork::mat3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat3d >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd ork::mat4d::toMatrixd() const
	static int _bind_toMatrixd(lua_State *L) {
		if (!_lg_typecheck_toMatrixd(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd ork::mat4d::toMatrixd() const function, expected prototype:\nosg::Matrixd ork::mat4d::toMatrixd() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat4d* self=(Luna< ork::mat4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd ork::mat4d::toMatrixd() const. Got : '%s'\n%s",typeid(Luna< ork::mat4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->toMatrixd();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// void ork::mat4d::fromMatrixd(const osg::Matrixd & mat)
	static int _bind_fromMatrixd(lua_State *L) {
		if (!_lg_typecheck_fromMatrixd(L)) {
			luaL_error(L, "luna typecheck failed in void ork::mat4d::fromMatrixd(const osg::Matrixd & mat) function, expected prototype:\nvoid ork::mat4d::fromMatrixd(const osg::Matrixd & mat)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* mat_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in ork::mat4d::fromMatrixd function");
		}
		const osg::Matrixd & mat=*mat_ptr;

		ork::mat4d* self=(Luna< ork::mat4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::mat4d::fromMatrixd(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< ork::mat4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->fromMatrixd(mat);

		return 0;
	}

	// double ork::mat4d::determinant() const
	static int _bind_determinant(lua_State *L) {
		if (!_lg_typecheck_determinant(L)) {
			luaL_error(L, "luna typecheck failed in double ork::mat4d::determinant() const function, expected prototype:\ndouble ork::mat4d::determinant() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat4d* self=(Luna< ork::mat4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::mat4d::determinant() const. Got : '%s'\n%s",typeid(Luna< ork::mat4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->determinant();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static ork::mat4d ork::mat4d::translate(const ork::vec3d & v)
	static int _bind_translate(lua_State *L) {
		if (!_lg_typecheck_translate(L)) {
			luaL_error(L, "luna typecheck failed in static ork::mat4d ork::mat4d::translate(const ork::vec3d & v) function, expected prototype:\nstatic ork::mat4d ork::mat4d::translate(const ork::vec3d & v)\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* v_ptr=(Luna< ork::vec3d >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::mat4d::translate function");
		}
		const ork::vec3d & v=*v_ptr;

		ork::mat4d stack_lret = ork::mat4d::translate(v);
		ork::mat4d* lret = new ork::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,true);

		return 1;
	}

	// static ork::mat4d ork::mat4d::rotatex(double angle)
	static int _bind_rotatex(lua_State *L) {
		if (!_lg_typecheck_rotatex(L)) {
			luaL_error(L, "luna typecheck failed in static ork::mat4d ork::mat4d::rotatex(double angle) function, expected prototype:\nstatic ork::mat4d ork::mat4d::rotatex(double angle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle=(double)lua_tonumber(L,1);

		ork::mat4d stack_lret = ork::mat4d::rotatex(angle);
		ork::mat4d* lret = new ork::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,true);

		return 1;
	}

	// static ork::mat4d ork::mat4d::rotatey(double angle)
	static int _bind_rotatey(lua_State *L) {
		if (!_lg_typecheck_rotatey(L)) {
			luaL_error(L, "luna typecheck failed in static ork::mat4d ork::mat4d::rotatey(double angle) function, expected prototype:\nstatic ork::mat4d ork::mat4d::rotatey(double angle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle=(double)lua_tonumber(L,1);

		ork::mat4d stack_lret = ork::mat4d::rotatey(angle);
		ork::mat4d* lret = new ork::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,true);

		return 1;
	}

	// static ork::mat4d ork::mat4d::rotatez(double angle)
	static int _bind_rotatez(lua_State *L) {
		if (!_lg_typecheck_rotatez(L)) {
			luaL_error(L, "luna typecheck failed in static ork::mat4d ork::mat4d::rotatez(double angle) function, expected prototype:\nstatic ork::mat4d ork::mat4d::rotatez(double angle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle=(double)lua_tonumber(L,1);

		ork::mat4d stack_lret = ork::mat4d::rotatez(angle);
		ork::mat4d* lret = new ork::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,true);

		return 1;
	}

	// static ork::mat4d ork::mat4d::perspectiveProjection(double fovy, double aspect, double zNear, double zFar)
	static int _bind_perspectiveProjection(lua_State *L) {
		if (!_lg_typecheck_perspectiveProjection(L)) {
			luaL_error(L, "luna typecheck failed in static ork::mat4d ork::mat4d::perspectiveProjection(double fovy, double aspect, double zNear, double zFar) function, expected prototype:\nstatic ork::mat4d ork::mat4d::perspectiveProjection(double fovy, double aspect, double zNear, double zFar)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double fovy=(double)lua_tonumber(L,1);
		double aspect=(double)lua_tonumber(L,2);
		double zNear=(double)lua_tonumber(L,3);
		double zFar=(double)lua_tonumber(L,4);

		ork::mat4d stack_lret = ork::mat4d::perspectiveProjection(fovy, aspect, zNear, zFar);
		ork::mat4d* lret = new ork::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,true);

		return 1;
	}

	// static ork::mat4d ork::mat4d::orthoProjection(double xRight, double xLeft, double yTop, double yBottom, double zNear, double zFar)
	static int _bind_orthoProjection(lua_State *L) {
		if (!_lg_typecheck_orthoProjection(L)) {
			luaL_error(L, "luna typecheck failed in static ork::mat4d ork::mat4d::orthoProjection(double xRight, double xLeft, double yTop, double yBottom, double zNear, double zFar) function, expected prototype:\nstatic ork::mat4d ork::mat4d::orthoProjection(double xRight, double xLeft, double yTop, double yBottom, double zNear, double zFar)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double xRight=(double)lua_tonumber(L,1);
		double xLeft=(double)lua_tonumber(L,2);
		double yTop=(double)lua_tonumber(L,3);
		double yBottom=(double)lua_tonumber(L,4);
		double zNear=(double)lua_tonumber(L,5);
		double zFar=(double)lua_tonumber(L,6);

		ork::mat4d stack_lret = ork::mat4d::orthoProjection(xRight, xLeft, yTop, yBottom, zNear, zFar);
		ork::mat4d* lret = new ork::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,true);

		return 1;
	}


	// Operator binds:
	// const double * ork::mat4d::operator[](int iRow) const
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const double * ork::mat4d::operator[](int iRow) const function, expected prototype:\nconst double * ork::mat4d::operator[](int iRow) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int iRow=(int)lua_tointeger(L,2);

		ork::mat4d* self=(Luna< ork::mat4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const double * ork::mat4d::operator[](int) const. Got : '%s'\n%s",typeid(Luna< ork::mat4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const double * lret = self->operator[](iRow);
		lua_pushnumber(L,*lret);

		return 1;
	}

	// double * ork::mat4d::operator[](int iRow)
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double * ork::mat4d::operator[](int iRow) function, expected prototype:\ndouble * ork::mat4d::operator[](int iRow)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int iRow=(int)lua_tointeger(L,2);

		ork::mat4d* self=(Luna< ork::mat4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double * ork::mat4d::operator[](int). Got : '%s'\n%s",typeid(Luna< ork::mat4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double * lret = self->operator[](iRow);
		lua_pushnumber(L,*lret);

		return 1;
	}

	// Overload binder for ork::mat4d::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](int)\n  operator[](int)\n");
		return 0;
	}

	// void ork::mat4d::operator=(const ork::mat3d & m3)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in void ork::mat4d::operator=(const ork::mat3d & m3) function, expected prototype:\nvoid ork::mat4d::operator=(const ork::mat3d & m3)\nClass arguments details:\narg 1 ID = 72889753\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat3d* m3_ptr=(Luna< ork::mat3d >::check(L,2));
		if( !m3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3 in ork::mat4d::operator= function");
		}
		const ork::mat3d & m3=*m3_ptr;

		ork::mat4d* self=(Luna< ork::mat4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::mat4d::operator=(const ork::mat3d &). Got : '%s'\n%s",typeid(Luna< ork::mat4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator=(m3);

		return 0;
	}

	// bool ork::mat4d::operator==(const ork::mat4d & m2) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::mat4d::operator==(const ork::mat4d & m2) const function, expected prototype:\nbool ork::mat4d::operator==(const ork::mat4d & m2) const\nClass arguments details:\narg 1 ID = 72889784\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat4d* m2_ptr=(Luna< ork::mat4d >::check(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in ork::mat4d::operator== function");
		}
		const ork::mat4d & m2=*m2_ptr;

		ork::mat4d* self=(Luna< ork::mat4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::mat4d::operator==(const ork::mat4d &) const. Got : '%s'\n%s",typeid(Luna< ork::mat4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(m2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::mat4d::operator!=(const ork::mat4d & m2) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::mat4d::operator!=(const ork::mat4d & m2) const function, expected prototype:\nbool ork::mat4d::operator!=(const ork::mat4d & m2) const\nClass arguments details:\narg 1 ID = 72889784\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat4d* m2_ptr=(Luna< ork::mat4d >::check(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in ork::mat4d::operator!= function");
		}
		const ork::mat4d & m2=*m2_ptr;

		ork::mat4d* self=(Luna< ork::mat4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::mat4d::operator!=(const ork::mat4d &) const. Got : '%s'\n%s",typeid(Luna< ork::mat4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(m2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::mat4d ork::mat4d::operator+(const ork::mat4d & m2) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d ork::mat4d::operator+(const ork::mat4d & m2) const function, expected prototype:\nork::mat4d ork::mat4d::operator+(const ork::mat4d & m2) const\nClass arguments details:\narg 1 ID = 72889784\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat4d* m2_ptr=(Luna< ork::mat4d >::check(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in ork::mat4d::operator+ function");
		}
		const ork::mat4d & m2=*m2_ptr;

		ork::mat4d* self=(Luna< ork::mat4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d ork::mat4d::operator+(const ork::mat4d &) const. Got : '%s'\n%s",typeid(Luna< ork::mat4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4d stack_lret = self->operator+(m2);
		ork::mat4d* lret = new ork::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,true);

		return 1;
	}

	// ork::mat4d ork::mat4d::operator-(const ork::mat4d & m2) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d ork::mat4d::operator-(const ork::mat4d & m2) const function, expected prototype:\nork::mat4d ork::mat4d::operator-(const ork::mat4d & m2) const\nClass arguments details:\narg 1 ID = 72889784\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat4d* m2_ptr=(Luna< ork::mat4d >::check(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in ork::mat4d::operator- function");
		}
		const ork::mat4d & m2=*m2_ptr;

		ork::mat4d* self=(Luna< ork::mat4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d ork::mat4d::operator-(const ork::mat4d &) const. Got : '%s'\n%s",typeid(Luna< ork::mat4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4d stack_lret = self->operator-(m2);
		ork::mat4d* lret = new ork::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,true);

		return 1;
	}

	// ork::mat4d ork::mat4d::operator*(const ork::mat4d & m2) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d ork::mat4d::operator*(const ork::mat4d & m2) const function, expected prototype:\nork::mat4d ork::mat4d::operator*(const ork::mat4d & m2) const\nClass arguments details:\narg 1 ID = 72889784\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat4d* m2_ptr=(Luna< ork::mat4d >::check(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in ork::mat4d::operator* function");
		}
		const ork::mat4d & m2=*m2_ptr;

		ork::mat4d* self=(Luna< ork::mat4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d ork::mat4d::operator*(const ork::mat4d &) const. Got : '%s'\n%s",typeid(Luna< ork::mat4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4d stack_lret = self->operator*(m2);
		ork::mat4d* lret = new ork::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,true);

		return 1;
	}

	// ork::vec4d ork::mat4d::operator*(const ork::vec4d & v) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4d ork::mat4d::operator*(const ork::vec4d & v) const function, expected prototype:\nork::vec4d ork::mat4d::operator*(const ork::vec4d & v) const\nClass arguments details:\narg 1 ID = 81304300\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4d* v_ptr=(Luna< ork::vec4d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::mat4d::operator* function");
		}
		const ork::vec4d & v=*v_ptr;

		ork::mat4d* self=(Luna< ork::mat4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4d ork::mat4d::operator*(const ork::vec4d &) const. Got : '%s'\n%s",typeid(Luna< ork::mat4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4d stack_lret = self->operator*(v);
		ork::vec4d* lret = new ork::vec4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4d >::push(L,lret,true);

		return 1;
	}

	// ork::vec3d ork::mat4d::operator*(const ork::vec3d & v) const
	static int _bind___mul_overload_3(lua_State *L) {
		if (!_lg_typecheck___mul_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d ork::mat4d::operator*(const ork::vec3d & v) const function, expected prototype:\nork::vec3d ork::mat4d::operator*(const ork::vec3d & v) const\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* v_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::mat4d::operator* function");
		}
		const ork::vec3d & v=*v_ptr;

		ork::mat4d* self=(Luna< ork::mat4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d ork::mat4d::operator*(const ork::vec3d &) const. Got : '%s'\n%s",typeid(Luna< ork::mat4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->operator*(v);
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// ork::box3d ork::mat4d::operator*(const ork::box3d & b) const
	static int _bind___mul_overload_4(lua_State *L) {
		if (!_lg_typecheck___mul_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in ork::box3d ork::mat4d::operator*(const ork::box3d & b) const function, expected prototype:\nork::box3d ork::mat4d::operator*(const ork::box3d & b) const\nClass arguments details:\narg 1 ID = 63151940\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box3d* b_ptr=(Luna< ork::box3d >::check(L,2));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in ork::mat4d::operator* function");
		}
		const ork::box3d & b=*b_ptr;

		ork::mat4d* self=(Luna< ork::mat4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box3d ork::mat4d::operator*(const ork::box3d &) const. Got : '%s'\n%s",typeid(Luna< ork::mat4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box3d stack_lret = self->operator*(b);
		ork::box3d* lret = new ork::box3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box3d >::push(L,lret,true);

		return 1;
	}

	// ork::mat4d ork::mat4d::operator*(double f) const
	static int _bind___mul_overload_5(lua_State *L) {
		if (!_lg_typecheck___mul_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d ork::mat4d::operator*(double f) const function, expected prototype:\nork::mat4d ork::mat4d::operator*(double f) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double f=(double)lua_tonumber(L,2);

		ork::mat4d* self=(Luna< ork::mat4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d ork::mat4d::operator*(double) const. Got : '%s'\n%s",typeid(Luna< ork::mat4d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4d stack_lret = self->operator*(f);
		ork::mat4d* lret = new ork::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::mat4d::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);
		if (_lg_typecheck___mul_overload_3(L)) return _bind___mul_overload_3(L);
		if (_lg_typecheck___mul_overload_4(L)) return _bind___mul_overload_4(L);
		if (_lg_typecheck___mul_overload_5(L)) return _bind___mul_overload_5(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const ork::mat4d &)\n  operator*(const ork::vec4d &)\n  operator*(const ork::vec3d &)\n  operator*(const ork::box3d &)\n  operator*(double)\n");
		return 0;
	}


};

ork::mat4d* LunaTraits< ork::mat4d >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_mat4d::_bind_ctor(L);
}

void LunaTraits< ork::mat4d >::_bind_dtor(ork::mat4d* obj) {
	delete obj;
}

const char LunaTraits< ork::mat4d >::className[] = "mat4d";
const char LunaTraits< ork::mat4d >::fullName[] = "ork::mat4d";
const char LunaTraits< ork::mat4d >::moduleName[] = "ork";
const char* LunaTraits< ork::mat4d >::parents[] = {0};
const int LunaTraits< ork::mat4d >::hash = 72889784;
const int LunaTraits< ork::mat4d >::uniqueIDs[] = {72889784,0};

luna_RegType LunaTraits< ork::mat4d >::methods[] = {
	{"coefficients", &luna_wrapper_ork_mat4d::_bind_coefficients},
	{"transpose", &luna_wrapper_ork_mat4d::_bind_transpose},
	{"adjoint", &luna_wrapper_ork_mat4d::_bind_adjoint},
	{"inverse", &luna_wrapper_ork_mat4d::_bind_inverse},
	{"mat3x3", &luna_wrapper_ork_mat4d::_bind_mat3x3},
	{"toMatrixd", &luna_wrapper_ork_mat4d::_bind_toMatrixd},
	{"fromMatrixd", &luna_wrapper_ork_mat4d::_bind_fromMatrixd},
	{"determinant", &luna_wrapper_ork_mat4d::_bind_determinant},
	{"translate", &luna_wrapper_ork_mat4d::_bind_translate},
	{"rotatex", &luna_wrapper_ork_mat4d::_bind_rotatex},
	{"rotatey", &luna_wrapper_ork_mat4d::_bind_rotatey},
	{"rotatez", &luna_wrapper_ork_mat4d::_bind_rotatez},
	{"perspectiveProjection", &luna_wrapper_ork_mat4d::_bind_perspectiveProjection},
	{"orthoProjection", &luna_wrapper_ork_mat4d::_bind_orthoProjection},
	{"op_index", &luna_wrapper_ork_mat4d::_bind_op_index},
	{"op_assign", &luna_wrapper_ork_mat4d::_bind_op_assign},
	{"__eq", &luna_wrapper_ork_mat4d::_bind___eq},
	{"op_neq", &luna_wrapper_ork_mat4d::_bind_op_neq},
	{"__add", &luna_wrapper_ork_mat4d::_bind___add},
	{"__sub", &luna_wrapper_ork_mat4d::_bind___sub},
	{"__mul", &luna_wrapper_ork_mat4d::_bind___mul},
	{"dynCast", &luna_wrapper_ork_mat4d::_bind_dynCast},
	{"fromVoid", &luna_wrapper_ork_mat4d::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_mat4d::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::mat4d >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::mat4d >::enumValues[] = {
	{0,0}
};


