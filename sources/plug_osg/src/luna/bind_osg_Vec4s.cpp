#include <plug_common.h>

class luna_wrapper_osg_Vec4s {
public:
	typedef Luna< osg::Vec4s > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec4s* self= (osg::Vec4s*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Vec4s >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303248) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Vec4s >::check(L,1));
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

		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Vec4s");
		
		return luna_dynamicCast(L,converters,"osg::Vec4s",name);
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
	// (found 15 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303248) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303248) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303248) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,92303248) ) return false;
		if( (!(Luna< osg::Vec4s >::check(L,2))) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,92303248) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303248) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303248) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303248) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		return true;
	}


	// Constructor binds:
	// osg::Vec4s::Vec4s()
	static osg::Vec4s* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4s::Vec4s() function, expected prototype:\nosg::Vec4s::Vec4s()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Vec4s();
	}

	// osg::Vec4s::Vec4s(short x, short y, short z, short w)
	static osg::Vec4s* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4s::Vec4s(short x, short y, short z, short w) function, expected prototype:\nosg::Vec4s::Vec4s(short x, short y, short z, short w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		short x=(short)lua_tointeger(L,1);
		short y=(short)lua_tointeger(L,2);
		short z=(short)lua_tointeger(L,3);
		short w=(short)lua_tointeger(L,4);

		return new osg::Vec4s(x, y, z, w);
	}

	// Overload binder for osg::Vec4s::Vec4s
	static osg::Vec4s* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Vec4s, cannot match any of the overloads for function Vec4s:\n  Vec4s()\n  Vec4s(short, short, short, short)\n");
		return NULL;
	}


	// Function binds:
	// short * osg::Vec4s::ptr()
	static int _bind_ptr_overload_1(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in short * osg::Vec4s::ptr() function, expected prototype:\nshort * osg::Vec4s::ptr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short * osg::Vec4s::ptr(). Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const short * osg::Vec4s::ptr() const
	static int _bind_ptr_overload_2(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const short * osg::Vec4s::ptr() const function, expected prototype:\nconst short * osg::Vec4s::ptr() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const short * osg::Vec4s::ptr() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const short * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// Overload binder for osg::Vec4s::ptr
	static int _bind_ptr(lua_State *L) {
		if (_lg_typecheck_ptr_overload_1(L)) return _bind_ptr_overload_1(L);
		if (_lg_typecheck_ptr_overload_2(L)) return _bind_ptr_overload_2(L);

		luaL_error(L, "error in function ptr, cannot match any of the overloads for function ptr:\n  ptr()\n  ptr()\n");
		return 0;
	}

	// void osg::Vec4s::set(short x, short y, short z, short w)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec4s::set(short x, short y, short z, short w) function, expected prototype:\nvoid osg::Vec4s::set(short x, short y, short z, short w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		short x=(short)lua_tointeger(L,2);
		short y=(short)lua_tointeger(L,3);
		short z=(short)lua_tointeger(L,4);
		short w=(short)lua_tointeger(L,5);

		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec4s::set(short, short, short, short). Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(x, y, z, w);

		return 0;
	}

	// short & osg::Vec4s::x()
	static int _bind_x_overload_1(lua_State *L) {
		if (!_lg_typecheck_x_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in short & osg::Vec4s::x() function, expected prototype:\nshort & osg::Vec4s::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short & osg::Vec4s::x(). Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short & lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// short osg::Vec4s::x() const
	static int _bind_x_overload_2(lua_State *L) {
		if (!_lg_typecheck_x_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in short osg::Vec4s::x() const function, expected prototype:\nshort osg::Vec4s::x() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short osg::Vec4s::x() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4s::x
	static int _bind_x(lua_State *L) {
		if (_lg_typecheck_x_overload_1(L)) return _bind_x_overload_1(L);
		if (_lg_typecheck_x_overload_2(L)) return _bind_x_overload_2(L);

		luaL_error(L, "error in function x, cannot match any of the overloads for function x:\n  x()\n  x()\n");
		return 0;
	}

	// short & osg::Vec4s::y()
	static int _bind_y_overload_1(lua_State *L) {
		if (!_lg_typecheck_y_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in short & osg::Vec4s::y() function, expected prototype:\nshort & osg::Vec4s::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short & osg::Vec4s::y(). Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short & lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// short osg::Vec4s::y() const
	static int _bind_y_overload_2(lua_State *L) {
		if (!_lg_typecheck_y_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in short osg::Vec4s::y() const function, expected prototype:\nshort osg::Vec4s::y() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short osg::Vec4s::y() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4s::y
	static int _bind_y(lua_State *L) {
		if (_lg_typecheck_y_overload_1(L)) return _bind_y_overload_1(L);
		if (_lg_typecheck_y_overload_2(L)) return _bind_y_overload_2(L);

		luaL_error(L, "error in function y, cannot match any of the overloads for function y:\n  y()\n  y()\n");
		return 0;
	}

	// short & osg::Vec4s::z()
	static int _bind_z_overload_1(lua_State *L) {
		if (!_lg_typecheck_z_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in short & osg::Vec4s::z() function, expected prototype:\nshort & osg::Vec4s::z()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short & osg::Vec4s::z(). Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short & lret = self->z();
		lua_pushnumber(L,lret);

		return 1;
	}

	// short osg::Vec4s::z() const
	static int _bind_z_overload_2(lua_State *L) {
		if (!_lg_typecheck_z_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in short osg::Vec4s::z() const function, expected prototype:\nshort osg::Vec4s::z() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short osg::Vec4s::z() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short lret = self->z();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4s::z
	static int _bind_z(lua_State *L) {
		if (_lg_typecheck_z_overload_1(L)) return _bind_z_overload_1(L);
		if (_lg_typecheck_z_overload_2(L)) return _bind_z_overload_2(L);

		luaL_error(L, "error in function z, cannot match any of the overloads for function z:\n  z()\n  z()\n");
		return 0;
	}

	// short & osg::Vec4s::w()
	static int _bind_w_overload_1(lua_State *L) {
		if (!_lg_typecheck_w_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in short & osg::Vec4s::w() function, expected prototype:\nshort & osg::Vec4s::w()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short & osg::Vec4s::w(). Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short & lret = self->w();
		lua_pushnumber(L,lret);

		return 1;
	}

	// short osg::Vec4s::w() const
	static int _bind_w_overload_2(lua_State *L) {
		if (!_lg_typecheck_w_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in short osg::Vec4s::w() const function, expected prototype:\nshort osg::Vec4s::w() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short osg::Vec4s::w() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short lret = self->w();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4s::w
	static int _bind_w(lua_State *L) {
		if (_lg_typecheck_w_overload_1(L)) return _bind_w_overload_1(L);
		if (_lg_typecheck_w_overload_2(L)) return _bind_w_overload_2(L);

		luaL_error(L, "error in function w, cannot match any of the overloads for function w:\n  w()\n  w()\n");
		return 0;
	}

	// short & osg::Vec4s::r()
	static int _bind_r_overload_1(lua_State *L) {
		if (!_lg_typecheck_r_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in short & osg::Vec4s::r() function, expected prototype:\nshort & osg::Vec4s::r()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short & osg::Vec4s::r(). Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short & lret = self->r();
		lua_pushnumber(L,lret);

		return 1;
	}

	// short osg::Vec4s::r() const
	static int _bind_r_overload_2(lua_State *L) {
		if (!_lg_typecheck_r_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in short osg::Vec4s::r() const function, expected prototype:\nshort osg::Vec4s::r() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short osg::Vec4s::r() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short lret = self->r();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4s::r
	static int _bind_r(lua_State *L) {
		if (_lg_typecheck_r_overload_1(L)) return _bind_r_overload_1(L);
		if (_lg_typecheck_r_overload_2(L)) return _bind_r_overload_2(L);

		luaL_error(L, "error in function r, cannot match any of the overloads for function r:\n  r()\n  r()\n");
		return 0;
	}

	// short & osg::Vec4s::g()
	static int _bind_g_overload_1(lua_State *L) {
		if (!_lg_typecheck_g_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in short & osg::Vec4s::g() function, expected prototype:\nshort & osg::Vec4s::g()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short & osg::Vec4s::g(). Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short & lret = self->g();
		lua_pushnumber(L,lret);

		return 1;
	}

	// short osg::Vec4s::g() const
	static int _bind_g_overload_2(lua_State *L) {
		if (!_lg_typecheck_g_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in short osg::Vec4s::g() const function, expected prototype:\nshort osg::Vec4s::g() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short osg::Vec4s::g() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short lret = self->g();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4s::g
	static int _bind_g(lua_State *L) {
		if (_lg_typecheck_g_overload_1(L)) return _bind_g_overload_1(L);
		if (_lg_typecheck_g_overload_2(L)) return _bind_g_overload_2(L);

		luaL_error(L, "error in function g, cannot match any of the overloads for function g:\n  g()\n  g()\n");
		return 0;
	}

	// short & osg::Vec4s::b()
	static int _bind_b_overload_1(lua_State *L) {
		if (!_lg_typecheck_b_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in short & osg::Vec4s::b() function, expected prototype:\nshort & osg::Vec4s::b()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short & osg::Vec4s::b(). Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short & lret = self->b();
		lua_pushnumber(L,lret);

		return 1;
	}

	// short osg::Vec4s::b() const
	static int _bind_b_overload_2(lua_State *L) {
		if (!_lg_typecheck_b_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in short osg::Vec4s::b() const function, expected prototype:\nshort osg::Vec4s::b() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short osg::Vec4s::b() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short lret = self->b();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4s::b
	static int _bind_b(lua_State *L) {
		if (_lg_typecheck_b_overload_1(L)) return _bind_b_overload_1(L);
		if (_lg_typecheck_b_overload_2(L)) return _bind_b_overload_2(L);

		luaL_error(L, "error in function b, cannot match any of the overloads for function b:\n  b()\n  b()\n");
		return 0;
	}

	// short & osg::Vec4s::a()
	static int _bind_a_overload_1(lua_State *L) {
		if (!_lg_typecheck_a_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in short & osg::Vec4s::a() function, expected prototype:\nshort & osg::Vec4s::a()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short & osg::Vec4s::a(). Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short & lret = self->a();
		lua_pushnumber(L,lret);

		return 1;
	}

	// short osg::Vec4s::a() const
	static int _bind_a_overload_2(lua_State *L) {
		if (!_lg_typecheck_a_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in short osg::Vec4s::a() const function, expected prototype:\nshort osg::Vec4s::a() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short osg::Vec4s::a() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short lret = self->a();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4s::a
	static int _bind_a(lua_State *L) {
		if (_lg_typecheck_a_overload_1(L)) return _bind_a_overload_1(L);
		if (_lg_typecheck_a_overload_2(L)) return _bind_a_overload_2(L);

		luaL_error(L, "error in function a, cannot match any of the overloads for function a:\n  a()\n  a()\n");
		return 0;
	}


	// Operator binds:
	// bool osg::Vec4s::operator==(const osg::Vec4s & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec4s::operator==(const osg::Vec4s & v) const function, expected prototype:\nbool osg::Vec4s::operator==(const osg::Vec4s & v) const\nClass arguments details:\narg 1 ID = 92303248\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4s* v_ptr=(Luna< osg::Vec4s >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec4s::operator== function");
		}
		const osg::Vec4s & v=*v_ptr;

		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec4s::operator==(const osg::Vec4s &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Vec4s::operator!=(const osg::Vec4s & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec4s::operator!=(const osg::Vec4s & v) const function, expected prototype:\nbool osg::Vec4s::operator!=(const osg::Vec4s & v) const\nClass arguments details:\narg 1 ID = 92303248\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4s* v_ptr=(Luna< osg::Vec4s >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec4s::operator!= function");
		}
		const osg::Vec4s & v=*v_ptr;

		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec4s::operator!=(const osg::Vec4s &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Vec4s::operator<(const osg::Vec4s & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec4s::operator<(const osg::Vec4s & v) const function, expected prototype:\nbool osg::Vec4s::operator<(const osg::Vec4s & v) const\nClass arguments details:\narg 1 ID = 92303248\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4s* v_ptr=(Luna< osg::Vec4s >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec4s::operator< function");
		}
		const osg::Vec4s & v=*v_ptr;

		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec4s::operator<(const osg::Vec4s &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// short & osg::Vec4s::operator[](unsigned int i)
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in short & osg::Vec4s::operator[](unsigned int i) function, expected prototype:\nshort & osg::Vec4s::operator[](unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short & osg::Vec4s::operator[](unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// short osg::Vec4s::operator[](unsigned int i) const
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in short osg::Vec4s::operator[](unsigned int i) const function, expected prototype:\nshort osg::Vec4s::operator[](unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short osg::Vec4s::operator[](unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec4s::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](unsigned int)\n  operator[](unsigned int)\n");
		return 0;
	}

	// osg::Vec4s osg::Vec4s::operator*(short rhs) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4s osg::Vec4s::operator*(short rhs) const function, expected prototype:\nosg::Vec4s osg::Vec4s::operator*(short rhs) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		short rhs=(short)lua_tointeger(L,2);

		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4s osg::Vec4s::operator*(short) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4s stack_lret = self->operator*(rhs);
		osg::Vec4s* lret = new osg::Vec4s(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4s >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4s osg::Vec4s::operator*(const osg::Vec4s & rhs) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4s osg::Vec4s::operator*(const osg::Vec4s & rhs) const function, expected prototype:\nosg::Vec4s osg::Vec4s::operator*(const osg::Vec4s & rhs) const\nClass arguments details:\narg 1 ID = 92303248\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4s* rhs_ptr=(Luna< osg::Vec4s >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec4s::operator* function");
		}
		const osg::Vec4s & rhs=*rhs_ptr;

		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4s osg::Vec4s::operator*(const osg::Vec4s &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4s stack_lret = self->operator*(rhs);
		osg::Vec4s* lret = new osg::Vec4s(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4s >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osg::Vec4s::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(short)\n  operator*(const osg::Vec4s &)\n");
		return 0;
	}

	// osg::Vec4s & osg::Vec4s::operator*=(short rhs)
	static int _bind_op_mult(lua_State *L) {
		if (!_lg_typecheck_op_mult(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4s & osg::Vec4s::operator*=(short rhs) function, expected prototype:\nosg::Vec4s & osg::Vec4s::operator*=(short rhs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		short rhs=(short)lua_tointeger(L,2);

		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4s & osg::Vec4s::operator*=(short). Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4s* lret = &self->operator*=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4s >::push(L,lret,false);

		return 1;
	}

	// osg::Vec4s osg::Vec4s::operator/(short rhs) const
	static int _bind___div(lua_State *L) {
		if (!_lg_typecheck___div(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4s osg::Vec4s::operator/(short rhs) const function, expected prototype:\nosg::Vec4s osg::Vec4s::operator/(short rhs) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		short rhs=(short)lua_tointeger(L,2);

		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4s osg::Vec4s::operator/(short) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4s stack_lret = self->operator/(rhs);
		osg::Vec4s* lret = new osg::Vec4s(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4s >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4s & osg::Vec4s::operator/=(short rhs)
	static int _bind_op_div(lua_State *L) {
		if (!_lg_typecheck_op_div(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4s & osg::Vec4s::operator/=(short rhs) function, expected prototype:\nosg::Vec4s & osg::Vec4s::operator/=(short rhs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		short rhs=(short)lua_tointeger(L,2);

		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4s & osg::Vec4s::operator/=(short). Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4s* lret = &self->operator/=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4s >::push(L,lret,false);

		return 1;
	}

	// osg::Vec4s osg::Vec4s::operator+(const osg::Vec4s & rhs) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4s osg::Vec4s::operator+(const osg::Vec4s & rhs) const function, expected prototype:\nosg::Vec4s osg::Vec4s::operator+(const osg::Vec4s & rhs) const\nClass arguments details:\narg 1 ID = 92303248\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4s* rhs_ptr=(Luna< osg::Vec4s >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec4s::operator+ function");
		}
		const osg::Vec4s & rhs=*rhs_ptr;

		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4s osg::Vec4s::operator+(const osg::Vec4s &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4s stack_lret = self->operator+(rhs);
		osg::Vec4s* lret = new osg::Vec4s(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4s >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4s & osg::Vec4s::operator+=(const osg::Vec4s & rhs)
	static int _bind_op_add(lua_State *L) {
		if (!_lg_typecheck_op_add(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4s & osg::Vec4s::operator+=(const osg::Vec4s & rhs) function, expected prototype:\nosg::Vec4s & osg::Vec4s::operator+=(const osg::Vec4s & rhs)\nClass arguments details:\narg 1 ID = 92303248\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4s* rhs_ptr=(Luna< osg::Vec4s >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec4s::operator+= function");
		}
		const osg::Vec4s & rhs=*rhs_ptr;

		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4s & osg::Vec4s::operator+=(const osg::Vec4s &). Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4s* lret = &self->operator+=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4s >::push(L,lret,false);

		return 1;
	}

	// osg::Vec4s osg::Vec4s::operator-(const osg::Vec4s & rhs) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4s osg::Vec4s::operator-(const osg::Vec4s & rhs) const function, expected prototype:\nosg::Vec4s osg::Vec4s::operator-(const osg::Vec4s & rhs) const\nClass arguments details:\narg 1 ID = 92303248\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4s* rhs_ptr=(Luna< osg::Vec4s >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec4s::operator- function");
		}
		const osg::Vec4s & rhs=*rhs_ptr;

		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4s osg::Vec4s::operator-(const osg::Vec4s &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4s stack_lret = self->operator-(rhs);
		osg::Vec4s* lret = new osg::Vec4s(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4s >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4s & osg::Vec4s::operator-=(const osg::Vec4s & rhs)
	static int _bind_op_sub(lua_State *L) {
		if (!_lg_typecheck_op_sub(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4s & osg::Vec4s::operator-=(const osg::Vec4s & rhs) function, expected prototype:\nosg::Vec4s & osg::Vec4s::operator-=(const osg::Vec4s & rhs)\nClass arguments details:\narg 1 ID = 92303248\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4s* rhs_ptr=(Luna< osg::Vec4s >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec4s::operator-= function");
		}
		const osg::Vec4s & rhs=*rhs_ptr;

		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4s & osg::Vec4s::operator-=(const osg::Vec4s &). Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4s* lret = &self->operator-=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4s >::push(L,lret,false);

		return 1;
	}

	// osg::Vec4s osg::Vec4s::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4s osg::Vec4s::operator-() const function, expected prototype:\nosg::Vec4s osg::Vec4s::operator-() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4s* self=(Luna< osg::Vec4s >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4s osg::Vec4s::operator-() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4s >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4s stack_lret = self->operator-();
		osg::Vec4s* lret = new osg::Vec4s(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4s >::push(L,lret,true);

		return 1;
	}


};

osg::Vec4s* LunaTraits< osg::Vec4s >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Vec4s::_bind_ctor(L);
}

void LunaTraits< osg::Vec4s >::_bind_dtor(osg::Vec4s* obj) {
	delete obj;
}

const char LunaTraits< osg::Vec4s >::className[] = "Vec4s";
const char LunaTraits< osg::Vec4s >::fullName[] = "osg::Vec4s";
const char LunaTraits< osg::Vec4s >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec4s >::parents[] = {0};
const int LunaTraits< osg::Vec4s >::hash = 92303248;
const int LunaTraits< osg::Vec4s >::uniqueIDs[] = {92303248,0};

luna_RegType LunaTraits< osg::Vec4s >::methods[] = {
	{"ptr", &luna_wrapper_osg_Vec4s::_bind_ptr},
	{"set", &luna_wrapper_osg_Vec4s::_bind_set},
	{"x", &luna_wrapper_osg_Vec4s::_bind_x},
	{"y", &luna_wrapper_osg_Vec4s::_bind_y},
	{"z", &luna_wrapper_osg_Vec4s::_bind_z},
	{"w", &luna_wrapper_osg_Vec4s::_bind_w},
	{"r", &luna_wrapper_osg_Vec4s::_bind_r},
	{"g", &luna_wrapper_osg_Vec4s::_bind_g},
	{"b", &luna_wrapper_osg_Vec4s::_bind_b},
	{"a", &luna_wrapper_osg_Vec4s::_bind_a},
	{"__eq", &luna_wrapper_osg_Vec4s::_bind___eq},
	{"op_neq", &luna_wrapper_osg_Vec4s::_bind_op_neq},
	{"__lt", &luna_wrapper_osg_Vec4s::_bind___lt},
	{"op_index", &luna_wrapper_osg_Vec4s::_bind_op_index},
	{"__mul", &luna_wrapper_osg_Vec4s::_bind___mul},
	{"op_mult", &luna_wrapper_osg_Vec4s::_bind_op_mult},
	{"__div", &luna_wrapper_osg_Vec4s::_bind___div},
	{"op_div", &luna_wrapper_osg_Vec4s::_bind_op_div},
	{"__add", &luna_wrapper_osg_Vec4s::_bind___add},
	{"op_add", &luna_wrapper_osg_Vec4s::_bind_op_add},
	{"__sub", &luna_wrapper_osg_Vec4s::_bind___sub},
	{"op_sub", &luna_wrapper_osg_Vec4s::_bind_op_sub},
	{"__unm", &luna_wrapper_osg_Vec4s::_bind___unm},
	{"dynCast", &luna_wrapper_osg_Vec4s::_bind_dynCast},
	{"fromVoid", &luna_wrapper_osg_Vec4s::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Vec4s::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec4s >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec4s >::enumValues[] = {
	{"num_components", osg::Vec4s::num_components},
	{0,0}
};


