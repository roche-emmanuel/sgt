#include <plug_common.h>

class luna_wrapper_osg_Vec3b {
public:
	typedef Luna< osg::Vec3b > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3b* self= (osg::Vec3b*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Vec3b >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303200) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Vec3b >::check(L,1));
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

		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Vec3b");
		
		return luna_dynamicCast(L,converters,"osg::Vec3b",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303200) ) return false;
		if( (!(Luna< osg::Vec3b >::check(L,2))) ) return false;
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


	// Operator checkers:
	// (found 13 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303200) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303200) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303200) ) return false;
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

	inline static bool _lg_typecheck___mul(lua_State *L) {
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

		if( !Luna<void>::has_uniqueid(L,2,92303200) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303200) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303200) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303200) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::Vec3b::Vec3b()
	static osg::Vec3b* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3b::Vec3b() function, expected prototype:\nosg::Vec3b::Vec3b()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Vec3b();
	}

	// osg::Vec3b::Vec3b(signed char r, signed char g, signed char b)
	static osg::Vec3b* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3b::Vec3b(signed char r, signed char g, signed char b) function, expected prototype:\nosg::Vec3b::Vec3b(signed char r, signed char g, signed char b)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		signed char r=(signed char)lua_tointeger(L,1);
		signed char g=(signed char)lua_tointeger(L,2);
		signed char b=(signed char)lua_tointeger(L,3);

		return new osg::Vec3b(r, g, b);
	}

	// Overload binder for osg::Vec3b::Vec3b
	static osg::Vec3b* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Vec3b, cannot match any of the overloads for function Vec3b:\n  Vec3b()\n  Vec3b(signed char, signed char, signed char)\n");
		return NULL;
	}


	// Function binds:
	// signed char * osg::Vec3b::ptr()
	static int _bind_ptr_overload_1(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in signed char * osg::Vec3b::ptr() function, expected prototype:\nsigned char * osg::Vec3b::ptr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char * osg::Vec3b::ptr(). Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const signed char * osg::Vec3b::ptr() const
	static int _bind_ptr_overload_2(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const signed char * osg::Vec3b::ptr() const function, expected prototype:\nconst signed char * osg::Vec3b::ptr() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const signed char * osg::Vec3b::ptr() const. Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const signed char * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// Overload binder for osg::Vec3b::ptr
	static int _bind_ptr(lua_State *L) {
		if (_lg_typecheck_ptr_overload_1(L)) return _bind_ptr_overload_1(L);
		if (_lg_typecheck_ptr_overload_2(L)) return _bind_ptr_overload_2(L);

		luaL_error(L, "error in function ptr, cannot match any of the overloads for function ptr:\n  ptr()\n  ptr()\n");
		return 0;
	}

	// void osg::Vec3b::set(signed char r, signed char g, signed char b)
	static int _bind_set_overload_1(lua_State *L) {
		if (!_lg_typecheck_set_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3b::set(signed char r, signed char g, signed char b) function, expected prototype:\nvoid osg::Vec3b::set(signed char r, signed char g, signed char b)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		signed char r=(signed char)lua_tointeger(L,2);
		signed char g=(signed char)lua_tointeger(L,3);
		signed char b=(signed char)lua_tointeger(L,4);

		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3b::set(signed char, signed char, signed char). Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(r, g, b);

		return 0;
	}

	// void osg::Vec3b::set(const osg::Vec3b & rhs)
	static int _bind_set_overload_2(lua_State *L) {
		if (!_lg_typecheck_set_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3b::set(const osg::Vec3b & rhs) function, expected prototype:\nvoid osg::Vec3b::set(const osg::Vec3b & rhs)\nClass arguments details:\narg 1 ID = 92303200\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3b* rhs_ptr=(Luna< osg::Vec3b >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec3b::set function");
		}
		const osg::Vec3b & rhs=*rhs_ptr;

		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3b::set(const osg::Vec3b &). Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(rhs);

		return 0;
	}

	// Overload binder for osg::Vec3b::set
	static int _bind_set(lua_State *L) {
		if (_lg_typecheck_set_overload_1(L)) return _bind_set_overload_1(L);
		if (_lg_typecheck_set_overload_2(L)) return _bind_set_overload_2(L);

		luaL_error(L, "error in function set, cannot match any of the overloads for function set:\n  set(signed char, signed char, signed char)\n  set(const osg::Vec3b &)\n");
		return 0;
	}

	// signed char & osg::Vec3b::x()
	static int _bind_x_overload_1(lua_State *L) {
		if (!_lg_typecheck_x_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in signed char & osg::Vec3b::x() function, expected prototype:\nsigned char & osg::Vec3b::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char & osg::Vec3b::x(). Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char & lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed char osg::Vec3b::x() const
	static int _bind_x_overload_2(lua_State *L) {
		if (!_lg_typecheck_x_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in signed char osg::Vec3b::x() const function, expected prototype:\nsigned char osg::Vec3b::x() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char osg::Vec3b::x() const. Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec3b::x
	static int _bind_x(lua_State *L) {
		if (_lg_typecheck_x_overload_1(L)) return _bind_x_overload_1(L);
		if (_lg_typecheck_x_overload_2(L)) return _bind_x_overload_2(L);

		luaL_error(L, "error in function x, cannot match any of the overloads for function x:\n  x()\n  x()\n");
		return 0;
	}

	// signed char & osg::Vec3b::y()
	static int _bind_y_overload_1(lua_State *L) {
		if (!_lg_typecheck_y_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in signed char & osg::Vec3b::y() function, expected prototype:\nsigned char & osg::Vec3b::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char & osg::Vec3b::y(). Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char & lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed char osg::Vec3b::y() const
	static int _bind_y_overload_2(lua_State *L) {
		if (!_lg_typecheck_y_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in signed char osg::Vec3b::y() const function, expected prototype:\nsigned char osg::Vec3b::y() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char osg::Vec3b::y() const. Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec3b::y
	static int _bind_y(lua_State *L) {
		if (_lg_typecheck_y_overload_1(L)) return _bind_y_overload_1(L);
		if (_lg_typecheck_y_overload_2(L)) return _bind_y_overload_2(L);

		luaL_error(L, "error in function y, cannot match any of the overloads for function y:\n  y()\n  y()\n");
		return 0;
	}

	// signed char & osg::Vec3b::z()
	static int _bind_z_overload_1(lua_State *L) {
		if (!_lg_typecheck_z_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in signed char & osg::Vec3b::z() function, expected prototype:\nsigned char & osg::Vec3b::z()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char & osg::Vec3b::z(). Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char & lret = self->z();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed char osg::Vec3b::z() const
	static int _bind_z_overload_2(lua_State *L) {
		if (!_lg_typecheck_z_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in signed char osg::Vec3b::z() const function, expected prototype:\nsigned char osg::Vec3b::z() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char osg::Vec3b::z() const. Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char lret = self->z();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec3b::z
	static int _bind_z(lua_State *L) {
		if (_lg_typecheck_z_overload_1(L)) return _bind_z_overload_1(L);
		if (_lg_typecheck_z_overload_2(L)) return _bind_z_overload_2(L);

		luaL_error(L, "error in function z, cannot match any of the overloads for function z:\n  z()\n  z()\n");
		return 0;
	}

	// signed char & osg::Vec3b::r()
	static int _bind_r_overload_1(lua_State *L) {
		if (!_lg_typecheck_r_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in signed char & osg::Vec3b::r() function, expected prototype:\nsigned char & osg::Vec3b::r()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char & osg::Vec3b::r(). Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char & lret = self->r();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed char osg::Vec3b::r() const
	static int _bind_r_overload_2(lua_State *L) {
		if (!_lg_typecheck_r_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in signed char osg::Vec3b::r() const function, expected prototype:\nsigned char osg::Vec3b::r() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char osg::Vec3b::r() const. Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char lret = self->r();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec3b::r
	static int _bind_r(lua_State *L) {
		if (_lg_typecheck_r_overload_1(L)) return _bind_r_overload_1(L);
		if (_lg_typecheck_r_overload_2(L)) return _bind_r_overload_2(L);

		luaL_error(L, "error in function r, cannot match any of the overloads for function r:\n  r()\n  r()\n");
		return 0;
	}

	// signed char & osg::Vec3b::g()
	static int _bind_g_overload_1(lua_State *L) {
		if (!_lg_typecheck_g_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in signed char & osg::Vec3b::g() function, expected prototype:\nsigned char & osg::Vec3b::g()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char & osg::Vec3b::g(). Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char & lret = self->g();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed char osg::Vec3b::g() const
	static int _bind_g_overload_2(lua_State *L) {
		if (!_lg_typecheck_g_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in signed char osg::Vec3b::g() const function, expected prototype:\nsigned char osg::Vec3b::g() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char osg::Vec3b::g() const. Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char lret = self->g();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec3b::g
	static int _bind_g(lua_State *L) {
		if (_lg_typecheck_g_overload_1(L)) return _bind_g_overload_1(L);
		if (_lg_typecheck_g_overload_2(L)) return _bind_g_overload_2(L);

		luaL_error(L, "error in function g, cannot match any of the overloads for function g:\n  g()\n  g()\n");
		return 0;
	}

	// signed char & osg::Vec3b::b()
	static int _bind_b_overload_1(lua_State *L) {
		if (!_lg_typecheck_b_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in signed char & osg::Vec3b::b() function, expected prototype:\nsigned char & osg::Vec3b::b()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char & osg::Vec3b::b(). Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char & lret = self->b();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed char osg::Vec3b::b() const
	static int _bind_b_overload_2(lua_State *L) {
		if (!_lg_typecheck_b_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in signed char osg::Vec3b::b() const function, expected prototype:\nsigned char osg::Vec3b::b() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char osg::Vec3b::b() const. Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char lret = self->b();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec3b::b
	static int _bind_b(lua_State *L) {
		if (_lg_typecheck_b_overload_1(L)) return _bind_b_overload_1(L);
		if (_lg_typecheck_b_overload_2(L)) return _bind_b_overload_2(L);

		luaL_error(L, "error in function b, cannot match any of the overloads for function b:\n  b()\n  b()\n");
		return 0;
	}


	// Operator binds:
	// bool osg::Vec3b::operator==(const osg::Vec3b & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec3b::operator==(const osg::Vec3b & v) const function, expected prototype:\nbool osg::Vec3b::operator==(const osg::Vec3b & v) const\nClass arguments details:\narg 1 ID = 92303200\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3b* v_ptr=(Luna< osg::Vec3b >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec3b::operator== function");
		}
		const osg::Vec3b & v=*v_ptr;

		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec3b::operator==(const osg::Vec3b &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Vec3b::operator!=(const osg::Vec3b & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec3b::operator!=(const osg::Vec3b & v) const function, expected prototype:\nbool osg::Vec3b::operator!=(const osg::Vec3b & v) const\nClass arguments details:\narg 1 ID = 92303200\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3b* v_ptr=(Luna< osg::Vec3b >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec3b::operator!= function");
		}
		const osg::Vec3b & v=*v_ptr;

		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec3b::operator!=(const osg::Vec3b &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Vec3b::operator<(const osg::Vec3b & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec3b::operator<(const osg::Vec3b & v) const function, expected prototype:\nbool osg::Vec3b::operator<(const osg::Vec3b & v) const\nClass arguments details:\narg 1 ID = 92303200\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3b* v_ptr=(Luna< osg::Vec3b >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec3b::operator< function");
		}
		const osg::Vec3b & v=*v_ptr;

		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec3b::operator<(const osg::Vec3b &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// signed char & osg::Vec3b::operator[](unsigned int i)
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in signed char & osg::Vec3b::operator[](unsigned int i) function, expected prototype:\nsigned char & osg::Vec3b::operator[](unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char & osg::Vec3b::operator[](unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed char osg::Vec3b::operator[](unsigned int i) const
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in signed char osg::Vec3b::operator[](unsigned int i) const function, expected prototype:\nsigned char osg::Vec3b::operator[](unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char osg::Vec3b::operator[](unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec3b::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](unsigned int)\n  operator[](unsigned int)\n");
		return 0;
	}

	// osg::Vec3b osg::Vec3b::operator*(float rhs) const
	static int _bind___mul(lua_State *L) {
		if (!_lg_typecheck___mul(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3b osg::Vec3b::operator*(float rhs) const function, expected prototype:\nosg::Vec3b osg::Vec3b::operator*(float rhs) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3b osg::Vec3b::operator*(float) const. Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3b stack_lret = self->operator*(rhs);
		osg::Vec3b* lret = new osg::Vec3b(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3b >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3b & osg::Vec3b::operator*=(float rhs)
	static int _bind_op_mult(lua_State *L) {
		if (!_lg_typecheck_op_mult(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3b & osg::Vec3b::operator*=(float rhs) function, expected prototype:\nosg::Vec3b & osg::Vec3b::operator*=(float rhs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3b & osg::Vec3b::operator*=(float). Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3b* lret = &self->operator*=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3b >::push(L,lret,false);

		return 1;
	}

	// osg::Vec3b osg::Vec3b::operator/(float rhs) const
	static int _bind___div(lua_State *L) {
		if (!_lg_typecheck___div(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3b osg::Vec3b::operator/(float rhs) const function, expected prototype:\nosg::Vec3b osg::Vec3b::operator/(float rhs) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3b osg::Vec3b::operator/(float) const. Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3b stack_lret = self->operator/(rhs);
		osg::Vec3b* lret = new osg::Vec3b(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3b >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3b & osg::Vec3b::operator/=(float rhs)
	static int _bind_op_div(lua_State *L) {
		if (!_lg_typecheck_op_div(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3b & osg::Vec3b::operator/=(float rhs) function, expected prototype:\nosg::Vec3b & osg::Vec3b::operator/=(float rhs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3b & osg::Vec3b::operator/=(float). Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3b* lret = &self->operator/=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3b >::push(L,lret,false);

		return 1;
	}

	// osg::Vec3b osg::Vec3b::operator+(const osg::Vec3b & rhs) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3b osg::Vec3b::operator+(const osg::Vec3b & rhs) const function, expected prototype:\nosg::Vec3b osg::Vec3b::operator+(const osg::Vec3b & rhs) const\nClass arguments details:\narg 1 ID = 92303200\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3b* rhs_ptr=(Luna< osg::Vec3b >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec3b::operator+ function");
		}
		const osg::Vec3b & rhs=*rhs_ptr;

		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3b osg::Vec3b::operator+(const osg::Vec3b &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3b stack_lret = self->operator+(rhs);
		osg::Vec3b* lret = new osg::Vec3b(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3b >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3b & osg::Vec3b::operator+=(const osg::Vec3b & rhs)
	static int _bind_op_add(lua_State *L) {
		if (!_lg_typecheck_op_add(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3b & osg::Vec3b::operator+=(const osg::Vec3b & rhs) function, expected prototype:\nosg::Vec3b & osg::Vec3b::operator+=(const osg::Vec3b & rhs)\nClass arguments details:\narg 1 ID = 92303200\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3b* rhs_ptr=(Luna< osg::Vec3b >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec3b::operator+= function");
		}
		const osg::Vec3b & rhs=*rhs_ptr;

		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3b & osg::Vec3b::operator+=(const osg::Vec3b &). Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3b* lret = &self->operator+=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3b >::push(L,lret,false);

		return 1;
	}

	// osg::Vec3b osg::Vec3b::operator-(const osg::Vec3b & rhs) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3b osg::Vec3b::operator-(const osg::Vec3b & rhs) const function, expected prototype:\nosg::Vec3b osg::Vec3b::operator-(const osg::Vec3b & rhs) const\nClass arguments details:\narg 1 ID = 92303200\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3b* rhs_ptr=(Luna< osg::Vec3b >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec3b::operator- function");
		}
		const osg::Vec3b & rhs=*rhs_ptr;

		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3b osg::Vec3b::operator-(const osg::Vec3b &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3b stack_lret = self->operator-(rhs);
		osg::Vec3b* lret = new osg::Vec3b(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3b >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3b & osg::Vec3b::operator-=(const osg::Vec3b & rhs)
	static int _bind_op_sub(lua_State *L) {
		if (!_lg_typecheck_op_sub(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3b & osg::Vec3b::operator-=(const osg::Vec3b & rhs) function, expected prototype:\nosg::Vec3b & osg::Vec3b::operator-=(const osg::Vec3b & rhs)\nClass arguments details:\narg 1 ID = 92303200\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3b* rhs_ptr=(Luna< osg::Vec3b >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec3b::operator-= function");
		}
		const osg::Vec3b & rhs=*rhs_ptr;

		osg::Vec3b* self=(Luna< osg::Vec3b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3b & osg::Vec3b::operator-=(const osg::Vec3b &). Got : '%s'\n%s",typeid(Luna< osg::Vec3b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3b* lret = &self->operator-=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3b >::push(L,lret,false);

		return 1;
	}


};

osg::Vec3b* LunaTraits< osg::Vec3b >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Vec3b::_bind_ctor(L);
}

void LunaTraits< osg::Vec3b >::_bind_dtor(osg::Vec3b* obj) {
	delete obj;
}

const char LunaTraits< osg::Vec3b >::className[] = "Vec3b";
const char LunaTraits< osg::Vec3b >::fullName[] = "osg::Vec3b";
const char LunaTraits< osg::Vec3b >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec3b >::parents[] = {0};
const int LunaTraits< osg::Vec3b >::hash = 92303200;
const int LunaTraits< osg::Vec3b >::uniqueIDs[] = {92303200,0};

luna_RegType LunaTraits< osg::Vec3b >::methods[] = {
	{"ptr", &luna_wrapper_osg_Vec3b::_bind_ptr},
	{"set", &luna_wrapper_osg_Vec3b::_bind_set},
	{"x", &luna_wrapper_osg_Vec3b::_bind_x},
	{"y", &luna_wrapper_osg_Vec3b::_bind_y},
	{"z", &luna_wrapper_osg_Vec3b::_bind_z},
	{"r", &luna_wrapper_osg_Vec3b::_bind_r},
	{"g", &luna_wrapper_osg_Vec3b::_bind_g},
	{"b", &luna_wrapper_osg_Vec3b::_bind_b},
	{"__eq", &luna_wrapper_osg_Vec3b::_bind___eq},
	{"op_neq", &luna_wrapper_osg_Vec3b::_bind_op_neq},
	{"__lt", &luna_wrapper_osg_Vec3b::_bind___lt},
	{"op_index", &luna_wrapper_osg_Vec3b::_bind_op_index},
	{"__mul", &luna_wrapper_osg_Vec3b::_bind___mul},
	{"op_mult", &luna_wrapper_osg_Vec3b::_bind_op_mult},
	{"__div", &luna_wrapper_osg_Vec3b::_bind___div},
	{"op_div", &luna_wrapper_osg_Vec3b::_bind_op_div},
	{"__add", &luna_wrapper_osg_Vec3b::_bind___add},
	{"op_add", &luna_wrapper_osg_Vec3b::_bind_op_add},
	{"__sub", &luna_wrapper_osg_Vec3b::_bind___sub},
	{"op_sub", &luna_wrapper_osg_Vec3b::_bind_op_sub},
	{"dynCast", &luna_wrapper_osg_Vec3b::_bind_dynCast},
	{"fromVoid", &luna_wrapper_osg_Vec3b::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Vec3b::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec3b >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec3b >::enumValues[] = {
	{"num_components", osg::Vec3b::num_components},
	{0,0}
};


