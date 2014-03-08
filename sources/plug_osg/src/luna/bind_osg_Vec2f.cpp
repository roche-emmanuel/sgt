#include <plug_common.h>

class luna_wrapper_osg_Vec2f {
public:
	typedef Luna< osg::Vec2f > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec2f* self= (osg::Vec2f*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Vec2f >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303173) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Vec2f >::check(L,1));
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

		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Vec2f");
		
		return luna_dynamicCast(L,converters,"osg::Vec2f",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
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
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
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


	// Operator checkers:
	// (found 15 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		if( (!(Luna< osg::Vec2f >::check(L,2))) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		return true;
	}


	// Constructor binds:
	// osg::Vec2f::Vec2f()
	static osg::Vec2f* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2f::Vec2f() function, expected prototype:\nosg::Vec2f::Vec2f()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Vec2f();
	}

	// osg::Vec2f::Vec2f(float x, float y)
	static osg::Vec2f* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2f::Vec2f(float x, float y) function, expected prototype:\nosg::Vec2f::Vec2f(float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,1);
		float y=(float)lua_tonumber(L,2);

		return new osg::Vec2f(x, y);
	}

	// Overload binder for osg::Vec2f::Vec2f
	static osg::Vec2f* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Vec2f, cannot match any of the overloads for function Vec2f:\n  Vec2f()\n  Vec2f(float, float)\n");
		return NULL;
	}


	// Function binds:
	// float * osg::Vec2f::ptr()
	static int _bind_ptr_overload_1(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float * osg::Vec2f::ptr() function, expected prototype:\nfloat * osg::Vec2f::ptr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float * osg::Vec2f::ptr(). Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const float * osg::Vec2f::ptr() const
	static int _bind_ptr_overload_2(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const float * osg::Vec2f::ptr() const function, expected prototype:\nconst float * osg::Vec2f::ptr() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const float * osg::Vec2f::ptr() const. Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const float * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// Overload binder for osg::Vec2f::ptr
	static int _bind_ptr(lua_State *L) {
		if (_lg_typecheck_ptr_overload_1(L)) return _bind_ptr_overload_1(L);
		if (_lg_typecheck_ptr_overload_2(L)) return _bind_ptr_overload_2(L);

		luaL_error(L, "error in function ptr, cannot match any of the overloads for function ptr:\n  ptr()\n  ptr()\n");
		return 0;
	}

	// void osg::Vec2f::set(float x, float y)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec2f::set(float x, float y) function, expected prototype:\nvoid osg::Vec2f::set(float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);

		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec2f::set(float, float). Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(x, y);

		return 0;
	}

	// float & osg::Vec2f::x()
	static int _bind_x_overload_1(lua_State *L) {
		if (!_lg_typecheck_x_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float & osg::Vec2f::x() function, expected prototype:\nfloat & osg::Vec2f::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float & osg::Vec2f::x(). Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float & lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Vec2f::x() const
	static int _bind_x_overload_2(lua_State *L) {
		if (!_lg_typecheck_x_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Vec2f::x() const function, expected prototype:\nfloat osg::Vec2f::x() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Vec2f::x() const. Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec2f::x
	static int _bind_x(lua_State *L) {
		if (_lg_typecheck_x_overload_1(L)) return _bind_x_overload_1(L);
		if (_lg_typecheck_x_overload_2(L)) return _bind_x_overload_2(L);

		luaL_error(L, "error in function x, cannot match any of the overloads for function x:\n  x()\n  x()\n");
		return 0;
	}

	// float & osg::Vec2f::y()
	static int _bind_y_overload_1(lua_State *L) {
		if (!_lg_typecheck_y_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float & osg::Vec2f::y() function, expected prototype:\nfloat & osg::Vec2f::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float & osg::Vec2f::y(). Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float & lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Vec2f::y() const
	static int _bind_y_overload_2(lua_State *L) {
		if (!_lg_typecheck_y_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Vec2f::y() const function, expected prototype:\nfloat osg::Vec2f::y() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Vec2f::y() const. Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec2f::y
	static int _bind_y(lua_State *L) {
		if (_lg_typecheck_y_overload_1(L)) return _bind_y_overload_1(L);
		if (_lg_typecheck_y_overload_2(L)) return _bind_y_overload_2(L);

		luaL_error(L, "error in function y, cannot match any of the overloads for function y:\n  y()\n  y()\n");
		return 0;
	}

	// bool osg::Vec2f::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec2f::valid() const function, expected prototype:\nbool osg::Vec2f::valid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec2f::valid() const. Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Vec2f::isNaN() const
	static int _bind_isNaN(lua_State *L) {
		if (!_lg_typecheck_isNaN(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec2f::isNaN() const function, expected prototype:\nbool osg::Vec2f::isNaN() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec2f::isNaN() const. Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isNaN();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float osg::Vec2f::length() const
	static int _bind_length(lua_State *L) {
		if (!_lg_typecheck_length(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Vec2f::length() const function, expected prototype:\nfloat osg::Vec2f::length() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Vec2f::length() const. Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Vec2f::length2() const
	static int _bind_length2(lua_State *L) {
		if (!_lg_typecheck_length2(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Vec2f::length2() const function, expected prototype:\nfloat osg::Vec2f::length2() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Vec2f::length2() const. Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->length2();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Vec2f::normalize()
	static int _bind_normalize(lua_State *L) {
		if (!_lg_typecheck_normalize(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Vec2f::normalize() function, expected prototype:\nfloat osg::Vec2f::normalize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Vec2f::normalize(). Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->normalize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// bool osg::Vec2f::operator==(const osg::Vec2f & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec2f::operator==(const osg::Vec2f & v) const function, expected prototype:\nbool osg::Vec2f::operator==(const osg::Vec2f & v) const\nClass arguments details:\narg 1 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2f* v_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec2f::operator== function");
		}
		const osg::Vec2f & v=*v_ptr;

		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec2f::operator==(const osg::Vec2f &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Vec2f::operator!=(const osg::Vec2f & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec2f::operator!=(const osg::Vec2f & v) const function, expected prototype:\nbool osg::Vec2f::operator!=(const osg::Vec2f & v) const\nClass arguments details:\narg 1 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2f* v_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec2f::operator!= function");
		}
		const osg::Vec2f & v=*v_ptr;

		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec2f::operator!=(const osg::Vec2f &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Vec2f::operator<(const osg::Vec2f & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec2f::operator<(const osg::Vec2f & v) const function, expected prototype:\nbool osg::Vec2f::operator<(const osg::Vec2f & v) const\nClass arguments details:\narg 1 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2f* v_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec2f::operator< function");
		}
		const osg::Vec2f & v=*v_ptr;

		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec2f::operator<(const osg::Vec2f &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float & osg::Vec2f::operator[](int i)
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float & osg::Vec2f::operator[](int i) function, expected prototype:\nfloat & osg::Vec2f::operator[](int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float & osg::Vec2f::operator[](int). Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Vec2f::operator[](int i) const
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Vec2f::operator[](int i) const function, expected prototype:\nfloat osg::Vec2f::operator[](int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Vec2f::operator[](int) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec2f::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](int)\n  operator[](int)\n");
		return 0;
	}

	// float osg::Vec2f::operator*(const osg::Vec2f & rhs) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Vec2f::operator*(const osg::Vec2f & rhs) const function, expected prototype:\nfloat osg::Vec2f::operator*(const osg::Vec2f & rhs) const\nClass arguments details:\narg 1 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2f* rhs_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec2f::operator* function");
		}
		const osg::Vec2f & rhs=*rhs_ptr;

		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Vec2f::operator*(const osg::Vec2f &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->operator*(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const osg::Vec2f osg::Vec2f::operator*(float rhs) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec2f osg::Vec2f::operator*(float rhs) const function, expected prototype:\nconst osg::Vec2f osg::Vec2f::operator*(float rhs) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec2f osg::Vec2f::operator*(float) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec2f stack_lret = self->operator*(rhs);
		const osg::Vec2f* lret = new const osg::Vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osg::Vec2f::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const osg::Vec2f &)\n  operator*(float)\n");
		return 0;
	}

	// osg::Vec2f & osg::Vec2f::operator*=(float rhs)
	static int _bind_op_mult(lua_State *L) {
		if (!_lg_typecheck_op_mult(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2f & osg::Vec2f::operator*=(float rhs) function, expected prototype:\nosg::Vec2f & osg::Vec2f::operator*=(float rhs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec2f & osg::Vec2f::operator*=(float). Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec2f* lret = &self->operator*=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec2f osg::Vec2f::operator/(float rhs) const
	static int _bind___div(lua_State *L) {
		if (!_lg_typecheck___div(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec2f osg::Vec2f::operator/(float rhs) const function, expected prototype:\nconst osg::Vec2f osg::Vec2f::operator/(float rhs) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec2f osg::Vec2f::operator/(float) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec2f stack_lret = self->operator/(rhs);
		const osg::Vec2f* lret = new const osg::Vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec2f & osg::Vec2f::operator/=(float rhs)
	static int _bind_op_div(lua_State *L) {
		if (!_lg_typecheck_op_div(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2f & osg::Vec2f::operator/=(float rhs) function, expected prototype:\nosg::Vec2f & osg::Vec2f::operator/=(float rhs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec2f & osg::Vec2f::operator/=(float). Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec2f* lret = &self->operator/=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec2f osg::Vec2f::operator+(const osg::Vec2f & rhs) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec2f osg::Vec2f::operator+(const osg::Vec2f & rhs) const function, expected prototype:\nconst osg::Vec2f osg::Vec2f::operator+(const osg::Vec2f & rhs) const\nClass arguments details:\narg 1 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2f* rhs_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec2f::operator+ function");
		}
		const osg::Vec2f & rhs=*rhs_ptr;

		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec2f osg::Vec2f::operator+(const osg::Vec2f &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec2f stack_lret = self->operator+(rhs);
		const osg::Vec2f* lret = new const osg::Vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec2f & osg::Vec2f::operator+=(const osg::Vec2f & rhs)
	static int _bind_op_add(lua_State *L) {
		if (!_lg_typecheck_op_add(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2f & osg::Vec2f::operator+=(const osg::Vec2f & rhs) function, expected prototype:\nosg::Vec2f & osg::Vec2f::operator+=(const osg::Vec2f & rhs)\nClass arguments details:\narg 1 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2f* rhs_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec2f::operator+= function");
		}
		const osg::Vec2f & rhs=*rhs_ptr;

		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec2f & osg::Vec2f::operator+=(const osg::Vec2f &). Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec2f* lret = &self->operator+=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec2f osg::Vec2f::operator-(const osg::Vec2f & rhs) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec2f osg::Vec2f::operator-(const osg::Vec2f & rhs) const function, expected prototype:\nconst osg::Vec2f osg::Vec2f::operator-(const osg::Vec2f & rhs) const\nClass arguments details:\narg 1 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2f* rhs_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec2f::operator- function");
		}
		const osg::Vec2f & rhs=*rhs_ptr;

		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec2f osg::Vec2f::operator-(const osg::Vec2f &) const. Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec2f stack_lret = self->operator-(rhs);
		const osg::Vec2f* lret = new const osg::Vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec2f & osg::Vec2f::operator-=(const osg::Vec2f & rhs)
	static int _bind_op_sub(lua_State *L) {
		if (!_lg_typecheck_op_sub(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2f & osg::Vec2f::operator-=(const osg::Vec2f & rhs) function, expected prototype:\nosg::Vec2f & osg::Vec2f::operator-=(const osg::Vec2f & rhs)\nClass arguments details:\narg 1 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2f* rhs_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec2f::operator-= function");
		}
		const osg::Vec2f & rhs=*rhs_ptr;

		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec2f & osg::Vec2f::operator-=(const osg::Vec2f &). Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec2f* lret = &self->operator-=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec2f osg::Vec2f::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec2f osg::Vec2f::operator-() const function, expected prototype:\nconst osg::Vec2f osg::Vec2f::operator-() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec2f* self=(Luna< osg::Vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec2f osg::Vec2f::operator-() const. Got : '%s'\n%s",typeid(Luna< osg::Vec2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec2f stack_lret = self->operator-();
		const osg::Vec2f* lret = new const osg::Vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2f >::push(L,lret,true);

		return 1;
	}


};

osg::Vec2f* LunaTraits< osg::Vec2f >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Vec2f::_bind_ctor(L);
}

void LunaTraits< osg::Vec2f >::_bind_dtor(osg::Vec2f* obj) {
	delete obj;
}

const char LunaTraits< osg::Vec2f >::className[] = "Vec2f";
const char LunaTraits< osg::Vec2f >::fullName[] = "osg::Vec2f";
const char LunaTraits< osg::Vec2f >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec2f >::parents[] = {0};
const int LunaTraits< osg::Vec2f >::hash = 92303173;
const int LunaTraits< osg::Vec2f >::uniqueIDs[] = {92303173,0};

luna_RegType LunaTraits< osg::Vec2f >::methods[] = {
	{"ptr", &luna_wrapper_osg_Vec2f::_bind_ptr},
	{"set", &luna_wrapper_osg_Vec2f::_bind_set},
	{"x", &luna_wrapper_osg_Vec2f::_bind_x},
	{"y", &luna_wrapper_osg_Vec2f::_bind_y},
	{"valid", &luna_wrapper_osg_Vec2f::_bind_valid},
	{"isNaN", &luna_wrapper_osg_Vec2f::_bind_isNaN},
	{"length", &luna_wrapper_osg_Vec2f::_bind_length},
	{"length2", &luna_wrapper_osg_Vec2f::_bind_length2},
	{"normalize", &luna_wrapper_osg_Vec2f::_bind_normalize},
	{"__eq", &luna_wrapper_osg_Vec2f::_bind___eq},
	{"op_neq", &luna_wrapper_osg_Vec2f::_bind_op_neq},
	{"__lt", &luna_wrapper_osg_Vec2f::_bind___lt},
	{"op_index", &luna_wrapper_osg_Vec2f::_bind_op_index},
	{"__mul", &luna_wrapper_osg_Vec2f::_bind___mul},
	{"op_mult", &luna_wrapper_osg_Vec2f::_bind_op_mult},
	{"__div", &luna_wrapper_osg_Vec2f::_bind___div},
	{"op_div", &luna_wrapper_osg_Vec2f::_bind_op_div},
	{"__add", &luna_wrapper_osg_Vec2f::_bind___add},
	{"op_add", &luna_wrapper_osg_Vec2f::_bind_op_add},
	{"__sub", &luna_wrapper_osg_Vec2f::_bind___sub},
	{"op_sub", &luna_wrapper_osg_Vec2f::_bind_op_sub},
	{"__unm", &luna_wrapper_osg_Vec2f::_bind___unm},
	{"dynCast", &luna_wrapper_osg_Vec2f::_bind_dynCast},
	{"fromVoid", &luna_wrapper_osg_Vec2f::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Vec2f::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec2f >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec2f >::enumValues[] = {
	{"num_components", osg::Vec2f::num_components},
	{0,0}
};


