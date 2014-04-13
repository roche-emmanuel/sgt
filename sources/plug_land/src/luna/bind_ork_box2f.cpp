#include <plug_common.h>

class luna_wrapper_ork_box2f {
public:
	typedef Luna< ork::box2f > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::box2f* self= (ork::box2f*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::box2f >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63151911) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::box2f >::check(L,1));
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

		ork::box2f* self=(Luna< ork::box2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::box2f");
		
		return luna_dynamicCast(L,converters,"ork::box2f",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304240) ) return false;
		if( (!(Luna< ork::vec2f >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,81304240) ) return false;
		if( (!(Luna< ork::vec2f >::check(L,2))) ) return false;
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

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enlarge_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304240) ) return false;
		if( (!(Luna< ork::vec2f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enlarge_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151911) ) return false;
		if( (!(Luna< ork::box2f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contains_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304240) ) return false;
		if( (!(Luna< ork::vec2f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contains_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151911) ) return false;
		if( (!(Luna< ork::box2f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_intersects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151911) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_nearestInnerPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304240) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_distanceTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304240) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_squaredDistanceTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304240) ) return false;
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

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setXmax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setYmin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setYmax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151911) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151911) ) return false;
		return true;
	}


	// Constructor binds:
	// ork::box2f::box2f()
	static ork::box2f* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2f::box2f() function, expected prototype:\nork::box2f::box2f()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::box2f();
	}

	// ork::box2f::box2f(float xmin, float xmax, float ymin, float ymax)
	static ork::box2f* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2f::box2f(float xmin, float xmax, float ymin, float ymax) function, expected prototype:\nork::box2f::box2f(float xmin, float xmax, float ymin, float ymax)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float xmin=(float)lua_tonumber(L,1);
		float xmax=(float)lua_tonumber(L,2);
		float ymin=(float)lua_tonumber(L,3);
		float ymax=(float)lua_tonumber(L,4);

		return new ork::box2f(xmin, xmax, ymin, ymax);
	}

	// ork::box2f::box2f(const ork::vec2f & p, const ork::vec2f & q)
	static ork::box2f* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2f::box2f(const ork::vec2f & p, const ork::vec2f & q) function, expected prototype:\nork::box2f::box2f(const ork::vec2f & p, const ork::vec2f & q)\nClass arguments details:\narg 1 ID = 81304240\narg 2 ID = 81304240\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2f* p_ptr=(Luna< ork::vec2f >::check(L,1));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in ork::box2f::box2f function");
		}
		const ork::vec2f & p=*p_ptr;
		const ork::vec2f* q_ptr=(Luna< ork::vec2f >::check(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in ork::box2f::box2f function");
		}
		const ork::vec2f & q=*q_ptr;

		return new ork::box2f(p, q);
	}

	// Overload binder for ork::box2f::box2f
	static ork::box2f* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function box2f, cannot match any of the overloads for function box2f:\n  box2f()\n  box2f(float, float, float, float)\n  box2f(const ork::vec2f &, const ork::vec2f &)\n");
		return NULL;
	}


	// Function binds:
	// ork::vec2f ork::box2f::center() const
	static int _bind_center(lua_State *L) {
		if (!_lg_typecheck_center(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2f ork::box2f::center() const function, expected prototype:\nork::vec2f ork::box2f::center() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box2f* self=(Luna< ork::box2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2f ork::box2f::center() const. Got : '%s'\n%s",typeid(Luna< ork::box2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2f stack_lret = self->center();
		ork::vec2f* lret = new ork::vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2f >::push(L,lret,true);

		return 1;
	}

	// float ork::box2f::width() const
	static int _bind_width(lua_State *L) {
		if (!_lg_typecheck_width(L)) {
			luaL_error(L, "luna typecheck failed in float ork::box2f::width() const function, expected prototype:\nfloat ork::box2f::width() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box2f* self=(Luna< ork::box2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::box2f::width() const. Got : '%s'\n%s",typeid(Luna< ork::box2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->width();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::box2f::height() const
	static int _bind_height(lua_State *L) {
		if (!_lg_typecheck_height(L)) {
			luaL_error(L, "luna typecheck failed in float ork::box2f::height() const function, expected prototype:\nfloat ork::box2f::height() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box2f* self=(Luna< ork::box2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::box2f::height() const. Got : '%s'\n%s",typeid(Luna< ork::box2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->height();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::box2f::area() const
	static int _bind_area(lua_State *L) {
		if (!_lg_typecheck_area(L)) {
			luaL_error(L, "luna typecheck failed in float ork::box2f::area() const function, expected prototype:\nfloat ork::box2f::area() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box2f* self=(Luna< ork::box2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::box2f::area() const. Got : '%s'\n%s",typeid(Luna< ork::box2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->area();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::box2f ork::box2f::enlarge(float w) const
	static int _bind_enlarge_overload_1(lua_State *L) {
		if (!_lg_typecheck_enlarge_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2f ork::box2f::enlarge(float w) const function, expected prototype:\nork::box2f ork::box2f::enlarge(float w) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float w=(float)lua_tonumber(L,2);

		ork::box2f* self=(Luna< ork::box2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box2f ork::box2f::enlarge(float) const. Got : '%s'\n%s",typeid(Luna< ork::box2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box2f stack_lret = self->enlarge(w);
		ork::box2f* lret = new ork::box2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box2f >::push(L,lret,true);

		return 1;
	}

	// ork::box2f ork::box2f::enlarge(const ork::vec2f & p) const
	static int _bind_enlarge_overload_2(lua_State *L) {
		if (!_lg_typecheck_enlarge_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2f ork::box2f::enlarge(const ork::vec2f & p) const function, expected prototype:\nork::box2f ork::box2f::enlarge(const ork::vec2f & p) const\nClass arguments details:\narg 1 ID = 81304240\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2f* p_ptr=(Luna< ork::vec2f >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in ork::box2f::enlarge function");
		}
		const ork::vec2f & p=*p_ptr;

		ork::box2f* self=(Luna< ork::box2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box2f ork::box2f::enlarge(const ork::vec2f &) const. Got : '%s'\n%s",typeid(Luna< ork::box2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box2f stack_lret = self->enlarge(p);
		ork::box2f* lret = new ork::box2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box2f >::push(L,lret,true);

		return 1;
	}

	// ork::box2f ork::box2f::enlarge(const ork::box2f & r) const
	static int _bind_enlarge_overload_3(lua_State *L) {
		if (!_lg_typecheck_enlarge_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2f ork::box2f::enlarge(const ork::box2f & r) const function, expected prototype:\nork::box2f ork::box2f::enlarge(const ork::box2f & r) const\nClass arguments details:\narg 1 ID = 63151911\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box2f* r_ptr=(Luna< ork::box2f >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in ork::box2f::enlarge function");
		}
		const ork::box2f & r=*r_ptr;

		ork::box2f* self=(Luna< ork::box2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box2f ork::box2f::enlarge(const ork::box2f &) const. Got : '%s'\n%s",typeid(Luna< ork::box2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box2f stack_lret = self->enlarge(r);
		ork::box2f* lret = new ork::box2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box2f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::box2f::enlarge
	static int _bind_enlarge(lua_State *L) {
		if (_lg_typecheck_enlarge_overload_1(L)) return _bind_enlarge_overload_1(L);
		if (_lg_typecheck_enlarge_overload_2(L)) return _bind_enlarge_overload_2(L);
		if (_lg_typecheck_enlarge_overload_3(L)) return _bind_enlarge_overload_3(L);

		luaL_error(L, "error in function enlarge, cannot match any of the overloads for function enlarge:\n  enlarge(float)\n  enlarge(const ork::vec2f &)\n  enlarge(const ork::box2f &)\n");
		return 0;
	}

	// bool ork::box2f::contains(const ork::vec2f & p) const
	static int _bind_contains_overload_1(lua_State *L) {
		if (!_lg_typecheck_contains_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::box2f::contains(const ork::vec2f & p) const function, expected prototype:\nbool ork::box2f::contains(const ork::vec2f & p) const\nClass arguments details:\narg 1 ID = 81304240\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2f* p_ptr=(Luna< ork::vec2f >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in ork::box2f::contains function");
		}
		const ork::vec2f & p=*p_ptr;

		ork::box2f* self=(Luna< ork::box2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::box2f::contains(const ork::vec2f &) const. Got : '%s'\n%s",typeid(Luna< ork::box2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->contains(p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::box2f::contains(const ork::box2f & bb) const
	static int _bind_contains_overload_2(lua_State *L) {
		if (!_lg_typecheck_contains_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::box2f::contains(const ork::box2f & bb) const function, expected prototype:\nbool ork::box2f::contains(const ork::box2f & bb) const\nClass arguments details:\narg 1 ID = 63151911\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box2f* bb_ptr=(Luna< ork::box2f >::check(L,2));
		if( !bb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bb in ork::box2f::contains function");
		}
		const ork::box2f & bb=*bb_ptr;

		ork::box2f* self=(Luna< ork::box2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::box2f::contains(const ork::box2f &) const. Got : '%s'\n%s",typeid(Luna< ork::box2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->contains(bb);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for ork::box2f::contains
	static int _bind_contains(lua_State *L) {
		if (_lg_typecheck_contains_overload_1(L)) return _bind_contains_overload_1(L);
		if (_lg_typecheck_contains_overload_2(L)) return _bind_contains_overload_2(L);

		luaL_error(L, "error in function contains, cannot match any of the overloads for function contains:\n  contains(const ork::vec2f &)\n  contains(const ork::box2f &)\n");
		return 0;
	}

	// bool ork::box2f::intersects(const ork::box2f & a) const
	static int _bind_intersects(lua_State *L) {
		if (!_lg_typecheck_intersects(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::box2f::intersects(const ork::box2f & a) const function, expected prototype:\nbool ork::box2f::intersects(const ork::box2f & a) const\nClass arguments details:\narg 1 ID = 63151911\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box2f* a_ptr=(Luna< ork::box2f >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in ork::box2f::intersects function");
		}
		const ork::box2f & a=*a_ptr;

		ork::box2f* self=(Luna< ork::box2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::box2f::intersects(const ork::box2f &) const. Got : '%s'\n%s",typeid(Luna< ork::box2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->intersects(a);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::vec2f ork::box2f::nearestInnerPoint(ork::vec2f a) const
	static int _bind_nearestInnerPoint(lua_State *L) {
		if (!_lg_typecheck_nearestInnerPoint(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2f ork::box2f::nearestInnerPoint(ork::vec2f a) const function, expected prototype:\nork::vec2f ork::box2f::nearestInnerPoint(ork::vec2f a) const\nClass arguments details:\narg 1 ID = 81304240\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2f* a_ptr=(Luna< ork::vec2f >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in ork::box2f::nearestInnerPoint function");
		}
		ork::vec2f a=*a_ptr;

		ork::box2f* self=(Luna< ork::box2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2f ork::box2f::nearestInnerPoint(ork::vec2f) const. Got : '%s'\n%s",typeid(Luna< ork::box2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2f stack_lret = self->nearestInnerPoint(a);
		ork::vec2f* lret = new ork::vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2f >::push(L,lret,true);

		return 1;
	}

	// float ork::box2f::distanceTo(ork::vec2f a) const
	static int _bind_distanceTo(lua_State *L) {
		if (!_lg_typecheck_distanceTo(L)) {
			luaL_error(L, "luna typecheck failed in float ork::box2f::distanceTo(ork::vec2f a) const function, expected prototype:\nfloat ork::box2f::distanceTo(ork::vec2f a) const\nClass arguments details:\narg 1 ID = 81304240\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2f* a_ptr=(Luna< ork::vec2f >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in ork::box2f::distanceTo function");
		}
		ork::vec2f a=*a_ptr;

		ork::box2f* self=(Luna< ork::box2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::box2f::distanceTo(ork::vec2f) const. Got : '%s'\n%s",typeid(Luna< ork::box2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->distanceTo(a);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::box2f::squaredDistanceTo(ork::vec2f a) const
	static int _bind_squaredDistanceTo(lua_State *L) {
		if (!_lg_typecheck_squaredDistanceTo(L)) {
			luaL_error(L, "luna typecheck failed in float ork::box2f::squaredDistanceTo(ork::vec2f a) const function, expected prototype:\nfloat ork::box2f::squaredDistanceTo(ork::vec2f a) const\nClass arguments details:\narg 1 ID = 81304240\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2f* a_ptr=(Luna< ork::vec2f >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in ork::box2f::squaredDistanceTo function");
		}
		ork::vec2f a=*a_ptr;

		ork::box2f* self=(Luna< ork::box2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::box2f::squaredDistanceTo(ork::vec2f) const. Got : '%s'\n%s",typeid(Luna< ork::box2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->squaredDistanceTo(a);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::box2f::xmin()
	static int _bind_getXmin(lua_State *L) {
		if (!_lg_typecheck_getXmin(L)) {
			luaL_error(L, "luna typecheck failed in float ork::box2f::xmin() function, expected prototype:\nfloat ork::box2f::xmin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box2f* self=(Luna< ork::box2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::box2f::xmin(). Got : '%s'\n%s",typeid(Luna< ork::box2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->xmin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::box2f::xmax()
	static int _bind_getXmax(lua_State *L) {
		if (!_lg_typecheck_getXmax(L)) {
			luaL_error(L, "luna typecheck failed in float ork::box2f::xmax() function, expected prototype:\nfloat ork::box2f::xmax()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box2f* self=(Luna< ork::box2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::box2f::xmax(). Got : '%s'\n%s",typeid(Luna< ork::box2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->xmax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::box2f::ymin()
	static int _bind_getYmin(lua_State *L) {
		if (!_lg_typecheck_getYmin(L)) {
			luaL_error(L, "luna typecheck failed in float ork::box2f::ymin() function, expected prototype:\nfloat ork::box2f::ymin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box2f* self=(Luna< ork::box2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::box2f::ymin(). Got : '%s'\n%s",typeid(Luna< ork::box2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->ymin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::box2f::ymax()
	static int _bind_getYmax(lua_State *L) {
		if (!_lg_typecheck_getYmax(L)) {
			luaL_error(L, "luna typecheck failed in float ork::box2f::ymax() function, expected prototype:\nfloat ork::box2f::ymax()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box2f* self=(Luna< ork::box2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::box2f::ymax(). Got : '%s'\n%s",typeid(Luna< ork::box2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->ymax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::box2f::xmin(float value)
	static int _bind_setXmin(lua_State *L) {
		if (!_lg_typecheck_setXmin(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box2f::xmin(float value) function, expected prototype:\nvoid ork::box2f::xmin(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		ork::box2f* self=(Luna< ork::box2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box2f::xmin(float). Got : '%s'\n%s",typeid(Luna< ork::box2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->xmin = value;

		return 0;
	}

	// void ork::box2f::xmax(float value)
	static int _bind_setXmax(lua_State *L) {
		if (!_lg_typecheck_setXmax(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box2f::xmax(float value) function, expected prototype:\nvoid ork::box2f::xmax(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		ork::box2f* self=(Luna< ork::box2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box2f::xmax(float). Got : '%s'\n%s",typeid(Luna< ork::box2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->xmax = value;

		return 0;
	}

	// void ork::box2f::ymin(float value)
	static int _bind_setYmin(lua_State *L) {
		if (!_lg_typecheck_setYmin(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box2f::ymin(float value) function, expected prototype:\nvoid ork::box2f::ymin(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		ork::box2f* self=(Luna< ork::box2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box2f::ymin(float). Got : '%s'\n%s",typeid(Luna< ork::box2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ymin = value;

		return 0;
	}

	// void ork::box2f::ymax(float value)
	static int _bind_setYmax(lua_State *L) {
		if (!_lg_typecheck_setYmax(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box2f::ymax(float value) function, expected prototype:\nvoid ork::box2f::ymax(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		ork::box2f* self=(Luna< ork::box2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box2f::ymax(float). Got : '%s'\n%s",typeid(Luna< ork::box2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ymax = value;

		return 0;
	}


	// Operator binds:
	// bool ork::box2f::operator==(const ork::box2f & b) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::box2f::operator==(const ork::box2f & b) const function, expected prototype:\nbool ork::box2f::operator==(const ork::box2f & b) const\nClass arguments details:\narg 1 ID = 63151911\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box2f* b_ptr=(Luna< ork::box2f >::check(L,2));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in ork::box2f::operator== function");
		}
		const ork::box2f & b=*b_ptr;

		ork::box2f* self=(Luna< ork::box2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::box2f::operator==(const ork::box2f &) const. Got : '%s'\n%s",typeid(Luna< ork::box2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(b);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::box2f::operator!=(const ork::box2f & b) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::box2f::operator!=(const ork::box2f & b) const function, expected prototype:\nbool ork::box2f::operator!=(const ork::box2f & b) const\nClass arguments details:\narg 1 ID = 63151911\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box2f* b_ptr=(Luna< ork::box2f >::check(L,2));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in ork::box2f::operator!= function");
		}
		const ork::box2f & b=*b_ptr;

		ork::box2f* self=(Luna< ork::box2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::box2f::operator!=(const ork::box2f &) const. Got : '%s'\n%s",typeid(Luna< ork::box2f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(b);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

ork::box2f* LunaTraits< ork::box2f >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_box2f::_bind_ctor(L);
}

void LunaTraits< ork::box2f >::_bind_dtor(ork::box2f* obj) {
	delete obj;
}

const char LunaTraits< ork::box2f >::className[] = "box2f";
const char LunaTraits< ork::box2f >::fullName[] = "ork::box2f";
const char LunaTraits< ork::box2f >::moduleName[] = "ork";
const char* LunaTraits< ork::box2f >::parents[] = {0};
const int LunaTraits< ork::box2f >::hash = 63151911;
const int LunaTraits< ork::box2f >::uniqueIDs[] = {63151911,0};

luna_RegType LunaTraits< ork::box2f >::methods[] = {
	{"center", &luna_wrapper_ork_box2f::_bind_center},
	{"width", &luna_wrapper_ork_box2f::_bind_width},
	{"height", &luna_wrapper_ork_box2f::_bind_height},
	{"area", &luna_wrapper_ork_box2f::_bind_area},
	{"enlarge", &luna_wrapper_ork_box2f::_bind_enlarge},
	{"contains", &luna_wrapper_ork_box2f::_bind_contains},
	{"intersects", &luna_wrapper_ork_box2f::_bind_intersects},
	{"nearestInnerPoint", &luna_wrapper_ork_box2f::_bind_nearestInnerPoint},
	{"distanceTo", &luna_wrapper_ork_box2f::_bind_distanceTo},
	{"squaredDistanceTo", &luna_wrapper_ork_box2f::_bind_squaredDistanceTo},
	{"getXmin", &luna_wrapper_ork_box2f::_bind_getXmin},
	{"getXmax", &luna_wrapper_ork_box2f::_bind_getXmax},
	{"getYmin", &luna_wrapper_ork_box2f::_bind_getYmin},
	{"getYmax", &luna_wrapper_ork_box2f::_bind_getYmax},
	{"setXmin", &luna_wrapper_ork_box2f::_bind_setXmin},
	{"setXmax", &luna_wrapper_ork_box2f::_bind_setXmax},
	{"setYmin", &luna_wrapper_ork_box2f::_bind_setYmin},
	{"setYmax", &luna_wrapper_ork_box2f::_bind_setYmax},
	{"__eq", &luna_wrapper_ork_box2f::_bind___eq},
	{"op_neq", &luna_wrapper_ork_box2f::_bind_op_neq},
	{"dynCast", &luna_wrapper_ork_box2f::_bind_dynCast},
	{"fromVoid", &luna_wrapper_ork_box2f::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_box2f::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::box2f >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::box2f >::enumValues[] = {
	{0,0}
};


