#ifndef _WRAPPERS_WRAPPER_PROLAND_TWEAKBARMANAGER_H_
#define _WRAPPERS_WRAPPER_PROLAND_TWEAKBARMANAGER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/ui/twbar/TweakBarManager.h>

class wrapper_proland_TweakBarManager : public proland::TweakBarManager, public luna_wrapper_base {

public:
		

	~wrapper_proland_TweakBarManager() {
		logDEBUG3("Calling delete function for wrapper proland_TweakBarManager");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::TweakBarManager*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_TweakBarManager(lua_State* L, lua_Table* dum, vector< proland::TweakBarManager::BarData > bars, bool minimized = true) 
		: proland::TweakBarManager(bars, minimized), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TweakBarManager*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_TweakBarManager(lua_State* L, lua_Table* dum) 
		: proland::TweakBarManager(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TweakBarManager*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::TweakBarManager*)this);
			return (_obj.callFunction<void>());
		}

		return TweakBarManager::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::TweakBarManager*)this);
			return (_obj.callFunction<const char*>());
		}

		return TweakBarManager::toString();
	};

	// void proland::TweakBarManager::redisplay(double t, double dt)
	void redisplay(double t, double dt) {
		if(_obj.pushFunction("redisplay")) {
			_obj.pushArg((proland::TweakBarManager*)this);
			_obj.pushArg(t);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return TweakBarManager::redisplay(t, dt);
	};

	// void proland::TweakBarManager::reshape(int x, int y)
	void reshape(int x, int y) {
		if(_obj.pushFunction("reshape")) {
			_obj.pushArg((proland::TweakBarManager*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return TweakBarManager::reshape(x, y);
	};

	// void proland::TweakBarManager::idle(bool damaged)
	void idle(bool damaged) {
		if(_obj.pushFunction("idle")) {
			_obj.pushArg((proland::TweakBarManager*)this);
			_obj.pushArg(damaged);
			return (_obj.callFunction<void>());
		}

		return TweakBarManager::idle(damaged);
	};

	// bool proland::TweakBarManager::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)
	bool mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("mouseClick")) {
			_obj.pushArg((proland::TweakBarManager*)this);
			_obj.pushArg((int)b);
			_obj.pushArg((int)s);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return TweakBarManager::mouseClick(b, s, m, x, y);
	};

	// bool proland::TweakBarManager::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)
	bool mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("mouseWheel")) {
			_obj.pushArg((proland::TweakBarManager*)this);
			_obj.pushArg((int)b);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return TweakBarManager::mouseWheel(b, m, x, y);
	};

	// bool proland::TweakBarManager::mouseMotion(int x, int y)
	bool mouseMotion(int x, int y) {
		if(_obj.pushFunction("mouseMotion")) {
			_obj.pushArg((proland::TweakBarManager*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return TweakBarManager::mouseMotion(x, y);
	};

	// bool proland::TweakBarManager::mousePassiveMotion(int x, int y)
	bool mousePassiveMotion(int x, int y) {
		if(_obj.pushFunction("mousePassiveMotion")) {
			_obj.pushArg((proland::TweakBarManager*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return TweakBarManager::mousePassiveMotion(x, y);
	};

	// bool proland::TweakBarManager::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	bool keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("keyTyped")) {
			_obj.pushArg((proland::TweakBarManager*)this);
			_obj.pushArg(c);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return TweakBarManager::keyTyped(c, m, x, y);
	};

	// bool proland::TweakBarManager::keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	bool keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("keyReleased")) {
			_obj.pushArg((proland::TweakBarManager*)this);
			_obj.pushArg(c);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return TweakBarManager::keyReleased(c, m, x, y);
	};

	// bool proland::TweakBarManager::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	bool specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("specialKey")) {
			_obj.pushArg((proland::TweakBarManager*)this);
			_obj.pushArg((int)k);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return TweakBarManager::specialKey(k, m, x, y);
	};

	// bool proland::TweakBarManager::specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	bool specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("specialKeyReleased")) {
			_obj.pushArg((proland::TweakBarManager*)this);
			_obj.pushArg((int)k);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return TweakBarManager::specialKeyReleased(k, m, x, y);
	};


	// Protected non-virtual methods:
	// void proland::TweakBarManager::init(vector< proland::TweakBarManager::BarData > bars, bool minimized = true)
	void public_init(vector< proland::TweakBarManager::BarData > bars, bool minimized = true) {
		return proland::TweakBarManager::init(bars, minimized);
	};

	// void proland::TweakBarManager::swap(ork::ptr< proland::TweakBarManager > t)
	void public_swap(ork::ptr< proland::TweakBarManager > t) {
		return proland::TweakBarManager::swap(t);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,40535768) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::TweakBarManager::public_init(vector< proland::TweakBarManager::BarData > bars, bool minimized = true)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakBarManager::public_init(vector< proland::TweakBarManager::BarData > bars, bool minimized = true) function, expected prototype:\nvoid proland::TweakBarManager::public_init(vector< proland::TweakBarManager::BarData > bars, bool minimized = true)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		vector< proland::TweakBarManager::BarData >* bars_ptr=(Luna< vector< proland::TweakBarManager::BarData > >::check(L,2));
		if( !bars_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bars in proland::TweakBarManager::public_init function");
		}
		vector< proland::TweakBarManager::BarData > bars=*bars_ptr;
		bool minimized=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wrapper_proland_TweakBarManager* self=Luna< ork::Object >::checkSubType< wrapper_proland_TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakBarManager::public_init(vector< proland::TweakBarManager::BarData >, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(bars, minimized);

		return 0;
	}

	// void proland::TweakBarManager::public_swap(ork::ptr< proland::TweakBarManager > t)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakBarManager::public_swap(ork::ptr< proland::TweakBarManager > t) function, expected prototype:\nvoid proland::TweakBarManager::public_swap(ork::ptr< proland::TweakBarManager > t)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TweakBarManager > t = Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,2);

		wrapper_proland_TweakBarManager* self=Luna< ork::Object >::checkSubType< wrapper_proland_TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakBarManager::public_swap(ork::ptr< proland::TweakBarManager >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_swap(t);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"init",_bind_public_init},
		{"swap",_bind_public_swap},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

