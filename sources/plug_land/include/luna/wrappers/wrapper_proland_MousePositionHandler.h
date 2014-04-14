#ifndef _WRAPPERS_WRAPPER_PROLAND_MOUSEPOSITIONHANDLER_H_
#define _WRAPPERS_WRAPPER_PROLAND_MOUSEPOSITIONHANDLER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/core/proland/ui/MousePositionHandler.h>

class wrapper_proland_MousePositionHandler : public proland::MousePositionHandler, public luna_wrapper_base {

public:
		

	~wrapper_proland_MousePositionHandler() {
		logDEBUG3("Calling delete function for wrapper proland_MousePositionHandler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::MousePositionHandler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_MousePositionHandler(lua_State* L, lua_Table* dum, map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > terrains, ork::ptr< ork::EventHandler > next) 
		: proland::MousePositionHandler(terrains, next), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::MousePositionHandler*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_MousePositionHandler(lua_State* L, lua_Table* dum) 
		: proland::MousePositionHandler(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::MousePositionHandler*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::MousePositionHandler*)this);
			return (_obj.callFunction<void>());
		}

		return MousePositionHandler::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::MousePositionHandler*)this);
			return (_obj.callFunction<const char*>());
		}

		return MousePositionHandler::toString();
	};

	// void proland::MousePositionHandler::redisplay(double t, double dt)
	void redisplay(double t, double dt) {
		if(_obj.pushFunction("redisplay")) {
			_obj.pushArg((proland::MousePositionHandler*)this);
			_obj.pushArg(t);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return MousePositionHandler::redisplay(t, dt);
	};

	// void proland::MousePositionHandler::reshape(int x, int y)
	void reshape(int x, int y) {
		if(_obj.pushFunction("reshape")) {
			_obj.pushArg((proland::MousePositionHandler*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return MousePositionHandler::reshape(x, y);
	};

	// void proland::MousePositionHandler::idle(bool damaged)
	void idle(bool damaged) {
		if(_obj.pushFunction("idle")) {
			_obj.pushArg((proland::MousePositionHandler*)this);
			_obj.pushArg(damaged);
			return (_obj.callFunction<void>());
		}

		return MousePositionHandler::idle(damaged);
	};

	// bool proland::MousePositionHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)
	bool mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("mouseClick")) {
			_obj.pushArg((proland::MousePositionHandler*)this);
			_obj.pushArg((int)b);
			_obj.pushArg((int)s);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return MousePositionHandler::mouseClick(b, s, m, x, y);
	};

	// bool proland::MousePositionHandler::mouseMotion(int x, int y)
	bool mouseMotion(int x, int y) {
		if(_obj.pushFunction("mouseMotion")) {
			_obj.pushArg((proland::MousePositionHandler*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return MousePositionHandler::mouseMotion(x, y);
	};

	// bool proland::MousePositionHandler::mousePassiveMotion(int x, int y)
	bool mousePassiveMotion(int x, int y) {
		if(_obj.pushFunction("mousePassiveMotion")) {
			_obj.pushArg((proland::MousePositionHandler*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return MousePositionHandler::mousePassiveMotion(x, y);
	};

	// bool proland::MousePositionHandler::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)
	bool mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("mouseWheel")) {
			_obj.pushArg((proland::MousePositionHandler*)this);
			_obj.pushArg((int)b);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return MousePositionHandler::mouseWheel(b, m, x, y);
	};

	// bool proland::MousePositionHandler::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	bool keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("keyTyped")) {
			_obj.pushArg((proland::MousePositionHandler*)this);
			_obj.pushArg(c);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return MousePositionHandler::keyTyped(c, m, x, y);
	};

	// bool proland::MousePositionHandler::keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	bool keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("keyReleased")) {
			_obj.pushArg((proland::MousePositionHandler*)this);
			_obj.pushArg(c);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return MousePositionHandler::keyReleased(c, m, x, y);
	};

	// bool proland::MousePositionHandler::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	bool specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("specialKey")) {
			_obj.pushArg((proland::MousePositionHandler*)this);
			_obj.pushArg((int)k);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return MousePositionHandler::specialKey(k, m, x, y);
	};

	// bool proland::MousePositionHandler::specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	bool specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("specialKeyReleased")) {
			_obj.pushArg((proland::MousePositionHandler*)this);
			_obj.pushArg((int)k);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return MousePositionHandler::specialKeyReleased(k, m, x, y);
	};


	// Protected non-virtual methods:
	// void proland::MousePositionHandler::init(map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > terrains, ork::ptr< ork::EventHandler > next)
	void public_init(map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > terrains, ork::ptr< ork::EventHandler > next) {
		return proland::MousePositionHandler::init(terrains, next);
	};

	// void proland::MousePositionHandler::swap(ork::ptr< proland::MousePositionHandler > mousePositionHandler)
	void public_swap(ork::ptr< proland::MousePositionHandler > mousePositionHandler) {
		return proland::MousePositionHandler::swap(mousePositionHandler);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9346150) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::EventHandler >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::MousePositionHandler::public_init(map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > terrains, ork::ptr< ork::EventHandler > next)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MousePositionHandler::public_init(map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > terrains, ork::ptr< ork::EventHandler > next) function, expected prototype:\nvoid proland::MousePositionHandler::public_init(map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > terrains, ork::ptr< ork::EventHandler > next)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > >* terrains_ptr=(Luna< map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > >::check(L,2));
		if( !terrains_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg terrains in proland::MousePositionHandler::public_init function");
		}
		map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > terrains=*terrains_ptr;
		ork::ptr< ork::EventHandler > next = Luna< ork::Object >::checkSubType< ork::EventHandler >(L,3);

		wrapper_proland_MousePositionHandler* self=Luna< ork::Object >::checkSubType< wrapper_proland_MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MousePositionHandler::public_init(map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > >, ork::ptr< ork::EventHandler >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(terrains, next);

		return 0;
	}

	// void proland::MousePositionHandler::public_swap(ork::ptr< proland::MousePositionHandler > mousePositionHandler)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MousePositionHandler::public_swap(ork::ptr< proland::MousePositionHandler > mousePositionHandler) function, expected prototype:\nvoid proland::MousePositionHandler::public_swap(ork::ptr< proland::MousePositionHandler > mousePositionHandler)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::MousePositionHandler > mousePositionHandler = Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,2);

		wrapper_proland_MousePositionHandler* self=Luna< ork::Object >::checkSubType< wrapper_proland_MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MousePositionHandler::public_swap(ork::ptr< proland::MousePositionHandler >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_swap(mousePositionHandler);

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

