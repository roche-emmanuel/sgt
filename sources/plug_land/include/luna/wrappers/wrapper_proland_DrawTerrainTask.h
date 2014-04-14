#ifndef _WRAPPERS_WRAPPER_PROLAND_DRAWTERRAINTASK_H_
#define _WRAPPERS_WRAPPER_PROLAND_DRAWTERRAINTASK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/terrain/DrawTerrainTask.h>

class wrapper_proland_DrawTerrainTask : public proland::DrawTerrainTask, public luna_wrapper_base {

public:
		

	~wrapper_proland_DrawTerrainTask() {
		logDEBUG3("Calling delete function for wrapper proland_DrawTerrainTask");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::DrawTerrainTask*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_DrawTerrainTask(lua_State* L, lua_Table* dum) 
		: proland::DrawTerrainTask(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::DrawTerrainTask*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::DrawTerrainTask*)this);
			return (_obj.callFunction<void>());
		}

		return DrawTerrainTask::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::DrawTerrainTask*)this);
			return (_obj.callFunction<const char*>());
		}

		return DrawTerrainTask::toString();
	};

	// ork::ptr< ork::Task > proland::DrawTerrainTask::getTask(ork::ptr< ork::Object > context)
	ork::ptr< ork::Task > getTask(ork::ptr< ork::Object > context) {
		if(_obj.pushFunction("getTask")) {
			_obj.pushArg((proland::DrawTerrainTask*)this);
			_obj.pushArg((ork::Object*)context.get());
			return _obj.callFunction< ork::Task* >();
		}

		return DrawTerrainTask::getTask(context);
	};


	// Protected non-virtual methods:
	// void proland::DrawTerrainTask::swap(ork::ptr< proland::DrawTerrainTask > t)
	void public_swap(ork::ptr< proland::DrawTerrainTask > t) {
		return proland::DrawTerrainTask::swap(t);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::DrawTerrainTask >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::DrawTerrainTask::public_swap(ork::ptr< proland::DrawTerrainTask > t)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawTerrainTask::public_swap(ork::ptr< proland::DrawTerrainTask > t) function, expected prototype:\nvoid proland::DrawTerrainTask::public_swap(ork::ptr< proland::DrawTerrainTask > t)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::DrawTerrainTask > t = Luna< ork::Object >::checkSubType< proland::DrawTerrainTask >(L,2);

		wrapper_proland_DrawTerrainTask* self=Luna< ork::Object >::checkSubType< wrapper_proland_DrawTerrainTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawTerrainTask::public_swap(ork::ptr< proland::DrawTerrainTask >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_swap(t);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"swap",_bind_public_swap},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

