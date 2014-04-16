#ifndef _WRAPPERS_WRAPPER_PROLAND_EDITORHANDLER_H_
#define _WRAPPERS_WRAPPER_PROLAND_EDITORHANDLER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/edit/proland/edit/EditorHandler.h>

class wrapper_proland_EditorHandler : public proland::EditorHandler, public luna_wrapper_base {

public:
		

	~wrapper_proland_EditorHandler() {
		logDEBUG3("Calling delete function for wrapper proland_EditorHandler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::EditorHandler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_EditorHandler(lua_State* L, lua_Table* dum, float relativeRadius) 
		: proland::EditorHandler(relativeRadius), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::EditorHandler*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::EditorHandler*)this);
			return (_obj.callFunction<void>());
		}

		return EditorHandler::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::EditorHandler*)this);
			return (_obj.callFunction<const char*>());
		}

		return EditorHandler::toString();
	};

	// void ork::EventHandler::reshape(int x, int y)
	void reshape(int x, int y) {
		if(_obj.pushFunction("reshape")) {
			_obj.pushArg((proland::EditorHandler*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return EditorHandler::reshape(x, y);
	};

	// void ork::EventHandler::idle(bool damaged)
	void idle(bool damaged) {
		if(_obj.pushFunction("idle")) {
			_obj.pushArg((proland::EditorHandler*)this);
			_obj.pushArg(damaged);
			return (_obj.callFunction<void>());
		}

		return EditorHandler::idle(damaged);
	};

	// bool ork::EventHandler::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	bool keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("keyTyped")) {
			_obj.pushArg((proland::EditorHandler*)this);
			_obj.pushArg(c);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return EditorHandler::keyTyped(c, m, x, y);
	};

	// bool ork::EventHandler::keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	bool keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("keyReleased")) {
			_obj.pushArg((proland::EditorHandler*)this);
			_obj.pushArg(c);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return EditorHandler::keyReleased(c, m, x, y);
	};

	// bool ork::EventHandler::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	bool specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("specialKey")) {
			_obj.pushArg((proland::EditorHandler*)this);
			_obj.pushArg((int)k);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return EditorHandler::specialKey(k, m, x, y);
	};

	// bool ork::EventHandler::specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	bool specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("specialKeyReleased")) {
			_obj.pushArg((proland::EditorHandler*)this);
			_obj.pushArg((int)k);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return EditorHandler::specialKeyReleased(k, m, x, y);
	};

	// void proland::EditorHandler::redisplay(double t, double dt)
	void redisplay(double t, double dt) {
		if(_obj.pushFunction("redisplay")) {
			_obj.pushArg((proland::EditorHandler*)this);
			_obj.pushArg(t);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return EditorHandler::redisplay(t, dt);
	};

	// bool proland::EditorHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)
	bool mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("mouseClick")) {
			_obj.pushArg((proland::EditorHandler*)this);
			_obj.pushArg((int)b);
			_obj.pushArg((int)s);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return EditorHandler::mouseClick(b, s, m, x, y);
	};

	// bool proland::EditorHandler::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)
	bool mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("mouseWheel")) {
			_obj.pushArg((proland::EditorHandler*)this);
			_obj.pushArg((int)b);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return EditorHandler::mouseWheel(b, m, x, y);
	};

	// bool proland::EditorHandler::mouseMotion(int x, int y)
	bool mouseMotion(int x, int y) {
		if(_obj.pushFunction("mouseMotion")) {
			_obj.pushArg((proland::EditorHandler*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return EditorHandler::mouseMotion(x, y);
	};

	// bool proland::EditorHandler::mousePassiveMotion(int x, int y)
	bool mousePassiveMotion(int x, int y) {
		if(_obj.pushFunction("mousePassiveMotion")) {
			_obj.pushArg((proland::EditorHandler*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return EditorHandler::mousePassiveMotion(x, y);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

