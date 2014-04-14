#ifndef _WRAPPERS_WRAPPER_ORK_WINDOW_H_
#define _WRAPPERS_WRAPPER_ORK_WINDOW_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/ui/Window.h>

class wrapper_ork_Window : public ork::Window, public luna_wrapper_base {

public:
		

	~wrapper_ork_Window() {
		logDEBUG3("Calling delete function for wrapper ork_Window");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::Window*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_Window(lua_State* L, lua_Table* dum, const ork::Window::Parameters & params) 
		: ork::Window(params), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Window*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::Window*)this);
			return (_obj.callFunction<void>());
		}

		return Window::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::Window*)this);
			return (_obj.callFunction<const char*>());
		}

		return Window::toString();
	};

	// void ork::EventHandler::redisplay(double t, double dt)
	void redisplay(double t, double dt) {
		if(_obj.pushFunction("redisplay")) {
			_obj.pushArg((ork::Window*)this);
			_obj.pushArg(t);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return Window::redisplay(t, dt);
	};

	// void ork::EventHandler::reshape(int x, int y)
	void reshape(int x, int y) {
		if(_obj.pushFunction("reshape")) {
			_obj.pushArg((ork::Window*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return Window::reshape(x, y);
	};

	// void ork::EventHandler::idle(bool damaged)
	void idle(bool damaged) {
		if(_obj.pushFunction("idle")) {
			_obj.pushArg((ork::Window*)this);
			_obj.pushArg(damaged);
			return (_obj.callFunction<void>());
		}

		return Window::idle(damaged);
	};

	// bool ork::EventHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)
	bool mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("mouseClick")) {
			_obj.pushArg((ork::Window*)this);
			_obj.pushArg((int)b);
			_obj.pushArg((int)s);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return Window::mouseClick(b, s, m, x, y);
	};

	// bool ork::EventHandler::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)
	bool mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("mouseWheel")) {
			_obj.pushArg((ork::Window*)this);
			_obj.pushArg((int)b);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return Window::mouseWheel(b, m, x, y);
	};

	// bool ork::EventHandler::mouseMotion(int x, int y)
	bool mouseMotion(int x, int y) {
		if(_obj.pushFunction("mouseMotion")) {
			_obj.pushArg((ork::Window*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return Window::mouseMotion(x, y);
	};

	// bool ork::EventHandler::mousePassiveMotion(int x, int y)
	bool mousePassiveMotion(int x, int y) {
		if(_obj.pushFunction("mousePassiveMotion")) {
			_obj.pushArg((ork::Window*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return Window::mousePassiveMotion(x, y);
	};

	// bool ork::EventHandler::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	bool keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("keyTyped")) {
			_obj.pushArg((ork::Window*)this);
			_obj.pushArg(c);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return Window::keyTyped(c, m, x, y);
	};

	// bool ork::EventHandler::keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	bool keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("keyReleased")) {
			_obj.pushArg((ork::Window*)this);
			_obj.pushArg(c);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return Window::keyReleased(c, m, x, y);
	};

	// bool ork::EventHandler::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	bool specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("specialKey")) {
			_obj.pushArg((ork::Window*)this);
			_obj.pushArg((int)k);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return Window::specialKey(k, m, x, y);
	};

	// bool ork::EventHandler::specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	bool specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("specialKeyReleased")) {
			_obj.pushArg((ork::Window*)this);
			_obj.pushArg((int)k);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return Window::specialKeyReleased(k, m, x, y);
	};

	// int ork::Window::getWidth() const
	int getWidth() const {
		THROW_IF(!_obj.pushFunction("getWidth"),"No implementation for abstract function ork::Window::getWidth");
		_obj.pushArg((ork::Window*)this);
		return (_obj.callFunction<int>());
	};

	// int ork::Window::getHeight() const
	int getHeight() const {
		THROW_IF(!_obj.pushFunction("getHeight"),"No implementation for abstract function ork::Window::getHeight");
		_obj.pushArg((ork::Window*)this);
		return (_obj.callFunction<int>());
	};

	// void ork::Window::start()
	void start() {
		THROW_IF(!_obj.pushFunction("start"),"No implementation for abstract function ork::Window::start");
		_obj.pushArg((ork::Window*)this);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

