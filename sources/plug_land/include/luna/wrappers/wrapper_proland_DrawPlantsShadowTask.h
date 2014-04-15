#ifndef _WRAPPERS_WRAPPER_PROLAND_DRAWPLANTSSHADOWTASK_H_
#define _WRAPPERS_WRAPPER_PROLAND_DRAWPLANTSSHADOWTASK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/forest/proland/plants/DrawPlantsShadowTask.h>

class wrapper_proland_DrawPlantsShadowTask : public proland::DrawPlantsShadowTask, public luna_wrapper_base {

public:
		

	~wrapper_proland_DrawPlantsShadowTask() {
		logDEBUG3("Calling delete function for wrapper proland_DrawPlantsShadowTask");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::DrawPlantsShadowTask*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_DrawPlantsShadowTask(lua_State* L, lua_Table* dum, const string & terrain, ork::ptr< proland::Plants > plants) 
		: proland::DrawPlantsShadowTask(terrain, plants), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::DrawPlantsShadowTask*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_DrawPlantsShadowTask(lua_State* L, lua_Table* dum) 
		: proland::DrawPlantsShadowTask(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::DrawPlantsShadowTask*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::DrawPlantsShadowTask*)this);
			return (_obj.callFunction<void>());
		}

		return DrawPlantsShadowTask::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::DrawPlantsShadowTask*)this);
			return (_obj.callFunction<const char*>());
		}

		return DrawPlantsShadowTask::toString();
	};

	// ork::ptr< ork::Task > proland::DrawPlantsShadowTask::getTask(ork::ptr< ork::Object > context)
	ork::ptr< ork::Task > getTask(ork::ptr< ork::Object > context) {
		if(_obj.pushFunction("getTask")) {
			_obj.pushArg((proland::DrawPlantsShadowTask*)this);
			_obj.pushArg((ork::Object*)context.get());
			return _obj.callFunction< ork::Task* >();
		}

		return DrawPlantsShadowTask::getTask(context);
	};


	// Protected non-virtual methods:
	// void proland::DrawPlantsShadowTask::init(const string & terrain, ork::ptr< proland::Plants > plants)
	void public_init(const string & terrain, ork::ptr< proland::Plants > plants) {
		return proland::DrawPlantsShadowTask::init(terrain, plants);
	};

	// void proland::DrawPlantsShadowTask::swap(ork::ptr< proland::DrawPlantsShadowTask > t)
	void public_swap(ork::ptr< proland::DrawPlantsShadowTask > t) {
		return proland::DrawPlantsShadowTask::swap(t);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::Plants >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::DrawPlantsShadowTask >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::DrawPlantsShadowTask::public_init(const string & terrain, ork::ptr< proland::Plants > plants)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawPlantsShadowTask::public_init(const string & terrain, ork::ptr< proland::Plants > plants) function, expected prototype:\nvoid proland::DrawPlantsShadowTask::public_init(const string & terrain, ork::ptr< proland::Plants > plants)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string terrain(lua_tostring(L,2),lua_objlen(L,2));
		ork::ptr< proland::Plants > plants = Luna< ork::Object >::checkSubType< proland::Plants >(L,3);

		wrapper_proland_DrawPlantsShadowTask* self=Luna< ork::Object >::checkSubType< wrapper_proland_DrawPlantsShadowTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawPlantsShadowTask::public_init(const string &, ork::ptr< proland::Plants >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(terrain, plants);

		return 0;
	}

	// void proland::DrawPlantsShadowTask::public_swap(ork::ptr< proland::DrawPlantsShadowTask > t)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawPlantsShadowTask::public_swap(ork::ptr< proland::DrawPlantsShadowTask > t) function, expected prototype:\nvoid proland::DrawPlantsShadowTask::public_swap(ork::ptr< proland::DrawPlantsShadowTask > t)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::DrawPlantsShadowTask > t = Luna< ork::Object >::checkSubType< proland::DrawPlantsShadowTask >(L,2);

		wrapper_proland_DrawPlantsShadowTask* self=Luna< ork::Object >::checkSubType< wrapper_proland_DrawPlantsShadowTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawPlantsShadowTask::public_swap(ork::ptr< proland::DrawPlantsShadowTask >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_swap(t);

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

