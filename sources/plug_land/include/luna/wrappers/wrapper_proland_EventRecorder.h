#ifndef _WRAPPERS_WRAPPER_PROLAND_EVENTRECORDER_H_
#define _WRAPPERS_WRAPPER_PROLAND_EVENTRECORDER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/core/proland/ui/EventRecorder.h>

class wrapper_proland_EventRecorder : public proland::EventRecorder, public luna_wrapper_base {

public:
		

	~wrapper_proland_EventRecorder() {
		logDEBUG3("Calling delete function for wrapper proland_EventRecorder");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::EventRecorder*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_EventRecorder(lua_State* L, lua_Table* dum, const char * eventFile, bool autoSave, const char * frames, ork::ptr< ork::Program > cursorProg, ork::ptr< ork::Texture2D > cursor, ork::ptr< ork::EventHandler > next) 
		: proland::EventRecorder(eventFile, autoSave, frames, cursorProg, cursor, next), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::EventRecorder*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_EventRecorder(lua_State* L, lua_Table* dum) 
		: proland::EventRecorder(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::EventRecorder*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::EventRecorder*)this);
			return (_obj.callFunction<void>());
		}

		return EventRecorder::doRelease();
	};

	// proland::Recordable * proland::EventRecorder::getRecorded()
	proland::Recordable * getRecorded() {
		THROW_IF(!_obj.pushFunction("getRecorded"),"No implementation for abstract function proland::EventRecorder::getRecorded");
		_obj.pushArg((proland::EventRecorder*)this);
		return (_obj.callFunction<proland::Recordable*>());
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::EventRecorder*)this);
			return (_obj.callFunction<const char*>());
		}

		return EventRecorder::toString();
	};

	// void proland::EventRecorder::redisplay(double t, double dt)
	void redisplay(double t, double dt) {
		if(_obj.pushFunction("redisplay")) {
			_obj.pushArg((proland::EventRecorder*)this);
			_obj.pushArg(t);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return EventRecorder::redisplay(t, dt);
	};

	// void proland::EventRecorder::reshape(int x, int y)
	void reshape(int x, int y) {
		if(_obj.pushFunction("reshape")) {
			_obj.pushArg((proland::EventRecorder*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return EventRecorder::reshape(x, y);
	};

	// void proland::EventRecorder::idle(bool damaged)
	void idle(bool damaged) {
		if(_obj.pushFunction("idle")) {
			_obj.pushArg((proland::EventRecorder*)this);
			_obj.pushArg(damaged);
			return (_obj.callFunction<void>());
		}

		return EventRecorder::idle(damaged);
	};

	// bool proland::EventRecorder::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)
	bool mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("mouseClick")) {
			_obj.pushArg((proland::EventRecorder*)this);
			_obj.pushArg((int)b);
			_obj.pushArg((int)s);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return EventRecorder::mouseClick(b, s, m, x, y);
	};

	// bool proland::EventRecorder::mouseMotion(int x, int y)
	bool mouseMotion(int x, int y) {
		if(_obj.pushFunction("mouseMotion")) {
			_obj.pushArg((proland::EventRecorder*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return EventRecorder::mouseMotion(x, y);
	};

	// bool proland::EventRecorder::mousePassiveMotion(int x, int y)
	bool mousePassiveMotion(int x, int y) {
		if(_obj.pushFunction("mousePassiveMotion")) {
			_obj.pushArg((proland::EventRecorder*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return EventRecorder::mousePassiveMotion(x, y);
	};

	// bool proland::EventRecorder::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)
	bool mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("mouseWheel")) {
			_obj.pushArg((proland::EventRecorder*)this);
			_obj.pushArg((int)b);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return EventRecorder::mouseWheel(b, m, x, y);
	};

	// bool proland::EventRecorder::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	bool keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("keyTyped")) {
			_obj.pushArg((proland::EventRecorder*)this);
			_obj.pushArg(c);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return EventRecorder::keyTyped(c, m, x, y);
	};

	// bool proland::EventRecorder::keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	bool keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("keyReleased")) {
			_obj.pushArg((proland::EventRecorder*)this);
			_obj.pushArg(c);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return EventRecorder::keyReleased(c, m, x, y);
	};

	// bool proland::EventRecorder::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	bool specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("specialKey")) {
			_obj.pushArg((proland::EventRecorder*)this);
			_obj.pushArg((int)k);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return EventRecorder::specialKey(k, m, x, y);
	};

	// bool proland::EventRecorder::specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	bool specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) {
		if(_obj.pushFunction("specialKeyReleased")) {
			_obj.pushArg((proland::EventRecorder*)this);
			_obj.pushArg((int)k);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return EventRecorder::specialKeyReleased(k, m, x, y);
	};


	// Protected non-virtual methods:
	// void proland::EventRecorder::init(const char * eventFile, bool autoSave, const char * frames, ork::ptr< ork::Program > cursorProg, ork::ptr< ork::Texture2D > cursor, ork::ptr< ork::EventHandler > next)
	void public_init(const char * eventFile, bool autoSave, const char * frames, ork::ptr< ork::Program > cursorProg, ork::ptr< ork::Texture2D > cursor, ork::ptr< ork::EventHandler > next) {
		return proland::EventRecorder::init(eventFile, autoSave, frames, cursorProg, cursor, next);
	};

	// void proland::EventRecorder::swap(ork::ptr< proland::EventRecorder > eventRecorder)
	void public_swap(ork::ptr< proland::EventRecorder > eventRecorder) {
		return proland::EventRecorder::swap(eventRecorder);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,5) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,6) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::EventHandler >(L,7) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::EventRecorder >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::EventRecorder::public_init(const char * eventFile, bool autoSave, const char * frames, ork::ptr< ork::Program > cursorProg, ork::ptr< ork::Texture2D > cursor, ork::ptr< ork::EventHandler > next)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EventRecorder::public_init(const char * eventFile, bool autoSave, const char * frames, ork::ptr< ork::Program > cursorProg, ork::ptr< ork::Texture2D > cursor, ork::ptr< ork::EventHandler > next) function, expected prototype:\nvoid proland::EventRecorder::public_init(const char * eventFile, bool autoSave, const char * frames, ork::ptr< ork::Program > cursorProg, ork::ptr< ork::Texture2D > cursor, ork::ptr< ork::EventHandler > next)\nClass arguments details:\narg 4 ID = [unknown]\narg 5 ID = [unknown]\narg 6 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * eventFile=(const char *)lua_tostring(L,2);
		bool autoSave=(bool)(lua_toboolean(L,3)==1);
		const char * frames=(const char *)lua_tostring(L,4);
		ork::ptr< ork::Program > cursorProg = Luna< ork::Object >::checkSubType< ork::Program >(L,5);
		ork::ptr< ork::Texture2D > cursor = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,6);
		ork::ptr< ork::EventHandler > next = Luna< ork::Object >::checkSubType< ork::EventHandler >(L,7);

		wrapper_proland_EventRecorder* self=Luna< ork::Object >::checkSubType< wrapper_proland_EventRecorder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EventRecorder::public_init(const char *, bool, const char *, ork::ptr< ork::Program >, ork::ptr< ork::Texture2D >, ork::ptr< ork::EventHandler >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(eventFile, autoSave, frames, cursorProg, cursor, next);

		return 0;
	}

	// void proland::EventRecorder::public_swap(ork::ptr< proland::EventRecorder > eventRecorder)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EventRecorder::public_swap(ork::ptr< proland::EventRecorder > eventRecorder) function, expected prototype:\nvoid proland::EventRecorder::public_swap(ork::ptr< proland::EventRecorder > eventRecorder)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::EventRecorder > eventRecorder = Luna< ork::Object >::checkSubType< proland::EventRecorder >(L,2);

		wrapper_proland_EventRecorder* self=Luna< ork::Object >::checkSubType< wrapper_proland_EventRecorder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EventRecorder::public_swap(ork::ptr< proland::EventRecorder >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_swap(eventRecorder);

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

