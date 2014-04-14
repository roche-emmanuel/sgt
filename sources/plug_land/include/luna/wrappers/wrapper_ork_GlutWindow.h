#ifndef _WRAPPERS_WRAPPER_ORK_GLUTWINDOW_H_
#define _WRAPPERS_WRAPPER_ORK_GLUTWINDOW_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/ui/GlutWindow.h>

class wrapper_ork_GlutWindow : public ork::GlutWindow, public luna_wrapper_base {

public:
		

	~wrapper_ork_GlutWindow() {
		logDEBUG3("Calling delete function for wrapper ork_GlutWindow");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::GlutWindow*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_GlutWindow(lua_State* L, lua_Table* dum, const ork::Window::Parameters & params) 
		: ork::GlutWindow(params), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::GlutWindow*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::GlutWindow*)this);
			return (_obj.callFunction<void>());
		}

		return GlutWindow::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::GlutWindow*)this);
			return (_obj.callFunction<const char*>());
		}

		return GlutWindow::toString();
	};

	// bool ork::EventHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)
	bool mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("mouseClick")) {
			_obj.pushArg((ork::GlutWindow*)this);
			_obj.pushArg((int)b);
			_obj.pushArg((int)s);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return GlutWindow::mouseClick(b, s, m, x, y);
	};

	// bool ork::EventHandler::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)
	bool mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("mouseWheel")) {
			_obj.pushArg((ork::GlutWindow*)this);
			_obj.pushArg((int)b);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return GlutWindow::mouseWheel(b, m, x, y);
	};

	// bool ork::EventHandler::mouseMotion(int x, int y)
	bool mouseMotion(int x, int y) {
		if(_obj.pushFunction("mouseMotion")) {
			_obj.pushArg((ork::GlutWindow*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return GlutWindow::mouseMotion(x, y);
	};

	// bool ork::EventHandler::mousePassiveMotion(int x, int y)
	bool mousePassiveMotion(int x, int y) {
		if(_obj.pushFunction("mousePassiveMotion")) {
			_obj.pushArg((ork::GlutWindow*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return GlutWindow::mousePassiveMotion(x, y);
	};

	// bool ork::EventHandler::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	bool keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("keyTyped")) {
			_obj.pushArg((ork::GlutWindow*)this);
			_obj.pushArg(c);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return GlutWindow::keyTyped(c, m, x, y);
	};

	// bool ork::EventHandler::keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	bool keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("keyReleased")) {
			_obj.pushArg((ork::GlutWindow*)this);
			_obj.pushArg(c);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return GlutWindow::keyReleased(c, m, x, y);
	};

	// bool ork::EventHandler::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	bool specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("specialKey")) {
			_obj.pushArg((ork::GlutWindow*)this);
			_obj.pushArg((int)k);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return GlutWindow::specialKey(k, m, x, y);
	};

	// bool ork::EventHandler::specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	bool specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("specialKeyReleased")) {
			_obj.pushArg((ork::GlutWindow*)this);
			_obj.pushArg((int)k);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return GlutWindow::specialKeyReleased(k, m, x, y);
	};

	// int ork::GlutWindow::getWidth() const
	int getWidth() const {
		if(_obj.pushFunction("getWidth")) {
			_obj.pushArg((ork::GlutWindow*)this);
			return (_obj.callFunction<int>());
		}

		return GlutWindow::getWidth();
	};

	// int ork::GlutWindow::getHeight() const
	int getHeight() const {
		if(_obj.pushFunction("getHeight")) {
			_obj.pushArg((ork::GlutWindow*)this);
			return (_obj.callFunction<int>());
		}

		return GlutWindow::getHeight();
	};

	// void ork::GlutWindow::start()
	void start() {
		if(_obj.pushFunction("start")) {
			_obj.pushArg((ork::GlutWindow*)this);
			return (_obj.callFunction<void>());
		}

		return GlutWindow::start();
	};

	// void ork::GlutWindow::redisplay(double t, double dt)
	void redisplay(double t, double dt) {
		if(_obj.pushFunction("redisplay")) {
			_obj.pushArg((ork::GlutWindow*)this);
			_obj.pushArg(t);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return GlutWindow::redisplay(t, dt);
	};

	// void ork::GlutWindow::reshape(int x, int y)
	void reshape(int x, int y) {
		if(_obj.pushFunction("reshape")) {
			_obj.pushArg((ork::GlutWindow*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return GlutWindow::reshape(x, y);
	};

	// void ork::GlutWindow::idle(bool damaged)
	void idle(bool damaged) {
		if(_obj.pushFunction("idle")) {
			_obj.pushArg((ork::GlutWindow*)this);
			_obj.pushArg(damaged);
			return (_obj.callFunction<void>());
		}

		return GlutWindow::idle(damaged);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

