#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_GPUTimer.h>

class luna_wrapper_ork_GPUTimer {
public:
	typedef Luna< ork::GPUTimer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Timer* self=(Luna< ork::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Timer,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
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

		ork::GPUTimer* self= (ork::GPUTimer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::GPUTimer >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50034893) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Timer(lua_State *L) {
		// all checked are already performed before reaching this point.
		//ork::GPUTimer* ptr= dynamic_cast< ork::GPUTimer* >(Luna< ork::Timer >::check(L,1));
		ork::GPUTimer* ptr= luna_caster< ork::Timer, ork::GPUTimer >::cast(Luna< ork::Timer >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::GPUTimer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_start(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_end(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAvgTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_start(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_end(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getAvgTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::GPUTimer::GPUTimer()
	static ork::GPUTimer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::GPUTimer::GPUTimer() function, expected prototype:\nork::GPUTimer::GPUTimer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::GPUTimer();
	}

	// ork::GPUTimer::GPUTimer(lua_Table * data)
	static ork::GPUTimer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::GPUTimer::GPUTimer(lua_Table * data) function, expected prototype:\nork::GPUTimer::GPUTimer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_ork_GPUTimer(L,NULL);
	}

	// Overload binder for ork::GPUTimer::GPUTimer
	static ork::GPUTimer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GPUTimer, cannot match any of the overloads for function GPUTimer:\n  GPUTimer()\n  GPUTimer(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// double ork::GPUTimer::start()
	static int _bind_start(lua_State *L) {
		if (!_lg_typecheck_start(L)) {
			luaL_error(L, "luna typecheck failed in double ork::GPUTimer::start() function, expected prototype:\ndouble ork::GPUTimer::start()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::GPUTimer* self=Luna< ork::Timer >::checkSubType< ork::GPUTimer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::GPUTimer::start(). Got : '%s'\n%s",typeid(Luna< ork::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->start();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::GPUTimer::end()
	static int _bind_end(lua_State *L) {
		if (!_lg_typecheck_end(L)) {
			luaL_error(L, "luna typecheck failed in double ork::GPUTimer::end() function, expected prototype:\ndouble ork::GPUTimer::end()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::GPUTimer* self=Luna< ork::Timer >::checkSubType< ork::GPUTimer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::GPUTimer::end(). Got : '%s'\n%s",typeid(Luna< ork::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->end();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::GPUTimer::getTime()
	static int _bind_getTime(lua_State *L) {
		if (!_lg_typecheck_getTime(L)) {
			luaL_error(L, "luna typecheck failed in double ork::GPUTimer::getTime() function, expected prototype:\ndouble ork::GPUTimer::getTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::GPUTimer* self=Luna< ork::Timer >::checkSubType< ork::GPUTimer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::GPUTimer::getTime(). Got : '%s'\n%s",typeid(Luna< ork::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::GPUTimer::getAvgTime()
	static int _bind_getAvgTime(lua_State *L) {
		if (!_lg_typecheck_getAvgTime(L)) {
			luaL_error(L, "luna typecheck failed in double ork::GPUTimer::getAvgTime() function, expected prototype:\ndouble ork::GPUTimer::getAvgTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::GPUTimer* self=Luna< ork::Timer >::checkSubType< ork::GPUTimer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::GPUTimer::getAvgTime(). Got : '%s'\n%s",typeid(Luna< ork::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getAvgTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::GPUTimer::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void ork::GPUTimer::base_reset() function, expected prototype:\nvoid ork::GPUTimer::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::GPUTimer* self=Luna< ork::Timer >::checkSubType< ork::GPUTimer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::GPUTimer::base_reset(). Got : '%s'\n%s",typeid(Luna< ork::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GPUTimer::reset();

		return 0;
	}

	// double ork::GPUTimer::base_start()
	static int _bind_base_start(lua_State *L) {
		if (!_lg_typecheck_base_start(L)) {
			luaL_error(L, "luna typecheck failed in double ork::GPUTimer::base_start() function, expected prototype:\ndouble ork::GPUTimer::base_start()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::GPUTimer* self=Luna< ork::Timer >::checkSubType< ork::GPUTimer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::GPUTimer::base_start(). Got : '%s'\n%s",typeid(Luna< ork::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->GPUTimer::start();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::GPUTimer::base_end()
	static int _bind_base_end(lua_State *L) {
		if (!_lg_typecheck_base_end(L)) {
			luaL_error(L, "luna typecheck failed in double ork::GPUTimer::base_end() function, expected prototype:\ndouble ork::GPUTimer::base_end()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::GPUTimer* self=Luna< ork::Timer >::checkSubType< ork::GPUTimer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::GPUTimer::base_end(). Got : '%s'\n%s",typeid(Luna< ork::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->GPUTimer::end();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::GPUTimer::base_getTime()
	static int _bind_base_getTime(lua_State *L) {
		if (!_lg_typecheck_base_getTime(L)) {
			luaL_error(L, "luna typecheck failed in double ork::GPUTimer::base_getTime() function, expected prototype:\ndouble ork::GPUTimer::base_getTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::GPUTimer* self=Luna< ork::Timer >::checkSubType< ork::GPUTimer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::GPUTimer::base_getTime(). Got : '%s'\n%s",typeid(Luna< ork::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->GPUTimer::getTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::GPUTimer::base_getAvgTime()
	static int _bind_base_getAvgTime(lua_State *L) {
		if (!_lg_typecheck_base_getAvgTime(L)) {
			luaL_error(L, "luna typecheck failed in double ork::GPUTimer::base_getAvgTime() function, expected prototype:\ndouble ork::GPUTimer::base_getAvgTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::GPUTimer* self=Luna< ork::Timer >::checkSubType< ork::GPUTimer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::GPUTimer::base_getAvgTime(). Got : '%s'\n%s",typeid(Luna< ork::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->GPUTimer::getAvgTime();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::GPUTimer* LunaTraits< ork::GPUTimer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_GPUTimer::_bind_ctor(L);
}

void LunaTraits< ork::GPUTimer >::_bind_dtor(ork::GPUTimer* obj) {
	delete obj;
}

const char LunaTraits< ork::GPUTimer >::className[] = "GPUTimer";
const char LunaTraits< ork::GPUTimer >::fullName[] = "ork::GPUTimer";
const char LunaTraits< ork::GPUTimer >::moduleName[] = "ork";
const char* LunaTraits< ork::GPUTimer >::parents[] = {"ork.Timer", 0};
const int LunaTraits< ork::GPUTimer >::hash = 34839658;
const int LunaTraits< ork::GPUTimer >::uniqueIDs[] = {50034893,0};

luna_RegType LunaTraits< ork::GPUTimer >::methods[] = {
	{"start", &luna_wrapper_ork_GPUTimer::_bind_start},
	{"end", &luna_wrapper_ork_GPUTimer::_bind_end},
	{"getTime", &luna_wrapper_ork_GPUTimer::_bind_getTime},
	{"getAvgTime", &luna_wrapper_ork_GPUTimer::_bind_getAvgTime},
	{"base_reset", &luna_wrapper_ork_GPUTimer::_bind_base_reset},
	{"base_start", &luna_wrapper_ork_GPUTimer::_bind_base_start},
	{"base_end", &luna_wrapper_ork_GPUTimer::_bind_base_end},
	{"base_getTime", &luna_wrapper_ork_GPUTimer::_bind_base_getTime},
	{"base_getAvgTime", &luna_wrapper_ork_GPUTimer::_bind_base_getAvgTime},
	{"fromVoid", &luna_wrapper_ork_GPUTimer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_GPUTimer::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_GPUTimer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::GPUTimer >::converters[] = {
	{"ork::Timer", &luna_wrapper_ork_GPUTimer::_cast_from_Timer},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::GPUTimer >::enumValues[] = {
	{0,0}
};


