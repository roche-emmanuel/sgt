#include <plug_common.h>

class luna_wrapper_ork_box2i {
public:
	typedef Luna< ork::box2i > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::box2i* self= (ork::box2i*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::box2i >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63151914) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::box2i >::check(L,1));
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

		ork::box2i* self=(Luna< ork::box2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::box2i");
		
		return luna_dynamicCast(L,converters,"ork::box2i",name);
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
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304243) ) return false;
		if( (!(Luna< ork::vec2i >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,81304243) ) return false;
		if( (!(Luna< ork::vec2i >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_center(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_width(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_height(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_area(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_enlarge_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enlarge_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304243) ) return false;
		if( (!(Luna< ork::vec2i >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enlarge_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151914) ) return false;
		if( (!(Luna< ork::box2i >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contains_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304243) ) return false;
		if( (!(Luna< ork::vec2i >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contains_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151914) ) return false;
		if( (!(Luna< ork::box2i >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_intersects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151914) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_nearestInnerPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304243) ) return false;
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

	inline static bool _lg_typecheck_getXmin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getXmax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getYmin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getYmax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setXmin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setXmax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setYmin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setYmax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151914) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151914) ) return false;
		return true;
	}


	// Constructor binds:
	// ork::box2i::box2i()
	static ork::box2i* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2i::box2i() function, expected prototype:\nork::box2i::box2i()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::box2i();
	}

	// ork::box2i::box2i(int xmin, int xmax, int ymin, int ymax)
	static ork::box2i* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2i::box2i(int xmin, int xmax, int ymin, int ymax) function, expected prototype:\nork::box2i::box2i(int xmin, int xmax, int ymin, int ymax)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int xmin=(int)lua_tointeger(L,1);
		int xmax=(int)lua_tointeger(L,2);
		int ymin=(int)lua_tointeger(L,3);
		int ymax=(int)lua_tointeger(L,4);

		return new ork::box2i(xmin, xmax, ymin, ymax);
	}

	// ork::box2i::box2i(const ork::vec2i & p, const ork::vec2i & q)
	static ork::box2i* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2i::box2i(const ork::vec2i & p, const ork::vec2i & q) function, expected prototype:\nork::box2i::box2i(const ork::vec2i & p, const ork::vec2i & q)\nClass arguments details:\narg 1 ID = 81304243\narg 2 ID = 81304243\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2i* p_ptr=(Luna< ork::vec2i >::check(L,1));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in ork::box2i::box2i function");
		}
		const ork::vec2i & p=*p_ptr;
		const ork::vec2i* q_ptr=(Luna< ork::vec2i >::check(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in ork::box2i::box2i function");
		}
		const ork::vec2i & q=*q_ptr;

		return new ork::box2i(p, q);
	}

	// Overload binder for ork::box2i::box2i
	static ork::box2i* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function box2i, cannot match any of the overloads for function box2i:\n  box2i()\n  box2i(int, int, int, int)\n  box2i(const ork::vec2i &, const ork::vec2i &)\n");
		return NULL;
	}


	// Function binds:
	// ork::vec2i ork::box2i::center() const
	static int _bind_center(lua_State *L) {
		if (!_lg_typecheck_center(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2i ork::box2i::center() const function, expected prototype:\nork::vec2i ork::box2i::center() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box2i* self=(Luna< ork::box2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2i ork::box2i::center() const. Got : '%s'\n%s",typeid(Luna< ork::box2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2i stack_lret = self->center();
		ork::vec2i* lret = new ork::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2i >::push(L,lret,true);

		return 1;
	}

	// int ork::box2i::width() const
	static int _bind_width(lua_State *L) {
		if (!_lg_typecheck_width(L)) {
			luaL_error(L, "luna typecheck failed in int ork::box2i::width() const function, expected prototype:\nint ork::box2i::width() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box2i* self=(Luna< ork::box2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::box2i::width() const. Got : '%s'\n%s",typeid(Luna< ork::box2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->width();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::box2i::height() const
	static int _bind_height(lua_State *L) {
		if (!_lg_typecheck_height(L)) {
			luaL_error(L, "luna typecheck failed in int ork::box2i::height() const function, expected prototype:\nint ork::box2i::height() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box2i* self=(Luna< ork::box2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::box2i::height() const. Got : '%s'\n%s",typeid(Luna< ork::box2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->height();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::box2i::area() const
	static int _bind_area(lua_State *L) {
		if (!_lg_typecheck_area(L)) {
			luaL_error(L, "luna typecheck failed in int ork::box2i::area() const function, expected prototype:\nint ork::box2i::area() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box2i* self=(Luna< ork::box2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::box2i::area() const. Got : '%s'\n%s",typeid(Luna< ork::box2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->area();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::box2i ork::box2i::enlarge(int w) const
	static int _bind_enlarge_overload_1(lua_State *L) {
		if (!_lg_typecheck_enlarge_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2i ork::box2i::enlarge(int w) const function, expected prototype:\nork::box2i ork::box2i::enlarge(int w) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int w=(int)lua_tointeger(L,2);

		ork::box2i* self=(Luna< ork::box2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box2i ork::box2i::enlarge(int) const. Got : '%s'\n%s",typeid(Luna< ork::box2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box2i stack_lret = self->enlarge(w);
		ork::box2i* lret = new ork::box2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box2i >::push(L,lret,true);

		return 1;
	}

	// ork::box2i ork::box2i::enlarge(const ork::vec2i & p) const
	static int _bind_enlarge_overload_2(lua_State *L) {
		if (!_lg_typecheck_enlarge_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2i ork::box2i::enlarge(const ork::vec2i & p) const function, expected prototype:\nork::box2i ork::box2i::enlarge(const ork::vec2i & p) const\nClass arguments details:\narg 1 ID = 81304243\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2i* p_ptr=(Luna< ork::vec2i >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in ork::box2i::enlarge function");
		}
		const ork::vec2i & p=*p_ptr;

		ork::box2i* self=(Luna< ork::box2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box2i ork::box2i::enlarge(const ork::vec2i &) const. Got : '%s'\n%s",typeid(Luna< ork::box2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box2i stack_lret = self->enlarge(p);
		ork::box2i* lret = new ork::box2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box2i >::push(L,lret,true);

		return 1;
	}

	// ork::box2i ork::box2i::enlarge(const ork::box2i & r) const
	static int _bind_enlarge_overload_3(lua_State *L) {
		if (!_lg_typecheck_enlarge_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2i ork::box2i::enlarge(const ork::box2i & r) const function, expected prototype:\nork::box2i ork::box2i::enlarge(const ork::box2i & r) const\nClass arguments details:\narg 1 ID = 63151914\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box2i* r_ptr=(Luna< ork::box2i >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in ork::box2i::enlarge function");
		}
		const ork::box2i & r=*r_ptr;

		ork::box2i* self=(Luna< ork::box2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box2i ork::box2i::enlarge(const ork::box2i &) const. Got : '%s'\n%s",typeid(Luna< ork::box2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box2i stack_lret = self->enlarge(r);
		ork::box2i* lret = new ork::box2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box2i >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::box2i::enlarge
	static int _bind_enlarge(lua_State *L) {
		if (_lg_typecheck_enlarge_overload_1(L)) return _bind_enlarge_overload_1(L);
		if (_lg_typecheck_enlarge_overload_2(L)) return _bind_enlarge_overload_2(L);
		if (_lg_typecheck_enlarge_overload_3(L)) return _bind_enlarge_overload_3(L);

		luaL_error(L, "error in function enlarge, cannot match any of the overloads for function enlarge:\n  enlarge(int)\n  enlarge(const ork::vec2i &)\n  enlarge(const ork::box2i &)\n");
		return 0;
	}

	// bool ork::box2i::contains(const ork::vec2i & p) const
	static int _bind_contains_overload_1(lua_State *L) {
		if (!_lg_typecheck_contains_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::box2i::contains(const ork::vec2i & p) const function, expected prototype:\nbool ork::box2i::contains(const ork::vec2i & p) const\nClass arguments details:\narg 1 ID = 81304243\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2i* p_ptr=(Luna< ork::vec2i >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in ork::box2i::contains function");
		}
		const ork::vec2i & p=*p_ptr;

		ork::box2i* self=(Luna< ork::box2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::box2i::contains(const ork::vec2i &) const. Got : '%s'\n%s",typeid(Luna< ork::box2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->contains(p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::box2i::contains(const ork::box2i & bb) const
	static int _bind_contains_overload_2(lua_State *L) {
		if (!_lg_typecheck_contains_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::box2i::contains(const ork::box2i & bb) const function, expected prototype:\nbool ork::box2i::contains(const ork::box2i & bb) const\nClass arguments details:\narg 1 ID = 63151914\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box2i* bb_ptr=(Luna< ork::box2i >::check(L,2));
		if( !bb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bb in ork::box2i::contains function");
		}
		const ork::box2i & bb=*bb_ptr;

		ork::box2i* self=(Luna< ork::box2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::box2i::contains(const ork::box2i &) const. Got : '%s'\n%s",typeid(Luna< ork::box2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->contains(bb);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for ork::box2i::contains
	static int _bind_contains(lua_State *L) {
		if (_lg_typecheck_contains_overload_1(L)) return _bind_contains_overload_1(L);
		if (_lg_typecheck_contains_overload_2(L)) return _bind_contains_overload_2(L);

		luaL_error(L, "error in function contains, cannot match any of the overloads for function contains:\n  contains(const ork::vec2i &)\n  contains(const ork::box2i &)\n");
		return 0;
	}

	// bool ork::box2i::intersects(const ork::box2i & a) const
	static int _bind_intersects(lua_State *L) {
		if (!_lg_typecheck_intersects(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::box2i::intersects(const ork::box2i & a) const function, expected prototype:\nbool ork::box2i::intersects(const ork::box2i & a) const\nClass arguments details:\narg 1 ID = 63151914\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box2i* a_ptr=(Luna< ork::box2i >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in ork::box2i::intersects function");
		}
		const ork::box2i & a=*a_ptr;

		ork::box2i* self=(Luna< ork::box2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::box2i::intersects(const ork::box2i &) const. Got : '%s'\n%s",typeid(Luna< ork::box2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->intersects(a);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::vec2i ork::box2i::nearestInnerPoint(ork::vec2i a) const
	static int _bind_nearestInnerPoint(lua_State *L) {
		if (!_lg_typecheck_nearestInnerPoint(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2i ork::box2i::nearestInnerPoint(ork::vec2i a) const function, expected prototype:\nork::vec2i ork::box2i::nearestInnerPoint(ork::vec2i a) const\nClass arguments details:\narg 1 ID = 81304243\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2i* a_ptr=(Luna< ork::vec2i >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in ork::box2i::nearestInnerPoint function");
		}
		ork::vec2i a=*a_ptr;

		ork::box2i* self=(Luna< ork::box2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2i ork::box2i::nearestInnerPoint(ork::vec2i) const. Got : '%s'\n%s",typeid(Luna< ork::box2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2i stack_lret = self->nearestInnerPoint(a);
		ork::vec2i* lret = new ork::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2i >::push(L,lret,true);

		return 1;
	}

	// int ork::box2i::distanceTo(ork::vec2i a) const
	static int _bind_distanceTo(lua_State *L) {
		if (!_lg_typecheck_distanceTo(L)) {
			luaL_error(L, "luna typecheck failed in int ork::box2i::distanceTo(ork::vec2i a) const function, expected prototype:\nint ork::box2i::distanceTo(ork::vec2i a) const\nClass arguments details:\narg 1 ID = 81304243\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2i* a_ptr=(Luna< ork::vec2i >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in ork::box2i::distanceTo function");
		}
		ork::vec2i a=*a_ptr;

		ork::box2i* self=(Luna< ork::box2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::box2i::distanceTo(ork::vec2i) const. Got : '%s'\n%s",typeid(Luna< ork::box2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->distanceTo(a);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::box2i::squaredDistanceTo(ork::vec2i a) const
	static int _bind_squaredDistanceTo(lua_State *L) {
		if (!_lg_typecheck_squaredDistanceTo(L)) {
			luaL_error(L, "luna typecheck failed in int ork::box2i::squaredDistanceTo(ork::vec2i a) const function, expected prototype:\nint ork::box2i::squaredDistanceTo(ork::vec2i a) const\nClass arguments details:\narg 1 ID = 81304243\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2i* a_ptr=(Luna< ork::vec2i >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in ork::box2i::squaredDistanceTo function");
		}
		ork::vec2i a=*a_ptr;

		ork::box2i* self=(Luna< ork::box2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::box2i::squaredDistanceTo(ork::vec2i) const. Got : '%s'\n%s",typeid(Luna< ork::box2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->squaredDistanceTo(a);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::box2i::xmin()
	static int _bind_getXmin(lua_State *L) {
		if (!_lg_typecheck_getXmin(L)) {
			luaL_error(L, "luna typecheck failed in int ork::box2i::xmin() function, expected prototype:\nint ork::box2i::xmin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box2i* self=(Luna< ork::box2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::box2i::xmin(). Got : '%s'\n%s",typeid(Luna< ork::box2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->xmin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::box2i::xmax()
	static int _bind_getXmax(lua_State *L) {
		if (!_lg_typecheck_getXmax(L)) {
			luaL_error(L, "luna typecheck failed in int ork::box2i::xmax() function, expected prototype:\nint ork::box2i::xmax()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box2i* self=(Luna< ork::box2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::box2i::xmax(). Got : '%s'\n%s",typeid(Luna< ork::box2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->xmax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::box2i::ymin()
	static int _bind_getYmin(lua_State *L) {
		if (!_lg_typecheck_getYmin(L)) {
			luaL_error(L, "luna typecheck failed in int ork::box2i::ymin() function, expected prototype:\nint ork::box2i::ymin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box2i* self=(Luna< ork::box2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::box2i::ymin(). Got : '%s'\n%s",typeid(Luna< ork::box2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ymin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::box2i::ymax()
	static int _bind_getYmax(lua_State *L) {
		if (!_lg_typecheck_getYmax(L)) {
			luaL_error(L, "luna typecheck failed in int ork::box2i::ymax() function, expected prototype:\nint ork::box2i::ymax()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box2i* self=(Luna< ork::box2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::box2i::ymax(). Got : '%s'\n%s",typeid(Luna< ork::box2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ymax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::box2i::xmin(int value)
	static int _bind_setXmin(lua_State *L) {
		if (!_lg_typecheck_setXmin(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box2i::xmin(int value) function, expected prototype:\nvoid ork::box2i::xmin(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		ork::box2i* self=(Luna< ork::box2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box2i::xmin(int). Got : '%s'\n%s",typeid(Luna< ork::box2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->xmin = value;

		return 0;
	}

	// void ork::box2i::xmax(int value)
	static int _bind_setXmax(lua_State *L) {
		if (!_lg_typecheck_setXmax(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box2i::xmax(int value) function, expected prototype:\nvoid ork::box2i::xmax(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		ork::box2i* self=(Luna< ork::box2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box2i::xmax(int). Got : '%s'\n%s",typeid(Luna< ork::box2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->xmax = value;

		return 0;
	}

	// void ork::box2i::ymin(int value)
	static int _bind_setYmin(lua_State *L) {
		if (!_lg_typecheck_setYmin(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box2i::ymin(int value) function, expected prototype:\nvoid ork::box2i::ymin(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		ork::box2i* self=(Luna< ork::box2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box2i::ymin(int). Got : '%s'\n%s",typeid(Luna< ork::box2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ymin = value;

		return 0;
	}

	// void ork::box2i::ymax(int value)
	static int _bind_setYmax(lua_State *L) {
		if (!_lg_typecheck_setYmax(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box2i::ymax(int value) function, expected prototype:\nvoid ork::box2i::ymax(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		ork::box2i* self=(Luna< ork::box2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box2i::ymax(int). Got : '%s'\n%s",typeid(Luna< ork::box2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ymax = value;

		return 0;
	}


	// Operator binds:
	// bool ork::box2i::operator==(const ork::box2i & b) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::box2i::operator==(const ork::box2i & b) const function, expected prototype:\nbool ork::box2i::operator==(const ork::box2i & b) const\nClass arguments details:\narg 1 ID = 63151914\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box2i* b_ptr=(Luna< ork::box2i >::check(L,2));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in ork::box2i::operator== function");
		}
		const ork::box2i & b=*b_ptr;

		ork::box2i* self=(Luna< ork::box2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::box2i::operator==(const ork::box2i &) const. Got : '%s'\n%s",typeid(Luna< ork::box2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(b);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::box2i::operator!=(const ork::box2i & b) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::box2i::operator!=(const ork::box2i & b) const function, expected prototype:\nbool ork::box2i::operator!=(const ork::box2i & b) const\nClass arguments details:\narg 1 ID = 63151914\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box2i* b_ptr=(Luna< ork::box2i >::check(L,2));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in ork::box2i::operator!= function");
		}
		const ork::box2i & b=*b_ptr;

		ork::box2i* self=(Luna< ork::box2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::box2i::operator!=(const ork::box2i &) const. Got : '%s'\n%s",typeid(Luna< ork::box2i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(b);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

ork::box2i* LunaTraits< ork::box2i >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_box2i::_bind_ctor(L);
}

void LunaTraits< ork::box2i >::_bind_dtor(ork::box2i* obj) {
	delete obj;
}

const char LunaTraits< ork::box2i >::className[] = "box2i";
const char LunaTraits< ork::box2i >::fullName[] = "ork::box2i";
const char LunaTraits< ork::box2i >::moduleName[] = "ork";
const char* LunaTraits< ork::box2i >::parents[] = {0};
const int LunaTraits< ork::box2i >::hash = 63151914;
const int LunaTraits< ork::box2i >::uniqueIDs[] = {63151914,0};

luna_RegType LunaTraits< ork::box2i >::methods[] = {
	{"center", &luna_wrapper_ork_box2i::_bind_center},
	{"width", &luna_wrapper_ork_box2i::_bind_width},
	{"height", &luna_wrapper_ork_box2i::_bind_height},
	{"area", &luna_wrapper_ork_box2i::_bind_area},
	{"enlarge", &luna_wrapper_ork_box2i::_bind_enlarge},
	{"contains", &luna_wrapper_ork_box2i::_bind_contains},
	{"intersects", &luna_wrapper_ork_box2i::_bind_intersects},
	{"nearestInnerPoint", &luna_wrapper_ork_box2i::_bind_nearestInnerPoint},
	{"distanceTo", &luna_wrapper_ork_box2i::_bind_distanceTo},
	{"squaredDistanceTo", &luna_wrapper_ork_box2i::_bind_squaredDistanceTo},
	{"getXmin", &luna_wrapper_ork_box2i::_bind_getXmin},
	{"getXmax", &luna_wrapper_ork_box2i::_bind_getXmax},
	{"getYmin", &luna_wrapper_ork_box2i::_bind_getYmin},
	{"getYmax", &luna_wrapper_ork_box2i::_bind_getYmax},
	{"setXmin", &luna_wrapper_ork_box2i::_bind_setXmin},
	{"setXmax", &luna_wrapper_ork_box2i::_bind_setXmax},
	{"setYmin", &luna_wrapper_ork_box2i::_bind_setYmin},
	{"setYmax", &luna_wrapper_ork_box2i::_bind_setYmax},
	{"__eq", &luna_wrapper_ork_box2i::_bind___eq},
	{"op_neq", &luna_wrapper_ork_box2i::_bind_op_neq},
	{"dynCast", &luna_wrapper_ork_box2i::_bind_dynCast},
	{"fromVoid", &luna_wrapper_ork_box2i::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_box2i::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::box2i >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::box2i >::enumValues[] = {
	{0,0}
};


