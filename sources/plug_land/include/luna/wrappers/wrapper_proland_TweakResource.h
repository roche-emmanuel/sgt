#ifndef _WRAPPERS_WRAPPER_PROLAND_TWEAKRESOURCE_H_
#define _WRAPPERS_WRAPPER_PROLAND_TWEAKRESOURCE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/ui/twbar/TweakResource.h>

class wrapper_proland_TweakResource : public proland::TweakResource, public luna_wrapper_base {

public:
		

	~wrapper_proland_TweakResource() {
		logDEBUG3("Calling delete function for wrapper proland_TweakResource");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::TweakResource*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_TweakResource(lua_State* L, lua_Table* dum, std::string name, ork::ptr< ork::ResourceManager > manager, const TiXmlElement * e) 
		: proland::TweakResource(name, manager, e), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TweakResource*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_TweakResource(lua_State* L, lua_Table* dum) 
		: proland::TweakResource(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TweakResource*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::TweakResource*)this);
			return (_obj.callFunction<void>());
		}

		return TweakResource::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::TweakResource*)this);
			return (_obj.callFunction<const char*>());
		}

		return TweakResource::toString();
	};

	// void proland::TweakBarHandler::setActive(bool active)
	void setActive(bool active) {
		if(_obj.pushFunction("setActive")) {
			_obj.pushArg((proland::TweakResource*)this);
			_obj.pushArg(active);
			return (_obj.callFunction<void>());
		}

		return TweakResource::setActive(active);
	};

	// void proland::TweakBarHandler::redisplay(double t, double dt, bool & needUpdate)
	void redisplay(double t, double dt, bool & needUpdate) {
		if(_obj.pushFunction("redisplay")) {
			_obj.pushArg((proland::TweakResource*)this);
			_obj.pushArg(t);
			_obj.pushArg(dt);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<void>());
		}

		return TweakResource::redisplay(t, dt, needUpdate);
	};

	// void proland::TweakBarHandler::reshape(int x, int y, bool & needUpdate)
	void reshape(int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("reshape")) {
			_obj.pushArg((proland::TweakResource*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<void>());
		}

		return TweakResource::reshape(x, y, needUpdate);
	};

	// void proland::TweakBarHandler::idle(bool damaged, bool & needUpdate)
	void idle(bool damaged, bool & needUpdate) {
		if(_obj.pushFunction("idle")) {
			_obj.pushArg((proland::TweakResource*)this);
			_obj.pushArg(damaged);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<void>());
		}

		return TweakResource::idle(damaged, needUpdate);
	};

	// bool proland::TweakBarHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	bool mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("mouseClick")) {
			_obj.pushArg((proland::TweakResource*)this);
			_obj.pushArg((int)b);
			_obj.pushArg((int)s);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakResource::mouseClick(b, s, m, x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	bool mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("mouseWheel")) {
			_obj.pushArg((proland::TweakResource*)this);
			_obj.pushArg((int)b);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakResource::mouseWheel(b, m, x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::mouseMotion(int x, int y, bool & needUpdate)
	bool mouseMotion(int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("mouseMotion")) {
			_obj.pushArg((proland::TweakResource*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakResource::mouseMotion(x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::mousePassiveMotion(int x, int y, bool & needUpdate)
	bool mousePassiveMotion(int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("mousePassiveMotion")) {
			_obj.pushArg((proland::TweakResource*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakResource::mousePassiveMotion(x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	bool keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("keyTyped")) {
			_obj.pushArg((proland::TweakResource*)this);
			_obj.pushArg(c);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakResource::keyTyped(c, m, x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	bool keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("keyReleased")) {
			_obj.pushArg((proland::TweakResource*)this);
			_obj.pushArg(c);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakResource::keyReleased(c, m, x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	bool specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("specialKey")) {
			_obj.pushArg((proland::TweakResource*)this);
			_obj.pushArg((int)k);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakResource::specialKey(k, m, x, y, needUpdate);
	};

	// bool proland::TweakBarHandler::specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	bool specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) {
		if(_obj.pushFunction("specialKeyReleased")) {
			_obj.pushArg((proland::TweakResource*)this);
			_obj.pushArg((int)k);
			_obj.pushArg((int)m);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(needUpdate);
			return (_obj.callFunction<bool>());
		}

		return TweakResource::specialKeyReleased(k, m, x, y, needUpdate);
	};

	// void proland::TweakResource::updateBar(TwBar * bar)
	void updateBar(TwBar * bar) {
		if(_obj.pushFunction("updateBar")) {
			_obj.pushArg((proland::TweakResource*)this);
			_obj.pushArg(bar);
			return (_obj.callFunction<void>());
		}

		return TweakResource::updateBar(bar);
	};


	// Protected non-virtual methods:
	// void proland::TweakResource::init(std::string name, ork::ptr< ork::ResourceManager > manager, const TiXmlElement * e)
	void public_init(std::string name, ork::ptr< ork::ResourceManager > manager, const TiXmlElement * e) {
		return proland::TweakResource::init(name, manager, e);
	};

	// void proland::TweakResource::swap(ork::ptr< proland::TweakResource > p)
	void public_swap(ork::ptr< proland::TweakResource > p) {
		return proland::TweakResource::swap(p);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,3) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,89852901)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TweakResource >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::TweakResource::public_init(std::string name, ork::ptr< ork::ResourceManager > manager, const TiXmlElement * e)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakResource::public_init(std::string name, ork::ptr< ork::ResourceManager > manager, const TiXmlElement * e) function, expected prototype:\nvoid proland::TweakResource::public_init(std::string name, ork::ptr< ork::ResourceManager > manager, const TiXmlElement * e)\nClass arguments details:\narg 2 ID = [unknown]\narg 3 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		ork::ptr< ork::ResourceManager > manager = Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,3);
		const TiXmlElement* e=(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,4));

		wrapper_proland_TweakResource* self=Luna< ork::Object >::checkSubType< wrapper_proland_TweakResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakResource::public_init(std::string, ork::ptr< ork::ResourceManager >, const TiXmlElement *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(name, manager, e);

		return 0;
	}

	// void proland::TweakResource::public_swap(ork::ptr< proland::TweakResource > p)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakResource::public_swap(ork::ptr< proland::TweakResource > p) function, expected prototype:\nvoid proland::TweakResource::public_swap(ork::ptr< proland::TweakResource > p)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TweakResource > p = Luna< ork::Object >::checkSubType< proland::TweakResource >(L,2);

		wrapper_proland_TweakResource* self=Luna< ork::Object >::checkSubType< wrapper_proland_TweakResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakResource::public_swap(ork::ptr< proland::TweakResource >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_swap(p);

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

