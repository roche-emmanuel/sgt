#ifndef _WRAPPERS_WRAPPER_ORK_SETTRANSFORMSTASK_H_
#define _WRAPPERS_WRAPPER_ORK_SETTRANSFORMSTASK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/scenegraph/SetTransformsTask.h>

class wrapper_ork_SetTransformsTask : public ork::SetTransformsTask, public luna_wrapper_base {

public:
		

	~wrapper_ork_SetTransformsTask() {
		logDEBUG3("Calling delete function for wrapper ork_SetTransformsTask");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::SetTransformsTask*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_SetTransformsTask(lua_State* L, lua_Table* dum) 
		: ork::SetTransformsTask(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::SetTransformsTask*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::SetTransformsTask*)this);
			return (_obj.callFunction<void>());
		}

		return SetTransformsTask::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::SetTransformsTask*)this);
			return (_obj.callFunction<const char*>());
		}

		return SetTransformsTask::toString();
	};

	// ork::ptr< ork::Task > ork::SetTransformsTask::getTask(ork::ptr< ork::Object > context)
	ork::ptr< ork::Task > getTask(ork::ptr< ork::Object > context) {
		if(_obj.pushFunction("getTask")) {
			_obj.pushArg((ork::SetTransformsTask*)this);
			_obj.pushArg((ork::Object*)context.get());
			return _obj.callFunction< ork::Task* >();
		}

		return SetTransformsTask::getTask(context);
	};


	// Protected non-virtual methods:
	// void ork::SetTransformsTask::swap(ork::ptr< ork::SetTransformsTask > t)
	void public_swap(ork::ptr< ork::SetTransformsTask > t) {
		return ork::SetTransformsTask::swap(t);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SetTransformsTask >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void ork::SetTransformsTask::public_swap(ork::ptr< ork::SetTransformsTask > t)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetTransformsTask::public_swap(ork::ptr< ork::SetTransformsTask > t) function, expected prototype:\nvoid ork::SetTransformsTask::public_swap(ork::ptr< ork::SetTransformsTask > t)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SetTransformsTask > t = Luna< ork::Object >::checkSubType< ork::SetTransformsTask >(L,2);

		wrapper_ork_SetTransformsTask* self=Luna< ork::Object >::checkSubType< wrapper_ork_SetTransformsTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetTransformsTask::public_swap(ork::ptr< ork::SetTransformsTask >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
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

