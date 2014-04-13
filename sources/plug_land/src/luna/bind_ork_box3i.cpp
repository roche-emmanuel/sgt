#include <plug_common.h>

class luna_wrapper_ork_box3i {
public:
	typedef Luna< ork::box3i > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63151945) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::box3i*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::box3i* rhs =(Luna< ork::box3i >::check(L,2));
		ork::box3i* self=(Luna< ork::box3i >::check(L,1));
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

		ork::box3i* self= (ork::box3i*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::box3i >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63151945) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::box3i >::check(L,1));
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

		ork::box3i* self=(Luna< ork::box3i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::box3i");
		
		return luna_dynamicCast(L,converters,"ork::box3i",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304274) ) return false;
		if( (!(Luna< ork::vec3i >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,81304274) ) return false;
		if( (!(Luna< ork::vec3i >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_center(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_enlarge_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304274) ) return false;
		if( (!(Luna< ork::vec3i >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enlarge_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151945) ) return false;
		if( (!(Luna< ork::box3i >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contains(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304274) ) return false;
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

	inline static bool _lg_typecheck_setZmin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZmax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::box3i::box3i()
	static ork::box3i* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::box3i::box3i() function, expected prototype:\nork::box3i::box3i()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::box3i();
	}

	// ork::box3i::box3i(int xmin, int xmax, int ymin, int ymax, int zmin, int zmax)
	static ork::box3i* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::box3i::box3i(int xmin, int xmax, int ymin, int ymax, int zmin, int zmax) function, expected prototype:\nork::box3i::box3i(int xmin, int xmax, int ymin, int ymax, int zmin, int zmax)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int xmin=(int)lua_tointeger(L,1);
		int xmax=(int)lua_tointeger(L,2);
		int ymin=(int)lua_tointeger(L,3);
		int ymax=(int)lua_tointeger(L,4);
		int zmin=(int)lua_tointeger(L,5);
		int zmax=(int)lua_tointeger(L,6);

		return new ork::box3i(xmin, xmax, ymin, ymax, zmin, zmax);
	}

	// ork::box3i::box3i(const ork::vec3i & p, const ork::vec3i & q)
	static ork::box3i* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::box3i::box3i(const ork::vec3i & p, const ork::vec3i & q) function, expected prototype:\nork::box3i::box3i(const ork::vec3i & p, const ork::vec3i & q)\nClass arguments details:\narg 1 ID = 81304274\narg 2 ID = 81304274\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3i* p_ptr=(Luna< ork::vec3i >::check(L,1));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in ork::box3i::box3i function");
		}
		const ork::vec3i & p=*p_ptr;
		const ork::vec3i* q_ptr=(Luna< ork::vec3i >::check(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in ork::box3i::box3i function");
		}
		const ork::vec3i & q=*q_ptr;

		return new ork::box3i(p, q);
	}

	// Overload binder for ork::box3i::box3i
	static ork::box3i* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function box3i, cannot match any of the overloads for function box3i:\n  box3i()\n  box3i(int, int, int, int, int, int)\n  box3i(const ork::vec3i &, const ork::vec3i &)\n");
		return NULL;
	}


	// Function binds:
	// ork::vec3i ork::box3i::center() const
	static int _bind_center(lua_State *L) {
		if (!_lg_typecheck_center(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3i ork::box3i::center() const function, expected prototype:\nork::vec3i ork::box3i::center() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box3i* self=(Luna< ork::box3i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3i ork::box3i::center() const. Got : '%s'\n%s",typeid(Luna< ork::box3i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3i stack_lret = self->center();
		ork::vec3i* lret = new ork::vec3i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3i >::push(L,lret,true);

		return 1;
	}

	// ork::box3i ork::box3i::enlarge(const ork::vec3i & p) const
	static int _bind_enlarge_overload_1(lua_State *L) {
		if (!_lg_typecheck_enlarge_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::box3i ork::box3i::enlarge(const ork::vec3i & p) const function, expected prototype:\nork::box3i ork::box3i::enlarge(const ork::vec3i & p) const\nClass arguments details:\narg 1 ID = 81304274\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3i* p_ptr=(Luna< ork::vec3i >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in ork::box3i::enlarge function");
		}
		const ork::vec3i & p=*p_ptr;

		ork::box3i* self=(Luna< ork::box3i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box3i ork::box3i::enlarge(const ork::vec3i &) const. Got : '%s'\n%s",typeid(Luna< ork::box3i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box3i stack_lret = self->enlarge(p);
		ork::box3i* lret = new ork::box3i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box3i >::push(L,lret,true);

		return 1;
	}

	// ork::box3i ork::box3i::enlarge(const ork::box3i & r) const
	static int _bind_enlarge_overload_2(lua_State *L) {
		if (!_lg_typecheck_enlarge_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::box3i ork::box3i::enlarge(const ork::box3i & r) const function, expected prototype:\nork::box3i ork::box3i::enlarge(const ork::box3i & r) const\nClass arguments details:\narg 1 ID = 63151945\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box3i* r_ptr=(Luna< ork::box3i >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in ork::box3i::enlarge function");
		}
		const ork::box3i & r=*r_ptr;

		ork::box3i* self=(Luna< ork::box3i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box3i ork::box3i::enlarge(const ork::box3i &) const. Got : '%s'\n%s",typeid(Luna< ork::box3i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box3i stack_lret = self->enlarge(r);
		ork::box3i* lret = new ork::box3i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box3i >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::box3i::enlarge
	static int _bind_enlarge(lua_State *L) {
		if (_lg_typecheck_enlarge_overload_1(L)) return _bind_enlarge_overload_1(L);
		if (_lg_typecheck_enlarge_overload_2(L)) return _bind_enlarge_overload_2(L);

		luaL_error(L, "error in function enlarge, cannot match any of the overloads for function enlarge:\n  enlarge(const ork::vec3i &)\n  enlarge(const ork::box3i &)\n");
		return 0;
	}

	// bool ork::box3i::contains(const ork::vec3i & p) const
	static int _bind_contains(lua_State *L) {
		if (!_lg_typecheck_contains(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::box3i::contains(const ork::vec3i & p) const function, expected prototype:\nbool ork::box3i::contains(const ork::vec3i & p) const\nClass arguments details:\narg 1 ID = 81304274\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3i* p_ptr=(Luna< ork::vec3i >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in ork::box3i::contains function");
		}
		const ork::vec3i & p=*p_ptr;

		ork::box3i* self=(Luna< ork::box3i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::box3i::contains(const ork::vec3i &) const. Got : '%s'\n%s",typeid(Luna< ork::box3i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->contains(p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int ork::box3i::xmin()
	static int _bind_getXmin(lua_State *L) {
		if (!_lg_typecheck_getXmin(L)) {
			luaL_error(L, "luna typecheck failed in int ork::box3i::xmin() function, expected prototype:\nint ork::box3i::xmin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box3i* self=(Luna< ork::box3i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::box3i::xmin(). Got : '%s'\n%s",typeid(Luna< ork::box3i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->xmin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::box3i::xmax()
	static int _bind_getXmax(lua_State *L) {
		if (!_lg_typecheck_getXmax(L)) {
			luaL_error(L, "luna typecheck failed in int ork::box3i::xmax() function, expected prototype:\nint ork::box3i::xmax()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box3i* self=(Luna< ork::box3i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::box3i::xmax(). Got : '%s'\n%s",typeid(Luna< ork::box3i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->xmax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::box3i::ymin()
	static int _bind_getYmin(lua_State *L) {
		if (!_lg_typecheck_getYmin(L)) {
			luaL_error(L, "luna typecheck failed in int ork::box3i::ymin() function, expected prototype:\nint ork::box3i::ymin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box3i* self=(Luna< ork::box3i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::box3i::ymin(). Got : '%s'\n%s",typeid(Luna< ork::box3i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ymin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::box3i::ymax()
	static int _bind_getYmax(lua_State *L) {
		if (!_lg_typecheck_getYmax(L)) {
			luaL_error(L, "luna typecheck failed in int ork::box3i::ymax() function, expected prototype:\nint ork::box3i::ymax()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box3i* self=(Luna< ork::box3i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::box3i::ymax(). Got : '%s'\n%s",typeid(Luna< ork::box3i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ymax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::box3i::zmin()
	static int _bind_getZmin(lua_State *L) {
		if (!_lg_typecheck_getZmin(L)) {
			luaL_error(L, "luna typecheck failed in int ork::box3i::zmin() function, expected prototype:\nint ork::box3i::zmin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box3i* self=(Luna< ork::box3i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::box3i::zmin(). Got : '%s'\n%s",typeid(Luna< ork::box3i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->zmin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::box3i::zmax()
	static int _bind_getZmax(lua_State *L) {
		if (!_lg_typecheck_getZmax(L)) {
			luaL_error(L, "luna typecheck failed in int ork::box3i::zmax() function, expected prototype:\nint ork::box3i::zmax()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box3i* self=(Luna< ork::box3i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::box3i::zmax(). Got : '%s'\n%s",typeid(Luna< ork::box3i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->zmax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::box3i::xmin(int value)
	static int _bind_setXmin(lua_State *L) {
		if (!_lg_typecheck_setXmin(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box3i::xmin(int value) function, expected prototype:\nvoid ork::box3i::xmin(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		ork::box3i* self=(Luna< ork::box3i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box3i::xmin(int). Got : '%s'\n%s",typeid(Luna< ork::box3i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->xmin = value;

		return 0;
	}

	// void ork::box3i::xmax(int value)
	static int _bind_setXmax(lua_State *L) {
		if (!_lg_typecheck_setXmax(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box3i::xmax(int value) function, expected prototype:\nvoid ork::box3i::xmax(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		ork::box3i* self=(Luna< ork::box3i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box3i::xmax(int). Got : '%s'\n%s",typeid(Luna< ork::box3i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->xmax = value;

		return 0;
	}

	// void ork::box3i::ymin(int value)
	static int _bind_setYmin(lua_State *L) {
		if (!_lg_typecheck_setYmin(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box3i::ymin(int value) function, expected prototype:\nvoid ork::box3i::ymin(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		ork::box3i* self=(Luna< ork::box3i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box3i::ymin(int). Got : '%s'\n%s",typeid(Luna< ork::box3i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ymin = value;

		return 0;
	}

	// void ork::box3i::ymax(int value)
	static int _bind_setYmax(lua_State *L) {
		if (!_lg_typecheck_setYmax(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box3i::ymax(int value) function, expected prototype:\nvoid ork::box3i::ymax(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		ork::box3i* self=(Luna< ork::box3i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box3i::ymax(int). Got : '%s'\n%s",typeid(Luna< ork::box3i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ymax = value;

		return 0;
	}

	// void ork::box3i::zmin(int value)
	static int _bind_setZmin(lua_State *L) {
		if (!_lg_typecheck_setZmin(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box3i::zmin(int value) function, expected prototype:\nvoid ork::box3i::zmin(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		ork::box3i* self=(Luna< ork::box3i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box3i::zmin(int). Got : '%s'\n%s",typeid(Luna< ork::box3i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->zmin = value;

		return 0;
	}

	// void ork::box3i::zmax(int value)
	static int _bind_setZmax(lua_State *L) {
		if (!_lg_typecheck_setZmax(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box3i::zmax(int value) function, expected prototype:\nvoid ork::box3i::zmax(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		ork::box3i* self=(Luna< ork::box3i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box3i::zmax(int). Got : '%s'\n%s",typeid(Luna< ork::box3i >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->zmax = value;

		return 0;
	}


	// Operator binds:

};

ork::box3i* LunaTraits< ork::box3i >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_box3i::_bind_ctor(L);
}

void LunaTraits< ork::box3i >::_bind_dtor(ork::box3i* obj) {
	delete obj;
}

const char LunaTraits< ork::box3i >::className[] = "box3i";
const char LunaTraits< ork::box3i >::fullName[] = "ork::box3i";
const char LunaTraits< ork::box3i >::moduleName[] = "ork";
const char* LunaTraits< ork::box3i >::parents[] = {0};
const int LunaTraits< ork::box3i >::hash = 63151945;
const int LunaTraits< ork::box3i >::uniqueIDs[] = {63151945,0};

luna_RegType LunaTraits< ork::box3i >::methods[] = {
	{"center", &luna_wrapper_ork_box3i::_bind_center},
	{"enlarge", &luna_wrapper_ork_box3i::_bind_enlarge},
	{"contains", &luna_wrapper_ork_box3i::_bind_contains},
	{"getXmin", &luna_wrapper_ork_box3i::_bind_getXmin},
	{"getXmax", &luna_wrapper_ork_box3i::_bind_getXmax},
	{"getYmin", &luna_wrapper_ork_box3i::_bind_getYmin},
	{"getYmax", &luna_wrapper_ork_box3i::_bind_getYmax},
	{"getZmin", &luna_wrapper_ork_box3i::_bind_getZmin},
	{"getZmax", &luna_wrapper_ork_box3i::_bind_getZmax},
	{"setXmin", &luna_wrapper_ork_box3i::_bind_setXmin},
	{"setXmax", &luna_wrapper_ork_box3i::_bind_setXmax},
	{"setYmin", &luna_wrapper_ork_box3i::_bind_setYmin},
	{"setYmax", &luna_wrapper_ork_box3i::_bind_setYmax},
	{"setZmin", &luna_wrapper_ork_box3i::_bind_setZmin},
	{"setZmax", &luna_wrapper_ork_box3i::_bind_setZmax},
	{"dynCast", &luna_wrapper_ork_box3i::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_box3i::_bind___eq},
	{"fromVoid", &luna_wrapper_ork_box3i::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_box3i::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::box3i >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::box3i >::enumValues[] = {
	{0,0}
};


