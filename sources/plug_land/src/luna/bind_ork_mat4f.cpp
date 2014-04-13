#include <plug_common.h>

class luna_wrapper_ork_mat4f {
public:
	typedef Luna< ork::mat4f > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::mat4f* self= (ork::mat4f*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::mat4f >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72889786) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::mat4f >::check(L,1));
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

		ork::mat4f* self=(Luna< ork::mat4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::mat4f");
		
		return luna_dynamicCast(L,converters,"ork::mat4f",name);
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

		if( !Luna<void>::has_uniqueid(L,1,72889755) ) return false;
		if( (!(Luna< ork::mat3f >::check(L,1))) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,1,81304271) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,72889755) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889786) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889786) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889786) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889786) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889786) ) return false;
		if( (!(Luna< ork::mat4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304302) ) return false;
		if( (!(Luna< ork::vec4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304271) ) return false;
		if( (!(Luna< ork::vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151942) ) return false;
		if( (!(Luna< ork::box3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Constructor binds:
	// ork::mat4f::mat4f()
	static ork::mat4f* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4f::mat4f() function, expected prototype:\nork::mat4f::mat4f()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::mat4f();
	}

	// ork::mat4f::mat4f(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float m30, float m31, float m32, float m33)
	static ork::mat4f* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4f::mat4f(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float m30, float m31, float m32, float m33) function, expected prototype:\nork::mat4f::mat4f(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float m30, float m31, float m32, float m33)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float m00=(float)lua_tonumber(L,1);
		float m01=(float)lua_tonumber(L,2);
		float m02=(float)lua_tonumber(L,3);
		float m03=(float)lua_tonumber(L,4);
		float m10=(float)lua_tonumber(L,5);
		float m11=(float)lua_tonumber(L,6);
		float m12=(float)lua_tonumber(L,7);
		float m13=(float)lua_tonumber(L,8);
		float m20=(float)lua_tonumber(L,9);
		float m21=(float)lua_tonumber(L,10);
		float m22=(float)lua_tonumber(L,11);
		float m23=(float)lua_tonumber(L,12);
		float m30=(float)lua_tonumber(L,13);
		float m31=(float)lua_tonumber(L,14);
		float m32=(float)lua_tonumber(L,15);
		float m33=(float)lua_tonumber(L,16);

		return new ork::mat4f(m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23, m30, m31, m32, m33);
	}

	// ork::mat4f::mat4f(const float * array)
	static ork::mat4f* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4f::mat4f(const float * array) function, expected prototype:\nork::mat4f::mat4f(const float * array)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const float* array=(const float*)Luna< void >::check(L,1);

		return new ork::mat4f(array);
	}

	// ork::mat4f::mat4f(const ork::mat3f & m3x3)
	static ork::mat4f* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4f::mat4f(const ork::mat3f & m3x3) function, expected prototype:\nork::mat4f::mat4f(const ork::mat3f & m3x3)\nClass arguments details:\narg 1 ID = 72889755\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat3f* m3x3_ptr=(Luna< ork::mat3f >::check(L,1));
		if( !m3x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x3 in ork::mat4f::mat4f function");
		}
		const ork::mat3f & m3x3=*m3x3_ptr;

		return new ork::mat4f(m3x3);
	}

	// ork::mat4f::mat4f(const osg::Matrixd & mat)
	static ork::mat4f* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4f::mat4f(const osg::Matrixd & mat) function, expected prototype:\nork::mat4f::mat4f(const osg::Matrixd & mat)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* mat_ptr=(Luna< osg::Matrixd >::check(L,1));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in ork::mat4f::mat4f function");
		}
		const osg::Matrixd & mat=*mat_ptr;

		return new ork::mat4f(mat);
	}

	// Overload binder for ork::mat4f::mat4f
	static ork::mat4f* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);

		luaL_error(L, "error in function mat4f, cannot match any of the overloads for function mat4f:\n  mat4f()\n  mat4f(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float)\n  mat4f(const float *)\n  mat4f(const ork::mat3f &)\n  mat4f(const osg::Matrixd &)\n");
		return NULL;
	}


	// Function binds:
	// const float * ork::mat4f::coefficients() const
	static int _bind_coefficients(lua_State *L) {
		if (!_lg_typecheck_coefficients(L)) {
			luaL_error(L, "luna typecheck failed in const float * ork::mat4f::coefficients() const function, expected prototype:\nconst float * ork::mat4f::coefficients() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat4f* self=(Luna< ork::mat4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const float * ork::mat4f::coefficients() const. Got : '%s'\n%s",typeid(Luna< ork::mat4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const float * lret = self->coefficients();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// ork::mat4f ork::mat4f::transpose() const
	static int _bind_transpose(lua_State *L) {
		if (!_lg_typecheck_transpose(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4f ork::mat4f::transpose() const function, expected prototype:\nork::mat4f ork::mat4f::transpose() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat4f* self=(Luna< ork::mat4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4f ork::mat4f::transpose() const. Got : '%s'\n%s",typeid(Luna< ork::mat4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4f stack_lret = self->transpose();
		ork::mat4f* lret = new ork::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4f >::push(L,lret,true);

		return 1;
	}

	// ork::mat4f ork::mat4f::adjoint() const
	static int _bind_adjoint(lua_State *L) {
		if (!_lg_typecheck_adjoint(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4f ork::mat4f::adjoint() const function, expected prototype:\nork::mat4f ork::mat4f::adjoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat4f* self=(Luna< ork::mat4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4f ork::mat4f::adjoint() const. Got : '%s'\n%s",typeid(Luna< ork::mat4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4f stack_lret = self->adjoint();
		ork::mat4f* lret = new ork::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4f >::push(L,lret,true);

		return 1;
	}

	// ork::mat4f ork::mat4f::inverse() const
	static int _bind_inverse(lua_State *L) {
		if (!_lg_typecheck_inverse(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4f ork::mat4f::inverse() const function, expected prototype:\nork::mat4f ork::mat4f::inverse() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat4f* self=(Luna< ork::mat4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4f ork::mat4f::inverse() const. Got : '%s'\n%s",typeid(Luna< ork::mat4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4f stack_lret = self->inverse();
		ork::mat4f* lret = new ork::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4f >::push(L,lret,true);

		return 1;
	}

	// ork::mat3f ork::mat4f::mat3x3() const
	static int _bind_mat3x3(lua_State *L) {
		if (!_lg_typecheck_mat3x3(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat3f ork::mat4f::mat3x3() const function, expected prototype:\nork::mat3f ork::mat4f::mat3x3() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat4f* self=(Luna< ork::mat4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat3f ork::mat4f::mat3x3() const. Got : '%s'\n%s",typeid(Luna< ork::mat4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat3f stack_lret = self->mat3x3();
		ork::mat3f* lret = new ork::mat3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat3f >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd ork::mat4f::toMatrixd() const
	static int _bind_toMatrixd(lua_State *L) {
		if (!_lg_typecheck_toMatrixd(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd ork::mat4f::toMatrixd() const function, expected prototype:\nosg::Matrixd ork::mat4f::toMatrixd() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat4f* self=(Luna< ork::mat4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd ork::mat4f::toMatrixd() const. Got : '%s'\n%s",typeid(Luna< ork::mat4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->toMatrixd();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// void ork::mat4f::fromMatrixd(const osg::Matrixd & mat)
	static int _bind_fromMatrixd(lua_State *L) {
		if (!_lg_typecheck_fromMatrixd(L)) {
			luaL_error(L, "luna typecheck failed in void ork::mat4f::fromMatrixd(const osg::Matrixd & mat) function, expected prototype:\nvoid ork::mat4f::fromMatrixd(const osg::Matrixd & mat)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* mat_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in ork::mat4f::fromMatrixd function");
		}
		const osg::Matrixd & mat=*mat_ptr;

		ork::mat4f* self=(Luna< ork::mat4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::mat4f::fromMatrixd(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< ork::mat4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->fromMatrixd(mat);

		return 0;
	}

	// float ork::mat4f::determinant() const
	static int _bind_determinant(lua_State *L) {
		if (!_lg_typecheck_determinant(L)) {
			luaL_error(L, "luna typecheck failed in float ork::mat4f::determinant() const function, expected prototype:\nfloat ork::mat4f::determinant() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat4f* self=(Luna< ork::mat4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::mat4f::determinant() const. Got : '%s'\n%s",typeid(Luna< ork::mat4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->determinant();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static ork::mat4f ork::mat4f::translate(const ork::vec3f & v)
	static int _bind_translate(lua_State *L) {
		if (!_lg_typecheck_translate(L)) {
			luaL_error(L, "luna typecheck failed in static ork::mat4f ork::mat4f::translate(const ork::vec3f & v) function, expected prototype:\nstatic ork::mat4f ork::mat4f::translate(const ork::vec3f & v)\nClass arguments details:\narg 1 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3f* v_ptr=(Luna< ork::vec3f >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::mat4f::translate function");
		}
		const ork::vec3f & v=*v_ptr;

		ork::mat4f stack_lret = ork::mat4f::translate(v);
		ork::mat4f* lret = new ork::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4f >::push(L,lret,true);

		return 1;
	}

	// static ork::mat4f ork::mat4f::rotatex(float angle)
	static int _bind_rotatex(lua_State *L) {
		if (!_lg_typecheck_rotatex(L)) {
			luaL_error(L, "luna typecheck failed in static ork::mat4f ork::mat4f::rotatex(float angle) function, expected prototype:\nstatic ork::mat4f ork::mat4f::rotatex(float angle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float angle=(float)lua_tonumber(L,1);

		ork::mat4f stack_lret = ork::mat4f::rotatex(angle);
		ork::mat4f* lret = new ork::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4f >::push(L,lret,true);

		return 1;
	}

	// static ork::mat4f ork::mat4f::rotatey(float angle)
	static int _bind_rotatey(lua_State *L) {
		if (!_lg_typecheck_rotatey(L)) {
			luaL_error(L, "luna typecheck failed in static ork::mat4f ork::mat4f::rotatey(float angle) function, expected prototype:\nstatic ork::mat4f ork::mat4f::rotatey(float angle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float angle=(float)lua_tonumber(L,1);

		ork::mat4f stack_lret = ork::mat4f::rotatey(angle);
		ork::mat4f* lret = new ork::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4f >::push(L,lret,true);

		return 1;
	}

	// static ork::mat4f ork::mat4f::rotatez(float angle)
	static int _bind_rotatez(lua_State *L) {
		if (!_lg_typecheck_rotatez(L)) {
			luaL_error(L, "luna typecheck failed in static ork::mat4f ork::mat4f::rotatez(float angle) function, expected prototype:\nstatic ork::mat4f ork::mat4f::rotatez(float angle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float angle=(float)lua_tonumber(L,1);

		ork::mat4f stack_lret = ork::mat4f::rotatez(angle);
		ork::mat4f* lret = new ork::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4f >::push(L,lret,true);

		return 1;
	}

	// static ork::mat4f ork::mat4f::perspectiveProjection(float fovy, float aspect, float zNear, float zFar)
	static int _bind_perspectiveProjection(lua_State *L) {
		if (!_lg_typecheck_perspectiveProjection(L)) {
			luaL_error(L, "luna typecheck failed in static ork::mat4f ork::mat4f::perspectiveProjection(float fovy, float aspect, float zNear, float zFar) function, expected prototype:\nstatic ork::mat4f ork::mat4f::perspectiveProjection(float fovy, float aspect, float zNear, float zFar)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float fovy=(float)lua_tonumber(L,1);
		float aspect=(float)lua_tonumber(L,2);
		float zNear=(float)lua_tonumber(L,3);
		float zFar=(float)lua_tonumber(L,4);

		ork::mat4f stack_lret = ork::mat4f::perspectiveProjection(fovy, aspect, zNear, zFar);
		ork::mat4f* lret = new ork::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4f >::push(L,lret,true);

		return 1;
	}

	// static ork::mat4f ork::mat4f::orthoProjection(float xRight, float xLeft, float yTop, float yBottom, float zNear, float zFar)
	static int _bind_orthoProjection(lua_State *L) {
		if (!_lg_typecheck_orthoProjection(L)) {
			luaL_error(L, "luna typecheck failed in static ork::mat4f ork::mat4f::orthoProjection(float xRight, float xLeft, float yTop, float yBottom, float zNear, float zFar) function, expected prototype:\nstatic ork::mat4f ork::mat4f::orthoProjection(float xRight, float xLeft, float yTop, float yBottom, float zNear, float zFar)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float xRight=(float)lua_tonumber(L,1);
		float xLeft=(float)lua_tonumber(L,2);
		float yTop=(float)lua_tonumber(L,3);
		float yBottom=(float)lua_tonumber(L,4);
		float zNear=(float)lua_tonumber(L,5);
		float zFar=(float)lua_tonumber(L,6);

		ork::mat4f stack_lret = ork::mat4f::orthoProjection(xRight, xLeft, yTop, yBottom, zNear, zFar);
		ork::mat4f* lret = new ork::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4f >::push(L,lret,true);

		return 1;
	}


	// Operator binds:
	// const float * ork::mat4f::operator[](int iRow) const
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const float * ork::mat4f::operator[](int iRow) const function, expected prototype:\nconst float * ork::mat4f::operator[](int iRow) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int iRow=(int)lua_tointeger(L,2);

		ork::mat4f* self=(Luna< ork::mat4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const float * ork::mat4f::operator[](int) const. Got : '%s'\n%s",typeid(Luna< ork::mat4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const float * lret = self->operator[](iRow);
		lua_pushnumber(L,*lret);

		return 1;
	}

	// float * ork::mat4f::operator[](int iRow)
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in float * ork::mat4f::operator[](int iRow) function, expected prototype:\nfloat * ork::mat4f::operator[](int iRow)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int iRow=(int)lua_tointeger(L,2);

		ork::mat4f* self=(Luna< ork::mat4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float * ork::mat4f::operator[](int). Got : '%s'\n%s",typeid(Luna< ork::mat4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float * lret = self->operator[](iRow);
		lua_pushnumber(L,*lret);

		return 1;
	}

	// Overload binder for ork::mat4f::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](int)\n  operator[](int)\n");
		return 0;
	}

	// void ork::mat4f::operator=(const ork::mat3f & m3)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in void ork::mat4f::operator=(const ork::mat3f & m3) function, expected prototype:\nvoid ork::mat4f::operator=(const ork::mat3f & m3)\nClass arguments details:\narg 1 ID = 72889755\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat3f* m3_ptr=(Luna< ork::mat3f >::check(L,2));
		if( !m3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3 in ork::mat4f::operator= function");
		}
		const ork::mat3f & m3=*m3_ptr;

		ork::mat4f* self=(Luna< ork::mat4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::mat4f::operator=(const ork::mat3f &). Got : '%s'\n%s",typeid(Luna< ork::mat4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator=(m3);

		return 0;
	}

	// bool ork::mat4f::operator==(const ork::mat4f & m2) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::mat4f::operator==(const ork::mat4f & m2) const function, expected prototype:\nbool ork::mat4f::operator==(const ork::mat4f & m2) const\nClass arguments details:\narg 1 ID = 72889786\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat4f* m2_ptr=(Luna< ork::mat4f >::check(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in ork::mat4f::operator== function");
		}
		const ork::mat4f & m2=*m2_ptr;

		ork::mat4f* self=(Luna< ork::mat4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::mat4f::operator==(const ork::mat4f &) const. Got : '%s'\n%s",typeid(Luna< ork::mat4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(m2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::mat4f::operator!=(const ork::mat4f & m2) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::mat4f::operator!=(const ork::mat4f & m2) const function, expected prototype:\nbool ork::mat4f::operator!=(const ork::mat4f & m2) const\nClass arguments details:\narg 1 ID = 72889786\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat4f* m2_ptr=(Luna< ork::mat4f >::check(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in ork::mat4f::operator!= function");
		}
		const ork::mat4f & m2=*m2_ptr;

		ork::mat4f* self=(Luna< ork::mat4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::mat4f::operator!=(const ork::mat4f &) const. Got : '%s'\n%s",typeid(Luna< ork::mat4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(m2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::mat4f ork::mat4f::operator+(const ork::mat4f & m2) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4f ork::mat4f::operator+(const ork::mat4f & m2) const function, expected prototype:\nork::mat4f ork::mat4f::operator+(const ork::mat4f & m2) const\nClass arguments details:\narg 1 ID = 72889786\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat4f* m2_ptr=(Luna< ork::mat4f >::check(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in ork::mat4f::operator+ function");
		}
		const ork::mat4f & m2=*m2_ptr;

		ork::mat4f* self=(Luna< ork::mat4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4f ork::mat4f::operator+(const ork::mat4f &) const. Got : '%s'\n%s",typeid(Luna< ork::mat4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4f stack_lret = self->operator+(m2);
		ork::mat4f* lret = new ork::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4f >::push(L,lret,true);

		return 1;
	}

	// ork::mat4f ork::mat4f::operator-(const ork::mat4f & m2) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4f ork::mat4f::operator-(const ork::mat4f & m2) const function, expected prototype:\nork::mat4f ork::mat4f::operator-(const ork::mat4f & m2) const\nClass arguments details:\narg 1 ID = 72889786\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat4f* m2_ptr=(Luna< ork::mat4f >::check(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in ork::mat4f::operator- function");
		}
		const ork::mat4f & m2=*m2_ptr;

		ork::mat4f* self=(Luna< ork::mat4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4f ork::mat4f::operator-(const ork::mat4f &) const. Got : '%s'\n%s",typeid(Luna< ork::mat4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4f stack_lret = self->operator-(m2);
		ork::mat4f* lret = new ork::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4f >::push(L,lret,true);

		return 1;
	}

	// ork::mat4f ork::mat4f::operator*(const ork::mat4f & m2) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4f ork::mat4f::operator*(const ork::mat4f & m2) const function, expected prototype:\nork::mat4f ork::mat4f::operator*(const ork::mat4f & m2) const\nClass arguments details:\narg 1 ID = 72889786\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat4f* m2_ptr=(Luna< ork::mat4f >::check(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in ork::mat4f::operator* function");
		}
		const ork::mat4f & m2=*m2_ptr;

		ork::mat4f* self=(Luna< ork::mat4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4f ork::mat4f::operator*(const ork::mat4f &) const. Got : '%s'\n%s",typeid(Luna< ork::mat4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4f stack_lret = self->operator*(m2);
		ork::mat4f* lret = new ork::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4f >::push(L,lret,true);

		return 1;
	}

	// ork::vec4f ork::mat4f::operator*(const ork::vec4f & v) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f ork::mat4f::operator*(const ork::vec4f & v) const function, expected prototype:\nork::vec4f ork::mat4f::operator*(const ork::vec4f & v) const\nClass arguments details:\narg 1 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4f* v_ptr=(Luna< ork::vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::mat4f::operator* function");
		}
		const ork::vec4f & v=*v_ptr;

		ork::mat4f* self=(Luna< ork::mat4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4f ork::mat4f::operator*(const ork::vec4f &) const. Got : '%s'\n%s",typeid(Luna< ork::mat4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4f stack_lret = self->operator*(v);
		ork::vec4f* lret = new ork::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4f >::push(L,lret,true);

		return 1;
	}

	// ork::vec3f ork::mat4f::operator*(const ork::vec3f & v) const
	static int _bind___mul_overload_3(lua_State *L) {
		if (!_lg_typecheck___mul_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3f ork::mat4f::operator*(const ork::vec3f & v) const function, expected prototype:\nork::vec3f ork::mat4f::operator*(const ork::vec3f & v) const\nClass arguments details:\narg 1 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3f* v_ptr=(Luna< ork::vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::mat4f::operator* function");
		}
		const ork::vec3f & v=*v_ptr;

		ork::mat4f* self=(Luna< ork::mat4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3f ork::mat4f::operator*(const ork::vec3f &) const. Got : '%s'\n%s",typeid(Luna< ork::mat4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3f stack_lret = self->operator*(v);
		ork::vec3f* lret = new ork::vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3f >::push(L,lret,true);

		return 1;
	}

	// ork::box3f ork::mat4f::operator*(const ork::box3f & b) const
	static int _bind___mul_overload_4(lua_State *L) {
		if (!_lg_typecheck___mul_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in ork::box3f ork::mat4f::operator*(const ork::box3f & b) const function, expected prototype:\nork::box3f ork::mat4f::operator*(const ork::box3f & b) const\nClass arguments details:\narg 1 ID = 63151942\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box3f* b_ptr=(Luna< ork::box3f >::check(L,2));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in ork::mat4f::operator* function");
		}
		const ork::box3f & b=*b_ptr;

		ork::mat4f* self=(Luna< ork::mat4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box3f ork::mat4f::operator*(const ork::box3f &) const. Got : '%s'\n%s",typeid(Luna< ork::mat4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box3f stack_lret = self->operator*(b);
		ork::box3f* lret = new ork::box3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box3f >::push(L,lret,true);

		return 1;
	}

	// ork::mat4f ork::mat4f::operator*(float f) const
	static int _bind___mul_overload_5(lua_State *L) {
		if (!_lg_typecheck___mul_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4f ork::mat4f::operator*(float f) const function, expected prototype:\nork::mat4f ork::mat4f::operator*(float f) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float f=(float)lua_tonumber(L,2);

		ork::mat4f* self=(Luna< ork::mat4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4f ork::mat4f::operator*(float) const. Got : '%s'\n%s",typeid(Luna< ork::mat4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4f stack_lret = self->operator*(f);
		ork::mat4f* lret = new ork::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::mat4f::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);
		if (_lg_typecheck___mul_overload_3(L)) return _bind___mul_overload_3(L);
		if (_lg_typecheck___mul_overload_4(L)) return _bind___mul_overload_4(L);
		if (_lg_typecheck___mul_overload_5(L)) return _bind___mul_overload_5(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const ork::mat4f &)\n  operator*(const ork::vec4f &)\n  operator*(const ork::vec3f &)\n  operator*(const ork::box3f &)\n  operator*(float)\n");
		return 0;
	}


};

ork::mat4f* LunaTraits< ork::mat4f >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_mat4f::_bind_ctor(L);
}

void LunaTraits< ork::mat4f >::_bind_dtor(ork::mat4f* obj) {
	delete obj;
}

const char LunaTraits< ork::mat4f >::className[] = "mat4f";
const char LunaTraits< ork::mat4f >::fullName[] = "ork::mat4f";
const char LunaTraits< ork::mat4f >::moduleName[] = "ork";
const char* LunaTraits< ork::mat4f >::parents[] = {0};
const int LunaTraits< ork::mat4f >::hash = 72889786;
const int LunaTraits< ork::mat4f >::uniqueIDs[] = {72889786,0};

luna_RegType LunaTraits< ork::mat4f >::methods[] = {
	{"coefficients", &luna_wrapper_ork_mat4f::_bind_coefficients},
	{"transpose", &luna_wrapper_ork_mat4f::_bind_transpose},
	{"adjoint", &luna_wrapper_ork_mat4f::_bind_adjoint},
	{"inverse", &luna_wrapper_ork_mat4f::_bind_inverse},
	{"mat3x3", &luna_wrapper_ork_mat4f::_bind_mat3x3},
	{"toMatrixd", &luna_wrapper_ork_mat4f::_bind_toMatrixd},
	{"fromMatrixd", &luna_wrapper_ork_mat4f::_bind_fromMatrixd},
	{"determinant", &luna_wrapper_ork_mat4f::_bind_determinant},
	{"translate", &luna_wrapper_ork_mat4f::_bind_translate},
	{"rotatex", &luna_wrapper_ork_mat4f::_bind_rotatex},
	{"rotatey", &luna_wrapper_ork_mat4f::_bind_rotatey},
	{"rotatez", &luna_wrapper_ork_mat4f::_bind_rotatez},
	{"perspectiveProjection", &luna_wrapper_ork_mat4f::_bind_perspectiveProjection},
	{"orthoProjection", &luna_wrapper_ork_mat4f::_bind_orthoProjection},
	{"op_index", &luna_wrapper_ork_mat4f::_bind_op_index},
	{"op_assign", &luna_wrapper_ork_mat4f::_bind_op_assign},
	{"__eq", &luna_wrapper_ork_mat4f::_bind___eq},
	{"op_neq", &luna_wrapper_ork_mat4f::_bind_op_neq},
	{"__add", &luna_wrapper_ork_mat4f::_bind___add},
	{"__sub", &luna_wrapper_ork_mat4f::_bind___sub},
	{"__mul", &luna_wrapper_ork_mat4f::_bind___mul},
	{"dynCast", &luna_wrapper_ork_mat4f::_bind_dynCast},
	{"fromVoid", &luna_wrapper_ork_mat4f::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_mat4f::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::mat4f >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::mat4f >::enumValues[] = {
	{0,0}
};


