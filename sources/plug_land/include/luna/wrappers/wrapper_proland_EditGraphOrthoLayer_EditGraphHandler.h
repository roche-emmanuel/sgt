#ifndef _WRAPPERS_WRAPPER_PROLAND_EDITGRAPHORTHOLAYER_EDITGRAPHHANDLER_H_
#define _WRAPPERS_WRAPPER_PROLAND_EDITGRAPHORTHOLAYER_EDITGRAPHHANDLER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/edit/proland/edit/EditGraphOrthoLayer.h>

class wrapper_proland_EditGraphOrthoLayer_EditGraphHandler : public proland::EditGraphOrthoLayer::EditGraphHandler, public luna_wrapper_base {

public:
		

	~wrapper_proland_EditGraphOrthoLayer_EditGraphHandler() {
		logDEBUG3("Calling delete function for wrapper proland_EditGraphOrthoLayer_EditGraphHandler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::EditGraphOrthoLayer::EditGraphHandler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_EditGraphOrthoLayer_EditGraphHandler(lua_State* L, lua_Table* dum) 
		: proland::EditGraphOrthoLayer::EditGraphHandler(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::EditGraphOrthoLayer::EditGraphHandler*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_EditGraphOrthoLayer_EditGraphHandler(lua_State* L, lua_Table* dum, proland::EditGraphOrthoLayer * e, ork::ptr< ork::ResourceManager > r, string t) 
		: proland::EditGraphOrthoLayer::EditGraphHandler(e, r, t), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::EditGraphOrthoLayer::EditGraphHandler*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::EditGraphOrthoLayer::EditGraphHandler*)this);
			return (_obj.callFunction<void>());
		}

		return EditGraphHandler::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::EditGraphOrthoLayer::EditGraphHandler*)this);
			return (_obj.callFunction<const char*>());
		}

		return EditGraphHandler::toString();
	};

	// void ork::EventHandler::reshape(int x, int y)
	void reshape(int x, int y) {
		if(_obj.pushFunction("reshape")) {
			_obj.pushArg((proland::EditGraphOrthoLayer::EditGraphHandler*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return EditGraphHandler::reshape(x, y);
	};

	// void ork::EventHandler::idle(bool damaged)
	void idle(bool damaged) {
		if(_obj.pushFunction("idle")) {
			_obj.pushArg((proland::EditGraphOrthoLayer::EditGraphHandler*)this);
			_obj.pushArg(damaged);
			return (_obj.callFunction<void>());
		}

		return EditGraphHandler::idle(damaged);
	};

	// bool ork::EventHandler::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)
	bool mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("mouseWheel")) {
			_obj.pushArg((proland::EditGraphOrthoLayer::EditGraphHandler*)this);
			_obj.pushArg((int)b);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return EditGraphHandler::mouseWheel(b, m, x, y);
	};

	// bool ork::EventHandler::mousePassiveMotion(int x, int y)
	bool mousePassiveMotion(int x, int y) {
		if(_obj.pushFunction("mousePassiveMotion")) {
			_obj.pushArg((proland::EditGraphOrthoLayer::EditGraphHandler*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return EditGraphHandler::mousePassiveMotion(x, y);
	};

	// bool ork::EventHandler::keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	bool keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("keyReleased")) {
			_obj.pushArg((proland::EditGraphOrthoLayer::EditGraphHandler*)this);
			_obj.pushArg(c);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return EditGraphHandler::keyReleased(c, m, x, y);
	};

	// bool ork::EventHandler::specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	bool specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("specialKeyReleased")) {
			_obj.pushArg((proland::EditGraphOrthoLayer::EditGraphHandler*)this);
			_obj.pushArg((int)k);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return EditGraphHandler::specialKeyReleased(k, m, x, y);
	};

	// void proland::EditGraphOrthoLayer::EditGraphHandler::redisplay(double t, double dt)
	void redisplay(double t, double dt) {
		if(_obj.pushFunction("redisplay")) {
			_obj.pushArg((proland::EditGraphOrthoLayer::EditGraphHandler*)this);
			_obj.pushArg(t);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return EditGraphHandler::redisplay(t, dt);
	};

	// bool proland::EditGraphOrthoLayer::EditGraphHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)
	bool mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("mouseClick")) {
			_obj.pushArg((proland::EditGraphOrthoLayer::EditGraphHandler*)this);
			_obj.pushArg((int)b);
			_obj.pushArg((int)s);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return EditGraphHandler::mouseClick(b, s, m, x, y);
	};

	// bool proland::EditGraphOrthoLayer::EditGraphHandler::mouseMotion(int x, int y)
	bool mouseMotion(int x, int y) {
		if(_obj.pushFunction("mouseMotion")) {
			_obj.pushArg((proland::EditGraphOrthoLayer::EditGraphHandler*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return EditGraphHandler::mouseMotion(x, y);
	};

	// bool proland::EditGraphOrthoLayer::EditGraphHandler::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	bool keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("keyTyped")) {
			_obj.pushArg((proland::EditGraphOrthoLayer::EditGraphHandler*)this);
			_obj.pushArg(c);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return EditGraphHandler::keyTyped(c, m, x, y);
	};

	// bool proland::EditGraphOrthoLayer::EditGraphHandler::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	bool specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("specialKey")) {
			_obj.pushArg((proland::EditGraphOrthoLayer::EditGraphHandler*)this);
			_obj.pushArg((int)k);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return EditGraphHandler::specialKey(k, m, x, y);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

