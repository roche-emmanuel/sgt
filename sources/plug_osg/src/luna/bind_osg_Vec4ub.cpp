#include <plug_common.h>

class luna_wrapper_osg_Vec4ub {
public:
	typedef Luna< osg::Vec4ub > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec4ub* self= (osg::Vec4ub*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Vec4ub >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61400540) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Vec4ub >::check(L,1));
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

		osg::Vec4ub* self=(Luna< osg::Vec4ub >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Vec4ub");
		
		return luna_dynamicCast(L,converters,"osg::Vec4ub",name);
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

		if( !Luna<void>::has_uniqueid(L,2,61400540) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61400540) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61400540) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,61400540) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61400540) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61400540) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61400540) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::Vec4ub::Vec4ub()
	static osg::Vec4ub* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4ub::Vec4ub() function, expected prototype:\nosg::Vec4ub::Vec4ub()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Vec4ub();
	}

	// osg::Vec4ub::Vec4ub(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
	static osg::Vec4ub* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4ub::Vec4ub(unsigned char x, unsigned char y, unsigned char z, unsigned char w) function, expected prototype:\nosg::Vec4ub::Vec4ub(unsigned char x, unsigned char y, unsigned char z, unsigned char w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char x = (unsigned char)(lua_tointeger(L,1));
		unsigned char y = (unsigned char)(lua_tointeger(L,2));
		unsigned char z = (unsigned char)(lua_tointeger(L,3));
		unsigned char w = (unsigned char)(lua_tointeger(L,4));

		return new osg::Vec4ub(x, y, z, w);
	}

	// Overload binder for osg::Vec4ub::Vec4ub
	static osg::Vec4ub* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Vec4ub, cannot match any of the overloads for function Vec4ub:\n  Vec4ub()\n  Vec4ub(unsigned char, unsigned char, unsigned char, unsigned char)\n");
		return NULL;
	}


	// Function binds:
	// unsigned char * osg::Vec4ub::ptr()
	static int _bind_ptr_overload_1(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char * osg::Vec4ub::ptr() function, expected prototype:\nunsigned char * osg::Vec4ub::ptr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4ub* self=(Luna< osg::Vec4ub >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char * osg::Vec4ub::ptr(). Got : '%s'\n%s",typeid(Luna< osg::Vec4ub >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char * lret = self->ptr();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// const unsigned char * osg::Vec4ub::ptr() const
	static int _bind_ptr_overload_2(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const unsigned char * osg::Vec4ub::ptr() const function, expected prototype:\nconst unsigned char * osg::Vec4ub::ptr() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4ub* self=(Luna< osg::Vec4ub >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const unsigned char * osg::Vec4ub::ptr() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4ub >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const unsigned char * lret = self->ptr();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// Overload binder for osg::Vec4ub::ptr
	static int _bind_ptr(lua_State *L) {
		if (_lg_typecheck_ptr_overload_1(L)) return _bind_ptr_overload_1(L);
		if (_lg_typecheck_ptr_overload_2(L)) return _bind_ptr_overload_2(L);

		luaL_error(L, "error in function ptr, cannot match any of the overloads for function ptr:\n  ptr()\n  ptr()\n");
		return 0;
	}

	// void osg::Vec4ub::set(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec4ub::set(unsigned char r, unsigned char g, unsigned char b, unsigned char a) function, expected prototype:\nvoid osg::Vec4ub::set(unsigned char r, unsigned char g, unsigned char b, unsigned char a)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char r = (unsigned char)(lua_tointeger(L,2));
		unsigned char g = (unsigned char)(lua_tointeger(L,3));
		unsigned char b = (unsigned char)(lua_tointeger(L,4));
		unsigned char a = (unsigned char)(lua_tointeger(L,5));

		osg::Vec4ub* self=(Luna< osg::Vec4ub >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec4ub::set(unsigned char, unsigned char, unsigned char, unsigned char). Got : '%s'\n%s",typeid(Luna< osg::Vec4ub >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(r, g, b, a);

		return 0;
	}

	// unsigned char & osg::Vec4ub::r()
	static int _bind_r_overload_1(lua_State *L) {
		if (!_lg_typecheck_r_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char & osg::Vec4ub::r() function, expected prototype:\nunsigned char & osg::Vec4ub::r()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4ub* self=(Luna< osg::Vec4ub >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char & osg::Vec4ub::r(). Got : '%s'\n%s",typeid(Luna< osg::Vec4ub >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char & lret = self->r();
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char osg::Vec4ub::r() const
	static int _bind_r_overload_2(lua_State *L) {
		if (!_lg_typecheck_r_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char osg::Vec4ub::r() const function, expected prototype:\nunsigned char osg::Vec4ub::r() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4ub* self=(Luna< osg::Vec4ub >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char osg::Vec4ub::r() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4ub >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->r();
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// Overload binder for osg::Vec4ub::r
	static int _bind_r(lua_State *L) {
		if (_lg_typecheck_r_overload_1(L)) return _bind_r_overload_1(L);
		if (_lg_typecheck_r_overload_2(L)) return _bind_r_overload_2(L);

		luaL_error(L, "error in function r, cannot match any of the overloads for function r:\n  r()\n  r()\n");
		return 0;
	}

	// unsigned char & osg::Vec4ub::g()
	static int _bind_g_overload_1(lua_State *L) {
		if (!_lg_typecheck_g_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char & osg::Vec4ub::g() function, expected prototype:\nunsigned char & osg::Vec4ub::g()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4ub* self=(Luna< osg::Vec4ub >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char & osg::Vec4ub::g(). Got : '%s'\n%s",typeid(Luna< osg::Vec4ub >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char & lret = self->g();
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char osg::Vec4ub::g() const
	static int _bind_g_overload_2(lua_State *L) {
		if (!_lg_typecheck_g_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char osg::Vec4ub::g() const function, expected prototype:\nunsigned char osg::Vec4ub::g() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4ub* self=(Luna< osg::Vec4ub >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char osg::Vec4ub::g() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4ub >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->g();
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// Overload binder for osg::Vec4ub::g
	static int _bind_g(lua_State *L) {
		if (_lg_typecheck_g_overload_1(L)) return _bind_g_overload_1(L);
		if (_lg_typecheck_g_overload_2(L)) return _bind_g_overload_2(L);

		luaL_error(L, "error in function g, cannot match any of the overloads for function g:\n  g()\n  g()\n");
		return 0;
	}

	// unsigned char & osg::Vec4ub::b()
	static int _bind_b_overload_1(lua_State *L) {
		if (!_lg_typecheck_b_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char & osg::Vec4ub::b() function, expected prototype:\nunsigned char & osg::Vec4ub::b()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4ub* self=(Luna< osg::Vec4ub >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char & osg::Vec4ub::b(). Got : '%s'\n%s",typeid(Luna< osg::Vec4ub >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char & lret = self->b();
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char osg::Vec4ub::b() const
	static int _bind_b_overload_2(lua_State *L) {
		if (!_lg_typecheck_b_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char osg::Vec4ub::b() const function, expected prototype:\nunsigned char osg::Vec4ub::b() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4ub* self=(Luna< osg::Vec4ub >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char osg::Vec4ub::b() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4ub >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->b();
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// Overload binder for osg::Vec4ub::b
	static int _bind_b(lua_State *L) {
		if (_lg_typecheck_b_overload_1(L)) return _bind_b_overload_1(L);
		if (_lg_typecheck_b_overload_2(L)) return _bind_b_overload_2(L);

		luaL_error(L, "error in function b, cannot match any of the overloads for function b:\n  b()\n  b()\n");
		return 0;
	}

	// unsigned char & osg::Vec4ub::a()
	static int _bind_a_overload_1(lua_State *L) {
		if (!_lg_typecheck_a_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char & osg::Vec4ub::a() function, expected prototype:\nunsigned char & osg::Vec4ub::a()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4ub* self=(Luna< osg::Vec4ub >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char & osg::Vec4ub::a(). Got : '%s'\n%s",typeid(Luna< osg::Vec4ub >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char & lret = self->a();
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char osg::Vec4ub::a() const
	static int _bind_a_overload_2(lua_State *L) {
		if (!_lg_typecheck_a_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char osg::Vec4ub::a() const function, expected prototype:\nunsigned char osg::Vec4ub::a() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec4ub* self=(Luna< osg::Vec4ub >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char osg::Vec4ub::a() const. Got : '%s'\n%s",typeid(Luna< osg::Vec4ub >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->a();
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// Overload binder for osg::Vec4ub::a
	static int _bind_a(lua_State *L) {
		if (_lg_typecheck_a_overload_1(L)) return _bind_a_overload_1(L);
		if (_lg_typecheck_a_overload_2(L)) return _bind_a_overload_2(L);

		luaL_error(L, "error in function a, cannot match any of the overloads for function a:\n  a()\n  a()\n");
		return 0;
	}


	// Operator binds:
	// bool osg::Vec4ub::operator==(const osg::Vec4ub & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec4ub::operator==(const osg::Vec4ub & v) const function, expected prototype:\nbool osg::Vec4ub::operator==(const osg::Vec4ub & v) const\nClass arguments details:\narg 1 ID = 61400540\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4ub* v_ptr=(Luna< osg::Vec4ub >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec4ub::operator== function");
		}
		const osg::Vec4ub & v=*v_ptr;

		osg::Vec4ub* self=(Luna< osg::Vec4ub >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec4ub::operator==(const osg::Vec4ub &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4ub >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Vec4ub::operator!=(const osg::Vec4ub & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec4ub::operator!=(const osg::Vec4ub & v) const function, expected prototype:\nbool osg::Vec4ub::operator!=(const osg::Vec4ub & v) const\nClass arguments details:\narg 1 ID = 61400540\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4ub* v_ptr=(Luna< osg::Vec4ub >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec4ub::operator!= function");
		}
		const osg::Vec4ub & v=*v_ptr;

		osg::Vec4ub* self=(Luna< osg::Vec4ub >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec4ub::operator!=(const osg::Vec4ub &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4ub >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Vec4ub::operator<(const osg::Vec4ub & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec4ub::operator<(const osg::Vec4ub & v) const function, expected prototype:\nbool osg::Vec4ub::operator<(const osg::Vec4ub & v) const\nClass arguments details:\narg 1 ID = 61400540\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4ub* v_ptr=(Luna< osg::Vec4ub >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec4ub::operator< function");
		}
		const osg::Vec4ub & v=*v_ptr;

		osg::Vec4ub* self=(Luna< osg::Vec4ub >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec4ub::operator<(const osg::Vec4ub &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4ub >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned char & osg::Vec4ub::operator[](unsigned int i)
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char & osg::Vec4ub::operator[](unsigned int i) function, expected prototype:\nunsigned char & osg::Vec4ub::operator[](unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Vec4ub* self=(Luna< osg::Vec4ub >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char & osg::Vec4ub::operator[](unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Vec4ub >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char & lret = self->operator[](i);
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char osg::Vec4ub::operator[](unsigned int i) const
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char osg::Vec4ub::operator[](unsigned int i) const function, expected prototype:\nunsigned char osg::Vec4ub::operator[](unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Vec4ub* self=(Luna< osg::Vec4ub >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char osg::Vec4ub::operator[](unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4ub >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->operator[](i);
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// Overload binder for osg::Vec4ub::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](unsigned int)\n  operator[](unsigned int)\n");
		return 0;
	}

	// osg::Vec4ub osg::Vec4ub::operator*(float rhs) const
	static int _bind___mul(lua_State *L) {
		if (!_lg_typecheck___mul(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4ub osg::Vec4ub::operator*(float rhs) const function, expected prototype:\nosg::Vec4ub osg::Vec4ub::operator*(float rhs) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec4ub* self=(Luna< osg::Vec4ub >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4ub osg::Vec4ub::operator*(float) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4ub >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4ub stack_lret = self->operator*(rhs);
		osg::Vec4ub* lret = new osg::Vec4ub(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4ub >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4ub & osg::Vec4ub::operator*=(float rhs)
	static int _bind_op_mult(lua_State *L) {
		if (!_lg_typecheck_op_mult(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4ub & osg::Vec4ub::operator*=(float rhs) function, expected prototype:\nosg::Vec4ub & osg::Vec4ub::operator*=(float rhs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec4ub* self=(Luna< osg::Vec4ub >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4ub & osg::Vec4ub::operator*=(float). Got : '%s'\n%s",typeid(Luna< osg::Vec4ub >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4ub* lret = &self->operator*=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4ub >::push(L,lret,false);

		return 1;
	}

	// osg::Vec4ub osg::Vec4ub::operator/(float rhs) const
	static int _bind___div(lua_State *L) {
		if (!_lg_typecheck___div(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4ub osg::Vec4ub::operator/(float rhs) const function, expected prototype:\nosg::Vec4ub osg::Vec4ub::operator/(float rhs) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec4ub* self=(Luna< osg::Vec4ub >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4ub osg::Vec4ub::operator/(float) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4ub >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4ub stack_lret = self->operator/(rhs);
		osg::Vec4ub* lret = new osg::Vec4ub(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4ub >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4ub & osg::Vec4ub::operator/=(float rhs)
	static int _bind_op_div(lua_State *L) {
		if (!_lg_typecheck_op_div(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4ub & osg::Vec4ub::operator/=(float rhs) function, expected prototype:\nosg::Vec4ub & osg::Vec4ub::operator/=(float rhs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec4ub* self=(Luna< osg::Vec4ub >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4ub & osg::Vec4ub::operator/=(float). Got : '%s'\n%s",typeid(Luna< osg::Vec4ub >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4ub* lret = &self->operator/=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4ub >::push(L,lret,false);

		return 1;
	}

	// osg::Vec4ub osg::Vec4ub::operator+(const osg::Vec4ub & rhs) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4ub osg::Vec4ub::operator+(const osg::Vec4ub & rhs) const function, expected prototype:\nosg::Vec4ub osg::Vec4ub::operator+(const osg::Vec4ub & rhs) const\nClass arguments details:\narg 1 ID = 61400540\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4ub* rhs_ptr=(Luna< osg::Vec4ub >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec4ub::operator+ function");
		}
		const osg::Vec4ub & rhs=*rhs_ptr;

		osg::Vec4ub* self=(Luna< osg::Vec4ub >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4ub osg::Vec4ub::operator+(const osg::Vec4ub &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4ub >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4ub stack_lret = self->operator+(rhs);
		osg::Vec4ub* lret = new osg::Vec4ub(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4ub >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4ub & osg::Vec4ub::operator+=(const osg::Vec4ub & rhs)
	static int _bind_op_add(lua_State *L) {
		if (!_lg_typecheck_op_add(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4ub & osg::Vec4ub::operator+=(const osg::Vec4ub & rhs) function, expected prototype:\nosg::Vec4ub & osg::Vec4ub::operator+=(const osg::Vec4ub & rhs)\nClass arguments details:\narg 1 ID = 61400540\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4ub* rhs_ptr=(Luna< osg::Vec4ub >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec4ub::operator+= function");
		}
		const osg::Vec4ub & rhs=*rhs_ptr;

		osg::Vec4ub* self=(Luna< osg::Vec4ub >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4ub & osg::Vec4ub::operator+=(const osg::Vec4ub &). Got : '%s'\n%s",typeid(Luna< osg::Vec4ub >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4ub* lret = &self->operator+=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4ub >::push(L,lret,false);

		return 1;
	}

	// osg::Vec4ub osg::Vec4ub::operator-(const osg::Vec4ub & rhs) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4ub osg::Vec4ub::operator-(const osg::Vec4ub & rhs) const function, expected prototype:\nosg::Vec4ub osg::Vec4ub::operator-(const osg::Vec4ub & rhs) const\nClass arguments details:\narg 1 ID = 61400540\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4ub* rhs_ptr=(Luna< osg::Vec4ub >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec4ub::operator- function");
		}
		const osg::Vec4ub & rhs=*rhs_ptr;

		osg::Vec4ub* self=(Luna< osg::Vec4ub >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4ub osg::Vec4ub::operator-(const osg::Vec4ub &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec4ub >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4ub stack_lret = self->operator-(rhs);
		osg::Vec4ub* lret = new osg::Vec4ub(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4ub >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4ub & osg::Vec4ub::operator-=(const osg::Vec4ub & rhs)
	static int _bind_op_sub(lua_State *L) {
		if (!_lg_typecheck_op_sub(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4ub & osg::Vec4ub::operator-=(const osg::Vec4ub & rhs) function, expected prototype:\nosg::Vec4ub & osg::Vec4ub::operator-=(const osg::Vec4ub & rhs)\nClass arguments details:\narg 1 ID = 61400540\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4ub* rhs_ptr=(Luna< osg::Vec4ub >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec4ub::operator-= function");
		}
		const osg::Vec4ub & rhs=*rhs_ptr;

		osg::Vec4ub* self=(Luna< osg::Vec4ub >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4ub & osg::Vec4ub::operator-=(const osg::Vec4ub &). Got : '%s'\n%s",typeid(Luna< osg::Vec4ub >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4ub* lret = &self->operator-=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4ub >::push(L,lret,false);

		return 1;
	}


};

osg::Vec4ub* LunaTraits< osg::Vec4ub >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Vec4ub::_bind_ctor(L);
}

void LunaTraits< osg::Vec4ub >::_bind_dtor(osg::Vec4ub* obj) {
	delete obj;
}

const char LunaTraits< osg::Vec4ub >::className[] = "Vec4ub";
const char LunaTraits< osg::Vec4ub >::fullName[] = "osg::Vec4ub";
const char LunaTraits< osg::Vec4ub >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec4ub >::parents[] = {0};
const int LunaTraits< osg::Vec4ub >::hash = 61400540;
const int LunaTraits< osg::Vec4ub >::uniqueIDs[] = {61400540,0};

luna_RegType LunaTraits< osg::Vec4ub >::methods[] = {
	{"ptr", &luna_wrapper_osg_Vec4ub::_bind_ptr},
	{"set", &luna_wrapper_osg_Vec4ub::_bind_set},
	{"r", &luna_wrapper_osg_Vec4ub::_bind_r},
	{"g", &luna_wrapper_osg_Vec4ub::_bind_g},
	{"b", &luna_wrapper_osg_Vec4ub::_bind_b},
	{"a", &luna_wrapper_osg_Vec4ub::_bind_a},
	{"__eq", &luna_wrapper_osg_Vec4ub::_bind___eq},
	{"op_neq", &luna_wrapper_osg_Vec4ub::_bind_op_neq},
	{"__lt", &luna_wrapper_osg_Vec4ub::_bind___lt},
	{"op_index", &luna_wrapper_osg_Vec4ub::_bind_op_index},
	{"__mul", &luna_wrapper_osg_Vec4ub::_bind___mul},
	{"op_mult", &luna_wrapper_osg_Vec4ub::_bind_op_mult},
	{"__div", &luna_wrapper_osg_Vec4ub::_bind___div},
	{"op_div", &luna_wrapper_osg_Vec4ub::_bind_op_div},
	{"__add", &luna_wrapper_osg_Vec4ub::_bind___add},
	{"op_add", &luna_wrapper_osg_Vec4ub::_bind_op_add},
	{"__sub", &luna_wrapper_osg_Vec4ub::_bind___sub},
	{"op_sub", &luna_wrapper_osg_Vec4ub::_bind_op_sub},
	{"dynCast", &luna_wrapper_osg_Vec4ub::_bind_dynCast},
	{"fromVoid", &luna_wrapper_osg_Vec4ub::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Vec4ub::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec4ub >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec4ub >::enumValues[] = {
	{"num_components", osg::Vec4ub::num_components},
	{0,0}
};


