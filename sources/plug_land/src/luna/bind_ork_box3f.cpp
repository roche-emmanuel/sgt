#include <plug_common.h>

class luna_wrapper_ork_box3f {
public:
	typedef Luna< ork::box3f > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63151942) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::box3f*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::box3f* rhs =(Luna< ork::box3f >::check(L,2));
		ork::box3f* self=(Luna< ork::box3f >::check(L,1));
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

		ork::box3f* self= (ork::box3f*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::box3f >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63151942) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::box3f >::check(L,1));
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

		ork::box3f* self=(Luna< ork::box3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::box3f");
		
		return luna_dynamicCast(L,converters,"ork::box3f",name);
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

		if( !Luna<void>::has_uniqueid(L,1,81304271) ) return false;
		if( (!(Luna< ork::vec3f >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,81304271) ) return false;
		if( (!(Luna< ork::vec3f >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_center(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_enlarge_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304271) ) return false;
		if( (!(Luna< ork::vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enlarge_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151942) ) return false;
		if( (!(Luna< ork::box3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contains(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304271) ) return false;
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
	// ork::box3f::box3f()
	static ork::box3f* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::box3f::box3f() function, expected prototype:\nork::box3f::box3f()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::box3f();
	}

	// ork::box3f::box3f(float xmin, float xmax, float ymin, float ymax, float zmin, float zmax)
	static ork::box3f* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::box3f::box3f(float xmin, float xmax, float ymin, float ymax, float zmin, float zmax) function, expected prototype:\nork::box3f::box3f(float xmin, float xmax, float ymin, float ymax, float zmin, float zmax)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float xmin=(float)lua_tonumber(L,1);
		float xmax=(float)lua_tonumber(L,2);
		float ymin=(float)lua_tonumber(L,3);
		float ymax=(float)lua_tonumber(L,4);
		float zmin=(float)lua_tonumber(L,5);
		float zmax=(float)lua_tonumber(L,6);

		return new ork::box3f(xmin, xmax, ymin, ymax, zmin, zmax);
	}

	// ork::box3f::box3f(const ork::vec3f & p, const ork::vec3f & q)
	static ork::box3f* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in ork::box3f::box3f(const ork::vec3f & p, const ork::vec3f & q) function, expected prototype:\nork::box3f::box3f(const ork::vec3f & p, const ork::vec3f & q)\nClass arguments details:\narg 1 ID = 81304271\narg 2 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3f* p_ptr=(Luna< ork::vec3f >::check(L,1));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in ork::box3f::box3f function");
		}
		const ork::vec3f & p=*p_ptr;
		const ork::vec3f* q_ptr=(Luna< ork::vec3f >::check(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in ork::box3f::box3f function");
		}
		const ork::vec3f & q=*q_ptr;

		return new ork::box3f(p, q);
	}

	// Overload binder for ork::box3f::box3f
	static ork::box3f* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function box3f, cannot match any of the overloads for function box3f:\n  box3f()\n  box3f(float, float, float, float, float, float)\n  box3f(const ork::vec3f &, const ork::vec3f &)\n");
		return NULL;
	}


	// Function binds:
	// ork::vec3f ork::box3f::center() const
	static int _bind_center(lua_State *L) {
		if (!_lg_typecheck_center(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3f ork::box3f::center() const function, expected prototype:\nork::vec3f ork::box3f::center() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box3f* self=(Luna< ork::box3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3f ork::box3f::center() const. Got : '%s'\n%s",typeid(Luna< ork::box3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3f stack_lret = self->center();
		ork::vec3f* lret = new ork::vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3f >::push(L,lret,true);

		return 1;
	}

	// ork::box3f ork::box3f::enlarge(const ork::vec3f & p) const
	static int _bind_enlarge_overload_1(lua_State *L) {
		if (!_lg_typecheck_enlarge_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::box3f ork::box3f::enlarge(const ork::vec3f & p) const function, expected prototype:\nork::box3f ork::box3f::enlarge(const ork::vec3f & p) const\nClass arguments details:\narg 1 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3f* p_ptr=(Luna< ork::vec3f >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in ork::box3f::enlarge function");
		}
		const ork::vec3f & p=*p_ptr;

		ork::box3f* self=(Luna< ork::box3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box3f ork::box3f::enlarge(const ork::vec3f &) const. Got : '%s'\n%s",typeid(Luna< ork::box3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box3f stack_lret = self->enlarge(p);
		ork::box3f* lret = new ork::box3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box3f >::push(L,lret,true);

		return 1;
	}

	// ork::box3f ork::box3f::enlarge(const ork::box3f & r) const
	static int _bind_enlarge_overload_2(lua_State *L) {
		if (!_lg_typecheck_enlarge_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::box3f ork::box3f::enlarge(const ork::box3f & r) const function, expected prototype:\nork::box3f ork::box3f::enlarge(const ork::box3f & r) const\nClass arguments details:\narg 1 ID = 63151942\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box3f* r_ptr=(Luna< ork::box3f >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in ork::box3f::enlarge function");
		}
		const ork::box3f & r=*r_ptr;

		ork::box3f* self=(Luna< ork::box3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box3f ork::box3f::enlarge(const ork::box3f &) const. Got : '%s'\n%s",typeid(Luna< ork::box3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box3f stack_lret = self->enlarge(r);
		ork::box3f* lret = new ork::box3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box3f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::box3f::enlarge
	static int _bind_enlarge(lua_State *L) {
		if (_lg_typecheck_enlarge_overload_1(L)) return _bind_enlarge_overload_1(L);
		if (_lg_typecheck_enlarge_overload_2(L)) return _bind_enlarge_overload_2(L);

		luaL_error(L, "error in function enlarge, cannot match any of the overloads for function enlarge:\n  enlarge(const ork::vec3f &)\n  enlarge(const ork::box3f &)\n");
		return 0;
	}

	// bool ork::box3f::contains(const ork::vec3f & p) const
	static int _bind_contains(lua_State *L) {
		if (!_lg_typecheck_contains(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::box3f::contains(const ork::vec3f & p) const function, expected prototype:\nbool ork::box3f::contains(const ork::vec3f & p) const\nClass arguments details:\narg 1 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3f* p_ptr=(Luna< ork::vec3f >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in ork::box3f::contains function");
		}
		const ork::vec3f & p=*p_ptr;

		ork::box3f* self=(Luna< ork::box3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::box3f::contains(const ork::vec3f &) const. Got : '%s'\n%s",typeid(Luna< ork::box3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->contains(p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float ork::box3f::xmin()
	static int _bind_getXmin(lua_State *L) {
		if (!_lg_typecheck_getXmin(L)) {
			luaL_error(L, "luna typecheck failed in float ork::box3f::xmin() function, expected prototype:\nfloat ork::box3f::xmin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box3f* self=(Luna< ork::box3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::box3f::xmin(). Got : '%s'\n%s",typeid(Luna< ork::box3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->xmin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::box3f::xmax()
	static int _bind_getXmax(lua_State *L) {
		if (!_lg_typecheck_getXmax(L)) {
			luaL_error(L, "luna typecheck failed in float ork::box3f::xmax() function, expected prototype:\nfloat ork::box3f::xmax()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box3f* self=(Luna< ork::box3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::box3f::xmax(). Got : '%s'\n%s",typeid(Luna< ork::box3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->xmax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::box3f::ymin()
	static int _bind_getYmin(lua_State *L) {
		if (!_lg_typecheck_getYmin(L)) {
			luaL_error(L, "luna typecheck failed in float ork::box3f::ymin() function, expected prototype:\nfloat ork::box3f::ymin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box3f* self=(Luna< ork::box3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::box3f::ymin(). Got : '%s'\n%s",typeid(Luna< ork::box3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->ymin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::box3f::ymax()
	static int _bind_getYmax(lua_State *L) {
		if (!_lg_typecheck_getYmax(L)) {
			luaL_error(L, "luna typecheck failed in float ork::box3f::ymax() function, expected prototype:\nfloat ork::box3f::ymax()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box3f* self=(Luna< ork::box3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::box3f::ymax(). Got : '%s'\n%s",typeid(Luna< ork::box3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->ymax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::box3f::zmin()
	static int _bind_getZmin(lua_State *L) {
		if (!_lg_typecheck_getZmin(L)) {
			luaL_error(L, "luna typecheck failed in float ork::box3f::zmin() function, expected prototype:\nfloat ork::box3f::zmin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box3f* self=(Luna< ork::box3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::box3f::zmin(). Got : '%s'\n%s",typeid(Luna< ork::box3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->zmin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::box3f::zmax()
	static int _bind_getZmax(lua_State *L) {
		if (!_lg_typecheck_getZmax(L)) {
			luaL_error(L, "luna typecheck failed in float ork::box3f::zmax() function, expected prototype:\nfloat ork::box3f::zmax()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::box3f* self=(Luna< ork::box3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::box3f::zmax(). Got : '%s'\n%s",typeid(Luna< ork::box3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->zmax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::box3f::xmin(float value)
	static int _bind_setXmin(lua_State *L) {
		if (!_lg_typecheck_setXmin(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box3f::xmin(float value) function, expected prototype:\nvoid ork::box3f::xmin(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		ork::box3f* self=(Luna< ork::box3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box3f::xmin(float). Got : '%s'\n%s",typeid(Luna< ork::box3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->xmin = value;

		return 0;
	}

	// void ork::box3f::xmax(float value)
	static int _bind_setXmax(lua_State *L) {
		if (!_lg_typecheck_setXmax(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box3f::xmax(float value) function, expected prototype:\nvoid ork::box3f::xmax(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		ork::box3f* self=(Luna< ork::box3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box3f::xmax(float). Got : '%s'\n%s",typeid(Luna< ork::box3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->xmax = value;

		return 0;
	}

	// void ork::box3f::ymin(float value)
	static int _bind_setYmin(lua_State *L) {
		if (!_lg_typecheck_setYmin(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box3f::ymin(float value) function, expected prototype:\nvoid ork::box3f::ymin(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		ork::box3f* self=(Luna< ork::box3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box3f::ymin(float). Got : '%s'\n%s",typeid(Luna< ork::box3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ymin = value;

		return 0;
	}

	// void ork::box3f::ymax(float value)
	static int _bind_setYmax(lua_State *L) {
		if (!_lg_typecheck_setYmax(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box3f::ymax(float value) function, expected prototype:\nvoid ork::box3f::ymax(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		ork::box3f* self=(Luna< ork::box3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box3f::ymax(float). Got : '%s'\n%s",typeid(Luna< ork::box3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ymax = value;

		return 0;
	}

	// void ork::box3f::zmin(float value)
	static int _bind_setZmin(lua_State *L) {
		if (!_lg_typecheck_setZmin(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box3f::zmin(float value) function, expected prototype:\nvoid ork::box3f::zmin(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		ork::box3f* self=(Luna< ork::box3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box3f::zmin(float). Got : '%s'\n%s",typeid(Luna< ork::box3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->zmin = value;

		return 0;
	}

	// void ork::box3f::zmax(float value)
	static int _bind_setZmax(lua_State *L) {
		if (!_lg_typecheck_setZmax(L)) {
			luaL_error(L, "luna typecheck failed in void ork::box3f::zmax(float value) function, expected prototype:\nvoid ork::box3f::zmax(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		ork::box3f* self=(Luna< ork::box3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::box3f::zmax(float). Got : '%s'\n%s",typeid(Luna< ork::box3f >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->zmax = value;

		return 0;
	}


	// Operator binds:

};

ork::box3f* LunaTraits< ork::box3f >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_box3f::_bind_ctor(L);
}

void LunaTraits< ork::box3f >::_bind_dtor(ork::box3f* obj) {
	delete obj;
}

const char LunaTraits< ork::box3f >::className[] = "box3f";
const char LunaTraits< ork::box3f >::fullName[] = "ork::box3f";
const char LunaTraits< ork::box3f >::moduleName[] = "ork";
const char* LunaTraits< ork::box3f >::parents[] = {0};
const int LunaTraits< ork::box3f >::hash = 63151942;
const int LunaTraits< ork::box3f >::uniqueIDs[] = {63151942,0};

luna_RegType LunaTraits< ork::box3f >::methods[] = {
	{"center", &luna_wrapper_ork_box3f::_bind_center},
	{"enlarge", &luna_wrapper_ork_box3f::_bind_enlarge},
	{"contains", &luna_wrapper_ork_box3f::_bind_contains},
	{"getXmin", &luna_wrapper_ork_box3f::_bind_getXmin},
	{"getXmax", &luna_wrapper_ork_box3f::_bind_getXmax},
	{"getYmin", &luna_wrapper_ork_box3f::_bind_getYmin},
	{"getYmax", &luna_wrapper_ork_box3f::_bind_getYmax},
	{"getZmin", &luna_wrapper_ork_box3f::_bind_getZmin},
	{"getZmax", &luna_wrapper_ork_box3f::_bind_getZmax},
	{"setXmin", &luna_wrapper_ork_box3f::_bind_setXmin},
	{"setXmax", &luna_wrapper_ork_box3f::_bind_setXmax},
	{"setYmin", &luna_wrapper_ork_box3f::_bind_setYmin},
	{"setYmax", &luna_wrapper_ork_box3f::_bind_setYmax},
	{"setZmin", &luna_wrapper_ork_box3f::_bind_setZmin},
	{"setZmax", &luna_wrapper_ork_box3f::_bind_setZmax},
	{"dynCast", &luna_wrapper_ork_box3f::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_box3f::_bind___eq},
	{"fromVoid", &luna_wrapper_ork_box3f::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_box3f::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::box3f >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::box3f >::enumValues[] = {
	{0,0}
};


