#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_Timer.h>

class luna_wrapper_ork_Timer {
public:
	typedef Luna< ork::Timer > luna_t;

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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50034893) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::Timer*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Timer* rhs =(Luna< ork::Timer >::check(L,2));
		ork::Timer* self=(Luna< ork::Timer >::check(L,1));
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

		ork::Timer* self= (ork::Timer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::Timer >::push(L,self,false);
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

		ork::Timer* self=(Luna< ork::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::Timer");
		
		return luna_dynamicCast(L,converters,"ork::Timer",name);
	}


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

	inline static bool _lg_typecheck_elapsed_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_elapsed_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_getNumCycles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMinDuration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxDuration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDateTimeString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDateString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTimeOfTheDayString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_start(lua_State *L) {
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

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::Timer::Timer()
	static ork::Timer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::Timer::Timer() function, expected prototype:\nork::Timer::Timer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::Timer();
	}

	// ork::Timer::Timer(lua_Table * data)
	static ork::Timer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Timer::Timer(lua_Table * data) function, expected prototype:\nork::Timer::Timer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_ork_Timer(L,NULL);
	}

	// Overload binder for ork::Timer::Timer
	static ork::Timer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Timer, cannot match any of the overloads for function Timer:\n  Timer()\n  Timer(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// double ork::Timer::start()
	static int _bind_start(lua_State *L) {
		if (!_lg_typecheck_start(L)) {
			luaL_error(L, "luna typecheck failed in double ork::Timer::start() function, expected prototype:\ndouble ork::Timer::start()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Timer* self=(Luna< ork::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::Timer::start(). Got : '%s'\n%s",typeid(Luna< ork::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->start();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::Timer::end()
	static int _bind_elapsed_overload_1(lua_State *L) {
		if (!_lg_typecheck_elapsed_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double ork::Timer::end() function, expected prototype:\ndouble ork::Timer::end()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Timer* self=(Luna< ork::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::Timer::end(). Got : '%s'\n%s",typeid(Luna< ork::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->end();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::Timer::base_end()
	static int _bind_elapsed_overload_2(lua_State *L) {
		if (!_lg_typecheck_elapsed_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double ork::Timer::base_end() function, expected prototype:\ndouble ork::Timer::base_end()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Timer* self=(Luna< ork::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::Timer::base_end(). Got : '%s'\n%s",typeid(Luna< ork::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Timer::end();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for ork::Timer::end
	static int _bind_elapsed(lua_State *L) {
		if (_lg_typecheck_elapsed_overload_1(L)) return _bind_elapsed_overload_1(L);
		if (_lg_typecheck_elapsed_overload_2(L)) return _bind_elapsed_overload_2(L);

		luaL_error(L, "error in function end, cannot match any of the overloads for function end:\n  end()\n  end()\n");
		return 0;
	}

	// double ork::Timer::getTime()
	static int _bind_getTime(lua_State *L) {
		if (!_lg_typecheck_getTime(L)) {
			luaL_error(L, "luna typecheck failed in double ork::Timer::getTime() function, expected prototype:\ndouble ork::Timer::getTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Timer* self=(Luna< ork::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::Timer::getTime(). Got : '%s'\n%s",typeid(Luna< ork::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::Timer::getAvgTime()
	static int _bind_getAvgTime(lua_State *L) {
		if (!_lg_typecheck_getAvgTime(L)) {
			luaL_error(L, "luna typecheck failed in double ork::Timer::getAvgTime() function, expected prototype:\ndouble ork::Timer::getAvgTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Timer* self=(Luna< ork::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::Timer::getAvgTime(). Got : '%s'\n%s",typeid(Luna< ork::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getAvgTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::Timer::getNumCycles() const
	static int _bind_getNumCycles(lua_State *L) {
		if (!_lg_typecheck_getNumCycles(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Timer::getNumCycles() const function, expected prototype:\nint ork::Timer::getNumCycles() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Timer* self=(Luna< ork::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Timer::getNumCycles() const. Got : '%s'\n%s",typeid(Luna< ork::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getNumCycles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::Timer::getMinDuration() const
	static int _bind_getMinDuration(lua_State *L) {
		if (!_lg_typecheck_getMinDuration(L)) {
			luaL_error(L, "luna typecheck failed in double ork::Timer::getMinDuration() const function, expected prototype:\ndouble ork::Timer::getMinDuration() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Timer* self=(Luna< ork::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::Timer::getMinDuration() const. Got : '%s'\n%s",typeid(Luna< ork::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getMinDuration();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::Timer::getMaxDuration() const
	static int _bind_getMaxDuration(lua_State *L) {
		if (!_lg_typecheck_getMaxDuration(L)) {
			luaL_error(L, "luna typecheck failed in double ork::Timer::getMaxDuration() const function, expected prototype:\ndouble ork::Timer::getMaxDuration() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Timer* self=(Luna< ork::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::Timer::getMaxDuration() const. Got : '%s'\n%s",typeid(Luna< ork::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getMaxDuration();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::Timer::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Timer::reset() function, expected prototype:\nvoid ork::Timer::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Timer* self=(Luna< ork::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Timer::reset(). Got : '%s'\n%s",typeid(Luna< ork::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// static void ork::Timer::getDateTimeString(char * buffer, int bufSize)
	static int _bind_getDateTimeString(lua_State *L) {
		if (!_lg_typecheck_getDateTimeString(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::Timer::getDateTimeString(char * buffer, int bufSize) function, expected prototype:\nstatic void ork::Timer::getDateTimeString(char * buffer, int bufSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char* buffer=(char*)Luna< void >::check(L,1);
		int bufSize=(int)lua_tointeger(L,2);

		ork::Timer::getDateTimeString(buffer, bufSize);

		return 0;
	}

	// static void ork::Timer::getDateString(char * buffer, int bufSize)
	static int _bind_getDateString(lua_State *L) {
		if (!_lg_typecheck_getDateString(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::Timer::getDateString(char * buffer, int bufSize) function, expected prototype:\nstatic void ork::Timer::getDateString(char * buffer, int bufSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char* buffer=(char*)Luna< void >::check(L,1);
		int bufSize=(int)lua_tointeger(L,2);

		ork::Timer::getDateString(buffer, bufSize);

		return 0;
	}

	// static void ork::Timer::getTimeOfTheDayString(char * buffer, int bufSize)
	static int _bind_getTimeOfTheDayString(lua_State *L) {
		if (!_lg_typecheck_getTimeOfTheDayString(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::Timer::getTimeOfTheDayString(char * buffer, int bufSize) function, expected prototype:\nstatic void ork::Timer::getTimeOfTheDayString(char * buffer, int bufSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char* buffer=(char*)Luna< void >::check(L,1);
		int bufSize=(int)lua_tointeger(L,2);

		ork::Timer::getTimeOfTheDayString(buffer, bufSize);

		return 0;
	}

	// double ork::Timer::base_start()
	static int _bind_base_start(lua_State *L) {
		if (!_lg_typecheck_base_start(L)) {
			luaL_error(L, "luna typecheck failed in double ork::Timer::base_start() function, expected prototype:\ndouble ork::Timer::base_start()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Timer* self=(Luna< ork::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::Timer::base_start(). Got : '%s'\n%s",typeid(Luna< ork::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Timer::start();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::Timer::base_getTime()
	static int _bind_base_getTime(lua_State *L) {
		if (!_lg_typecheck_base_getTime(L)) {
			luaL_error(L, "luna typecheck failed in double ork::Timer::base_getTime() function, expected prototype:\ndouble ork::Timer::base_getTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Timer* self=(Luna< ork::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::Timer::base_getTime(). Got : '%s'\n%s",typeid(Luna< ork::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Timer::getTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::Timer::base_getAvgTime()
	static int _bind_base_getAvgTime(lua_State *L) {
		if (!_lg_typecheck_base_getAvgTime(L)) {
			luaL_error(L, "luna typecheck failed in double ork::Timer::base_getAvgTime() function, expected prototype:\ndouble ork::Timer::base_getAvgTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Timer* self=(Luna< ork::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::Timer::base_getAvgTime(). Got : '%s'\n%s",typeid(Luna< ork::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Timer::getAvgTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::Timer::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Timer::base_reset() function, expected prototype:\nvoid ork::Timer::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Timer* self=(Luna< ork::Timer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Timer::base_reset(). Got : '%s'\n%s",typeid(Luna< ork::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Timer::reset();

		return 0;
	}


	// Operator binds:

};

ork::Timer* LunaTraits< ork::Timer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_Timer::_bind_ctor(L);
}

void LunaTraits< ork::Timer >::_bind_dtor(ork::Timer* obj) {
	delete obj;
}

const char LunaTraits< ork::Timer >::className[] = "Timer";
const char LunaTraits< ork::Timer >::fullName[] = "ork::Timer";
const char LunaTraits< ork::Timer >::moduleName[] = "ork";
const char* LunaTraits< ork::Timer >::parents[] = {0};
const int LunaTraits< ork::Timer >::hash = 50034893;
const int LunaTraits< ork::Timer >::uniqueIDs[] = {50034893,0};

luna_RegType LunaTraits< ork::Timer >::methods[] = {
	{"start", &luna_wrapper_ork_Timer::_bind_start},
	{"elapsed", &luna_wrapper_ork_Timer::_bind_elapsed},
	{"getTime", &luna_wrapper_ork_Timer::_bind_getTime},
	{"getAvgTime", &luna_wrapper_ork_Timer::_bind_getAvgTime},
	{"getNumCycles", &luna_wrapper_ork_Timer::_bind_getNumCycles},
	{"getMinDuration", &luna_wrapper_ork_Timer::_bind_getMinDuration},
	{"getMaxDuration", &luna_wrapper_ork_Timer::_bind_getMaxDuration},
	{"reset", &luna_wrapper_ork_Timer::_bind_reset},
	{"getDateTimeString", &luna_wrapper_ork_Timer::_bind_getDateTimeString},
	{"getDateString", &luna_wrapper_ork_Timer::_bind_getDateString},
	{"getTimeOfTheDayString", &luna_wrapper_ork_Timer::_bind_getTimeOfTheDayString},
	{"base_start", &luna_wrapper_ork_Timer::_bind_base_start},
	{"base_getTime", &luna_wrapper_ork_Timer::_bind_base_getTime},
	{"base_getAvgTime", &luna_wrapper_ork_Timer::_bind_base_getAvgTime},
	{"base_reset", &luna_wrapper_ork_Timer::_bind_base_reset},
	{"dynCast", &luna_wrapper_ork_Timer::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_Timer::_bind___eq},
	{"fromVoid", &luna_wrapper_ork_Timer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_Timer::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_Timer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::Timer >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Timer >::enumValues[] = {
	{0,0}
};


