#ifndef _WRAPPERS_WRAPPER_PROLAND_TWEAKVIEWHANDLER_H_
#define _WRAPPERS_WRAPPER_PROLAND_TWEAKVIEWHANDLER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/ui/twbar/TweakViewHandler.h>

class wrapper_proland_TweakViewHandler : public proland::TweakViewHandler, public luna_wrapper_base {

public:
		

	~wrapper_proland_TweakViewHandler() {
		logDEBUG3("Calling delete function for wrapper proland_TweakViewHandler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::TweakViewHandler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_TweakViewHandler(lua_State* L, lua_Table* dum, ork::ptr< proland::BasicViewHandler > viewHandler, const std::vector< proland::TweakViewHandler::Position > & views, bool animate, bool active) 
		: proland::TweakViewHandler(viewHandler, views, animate, active), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TweakViewHandler*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_TweakViewHandler(lua_State* L, lua_Table* dum) 
		: proland::TweakViewHandler(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TweakViewHandler*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::TweakViewHandler*)this);
			return (_obj.callFunction<void>());
		}

		return TweakViewHandler::doRelease();
	};

	// void proland::TweakViewHandler::init(ork::ptr< proland::BasicViewHandler > viewHandler, const std::vector< proland::TweakViewHandler::Position > & views, bool animate, bool active)
	void init(ork::ptr< proland::BasicViewHandler > viewHandler, const std::vector< proland::TweakViewHandler::Position > & views, bool animate, bool active) {
		if(_obj.pushFunction("init")) {
			_obj.pushArg((proland::TweakViewHandler*)this);
			_obj.pushArg((proland::BasicViewHandler*)viewHandler.get());
			_obj.pushArg(&views);
			_obj.pushArg(animate);
			_obj.pushArg(active);
			return (_obj.callFunction<void>());
		}

		return TweakViewHandler::init(viewHandler, views, animate, active);
	};

	// void proland::TweakViewHandler::updateBar(TwBar * bar)
	void updateBar(TwBar * bar) {
		if(_obj.pushFunction("updateBar")) {
			_obj.pushArg((proland::TweakViewHandler*)this);
			_obj.pushArg(bar);
			return (_obj.callFunction<void>());
		}

		return TweakViewHandler::updateBar(bar);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::TweakViewHandler*)this);
			return (_obj.callFunction<const char*>());
		}

		return TweakViewHandler::toString();
	};

	// void proland::TweakBarHandler::setActive(bool active)
	void setActive(bool active) {
		if(_obj.pushFunction("setActive")) {
			_obj.pushArg((proland::TweakViewHandler*)this);
			_obj.pushArg(active);
			return (_obj.callFunction<void>());
		}

		return TweakViewHandler::setActive(active);
	};

	// void proland::TweakBarHandler::redisplay(double t, double dt, bool & needUpdate)
	void redisplay(double t, double dt, bool & needUpdate) {
		if(_obj.pushFunction("redisplay")) {
			_obj.pushArg((proland::TweakViewHandler*)this);
			_obj.pushArg(t);
			_obj.pushArg(dt);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<void>());
		}

		return TweakViewHandler::redisplay(t, dt, needUpdate);
	};

	// void proland::TweakBarHandler::reshape(int x, int y, bool & needUpdate)
	void reshape(int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("reshape")) {
			_obj.pushArg((proland::TweakViewHandler*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<void>());
		}

		return TweakViewHandler::reshape(x, y, needUpdate);
	};

	// void proland::TweakBarHandler::idle(bool damaged, bool & needUpdate)
	void idle(bool damaged, bool & needUpdate) {
		if(_obj.pushFunction("idle")) {
			_obj.pushArg((proland::TweakViewHandler*)this);
			_obj.pushArg(damaged);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<void>());
		}

		return TweakViewHandler::idle(damaged, needUpdate);
	};

	// bool proland::TweakBarHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	bool mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("mouseClick")) {
			_obj.pushArg((proland::TweakViewHandler*)this);
			_obj.pushArg((int)b);
			_obj.pushArg((int)s);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakViewHandler::mouseClick(b, s, m, x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	bool mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("mouseWheel")) {
			_obj.pushArg((proland::TweakViewHandler*)this);
			_obj.pushArg((int)b);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakViewHandler::mouseWheel(b, m, x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::mouseMotion(int x, int y, bool & needUpdate)
	bool mouseMotion(int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("mouseMotion")) {
			_obj.pushArg((proland::TweakViewHandler*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakViewHandler::mouseMotion(x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::mousePassiveMotion(int x, int y, bool & needUpdate)
	bool mousePassiveMotion(int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("mousePassiveMotion")) {
			_obj.pushArg((proland::TweakViewHandler*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakViewHandler::mousePassiveMotion(x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	bool keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("keyTyped")) {
			_obj.pushArg((proland::TweakViewHandler*)this);
			_obj.pushArg(c);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakViewHandler::keyTyped(c, m, x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	bool keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("keyReleased")) {
			_obj.pushArg((proland::TweakViewHandler*)this);
			_obj.pushArg(c);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakViewHandler::keyReleased(c, m, x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	bool specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("specialKey")) {
			_obj.pushArg((proland::TweakViewHandler*)this);
			_obj.pushArg((int)k);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakViewHandler::specialKey(k, m, x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	bool specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("specialKeyReleased")) {
			_obj.pushArg((proland::TweakViewHandler*)this);
			_obj.pushArg((int)k);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakViewHandler::specialKeyReleased(k, m, x, y, needUpdate);
	};


	// Protected non-virtual methods:
	// void proland::TweakViewHandler::swap(ork::ptr< proland::TweakViewHandler > o)
	void public_swap(ork::ptr< proland::TweakViewHandler > o) {
		return proland::TweakViewHandler::swap(o);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TweakViewHandler >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::TweakViewHandler::public_swap(ork::ptr< proland::TweakViewHandler > o)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakViewHandler::public_swap(ork::ptr< proland::TweakViewHandler > o) function, expected prototype:\nvoid proland::TweakViewHandler::public_swap(ork::ptr< proland::TweakViewHandler > o)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TweakViewHandler > o = Luna< ork::Object >::checkSubType< proland::TweakViewHandler >(L,2);

		wrapper_proland_TweakViewHandler* self=Luna< ork::Object >::checkSubType< wrapper_proland_TweakViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakViewHandler::public_swap(ork::ptr< proland::TweakViewHandler >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_swap(o);

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

