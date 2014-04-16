#ifndef _WRAPPERS_WRAPPER_PROLAND_TWEAKGRAPHLAYER_H_
#define _WRAPPERS_WRAPPER_PROLAND_TWEAKGRAPHLAYER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/edit/proland/ui/twbar/TweakGraphLayer.h>

class wrapper_proland_TweakGraphLayer : public proland::TweakGraphLayer, public luna_wrapper_base {

public:
		

	~wrapper_proland_TweakGraphLayer() {
		logDEBUG3("Calling delete function for wrapper proland_TweakGraphLayer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::TweakGraphLayer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_TweakGraphLayer(lua_State* L, lua_Table* dum, bool active) 
		: proland::TweakGraphLayer(active), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TweakGraphLayer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_TweakGraphLayer(lua_State* L, lua_Table* dum) 
		: proland::TweakGraphLayer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TweakGraphLayer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::TweakGraphLayer*)this);
			return (_obj.callFunction<void>());
		}

		return TweakGraphLayer::doRelease();
	};

	// void proland::TweakGraphLayer::init(bool active)
	void init(bool active) {
		if(_obj.pushFunction("init")) {
			_obj.pushArg((proland::TweakGraphLayer*)this);
			_obj.pushArg(active);
			return (_obj.callFunction<void>());
		}

		return TweakGraphLayer::init(active);
	};

	// void proland::TweakGraphLayer::updateBar(TwBar * bar)
	void updateBar(TwBar * bar) {
		if(_obj.pushFunction("updateBar")) {
			_obj.pushArg((proland::TweakGraphLayer*)this);
			_obj.pushArg(bar);
			return (_obj.callFunction<void>());
		}

		return TweakGraphLayer::updateBar(bar);
	};

	// void proland::TweakGraphLayer::createTweakBar()
	void createTweakBar() {
		if(_obj.pushFunction("createTweakBar")) {
			_obj.pushArg((proland::TweakGraphLayer*)this);
			return (_obj.callFunction<void>());
		}

		return TweakGraphLayer::createTweakBar();
	};

	// void proland::TweakGraphLayer::displayCurveInfo(TwBar * b, proland::EditGraphOrthoLayer::SelectionData * curveData)
	void displayCurveInfo(TwBar * b, proland::EditGraphOrthoLayer::SelectionData * curveData) {
		if(_obj.pushFunction("displayCurveInfo")) {
			_obj.pushArg((proland::TweakGraphLayer*)this);
			_obj.pushArg(b);
			_obj.pushArg(curveData);
			return (_obj.callFunction<void>());
		}

		return TweakGraphLayer::displayCurveInfo(b, curveData);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::TweakGraphLayer*)this);
			return (_obj.callFunction<const char*>());
		}

		return TweakGraphLayer::toString();
	};

	// void proland::TweakBarHandler::reshape(int x, int y, bool & needUpdate)
	void reshape(int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("reshape")) {
			_obj.pushArg((proland::TweakGraphLayer*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<void>());
		}

		return TweakGraphLayer::reshape(x, y, needUpdate);
	};

	// void proland::TweakBarHandler::idle(bool damaged, bool & needUpdate)
	void idle(bool damaged, bool & needUpdate) {
		if(_obj.pushFunction("idle")) {
			_obj.pushArg((proland::TweakGraphLayer*)this);
			_obj.pushArg(damaged);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<void>());
		}

		return TweakGraphLayer::idle(damaged, needUpdate);
	};

	// bool proland::TweakBarHandler::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	bool mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("mouseWheel")) {
			_obj.pushArg((proland::TweakGraphLayer*)this);
			_obj.pushArg((int)b);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakGraphLayer::mouseWheel(b, m, x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::mouseMotion(int x, int y, bool & needUpdate)
	bool mouseMotion(int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("mouseMotion")) {
			_obj.pushArg((proland::TweakGraphLayer*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakGraphLayer::mouseMotion(x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::mousePassiveMotion(int x, int y, bool & needUpdate)
	bool mousePassiveMotion(int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("mousePassiveMotion")) {
			_obj.pushArg((proland::TweakGraphLayer*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakGraphLayer::mousePassiveMotion(x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	bool keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("keyTyped")) {
			_obj.pushArg((proland::TweakGraphLayer*)this);
			_obj.pushArg(c);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakGraphLayer::keyTyped(c, m, x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	bool keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("keyReleased")) {
			_obj.pushArg((proland::TweakGraphLayer*)this);
			_obj.pushArg(c);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakGraphLayer::keyReleased(c, m, x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	bool specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("specialKey")) {
			_obj.pushArg((proland::TweakGraphLayer*)this);
			_obj.pushArg((int)k);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakGraphLayer::specialKey(k, m, x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	bool specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("specialKeyReleased")) {
			_obj.pushArg((proland::TweakGraphLayer*)this);
			_obj.pushArg((int)k);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakGraphLayer::specialKeyReleased(k, m, x, y, needUpdate);
	};

	// void proland::TweakGraphLayer::setActive(bool active)
	void setActive(bool active) {
		if(_obj.pushFunction("setActive")) {
			_obj.pushArg((proland::TweakGraphLayer*)this);
			_obj.pushArg(active);
			return (_obj.callFunction<void>());
		}

		return TweakGraphLayer::setActive(active);
	};

	// void proland::TweakGraphLayer::redisplay(double t, double dt, bool & needUpdate)
	void redisplay(double t, double dt, bool & needUpdate) {
		if(_obj.pushFunction("redisplay")) {
			_obj.pushArg((proland::TweakGraphLayer*)this);
			_obj.pushArg(t);
			_obj.pushArg(dt);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<void>());
		}

		return TweakGraphLayer::redisplay(t, dt, needUpdate);
	};

	// bool proland::TweakGraphLayer::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	bool mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("mouseClick")) {
			_obj.pushArg((proland::TweakGraphLayer*)this);
			_obj.pushArg((int)b);
			_obj.pushArg((int)s);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakGraphLayer::mouseClick(b, s, m, x, y, needUpdate);
	};


	// Protected non-virtual methods:
	// void proland::TweakGraphLayer::closeMenu()
	void public_closeMenu() {
		return proland::TweakGraphLayer::closeMenu();
	};

	// void proland::TweakGraphLayer::displayMenu(int mousePosX, int mousePosY)
	void public_displayMenu(int mousePosX, int mousePosY) {
		return proland::TweakGraphLayer::displayMenu(mousePosX, mousePosY);
	};

	// void proland::TweakBarHandler::swap(ork::ptr< proland::TweakBarHandler > t)
	void public_swap(ork::ptr< proland::TweakBarHandler > t) {
		return proland::TweakBarHandler::swap(t);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_closeMenu(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_displayMenu(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TweakBarHandler >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::TweakGraphLayer::public_closeMenu()
	static int _bind_public_closeMenu(lua_State *L) {
		if (!_lg_typecheck_public_closeMenu(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakGraphLayer::public_closeMenu() function, expected prototype:\nvoid proland::TweakGraphLayer::public_closeMenu()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_proland_TweakGraphLayer* self=Luna< ork::Object >::checkSubType< wrapper_proland_TweakGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakGraphLayer::public_closeMenu(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_closeMenu();

		return 0;
	}

	// void proland::TweakGraphLayer::public_displayMenu(int mousePosX, int mousePosY)
	static int _bind_public_displayMenu(lua_State *L) {
		if (!_lg_typecheck_public_displayMenu(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakGraphLayer::public_displayMenu(int mousePosX, int mousePosY) function, expected prototype:\nvoid proland::TweakGraphLayer::public_displayMenu(int mousePosX, int mousePosY)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int mousePosX=(int)lua_tointeger(L,2);
		int mousePosY=(int)lua_tointeger(L,3);

		wrapper_proland_TweakGraphLayer* self=Luna< ork::Object >::checkSubType< wrapper_proland_TweakGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakGraphLayer::public_displayMenu(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_displayMenu(mousePosX, mousePosY);

		return 0;
	}

	// void proland::TweakBarHandler::public_swap(ork::ptr< proland::TweakBarHandler > t)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakBarHandler::public_swap(ork::ptr< proland::TweakBarHandler > t) function, expected prototype:\nvoid proland::TweakBarHandler::public_swap(ork::ptr< proland::TweakBarHandler > t)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TweakBarHandler > t = Luna< ork::Object >::checkSubType< proland::TweakBarHandler >(L,2);

		wrapper_proland_TweakGraphLayer* self=Luna< ork::Object >::checkSubType< wrapper_proland_TweakGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakBarHandler::public_swap(ork::ptr< proland::TweakBarHandler >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_swap(t);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"closeMenu",_bind_public_closeMenu},
		{"displayMenu",_bind_public_displayMenu},
		{"swap",_bind_public_swap},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

