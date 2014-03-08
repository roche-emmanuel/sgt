#include <plug_common.h>

class luna_wrapper_osg_Vec4b {
public:
	typedef Luna< osg::Vec4b > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec4b* self= (osg::Vec4b*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Vec4b >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303231) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Vec4b >::check(L,1));
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

		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Vec4b");
		
		return luna_dynamicCast(L,converters,"osg::Vec4b",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
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

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
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


	// Operator checkers:
	// (found 13 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303231) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303231) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303231) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,92303231) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303231) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303231) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303231) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::Vec4b::Vec4b()
	static osg::Vec4b* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4b::Vec4b() function, expected prototype:\nosg::Vec4b::Vec4b()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Vec4b();
	}

	// osg::Vec4b::Vec4b(signed char x, signed char y, signed char z, signed char w)
	static osg::Vec4b* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4b::Vec4b(signed char x, signed char y, signed char z, signed char w) function, expected prototype:\nosg::Vec4b::Vec4b(signed char x, signed char y, signed char z, signed char w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		signed char x=(signed char)lua_tointeger(L,1);
		signed char y=(signed char)lua_tointeger(L,2);
		signed char z=(signed char)lua_tointeger(L,3);
		signed char w=(signed char)lua_tointeger(L,4);

		return new osg::Vec4b(x, y, z, w);
	}

	// Overload binder for osg::Vec4b::Vec4b
	static osg::Vec4b* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Vec4b, cannot match any of the overloads for function Vec4b:\n  Vec4b()\n  Vec4b(signed char, signed char, signed char, signed char)\n");
		return NULL;
	}


	// Function binds:
	// signed char * osg::Vec4b::ptr()
	static int _bind_ptr_overload_1(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in signed char * osg::Vec4b::ptr() function, expected prototype:\nsigned char * osg::Vec4b::ptr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char * osg::Vec4b::ptr(). Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const signed char * osg::Vec4b::ptr() const
	static int _bind_ptr_overload_2(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const signed char * osg::Vec4b::ptr() const function, expected prototype:\nconst signed char * osg::Vec4b::ptr() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const signed char * osg::Vec4b::ptr() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const signed char * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// Overload binder for osg::Vec4b::ptr
	static int _bind_ptr(lua_State *L) {
		if (_lg_typecheck_ptr_overload_1(L)) return _bind_ptr_overload_1(L);
		if (_lg_typecheck_ptr_overload_2(L)) return _bind_ptr_overload_2(L);

		luaL_error(L, "error in function ptr, cannot match any of the overloads for function ptr:\n  ptr()\n  ptr()\n");
		return 0;
	}

	// void osg::Vec4b::set(signed char x, signed char y, signed char z, signed char w)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec4b::set(signed char x, signed char y, signed char z, signed char w) function, expected prototype:\nvoid osg::Vec4b::set(signed char x, signed char y, signed char z, signed char w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		signed char x=(signed char)lua_tointeger(L,2);
		signed char y=(signed char)lua_tointeger(L,3);
		signed char z=(signed char)lua_tointeger(L,4);
		signed char w=(signed char)lua_tointeger(L,5);

		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec4b::set(signed char, signed char, signed char, signed char). Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(x, y, z, w);

		return 0;
	}

	// signed char & osg::Vec4b::x()
	static int _bind_x_overload_1(lua_State *L) {
		if (!_lg_typecheck_x_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in signed char & osg::Vec4b::x() function, expected prototype:\nsigned char & osg::Vec4b::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char & osg::Vec4b::x(). Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char & lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed char osg::Vec4b::x() const
	static int _bind_x_overload_2(lua_State *L) {
		if (!_lg_typecheck_x_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in signed char osg::Vec4b::x() const function, expected prototype:\nsigned char osg::Vec4b::x() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char osg::Vec4b::x() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4b::x
	static int _bind_x(lua_State *L) {
		if (_lg_typecheck_x_overload_1(L)) return _bind_x_overload_1(L);
		if (_lg_typecheck_x_overload_2(L)) return _bind_x_overload_2(L);

		luaL_error(L, "error in function x, cannot match any of the overloads for function x:\n  x()\n  x()\n");
		return 0;
	}

	// signed char & osg::Vec4b::y()
	static int _bind_y_overload_1(lua_State *L) {
		if (!_lg_typecheck_y_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in signed char & osg::Vec4b::y() function, expected prototype:\nsigned char & osg::Vec4b::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char & osg::Vec4b::y(). Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char & lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed char osg::Vec4b::y() const
	static int _bind_y_overload_2(lua_State *L) {
		if (!_lg_typecheck_y_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in signed char osg::Vec4b::y() const function, expected prototype:\nsigned char osg::Vec4b::y() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char osg::Vec4b::y() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4b::y
	static int _bind_y(lua_State *L) {
		if (_lg_typecheck_y_overload_1(L)) return _bind_y_overload_1(L);
		if (_lg_typecheck_y_overload_2(L)) return _bind_y_overload_2(L);

		luaL_error(L, "error in function y, cannot match any of the overloads for function y:\n  y()\n  y()\n");
		return 0;
	}

	// signed char & osg::Vec4b::z()
	static int _bind_z_overload_1(lua_State *L) {
		if (!_lg_typecheck_z_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in signed char & osg::Vec4b::z() function, expected prototype:\nsigned char & osg::Vec4b::z()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char & osg::Vec4b::z(). Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char & lret = self->z();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed char osg::Vec4b::z() const
	static int _bind_z_overload_2(lua_State *L) {
		if (!_lg_typecheck_z_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in signed char osg::Vec4b::z() const function, expected prototype:\nsigned char osg::Vec4b::z() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char osg::Vec4b::z() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char lret = self->z();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4b::z
	static int _bind_z(lua_State *L) {
		if (_lg_typecheck_z_overload_1(L)) return _bind_z_overload_1(L);
		if (_lg_typecheck_z_overload_2(L)) return _bind_z_overload_2(L);

		luaL_error(L, "error in function z, cannot match any of the overloads for function z:\n  z()\n  z()\n");
		return 0;
	}

	// signed char & osg::Vec4b::w()
	static int _bind_w_overload_1(lua_State *L) {
		if (!_lg_typecheck_w_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in signed char & osg::Vec4b::w() function, expected prototype:\nsigned char & osg::Vec4b::w()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char & osg::Vec4b::w(). Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char & lret = self->w();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed char osg::Vec4b::w() const
	static int _bind_w_overload_2(lua_State *L) {
		if (!_lg_typecheck_w_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in signed char osg::Vec4b::w() const function, expected prototype:\nsigned char osg::Vec4b::w() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char osg::Vec4b::w() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char lret = self->w();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4b::w
	static int _bind_w(lua_State *L) {
		if (_lg_typecheck_w_overload_1(L)) return _bind_w_overload_1(L);
		if (_lg_typecheck_w_overload_2(L)) return _bind_w_overload_2(L);

		luaL_error(L, "error in function w, cannot match any of the overloads for function w:\n  w()\n  w()\n");
		return 0;
	}

	// signed char & osg::Vec4b::r()
	static int _bind_r_overload_1(lua_State *L) {
		if (!_lg_typecheck_r_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in signed char & osg::Vec4b::r() function, expected prototype:\nsigned char & osg::Vec4b::r()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char & osg::Vec4b::r(). Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char & lret = self->r();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed char osg::Vec4b::r() const
	static int _bind_r_overload_2(lua_State *L) {
		if (!_lg_typecheck_r_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in signed char osg::Vec4b::r() const function, expected prototype:\nsigned char osg::Vec4b::r() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char osg::Vec4b::r() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char lret = self->r();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4b::r
	static int _bind_r(lua_State *L) {
		if (_lg_typecheck_r_overload_1(L)) return _bind_r_overload_1(L);
		if (_lg_typecheck_r_overload_2(L)) return _bind_r_overload_2(L);

		luaL_error(L, "error in function r, cannot match any of the overloads for function r:\n  r()\n  r()\n");
		return 0;
	}

	// signed char & osg::Vec4b::g()
	static int _bind_g_overload_1(lua_State *L) {
		if (!_lg_typecheck_g_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in signed char & osg::Vec4b::g() function, expected prototype:\nsigned char & osg::Vec4b::g()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char & osg::Vec4b::g(). Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char & lret = self->g();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed char osg::Vec4b::g() const
	static int _bind_g_overload_2(lua_State *L) {
		if (!_lg_typecheck_g_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in signed char osg::Vec4b::g() const function, expected prototype:\nsigned char osg::Vec4b::g() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char osg::Vec4b::g() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char lret = self->g();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4b::g
	static int _bind_g(lua_State *L) {
		if (_lg_typecheck_g_overload_1(L)) return _bind_g_overload_1(L);
		if (_lg_typecheck_g_overload_2(L)) return _bind_g_overload_2(L);

		luaL_error(L, "error in function g, cannot match any of the overloads for function g:\n  g()\n  g()\n");
		return 0;
	}

	// signed char & osg::Vec4b::b()
	static int _bind_b_overload_1(lua_State *L) {
		if (!_lg_typecheck_b_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in signed char & osg::Vec4b::b() function, expected prototype:\nsigned char & osg::Vec4b::b()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char & osg::Vec4b::b(). Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char & lret = self->b();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed char osg::Vec4b::b() const
	static int _bind_b_overload_2(lua_State *L) {
		if (!_lg_typecheck_b_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in signed char osg::Vec4b::b() const function, expected prototype:\nsigned char osg::Vec4b::b() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char osg::Vec4b::b() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char lret = self->b();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4b::b
	static int _bind_b(lua_State *L) {
		if (_lg_typecheck_b_overload_1(L)) return _bind_b_overload_1(L);
		if (_lg_typecheck_b_overload_2(L)) return _bind_b_overload_2(L);

		luaL_error(L, "error in function b, cannot match any of the overloads for function b:\n  b()\n  b()\n");
		return 0;
	}

	// signed char & osg::Vec4b::a()
	static int _bind_a_overload_1(lua_State *L) {
		if (!_lg_typecheck_a_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in signed char & osg::Vec4b::a() function, expected prototype:\nsigned char & osg::Vec4b::a()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char & osg::Vec4b::a(). Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char & lret = self->a();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed char osg::Vec4b::a() const
	static int _bind_a_overload_2(lua_State *L) {
		if (!_lg_typecheck_a_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in signed char osg::Vec4b::a() const function, expected prototype:\nsigned char osg::Vec4b::a() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char osg::Vec4b::a() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char lret = self->a();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4b::a
	static int _bind_a(lua_State *L) {
		if (_lg_typecheck_a_overload_1(L)) return _bind_a_overload_1(L);
		if (_lg_typecheck_a_overload_2(L)) return _bind_a_overload_2(L);

		luaL_error(L, "error in function a, cannot match any of the overloads for function a:\n  a()\n  a()\n");
		return 0;
	}


	// Operator binds:
	// bool osg::Vec4b::operator==(const osg::Vec4b & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec4b::operator==(const osg::Vec4b & v) const function, expected prototype:\nbool osg::Vec4b::operator==(const osg::Vec4b & v) const\nClass arguments details:\narg 1 ID = 92303231\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4b* v_ptr=(Luna< osg::Vec4b >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec4b::operator== function");
		}
		const osg::Vec4b & v=*v_ptr;

		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec4b::operator==(const osg::Vec4b &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Vec4b::operator!=(const osg::Vec4b & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec4b::operator!=(const osg::Vec4b & v) const function, expected prototype:\nbool osg::Vec4b::operator!=(const osg::Vec4b & v) const\nClass arguments details:\narg 1 ID = 92303231\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4b* v_ptr=(Luna< osg::Vec4b >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec4b::operator!= function");
		}
		const osg::Vec4b & v=*v_ptr;

		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec4b::operator!=(const osg::Vec4b &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Vec4b::operator<(const osg::Vec4b & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec4b::operator<(const osg::Vec4b & v) const function, expected prototype:\nbool osg::Vec4b::operator<(const osg::Vec4b & v) const\nClass arguments details:\narg 1 ID = 92303231\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4b* v_ptr=(Luna< osg::Vec4b >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec4b::operator< function");
		}
		const osg::Vec4b & v=*v_ptr;

		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec4b::operator<(const osg::Vec4b &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// signed char & osg::Vec4b::operator[](unsigned int i)
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in signed char & osg::Vec4b::operator[](unsigned int i) function, expected prototype:\nsigned char & osg::Vec4b::operator[](unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char & osg::Vec4b::operator[](unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed char osg::Vec4b::operator[](unsigned int i) const
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in signed char osg::Vec4b::operator[](unsigned int i) const function, expected prototype:\nsigned char osg::Vec4b::operator[](unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char osg::Vec4b::operator[](unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4b::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](unsigned int)\n  operator[](unsigned int)\n");
		return 0;
	}

	// osg::Vec4b osg::Vec4b::operator*(float rhs) const
	static int _bind___mul(lua_State *L) {
		if (!_lg_typecheck___mul(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4b osg::Vec4b::operator*(float rhs) const function, expected prototype:\nosg::Vec4b osg::Vec4b::operator*(float rhs) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4b osg::Vec4b::operator*(float) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4b stack_lret = self->operator*(rhs);
		osg::Vec4b* lret = new osg::Vec4b(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4b >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4b & osg::Vec4b::operator*=(float rhs)
	static int _bind_op_mult(lua_State *L) {
		if (!_lg_typecheck_op_mult(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4b & osg::Vec4b::operator*=(float rhs) function, expected prototype:\nosg::Vec4b & osg::Vec4b::operator*=(float rhs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4b & osg::Vec4b::operator*=(float). Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4b* lret = &self->operator*=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4b >::push(L,lret,false);

		return 1;
	}

	// osg::Vec4b osg::Vec4b::operator/(float rhs) const
	static int _bind___div(lua_State *L) {
		if (!_lg_typecheck___div(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4b osg::Vec4b::operator/(float rhs) const function, expected prototype:\nosg::Vec4b osg::Vec4b::operator/(float rhs) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4b osg::Vec4b::operator/(float) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4b stack_lret = self->operator/(rhs);
		osg::Vec4b* lret = new osg::Vec4b(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4b >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4b & osg::Vec4b::operator/=(float rhs)
	static int _bind_op_div(lua_State *L) {
		if (!_lg_typecheck_op_div(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4b & osg::Vec4b::operator/=(float rhs) function, expected prototype:\nosg::Vec4b & osg::Vec4b::operator/=(float rhs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4b & osg::Vec4b::operator/=(float). Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4b* lret = &self->operator/=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4b >::push(L,lret,false);

		return 1;
	}

	// osg::Vec4b osg::Vec4b::operator+(const osg::Vec4b & rhs) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4b osg::Vec4b::operator+(const osg::Vec4b & rhs) const function, expected prototype:\nosg::Vec4b osg::Vec4b::operator+(const osg::Vec4b & rhs) const\nClass arguments details:\narg 1 ID = 92303231\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4b* rhs_ptr=(Luna< osg::Vec4b >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec4b::operator+ function");
		}
		const osg::Vec4b & rhs=*rhs_ptr;

		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4b osg::Vec4b::operator+(const osg::Vec4b &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4b stack_lret = self->operator+(rhs);
		osg::Vec4b* lret = new osg::Vec4b(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4b >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4b & osg::Vec4b::operator+=(const osg::Vec4b & rhs)
	static int _bind_op_add(lua_State *L) {
		if (!_lg_typecheck_op_add(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4b & osg::Vec4b::operator+=(const osg::Vec4b & rhs) function, expected prototype:\nosg::Vec4b & osg::Vec4b::operator+=(const osg::Vec4b & rhs)\nClass arguments details:\narg 1 ID = 92303231\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4b* rhs_ptr=(Luna< osg::Vec4b >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec4b::operator+= function");
		}
		const osg::Vec4b & rhs=*rhs_ptr;

		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4b & osg::Vec4b::operator+=(const osg::Vec4b &). Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4b* lret = &self->operator+=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4b >::push(L,lret,false);

		return 1;
	}

	// osg::Vec4b osg::Vec4b::operator-(const osg::Vec4b & rhs) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4b osg::Vec4b::operator-(const osg::Vec4b & rhs) const function, expected prototype:\nosg::Vec4b osg::Vec4b::operator-(const osg::Vec4b & rhs) const\nClass arguments details:\narg 1 ID = 92303231\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4b* rhs_ptr=(Luna< osg::Vec4b >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec4b::operator- function");
		}
		const osg::Vec4b & rhs=*rhs_ptr;

		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4b osg::Vec4b::operator-(const osg::Vec4b &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4b stack_lret = self->operator-(rhs);
		osg::Vec4b* lret = new osg::Vec4b(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4b >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4b & osg::Vec4b::operator-=(const osg::Vec4b & rhs)
	static int _bind_op_sub(lua_State *L) {
		if (!_lg_typecheck_op_sub(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4b & osg::Vec4b::operator-=(const osg::Vec4b & rhs) function, expected prototype:\nosg::Vec4b & osg::Vec4b::operator-=(const osg::Vec4b & rhs)\nClass arguments details:\narg 1 ID = 92303231\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4b* rhs_ptr=(Luna< osg::Vec4b >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec4b::operator-= function");
		}
		const osg::Vec4b & rhs=*rhs_ptr;

		osg::Vec4b* self=(Luna< osg::Vec4b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4b & osg::Vec4b::operator-=(const osg::Vec4b &). Got : '%s'\n%s",typeid(Luna< osg::Vec4b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4b* lret = &self->operator-=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4b >::push(L,lret,false);

		return 1;
	}


};

osg::Vec4b* LunaTraits< osg::Vec4b >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Vec4b::_bind_ctor(L);
}

void LunaTraits< osg::Vec4b >::_bind_dtor(osg::Vec4b* obj) {
	delete obj;
}

const char LunaTraits< osg::Vec4b >::className[] = "Vec4b";
const char LunaTraits< osg::Vec4b >::fullName[] = "osg::Vec4b";
const char LunaTraits< osg::Vec4b >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec4b >::parents[] = {0};
const int LunaTraits< osg::Vec4b >::hash = 92303231;
const int LunaTraits< osg::Vec4b >::uniqueIDs[] = {92303231,0};

luna_RegType LunaTraits< osg::Vec4b >::methods[] = {
	{"ptr", &luna_wrapper_osg_Vec4b::_bind_ptr},
	{"set", &luna_wrapper_osg_Vec4b::_bind_set},
	{"x", &luna_wrapper_osg_Vec4b::_bind_x},
	{"y", &luna_wrapper_osg_Vec4b::_bind_y},
	{"z", &luna_wrapper_osg_Vec4b::_bind_z},
	{"w", &luna_wrapper_osg_Vec4b::_bind_w},
	{"r", &luna_wrapper_osg_Vec4b::_bind_r},
	{"g", &luna_wrapper_osg_Vec4b::_bind_g},
	{"b", &luna_wrapper_osg_Vec4b::_bind_b},
	{"a", &luna_wrapper_osg_Vec4b::_bind_a},
	{"__eq", &luna_wrapper_osg_Vec4b::_bind___eq},
	{"op_neq", &luna_wrapper_osg_Vec4b::_bind_op_neq},
	{"__lt", &luna_wrapper_osg_Vec4b::_bind___lt},
	{"op_index", &luna_wrapper_osg_Vec4b::_bind_op_index},
	{"__mul", &luna_wrapper_osg_Vec4b::_bind___mul},
	{"op_mult", &luna_wrapper_osg_Vec4b::_bind_op_mult},
	{"__div", &luna_wrapper_osg_Vec4b::_bind___div},
	{"op_div", &luna_wrapper_osg_Vec4b::_bind_op_div},
	{"__add", &luna_wrapper_osg_Vec4b::_bind___add},
	{"op_add", &luna_wrapper_osg_Vec4b::_bind_op_add},
	{"__sub", &luna_wrapper_osg_Vec4b::_bind___sub},
	{"op_sub", &luna_wrapper_osg_Vec4b::_bind_op_sub},
	{"dynCast", &luna_wrapper_osg_Vec4b::_bind_dynCast},
	{"fromVoid", &luna_wrapper_osg_Vec4b::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Vec4b::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec4b >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec4b >::enumValues[] = {
	{"num_components", osg::Vec4b::num_components},
	{0,0}
};


