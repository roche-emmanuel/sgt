#include <plug_common.h>

class luna_wrapper_ork_box3d {
public:
	typedef Luna< ork::box3d > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63151940) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::box3d*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::box3d* rhs =(Luna< ork::box3d >::check(L,2));
		ork::box3d* self=(Luna< ork::box3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::box3d* self= (ork::box3d*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::box3d >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63151940) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::box3d >::check(L,1));
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

		ork::box3d* self=(Luna< ork::box3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::box3d");
		
		return luna_dynamicCast(L,converters,"ork::box3d",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304269) ) return false;
		if( (!(Luna< ork::vec3d >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		if( (!(Luna< ork::vec3d >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_center(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_enlarge_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		if( (!(Luna< ork::vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enlarge_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151940) ) return false;
		if( (!(Luna< ork::box3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contains(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
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

	inline static bool _lg_typecheck_getZmin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getZmax(lua_State *L) {
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

	inline static bool _lg_typecheck_setZmin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZmax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::box3d::box3d()
	static ork::box3d* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::box3d::box3d() function, expected prototype:\nork::box3d::box3d()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::box3d();
	}

	// ork::box3d::box3d(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)
	static ork::box3d* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::box3d::box3d(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax) function, expected prototype:\nork::box3d::box3d(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double xmin=(double)lua_tonumber(L,1);
		double xmax=(double)lua_tonumber(L,2);
		double ymin=(double)lua_tonumber(L,3);
		double ymax=(double)lua_tonumber(L,4);
		double zmin=(double)lua_tonumber(L,5);
		double zmax=(double)lua_tonumber(L,6);

		return new ork::box3d(xmin, xmax, ymin, ymax, zmin, zmax);
	}

	// ork::box3d::box3d(const ork::vec3d & p, const ork::vec3d & q)
	static ork::box3d* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::box3d::box3d(const ork::vec3d & p, const ork::vec3d & q) function, expected prototype:\nork::box3d::box3d(const ork::vec3d & p, const ork::vec3d & q)\nClass arguments details:\narg 1 ID = 81304269\narg 2 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* p_ptr=(Luna< ork::vec3d >::check(L,1));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in ork::box3d::box3d function");
		}
		const ork::vec3d & p=*p_ptr;
		const ork::vec3d* q_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in ork::box3d::box3d function");
		}
		const ork::vec3d & q=*q_ptr;

		return new ork::box3d(p, q);
	}

	// Overload binder for ork::box3d::box3d
	static ork::box3d* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function box3d, cannot match any of the overloads for function box3d:\n  box3d()\n  box3d(double, double, double, double, double, double)\n  box3d(const ork::vec3d &, const ork::vec3d &)\n");
		return NULL;
	}


	// Function binds:
	// ork::vec3d ork::box3d::center() const
	static int _bind_center(lua_State *L) {
		if (!_lg_typecheck_center(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d ork::box3d::center() const function, expected prototype:\nork::vec3d ork::box3d::center() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box3d* self=(Luna< ork::box3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d ork::box3d::center() const. Got : '%s'\n%s",typeid(Luna< ork::box3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->center();
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// ork::box3d ork::box3d::enlarge(const ork::vec3d & p) const
	static int _bind_enlarge_overload_1(lua_State *L) {
		if (!_lg_typecheck_enlarge_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::box3d ork::box3d::enlarge(const ork::vec3d & p) const function, expected prototype:\nork::box3d ork::box3d::enlarge(const ork::vec3d & p) const\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* p_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in ork::box3d::enlarge function");
		}
		const ork::vec3d & p=*p_ptr;

		ork::box3d* self=(Luna< ork::box3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box3d ork::box3d::enlarge(const ork::vec3d &) const. Got : '%s'\n%s",typeid(Luna< ork::box3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box3d stack_lret = self->enlarge(p);
		ork::box3d* lret = new ork::box3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box3d >::push(L,lret,true);

		return 1;
	}

	// ork::box3d ork::box3d::enlarge(const ork::box3d & r) const
	static int _bind_enlarge_overload_2(lua_State *L) {
		if (!_lg_typecheck_enlarge_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::box3d ork::box3d::enlarge(const ork::box3d & r) const function, expected prototype:\nork::box3d ork::box3d::enlarge(const ork::box3d & r) const\nClass arguments details:\narg 1 ID = 63151940\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box3d* r_ptr=(Luna< ork::box3d >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in ork::box3d::enlarge function");
		}
		const ork::box3d & r=*r_ptr;

		ork::box3d* self=(Luna< ork::box3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box3d ork::box3d::enlarge(const ork::box3d &) const. Got : '%s'\n%s",typeid(Luna< ork::box3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box3d stack_lret = self->enlarge(r);
		ork::box3d* lret = new ork::box3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box3d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::box3d::enlarge
	static int _bind_enlarge(lua_State *L) {
		if (_lg_typecheck_enlarge_overload_1(L)) return _bind_enlarge_overload_1(L);
		if (_lg_typecheck_enlarge_overload_2(L)) return _bind_enlarge_overload_2(L);

		luaL_error(L, "error in function enlarge, cannot match any of the overloads for function enlarge:\n  enlarge(const ork::vec3d &)\n  enlarge(const ork::box3d &)\n");
		return 0;
	}

	// bool ork::box3d::contains(const ork::vec3d & p) const
	static int _bind_contains(lua_State *L) {
		if (!_lg_typecheck_contains(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::box3d::contains(const ork::vec3d & p) const function, expected prototype:\nbool ork::box3d::contains(const ork::vec3d & p) const\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* p_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in ork::box3d::contains function");
		}
		const ork::vec3d & p=*p_ptr;

		ork::box3d* self=(Luna< ork::box3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::box3d::contains(const ork::vec3d &) const. Got : '%s'\n%s",typeid(Luna< ork::box3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->contains(p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// double ork::box3d::xmin()
	static int _bind_getXmin(lua_State *L) {
		if (!_lg_typecheck_getXmin(L)) {
			luaL_error(L, "luna typecheck failed in double ork::box3d::xmin() function, expected prototype:\ndouble ork::box3d::xmin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box3d* self=(Luna< ork::box3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::box3d::xmin(). Got : '%s'\n%s",typeid(Luna< ork::box3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->xmin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::box3d::xmax()
	static int _bind_getXmax(lua_State *L) {
		if (!_lg_typecheck_getXmax(L)) {
			luaL_error(L, "luna typecheck failed in double ork::box3d::xmax() function, expected prototype:\ndouble ork::box3d::xmax()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box3d* self=(Luna< ork::box3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::box3d::xmax(). Got : '%s'\n%s",typeid(Luna< ork::box3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->xmax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::box3d::ymin()
	static int _bind_getYmin(lua_State *L) {
		if (!_lg_typecheck_getYmin(L)) {
			luaL_error(L, "luna typecheck failed in double ork::box3d::ymin() function, expected prototype:\ndouble ork::box3d::ymin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box3d* self=(Luna< ork::box3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::box3d::ymin(). Got : '%s'\n%s",typeid(Luna< ork::box3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->ymin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::box3d::ymax()
	static int _bind_getYmax(lua_State *L) {
		if (!_lg_typecheck_getYmax(L)) {
			luaL_error(L, "luna typecheck failed in double ork::box3d::ymax() function, expected prototype:\ndouble ork::box3d::ymax()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box3d* self=(Luna< ork::box3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::box3d::ymax(). Got : '%s'\n%s",typeid(Luna< ork::box3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->ymax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::box3d::zmin()
	static int _bind_getZmin(lua_State *L) {
		if (!_lg_typecheck_getZmin(L)) {
			luaL_error(L, "luna typecheck failed in double ork::box3d::zmin() function, expected prototype:\ndouble ork::box3d::zmin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box3d* self=(Luna< ork::box3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::box3d::zmin(). Got : '%s'\n%s",typeid(Luna< ork::box3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->zmin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::box3d::zmax()
	static int _bind_getZmax(lua_State *L) {
		if (!_lg_typecheck_getZmax(L)) {
			luaL_error(L, "luna typecheck failed in double ork::box3d::zmax() function, expected prototype:\ndouble ork::box3d::zmax()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box3d* self=(Luna< ork::box3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::box3d::zmax(). Got : '%s'\n%s",typeid(Luna< ork::box3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->zmax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::box3d::xmin(double value)
	static int _bind_setXmin(lua_State *L) {
		if (!_lg_typecheck_setXmin(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box3d::xmin(double value) function, expected prototype:\nvoid ork::box3d::xmin(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		ork::box3d* self=(Luna< ork::box3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box3d::xmin(double). Got : '%s'\n%s",typeid(Luna< ork::box3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->xmin = value;

		return 0;
	}

	// void ork::box3d::xmax(double value)
	static int _bind_setXmax(lua_State *L) {
		if (!_lg_typecheck_setXmax(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box3d::xmax(double value) function, expected prototype:\nvoid ork::box3d::xmax(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		ork::box3d* self=(Luna< ork::box3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box3d::xmax(double). Got : '%s'\n%s",typeid(Luna< ork::box3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->xmax = value;

		return 0;
	}

	// void ork::box3d::ymin(double value)
	static int _bind_setYmin(lua_State *L) {
		if (!_lg_typecheck_setYmin(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box3d::ymin(double value) function, expected prototype:\nvoid ork::box3d::ymin(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		ork::box3d* self=(Luna< ork::box3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box3d::ymin(double). Got : '%s'\n%s",typeid(Luna< ork::box3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ymin = value;

		return 0;
	}

	// void ork::box3d::ymax(double value)
	static int _bind_setYmax(lua_State *L) {
		if (!_lg_typecheck_setYmax(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box3d::ymax(double value) function, expected prototype:\nvoid ork::box3d::ymax(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		ork::box3d* self=(Luna< ork::box3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box3d::ymax(double). Got : '%s'\n%s",typeid(Luna< ork::box3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ymax = value;

		return 0;
	}

	// void ork::box3d::zmin(double value)
	static int _bind_setZmin(lua_State *L) {
		if (!_lg_typecheck_setZmin(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box3d::zmin(double value) function, expected prototype:\nvoid ork::box3d::zmin(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		ork::box3d* self=(Luna< ork::box3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box3d::zmin(double). Got : '%s'\n%s",typeid(Luna< ork::box3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->zmin = value;

		return 0;
	}

	// void ork::box3d::zmax(double value)
	static int _bind_setZmax(lua_State *L) {
		if (!_lg_typecheck_setZmax(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box3d::zmax(double value) function, expected prototype:\nvoid ork::box3d::zmax(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		ork::box3d* self=(Luna< ork::box3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box3d::zmax(double). Got : '%s'\n%s",typeid(Luna< ork::box3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->zmax = value;

		return 0;
	}


	// Operator binds:

};

ork::box3d* LunaTraits< ork::box3d >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_box3d::_bind_ctor(L);
}

void LunaTraits< ork::box3d >::_bind_dtor(ork::box3d* obj) {
	delete obj;
}

const char LunaTraits< ork::box3d >::className[] = "box3d";
const char LunaTraits< ork::box3d >::fullName[] = "ork::box3d";
const char LunaTraits< ork::box3d >::moduleName[] = "ork";
const char* LunaTraits< ork::box3d >::parents[] = {0};
const int LunaTraits< ork::box3d >::hash = 63151940;
const int LunaTraits< ork::box3d >::uniqueIDs[] = {63151940,0};

luna_RegType LunaTraits< ork::box3d >::methods[] = {
	{"center", &luna_wrapper_ork_box3d::_bind_center},
	{"enlarge", &luna_wrapper_ork_box3d::_bind_enlarge},
	{"contains", &luna_wrapper_ork_box3d::_bind_contains},
	{"getXmin", &luna_wrapper_ork_box3d::_bind_getXmin},
	{"getXmax", &luna_wrapper_ork_box3d::_bind_getXmax},
	{"getYmin", &luna_wrapper_ork_box3d::_bind_getYmin},
	{"getYmax", &luna_wrapper_ork_box3d::_bind_getYmax},
	{"getZmin", &luna_wrapper_ork_box3d::_bind_getZmin},
	{"getZmax", &luna_wrapper_ork_box3d::_bind_getZmax},
	{"setXmin", &luna_wrapper_ork_box3d::_bind_setXmin},
	{"setXmax", &luna_wrapper_ork_box3d::_bind_setXmax},
	{"setYmin", &luna_wrapper_ork_box3d::_bind_setYmin},
	{"setYmax", &luna_wrapper_ork_box3d::_bind_setYmax},
	{"setZmin", &luna_wrapper_ork_box3d::_bind_setZmin},
	{"setZmax", &luna_wrapper_ork_box3d::_bind_setZmax},
	{"dynCast", &luna_wrapper_ork_box3d::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_box3d::_bind___eq},
	{"fromVoid", &luna_wrapper_ork_box3d::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_box3d::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::box3d >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::box3d >::enumValues[] = {
	{0,0}
};


