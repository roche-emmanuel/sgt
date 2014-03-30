#include <plug_common.h>

class luna_wrapper_osg_Vec4f {
public:
	typedef Luna< osg::Vec4f > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec4f* self= (osg::Vec4f*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Vec4f >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303235) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Vec4f >::check(L,1));
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

		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Vec4f");
		
		return luna_dynamicCast(L,converters,"osg::Vec4f",name);
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
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,1))) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_ptr_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ptr_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_x_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_x_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_y_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_y_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_z_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_z_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_w_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_w_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_r_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_r_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_g_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_g_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_b_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_b_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_a_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_a_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asABGR(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asRGBA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_valid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isNaN(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_length(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_length2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_normalize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_postmult(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,92303235)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,18903838)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 15 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

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

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_mult(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_div(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		return true;
	}


	// Constructor binds:
	// osg::Vec4f::Vec4f()
	static osg::Vec4f* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f::Vec4f() function, expected prototype:\nosg::Vec4f::Vec4f()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Vec4f();
	}

	// osg::Vec4f::Vec4f(float x, float y, float z, float w)
	static osg::Vec4f* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f::Vec4f(float x, float y, float z, float w) function, expected prototype:\nosg::Vec4f::Vec4f(float x, float y, float z, float w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,1);
		float y=(float)lua_tonumber(L,2);
		float z=(float)lua_tonumber(L,3);
		float w=(float)lua_tonumber(L,4);

		return new osg::Vec4f(x, y, z, w);
	}

	// osg::Vec4f::Vec4f(const osg::Vec3f & v3, float w)
	static osg::Vec4f* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f::Vec4f(const osg::Vec3f & v3, float w) function, expected prototype:\nosg::Vec4f::Vec4f(const osg::Vec3f & v3, float w)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v3_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !v3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v3 in osg::Vec4f::Vec4f function");
		}
		const osg::Vec3f & v3=*v3_ptr;
		float w=(float)lua_tonumber(L,2);

		return new osg::Vec4f(v3, w);
	}

	// Overload binder for osg::Vec4f::Vec4f
	static osg::Vec4f* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function Vec4f, cannot match any of the overloads for function Vec4f:\n  Vec4f()\n  Vec4f(float, float, float, float)\n  Vec4f(const osg::Vec3f &, float)\n");
		return NULL;
	}


	// Function binds:
	// float * osg::Vec4f::ptr()
	static int _bind_ptr_overload_1(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float * osg::Vec4f::ptr() function, expected prototype:\nfloat * osg::Vec4f::ptr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float * osg::Vec4f::ptr(). Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const float * osg::Vec4f::ptr() const
	static int _bind_ptr_overload_2(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const float * osg::Vec4f::ptr() const function, expected prototype:\nconst float * osg::Vec4f::ptr() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const float * osg::Vec4f::ptr() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const float * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// Overload binder for osg::Vec4f::ptr
	static int _bind_ptr(lua_State *L) {
		if (_lg_typecheck_ptr_overload_1(L)) return _bind_ptr_overload_1(L);
		if (_lg_typecheck_ptr_overload_2(L)) return _bind_ptr_overload_2(L);

		luaL_error(L, "error in function ptr, cannot match any of the overloads for function ptr:\n  ptr()\n  ptr()\n");
		return 0;
	}

	// void osg::Vec4f::set(float x, float y, float z, float w)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec4f::set(float x, float y, float z, float w) function, expected prototype:\nvoid osg::Vec4f::set(float x, float y, float z, float w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);
		float w=(float)lua_tonumber(L,5);

		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec4f::set(float, float, float, float). Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(x, y, z, w);

		return 0;
	}

	// float & osg::Vec4f::x()
	static int _bind_x_overload_1(lua_State *L) {
		if (!_lg_typecheck_x_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float & osg::Vec4f::x() function, expected prototype:\nfloat & osg::Vec4f::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float & osg::Vec4f::x(). Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float & lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Vec4f::x() const
	static int _bind_x_overload_2(lua_State *L) {
		if (!_lg_typecheck_x_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Vec4f::x() const function, expected prototype:\nfloat osg::Vec4f::x() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Vec4f::x() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4f::x
	static int _bind_x(lua_State *L) {
		if (_lg_typecheck_x_overload_1(L)) return _bind_x_overload_1(L);
		if (_lg_typecheck_x_overload_2(L)) return _bind_x_overload_2(L);

		luaL_error(L, "error in function x, cannot match any of the overloads for function x:\n  x()\n  x()\n");
		return 0;
	}

	// float & osg::Vec4f::y()
	static int _bind_y_overload_1(lua_State *L) {
		if (!_lg_typecheck_y_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float & osg::Vec4f::y() function, expected prototype:\nfloat & osg::Vec4f::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float & osg::Vec4f::y(). Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float & lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Vec4f::y() const
	static int _bind_y_overload_2(lua_State *L) {
		if (!_lg_typecheck_y_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Vec4f::y() const function, expected prototype:\nfloat osg::Vec4f::y() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Vec4f::y() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4f::y
	static int _bind_y(lua_State *L) {
		if (_lg_typecheck_y_overload_1(L)) return _bind_y_overload_1(L);
		if (_lg_typecheck_y_overload_2(L)) return _bind_y_overload_2(L);

		luaL_error(L, "error in function y, cannot match any of the overloads for function y:\n  y()\n  y()\n");
		return 0;
	}

	// float & osg::Vec4f::z()
	static int _bind_z_overload_1(lua_State *L) {
		if (!_lg_typecheck_z_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float & osg::Vec4f::z() function, expected prototype:\nfloat & osg::Vec4f::z()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float & osg::Vec4f::z(). Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float & lret = self->z();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Vec4f::z() const
	static int _bind_z_overload_2(lua_State *L) {
		if (!_lg_typecheck_z_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Vec4f::z() const function, expected prototype:\nfloat osg::Vec4f::z() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Vec4f::z() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->z();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4f::z
	static int _bind_z(lua_State *L) {
		if (_lg_typecheck_z_overload_1(L)) return _bind_z_overload_1(L);
		if (_lg_typecheck_z_overload_2(L)) return _bind_z_overload_2(L);

		luaL_error(L, "error in function z, cannot match any of the overloads for function z:\n  z()\n  z()\n");
		return 0;
	}

	// float & osg::Vec4f::w()
	static int _bind_w_overload_1(lua_State *L) {
		if (!_lg_typecheck_w_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float & osg::Vec4f::w() function, expected prototype:\nfloat & osg::Vec4f::w()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float & osg::Vec4f::w(). Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float & lret = self->w();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Vec4f::w() const
	static int _bind_w_overload_2(lua_State *L) {
		if (!_lg_typecheck_w_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Vec4f::w() const function, expected prototype:\nfloat osg::Vec4f::w() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Vec4f::w() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->w();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4f::w
	static int _bind_w(lua_State *L) {
		if (_lg_typecheck_w_overload_1(L)) return _bind_w_overload_1(L);
		if (_lg_typecheck_w_overload_2(L)) return _bind_w_overload_2(L);

		luaL_error(L, "error in function w, cannot match any of the overloads for function w:\n  w()\n  w()\n");
		return 0;
	}

	// float & osg::Vec4f::r()
	static int _bind_r_overload_1(lua_State *L) {
		if (!_lg_typecheck_r_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float & osg::Vec4f::r() function, expected prototype:\nfloat & osg::Vec4f::r()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float & osg::Vec4f::r(). Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float & lret = self->r();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Vec4f::r() const
	static int _bind_r_overload_2(lua_State *L) {
		if (!_lg_typecheck_r_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Vec4f::r() const function, expected prototype:\nfloat osg::Vec4f::r() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Vec4f::r() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->r();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4f::r
	static int _bind_r(lua_State *L) {
		if (_lg_typecheck_r_overload_1(L)) return _bind_r_overload_1(L);
		if (_lg_typecheck_r_overload_2(L)) return _bind_r_overload_2(L);

		luaL_error(L, "error in function r, cannot match any of the overloads for function r:\n  r()\n  r()\n");
		return 0;
	}

	// float & osg::Vec4f::g()
	static int _bind_g_overload_1(lua_State *L) {
		if (!_lg_typecheck_g_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float & osg::Vec4f::g() function, expected prototype:\nfloat & osg::Vec4f::g()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float & osg::Vec4f::g(). Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float & lret = self->g();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Vec4f::g() const
	static int _bind_g_overload_2(lua_State *L) {
		if (!_lg_typecheck_g_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Vec4f::g() const function, expected prototype:\nfloat osg::Vec4f::g() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Vec4f::g() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->g();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4f::g
	static int _bind_g(lua_State *L) {
		if (_lg_typecheck_g_overload_1(L)) return _bind_g_overload_1(L);
		if (_lg_typecheck_g_overload_2(L)) return _bind_g_overload_2(L);

		luaL_error(L, "error in function g, cannot match any of the overloads for function g:\n  g()\n  g()\n");
		return 0;
	}

	// float & osg::Vec4f::b()
	static int _bind_b_overload_1(lua_State *L) {
		if (!_lg_typecheck_b_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float & osg::Vec4f::b() function, expected prototype:\nfloat & osg::Vec4f::b()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float & osg::Vec4f::b(). Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float & lret = self->b();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Vec4f::b() const
	static int _bind_b_overload_2(lua_State *L) {
		if (!_lg_typecheck_b_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Vec4f::b() const function, expected prototype:\nfloat osg::Vec4f::b() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Vec4f::b() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->b();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4f::b
	static int _bind_b(lua_State *L) {
		if (_lg_typecheck_b_overload_1(L)) return _bind_b_overload_1(L);
		if (_lg_typecheck_b_overload_2(L)) return _bind_b_overload_2(L);

		luaL_error(L, "error in function b, cannot match any of the overloads for function b:\n  b()\n  b()\n");
		return 0;
	}

	// float & osg::Vec4f::a()
	static int _bind_a_overload_1(lua_State *L) {
		if (!_lg_typecheck_a_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float & osg::Vec4f::a() function, expected prototype:\nfloat & osg::Vec4f::a()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float & osg::Vec4f::a(). Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float & lret = self->a();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Vec4f::a() const
	static int _bind_a_overload_2(lua_State *L) {
		if (!_lg_typecheck_a_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Vec4f::a() const function, expected prototype:\nfloat osg::Vec4f::a() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Vec4f::a() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->a();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4f::a
	static int _bind_a(lua_State *L) {
		if (_lg_typecheck_a_overload_1(L)) return _bind_a_overload_1(L);
		if (_lg_typecheck_a_overload_2(L)) return _bind_a_overload_2(L);

		luaL_error(L, "error in function a, cannot match any of the overloads for function a:\n  a()\n  a()\n");
		return 0;
	}

	// unsigned int osg::Vec4f::asABGR() const
	static int _bind_asABGR(lua_State *L) {
		if (!_lg_typecheck_asABGR(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Vec4f::asABGR() const function, expected prototype:\nunsigned int osg::Vec4f::asABGR() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Vec4f::asABGR() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->asABGR();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Vec4f::asRGBA() const
	static int _bind_asRGBA(lua_State *L) {
		if (!_lg_typecheck_asRGBA(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Vec4f::asRGBA() const function, expected prototype:\nunsigned int osg::Vec4f::asRGBA() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Vec4f::asRGBA() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->asRGBA();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Vec4f::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec4f::valid() const function, expected prototype:\nbool osg::Vec4f::valid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec4f::valid() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Vec4f::isNaN() const
	static int _bind_isNaN(lua_State *L) {
		if (!_lg_typecheck_isNaN(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec4f::isNaN() const function, expected prototype:\nbool osg::Vec4f::isNaN() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec4f::isNaN() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isNaN();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float osg::Vec4f::length() const
	static int _bind_length(lua_State *L) {
		if (!_lg_typecheck_length(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Vec4f::length() const function, expected prototype:\nfloat osg::Vec4f::length() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Vec4f::length() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Vec4f::length2() const
	static int _bind_length2(lua_State *L) {
		if (!_lg_typecheck_length2(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Vec4f::length2() const function, expected prototype:\nfloat osg::Vec4f::length2() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Vec4f::length2() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->length2();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Vec4f::normalize()
	static int _bind_normalize(lua_State *L) {
		if (!_lg_typecheck_normalize(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Vec4f::normalize() function, expected prototype:\nfloat osg::Vec4f::normalize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Vec4f::normalize(). Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->normalize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec4f osg::Vec4f::vec4f_premult(osg::Vec4f * vec, osg::Matrixd * mat)
	static int _bind_postmult(lua_State *L) {
		if (!_lg_typecheck_postmult(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f osg::Vec4f::vec4f_premult(osg::Vec4f * vec, osg::Matrixd * mat) function, expected prototype:\nosg::Vec4f osg::Vec4f::vec4f_premult(osg::Vec4f * vec, osg::Matrixd * mat)\nClass arguments details:\narg 1 ID = 92303235\narg 2 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec4f* vec=(Luna< osg::Vec4f >::check(L,1));
		osg::Matrixd* mat=(Luna< osg::Matrixd >::check(L,2));

		osg::Vec4f stack_lret = vec4f_premult(vec, mat);
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}


	// Operator binds:
	// bool osg::Vec4f::operator==(const osg::Vec4f & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec4f::operator==(const osg::Vec4f & v) const function, expected prototype:\nbool osg::Vec4f::operator==(const osg::Vec4f & v) const\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* v_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec4f::operator== function");
		}
		const osg::Vec4f & v=*v_ptr;

		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec4f::operator==(const osg::Vec4f &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Vec4f::operator!=(const osg::Vec4f & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec4f::operator!=(const osg::Vec4f & v) const function, expected prototype:\nbool osg::Vec4f::operator!=(const osg::Vec4f & v) const\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* v_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec4f::operator!= function");
		}
		const osg::Vec4f & v=*v_ptr;

		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec4f::operator!=(const osg::Vec4f &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Vec4f::operator<(const osg::Vec4f & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec4f::operator<(const osg::Vec4f & v) const function, expected prototype:\nbool osg::Vec4f::operator<(const osg::Vec4f & v) const\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* v_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec4f::operator< function");
		}
		const osg::Vec4f & v=*v_ptr;

		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec4f::operator<(const osg::Vec4f &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float & osg::Vec4f::operator[](unsigned int i)
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float & osg::Vec4f::operator[](unsigned int i) function, expected prototype:\nfloat & osg::Vec4f::operator[](unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float & osg::Vec4f::operator[](unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Vec4f::operator[](unsigned int i) const
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Vec4f::operator[](unsigned int i) const function, expected prototype:\nfloat osg::Vec4f::operator[](unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Vec4f::operator[](unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4f::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](unsigned int)\n  operator[](unsigned int)\n");
		return 0;
	}

	// float osg::Vec4f::operator*(const osg::Vec4f & rhs) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Vec4f::operator*(const osg::Vec4f & rhs) const function, expected prototype:\nfloat osg::Vec4f::operator*(const osg::Vec4f & rhs) const\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* rhs_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec4f::operator* function");
		}
		const osg::Vec4f & rhs=*rhs_ptr;

		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Vec4f::operator*(const osg::Vec4f &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->operator*(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec4f osg::Vec4f::operator*(float rhs) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f osg::Vec4f::operator*(float rhs) const function, expected prototype:\nosg::Vec4f osg::Vec4f::operator*(float rhs) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4f osg::Vec4f::operator*(float) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4f stack_lret = self->operator*(rhs);
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osg::Vec4f::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const osg::Vec4f &)\n  operator*(float)\n");
		return 0;
	}

	// osg::Vec4f & osg::Vec4f::operator*=(float rhs)
	static int _bind_op_mult(lua_State *L) {
		if (!_lg_typecheck_op_mult(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f & osg::Vec4f::operator*=(float rhs) function, expected prototype:\nosg::Vec4f & osg::Vec4f::operator*=(float rhs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4f & osg::Vec4f::operator*=(float). Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->operator*=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// osg::Vec4f osg::Vec4f::operator/(float rhs) const
	static int _bind___div(lua_State *L) {
		if (!_lg_typecheck___div(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f osg::Vec4f::operator/(float rhs) const function, expected prototype:\nosg::Vec4f osg::Vec4f::operator/(float rhs) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4f osg::Vec4f::operator/(float) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4f stack_lret = self->operator/(rhs);
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4f & osg::Vec4f::operator/=(float rhs)
	static int _bind_op_div(lua_State *L) {
		if (!_lg_typecheck_op_div(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f & osg::Vec4f::operator/=(float rhs) function, expected prototype:\nosg::Vec4f & osg::Vec4f::operator/=(float rhs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4f & osg::Vec4f::operator/=(float). Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->operator/=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// osg::Vec4f osg::Vec4f::operator+(const osg::Vec4f & rhs) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f osg::Vec4f::operator+(const osg::Vec4f & rhs) const function, expected prototype:\nosg::Vec4f osg::Vec4f::operator+(const osg::Vec4f & rhs) const\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* rhs_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec4f::operator+ function");
		}
		const osg::Vec4f & rhs=*rhs_ptr;

		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4f osg::Vec4f::operator+(const osg::Vec4f &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4f stack_lret = self->operator+(rhs);
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4f & osg::Vec4f::operator+=(const osg::Vec4f & rhs)
	static int _bind_op_add(lua_State *L) {
		if (!_lg_typecheck_op_add(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f & osg::Vec4f::operator+=(const osg::Vec4f & rhs) function, expected prototype:\nosg::Vec4f & osg::Vec4f::operator+=(const osg::Vec4f & rhs)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* rhs_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec4f::operator+= function");
		}
		const osg::Vec4f & rhs=*rhs_ptr;

		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4f & osg::Vec4f::operator+=(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->operator+=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// osg::Vec4f osg::Vec4f::operator-(const osg::Vec4f & rhs) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f osg::Vec4f::operator-(const osg::Vec4f & rhs) const function, expected prototype:\nosg::Vec4f osg::Vec4f::operator-(const osg::Vec4f & rhs) const\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* rhs_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec4f::operator- function");
		}
		const osg::Vec4f & rhs=*rhs_ptr;

		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4f osg::Vec4f::operator-(const osg::Vec4f &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4f stack_lret = self->operator-(rhs);
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4f & osg::Vec4f::operator-=(const osg::Vec4f & rhs)
	static int _bind_op_sub(lua_State *L) {
		if (!_lg_typecheck_op_sub(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f & osg::Vec4f::operator-=(const osg::Vec4f & rhs) function, expected prototype:\nosg::Vec4f & osg::Vec4f::operator-=(const osg::Vec4f & rhs)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* rhs_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec4f::operator-= function");
		}
		const osg::Vec4f & rhs=*rhs_ptr;

		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4f & osg::Vec4f::operator-=(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->operator-=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec4f osg::Vec4f::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f osg::Vec4f::operator-() const function, expected prototype:\nconst osg::Vec4f osg::Vec4f::operator-() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4f* self=(Luna< osg::Vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f osg::Vec4f::operator-() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f stack_lret = self->operator-();
		const osg::Vec4f* lret = new const osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}


};

osg::Vec4f* LunaTraits< osg::Vec4f >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Vec4f::_bind_ctor(L);
}

void LunaTraits< osg::Vec4f >::_bind_dtor(osg::Vec4f* obj) {
	delete obj;
}

const char LunaTraits< osg::Vec4f >::className[] = "Vec4f";
const char LunaTraits< osg::Vec4f >::fullName[] = "osg::Vec4f";
const char LunaTraits< osg::Vec4f >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec4f >::parents[] = {0};
const int LunaTraits< osg::Vec4f >::hash = 92303235;
const int LunaTraits< osg::Vec4f >::uniqueIDs[] = {92303235,0};

luna_RegType LunaTraits< osg::Vec4f >::methods[] = {
	{"ptr", &luna_wrapper_osg_Vec4f::_bind_ptr},
	{"set", &luna_wrapper_osg_Vec4f::_bind_set},
	{"x", &luna_wrapper_osg_Vec4f::_bind_x},
	{"y", &luna_wrapper_osg_Vec4f::_bind_y},
	{"z", &luna_wrapper_osg_Vec4f::_bind_z},
	{"w", &luna_wrapper_osg_Vec4f::_bind_w},
	{"r", &luna_wrapper_osg_Vec4f::_bind_r},
	{"g", &luna_wrapper_osg_Vec4f::_bind_g},
	{"b", &luna_wrapper_osg_Vec4f::_bind_b},
	{"a", &luna_wrapper_osg_Vec4f::_bind_a},
	{"asABGR", &luna_wrapper_osg_Vec4f::_bind_asABGR},
	{"asRGBA", &luna_wrapper_osg_Vec4f::_bind_asRGBA},
	{"valid", &luna_wrapper_osg_Vec4f::_bind_valid},
	{"isNaN", &luna_wrapper_osg_Vec4f::_bind_isNaN},
	{"length", &luna_wrapper_osg_Vec4f::_bind_length},
	{"length2", &luna_wrapper_osg_Vec4f::_bind_length2},
	{"normalize", &luna_wrapper_osg_Vec4f::_bind_normalize},
	{"postmult", &luna_wrapper_osg_Vec4f::_bind_postmult},
	{"__eq", &luna_wrapper_osg_Vec4f::_bind___eq},
	{"op_neq", &luna_wrapper_osg_Vec4f::_bind_op_neq},
	{"__lt", &luna_wrapper_osg_Vec4f::_bind___lt},
	{"op_index", &luna_wrapper_osg_Vec4f::_bind_op_index},
	{"__mul", &luna_wrapper_osg_Vec4f::_bind___mul},
	{"op_mult", &luna_wrapper_osg_Vec4f::_bind_op_mult},
	{"__div", &luna_wrapper_osg_Vec4f::_bind___div},
	{"op_div", &luna_wrapper_osg_Vec4f::_bind_op_div},
	{"__add", &luna_wrapper_osg_Vec4f::_bind___add},
	{"op_add", &luna_wrapper_osg_Vec4f::_bind_op_add},
	{"__sub", &luna_wrapper_osg_Vec4f::_bind___sub},
	{"op_sub", &luna_wrapper_osg_Vec4f::_bind_op_sub},
	{"__unm", &luna_wrapper_osg_Vec4f::_bind___unm},
	{"dynCast", &luna_wrapper_osg_Vec4f::_bind_dynCast},
	{"fromVoid", &luna_wrapper_osg_Vec4f::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Vec4f::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec4f >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec4f >::enumValues[] = {
	{"num_components", osg::Vec4f::num_components},
	{0,0}
};


