#include <plug_common.h>

class luna_wrapper_ork_vec2i {
public:
	typedef Luna< ork::vec2i > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2i* self= (ork::vec2i*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::vec2i >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304243) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::vec2i >::check(L,1));
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

		ork::vec2i* self=(Luna< ork::vec2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::vec2i");
		
		return luna_dynamicCast(L,converters,"ork::vec2i",name);
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

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304243) ) return false;
		if( (!(Luna< ork::vec2i >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_length(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_squaredLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_normalize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_normalize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_distanceTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304243) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_squaredDistanceTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304243) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dot(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304243) ) return false;
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


	// Operator checkers:
	// (found 11 valid operators)
	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304243) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304243) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304243) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304243) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304243) ) return false;
		if( (!(Luna< ork::vec2i >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304243) ) return false;
		if( (!(Luna< ork::vec2i >::check(L,2))) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,81304243) ) return false;
		return true;
	}


	// Constructor binds:
	// ork::vec2i::vec2i()
	static ork::vec2i* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2i::vec2i() function, expected prototype:\nork::vec2i::vec2i()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::vec2i();
	}

	// ork::vec2i::vec2i(int xi, int yi)
	static ork::vec2i* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2i::vec2i(int xi, int yi) function, expected prototype:\nork::vec2i::vec2i(int xi, int yi)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int xi=(int)lua_tointeger(L,1);
		int yi=(int)lua_tointeger(L,2);

		return new ork::vec2i(xi, yi);
	}

	// ork::vec2i::vec2i(const ork::vec2i & v)
	static ork::vec2i* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2i::vec2i(const ork::vec2i & v) function, expected prototype:\nork::vec2i::vec2i(const ork::vec2i & v)\nClass arguments details:\narg 1 ID = 81304243\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2i* v_ptr=(Luna< ork::vec2i >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec2i::vec2i function");
		}
		const ork::vec2i & v=*v_ptr;

		return new ork::vec2i(v);
	}

	// Overload binder for ork::vec2i::vec2i
	static ork::vec2i* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function vec2i, cannot match any of the overloads for function vec2i:\n  vec2i()\n  vec2i(int, int)\n  vec2i(const ork::vec2i &)\n");
		return NULL;
	}


	// Function binds:
	// int ork::vec2i::length() const
	static int _bind_length(lua_State *L) {
		if (!_lg_typecheck_length(L)) {
			luaL_error(L, "luna typecheck failed in int ork::vec2i::length() const function, expected prototype:\nint ork::vec2i::length() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec2i* self=(Luna< ork::vec2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::vec2i::length() const. Got : '%s'\n%s",typeid(Luna< ork::vec2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::vec2i::squaredLength() const
	static int _bind_squaredLength(lua_State *L) {
		if (!_lg_typecheck_squaredLength(L)) {
			luaL_error(L, "luna typecheck failed in int ork::vec2i::squaredLength() const function, expected prototype:\nint ork::vec2i::squaredLength() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec2i* self=(Luna< ork::vec2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::vec2i::squaredLength() const. Got : '%s'\n%s",typeid(Luna< ork::vec2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->squaredLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::vec2i ork::vec2i::normalize() const
	static int _bind_normalize_overload_1(lua_State *L) {
		if (!_lg_typecheck_normalize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2i ork::vec2i::normalize() const function, expected prototype:\nork::vec2i ork::vec2i::normalize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec2i* self=(Luna< ork::vec2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2i ork::vec2i::normalize() const. Got : '%s'\n%s",typeid(Luna< ork::vec2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2i stack_lret = self->normalize();
		ork::vec2i* lret = new ork::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2i >::push(L,lret,true);

		return 1;
	}

	// ork::vec2i ork::vec2i::normalize(int l) const
	static int _bind_normalize_overload_2(lua_State *L) {
		if (!_lg_typecheck_normalize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2i ork::vec2i::normalize(int l) const function, expected prototype:\nork::vec2i ork::vec2i::normalize(int l) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int l=(int)lua_tointeger(L,2);

		ork::vec2i* self=(Luna< ork::vec2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2i ork::vec2i::normalize(int) const. Got : '%s'\n%s",typeid(Luna< ork::vec2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2i stack_lret = self->normalize(l);
		ork::vec2i* lret = new ork::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2i >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::vec2i::normalize
	static int _bind_normalize(lua_State *L) {
		if (_lg_typecheck_normalize_overload_1(L)) return _bind_normalize_overload_1(L);
		if (_lg_typecheck_normalize_overload_2(L)) return _bind_normalize_overload_2(L);

		luaL_error(L, "error in function normalize, cannot match any of the overloads for function normalize:\n  normalize()\n  normalize(int)\n");
		return 0;
	}

	// int ork::vec2i::distanceTo(const ork::vec2i & v) const
	static int _bind_distanceTo(lua_State *L) {
		if (!_lg_typecheck_distanceTo(L)) {
			luaL_error(L, "luna typecheck failed in int ork::vec2i::distanceTo(const ork::vec2i & v) const function, expected prototype:\nint ork::vec2i::distanceTo(const ork::vec2i & v) const\nClass arguments details:\narg 1 ID = 81304243\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2i* v_ptr=(Luna< ork::vec2i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec2i::distanceTo function");
		}
		const ork::vec2i & v=*v_ptr;

		ork::vec2i* self=(Luna< ork::vec2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::vec2i::distanceTo(const ork::vec2i &) const. Got : '%s'\n%s",typeid(Luna< ork::vec2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->distanceTo(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::vec2i::squaredDistanceTo(const ork::vec2i & v) const
	static int _bind_squaredDistanceTo(lua_State *L) {
		if (!_lg_typecheck_squaredDistanceTo(L)) {
			luaL_error(L, "luna typecheck failed in int ork::vec2i::squaredDistanceTo(const ork::vec2i & v) const function, expected prototype:\nint ork::vec2i::squaredDistanceTo(const ork::vec2i & v) const\nClass arguments details:\narg 1 ID = 81304243\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2i* v_ptr=(Luna< ork::vec2i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec2i::squaredDistanceTo function");
		}
		const ork::vec2i & v=*v_ptr;

		ork::vec2i* self=(Luna< ork::vec2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::vec2i::squaredDistanceTo(const ork::vec2i &) const. Got : '%s'\n%s",typeid(Luna< ork::vec2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->squaredDistanceTo(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::vec2i::dot(const ork::vec2i & v) const
	static int _bind_dot(lua_State *L) {
		if (!_lg_typecheck_dot(L)) {
			luaL_error(L, "luna typecheck failed in int ork::vec2i::dot(const ork::vec2i & v) const function, expected prototype:\nint ork::vec2i::dot(const ork::vec2i & v) const\nClass arguments details:\narg 1 ID = 81304243\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2i* v_ptr=(Luna< ork::vec2i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec2i::dot function");
		}
		const ork::vec2i & v=*v_ptr;

		ork::vec2i* self=(Luna< ork::vec2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::vec2i::dot(const ork::vec2i &) const. Got : '%s'\n%s",typeid(Luna< ork::vec2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->dot(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::vec2i::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in int ork::vec2i::x() function, expected prototype:\nint ork::vec2i::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec2i* self=(Luna< ork::vec2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::vec2i::x(). Got : '%s'\n%s",typeid(Luna< ork::vec2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::vec2i::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in int ork::vec2i::y() function, expected prototype:\nint ork::vec2i::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec2i* self=(Luna< ork::vec2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::vec2i::y(). Got : '%s'\n%s",typeid(Luna< ork::vec2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::vec2i::x(int value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void ork::vec2i::x(int value) function, expected prototype:\nvoid ork::vec2i::x(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		ork::vec2i* self=(Luna< ork::vec2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::vec2i::x(int). Got : '%s'\n%s",typeid(Luna< ork::vec2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void ork::vec2i::y(int value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void ork::vec2i::y(int value) function, expected prototype:\nvoid ork::vec2i::y(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		ork::vec2i* self=(Luna< ork::vec2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::vec2i::y(int). Got : '%s'\n%s",typeid(Luna< ork::vec2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}


	// Operator binds:
	// int & ork::vec2i::operator[](const int i)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luaL_error(L, "luna typecheck failed in int & ork::vec2i::operator[](const int i) function, expected prototype:\nint & ork::vec2i::operator[](const int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const int i=(const int)lua_tointeger(L,2);

		ork::vec2i* self=(Luna< ork::vec2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int & ork::vec2i::operator[](const int). Got : '%s'\n%s",typeid(Luna< ork::vec2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool ork::vec2i::operator==(const ork::vec2i & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::vec2i::operator==(const ork::vec2i & v) const function, expected prototype:\nbool ork::vec2i::operator==(const ork::vec2i & v) const\nClass arguments details:\narg 1 ID = 81304243\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2i* v_ptr=(Luna< ork::vec2i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec2i::operator== function");
		}
		const ork::vec2i & v=*v_ptr;

		ork::vec2i* self=(Luna< ork::vec2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::vec2i::operator==(const ork::vec2i &) const. Got : '%s'\n%s",typeid(Luna< ork::vec2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::vec2i::operator!=(const ork::vec2i & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::vec2i::operator!=(const ork::vec2i & v) const function, expected prototype:\nbool ork::vec2i::operator!=(const ork::vec2i & v) const\nClass arguments details:\narg 1 ID = 81304243\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2i* v_ptr=(Luna< ork::vec2i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec2i::operator!= function");
		}
		const ork::vec2i & v=*v_ptr;

		ork::vec2i* self=(Luna< ork::vec2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::vec2i::operator!=(const ork::vec2i &) const. Got : '%s'\n%s",typeid(Luna< ork::vec2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::vec2i ork::vec2i::operator+(const ork::vec2i & v) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2i ork::vec2i::operator+(const ork::vec2i & v) const function, expected prototype:\nork::vec2i ork::vec2i::operator+(const ork::vec2i & v) const\nClass arguments details:\narg 1 ID = 81304243\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2i* v_ptr=(Luna< ork::vec2i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec2i::operator+ function");
		}
		const ork::vec2i & v=*v_ptr;

		ork::vec2i* self=(Luna< ork::vec2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2i ork::vec2i::operator+(const ork::vec2i &) const. Got : '%s'\n%s",typeid(Luna< ork::vec2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2i stack_lret = self->operator+(v);
		ork::vec2i* lret = new ork::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2i >::push(L,lret,true);

		return 1;
	}

	// ork::vec2i ork::vec2i::operator-(const ork::vec2i & v) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2i ork::vec2i::operator-(const ork::vec2i & v) const function, expected prototype:\nork::vec2i ork::vec2i::operator-(const ork::vec2i & v) const\nClass arguments details:\narg 1 ID = 81304243\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2i* v_ptr=(Luna< ork::vec2i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec2i::operator- function");
		}
		const ork::vec2i & v=*v_ptr;

		ork::vec2i* self=(Luna< ork::vec2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2i ork::vec2i::operator-(const ork::vec2i &) const. Got : '%s'\n%s",typeid(Luna< ork::vec2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2i stack_lret = self->operator-(v);
		ork::vec2i* lret = new ork::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2i >::push(L,lret,true);

		return 1;
	}

	// ork::vec2i ork::vec2i::operator*(const ork::vec2i & v) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2i ork::vec2i::operator*(const ork::vec2i & v) const function, expected prototype:\nork::vec2i ork::vec2i::operator*(const ork::vec2i & v) const\nClass arguments details:\narg 1 ID = 81304243\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2i* v_ptr=(Luna< ork::vec2i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec2i::operator* function");
		}
		const ork::vec2i & v=*v_ptr;

		ork::vec2i* self=(Luna< ork::vec2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2i ork::vec2i::operator*(const ork::vec2i &) const. Got : '%s'\n%s",typeid(Luna< ork::vec2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2i stack_lret = self->operator*(v);
		ork::vec2i* lret = new ork::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2i >::push(L,lret,true);

		return 1;
	}

	// ork::vec2i ork::vec2i::operator*(const int scalar) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2i ork::vec2i::operator*(const int scalar) const function, expected prototype:\nork::vec2i ork::vec2i::operator*(const int scalar) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const int scalar=(const int)lua_tointeger(L,2);

		ork::vec2i* self=(Luna< ork::vec2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2i ork::vec2i::operator*(const int) const. Got : '%s'\n%s",typeid(Luna< ork::vec2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2i stack_lret = self->operator*(scalar);
		ork::vec2i* lret = new ork::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2i >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::vec2i::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const ork::vec2i &)\n  operator*(const int)\n");
		return 0;
	}

	// ork::vec2i ork::vec2i::operator/(const ork::vec2i & v) const
	static int _bind___div_overload_1(lua_State *L) {
		if (!_lg_typecheck___div_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2i ork::vec2i::operator/(const ork::vec2i & v) const function, expected prototype:\nork::vec2i ork::vec2i::operator/(const ork::vec2i & v) const\nClass arguments details:\narg 1 ID = 81304243\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2i* v_ptr=(Luna< ork::vec2i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec2i::operator/ function");
		}
		const ork::vec2i & v=*v_ptr;

		ork::vec2i* self=(Luna< ork::vec2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2i ork::vec2i::operator/(const ork::vec2i &) const. Got : '%s'\n%s",typeid(Luna< ork::vec2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2i stack_lret = self->operator/(v);
		ork::vec2i* lret = new ork::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2i >::push(L,lret,true);

		return 1;
	}

	// ork::vec2i ork::vec2i::operator/(const int scalar) const
	static int _bind___div_overload_2(lua_State *L) {
		if (!_lg_typecheck___div_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2i ork::vec2i::operator/(const int scalar) const function, expected prototype:\nork::vec2i ork::vec2i::operator/(const int scalar) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const int scalar=(const int)lua_tointeger(L,2);

		ork::vec2i* self=(Luna< ork::vec2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2i ork::vec2i::operator/(const int) const. Got : '%s'\n%s",typeid(Luna< ork::vec2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2i stack_lret = self->operator/(scalar);
		ork::vec2i* lret = new ork::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2i >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::vec2i::operator/
	static int _bind___div(lua_State *L) {
		if (_lg_typecheck___div_overload_1(L)) return _bind___div_overload_1(L);
		if (_lg_typecheck___div_overload_2(L)) return _bind___div_overload_2(L);

		luaL_error(L, "error in function operator/, cannot match any of the overloads for function operator/:\n  operator/(const ork::vec2i &)\n  operator/(const int)\n");
		return 0;
	}

	// ork::vec2i ork::vec2i::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2i ork::vec2i::operator-() const function, expected prototype:\nork::vec2i ork::vec2i::operator-() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::vec2i* self=(Luna< ork::vec2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2i ork::vec2i::operator-() const. Got : '%s'\n%s",typeid(Luna< ork::vec2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2i stack_lret = self->operator-();
		ork::vec2i* lret = new ork::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2i >::push(L,lret,true);

		return 1;
	}

	// bool ork::vec2i::operator<(const ork::vec2i & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::vec2i::operator<(const ork::vec2i & v) const function, expected prototype:\nbool ork::vec2i::operator<(const ork::vec2i & v) const\nClass arguments details:\narg 1 ID = 81304243\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2i* v_ptr=(Luna< ork::vec2i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::vec2i::operator< function");
		}
		const ork::vec2i & v=*v_ptr;

		ork::vec2i* self=(Luna< ork::vec2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::vec2i::operator<(const ork::vec2i &) const. Got : '%s'\n%s",typeid(Luna< ork::vec2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

ork::vec2i* LunaTraits< ork::vec2i >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_vec2i::_bind_ctor(L);
}

void LunaTraits< ork::vec2i >::_bind_dtor(ork::vec2i* obj) {
	delete obj;
}

const char LunaTraits< ork::vec2i >::className[] = "vec2i";
const char LunaTraits< ork::vec2i >::fullName[] = "ork::vec2i";
const char LunaTraits< ork::vec2i >::moduleName[] = "ork";
const char* LunaTraits< ork::vec2i >::parents[] = {0};
const int LunaTraits< ork::vec2i >::hash = 81304243;
const int LunaTraits< ork::vec2i >::uniqueIDs[] = {81304243,0};

luna_RegType LunaTraits< ork::vec2i >::methods[] = {
	{"length", &luna_wrapper_ork_vec2i::_bind_length},
	{"squaredLength", &luna_wrapper_ork_vec2i::_bind_squaredLength},
	{"normalize", &luna_wrapper_ork_vec2i::_bind_normalize},
	{"distanceTo", &luna_wrapper_ork_vec2i::_bind_distanceTo},
	{"squaredDistanceTo", &luna_wrapper_ork_vec2i::_bind_squaredDistanceTo},
	{"dot", &luna_wrapper_ork_vec2i::_bind_dot},
	{"getX", &luna_wrapper_ork_vec2i::_bind_getX},
	{"getY", &luna_wrapper_ork_vec2i::_bind_getY},
	{"setX", &luna_wrapper_ork_vec2i::_bind_setX},
	{"setY", &luna_wrapper_ork_vec2i::_bind_setY},
	{"op_index", &luna_wrapper_ork_vec2i::_bind_op_index},
	{"__eq", &luna_wrapper_ork_vec2i::_bind___eq},
	{"op_neq", &luna_wrapper_ork_vec2i::_bind_op_neq},
	{"__add", &luna_wrapper_ork_vec2i::_bind___add},
	{"__sub", &luna_wrapper_ork_vec2i::_bind___sub},
	{"__mul", &luna_wrapper_ork_vec2i::_bind___mul},
	{"__div", &luna_wrapper_ork_vec2i::_bind___div},
	{"__unm", &luna_wrapper_ork_vec2i::_bind___unm},
	{"__lt", &luna_wrapper_ork_vec2i::_bind___lt},
	{"dynCast", &luna_wrapper_ork_vec2i::_bind_dynCast},
	{"fromVoid", &luna_wrapper_ork_vec2i::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_vec2i::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::vec2i >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::vec2i >::enumValues[] = {
	{0,0}
};


