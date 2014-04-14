#include <plug_common.h>

class luna_wrapper_ork_mat2f {
public:
	typedef Luna< ork::mat2f > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::mat2f* self= (ork::mat2f*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::mat2f >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72889724) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::mat2f >::check(L,1));
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

		ork::mat2f* self=(Luna< ork::mat2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::mat2f");
		
		return luna_dynamicCast(L,converters,"ork::mat2f",name);
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

		if( !Luna<void>::has_uniqueid(L,1,72889724) ) return false;
		if( (!(Luna< ork::mat2f >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setColumn(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,81304240) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_transpose(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_inverse_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889724) ) return false;
		if( (!(Luna< ork::mat2f >::check(L,2))) ) return false;
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
	// (found 9 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889724) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889724) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889724) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889724) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889724) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889724) ) return false;
		if( (!(Luna< ork::mat2f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304240) ) return false;
		if( (!(Luna< ork::vec2f >::check(L,2))) ) return false;
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
	// ork::mat2f::mat2f()
	static ork::mat2f* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat2f::mat2f() function, expected prototype:\nork::mat2f::mat2f()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::mat2f();
	}

	// ork::mat2f::mat2f(float m00, float m01, float m10, float m11)
	static ork::mat2f* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat2f::mat2f(float m00, float m01, float m10, float m11) function, expected prototype:\nork::mat2f::mat2f(float m00, float m01, float m10, float m11)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float m00=(float)lua_tonumber(L,1);
		float m01=(float)lua_tonumber(L,2);
		float m10=(float)lua_tonumber(L,3);
		float m11=(float)lua_tonumber(L,4);

		return new ork::mat2f(m00, m01, m10, m11);
	}

	// ork::mat2f::mat2f(const ork::mat2f & mat)
	static ork::mat2f* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat2f::mat2f(const ork::mat2f & mat) function, expected prototype:\nork::mat2f::mat2f(const ork::mat2f & mat)\nClass arguments details:\narg 1 ID = 72889724\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat2f* mat_ptr=(Luna< ork::mat2f >::check(L,1));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in ork::mat2f::mat2f function");
		}
		const ork::mat2f & mat=*mat_ptr;

		return new ork::mat2f(mat);
	}

	// Overload binder for ork::mat2f::mat2f
	static ork::mat2f* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function mat2f, cannot match any of the overloads for function mat2f:\n  mat2f()\n  mat2f(float, float, float, float)\n  mat2f(const ork::mat2f &)\n");
		return NULL;
	}


	// Function binds:
	// ork::vec2f ork::mat2f::getColumn(int iCol) const
	static int _bind_getColumn(lua_State *L) {
		if (!_lg_typecheck_getColumn(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2f ork::mat2f::getColumn(int iCol) const function, expected prototype:\nork::vec2f ork::mat2f::getColumn(int iCol) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int iCol=(int)lua_tointeger(L,2);

		ork::mat2f* self=(Luna< ork::mat2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2f ork::mat2f::getColumn(int) const. Got : '%s'\n%s",typeid(Luna< ork::mat2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2f stack_lret = self->getColumn(iCol);
		ork::vec2f* lret = new ork::vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2f >::push(L,lret,true);

		return 1;
	}

	// void ork::mat2f::setColumn(int iCol, const ork::vec2f & v)
	static int _bind_setColumn(lua_State *L) {
		if (!_lg_typecheck_setColumn(L)) {
			luaL_error(L, "luna typecheck failed in void ork::mat2f::setColumn(int iCol, const ork::vec2f & v) function, expected prototype:\nvoid ork::mat2f::setColumn(int iCol, const ork::vec2f & v)\nClass arguments details:\narg 2 ID = 81304240\n\n%s",luna_dumpStack(L).c_str());
		}

		int iCol=(int)lua_tointeger(L,2);
		const ork::vec2f* v_ptr=(Luna< ork::vec2f >::check(L,3));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::mat2f::setColumn function");
		}
		const ork::vec2f & v=*v_ptr;

		ork::mat2f* self=(Luna< ork::mat2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::mat2f::setColumn(int, const ork::vec2f &). Got : '%s'\n%s",typeid(Luna< ork::mat2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColumn(iCol, v);

		return 0;
	}

	// ork::mat2f ork::mat2f::transpose() const
	static int _bind_transpose(lua_State *L) {
		if (!_lg_typecheck_transpose(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat2f ork::mat2f::transpose() const function, expected prototype:\nork::mat2f ork::mat2f::transpose() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat2f* self=(Luna< ork::mat2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat2f ork::mat2f::transpose() const. Got : '%s'\n%s",typeid(Luna< ork::mat2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat2f stack_lret = self->transpose();
		ork::mat2f* lret = new ork::mat2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat2f >::push(L,lret,true);

		return 1;
	}

	// bool ork::mat2f::inverse(ork::mat2f & mInv, float tolerance = 1e-06) const
	static int _bind_inverse_overload_1(lua_State *L) {
		if (!_lg_typecheck_inverse_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::mat2f::inverse(ork::mat2f & mInv, float tolerance = 1e-06) const function, expected prototype:\nbool ork::mat2f::inverse(ork::mat2f & mInv, float tolerance = 1e-06) const\nClass arguments details:\narg 1 ID = 72889724\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::mat2f* mInv_ptr=(Luna< ork::mat2f >::check(L,2));
		if( !mInv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mInv in ork::mat2f::inverse function");
		}
		ork::mat2f & mInv=*mInv_ptr;
		float tolerance=luatop>2 ? (float)lua_tonumber(L,3) : (float)1e-06;

		ork::mat2f* self=(Luna< ork::mat2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::mat2f::inverse(ork::mat2f &, float) const. Got : '%s'\n%s",typeid(Luna< ork::mat2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->inverse(mInv, tolerance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::mat2f ork::mat2f::inverse(float tolerance = 1e-06) const
	static int _bind_inverse_overload_2(lua_State *L) {
		if (!_lg_typecheck_inverse_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat2f ork::mat2f::inverse(float tolerance = 1e-06) const function, expected prototype:\nork::mat2f ork::mat2f::inverse(float tolerance = 1e-06) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float tolerance=luatop>1 ? (float)lua_tonumber(L,2) : (float)1e-06;

		ork::mat2f* self=(Luna< ork::mat2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat2f ork::mat2f::inverse(float) const. Got : '%s'\n%s",typeid(Luna< ork::mat2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat2f stack_lret = self->inverse(tolerance);
		ork::mat2f* lret = new ork::mat2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat2f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::mat2f::inverse
	static int _bind_inverse(lua_State *L) {
		if (_lg_typecheck_inverse_overload_1(L)) return _bind_inverse_overload_1(L);
		if (_lg_typecheck_inverse_overload_2(L)) return _bind_inverse_overload_2(L);

		luaL_error(L, "error in function inverse, cannot match any of the overloads for function inverse:\n  inverse(ork::mat2f &, float)\n  inverse(float)\n");
		return 0;
	}

	// float ork::mat2f::determinant() const
	static int _bind_determinant(lua_State *L) {
		if (!_lg_typecheck_determinant(L)) {
			luaL_error(L, "luna typecheck failed in float ork::mat2f::determinant() const function, expected prototype:\nfloat ork::mat2f::determinant() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat2f* self=(Luna< ork::mat2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::mat2f::determinant() const. Got : '%s'\n%s",typeid(Luna< ork::mat2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->determinant();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::mat2f::trace() const
	static int _bind_trace(lua_State *L) {
		if (!_lg_typecheck_trace(L)) {
			luaL_error(L, "luna typecheck failed in float ork::mat2f::trace() const function, expected prototype:\nfloat ork::mat2f::trace() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat2f* self=(Luna< ork::mat2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::mat2f::trace() const. Got : '%s'\n%s",typeid(Luna< ork::mat2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->trace();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// ork::mat2f & ork::mat2f::operator=(const ork::mat2f & mat)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat2f & ork::mat2f::operator=(const ork::mat2f & mat) function, expected prototype:\nork::mat2f & ork::mat2f::operator=(const ork::mat2f & mat)\nClass arguments details:\narg 1 ID = 72889724\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat2f* mat_ptr=(Luna< ork::mat2f >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in ork::mat2f::operator= function");
		}
		const ork::mat2f & mat=*mat_ptr;

		ork::mat2f* self=(Luna< ork::mat2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat2f & ork::mat2f::operator=(const ork::mat2f &). Got : '%s'\n%s",typeid(Luna< ork::mat2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::mat2f* lret = &self->operator=(mat);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat2f >::push(L,lret,false);

		return 1;
	}

	// bool ork::mat2f::operator==(const ork::mat2f & mat) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::mat2f::operator==(const ork::mat2f & mat) const function, expected prototype:\nbool ork::mat2f::operator==(const ork::mat2f & mat) const\nClass arguments details:\narg 1 ID = 72889724\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat2f* mat_ptr=(Luna< ork::mat2f >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in ork::mat2f::operator== function");
		}
		const ork::mat2f & mat=*mat_ptr;

		ork::mat2f* self=(Luna< ork::mat2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::mat2f::operator==(const ork::mat2f &) const. Got : '%s'\n%s",typeid(Luna< ork::mat2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(mat);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::mat2f::operator!=(const ork::mat2f & mat) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::mat2f::operator!=(const ork::mat2f & mat) const function, expected prototype:\nbool ork::mat2f::operator!=(const ork::mat2f & mat) const\nClass arguments details:\narg 1 ID = 72889724\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat2f* mat_ptr=(Luna< ork::mat2f >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in ork::mat2f::operator!= function");
		}
		const ork::mat2f & mat=*mat_ptr;

		ork::mat2f* self=(Luna< ork::mat2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::mat2f::operator!=(const ork::mat2f &) const. Got : '%s'\n%s",typeid(Luna< ork::mat2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(mat);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::mat2f ork::mat2f::operator+(const ork::mat2f & mat) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat2f ork::mat2f::operator+(const ork::mat2f & mat) const function, expected prototype:\nork::mat2f ork::mat2f::operator+(const ork::mat2f & mat) const\nClass arguments details:\narg 1 ID = 72889724\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat2f* mat_ptr=(Luna< ork::mat2f >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in ork::mat2f::operator+ function");
		}
		const ork::mat2f & mat=*mat_ptr;

		ork::mat2f* self=(Luna< ork::mat2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat2f ork::mat2f::operator+(const ork::mat2f &) const. Got : '%s'\n%s",typeid(Luna< ork::mat2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat2f stack_lret = self->operator+(mat);
		ork::mat2f* lret = new ork::mat2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat2f >::push(L,lret,true);

		return 1;
	}

	// ork::mat2f ork::mat2f::operator-(const ork::mat2f & mat) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat2f ork::mat2f::operator-(const ork::mat2f & mat) const function, expected prototype:\nork::mat2f ork::mat2f::operator-(const ork::mat2f & mat) const\nClass arguments details:\narg 1 ID = 72889724\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat2f* mat_ptr=(Luna< ork::mat2f >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in ork::mat2f::operator- function");
		}
		const ork::mat2f & mat=*mat_ptr;

		ork::mat2f* self=(Luna< ork::mat2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat2f ork::mat2f::operator-(const ork::mat2f &) const. Got : '%s'\n%s",typeid(Luna< ork::mat2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat2f stack_lret = self->operator-(mat);
		ork::mat2f* lret = new ork::mat2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat2f >::push(L,lret,true);

		return 1;
	}

	// ork::mat2f ork::mat2f::operator*(const ork::mat2f & mat) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat2f ork::mat2f::operator*(const ork::mat2f & mat) const function, expected prototype:\nork::mat2f ork::mat2f::operator*(const ork::mat2f & mat) const\nClass arguments details:\narg 1 ID = 72889724\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat2f* mat_ptr=(Luna< ork::mat2f >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in ork::mat2f::operator* function");
		}
		const ork::mat2f & mat=*mat_ptr;

		ork::mat2f* self=(Luna< ork::mat2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat2f ork::mat2f::operator*(const ork::mat2f &) const. Got : '%s'\n%s",typeid(Luna< ork::mat2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat2f stack_lret = self->operator*(mat);
		ork::mat2f* lret = new ork::mat2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat2f >::push(L,lret,true);

		return 1;
	}

	// ork::vec2f ork::mat2f::operator*(const ork::vec2f & v) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2f ork::mat2f::operator*(const ork::vec2f & v) const function, expected prototype:\nork::vec2f ork::mat2f::operator*(const ork::vec2f & v) const\nClass arguments details:\narg 1 ID = 81304240\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2f* v_ptr=(Luna< ork::vec2f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::mat2f::operator* function");
		}
		const ork::vec2f & v=*v_ptr;

		ork::mat2f* self=(Luna< ork::mat2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2f ork::mat2f::operator*(const ork::vec2f &) const. Got : '%s'\n%s",typeid(Luna< ork::mat2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2f stack_lret = self->operator*(v);
		ork::vec2f* lret = new ork::vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2f >::push(L,lret,true);

		return 1;
	}

	// ork::mat2f ork::mat2f::operator*(const float scalar) const
	static int _bind___mul_overload_3(lua_State *L) {
		if (!_lg_typecheck___mul_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat2f ork::mat2f::operator*(const float scalar) const function, expected prototype:\nork::mat2f ork::mat2f::operator*(const float scalar) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const float scalar=(const float)lua_tonumber(L,2);

		ork::mat2f* self=(Luna< ork::mat2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat2f ork::mat2f::operator*(const float) const. Got : '%s'\n%s",typeid(Luna< ork::mat2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat2f stack_lret = self->operator*(scalar);
		ork::mat2f* lret = new ork::mat2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat2f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::mat2f::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);
		if (_lg_typecheck___mul_overload_3(L)) return _bind___mul_overload_3(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const ork::mat2f &)\n  operator*(const ork::vec2f &)\n  operator*(const float)\n");
		return 0;
	}

	// ork::mat2f ork::mat2f::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat2f ork::mat2f::operator-() const function, expected prototype:\nork::mat2f ork::mat2f::operator-() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::mat2f* self=(Luna< ork::mat2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat2f ork::mat2f::operator-() const. Got : '%s'\n%s",typeid(Luna< ork::mat2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat2f stack_lret = self->operator-();
		ork::mat2f* lret = new ork::mat2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat2f >::push(L,lret,true);

		return 1;
	}


};

ork::mat2f* LunaTraits< ork::mat2f >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_mat2f::_bind_ctor(L);
}

void LunaTraits< ork::mat2f >::_bind_dtor(ork::mat2f* obj) {
	delete obj;
}

const char LunaTraits< ork::mat2f >::className[] = "mat2f";
const char LunaTraits< ork::mat2f >::fullName[] = "ork::mat2f";
const char LunaTraits< ork::mat2f >::moduleName[] = "ork";
const char* LunaTraits< ork::mat2f >::parents[] = {0};
const int LunaTraits< ork::mat2f >::hash = 72889724;
const int LunaTraits< ork::mat2f >::uniqueIDs[] = {72889724,0};

luna_RegType LunaTraits< ork::mat2f >::methods[] = {
	{"getColumn", &luna_wrapper_ork_mat2f::_bind_getColumn},
	{"setColumn", &luna_wrapper_ork_mat2f::_bind_setColumn},
	{"transpose", &luna_wrapper_ork_mat2f::_bind_transpose},
	{"inverse", &luna_wrapper_ork_mat2f::_bind_inverse},
	{"determinant", &luna_wrapper_ork_mat2f::_bind_determinant},
	{"trace", &luna_wrapper_ork_mat2f::_bind_trace},
	{"op_assign", &luna_wrapper_ork_mat2f::_bind_op_assign},
	{"__eq", &luna_wrapper_ork_mat2f::_bind___eq},
	{"op_neq", &luna_wrapper_ork_mat2f::_bind_op_neq},
	{"__add", &luna_wrapper_ork_mat2f::_bind___add},
	{"__sub", &luna_wrapper_ork_mat2f::_bind___sub},
	{"__mul", &luna_wrapper_ork_mat2f::_bind___mul},
	{"__unm", &luna_wrapper_ork_mat2f::_bind___unm},
	{"dynCast", &luna_wrapper_ork_mat2f::_bind_dynCast},
	{"fromVoid", &luna_wrapper_ork_mat2f::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_mat2f::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::mat2f >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::mat2f >::enumValues[] = {
	{0,0}
};


