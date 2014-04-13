#include <plug_common.h>

class luna_wrapper_ork_mat2d {
public:
	typedef Luna< ork::mat2d > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::mat2d* self= (ork::mat2d*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::mat2d >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72889722) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::mat2d >::check(L,1));
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

		ork::mat2d* self=(Luna< ork::mat2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::mat2d");
		
		return luna_dynamicCast(L,converters,"ork::mat2d",name);
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

		if( !Luna<void>::has_uniqueid(L,1,72889722) ) return false;
		if( (!(Luna< ork::mat2d >::check(L,1))) ) return false;
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
		if( !Luna<void>::has_uniqueid(L,3,81304238) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_transpose(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_inverse_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889722) ) return false;
		if( (!(Luna< ork::mat2d >::check(L,2))) ) return false;
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
	// (found 10 valid operators)
	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889722) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889722) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889722) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889722) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889722) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889722) ) return false;
		if( (!(Luna< ork::mat2d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		return true;
	}


	// Constructor binds:
	// ork::mat2d::mat2d()
	static ork::mat2d* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat2d::mat2d() function, expected prototype:\nork::mat2d::mat2d()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::mat2d();
	}

	// ork::mat2d::mat2d(double m00, double m01, double m10, double m11)
	static ork::mat2d* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat2d::mat2d(double m00, double m01, double m10, double m11) function, expected prototype:\nork::mat2d::mat2d(double m00, double m01, double m10, double m11)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double m00=(double)lua_tonumber(L,1);
		double m01=(double)lua_tonumber(L,2);
		double m10=(double)lua_tonumber(L,3);
		double m11=(double)lua_tonumber(L,4);

		return new ork::mat2d(m00, m01, m10, m11);
	}

	// ork::mat2d::mat2d(const ork::mat2d & mat)
	static ork::mat2d* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat2d::mat2d(const ork::mat2d & mat) function, expected prototype:\nork::mat2d::mat2d(const ork::mat2d & mat)\nClass arguments details:\narg 1 ID = 72889722\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat2d* mat_ptr=(Luna< ork::mat2d >::check(L,1));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in ork::mat2d::mat2d function");
		}
		const ork::mat2d & mat=*mat_ptr;

		return new ork::mat2d(mat);
	}

	// Overload binder for ork::mat2d::mat2d
	static ork::mat2d* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function mat2d, cannot match any of the overloads for function mat2d:\n  mat2d()\n  mat2d(double, double, double, double)\n  mat2d(const ork::mat2d &)\n");
		return NULL;
	}


	// Function binds:
	// const double * ork::mat2d::coefficients() const
	static int _bind_coefficients(lua_State *L) {
		if (!_lg_typecheck_coefficients(L)) {
			luaL_error(L, "luna typecheck failed in const double * ork::mat2d::coefficients() const function, expected prototype:\nconst double * ork::mat2d::coefficients() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat2d* self=(Luna< ork::mat2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const double * ork::mat2d::coefficients() const. Got : '%s'\n%s",typeid(Luna< ork::mat2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const double * lret = self->coefficients();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// ork::vec2d ork::mat2d::getColumn(int iCol) const
	static int _bind_getColumn(lua_State *L) {
		if (!_lg_typecheck_getColumn(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2d ork::mat2d::getColumn(int iCol) const function, expected prototype:\nork::vec2d ork::mat2d::getColumn(int iCol) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int iCol=(int)lua_tointeger(L,2);

		ork::mat2d* self=(Luna< ork::mat2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2d ork::mat2d::getColumn(int) const. Got : '%s'\n%s",typeid(Luna< ork::mat2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2d stack_lret = self->getColumn(iCol);
		ork::vec2d* lret = new ork::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2d >::push(L,lret,true);

		return 1;
	}

	// void ork::mat2d::setColumn(int iCol, const ork::vec2d & v)
	static int _bind_setColumn(lua_State *L) {
		if (!_lg_typecheck_setColumn(L)) {
			luaL_error(L, "luna typecheck failed in void ork::mat2d::setColumn(int iCol, const ork::vec2d & v) function, expected prototype:\nvoid ork::mat2d::setColumn(int iCol, const ork::vec2d & v)\nClass arguments details:\narg 2 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		int iCol=(int)lua_tointeger(L,2);
		const ork::vec2d* v_ptr=(Luna< ork::vec2d >::check(L,3));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::mat2d::setColumn function");
		}
		const ork::vec2d & v=*v_ptr;

		ork::mat2d* self=(Luna< ork::mat2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::mat2d::setColumn(int, const ork::vec2d &). Got : '%s'\n%s",typeid(Luna< ork::mat2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColumn(iCol, v);

		return 0;
	}

	// ork::mat2d ork::mat2d::transpose() const
	static int _bind_transpose(lua_State *L) {
		if (!_lg_typecheck_transpose(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat2d ork::mat2d::transpose() const function, expected prototype:\nork::mat2d ork::mat2d::transpose() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat2d* self=(Luna< ork::mat2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat2d ork::mat2d::transpose() const. Got : '%s'\n%s",typeid(Luna< ork::mat2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat2d stack_lret = self->transpose();
		ork::mat2d* lret = new ork::mat2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat2d >::push(L,lret,true);

		return 1;
	}

	// bool ork::mat2d::inverse(ork::mat2d & mInv, double tolerance = 1e-06) const
	static int _bind_inverse_overload_1(lua_State *L) {
		if (!_lg_typecheck_inverse_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::mat2d::inverse(ork::mat2d & mInv, double tolerance = 1e-06) const function, expected prototype:\nbool ork::mat2d::inverse(ork::mat2d & mInv, double tolerance = 1e-06) const\nClass arguments details:\narg 1 ID = 72889722\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::mat2d* mInv_ptr=(Luna< ork::mat2d >::check(L,2));
		if( !mInv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mInv in ork::mat2d::inverse function");
		}
		ork::mat2d & mInv=*mInv_ptr;
		double tolerance=luatop>2 ? (double)lua_tonumber(L,3) : (double)1e-06;

		ork::mat2d* self=(Luna< ork::mat2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::mat2d::inverse(ork::mat2d &, double) const. Got : '%s'\n%s",typeid(Luna< ork::mat2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->inverse(mInv, tolerance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::mat2d ork::mat2d::inverse(double tolerance = 1e-06) const
	static int _bind_inverse_overload_2(lua_State *L) {
		if (!_lg_typecheck_inverse_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat2d ork::mat2d::inverse(double tolerance = 1e-06) const function, expected prototype:\nork::mat2d ork::mat2d::inverse(double tolerance = 1e-06) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double tolerance=luatop>1 ? (double)lua_tonumber(L,2) : (double)1e-06;

		ork::mat2d* self=(Luna< ork::mat2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat2d ork::mat2d::inverse(double) const. Got : '%s'\n%s",typeid(Luna< ork::mat2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat2d stack_lret = self->inverse(tolerance);
		ork::mat2d* lret = new ork::mat2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat2d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::mat2d::inverse
	static int _bind_inverse(lua_State *L) {
		if (_lg_typecheck_inverse_overload_1(L)) return _bind_inverse_overload_1(L);
		if (_lg_typecheck_inverse_overload_2(L)) return _bind_inverse_overload_2(L);

		luaL_error(L, "error in function inverse, cannot match any of the overloads for function inverse:\n  inverse(ork::mat2d &, double)\n  inverse(double)\n");
		return 0;
	}

	// double ork::mat2d::determinant() const
	static int _bind_determinant(lua_State *L) {
		if (!_lg_typecheck_determinant(L)) {
			luaL_error(L, "luna typecheck failed in double ork::mat2d::determinant() const function, expected prototype:\ndouble ork::mat2d::determinant() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat2d* self=(Luna< ork::mat2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::mat2d::determinant() const. Got : '%s'\n%s",typeid(Luna< ork::mat2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->determinant();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::mat2d::trace() const
	static int _bind_trace(lua_State *L) {
		if (!_lg_typecheck_trace(L)) {
			luaL_error(L, "luna typecheck failed in double ork::mat2d::trace() const function, expected prototype:\ndouble ork::mat2d::trace() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat2d* self=(Luna< ork::mat2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::mat2d::trace() const. Got : '%s'\n%s",typeid(Luna< ork::mat2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->trace();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// double * ork::mat2d::operator[](int iRow)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luaL_error(L, "luna typecheck failed in double * ork::mat2d::operator[](int iRow) function, expected prototype:\ndouble * ork::mat2d::operator[](int iRow)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int iRow=(int)lua_tointeger(L,2);

		ork::mat2d* self=(Luna< ork::mat2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double * ork::mat2d::operator[](int). Got : '%s'\n%s",typeid(Luna< ork::mat2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double * lret = self->operator[](iRow);
		lua_pushnumber(L,*lret);

		return 1;
	}

	// ork::mat2d & ork::mat2d::operator=(const ork::mat2d & mat)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat2d & ork::mat2d::operator=(const ork::mat2d & mat) function, expected prototype:\nork::mat2d & ork::mat2d::operator=(const ork::mat2d & mat)\nClass arguments details:\narg 1 ID = 72889722\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat2d* mat_ptr=(Luna< ork::mat2d >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in ork::mat2d::operator= function");
		}
		const ork::mat2d & mat=*mat_ptr;

		ork::mat2d* self=(Luna< ork::mat2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat2d & ork::mat2d::operator=(const ork::mat2d &). Got : '%s'\n%s",typeid(Luna< ork::mat2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::mat2d* lret = &self->operator=(mat);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat2d >::push(L,lret,false);

		return 1;
	}

	// bool ork::mat2d::operator==(const ork::mat2d & mat) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::mat2d::operator==(const ork::mat2d & mat) const function, expected prototype:\nbool ork::mat2d::operator==(const ork::mat2d & mat) const\nClass arguments details:\narg 1 ID = 72889722\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat2d* mat_ptr=(Luna< ork::mat2d >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in ork::mat2d::operator== function");
		}
		const ork::mat2d & mat=*mat_ptr;

		ork::mat2d* self=(Luna< ork::mat2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::mat2d::operator==(const ork::mat2d &) const. Got : '%s'\n%s",typeid(Luna< ork::mat2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(mat);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::mat2d::operator!=(const ork::mat2d & mat) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::mat2d::operator!=(const ork::mat2d & mat) const function, expected prototype:\nbool ork::mat2d::operator!=(const ork::mat2d & mat) const\nClass arguments details:\narg 1 ID = 72889722\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat2d* mat_ptr=(Luna< ork::mat2d >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in ork::mat2d::operator!= function");
		}
		const ork::mat2d & mat=*mat_ptr;

		ork::mat2d* self=(Luna< ork::mat2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::mat2d::operator!=(const ork::mat2d &) const. Got : '%s'\n%s",typeid(Luna< ork::mat2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(mat);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::mat2d ork::mat2d::operator+(const ork::mat2d & mat) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat2d ork::mat2d::operator+(const ork::mat2d & mat) const function, expected prototype:\nork::mat2d ork::mat2d::operator+(const ork::mat2d & mat) const\nClass arguments details:\narg 1 ID = 72889722\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat2d* mat_ptr=(Luna< ork::mat2d >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in ork::mat2d::operator+ function");
		}
		const ork::mat2d & mat=*mat_ptr;

		ork::mat2d* self=(Luna< ork::mat2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat2d ork::mat2d::operator+(const ork::mat2d &) const. Got : '%s'\n%s",typeid(Luna< ork::mat2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat2d stack_lret = self->operator+(mat);
		ork::mat2d* lret = new ork::mat2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat2d >::push(L,lret,true);

		return 1;
	}

	// ork::mat2d ork::mat2d::operator-(const ork::mat2d & mat) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat2d ork::mat2d::operator-(const ork::mat2d & mat) const function, expected prototype:\nork::mat2d ork::mat2d::operator-(const ork::mat2d & mat) const\nClass arguments details:\narg 1 ID = 72889722\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat2d* mat_ptr=(Luna< ork::mat2d >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in ork::mat2d::operator- function");
		}
		const ork::mat2d & mat=*mat_ptr;

		ork::mat2d* self=(Luna< ork::mat2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat2d ork::mat2d::operator-(const ork::mat2d &) const. Got : '%s'\n%s",typeid(Luna< ork::mat2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat2d stack_lret = self->operator-(mat);
		ork::mat2d* lret = new ork::mat2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat2d >::push(L,lret,true);

		return 1;
	}

	// ork::mat2d ork::mat2d::operator*(const ork::mat2d & mat) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat2d ork::mat2d::operator*(const ork::mat2d & mat) const function, expected prototype:\nork::mat2d ork::mat2d::operator*(const ork::mat2d & mat) const\nClass arguments details:\narg 1 ID = 72889722\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat2d* mat_ptr=(Luna< ork::mat2d >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in ork::mat2d::operator* function");
		}
		const ork::mat2d & mat=*mat_ptr;

		ork::mat2d* self=(Luna< ork::mat2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat2d ork::mat2d::operator*(const ork::mat2d &) const. Got : '%s'\n%s",typeid(Luna< ork::mat2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat2d stack_lret = self->operator*(mat);
		ork::mat2d* lret = new ork::mat2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat2d >::push(L,lret,true);

		return 1;
	}

	// ork::vec2d ork::mat2d::operator*(const ork::vec2d & v) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2d ork::mat2d::operator*(const ork::vec2d & v) const function, expected prototype:\nork::vec2d ork::mat2d::operator*(const ork::vec2d & v) const\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2d* v_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::mat2d::operator* function");
		}
		const ork::vec2d & v=*v_ptr;

		ork::mat2d* self=(Luna< ork::mat2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2d ork::mat2d::operator*(const ork::vec2d &) const. Got : '%s'\n%s",typeid(Luna< ork::mat2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2d stack_lret = self->operator*(v);
		ork::vec2d* lret = new ork::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2d >::push(L,lret,true);

		return 1;
	}

	// ork::mat2d ork::mat2d::operator*(const double scalar) const
	static int _bind___mul_overload_3(lua_State *L) {
		if (!_lg_typecheck___mul_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat2d ork::mat2d::operator*(const double scalar) const function, expected prototype:\nork::mat2d ork::mat2d::operator*(const double scalar) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const double scalar=(const double)lua_tonumber(L,2);

		ork::mat2d* self=(Luna< ork::mat2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat2d ork::mat2d::operator*(const double) const. Got : '%s'\n%s",typeid(Luna< ork::mat2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat2d stack_lret = self->operator*(scalar);
		ork::mat2d* lret = new ork::mat2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat2d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::mat2d::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);
		if (_lg_typecheck___mul_overload_3(L)) return _bind___mul_overload_3(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const ork::mat2d &)\n  operator*(const ork::vec2d &)\n  operator*(const double)\n");
		return 0;
	}

	// ork::mat2d ork::mat2d::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat2d ork::mat2d::operator-() const function, expected prototype:\nork::mat2d ork::mat2d::operator-() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat2d* self=(Luna< ork::mat2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat2d ork::mat2d::operator-() const. Got : '%s'\n%s",typeid(Luna< ork::mat2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat2d stack_lret = self->operator-();
		ork::mat2d* lret = new ork::mat2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat2d >::push(L,lret,true);

		return 1;
	}


};

ork::mat2d* LunaTraits< ork::mat2d >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_mat2d::_bind_ctor(L);
}

void LunaTraits< ork::mat2d >::_bind_dtor(ork::mat2d* obj) {
	delete obj;
}

const char LunaTraits< ork::mat2d >::className[] = "mat2d";
const char LunaTraits< ork::mat2d >::fullName[] = "ork::mat2d";
const char LunaTraits< ork::mat2d >::moduleName[] = "ork";
const char* LunaTraits< ork::mat2d >::parents[] = {0};
const int LunaTraits< ork::mat2d >::hash = 72889722;
const int LunaTraits< ork::mat2d >::uniqueIDs[] = {72889722,0};

luna_RegType LunaTraits< ork::mat2d >::methods[] = {
	{"coefficients", &luna_wrapper_ork_mat2d::_bind_coefficients},
	{"getColumn", &luna_wrapper_ork_mat2d::_bind_getColumn},
	{"setColumn", &luna_wrapper_ork_mat2d::_bind_setColumn},
	{"transpose", &luna_wrapper_ork_mat2d::_bind_transpose},
	{"inverse", &luna_wrapper_ork_mat2d::_bind_inverse},
	{"determinant", &luna_wrapper_ork_mat2d::_bind_determinant},
	{"trace", &luna_wrapper_ork_mat2d::_bind_trace},
	{"op_index", &luna_wrapper_ork_mat2d::_bind_op_index},
	{"op_assign", &luna_wrapper_ork_mat2d::_bind_op_assign},
	{"__eq", &luna_wrapper_ork_mat2d::_bind___eq},
	{"op_neq", &luna_wrapper_ork_mat2d::_bind_op_neq},
	{"__add", &luna_wrapper_ork_mat2d::_bind___add},
	{"__sub", &luna_wrapper_ork_mat2d::_bind___sub},
	{"__mul", &luna_wrapper_ork_mat2d::_bind___mul},
	{"__unm", &luna_wrapper_ork_mat2d::_bind___unm},
	{"dynCast", &luna_wrapper_ork_mat2d::_bind_dynCast},
	{"fromVoid", &luna_wrapper_ork_mat2d::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_mat2d::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::mat2d >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::mat2d >::enumValues[] = {
	{0,0}
};


