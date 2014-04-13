#include <plug_common.h>

class luna_wrapper_ork_box2d {
public:
	typedef Luna< ork::box2d > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::box2d* self= (ork::box2d*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::box2d >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63151909) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::box2d >::check(L,1));
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

		ork::box2d* self=(Luna< ork::box2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::box2d");
		
		return luna_dynamicCast(L,converters,"ork::box2d",name);
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

		if( !Luna<void>::has_uniqueid(L,1,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,2))) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enlarge_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151909) ) return false;
		if( (!(Luna< ork::box2d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contains_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contains_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151909) ) return false;
		if( (!(Luna< ork::box2d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_intersects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151909) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_nearestInnerPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_distanceTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_squaredDistanceTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,63151909) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151909) ) return false;
		return true;
	}


	// Constructor binds:
	// ork::box2d::box2d()
	static ork::box2d* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2d::box2d() function, expected prototype:\nork::box2d::box2d()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::box2d();
	}

	// ork::box2d::box2d(double xmin, double xmax, double ymin, double ymax)
	static ork::box2d* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2d::box2d(double xmin, double xmax, double ymin, double ymax) function, expected prototype:\nork::box2d::box2d(double xmin, double xmax, double ymin, double ymax)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double xmin=(double)lua_tonumber(L,1);
		double xmax=(double)lua_tonumber(L,2);
		double ymin=(double)lua_tonumber(L,3);
		double ymax=(double)lua_tonumber(L,4);

		return new ork::box2d(xmin, xmax, ymin, ymax);
	}

	// ork::box2d::box2d(const ork::vec2d & p, const ork::vec2d & q)
	static ork::box2d* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2d::box2d(const ork::vec2d & p, const ork::vec2d & q) function, expected prototype:\nork::box2d::box2d(const ork::vec2d & p, const ork::vec2d & q)\nClass arguments details:\narg 1 ID = 81304238\narg 2 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,1));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in ork::box2d::box2d function");
		}
		const ork::vec2d & p=*p_ptr;
		const ork::vec2d* q_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in ork::box2d::box2d function");
		}
		const ork::vec2d & q=*q_ptr;

		return new ork::box2d(p, q);
	}

	// Overload binder for ork::box2d::box2d
	static ork::box2d* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function box2d, cannot match any of the overloads for function box2d:\n  box2d()\n  box2d(double, double, double, double)\n  box2d(const ork::vec2d &, const ork::vec2d &)\n");
		return NULL;
	}


	// Function binds:
	// ork::vec2d ork::box2d::center() const
	static int _bind_center(lua_State *L) {
		if (!_lg_typecheck_center(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2d ork::box2d::center() const function, expected prototype:\nork::vec2d ork::box2d::center() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box2d* self=(Luna< ork::box2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2d ork::box2d::center() const. Got : '%s'\n%s",typeid(Luna< ork::box2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2d stack_lret = self->center();
		ork::vec2d* lret = new ork::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2d >::push(L,lret,true);

		return 1;
	}

	// double ork::box2d::width() const
	static int _bind_width(lua_State *L) {
		if (!_lg_typecheck_width(L)) {
			luaL_error(L, "luna typecheck failed in double ork::box2d::width() const function, expected prototype:\ndouble ork::box2d::width() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box2d* self=(Luna< ork::box2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::box2d::width() const. Got : '%s'\n%s",typeid(Luna< ork::box2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->width();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::box2d::height() const
	static int _bind_height(lua_State *L) {
		if (!_lg_typecheck_height(L)) {
			luaL_error(L, "luna typecheck failed in double ork::box2d::height() const function, expected prototype:\ndouble ork::box2d::height() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box2d* self=(Luna< ork::box2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::box2d::height() const. Got : '%s'\n%s",typeid(Luna< ork::box2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->height();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::box2d::area() const
	static int _bind_area(lua_State *L) {
		if (!_lg_typecheck_area(L)) {
			luaL_error(L, "luna typecheck failed in double ork::box2d::area() const function, expected prototype:\ndouble ork::box2d::area() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box2d* self=(Luna< ork::box2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::box2d::area() const. Got : '%s'\n%s",typeid(Luna< ork::box2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->area();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::box2d ork::box2d::enlarge(double w) const
	static int _bind_enlarge_overload_1(lua_State *L) {
		if (!_lg_typecheck_enlarge_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2d ork::box2d::enlarge(double w) const function, expected prototype:\nork::box2d ork::box2d::enlarge(double w) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double w=(double)lua_tonumber(L,2);

		ork::box2d* self=(Luna< ork::box2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box2d ork::box2d::enlarge(double) const. Got : '%s'\n%s",typeid(Luna< ork::box2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box2d stack_lret = self->enlarge(w);
		ork::box2d* lret = new ork::box2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box2d >::push(L,lret,true);

		return 1;
	}

	// ork::box2d ork::box2d::enlarge(const ork::vec2d & p) const
	static int _bind_enlarge_overload_2(lua_State *L) {
		if (!_lg_typecheck_enlarge_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2d ork::box2d::enlarge(const ork::vec2d & p) const function, expected prototype:\nork::box2d ork::box2d::enlarge(const ork::vec2d & p) const\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in ork::box2d::enlarge function");
		}
		const ork::vec2d & p=*p_ptr;

		ork::box2d* self=(Luna< ork::box2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box2d ork::box2d::enlarge(const ork::vec2d &) const. Got : '%s'\n%s",typeid(Luna< ork::box2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box2d stack_lret = self->enlarge(p);
		ork::box2d* lret = new ork::box2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box2d >::push(L,lret,true);

		return 1;
	}

	// ork::box2d ork::box2d::enlarge(const ork::box2d & r) const
	static int _bind_enlarge_overload_3(lua_State *L) {
		if (!_lg_typecheck_enlarge_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2d ork::box2d::enlarge(const ork::box2d & r) const function, expected prototype:\nork::box2d ork::box2d::enlarge(const ork::box2d & r) const\nClass arguments details:\narg 1 ID = 63151909\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box2d* r_ptr=(Luna< ork::box2d >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in ork::box2d::enlarge function");
		}
		const ork::box2d & r=*r_ptr;

		ork::box2d* self=(Luna< ork::box2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box2d ork::box2d::enlarge(const ork::box2d &) const. Got : '%s'\n%s",typeid(Luna< ork::box2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box2d stack_lret = self->enlarge(r);
		ork::box2d* lret = new ork::box2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box2d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::box2d::enlarge
	static int _bind_enlarge(lua_State *L) {
		if (_lg_typecheck_enlarge_overload_1(L)) return _bind_enlarge_overload_1(L);
		if (_lg_typecheck_enlarge_overload_2(L)) return _bind_enlarge_overload_2(L);
		if (_lg_typecheck_enlarge_overload_3(L)) return _bind_enlarge_overload_3(L);

		luaL_error(L, "error in function enlarge, cannot match any of the overloads for function enlarge:\n  enlarge(double)\n  enlarge(const ork::vec2d &)\n  enlarge(const ork::box2d &)\n");
		return 0;
	}

	// bool ork::box2d::contains(const ork::vec2d & p) const
	static int _bind_contains_overload_1(lua_State *L) {
		if (!_lg_typecheck_contains_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::box2d::contains(const ork::vec2d & p) const function, expected prototype:\nbool ork::box2d::contains(const ork::vec2d & p) const\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in ork::box2d::contains function");
		}
		const ork::vec2d & p=*p_ptr;

		ork::box2d* self=(Luna< ork::box2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::box2d::contains(const ork::vec2d &) const. Got : '%s'\n%s",typeid(Luna< ork::box2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->contains(p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::box2d::contains(const ork::box2d & bb) const
	static int _bind_contains_overload_2(lua_State *L) {
		if (!_lg_typecheck_contains_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::box2d::contains(const ork::box2d & bb) const function, expected prototype:\nbool ork::box2d::contains(const ork::box2d & bb) const\nClass arguments details:\narg 1 ID = 63151909\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box2d* bb_ptr=(Luna< ork::box2d >::check(L,2));
		if( !bb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bb in ork::box2d::contains function");
		}
		const ork::box2d & bb=*bb_ptr;

		ork::box2d* self=(Luna< ork::box2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::box2d::contains(const ork::box2d &) const. Got : '%s'\n%s",typeid(Luna< ork::box2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->contains(bb);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for ork::box2d::contains
	static int _bind_contains(lua_State *L) {
		if (_lg_typecheck_contains_overload_1(L)) return _bind_contains_overload_1(L);
		if (_lg_typecheck_contains_overload_2(L)) return _bind_contains_overload_2(L);

		luaL_error(L, "error in function contains, cannot match any of the overloads for function contains:\n  contains(const ork::vec2d &)\n  contains(const ork::box2d &)\n");
		return 0;
	}

	// bool ork::box2d::intersects(const ork::box2d & a) const
	static int _bind_intersects(lua_State *L) {
		if (!_lg_typecheck_intersects(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::box2d::intersects(const ork::box2d & a) const function, expected prototype:\nbool ork::box2d::intersects(const ork::box2d & a) const\nClass arguments details:\narg 1 ID = 63151909\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box2d* a_ptr=(Luna< ork::box2d >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in ork::box2d::intersects function");
		}
		const ork::box2d & a=*a_ptr;

		ork::box2d* self=(Luna< ork::box2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::box2d::intersects(const ork::box2d &) const. Got : '%s'\n%s",typeid(Luna< ork::box2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->intersects(a);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::vec2d ork::box2d::nearestInnerPoint(ork::vec2d a) const
	static int _bind_nearestInnerPoint(lua_State *L) {
		if (!_lg_typecheck_nearestInnerPoint(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2d ork::box2d::nearestInnerPoint(ork::vec2d a) const function, expected prototype:\nork::vec2d ork::box2d::nearestInnerPoint(ork::vec2d a) const\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* a_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in ork::box2d::nearestInnerPoint function");
		}
		ork::vec2d a=*a_ptr;

		ork::box2d* self=(Luna< ork::box2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2d ork::box2d::nearestInnerPoint(ork::vec2d) const. Got : '%s'\n%s",typeid(Luna< ork::box2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2d stack_lret = self->nearestInnerPoint(a);
		ork::vec2d* lret = new ork::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2d >::push(L,lret,true);

		return 1;
	}

	// double ork::box2d::distanceTo(ork::vec2d a) const
	static int _bind_distanceTo(lua_State *L) {
		if (!_lg_typecheck_distanceTo(L)) {
			luaL_error(L, "luna typecheck failed in double ork::box2d::distanceTo(ork::vec2d a) const function, expected prototype:\ndouble ork::box2d::distanceTo(ork::vec2d a) const\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* a_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in ork::box2d::distanceTo function");
		}
		ork::vec2d a=*a_ptr;

		ork::box2d* self=(Luna< ork::box2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::box2d::distanceTo(ork::vec2d) const. Got : '%s'\n%s",typeid(Luna< ork::box2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->distanceTo(a);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::box2d::squaredDistanceTo(ork::vec2d a) const
	static int _bind_squaredDistanceTo(lua_State *L) {
		if (!_lg_typecheck_squaredDistanceTo(L)) {
			luaL_error(L, "luna typecheck failed in double ork::box2d::squaredDistanceTo(ork::vec2d a) const function, expected prototype:\ndouble ork::box2d::squaredDistanceTo(ork::vec2d a) const\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* a_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in ork::box2d::squaredDistanceTo function");
		}
		ork::vec2d a=*a_ptr;

		ork::box2d* self=(Luna< ork::box2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::box2d::squaredDistanceTo(ork::vec2d) const. Got : '%s'\n%s",typeid(Luna< ork::box2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->squaredDistanceTo(a);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::box2d::xmin()
	static int _bind_getXmin(lua_State *L) {
		if (!_lg_typecheck_getXmin(L)) {
			luaL_error(L, "luna typecheck failed in double ork::box2d::xmin() function, expected prototype:\ndouble ork::box2d::xmin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box2d* self=(Luna< ork::box2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::box2d::xmin(). Got : '%s'\n%s",typeid(Luna< ork::box2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->xmin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::box2d::xmax()
	static int _bind_getXmax(lua_State *L) {
		if (!_lg_typecheck_getXmax(L)) {
			luaL_error(L, "luna typecheck failed in double ork::box2d::xmax() function, expected prototype:\ndouble ork::box2d::xmax()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box2d* self=(Luna< ork::box2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::box2d::xmax(). Got : '%s'\n%s",typeid(Luna< ork::box2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->xmax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::box2d::ymin()
	static int _bind_getYmin(lua_State *L) {
		if (!_lg_typecheck_getYmin(L)) {
			luaL_error(L, "luna typecheck failed in double ork::box2d::ymin() function, expected prototype:\ndouble ork::box2d::ymin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box2d* self=(Luna< ork::box2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::box2d::ymin(). Got : '%s'\n%s",typeid(Luna< ork::box2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->ymin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::box2d::ymax()
	static int _bind_getYmax(lua_State *L) {
		if (!_lg_typecheck_getYmax(L)) {
			luaL_error(L, "luna typecheck failed in double ork::box2d::ymax() function, expected prototype:\ndouble ork::box2d::ymax()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box2d* self=(Luna< ork::box2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::box2d::ymax(). Got : '%s'\n%s",typeid(Luna< ork::box2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->ymax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::box2d::xmin(double value)
	static int _bind_setXmin(lua_State *L) {
		if (!_lg_typecheck_setXmin(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box2d::xmin(double value) function, expected prototype:\nvoid ork::box2d::xmin(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		ork::box2d* self=(Luna< ork::box2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box2d::xmin(double). Got : '%s'\n%s",typeid(Luna< ork::box2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->xmin = value;

		return 0;
	}

	// void ork::box2d::xmax(double value)
	static int _bind_setXmax(lua_State *L) {
		if (!_lg_typecheck_setXmax(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box2d::xmax(double value) function, expected prototype:\nvoid ork::box2d::xmax(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		ork::box2d* self=(Luna< ork::box2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box2d::xmax(double). Got : '%s'\n%s",typeid(Luna< ork::box2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->xmax = value;

		return 0;
	}

	// void ork::box2d::ymin(double value)
	static int _bind_setYmin(lua_State *L) {
		if (!_lg_typecheck_setYmin(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box2d::ymin(double value) function, expected prototype:\nvoid ork::box2d::ymin(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		ork::box2d* self=(Luna< ork::box2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box2d::ymin(double). Got : '%s'\n%s",typeid(Luna< ork::box2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ymin = value;

		return 0;
	}

	// void ork::box2d::ymax(double value)
	static int _bind_setYmax(lua_State *L) {
		if (!_lg_typecheck_setYmax(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box2d::ymax(double value) function, expected prototype:\nvoid ork::box2d::ymax(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		ork::box2d* self=(Luna< ork::box2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box2d::ymax(double). Got : '%s'\n%s",typeid(Luna< ork::box2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ymax = value;

		return 0;
	}


	// Operator binds:
	// bool ork::box2d::operator==(const ork::box2d & b) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::box2d::operator==(const ork::box2d & b) const function, expected prototype:\nbool ork::box2d::operator==(const ork::box2d & b) const\nClass arguments details:\narg 1 ID = 63151909\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box2d* b_ptr=(Luna< ork::box2d >::check(L,2));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in ork::box2d::operator== function");
		}
		const ork::box2d & b=*b_ptr;

		ork::box2d* self=(Luna< ork::box2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::box2d::operator==(const ork::box2d &) const. Got : '%s'\n%s",typeid(Luna< ork::box2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(b);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::box2d::operator!=(const ork::box2d & b) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::box2d::operator!=(const ork::box2d & b) const function, expected prototype:\nbool ork::box2d::operator!=(const ork::box2d & b) const\nClass arguments details:\narg 1 ID = 63151909\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box2d* b_ptr=(Luna< ork::box2d >::check(L,2));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in ork::box2d::operator!= function");
		}
		const ork::box2d & b=*b_ptr;

		ork::box2d* self=(Luna< ork::box2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::box2d::operator!=(const ork::box2d &) const. Got : '%s'\n%s",typeid(Luna< ork::box2d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(b);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

ork::box2d* LunaTraits< ork::box2d >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_box2d::_bind_ctor(L);
}

void LunaTraits< ork::box2d >::_bind_dtor(ork::box2d* obj) {
	delete obj;
}

const char LunaTraits< ork::box2d >::className[] = "box2d";
const char LunaTraits< ork::box2d >::fullName[] = "ork::box2d";
const char LunaTraits< ork::box2d >::moduleName[] = "ork";
const char* LunaTraits< ork::box2d >::parents[] = {0};
const int LunaTraits< ork::box2d >::hash = 63151909;
const int LunaTraits< ork::box2d >::uniqueIDs[] = {63151909,0};

luna_RegType LunaTraits< ork::box2d >::methods[] = {
	{"center", &luna_wrapper_ork_box2d::_bind_center},
	{"width", &luna_wrapper_ork_box2d::_bind_width},
	{"height", &luna_wrapper_ork_box2d::_bind_height},
	{"area", &luna_wrapper_ork_box2d::_bind_area},
	{"enlarge", &luna_wrapper_ork_box2d::_bind_enlarge},
	{"contains", &luna_wrapper_ork_box2d::_bind_contains},
	{"intersects", &luna_wrapper_ork_box2d::_bind_intersects},
	{"nearestInnerPoint", &luna_wrapper_ork_box2d::_bind_nearestInnerPoint},
	{"distanceTo", &luna_wrapper_ork_box2d::_bind_distanceTo},
	{"squaredDistanceTo", &luna_wrapper_ork_box2d::_bind_squaredDistanceTo},
	{"getXmin", &luna_wrapper_ork_box2d::_bind_getXmin},
	{"getXmax", &luna_wrapper_ork_box2d::_bind_getXmax},
	{"getYmin", &luna_wrapper_ork_box2d::_bind_getYmin},
	{"getYmax", &luna_wrapper_ork_box2d::_bind_getYmax},
	{"setXmin", &luna_wrapper_ork_box2d::_bind_setXmin},
	{"setXmax", &luna_wrapper_ork_box2d::_bind_setXmax},
	{"setYmin", &luna_wrapper_ork_box2d::_bind_setYmin},
	{"setYmax", &luna_wrapper_ork_box2d::_bind_setYmax},
	{"__eq", &luna_wrapper_ork_box2d::_bind___eq},
	{"op_neq", &luna_wrapper_ork_box2d::_bind_op_neq},
	{"dynCast", &luna_wrapper_ork_box2d::_bind_dynCast},
	{"fromVoid", &luna_wrapper_ork_box2d::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_box2d::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::box2d >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::box2d >::enumValues[] = {
	{0,0}
};


