#include <plug_common.h>

class luna_wrapper_osg_Timer {
public:
	typedef Luna< osg::Timer > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,90586498) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Timer*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Timer* rhs =(Luna< osg::Timer >::check(L,2));
		osg::Timer* self=(Luna< osg::Timer >::check(L,1));
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

		osg::Timer* self= (osg::Timer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Timer >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,90586498) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Timer >::check(L,1));
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

		osg::Timer* self=(Luna< osg::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Timer");
		
		return luna_dynamicCast(L,converters,"osg::Timer",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_tick(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStartTick_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStartTick_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,32973728) ) return false;
		if( (!(Luna< __int64 >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStartTick(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_time_s(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_time_m(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_time_u(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_time_n(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_delta_s(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,32973728) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,32973728) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_delta_m(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,32973728) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,32973728) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_delta_u(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,32973728) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,32973728) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_delta_n(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,32973728) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,32973728) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSecondsPerTick(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_instance(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Timer::Timer()
	static osg::Timer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osg::Timer::Timer() function, expected prototype:\nosg::Timer::Timer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Timer();
	}


	// Function binds:
	// __int64 osg::Timer::tick() const
	static int _bind_tick(lua_State *L) {
		if (!_lg_typecheck_tick(L)) {
			luaL_error(L, "luna typecheck failed in __int64 osg::Timer::tick() const function, expected prototype:\n__int64 osg::Timer::tick() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Timer* self=(Luna< osg::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __int64 osg::Timer::tick() const. Got : '%s'\n%s",typeid(Luna< osg::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		__int64 stack_lret = self->tick();
		__int64* lret = new __int64(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< __int64 >::push(L,lret,true);

		return 1;
	}

	// void osg::Timer::setStartTick()
	static int _bind_setStartTick_overload_1(lua_State *L) {
		if (!_lg_typecheck_setStartTick_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Timer::setStartTick() function, expected prototype:\nvoid osg::Timer::setStartTick()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Timer* self=(Luna< osg::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Timer::setStartTick(). Got : '%s'\n%s",typeid(Luna< osg::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStartTick();

		return 0;
	}

	// void osg::Timer::setStartTick(__int64 t)
	static int _bind_setStartTick_overload_2(lua_State *L) {
		if (!_lg_typecheck_setStartTick_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Timer::setStartTick(__int64 t) function, expected prototype:\nvoid osg::Timer::setStartTick(__int64 t)\nClass arguments details:\narg 1 ID = 32973728\n\n%s",luna_dumpStack(L).c_str());
		}

		__int64* t_ptr=(Luna< __int64 >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in osg::Timer::setStartTick function");
		}
		__int64 t=*t_ptr;

		osg::Timer* self=(Luna< osg::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Timer::setStartTick(__int64). Got : '%s'\n%s",typeid(Luna< osg::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStartTick(t);

		return 0;
	}

	// Overload binder for osg::Timer::setStartTick
	static int _bind_setStartTick(lua_State *L) {
		if (_lg_typecheck_setStartTick_overload_1(L)) return _bind_setStartTick_overload_1(L);
		if (_lg_typecheck_setStartTick_overload_2(L)) return _bind_setStartTick_overload_2(L);

		luaL_error(L, "error in function setStartTick, cannot match any of the overloads for function setStartTick:\n  setStartTick()\n  setStartTick(__int64)\n");
		return 0;
	}

	// __int64 osg::Timer::getStartTick() const
	static int _bind_getStartTick(lua_State *L) {
		if (!_lg_typecheck_getStartTick(L)) {
			luaL_error(L, "luna typecheck failed in __int64 osg::Timer::getStartTick() const function, expected prototype:\n__int64 osg::Timer::getStartTick() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Timer* self=(Luna< osg::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __int64 osg::Timer::getStartTick() const. Got : '%s'\n%s",typeid(Luna< osg::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		__int64 stack_lret = self->getStartTick();
		__int64* lret = new __int64(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< __int64 >::push(L,lret,true);

		return 1;
	}

	// double osg::Timer::time_s() const
	static int _bind_time_s(lua_State *L) {
		if (!_lg_typecheck_time_s(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Timer::time_s() const function, expected prototype:\ndouble osg::Timer::time_s() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Timer* self=(Luna< osg::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Timer::time_s() const. Got : '%s'\n%s",typeid(Luna< osg::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->time_s();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Timer::time_m() const
	static int _bind_time_m(lua_State *L) {
		if (!_lg_typecheck_time_m(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Timer::time_m() const function, expected prototype:\ndouble osg::Timer::time_m() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Timer* self=(Luna< osg::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Timer::time_m() const. Got : '%s'\n%s",typeid(Luna< osg::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->time_m();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Timer::time_u() const
	static int _bind_time_u(lua_State *L) {
		if (!_lg_typecheck_time_u(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Timer::time_u() const function, expected prototype:\ndouble osg::Timer::time_u() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Timer* self=(Luna< osg::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Timer::time_u() const. Got : '%s'\n%s",typeid(Luna< osg::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->time_u();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Timer::time_n() const
	static int _bind_time_n(lua_State *L) {
		if (!_lg_typecheck_time_n(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Timer::time_n() const function, expected prototype:\ndouble osg::Timer::time_n() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Timer* self=(Luna< osg::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Timer::time_n() const. Got : '%s'\n%s",typeid(Luna< osg::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->time_n();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Timer::delta_s(__int64 t1, __int64 t2) const
	static int _bind_delta_s(lua_State *L) {
		if (!_lg_typecheck_delta_s(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Timer::delta_s(__int64 t1, __int64 t2) const function, expected prototype:\ndouble osg::Timer::delta_s(__int64 t1, __int64 t2) const\nClass arguments details:\narg 1 ID = 32973728\narg 2 ID = 32973728\n\n%s",luna_dumpStack(L).c_str());
		}

		__int64* t1_ptr=(Luna< __int64 >::check(L,2));
		if( !t1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t1 in osg::Timer::delta_s function");
		}
		__int64 t1=*t1_ptr;
		__int64* t2_ptr=(Luna< __int64 >::check(L,3));
		if( !t2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t2 in osg::Timer::delta_s function");
		}
		__int64 t2=*t2_ptr;

		osg::Timer* self=(Luna< osg::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Timer::delta_s(__int64, __int64) const. Got : '%s'\n%s",typeid(Luna< osg::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->delta_s(t1, t2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Timer::delta_m(__int64 t1, __int64 t2) const
	static int _bind_delta_m(lua_State *L) {
		if (!_lg_typecheck_delta_m(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Timer::delta_m(__int64 t1, __int64 t2) const function, expected prototype:\ndouble osg::Timer::delta_m(__int64 t1, __int64 t2) const\nClass arguments details:\narg 1 ID = 32973728\narg 2 ID = 32973728\n\n%s",luna_dumpStack(L).c_str());
		}

		__int64* t1_ptr=(Luna< __int64 >::check(L,2));
		if( !t1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t1 in osg::Timer::delta_m function");
		}
		__int64 t1=*t1_ptr;
		__int64* t2_ptr=(Luna< __int64 >::check(L,3));
		if( !t2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t2 in osg::Timer::delta_m function");
		}
		__int64 t2=*t2_ptr;

		osg::Timer* self=(Luna< osg::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Timer::delta_m(__int64, __int64) const. Got : '%s'\n%s",typeid(Luna< osg::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->delta_m(t1, t2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Timer::delta_u(__int64 t1, __int64 t2) const
	static int _bind_delta_u(lua_State *L) {
		if (!_lg_typecheck_delta_u(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Timer::delta_u(__int64 t1, __int64 t2) const function, expected prototype:\ndouble osg::Timer::delta_u(__int64 t1, __int64 t2) const\nClass arguments details:\narg 1 ID = 32973728\narg 2 ID = 32973728\n\n%s",luna_dumpStack(L).c_str());
		}

		__int64* t1_ptr=(Luna< __int64 >::check(L,2));
		if( !t1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t1 in osg::Timer::delta_u function");
		}
		__int64 t1=*t1_ptr;
		__int64* t2_ptr=(Luna< __int64 >::check(L,3));
		if( !t2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t2 in osg::Timer::delta_u function");
		}
		__int64 t2=*t2_ptr;

		osg::Timer* self=(Luna< osg::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Timer::delta_u(__int64, __int64) const. Got : '%s'\n%s",typeid(Luna< osg::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->delta_u(t1, t2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Timer::delta_n(__int64 t1, __int64 t2) const
	static int _bind_delta_n(lua_State *L) {
		if (!_lg_typecheck_delta_n(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Timer::delta_n(__int64 t1, __int64 t2) const function, expected prototype:\ndouble osg::Timer::delta_n(__int64 t1, __int64 t2) const\nClass arguments details:\narg 1 ID = 32973728\narg 2 ID = 32973728\n\n%s",luna_dumpStack(L).c_str());
		}

		__int64* t1_ptr=(Luna< __int64 >::check(L,2));
		if( !t1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t1 in osg::Timer::delta_n function");
		}
		__int64 t1=*t1_ptr;
		__int64* t2_ptr=(Luna< __int64 >::check(L,3));
		if( !t2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t2 in osg::Timer::delta_n function");
		}
		__int64 t2=*t2_ptr;

		osg::Timer* self=(Luna< osg::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Timer::delta_n(__int64, __int64) const. Got : '%s'\n%s",typeid(Luna< osg::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->delta_n(t1, t2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Timer::getSecondsPerTick() const
	static int _bind_getSecondsPerTick(lua_State *L) {
		if (!_lg_typecheck_getSecondsPerTick(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Timer::getSecondsPerTick() const function, expected prototype:\ndouble osg::Timer::getSecondsPerTick() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Timer* self=(Luna< osg::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Timer::getSecondsPerTick() const. Got : '%s'\n%s",typeid(Luna< osg::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getSecondsPerTick();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static osg::Timer * osg::Timer::instance()
	static int _bind_instance(lua_State *L) {
		if (!_lg_typecheck_instance(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Timer * osg::Timer::instance() function, expected prototype:\nstatic osg::Timer * osg::Timer::instance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Timer * lret = osg::Timer::instance();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Timer >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osg::Timer* LunaTraits< osg::Timer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Timer::_bind_ctor(L);
}

void LunaTraits< osg::Timer >::_bind_dtor(osg::Timer* obj) {
	delete obj;
}

const char LunaTraits< osg::Timer >::className[] = "Timer";
const char LunaTraits< osg::Timer >::fullName[] = "osg::Timer";
const char LunaTraits< osg::Timer >::moduleName[] = "osg";
const char* LunaTraits< osg::Timer >::parents[] = {0};
const int LunaTraits< osg::Timer >::hash = 90586498;
const int LunaTraits< osg::Timer >::uniqueIDs[] = {90586498,0};

luna_RegType LunaTraits< osg::Timer >::methods[] = {
	{"tick", &luna_wrapper_osg_Timer::_bind_tick},
	{"setStartTick", &luna_wrapper_osg_Timer::_bind_setStartTick},
	{"getStartTick", &luna_wrapper_osg_Timer::_bind_getStartTick},
	{"time_s", &luna_wrapper_osg_Timer::_bind_time_s},
	{"time_m", &luna_wrapper_osg_Timer::_bind_time_m},
	{"time_u", &luna_wrapper_osg_Timer::_bind_time_u},
	{"time_n", &luna_wrapper_osg_Timer::_bind_time_n},
	{"delta_s", &luna_wrapper_osg_Timer::_bind_delta_s},
	{"delta_m", &luna_wrapper_osg_Timer::_bind_delta_m},
	{"delta_u", &luna_wrapper_osg_Timer::_bind_delta_u},
	{"delta_n", &luna_wrapper_osg_Timer::_bind_delta_n},
	{"getSecondsPerTick", &luna_wrapper_osg_Timer::_bind_getSecondsPerTick},
	{"instance", &luna_wrapper_osg_Timer::_bind_instance},
	{"dynCast", &luna_wrapper_osg_Timer::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Timer::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_Timer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Timer::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Timer >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Timer >::enumValues[] = {
	{0,0}
};


