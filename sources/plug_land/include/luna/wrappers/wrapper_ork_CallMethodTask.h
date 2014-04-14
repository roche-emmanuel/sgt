#ifndef _WRAPPERS_WRAPPER_ORK_CALLMETHODTASK_H_
#define _WRAPPERS_WRAPPER_ORK_CALLMETHODTASK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/scenegraph/CallMethodTask.h>

class wrapper_ork_CallMethodTask : public ork::CallMethodTask, public luna_wrapper_base {

public:
		

	~wrapper_ork_CallMethodTask() {
		logDEBUG3("Calling delete function for wrapper ork_CallMethodTask");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::CallMethodTask*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_CallMethodTask(lua_State* L, lua_Table* dum) 
		: ork::CallMethodTask(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::CallMethodTask*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::CallMethodTask*)this);
			return (_obj.callFunction<void>());
		}

		return CallMethodTask::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::CallMethodTask*)this);
			return (_obj.callFunction<const char*>());
		}

		return CallMethodTask::toString();
	};

	// ork::ptr< ork::Task > ork::CallMethodTask::getTask(ork::ptr< ork::Object > context)
	ork::ptr< ork::Task > getTask(ork::ptr< ork::Object > context) {
		if(_obj.pushFunction("getTask")) {
			_obj.pushArg((ork::CallMethodTask*)this);
			_obj.pushArg((ork::Object*)context.get());
			return _obj.callFunction< ork::Task* >();
		}

		return CallMethodTask::getTask(context);
	};


	// Protected non-virtual methods:
	// void ork::CallMethodTask::swap(ork::ptr< ork::CallMethodTask > t)
	void public_swap(ork::ptr< ork::CallMethodTask > t) {
		return ork::CallMethodTask::swap(t);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::CallMethodTask >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void ork::CallMethodTask::public_swap(ork::ptr< ork::CallMethodTask > t)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void ork::CallMethodTask::public_swap(ork::ptr< ork::CallMethodTask > t) function, expected prototype:\nvoid ork::CallMethodTask::public_swap(ork::ptr< ork::CallMethodTask > t)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::CallMethodTask > t = Luna< ork::Object >::checkSubType< ork::CallMethodTask >(L,2);

		wrapper_ork_CallMethodTask* self=Luna< ork::Object >::checkSubType< wrapper_ork_CallMethodTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::CallMethodTask::public_swap(ork::ptr< ork::CallMethodTask >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
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

