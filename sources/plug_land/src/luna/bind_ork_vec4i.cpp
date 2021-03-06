#include <plug_common.h>

class luna_wrapper_ork_vec4i {
public:
	typedef Luna< ork::vec4i > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec4i* self= (ork::vec4i*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::vec4i >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304305) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::vec4i >::check(L,1));
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

		ork::vec4i* self=(Luna< ork::vec4i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::vec4i");
		
		return luna_dynamicCast(L,converters,"ork::vec4i",name);
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

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304305) ) return false;
		if( (!(Luna< ork::vec4i >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304274) ) return false;
		if( (!(Luna< ork::vec3i >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304274) ) return false;
		if( (!(Luna< ork::vec3i >::check(L,1))) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_xyzw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_xyz(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_xy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getZ(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getW(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZ(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setW(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 11 valid operators)
	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304305) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304305) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304305) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304305) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304305) ) return false;
		if( (!(Luna< ork::vec4i >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304305) ) return false;
		if( (!(Luna< ork::vec4i >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304305) ) return false;
		return true;
	}


	// Constructor binds:
	// ork::vec4i::vec4i()
	static ork::vec4i* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4i::vec4i() function, expected prototype:\nork::vec4i::vec4i()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::vec4i();
	}

	// ork::vec4i::vec4i(int xi, int yi, int zi, int wi)
	static ork::vec4i* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4i::vec4i(int xi, int yi, int zi, int wi) function, expected prototype:\nork::vec4i::vec4i(int xi, int yi, int zi, int wi)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int xi=(int)lua_tointeger(L,1);
		int yi=(int)lua_tointeger(L,2);
		int zi=(int)lua_tointeger(L,3);
		int wi=(int)lua_tointeger(L,4);

		return new ork::vec4i(xi, yi, zi, wi);
	}

	// ork::vec4i::vec4i(const ork::vec4i & v)
	static ork::vec4i* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4i::vec4i(const ork::vec4i & v) function, expected prototype:\nork::vec4i::vec4i(const ork::vec4i & v)\nClass arguments details:\narg 1 ID = 81304305\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4i* v_ptr=(Luna< ork::vec4i >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4i::vec4i function");
		}
		const ork::vec4i & v=*v_ptr;

		return new ork::vec4i(v);
	}

	// ork::vec4i::vec4i(const ork::vec3i & v)
	static ork::vec4i* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4i::vec4i(const ork::vec3i & v) function, expected prototype:\nork::vec4i::vec4i(const ork::vec3i & v)\nClass arguments details:\narg 1 ID = 81304274\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3i* v_ptr=(Luna< ork::vec3i >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4i::vec4i function");
		}
		const ork::vec3i & v=*v_ptr;

		return new ork::vec4i(v);
	}

	// ork::vec4i::vec4i(const ork::vec3i & v, int wi)
	static ork::vec4i* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4i::vec4i(const ork::vec3i & v, int wi) function, expected prototype:\nork::vec4i::vec4i(const ork::vec3i & v, int wi)\nClass arguments details:\narg 1 ID = 81304274\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3i* v_ptr=(Luna< ork::vec3i >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4i::vec4i function");
		}
		const ork::vec3i & v=*v_ptr;
		int wi=(int)lua_tointeger(L,2);

		return new ork::vec4i(v, wi);
	}

	// Overload binder for ork::vec4i::vec4i
	static ork::vec4i* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);

		luaL_error(L, "error in function vec4i, cannot match any of the overloads for function vec4i:\n  vec4i()\n  vec4i(int, int, int, int)\n  vec4i(const ork::vec4i &)\n  vec4i(const ork::vec3i &)\n  vec4i(const ork::vec3i &, int)\n");
		return NULL;
	}


	// Function binds:
	// ork::vec3i ork::vec4i::xyzw() const
	static int _bind_xyzw(lua_State *L) {
		if (!_lg_typecheck_xyzw(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3i ork::vec4i::xyzw() const function, expected prototype:\nork::vec3i ork::vec4i::xyzw() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4i* self=(Luna< ork::vec4i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3i ork::vec4i::xyzw() const. Got : '%s'\n%s",typeid(Luna< ork::vec4i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3i stack_lret = self->xyzw();
		ork::vec3i* lret = new ork::vec3i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3i >::push(L,lret,true);

		return 1;
	}

	// ork::vec3i ork::vec4i::xyz() const
	static int _bind_xyz(lua_State *L) {
		if (!_lg_typecheck_xyz(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3i ork::vec4i::xyz() const function, expected prototype:\nork::vec3i ork::vec4i::xyz() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4i* self=(Luna< ork::vec4i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3i ork::vec4i::xyz() const. Got : '%s'\n%s",typeid(Luna< ork::vec4i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3i stack_lret = self->xyz();
		ork::vec3i* lret = new ork::vec3i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3i >::push(L,lret,true);

		return 1;
	}

	// ork::vec2i ork::vec4i::xy() const
	static int _bind_xy(lua_State *L) {
		if (!_lg_typecheck_xy(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2i ork::vec4i::xy() const function, expected prototype:\nork::vec2i ork::vec4i::xy() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4i* self=(Luna< ork::vec4i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2i ork::vec4i::xy() const. Got : '%s'\n%s",typeid(Luna< ork::vec4i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2i stack_lret = self->xy();
		ork::vec2i* lret = new ork::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2i >::push(L,lret,true);

		return 1;
	}

	// int ork::vec4i::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in int ork::vec4i::x() function, expected prototype:\nint ork::vec4i::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4i* self=(Luna< ork::vec4i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::vec4i::x(). Got : '%s'\n%s",typeid(Luna< ork::vec4i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::vec4i::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in int ork::vec4i::y() function, expected prototype:\nint ork::vec4i::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4i* self=(Luna< ork::vec4i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::vec4i::y(). Got : '%s'\n%s",typeid(Luna< ork::vec4i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::vec4i::z()
	static int _bind_getZ(lua_State *L) {
		if (!_lg_typecheck_getZ(L)) {
			luaL_error(L, "luna typecheck failed in int ork::vec4i::z() function, expected prototype:\nint ork::vec4i::z()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4i* self=(Luna< ork::vec4i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::vec4i::z(). Got : '%s'\n%s",typeid(Luna< ork::vec4i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->z;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::vec4i::w()
	static int _bind_getW(lua_State *L) {
		if (!_lg_typecheck_getW(L)) {
			luaL_error(L, "luna typecheck failed in int ork::vec4i::w() function, expected prototype:\nint ork::vec4i::w()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4i* self=(Luna< ork::vec4i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::vec4i::w(). Got : '%s'\n%s",typeid(Luna< ork::vec4i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->w;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::vec4i::x(int value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void ork::vec4i::x(int value) function, expected prototype:\nvoid ork::vec4i::x(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		ork::vec4i* self=(Luna< ork::vec4i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::vec4i::x(int). Got : '%s'\n%s",typeid(Luna< ork::vec4i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void ork::vec4i::y(int value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void ork::vec4i::y(int value) function, expected prototype:\nvoid ork::vec4i::y(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		ork::vec4i* self=(Luna< ork::vec4i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::vec4i::y(int). Got : '%s'\n%s",typeid(Luna< ork::vec4i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}

	// void ork::vec4i::z(int value)
	static int _bind_setZ(lua_State *L) {
		if (!_lg_typecheck_setZ(L)) {
			luaL_error(L, "luna typecheck failed in void ork::vec4i::z(int value) function, expected prototype:\nvoid ork::vec4i::z(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		ork::vec4i* self=(Luna< ork::vec4i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::vec4i::z(int). Got : '%s'\n%s",typeid(Luna< ork::vec4i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->z = value;

		return 0;
	}

	// void ork::vec4i::w(int value)
	static int _bind_setW(lua_State *L) {
		if (!_lg_typecheck_setW(L)) {
			luaL_error(L, "luna typecheck failed in void ork::vec4i::w(int value) function, expected prototype:\nvoid ork::vec4i::w(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		ork::vec4i* self=(Luna< ork::vec4i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::vec4i::w(int). Got : '%s'\n%s",typeid(Luna< ork::vec4i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->w = value;

		return 0;
	}


	// Operator binds:
	// int & ork::vec4i::operator[](const int i)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luaL_error(L, "luna typecheck failed in int & ork::vec4i::operator[](const int i) function, expected prototype:\nint & ork::vec4i::operator[](const int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const int i=(const int)lua_tointeger(L,2);

		ork::vec4i* self=(Luna< ork::vec4i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int & ork::vec4i::operator[](const int). Got : '%s'\n%s",typeid(Luna< ork::vec4i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool ork::vec4i::operator==(const ork::vec4i & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::vec4i::operator==(const ork::vec4i & v) const function, expected prototype:\nbool ork::vec4i::operator==(const ork::vec4i & v) const\nClass arguments details:\narg 1 ID = 81304305\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4i* v_ptr=(Luna< ork::vec4i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4i::operator== function");
		}
		const ork::vec4i & v=*v_ptr;

		ork::vec4i* self=(Luna< ork::vec4i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::vec4i::operator==(const ork::vec4i &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::vec4i::operator!=(const ork::vec4i & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::vec4i::operator!=(const ork::vec4i & v) const function, expected prototype:\nbool ork::vec4i::operator!=(const ork::vec4i & v) const\nClass arguments details:\narg 1 ID = 81304305\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4i* v_ptr=(Luna< ork::vec4i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4i::operator!= function");
		}
		const ork::vec4i & v=*v_ptr;

		ork::vec4i* self=(Luna< ork::vec4i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::vec4i::operator!=(const ork::vec4i &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::vec4i ork::vec4i::operator+(const ork::vec4i & v) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4i ork::vec4i::operator+(const ork::vec4i & v) const function, expected prototype:\nork::vec4i ork::vec4i::operator+(const ork::vec4i & v) const\nClass arguments details:\narg 1 ID = 81304305\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4i* v_ptr=(Luna< ork::vec4i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4i::operator+ function");
		}
		const ork::vec4i & v=*v_ptr;

		ork::vec4i* self=(Luna< ork::vec4i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4i ork::vec4i::operator+(const ork::vec4i &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4i stack_lret = self->operator+(v);
		ork::vec4i* lret = new ork::vec4i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4i >::push(L,lret,true);

		return 1;
	}

	// ork::vec4i ork::vec4i::operator-(const ork::vec4i & v) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4i ork::vec4i::operator-(const ork::vec4i & v) const function, expected prototype:\nork::vec4i ork::vec4i::operator-(const ork::vec4i & v) const\nClass arguments details:\narg 1 ID = 81304305\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4i* v_ptr=(Luna< ork::vec4i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4i::operator- function");
		}
		const ork::vec4i & v=*v_ptr;

		ork::vec4i* self=(Luna< ork::vec4i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4i ork::vec4i::operator-(const ork::vec4i &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4i stack_lret = self->operator-(v);
		ork::vec4i* lret = new ork::vec4i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4i >::push(L,lret,true);

		return 1;
	}

	// ork::vec4i ork::vec4i::operator*(const ork::vec4i & v) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4i ork::vec4i::operator*(const ork::vec4i & v) const function, expected prototype:\nork::vec4i ork::vec4i::operator*(const ork::vec4i & v) const\nClass arguments details:\narg 1 ID = 81304305\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4i* v_ptr=(Luna< ork::vec4i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4i::operator* function");
		}
		const ork::vec4i & v=*v_ptr;

		ork::vec4i* self=(Luna< ork::vec4i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4i ork::vec4i::operator*(const ork::vec4i &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4i stack_lret = self->operator*(v);
		ork::vec4i* lret = new ork::vec4i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4i >::push(L,lret,true);

		return 1;
	}

	// ork::vec4i ork::vec4i::operator*(const int scalar) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4i ork::vec4i::operator*(const int scalar) const function, expected prototype:\nork::vec4i ork::vec4i::operator*(const int scalar) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const int scalar=(const int)lua_tointeger(L,2);

		ork::vec4i* self=(Luna< ork::vec4i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4i ork::vec4i::operator*(const int) const. Got : '%s'\n%s",typeid(Luna< ork::vec4i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4i stack_lret = self->operator*(scalar);
		ork::vec4i* lret = new ork::vec4i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4i >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::vec4i::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const ork::vec4i &)\n  operator*(const int)\n");
		return 0;
	}

	// ork::vec4i ork::vec4i::operator/(const ork::vec4i & v) const
	static int _bind___div_overload_1(lua_State *L) {
		if (!_lg_typecheck___div_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4i ork::vec4i::operator/(const ork::vec4i & v) const function, expected prototype:\nork::vec4i ork::vec4i::operator/(const ork::vec4i & v) const\nClass arguments details:\narg 1 ID = 81304305\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4i* v_ptr=(Luna< ork::vec4i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4i::operator/ function");
		}
		const ork::vec4i & v=*v_ptr;

		ork::vec4i* self=(Luna< ork::vec4i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4i ork::vec4i::operator/(const ork::vec4i &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4i stack_lret = self->operator/(v);
		ork::vec4i* lret = new ork::vec4i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4i >::push(L,lret,true);

		return 1;
	}

	// ork::vec4i ork::vec4i::operator/(const int scalar) const
	static int _bind___div_overload_2(lua_State *L) {
		if (!_lg_typecheck___div_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4i ork::vec4i::operator/(const int scalar) const function, expected prototype:\nork::vec4i ork::vec4i::operator/(const int scalar) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const int scalar=(const int)lua_tointeger(L,2);

		ork::vec4i* self=(Luna< ork::vec4i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4i ork::vec4i::operator/(const int) const. Got : '%s'\n%s",typeid(Luna< ork::vec4i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4i stack_lret = self->operator/(scalar);
		ork::vec4i* lret = new ork::vec4i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4i >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::vec4i::operator/
	static int _bind___div(lua_State *L) {
		if (_lg_typecheck___div_overload_1(L)) return _bind___div_overload_1(L);
		if (_lg_typecheck___div_overload_2(L)) return _bind___div_overload_2(L);

		luaL_error(L, "error in function operator/, cannot match any of the overloads for function operator/:\n  operator/(const ork::vec4i &)\n  operator/(const int)\n");
		return 0;
	}

	// ork::vec4i ork::vec4i::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4i ork::vec4i::operator-() const function, expected prototype:\nork::vec4i ork::vec4i::operator-() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec4i* self=(Luna< ork::vec4i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4i ork::vec4i::operator-() const. Got : '%s'\n%s",typeid(Luna< ork::vec4i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4i stack_lret = self->operator-();
		ork::vec4i* lret = new ork::vec4i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4i >::push(L,lret,true);

		return 1;
	}

	// bool ork::vec4i::operator<(const ork::vec4i & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::vec4i::operator<(const ork::vec4i & v) const function, expected prototype:\nbool ork::vec4i::operator<(const ork::vec4i & v) const\nClass arguments details:\narg 1 ID = 81304305\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4i* v_ptr=(Luna< ork::vec4i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec4i::operator< function");
		}
		const ork::vec4i & v=*v_ptr;

		ork::vec4i* self=(Luna< ork::vec4i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::vec4i::operator<(const ork::vec4i &) const. Got : '%s'\n%s",typeid(Luna< ork::vec4i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

ork::vec4i* LunaTraits< ork::vec4i >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_vec4i::_bind_ctor(L);
}

void LunaTraits< ork::vec4i >::_bind_dtor(ork::vec4i* obj) {
	delete obj;
}

const char LunaTraits< ork::vec4i >::className[] = "vec4i";
const char LunaTraits< ork::vec4i >::fullName[] = "ork::vec4i";
const char LunaTraits< ork::vec4i >::moduleName[] = "ork";
const char* LunaTraits< ork::vec4i >::parents[] = {0};
const int LunaTraits< ork::vec4i >::hash = 81304305;
const int LunaTraits< ork::vec4i >::uniqueIDs[] = {81304305,0};

luna_RegType LunaTraits< ork::vec4i >::methods[] = {
	{"xyzw", &luna_wrapper_ork_vec4i::_bind_xyzw},
	{"xyz", &luna_wrapper_ork_vec4i::_bind_xyz},
	{"xy", &luna_wrapper_ork_vec4i::_bind_xy},
	{"getX", &luna_wrapper_ork_vec4i::_bind_getX},
	{"getY", &luna_wrapper_ork_vec4i::_bind_getY},
	{"getZ", &luna_wrapper_ork_vec4i::_bind_getZ},
	{"getW", &luna_wrapper_ork_vec4i::_bind_getW},
	{"setX", &luna_wrapper_ork_vec4i::_bind_setX},
	{"setY", &luna_wrapper_ork_vec4i::_bind_setY},
	{"setZ", &luna_wrapper_ork_vec4i::_bind_setZ},
	{"setW", &luna_wrapper_ork_vec4i::_bind_setW},
	{"op_index", &luna_wrapper_ork_vec4i::_bind_op_index},
	{"__eq", &luna_wrapper_ork_vec4i::_bind___eq},
	{"op_neq", &luna_wrapper_ork_vec4i::_bind_op_neq},
	{"__add", &luna_wrapper_ork_vec4i::_bind___add},
	{"__sub", &luna_wrapper_ork_vec4i::_bind___sub},
	{"__mul", &luna_wrapper_ork_vec4i::_bind___mul},
	{"__div", &luna_wrapper_ork_vec4i::_bind___div},
	{"__unm", &luna_wrapper_ork_vec4i::_bind___unm},
	{"__lt", &luna_wrapper_ork_vec4i::_bind___lt},
	{"dynCast", &luna_wrapper_ork_vec4i::_bind_dynCast},
	{"fromVoid", &luna_wrapper_ork_vec4i::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_vec4i::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::vec4i >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::vec4i >::enumValues[] = {
	{0,0}
};


