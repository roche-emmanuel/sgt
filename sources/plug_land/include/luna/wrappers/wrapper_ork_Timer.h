#ifndef _WRAPPERS_WRAPPER_ORK_TIMER_H_
#define _WRAPPERS_WRAPPER_ORK_TIMER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/core/Timer.h>

class wrapper_ork_Timer : public ork::Timer, public luna_wrapper_base {

public:
		

	~wrapper_ork_Timer() {
		logDEBUG3("Calling delete function for wrapper ork_Timer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::Timer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_Timer(lua_State* L, lua_Table* dum) 
		: ork::Timer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Timer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// double ork::Timer::start()
	double start() {
		if(_obj.pushFunction("start")) {
			_obj.pushArg((ork::Timer*)this);
			return (_obj.callFunction<double>());
		}

		return Timer::start();
	};

	// double ork::Timer::end()
	double end() {
		if(_obj.pushFunction("end")) {
			_obj.pushArg((ork::Timer*)this);
			return (_obj.callFunction<double>());
		}

		return Timer::end();
	};

	// double ork::Timer::getTime()
	double getTime() {
		if(_obj.pushFunction("getTime")) {
			_obj.pushArg((ork::Timer*)this);
			return (_obj.callFunction<double>());
		}

		return Timer::getTime();
	};

	// double ork::Timer::getAvgTime()
	double getAvgTime() {
		if(_obj.pushFunction("getAvgTime")) {
			_obj.pushArg((ork::Timer*)this);
			return (_obj.callFunction<double>());
		}

		return Timer::getAvgTime();
	};

	// void ork::Timer::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			_obj.pushArg((ork::Timer*)this);
			return (_obj.callFunction<void>());
		}

		return Timer::reset();
	};


	// Protected non-virtual methods:
	// double ork::Timer::getCurrentTime()
	double public_getCurrentTime() {
		return ork::Timer::getCurrentTime();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_getCurrentTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// double ork::Timer::public_getCurrentTime()
	static int _bind_public_getCurrentTime(lua_State *L) {
		if (!_lg_typecheck_public_getCurrentTime(L)) {
			luaL_error(L, "luna typecheck failed in double ork::Timer::public_getCurrentTime() function, expected prototype:\ndouble ork::Timer::public_getCurrentTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_ork_Timer* self=Luna< ork::Timer >::checkSubType< wrapper_ork_Timer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::Timer::public_getCurrentTime(). Got : '%s'\n%s",typeid(Luna< ork::Timer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->public_getCurrentTime();
		lua_pushnumber(L,lret);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"getCurrentTime",_bind_public_getCurrentTime},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

