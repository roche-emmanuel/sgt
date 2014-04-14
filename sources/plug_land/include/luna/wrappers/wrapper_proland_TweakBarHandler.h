#ifndef _WRAPPERS_WRAPPER_PROLAND_TWEAKBARHANDLER_H_
#define _WRAPPERS_WRAPPER_PROLAND_TWEAKBARHANDLER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/core/proland/ui/twbar/TweakBarHandler.h>

class wrapper_proland_TweakBarHandler : public proland::TweakBarHandler, public luna_wrapper_base {

public:
		

	~wrapper_proland_TweakBarHandler() {
		logDEBUG3("Calling delete function for wrapper proland_TweakBarHandler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::TweakBarHandler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_TweakBarHandler(lua_State* L, lua_Table* dum, const char * name, ork::ptr< ork::EventHandler > eventHandler, bool active) 
		: proland::TweakBarHandler(name, eventHandler, active), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TweakBarHandler*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_TweakBarHandler(lua_State* L, lua_Table* dum) 
		: proland::TweakBarHandler(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TweakBarHandler*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::TweakBarHandler*)this);
			return (_obj.callFunction<void>());
		}

		return TweakBarHandler::doRelease();
	};

	// void proland::TweakBarHandler::init(const char * name, ork::ptr< ork::EventHandler > eventHandler, bool active)
	void init(const char * name, ork::ptr< ork::EventHandler > eventHandler, bool active) {
		if(_obj.pushFunction("init")) {
			_obj.pushArg((proland::TweakBarHandler*)this);
			_obj.pushArg(name);
			_obj.pushArg((ork::EventHandler*)eventHandler.get());
			_obj.pushArg(active);
			return (_obj.callFunction<void>());
		}

		return TweakBarHandler::init(name, eventHandler, active);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::TweakBarHandler*)this);
			return (_obj.callFunction<const char*>());
		}

		return TweakBarHandler::toString();
	};

	// void proland::TweakBarHandler::setActive(bool active)
	void setActive(bool active) {
		if(_obj.pushFunction("setActive")) {
			_obj.pushArg((proland::TweakBarHandler*)this);
			_obj.pushArg(active);
			return (_obj.callFunction<void>());
		}

		return TweakBarHandler::setActive(active);
	};

	// void proland::TweakBarHandler::redisplay(double t, double dt, bool & needUpdate)
	void redisplay(double t, double dt, bool & needUpdate) {
		if(_obj.pushFunction("redisplay")) {
			_obj.pushArg((proland::TweakBarHandler*)this);
			_obj.pushArg(t);
			_obj.pushArg(dt);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<void>());
		}

		return TweakBarHandler::redisplay(t, dt, needUpdate);
	};

	// void proland::TweakBarHandler::reshape(int x, int y, bool & needUpdate)
	void reshape(int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("reshape")) {
			_obj.pushArg((proland::TweakBarHandler*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<void>());
		}

		return TweakBarHandler::reshape(x, y, needUpdate);
	};

	// void proland::TweakBarHandler::idle(bool damaged, bool & needUpdate)
	void idle(bool damaged, bool & needUpdate) {
		if(_obj.pushFunction("idle")) {
			_obj.pushArg((proland::TweakBarHandler*)this);
			_obj.pushArg(damaged);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<void>());
		}

		return TweakBarHandler::idle(damaged, needUpdate);
	};

	// bool proland::TweakBarHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	bool mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("mouseClick")) {
			_obj.pushArg((proland::TweakBarHandler*)this);
			_obj.pushArg((int)b);
			_obj.pushArg((int)s);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakBarHandler::mouseClick(b, s, m, x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	bool mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("mouseWheel")) {
			_obj.pushArg((proland::TweakBarHandler*)this);
			_obj.pushArg((int)b);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakBarHandler::mouseWheel(b, m, x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::mouseMotion(int x, int y, bool & needUpdate)
	bool mouseMotion(int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("mouseMotion")) {
			_obj.pushArg((proland::TweakBarHandler*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakBarHandler::mouseMotion(x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::mousePassiveMotion(int x, int y, bool & needUpdate)
	bool mousePassiveMotion(int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("mousePassiveMotion")) {
			_obj.pushArg((proland::TweakBarHandler*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakBarHandler::mousePassiveMotion(x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	bool keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("keyTyped")) {
			_obj.pushArg((proland::TweakBarHandler*)this);
			_obj.pushArg(c);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakBarHandler::keyTyped(c, m, x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	bool keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("keyReleased")) {
			_obj.pushArg((proland::TweakBarHandler*)this);
			_obj.pushArg(c);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakBarHandler::keyReleased(c, m, x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	bool specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("specialKey")) {
			_obj.pushArg((proland::TweakBarHandler*)this);
			_obj.pushArg((int)k);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakBarHandler::specialKey(k, m, x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	bool specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("specialKeyReleased")) {
			_obj.pushArg((proland::TweakBarHandler*)this);
			_obj.pushArg((int)k);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakBarHandler::specialKeyReleased(k, m, x, y, needUpdate);
	};

	// void proland::TweakBarHandler::updateBar(TwBar * bar)
	void updateBar(TwBar * bar) {
		THROW_IF(!_obj.pushFunction("updateBar"),"No implementation for abstract function proland::TweakBarHandler::updateBar");
		_obj.pushArg((proland::TweakBarHandler*)this);
		_obj.pushArg(bar);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:
	// void proland::TweakBarHandler::swap(ork::ptr< proland::TweakBarHandler > t)
	void public_swap(ork::ptr< proland::TweakBarHandler > t) {
		return proland::TweakBarHandler::swap(t);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TweakBarHandler >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::TweakBarHandler::public_swap(ork::ptr< proland::TweakBarHandler > t)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakBarHandler::public_swap(ork::ptr< proland::TweakBarHandler > t) function, expected prototype:\nvoid proland::TweakBarHandler::public_swap(ork::ptr< proland::TweakBarHandler > t)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TweakBarHandler > t = Luna< ork::Object >::checkSubType< proland::TweakBarHandler >(L,2);

		wrapper_proland_TweakBarHandler* self=Luna< ork::Object >::checkSubType< wrapper_proland_TweakBarHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakBarHandler::public_swap(ork::ptr< proland::TweakBarHandler >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_swap(t);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"swap",_bind_public_swap},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

