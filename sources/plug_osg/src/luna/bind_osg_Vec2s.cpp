#include <plug_common.h>

class luna_wrapper_osg_Vec2s {
public:
	typedef Luna< osg::Vec2s > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec2s* self= (osg::Vec2s*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Vec2s >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303186) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Vec2s >::check(L,1));
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

		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Vec2s");
		
		return luna_dynamicCast(L,converters,"osg::Vec2s",name);
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

		if( !Luna<void>::has_uniqueid(L,2,92303186) ) return false;
		if( (!(Luna< osg::Vec2s >::check(L,2))) ) return false;
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
	// (found 15 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303186) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303186) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303186) ) return false;
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

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303186) ) return false;
		if( (!(Luna< osg::Vec2s >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_mult(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_div(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303186) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303186) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303186) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303186) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		return true;
	}


	// Constructor binds:
	// osg::Vec2s::Vec2s()
	static osg::Vec2s* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2s::Vec2s() function, expected prototype:\nosg::Vec2s::Vec2s()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Vec2s();
	}

	// osg::Vec2s::Vec2s(short x, short y)
	static osg::Vec2s* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2s::Vec2s(short x, short y) function, expected prototype:\nosg::Vec2s::Vec2s(short x, short y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		short x=(short)lua_tointeger(L,1);
		short y=(short)lua_tointeger(L,2);

		return new osg::Vec2s(x, y);
	}

	// Overload binder for osg::Vec2s::Vec2s
	static osg::Vec2s* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Vec2s, cannot match any of the overloads for function Vec2s:\n  Vec2s()\n  Vec2s(short, short)\n");
		return NULL;
	}


	// Function binds:
	// short * osg::Vec2s::ptr()
	static int _bind_ptr_overload_1(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in short * osg::Vec2s::ptr() function, expected prototype:\nshort * osg::Vec2s::ptr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short * osg::Vec2s::ptr(). Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const short * osg::Vec2s::ptr() const
	static int _bind_ptr_overload_2(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const short * osg::Vec2s::ptr() const function, expected prototype:\nconst short * osg::Vec2s::ptr() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const short * osg::Vec2s::ptr() const. Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const short * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// Overload binder for osg::Vec2s::ptr
	static int _bind_ptr(lua_State *L) {
		if (_lg_typecheck_ptr_overload_1(L)) return _bind_ptr_overload_1(L);
		if (_lg_typecheck_ptr_overload_2(L)) return _bind_ptr_overload_2(L);

		luaL_error(L, "error in function ptr, cannot match any of the overloads for function ptr:\n  ptr()\n  ptr()\n");
		return 0;
	}

	// void osg::Vec2s::set(short x, short y)
	static int _bind_set_overload_1(lua_State *L) {
		if (!_lg_typecheck_set_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec2s::set(short x, short y) function, expected prototype:\nvoid osg::Vec2s::set(short x, short y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		short x=(short)lua_tointeger(L,2);
		short y=(short)lua_tointeger(L,3);

		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec2s::set(short, short). Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(x, y);

		return 0;
	}

	// void osg::Vec2s::set(const osg::Vec2s & rhs)
	static int _bind_set_overload_2(lua_State *L) {
		if (!_lg_typecheck_set_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec2s::set(const osg::Vec2s & rhs) function, expected prototype:\nvoid osg::Vec2s::set(const osg::Vec2s & rhs)\nClass arguments details:\narg 1 ID = 92303186\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2s* rhs_ptr=(Luna< osg::Vec2s >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec2s::set function");
		}
		const osg::Vec2s & rhs=*rhs_ptr;

		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec2s::set(const osg::Vec2s &). Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(rhs);

		return 0;
	}

	// Overload binder for osg::Vec2s::set
	static int _bind_set(lua_State *L) {
		if (_lg_typecheck_set_overload_1(L)) return _bind_set_overload_1(L);
		if (_lg_typecheck_set_overload_2(L)) return _bind_set_overload_2(L);

		luaL_error(L, "error in function set, cannot match any of the overloads for function set:\n  set(short, short)\n  set(const osg::Vec2s &)\n");
		return 0;
	}

	// short & osg::Vec2s::x()
	static int _bind_x_overload_1(lua_State *L) {
		if (!_lg_typecheck_x_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in short & osg::Vec2s::x() function, expected prototype:\nshort & osg::Vec2s::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short & osg::Vec2s::x(). Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short & lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// short osg::Vec2s::x() const
	static int _bind_x_overload_2(lua_State *L) {
		if (!_lg_typecheck_x_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in short osg::Vec2s::x() const function, expected prototype:\nshort osg::Vec2s::x() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short osg::Vec2s::x() const. Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec2s::x
	static int _bind_x(lua_State *L) {
		if (_lg_typecheck_x_overload_1(L)) return _bind_x_overload_1(L);
		if (_lg_typecheck_x_overload_2(L)) return _bind_x_overload_2(L);

		luaL_error(L, "error in function x, cannot match any of the overloads for function x:\n  x()\n  x()\n");
		return 0;
	}

	// short & osg::Vec2s::y()
	static int _bind_y_overload_1(lua_State *L) {
		if (!_lg_typecheck_y_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in short & osg::Vec2s::y() function, expected prototype:\nshort & osg::Vec2s::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short & osg::Vec2s::y(). Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short & lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// short osg::Vec2s::y() const
	static int _bind_y_overload_2(lua_State *L) {
		if (!_lg_typecheck_y_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in short osg::Vec2s::y() const function, expected prototype:\nshort osg::Vec2s::y() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short osg::Vec2s::y() const. Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec2s::y
	static int _bind_y(lua_State *L) {
		if (_lg_typecheck_y_overload_1(L)) return _bind_y_overload_1(L);
		if (_lg_typecheck_y_overload_2(L)) return _bind_y_overload_2(L);

		luaL_error(L, "error in function y, cannot match any of the overloads for function y:\n  y()\n  y()\n");
		return 0;
	}

	// short & osg::Vec2s::r()
	static int _bind_r_overload_1(lua_State *L) {
		if (!_lg_typecheck_r_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in short & osg::Vec2s::r() function, expected prototype:\nshort & osg::Vec2s::r()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short & osg::Vec2s::r(). Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short & lret = self->r();
		lua_pushnumber(L,lret);

		return 1;
	}

	// short osg::Vec2s::r() const
	static int _bind_r_overload_2(lua_State *L) {
		if (!_lg_typecheck_r_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in short osg::Vec2s::r() const function, expected prototype:\nshort osg::Vec2s::r() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short osg::Vec2s::r() const. Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short lret = self->r();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec2s::r
	static int _bind_r(lua_State *L) {
		if (_lg_typecheck_r_overload_1(L)) return _bind_r_overload_1(L);
		if (_lg_typecheck_r_overload_2(L)) return _bind_r_overload_2(L);

		luaL_error(L, "error in function r, cannot match any of the overloads for function r:\n  r()\n  r()\n");
		return 0;
	}

	// short & osg::Vec2s::g()
	static int _bind_g_overload_1(lua_State *L) {
		if (!_lg_typecheck_g_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in short & osg::Vec2s::g() function, expected prototype:\nshort & osg::Vec2s::g()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short & osg::Vec2s::g(). Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short & lret = self->g();
		lua_pushnumber(L,lret);

		return 1;
	}

	// short osg::Vec2s::g() const
	static int _bind_g_overload_2(lua_State *L) {
		if (!_lg_typecheck_g_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in short osg::Vec2s::g() const function, expected prototype:\nshort osg::Vec2s::g() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short osg::Vec2s::g() const. Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short lret = self->g();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec2s::g
	static int _bind_g(lua_State *L) {
		if (_lg_typecheck_g_overload_1(L)) return _bind_g_overload_1(L);
		if (_lg_typecheck_g_overload_2(L)) return _bind_g_overload_2(L);

		luaL_error(L, "error in function g, cannot match any of the overloads for function g:\n  g()\n  g()\n");
		return 0;
	}


	// Operator binds:
	// bool osg::Vec2s::operator==(const osg::Vec2s & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec2s::operator==(const osg::Vec2s & v) const function, expected prototype:\nbool osg::Vec2s::operator==(const osg::Vec2s & v) const\nClass arguments details:\narg 1 ID = 92303186\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2s* v_ptr=(Luna< osg::Vec2s >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec2s::operator== function");
		}
		const osg::Vec2s & v=*v_ptr;

		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec2s::operator==(const osg::Vec2s &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Vec2s::operator!=(const osg::Vec2s & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec2s::operator!=(const osg::Vec2s & v) const function, expected prototype:\nbool osg::Vec2s::operator!=(const osg::Vec2s & v) const\nClass arguments details:\narg 1 ID = 92303186\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2s* v_ptr=(Luna< osg::Vec2s >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec2s::operator!= function");
		}
		const osg::Vec2s & v=*v_ptr;

		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec2s::operator!=(const osg::Vec2s &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Vec2s::operator<(const osg::Vec2s & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec2s::operator<(const osg::Vec2s & v) const function, expected prototype:\nbool osg::Vec2s::operator<(const osg::Vec2s & v) const\nClass arguments details:\narg 1 ID = 92303186\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2s* v_ptr=(Luna< osg::Vec2s >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec2s::operator< function");
		}
		const osg::Vec2s & v=*v_ptr;

		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec2s::operator<(const osg::Vec2s &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// short & osg::Vec2s::operator[](int i)
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in short & osg::Vec2s::operator[](int i) function, expected prototype:\nshort & osg::Vec2s::operator[](int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short & osg::Vec2s::operator[](int). Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// short osg::Vec2s::operator[](int i) const
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in short osg::Vec2s::operator[](int i) const function, expected prototype:\nshort osg::Vec2s::operator[](int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short osg::Vec2s::operator[](int) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec2s::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](int)\n  operator[](int)\n");
		return 0;
	}

	// osg::Vec2s osg::Vec2s::operator*(short rhs) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2s osg::Vec2s::operator*(short rhs) const function, expected prototype:\nosg::Vec2s osg::Vec2s::operator*(short rhs) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		short rhs=(short)lua_tointeger(L,2);

		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec2s osg::Vec2s::operator*(short) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec2s stack_lret = self->operator*(rhs);
		osg::Vec2s* lret = new osg::Vec2s(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2s >::push(L,lret,true);

		return 1;
	}

	// osg::Vec2s osg::Vec2s::operator*(const osg::Vec2s & rhs) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2s osg::Vec2s::operator*(const osg::Vec2s & rhs) const function, expected prototype:\nosg::Vec2s osg::Vec2s::operator*(const osg::Vec2s & rhs) const\nClass arguments details:\narg 1 ID = 92303186\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2s* rhs_ptr=(Luna< osg::Vec2s >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec2s::operator* function");
		}
		const osg::Vec2s & rhs=*rhs_ptr;

		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec2s osg::Vec2s::operator*(const osg::Vec2s &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec2s stack_lret = self->operator*(rhs);
		osg::Vec2s* lret = new osg::Vec2s(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2s >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osg::Vec2s::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(short)\n  operator*(const osg::Vec2s &)\n");
		return 0;
	}

	// osg::Vec2s & osg::Vec2s::operator*=(short rhs)
	static int _bind_op_mult(lua_State *L) {
		if (!_lg_typecheck_op_mult(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2s & osg::Vec2s::operator*=(short rhs) function, expected prototype:\nosg::Vec2s & osg::Vec2s::operator*=(short rhs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		short rhs=(short)lua_tointeger(L,2);

		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec2s & osg::Vec2s::operator*=(short). Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec2s* lret = &self->operator*=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2s >::push(L,lret,false);

		return 1;
	}

	// osg::Vec2s osg::Vec2s::operator/(short rhs) const
	static int _bind___div(lua_State *L) {
		if (!_lg_typecheck___div(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2s osg::Vec2s::operator/(short rhs) const function, expected prototype:\nosg::Vec2s osg::Vec2s::operator/(short rhs) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		short rhs=(short)lua_tointeger(L,2);

		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec2s osg::Vec2s::operator/(short) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec2s stack_lret = self->operator/(rhs);
		osg::Vec2s* lret = new osg::Vec2s(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2s >::push(L,lret,true);

		return 1;
	}

	// osg::Vec2s & osg::Vec2s::operator/=(short rhs)
	static int _bind_op_div(lua_State *L) {
		if (!_lg_typecheck_op_div(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2s & osg::Vec2s::operator/=(short rhs) function, expected prototype:\nosg::Vec2s & osg::Vec2s::operator/=(short rhs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		short rhs=(short)lua_tointeger(L,2);

		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec2s & osg::Vec2s::operator/=(short). Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec2s* lret = &self->operator/=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2s >::push(L,lret,false);

		return 1;
	}

	// osg::Vec2s osg::Vec2s::operator+(const osg::Vec2s & rhs) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2s osg::Vec2s::operator+(const osg::Vec2s & rhs) const function, expected prototype:\nosg::Vec2s osg::Vec2s::operator+(const osg::Vec2s & rhs) const\nClass arguments details:\narg 1 ID = 92303186\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2s* rhs_ptr=(Luna< osg::Vec2s >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec2s::operator+ function");
		}
		const osg::Vec2s & rhs=*rhs_ptr;

		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec2s osg::Vec2s::operator+(const osg::Vec2s &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec2s stack_lret = self->operator+(rhs);
		osg::Vec2s* lret = new osg::Vec2s(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2s >::push(L,lret,true);

		return 1;
	}

	// osg::Vec2s & osg::Vec2s::operator+=(const osg::Vec2s & rhs)
	static int _bind_op_add(lua_State *L) {
		if (!_lg_typecheck_op_add(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2s & osg::Vec2s::operator+=(const osg::Vec2s & rhs) function, expected prototype:\nosg::Vec2s & osg::Vec2s::operator+=(const osg::Vec2s & rhs)\nClass arguments details:\narg 1 ID = 92303186\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2s* rhs_ptr=(Luna< osg::Vec2s >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec2s::operator+= function");
		}
		const osg::Vec2s & rhs=*rhs_ptr;

		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec2s & osg::Vec2s::operator+=(const osg::Vec2s &). Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec2s* lret = &self->operator+=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2s >::push(L,lret,false);

		return 1;
	}

	// osg::Vec2s osg::Vec2s::operator-(const osg::Vec2s & rhs) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2s osg::Vec2s::operator-(const osg::Vec2s & rhs) const function, expected prototype:\nosg::Vec2s osg::Vec2s::operator-(const osg::Vec2s & rhs) const\nClass arguments details:\narg 1 ID = 92303186\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2s* rhs_ptr=(Luna< osg::Vec2s >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec2s::operator- function");
		}
		const osg::Vec2s & rhs=*rhs_ptr;

		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec2s osg::Vec2s::operator-(const osg::Vec2s &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec2s stack_lret = self->operator-(rhs);
		osg::Vec2s* lret = new osg::Vec2s(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2s >::push(L,lret,true);

		return 1;
	}

	// osg::Vec2s & osg::Vec2s::operator-=(const osg::Vec2s & rhs)
	static int _bind_op_sub(lua_State *L) {
		if (!_lg_typecheck_op_sub(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2s & osg::Vec2s::operator-=(const osg::Vec2s & rhs) function, expected prototype:\nosg::Vec2s & osg::Vec2s::operator-=(const osg::Vec2s & rhs)\nClass arguments details:\narg 1 ID = 92303186\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2s* rhs_ptr=(Luna< osg::Vec2s >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec2s::operator-= function");
		}
		const osg::Vec2s & rhs=*rhs_ptr;

		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec2s & osg::Vec2s::operator-=(const osg::Vec2s &). Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec2s* lret = &self->operator-=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2s >::push(L,lret,false);

		return 1;
	}

	// osg::Vec2s osg::Vec2s::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2s osg::Vec2s::operator-() const function, expected prototype:\nosg::Vec2s osg::Vec2s::operator-() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2s* self=(Luna< osg::Vec2s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec2s osg::Vec2s::operator-() const. Got : '%s'\n%s",typeid(Luna< osg::Vec2s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec2s stack_lret = self->operator-();
		osg::Vec2s* lret = new osg::Vec2s(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2s >::push(L,lret,true);

		return 1;
	}


};

osg::Vec2s* LunaTraits< osg::Vec2s >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Vec2s::_bind_ctor(L);
}

void LunaTraits< osg::Vec2s >::_bind_dtor(osg::Vec2s* obj) {
	delete obj;
}

const char LunaTraits< osg::Vec2s >::className[] = "Vec2s";
const char LunaTraits< osg::Vec2s >::fullName[] = "osg::Vec2s";
const char LunaTraits< osg::Vec2s >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec2s >::parents[] = {0};
const int LunaTraits< osg::Vec2s >::hash = 92303186;
const int LunaTraits< osg::Vec2s >::uniqueIDs[] = {92303186,0};

luna_RegType LunaTraits< osg::Vec2s >::methods[] = {
	{"ptr", &luna_wrapper_osg_Vec2s::_bind_ptr},
	{"set", &luna_wrapper_osg_Vec2s::_bind_set},
	{"x", &luna_wrapper_osg_Vec2s::_bind_x},
	{"y", &luna_wrapper_osg_Vec2s::_bind_y},
	{"r", &luna_wrapper_osg_Vec2s::_bind_r},
	{"g", &luna_wrapper_osg_Vec2s::_bind_g},
	{"__eq", &luna_wrapper_osg_Vec2s::_bind___eq},
	{"op_neq", &luna_wrapper_osg_Vec2s::_bind_op_neq},
	{"__lt", &luna_wrapper_osg_Vec2s::_bind___lt},
	{"op_index", &luna_wrapper_osg_Vec2s::_bind_op_index},
	{"__mul", &luna_wrapper_osg_Vec2s::_bind___mul},
	{"op_mult", &luna_wrapper_osg_Vec2s::_bind_op_mult},
	{"__div", &luna_wrapper_osg_Vec2s::_bind___div},
	{"op_div", &luna_wrapper_osg_Vec2s::_bind_op_div},
	{"__add", &luna_wrapper_osg_Vec2s::_bind___add},
	{"op_add", &luna_wrapper_osg_Vec2s::_bind_op_add},
	{"__sub", &luna_wrapper_osg_Vec2s::_bind___sub},
	{"op_sub", &luna_wrapper_osg_Vec2s::_bind_op_sub},
	{"__unm", &luna_wrapper_osg_Vec2s::_bind___unm},
	{"dynCast", &luna_wrapper_osg_Vec2s::_bind_dynCast},
	{"fromVoid", &luna_wrapper_osg_Vec2s::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Vec2s::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec2s >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec2s >::enumValues[] = {
	{"num_components", osg::Vec2s::num_components},
	{0,0}
};


