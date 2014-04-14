#ifndef _WRAPPERS_WRAPPER_PROLAND_UPDATETILESAMPLERSTASK_H_
#define _WRAPPERS_WRAPPER_PROLAND_UPDATETILESAMPLERSTASK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/terrain/UpdateTileSamplersTask.h>

class wrapper_proland_UpdateTileSamplersTask : public proland::UpdateTileSamplersTask, public luna_wrapper_base {

public:
		

	~wrapper_proland_UpdateTileSamplersTask() {
		logDEBUG3("Calling delete function for wrapper proland_UpdateTileSamplersTask");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::UpdateTileSamplersTask*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_UpdateTileSamplersTask(lua_State* L, lua_Table* dum) 
		: proland::UpdateTileSamplersTask(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::UpdateTileSamplersTask*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::UpdateTileSamplersTask*)this);
			return (_obj.callFunction<void>());
		}

		return UpdateTileSamplersTask::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::UpdateTileSamplersTask*)this);
			return (_obj.callFunction<const char*>());
		}

		return UpdateTileSamplersTask::toString();
	};

	// ork::ptr< ork::Task > proland::UpdateTileSamplersTask::getTask(ork::ptr< ork::Object > context)
	ork::ptr< ork::Task > getTask(ork::ptr< ork::Object > context) {
		if(_obj.pushFunction("getTask")) {
			_obj.pushArg((proland::UpdateTileSamplersTask*)this);
			_obj.pushArg((ork::Object*)context.get());
			return _obj.callFunction< ork::Task* >();
		}

		return UpdateTileSamplersTask::getTask(context);
	};


	// Protected non-virtual methods:
	// void proland::UpdateTileSamplersTask::swap(ork::ptr< proland::UpdateTileSamplersTask > t)
	void public_swap(ork::ptr< proland::UpdateTileSamplersTask > t) {
		return proland::UpdateTileSamplersTask::swap(t);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::UpdateTileSamplersTask >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::UpdateTileSamplersTask::public_swap(ork::ptr< proland::UpdateTileSamplersTask > t)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::UpdateTileSamplersTask::public_swap(ork::ptr< proland::UpdateTileSamplersTask > t) function, expected prototype:\nvoid proland::UpdateTileSamplersTask::public_swap(ork::ptr< proland::UpdateTileSamplersTask > t)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::UpdateTileSamplersTask > t = Luna< ork::Object >::checkSubType< proland::UpdateTileSamplersTask >(L,2);

		wrapper_proland_UpdateTileSamplersTask* self=Luna< ork::Object >::checkSubType< wrapper_proland_UpdateTileSamplersTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::UpdateTileSamplersTask::public_swap(ork::ptr< proland::UpdateTileSamplersTask >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
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

