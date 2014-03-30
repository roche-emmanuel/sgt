#include <plug_common.h>

class luna_wrapper_osg_Vec2b {
public:
	typedef Luna< osg::Vec2b > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec2b* self= (osg::Vec2b*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Vec2b >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303169) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Vec2b >::check(L,1));
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

		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Vec2b");
		
		return luna_dynamicCast(L,converters,"osg::Vec2b",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303169) ) return false;
		if( (!(Luna< osg::Vec2b >::check(L,2))) ) return false;
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


	// Operator checkers:
	// (found 13 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303169) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303169) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303169) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,92303169) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303169) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303169) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303169) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::Vec2b::Vec2b()
	static osg::Vec2b* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2b::Vec2b() function, expected prototype:\nosg::Vec2b::Vec2b()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Vec2b();
	}

	// osg::Vec2b::Vec2b(signed char r, signed char g)
	static osg::Vec2b* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2b::Vec2b(signed char r, signed char g) function, expected prototype:\nosg::Vec2b::Vec2b(signed char r, signed char g)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		signed char r=(signed char)lua_tointeger(L,1);
		signed char g=(signed char)lua_tointeger(L,2);

		return new osg::Vec2b(r, g);
	}

	// Overload binder for osg::Vec2b::Vec2b
	static osg::Vec2b* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Vec2b, cannot match any of the overloads for function Vec2b:\n  Vec2b()\n  Vec2b(signed char, signed char)\n");
		return NULL;
	}


	// Function binds:
	// signed char * osg::Vec2b::ptr()
	static int _bind_ptr_overload_1(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in signed char * osg::Vec2b::ptr() function, expected prototype:\nsigned char * osg::Vec2b::ptr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char * osg::Vec2b::ptr(). Got : '%s'\n%s",typeid(Luna< osg::Vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const signed char * osg::Vec2b::ptr() const
	static int _bind_ptr_overload_2(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const signed char * osg::Vec2b::ptr() const function, expected prototype:\nconst signed char * osg::Vec2b::ptr() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const signed char * osg::Vec2b::ptr() const. Got : '%s'\n%s",typeid(Luna< osg::Vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const signed char * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// Overload binder for osg::Vec2b::ptr
	static int _bind_ptr(lua_State *L) {
		if (_lg_typecheck_ptr_overload_1(L)) return _bind_ptr_overload_1(L);
		if (_lg_typecheck_ptr_overload_2(L)) return _bind_ptr_overload_2(L);

		luaL_error(L, "error in function ptr, cannot match any of the overloads for function ptr:\n  ptr()\n  ptr()\n");
		return 0;
	}

	// void osg::Vec2b::set(signed char x, signed char y)
	static int _bind_set_overload_1(lua_State *L) {
		if (!_lg_typecheck_set_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec2b::set(signed char x, signed char y) function, expected prototype:\nvoid osg::Vec2b::set(signed char x, signed char y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		signed char x=(signed char)lua_tointeger(L,2);
		signed char y=(signed char)lua_tointeger(L,3);

		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec2b::set(signed char, signed char). Got : '%s'\n%s",typeid(Luna< osg::Vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(x, y);

		return 0;
	}

	// void osg::Vec2b::set(const osg::Vec2b & rhs)
	static int _bind_set_overload_2(lua_State *L) {
		if (!_lg_typecheck_set_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec2b::set(const osg::Vec2b & rhs) function, expected prototype:\nvoid osg::Vec2b::set(const osg::Vec2b & rhs)\nClass arguments details:\narg 1 ID = 92303169\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2b* rhs_ptr=(Luna< osg::Vec2b >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec2b::set function");
		}
		const osg::Vec2b & rhs=*rhs_ptr;

		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec2b::set(const osg::Vec2b &). Got : '%s'\n%s",typeid(Luna< osg::Vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(rhs);

		return 0;
	}

	// Overload binder for osg::Vec2b::set
	static int _bind_set(lua_State *L) {
		if (_lg_typecheck_set_overload_1(L)) return _bind_set_overload_1(L);
		if (_lg_typecheck_set_overload_2(L)) return _bind_set_overload_2(L);

		luaL_error(L, "error in function set, cannot match any of the overloads for function set:\n  set(signed char, signed char)\n  set(const osg::Vec2b &)\n");
		return 0;
	}

	// signed char & osg::Vec2b::x()
	static int _bind_x_overload_1(lua_State *L) {
		if (!_lg_typecheck_x_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in signed char & osg::Vec2b::x() function, expected prototype:\nsigned char & osg::Vec2b::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char & osg::Vec2b::x(). Got : '%s'\n%s",typeid(Luna< osg::Vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char & lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed char osg::Vec2b::x() const
	static int _bind_x_overload_2(lua_State *L) {
		if (!_lg_typecheck_x_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in signed char osg::Vec2b::x() const function, expected prototype:\nsigned char osg::Vec2b::x() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char osg::Vec2b::x() const. Got : '%s'\n%s",typeid(Luna< osg::Vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec2b::x
	static int _bind_x(lua_State *L) {
		if (_lg_typecheck_x_overload_1(L)) return _bind_x_overload_1(L);
		if (_lg_typecheck_x_overload_2(L)) return _bind_x_overload_2(L);

		luaL_error(L, "error in function x, cannot match any of the overloads for function x:\n  x()\n  x()\n");
		return 0;
	}

	// signed char & osg::Vec2b::y()
	static int _bind_y_overload_1(lua_State *L) {
		if (!_lg_typecheck_y_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in signed char & osg::Vec2b::y() function, expected prototype:\nsigned char & osg::Vec2b::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char & osg::Vec2b::y(). Got : '%s'\n%s",typeid(Luna< osg::Vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char & lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed char osg::Vec2b::y() const
	static int _bind_y_overload_2(lua_State *L) {
		if (!_lg_typecheck_y_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in signed char osg::Vec2b::y() const function, expected prototype:\nsigned char osg::Vec2b::y() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char osg::Vec2b::y() const. Got : '%s'\n%s",typeid(Luna< osg::Vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec2b::y
	static int _bind_y(lua_State *L) {
		if (_lg_typecheck_y_overload_1(L)) return _bind_y_overload_1(L);
		if (_lg_typecheck_y_overload_2(L)) return _bind_y_overload_2(L);

		luaL_error(L, "error in function y, cannot match any of the overloads for function y:\n  y()\n  y()\n");
		return 0;
	}

	// signed char & osg::Vec2b::r()
	static int _bind_r_overload_1(lua_State *L) {
		if (!_lg_typecheck_r_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in signed char & osg::Vec2b::r() function, expected prototype:\nsigned char & osg::Vec2b::r()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char & osg::Vec2b::r(). Got : '%s'\n%s",typeid(Luna< osg::Vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char & lret = self->r();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed char osg::Vec2b::r() const
	static int _bind_r_overload_2(lua_State *L) {
		if (!_lg_typecheck_r_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in signed char osg::Vec2b::r() const function, expected prototype:\nsigned char osg::Vec2b::r() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char osg::Vec2b::r() const. Got : '%s'\n%s",typeid(Luna< osg::Vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char lret = self->r();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec2b::r
	static int _bind_r(lua_State *L) {
		if (_lg_typecheck_r_overload_1(L)) return _bind_r_overload_1(L);
		if (_lg_typecheck_r_overload_2(L)) return _bind_r_overload_2(L);

		luaL_error(L, "error in function r, cannot match any of the overloads for function r:\n  r()\n  r()\n");
		return 0;
	}

	// signed char & osg::Vec2b::g()
	static int _bind_g_overload_1(lua_State *L) {
		if (!_lg_typecheck_g_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in signed char & osg::Vec2b::g() function, expected prototype:\nsigned char & osg::Vec2b::g()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char & osg::Vec2b::g(). Got : '%s'\n%s",typeid(Luna< osg::Vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char & lret = self->g();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed char osg::Vec2b::g() const
	static int _bind_g_overload_2(lua_State *L) {
		if (!_lg_typecheck_g_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in signed char osg::Vec2b::g() const function, expected prototype:\nsigned char osg::Vec2b::g() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char osg::Vec2b::g() const. Got : '%s'\n%s",typeid(Luna< osg::Vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char lret = self->g();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec2b::g
	static int _bind_g(lua_State *L) {
		if (_lg_typecheck_g_overload_1(L)) return _bind_g_overload_1(L);
		if (_lg_typecheck_g_overload_2(L)) return _bind_g_overload_2(L);

		luaL_error(L, "error in function g, cannot match any of the overloads for function g:\n  g()\n  g()\n");
		return 0;
	}


	// Operator binds:
	// bool osg::Vec2b::operator==(const osg::Vec2b & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec2b::operator==(const osg::Vec2b & v) const function, expected prototype:\nbool osg::Vec2b::operator==(const osg::Vec2b & v) const\nClass arguments details:\narg 1 ID = 92303169\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2b* v_ptr=(Luna< osg::Vec2b >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec2b::operator== function");
		}
		const osg::Vec2b & v=*v_ptr;

		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec2b::operator==(const osg::Vec2b &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Vec2b::operator!=(const osg::Vec2b & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec2b::operator!=(const osg::Vec2b & v) const function, expected prototype:\nbool osg::Vec2b::operator!=(const osg::Vec2b & v) const\nClass arguments details:\narg 1 ID = 92303169\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2b* v_ptr=(Luna< osg::Vec2b >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec2b::operator!= function");
		}
		const osg::Vec2b & v=*v_ptr;

		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec2b::operator!=(const osg::Vec2b &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Vec2b::operator<(const osg::Vec2b & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec2b::operator<(const osg::Vec2b & v) const function, expected prototype:\nbool osg::Vec2b::operator<(const osg::Vec2b & v) const\nClass arguments details:\narg 1 ID = 92303169\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2b* v_ptr=(Luna< osg::Vec2b >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec2b::operator< function");
		}
		const osg::Vec2b & v=*v_ptr;

		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec2b::operator<(const osg::Vec2b &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// signed char & osg::Vec2b::operator[](int i)
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in signed char & osg::Vec2b::operator[](int i) function, expected prototype:\nsigned char & osg::Vec2b::operator[](int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char & osg::Vec2b::operator[](int). Got : '%s'\n%s",typeid(Luna< osg::Vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed char osg::Vec2b::operator[](int i) const
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in signed char osg::Vec2b::operator[](int i) const function, expected prototype:\nsigned char osg::Vec2b::operator[](int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed char osg::Vec2b::operator[](int) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed char lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec2b::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](int)\n  operator[](int)\n");
		return 0;
	}

	// osg::Vec2b osg::Vec2b::operator*(float rhs) const
	static int _bind___mul(lua_State *L) {
		if (!_lg_typecheck___mul(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2b osg::Vec2b::operator*(float rhs) const function, expected prototype:\nosg::Vec2b osg::Vec2b::operator*(float rhs) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec2b osg::Vec2b::operator*(float) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec2b stack_lret = self->operator*(rhs);
		osg::Vec2b* lret = new osg::Vec2b(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2b >::push(L,lret,true);

		return 1;
	}

	// osg::Vec2b & osg::Vec2b::operator*=(float rhs)
	static int _bind_op_mult(lua_State *L) {
		if (!_lg_typecheck_op_mult(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2b & osg::Vec2b::operator*=(float rhs) function, expected prototype:\nosg::Vec2b & osg::Vec2b::operator*=(float rhs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec2b & osg::Vec2b::operator*=(float). Got : '%s'\n%s",typeid(Luna< osg::Vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec2b* lret = &self->operator*=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2b >::push(L,lret,false);

		return 1;
	}

	// osg::Vec2b osg::Vec2b::operator/(float rhs) const
	static int _bind___div(lua_State *L) {
		if (!_lg_typecheck___div(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2b osg::Vec2b::operator/(float rhs) const function, expected prototype:\nosg::Vec2b osg::Vec2b::operator/(float rhs) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec2b osg::Vec2b::operator/(float) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec2b stack_lret = self->operator/(rhs);
		osg::Vec2b* lret = new osg::Vec2b(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2b >::push(L,lret,true);

		return 1;
	}

	// osg::Vec2b & osg::Vec2b::operator/=(float rhs)
	static int _bind_op_div(lua_State *L) {
		if (!_lg_typecheck_op_div(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2b & osg::Vec2b::operator/=(float rhs) function, expected prototype:\nosg::Vec2b & osg::Vec2b::operator/=(float rhs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec2b & osg::Vec2b::operator/=(float). Got : '%s'\n%s",typeid(Luna< osg::Vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec2b* lret = &self->operator/=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2b >::push(L,lret,false);

		return 1;
	}

	// osg::Vec2b osg::Vec2b::operator+(const osg::Vec2b & rhs) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2b osg::Vec2b::operator+(const osg::Vec2b & rhs) const function, expected prototype:\nosg::Vec2b osg::Vec2b::operator+(const osg::Vec2b & rhs) const\nClass arguments details:\narg 1 ID = 92303169\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2b* rhs_ptr=(Luna< osg::Vec2b >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec2b::operator+ function");
		}
		const osg::Vec2b & rhs=*rhs_ptr;

		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec2b osg::Vec2b::operator+(const osg::Vec2b &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec2b stack_lret = self->operator+(rhs);
		osg::Vec2b* lret = new osg::Vec2b(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2b >::push(L,lret,true);

		return 1;
	}

	// osg::Vec2b & osg::Vec2b::operator+=(const osg::Vec2b & rhs)
	static int _bind_op_add(lua_State *L) {
		if (!_lg_typecheck_op_add(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2b & osg::Vec2b::operator+=(const osg::Vec2b & rhs) function, expected prototype:\nosg::Vec2b & osg::Vec2b::operator+=(const osg::Vec2b & rhs)\nClass arguments details:\narg 1 ID = 92303169\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2b* rhs_ptr=(Luna< osg::Vec2b >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec2b::operator+= function");
		}
		const osg::Vec2b & rhs=*rhs_ptr;

		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec2b & osg::Vec2b::operator+=(const osg::Vec2b &). Got : '%s'\n%s",typeid(Luna< osg::Vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec2b* lret = &self->operator+=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2b >::push(L,lret,false);

		return 1;
	}

	// osg::Vec2b osg::Vec2b::operator-(const osg::Vec2b & rhs) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2b osg::Vec2b::operator-(const osg::Vec2b & rhs) const function, expected prototype:\nosg::Vec2b osg::Vec2b::operator-(const osg::Vec2b & rhs) const\nClass arguments details:\narg 1 ID = 92303169\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2b* rhs_ptr=(Luna< osg::Vec2b >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec2b::operator- function");
		}
		const osg::Vec2b & rhs=*rhs_ptr;

		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec2b osg::Vec2b::operator-(const osg::Vec2b &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec2b stack_lret = self->operator-(rhs);
		osg::Vec2b* lret = new osg::Vec2b(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2b >::push(L,lret,true);

		return 1;
	}

	// osg::Vec2b & osg::Vec2b::operator-=(const osg::Vec2b & rhs)
	static int _bind_op_sub(lua_State *L) {
		if (!_lg_typecheck_op_sub(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2b & osg::Vec2b::operator-=(const osg::Vec2b & rhs) function, expected prototype:\nosg::Vec2b & osg::Vec2b::operator-=(const osg::Vec2b & rhs)\nClass arguments details:\narg 1 ID = 92303169\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2b* rhs_ptr=(Luna< osg::Vec2b >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec2b::operator-= function");
		}
		const osg::Vec2b & rhs=*rhs_ptr;

		osg::Vec2b* self=(Luna< osg::Vec2b >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec2b & osg::Vec2b::operator-=(const osg::Vec2b &). Got : '%s'\n%s",typeid(Luna< osg::Vec2b >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec2b* lret = &self->operator-=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2b >::push(L,lret,false);

		return 1;
	}


};

osg::Vec2b* LunaTraits< osg::Vec2b >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Vec2b::_bind_ctor(L);
}

void LunaTraits< osg::Vec2b >::_bind_dtor(osg::Vec2b* obj) {
	delete obj;
}

const char LunaTraits< osg::Vec2b >::className[] = "Vec2b";
const char LunaTraits< osg::Vec2b >::fullName[] = "osg::Vec2b";
const char LunaTraits< osg::Vec2b >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec2b >::parents[] = {0};
const int LunaTraits< osg::Vec2b >::hash = 92303169;
const int LunaTraits< osg::Vec2b >::uniqueIDs[] = {92303169,0};

luna_RegType LunaTraits< osg::Vec2b >::methods[] = {
	{"ptr", &luna_wrapper_osg_Vec2b::_bind_ptr},
	{"set", &luna_wrapper_osg_Vec2b::_bind_set},
	{"x", &luna_wrapper_osg_Vec2b::_bind_x},
	{"y", &luna_wrapper_osg_Vec2b::_bind_y},
	{"r", &luna_wrapper_osg_Vec2b::_bind_r},
	{"g", &luna_wrapper_osg_Vec2b::_bind_g},
	{"__eq", &luna_wrapper_osg_Vec2b::_bind___eq},
	{"op_neq", &luna_wrapper_osg_Vec2b::_bind_op_neq},
	{"__lt", &luna_wrapper_osg_Vec2b::_bind___lt},
	{"op_index", &luna_wrapper_osg_Vec2b::_bind_op_index},
	{"__mul", &luna_wrapper_osg_Vec2b::_bind___mul},
	{"op_mult", &luna_wrapper_osg_Vec2b::_bind_op_mult},
	{"__div", &luna_wrapper_osg_Vec2b::_bind___div},
	{"op_div", &luna_wrapper_osg_Vec2b::_bind_op_div},
	{"__add", &luna_wrapper_osg_Vec2b::_bind___add},
	{"op_add", &luna_wrapper_osg_Vec2b::_bind_op_add},
	{"__sub", &luna_wrapper_osg_Vec2b::_bind___sub},
	{"op_sub", &luna_wrapper_osg_Vec2b::_bind_op_sub},
	{"dynCast", &luna_wrapper_osg_Vec2b::_bind_dynCast},
	{"fromVoid", &luna_wrapper_osg_Vec2b::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Vec2b::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec2b >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec2b >::enumValues[] = {
	{"num_components", osg::Vec2b::num_components},
	{0,0}
};


