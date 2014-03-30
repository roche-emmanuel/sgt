#include <plug_common.h>

class luna_wrapper_osg_Vec3d {
public:
	typedef Luna< osg::Vec3d > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* self= (osg::Vec3d*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Vec3d >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303202) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Vec3d >::check(L,1));
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

		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Vec3d");
		
		return luna_dynamicCast(L,converters,"osg::Vec3d",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303171) ) return false;
		if( (!(Luna< osg::Vec2d >::check(L,1))) ) return false;
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

	inline static bool _lg_typecheck_set_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
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

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,92303202)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,18903838)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 16 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_pow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		return true;
	}


	// Constructor binds:
	// osg::Vec3d::Vec3d()
	static osg::Vec3d* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d::Vec3d() function, expected prototype:\nosg::Vec3d::Vec3d()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Vec3d();
	}

	// osg::Vec3d::Vec3d(const osg::Vec3f & vec)
	static osg::Vec3d* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d::Vec3d(const osg::Vec3f & vec) function, expected prototype:\nosg::Vec3d::Vec3d(const osg::Vec3f & vec)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* vec_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in osg::Vec3d::Vec3d function");
		}
		const osg::Vec3f & vec=*vec_ptr;

		return new osg::Vec3d(vec);
	}

	// osg::Vec3d::Vec3d(double x, double y, double z)
	static osg::Vec3d* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d::Vec3d(double x, double y, double z) function, expected prototype:\nosg::Vec3d::Vec3d(double x, double y, double z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,1);
		double y=(double)lua_tonumber(L,2);
		double z=(double)lua_tonumber(L,3);

		return new osg::Vec3d(x, y, z);
	}

	// osg::Vec3d::Vec3d(const osg::Vec2d & v2, double zz)
	static osg::Vec3d* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d::Vec3d(const osg::Vec2d & v2, double zz) function, expected prototype:\nosg::Vec3d::Vec3d(const osg::Vec2d & v2, double zz)\nClass arguments details:\narg 1 ID = 92303171\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2d* v2_ptr=(Luna< osg::Vec2d >::check(L,1));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in osg::Vec3d::Vec3d function");
		}
		const osg::Vec2d & v2=*v2_ptr;
		double zz=(double)lua_tonumber(L,2);

		return new osg::Vec3d(v2, zz);
	}

	// Overload binder for osg::Vec3d::Vec3d
	static osg::Vec3d* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Vec3d, cannot match any of the overloads for function Vec3d:\n  Vec3d()\n  Vec3d(const osg::Vec3f &)\n  Vec3d(double, double, double)\n  Vec3d(const osg::Vec2d &, double)\n");
		return NULL;
	}


	// Function binds:
	// double * osg::Vec3d::ptr()
	static int _bind_ptr_overload_1(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double * osg::Vec3d::ptr() function, expected prototype:\ndouble * osg::Vec3d::ptr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double * osg::Vec3d::ptr(). Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const double * osg::Vec3d::ptr() const
	static int _bind_ptr_overload_2(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const double * osg::Vec3d::ptr() const function, expected prototype:\nconst double * osg::Vec3d::ptr() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const double * osg::Vec3d::ptr() const. Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const double * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// Overload binder for osg::Vec3d::ptr
	static int _bind_ptr(lua_State *L) {
		if (_lg_typecheck_ptr_overload_1(L)) return _bind_ptr_overload_1(L);
		if (_lg_typecheck_ptr_overload_2(L)) return _bind_ptr_overload_2(L);

		luaL_error(L, "error in function ptr, cannot match any of the overloads for function ptr:\n  ptr()\n  ptr()\n");
		return 0;
	}

	// void osg::Vec3d::set(double x, double y, double z)
	static int _bind_set_overload_1(lua_State *L) {
		if (!_lg_typecheck_set_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3d::set(double x, double y, double z) function, expected prototype:\nvoid osg::Vec3d::set(double x, double y, double z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		double z=(double)lua_tonumber(L,4);

		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3d::set(double, double, double). Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(x, y, z);

		return 0;
	}

	// void osg::Vec3d::set(const osg::Vec3d & rhs)
	static int _bind_set_overload_2(lua_State *L) {
		if (!_lg_typecheck_set_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3d::set(const osg::Vec3d & rhs) function, expected prototype:\nvoid osg::Vec3d::set(const osg::Vec3d & rhs)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* rhs_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec3d::set function");
		}
		const osg::Vec3d & rhs=*rhs_ptr;

		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3d::set(const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(rhs);

		return 0;
	}

	// Overload binder for osg::Vec3d::set
	static int _bind_set(lua_State *L) {
		if (_lg_typecheck_set_overload_1(L)) return _bind_set_overload_1(L);
		if (_lg_typecheck_set_overload_2(L)) return _bind_set_overload_2(L);

		luaL_error(L, "error in function set, cannot match any of the overloads for function set:\n  set(double, double, double)\n  set(const osg::Vec3d &)\n");
		return 0;
	}

	// double & osg::Vec3d::x()
	static int _bind_x_overload_1(lua_State *L) {
		if (!_lg_typecheck_x_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double & osg::Vec3d::x() function, expected prototype:\ndouble & osg::Vec3d::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double & osg::Vec3d::x(). Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double & lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Vec3d::x() const
	static int _bind_x_overload_2(lua_State *L) {
		if (!_lg_typecheck_x_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Vec3d::x() const function, expected prototype:\ndouble osg::Vec3d::x() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Vec3d::x() const. Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec3d::x
	static int _bind_x(lua_State *L) {
		if (_lg_typecheck_x_overload_1(L)) return _bind_x_overload_1(L);
		if (_lg_typecheck_x_overload_2(L)) return _bind_x_overload_2(L);

		luaL_error(L, "error in function x, cannot match any of the overloads for function x:\n  x()\n  x()\n");
		return 0;
	}

	// double & osg::Vec3d::y()
	static int _bind_y_overload_1(lua_State *L) {
		if (!_lg_typecheck_y_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double & osg::Vec3d::y() function, expected prototype:\ndouble & osg::Vec3d::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double & osg::Vec3d::y(). Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double & lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Vec3d::y() const
	static int _bind_y_overload_2(lua_State *L) {
		if (!_lg_typecheck_y_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Vec3d::y() const function, expected prototype:\ndouble osg::Vec3d::y() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Vec3d::y() const. Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec3d::y
	static int _bind_y(lua_State *L) {
		if (_lg_typecheck_y_overload_1(L)) return _bind_y_overload_1(L);
		if (_lg_typecheck_y_overload_2(L)) return _bind_y_overload_2(L);

		luaL_error(L, "error in function y, cannot match any of the overloads for function y:\n  y()\n  y()\n");
		return 0;
	}

	// double & osg::Vec3d::z()
	static int _bind_z_overload_1(lua_State *L) {
		if (!_lg_typecheck_z_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double & osg::Vec3d::z() function, expected prototype:\ndouble & osg::Vec3d::z()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double & osg::Vec3d::z(). Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double & lret = self->z();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Vec3d::z() const
	static int _bind_z_overload_2(lua_State *L) {
		if (!_lg_typecheck_z_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Vec3d::z() const function, expected prototype:\ndouble osg::Vec3d::z() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Vec3d::z() const. Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->z();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec3d::z
	static int _bind_z(lua_State *L) {
		if (_lg_typecheck_z_overload_1(L)) return _bind_z_overload_1(L);
		if (_lg_typecheck_z_overload_2(L)) return _bind_z_overload_2(L);

		luaL_error(L, "error in function z, cannot match any of the overloads for function z:\n  z()\n  z()\n");
		return 0;
	}

	// bool osg::Vec3d::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec3d::valid() const function, expected prototype:\nbool osg::Vec3d::valid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec3d::valid() const. Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Vec3d::isNaN() const
	static int _bind_isNaN(lua_State *L) {
		if (!_lg_typecheck_isNaN(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec3d::isNaN() const function, expected prototype:\nbool osg::Vec3d::isNaN() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec3d::isNaN() const. Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isNaN();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// double osg::Vec3d::length() const
	static int _bind_length(lua_State *L) {
		if (!_lg_typecheck_length(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Vec3d::length() const function, expected prototype:\ndouble osg::Vec3d::length() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Vec3d::length() const. Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Vec3d::length2() const
	static int _bind_length2(lua_State *L) {
		if (!_lg_typecheck_length2(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Vec3d::length2() const function, expected prototype:\ndouble osg::Vec3d::length2() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Vec3d::length2() const. Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->length2();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Vec3d::normalize()
	static int _bind_normalize(lua_State *L) {
		if (!_lg_typecheck_normalize(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Vec3d::normalize() function, expected prototype:\ndouble osg::Vec3d::normalize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Vec3d::normalize(). Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->normalize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec3d osg::Vec3d::vec3d_premult(osg::Vec3d * vec, osg::Matrixd * mat)
	static int _bind_postmult(lua_State *L) {
		if (!_lg_typecheck_postmult(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d osg::Vec3d::vec3d_premult(osg::Vec3d * vec, osg::Matrixd * mat) function, expected prototype:\nosg::Vec3d osg::Vec3d::vec3d_premult(osg::Vec3d * vec, osg::Matrixd * mat)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* vec=(Luna< osg::Vec3d >::check(L,1));
		osg::Matrixd* mat=(Luna< osg::Matrixd >::check(L,2));

		osg::Vec3d stack_lret = vec3d_premult(vec, mat);
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}


	// Operator binds:
	// bool osg::Vec3d::operator==(const osg::Vec3d & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec3d::operator==(const osg::Vec3d & v) const function, expected prototype:\nbool osg::Vec3d::operator==(const osg::Vec3d & v) const\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* v_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec3d::operator== function");
		}
		const osg::Vec3d & v=*v_ptr;

		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec3d::operator==(const osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Vec3d::operator!=(const osg::Vec3d & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec3d::operator!=(const osg::Vec3d & v) const function, expected prototype:\nbool osg::Vec3d::operator!=(const osg::Vec3d & v) const\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* v_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec3d::operator!= function");
		}
		const osg::Vec3d & v=*v_ptr;

		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec3d::operator!=(const osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Vec3d::operator<(const osg::Vec3d & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec3d::operator<(const osg::Vec3d & v) const function, expected prototype:\nbool osg::Vec3d::operator<(const osg::Vec3d & v) const\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* v_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec3d::operator< function");
		}
		const osg::Vec3d & v=*v_ptr;

		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec3d::operator<(const osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// double & osg::Vec3d::operator[](int i)
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double & osg::Vec3d::operator[](int i) function, expected prototype:\ndouble & osg::Vec3d::operator[](int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double & osg::Vec3d::operator[](int). Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Vec3d::operator[](int i) const
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Vec3d::operator[](int i) const function, expected prototype:\ndouble osg::Vec3d::operator[](int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Vec3d::operator[](int) const. Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec3d::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](int)\n  operator[](int)\n");
		return 0;
	}

	// double osg::Vec3d::operator*(const osg::Vec3d & rhs) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Vec3d::operator*(const osg::Vec3d & rhs) const function, expected prototype:\ndouble osg::Vec3d::operator*(const osg::Vec3d & rhs) const\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* rhs_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec3d::operator* function");
		}
		const osg::Vec3d & rhs=*rhs_ptr;

		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Vec3d::operator*(const osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->operator*(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const osg::Vec3d osg::Vec3d::operator*(double rhs) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3d osg::Vec3d::operator*(double rhs) const function, expected prototype:\nconst osg::Vec3d osg::Vec3d::operator*(double rhs) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double rhs=(double)lua_tonumber(L,2);

		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3d osg::Vec3d::operator*(double) const. Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3d stack_lret = self->operator*(rhs);
		const osg::Vec3d* lret = new const osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osg::Vec3d::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const osg::Vec3d &)\n  operator*(double)\n");
		return 0;
	}

	// const osg::Vec3d osg::Vec3d::operator^(const osg::Vec3d & rhs) const
	static int _bind_op_pow(lua_State *L) {
		if (!_lg_typecheck_op_pow(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3d osg::Vec3d::operator^(const osg::Vec3d & rhs) const function, expected prototype:\nconst osg::Vec3d osg::Vec3d::operator^(const osg::Vec3d & rhs) const\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* rhs_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec3d::operator^ function");
		}
		const osg::Vec3d & rhs=*rhs_ptr;

		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3d osg::Vec3d::operator^(const osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3d stack_lret = self->operator^(rhs);
		const osg::Vec3d* lret = new const osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3d & osg::Vec3d::operator*=(double rhs)
	static int _bind_op_mult(lua_State *L) {
		if (!_lg_typecheck_op_mult(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d & osg::Vec3d::operator*=(double rhs) function, expected prototype:\nosg::Vec3d & osg::Vec3d::operator*=(double rhs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double rhs=(double)lua_tonumber(L,2);

		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3d & osg::Vec3d::operator*=(double). Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3d* lret = &self->operator*=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec3d osg::Vec3d::operator/(double rhs) const
	static int _bind___div(lua_State *L) {
		if (!_lg_typecheck___div(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3d osg::Vec3d::operator/(double rhs) const function, expected prototype:\nconst osg::Vec3d osg::Vec3d::operator/(double rhs) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double rhs=(double)lua_tonumber(L,2);

		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3d osg::Vec3d::operator/(double) const. Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3d stack_lret = self->operator/(rhs);
		const osg::Vec3d* lret = new const osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3d & osg::Vec3d::operator/=(double rhs)
	static int _bind_op_div(lua_State *L) {
		if (!_lg_typecheck_op_div(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d & osg::Vec3d::operator/=(double rhs) function, expected prototype:\nosg::Vec3d & osg::Vec3d::operator/=(double rhs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double rhs=(double)lua_tonumber(L,2);

		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3d & osg::Vec3d::operator/=(double). Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3d* lret = &self->operator/=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec3d osg::Vec3d::operator+(const osg::Vec3d & rhs) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3d osg::Vec3d::operator+(const osg::Vec3d & rhs) const function, expected prototype:\nconst osg::Vec3d osg::Vec3d::operator+(const osg::Vec3d & rhs) const\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* rhs_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec3d::operator+ function");
		}
		const osg::Vec3d & rhs=*rhs_ptr;

		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3d osg::Vec3d::operator+(const osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3d stack_lret = self->operator+(rhs);
		const osg::Vec3d* lret = new const osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3d & osg::Vec3d::operator+=(const osg::Vec3d & rhs)
	static int _bind_op_add(lua_State *L) {
		if (!_lg_typecheck_op_add(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d & osg::Vec3d::operator+=(const osg::Vec3d & rhs) function, expected prototype:\nosg::Vec3d & osg::Vec3d::operator+=(const osg::Vec3d & rhs)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* rhs_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec3d::operator+= function");
		}
		const osg::Vec3d & rhs=*rhs_ptr;

		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3d & osg::Vec3d::operator+=(const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3d* lret = &self->operator+=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec3d osg::Vec3d::operator-(const osg::Vec3d & rhs) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3d osg::Vec3d::operator-(const osg::Vec3d & rhs) const function, expected prototype:\nconst osg::Vec3d osg::Vec3d::operator-(const osg::Vec3d & rhs) const\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* rhs_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec3d::operator- function");
		}
		const osg::Vec3d & rhs=*rhs_ptr;

		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3d osg::Vec3d::operator-(const osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3d stack_lret = self->operator-(rhs);
		const osg::Vec3d* lret = new const osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3d & osg::Vec3d::operator-=(const osg::Vec3d & rhs)
	static int _bind_op_sub(lua_State *L) {
		if (!_lg_typecheck_op_sub(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d & osg::Vec3d::operator-=(const osg::Vec3d & rhs) function, expected prototype:\nosg::Vec3d & osg::Vec3d::operator-=(const osg::Vec3d & rhs)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* rhs_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec3d::operator-= function");
		}
		const osg::Vec3d & rhs=*rhs_ptr;

		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3d & osg::Vec3d::operator-=(const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3d* lret = &self->operator-=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec3d osg::Vec3d::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3d osg::Vec3d::operator-() const function, expected prototype:\nconst osg::Vec3d osg::Vec3d::operator-() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3d* self=(Luna< osg::Vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3d osg::Vec3d::operator-() const. Got : '%s'\n%s",typeid(Luna< osg::Vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3d stack_lret = self->operator-();
		const osg::Vec3d* lret = new const osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}


};

osg::Vec3d* LunaTraits< osg::Vec3d >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Vec3d::_bind_ctor(L);
}

void LunaTraits< osg::Vec3d >::_bind_dtor(osg::Vec3d* obj) {
	delete obj;
}

const char LunaTraits< osg::Vec3d >::className[] = "Vec3d";
const char LunaTraits< osg::Vec3d >::fullName[] = "osg::Vec3d";
const char LunaTraits< osg::Vec3d >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec3d >::parents[] = {0};
const int LunaTraits< osg::Vec3d >::hash = 92303202;
const int LunaTraits< osg::Vec3d >::uniqueIDs[] = {92303202,0};

luna_RegType LunaTraits< osg::Vec3d >::methods[] = {
	{"ptr", &luna_wrapper_osg_Vec3d::_bind_ptr},
	{"set", &luna_wrapper_osg_Vec3d::_bind_set},
	{"x", &luna_wrapper_osg_Vec3d::_bind_x},
	{"y", &luna_wrapper_osg_Vec3d::_bind_y},
	{"z", &luna_wrapper_osg_Vec3d::_bind_z},
	{"valid", &luna_wrapper_osg_Vec3d::_bind_valid},
	{"isNaN", &luna_wrapper_osg_Vec3d::_bind_isNaN},
	{"length", &luna_wrapper_osg_Vec3d::_bind_length},
	{"length2", &luna_wrapper_osg_Vec3d::_bind_length2},
	{"normalize", &luna_wrapper_osg_Vec3d::_bind_normalize},
	{"postmult", &luna_wrapper_osg_Vec3d::_bind_postmult},
	{"__eq", &luna_wrapper_osg_Vec3d::_bind___eq},
	{"op_neq", &luna_wrapper_osg_Vec3d::_bind_op_neq},
	{"__lt", &luna_wrapper_osg_Vec3d::_bind___lt},
	{"op_index", &luna_wrapper_osg_Vec3d::_bind_op_index},
	{"__mul", &luna_wrapper_osg_Vec3d::_bind___mul},
	{"op_pow", &luna_wrapper_osg_Vec3d::_bind_op_pow},
	{"op_mult", &luna_wrapper_osg_Vec3d::_bind_op_mult},
	{"__div", &luna_wrapper_osg_Vec3d::_bind___div},
	{"op_div", &luna_wrapper_osg_Vec3d::_bind_op_div},
	{"__add", &luna_wrapper_osg_Vec3d::_bind___add},
	{"op_add", &luna_wrapper_osg_Vec3d::_bind_op_add},
	{"__sub", &luna_wrapper_osg_Vec3d::_bind___sub},
	{"op_sub", &luna_wrapper_osg_Vec3d::_bind_op_sub},
	{"__unm", &luna_wrapper_osg_Vec3d::_bind___unm},
	{"dynCast", &luna_wrapper_osg_Vec3d::_bind_dynCast},
	{"fromVoid", &luna_wrapper_osg_Vec3d::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Vec3d::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec3d >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec3d >::enumValues[] = {
	{"num_components", osg::Vec3d::num_components},
	{0,0}
};


