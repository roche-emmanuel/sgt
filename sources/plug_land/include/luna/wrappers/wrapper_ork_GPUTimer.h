#ifndef _WRAPPERS_WRAPPER_ORK_GPUTIMER_H_
#define _WRAPPERS_WRAPPER_ORK_GPUTIMER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/core/GPUTimer.h>

class wrapper_ork_GPUTimer : public ork::GPUTimer, public luna_wrapper_base {

public:
		

	~wrapper_ork_GPUTimer() {
		logDEBUG3("Calling delete function for wrapper ork_GPUTimer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::GPUTimer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_GPUTimer(lua_State* L, lua_Table* dum) 
		: ork::GPUTimer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::GPUTimer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void ork::Timer::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			_obj.pushArg((ork::GPUTimer*)this);
			return (_obj.callFunction<void>());
		}

		return GPUTimer::reset();
	};

	// double ork::GPUTimer::start()
	double start() {
		if(_obj.pushFunction("start")) {
			_obj.pushArg((ork::GPUTimer*)this);
			return (_obj.callFunction<double>());
		}

		return GPUTimer::start();
	};

	// double ork::GPUTimer::end()
	double end() {
		if(_obj.pushFunction("end")) {
			_obj.pushArg((ork::GPUTimer*)this);
			return (_obj.callFunction<double>());
		}

		return GPUTimer::end();
	};

	// double ork::GPUTimer::getTime()
	double getTime() {
		if(_obj.pushFunction("getTime")) {
			_obj.pushArg((ork::GPUTimer*)this);
			return (_obj.callFunction<double>());
		}

		return GPUTimer::getTime();
	};

	// double ork::GPUTimer::getAvgTime()
	double getAvgTime() {
		if(_obj.pushFunction("getAvgTime")) {
			_obj.pushArg((ork::GPUTimer*)this);
			return (_obj.callFunction<double>());
		}

		return GPUTimer::getAvgTime();
	};


	// Protected non-virtual methods:
	// void ork::GPUTimer::getQueryResult()
	void public_getQueryResult() {
		return ork::GPUTimer::getQueryResult();
	};

	// double ork::Timer::getCurrentTime()
	double public_getCurrentTime() {
		return ork::Timer::getCurrentTime();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_getQueryResult(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_getCurrentTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// void ork::GPUTimer::public_getQueryResult()
	static int _bind_public_getQueryResult(lua_State *L) {
		if (!_lg_typecheck_public_getQueryResult(L)) {
			luaL_error(L, "luna typecheck failed in void ork::GPUTimer::public_getQueryResult() function, expected prototype:\nvoid ork::GPUTimer::public_getQueryResult()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_ork_GPUTimer* self=Luna< ork::Timer >::checkSubType< wrapper_ork_GPUTimer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::GPUTimer::public_getQueryResult(). Got : '%s'\n%s",typeid(Luna< ork::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_getQueryResult();

		return 0;
	}

	// double ork::Timer::public_getCurrentTime()
	static int _bind_public_getCurrentTime(lua_State *L) {
		if (!_lg_typecheck_public_getCurrentTime(L)) {
			luaL_error(L, "luna typecheck failed in double ork::Timer::public_getCurrentTime() function, expected prototype:\ndouble ork::Timer::public_getCurrentTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_ork_GPUTimer* self=Luna< ork::Timer >::checkSubType< wrapper_ork_GPUTimer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::Timer::public_getCurrentTime(). Got : '%s'\n%s",typeid(Luna< ork::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->public_getCurrentTime();
		lua_pushnumber(L,lret);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"getQueryResult",_bind_public_getQueryResult},
		{"getCurrentTime",_bind_public_getCurrentTime},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

