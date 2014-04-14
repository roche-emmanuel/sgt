#ifndef _WRAPPERS_WRAPPER_PROLAND_BASICVIEWHANDLER_H_
#define _WRAPPERS_WRAPPER_PROLAND_BASICVIEWHANDLER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/core/proland/ui/BasicViewHandler.h>

class wrapper_proland_BasicViewHandler : public proland::BasicViewHandler, public luna_wrapper_base {

public:
		

	~wrapper_proland_BasicViewHandler() {
		logDEBUG3("Calling delete function for wrapper proland_BasicViewHandler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::BasicViewHandler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_BasicViewHandler(lua_State* L, lua_Table* dum, bool smooth, proland::ViewManager * view, ork::ptr< ork::EventHandler > next) 
		: proland::BasicViewHandler(smooth, view, next), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::BasicViewHandler*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_BasicViewHandler(lua_State* L, lua_Table* dum) 
		: proland::BasicViewHandler(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::BasicViewHandler*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::BasicViewHandler*)this);
			return (_obj.callFunction<void>());
		}

		return BasicViewHandler::doRelease();
	};

	// proland::ViewManager * proland::BasicViewHandler::getViewManager()
	proland::ViewManager * getViewManager() {
		if(_obj.pushFunction("getViewManager")) {
			_obj.pushArg((proland::BasicViewHandler*)this);
			return (_obj.callFunction<proland::ViewManager*>());
		}

		return BasicViewHandler::getViewManager();
	};

	// void proland::BasicViewHandler::updateView(double t, double dt)
	void updateView(double t, double dt) {
		if(_obj.pushFunction("updateView")) {
			_obj.pushArg((proland::BasicViewHandler*)this);
			_obj.pushArg(t);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return BasicViewHandler::updateView(t, dt);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::BasicViewHandler*)this);
			return (_obj.callFunction<const char*>());
		}

		return BasicViewHandler::toString();
	};

	// void proland::BasicViewHandler::redisplay(double t, double dt)
	void redisplay(double t, double dt) {
		if(_obj.pushFunction("redisplay")) {
			_obj.pushArg((proland::BasicViewHandler*)this);
			_obj.pushArg(t);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return BasicViewHandler::redisplay(t, dt);
	};

	// void proland::BasicViewHandler::reshape(int x, int y)
	void reshape(int x, int y) {
		if(_obj.pushFunction("reshape")) {
			_obj.pushArg((proland::BasicViewHandler*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return BasicViewHandler::reshape(x, y);
	};

	// void proland::BasicViewHandler::idle(bool damaged)
	void idle(bool damaged) {
		if(_obj.pushFunction("idle")) {
			_obj.pushArg((proland::BasicViewHandler*)this);
			_obj.pushArg(damaged);
			return (_obj.callFunction<void>());
		}

		return BasicViewHandler::idle(damaged);
	};

	// bool proland::BasicViewHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)
	bool mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("mouseClick")) {
			_obj.pushArg((proland::BasicViewHandler*)this);
			_obj.pushArg((int)b);
			_obj.pushArg((int)s);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return BasicViewHandler::mouseClick(b, s, m, x, y);
	};

	// bool proland::BasicViewHandler::mouseMotion(int x, int y)
	bool mouseMotion(int x, int y) {
		if(_obj.pushFunction("mouseMotion")) {
			_obj.pushArg((proland::BasicViewHandler*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return BasicViewHandler::mouseMotion(x, y);
	};

	// bool proland::BasicViewHandler::mousePassiveMotion(int x, int y)
	bool mousePassiveMotion(int x, int y) {
		if(_obj.pushFunction("mousePassiveMotion")) {
			_obj.pushArg((proland::BasicViewHandler*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return BasicViewHandler::mousePassiveMotion(x, y);
	};

	// bool proland::BasicViewHandler::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)
	bool mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("mouseWheel")) {
			_obj.pushArg((proland::BasicViewHandler*)this);
			_obj.pushArg((int)b);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return BasicViewHandler::mouseWheel(b, m, x, y);
	};

	// bool proland::BasicViewHandler::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	bool keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("keyTyped")) {
			_obj.pushArg((proland::BasicViewHandler*)this);
			_obj.pushArg(c);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return BasicViewHandler::keyTyped(c, m, x, y);
	};

	// bool proland::BasicViewHandler::keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	bool keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("keyReleased")) {
			_obj.pushArg((proland::BasicViewHandler*)this);
			_obj.pushArg(c);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return BasicViewHandler::keyReleased(c, m, x, y);
	};

	// bool proland::BasicViewHandler::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	bool specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("specialKey")) {
			_obj.pushArg((proland::BasicViewHandler*)this);
			_obj.pushArg((int)k);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return BasicViewHandler::specialKey(k, m, x, y);
	};

	// bool proland::BasicViewHandler::specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	bool specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("specialKeyReleased")) {
			_obj.pushArg((proland::BasicViewHandler*)this);
			_obj.pushArg((int)k);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return BasicViewHandler::specialKeyReleased(k, m, x, y);
	};

	// void proland::BasicViewHandler::goToPosition(const proland::BasicViewHandler::Position & p)
	void goToPosition(const proland::BasicViewHandler::Position & p) {
		if(_obj.pushFunction("goToPosition")) {
			_obj.pushArg((proland::BasicViewHandler*)this);
			_obj.pushArg(&p);
			return (_obj.callFunction<void>());
		}

		return BasicViewHandler::goToPosition(p);
	};


	// Protected non-virtual methods:
	// void proland::BasicViewHandler::init(bool smooth, proland::ViewManager * view, ork::ptr< ork::EventHandler > next)
	void public_init(bool smooth, proland::ViewManager * view, ork::ptr< ork::EventHandler > next) {
		return proland::BasicViewHandler::init(smooth, view, next);
	};

	// void proland::BasicViewHandler::swap(ork::ptr< proland::BasicViewHandler > o)
	void public_swap(ork::ptr< proland::BasicViewHandler > o) {
		return proland::BasicViewHandler::swap(o);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,2915545)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::EventHandler >(L,4) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::BasicViewHandler::public_init(bool smooth, proland::ViewManager * view, ork::ptr< ork::EventHandler > next)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::BasicViewHandler::public_init(bool smooth, proland::ViewManager * view, ork::ptr< ork::EventHandler > next) function, expected prototype:\nvoid proland::BasicViewHandler::public_init(bool smooth, proland::ViewManager * view, ork::ptr< ork::EventHandler > next)\nClass arguments details:\narg 2 ID = 2915545\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		bool smooth=(bool)(lua_toboolean(L,2)==1);
		proland::ViewManager* view=(Luna< proland::ViewManager >::check(L,3));
		ork::ptr< ork::EventHandler > next = Luna< ork::Object >::checkSubType< ork::EventHandler >(L,4);

		wrapper_proland_BasicViewHandler* self=Luna< ork::Object >::checkSubType< wrapper_proland_BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::BasicViewHandler::public_init(bool, proland::ViewManager *, ork::ptr< ork::EventHandler >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(smooth, view, next);

		return 0;
	}

	// void proland::BasicViewHandler::public_swap(ork::ptr< proland::BasicViewHandler > o)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::BasicViewHandler::public_swap(ork::ptr< proland::BasicViewHandler > o) function, expected prototype:\nvoid proland::BasicViewHandler::public_swap(ork::ptr< proland::BasicViewHandler > o)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::BasicViewHandler > o = Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,2);

		wrapper_proland_BasicViewHandler* self=Luna< ork::Object >::checkSubType< wrapper_proland_BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::BasicViewHandler::public_swap(ork::ptr< proland::BasicViewHandler >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_swap(o);

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

