#ifndef _WRAPPERS_WRAPPER_ORK_SETTARGETTASK_H_
#define _WRAPPERS_WRAPPER_ORK_SETTARGETTASK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/scenegraph/SetTargetTask.h>

class wrapper_ork_SetTargetTask : public ork::SetTargetTask, public luna_wrapper_base {

public:
		

	~wrapper_ork_SetTargetTask() {
		logDEBUG3("Calling delete function for wrapper ork_SetTargetTask");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::SetTargetTask*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_SetTargetTask(lua_State* L, lua_Table* dum, const std::vector< ork::SetTargetTask::Target > & targets, bool autoResize) 
		: ork::SetTargetTask(targets, autoResize), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::SetTargetTask*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_ork_SetTargetTask(lua_State* L, lua_Table* dum) 
		: ork::SetTargetTask(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::SetTargetTask*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::SetTargetTask*)this);
			return (_obj.callFunction<void>());
		}

		return SetTargetTask::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::SetTargetTask*)this);
			return (_obj.callFunction<const char*>());
		}

		return SetTargetTask::toString();
	};

	// ork::ptr< ork::Task > ork::SetTargetTask::getTask(ork::ptr< ork::Object > context)
	ork::ptr< ork::Task > getTask(ork::ptr< ork::Object > context) {
		if(_obj.pushFunction("getTask")) {
			_obj.pushArg((ork::SetTargetTask*)this);
			_obj.pushArg((ork::Object*)context.get());
			return _obj.callFunction< ork::Task* >();
		}

		return SetTargetTask::getTask(context);
	};


	// Protected non-virtual methods:
	// void ork::SetTargetTask::init(const std::vector< ork::SetTargetTask::Target > & targets, bool autoResize)
	void public_init(const std::vector< ork::SetTargetTask::Target > & targets, bool autoResize) {
		return ork::SetTargetTask::init(targets, autoResize);
	};

	// void ork::SetTargetTask::swap(ork::ptr< ork::SetTargetTask > t)
	void public_swap(ork::ptr< ork::SetTargetTask > t) {
		return ork::SetTargetTask::swap(t);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,35026174) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SetTargetTask >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void ork::SetTargetTask::public_init(const std::vector< ork::SetTargetTask::Target > & targets, bool autoResize)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetTargetTask::public_init(const std::vector< ork::SetTargetTask::Target > & targets, bool autoResize) function, expected prototype:\nvoid ork::SetTargetTask::public_init(const std::vector< ork::SetTargetTask::Target > & targets, bool autoResize)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const std::vector< ork::SetTargetTask::Target >* targets_ptr=(Luna< std::vector< ork::SetTargetTask::Target > >::check(L,2));
		if( !targets_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg targets in ork::SetTargetTask::public_init function");
		}
		const std::vector< ork::SetTargetTask::Target > & targets=*targets_ptr;
		bool autoResize=(bool)(lua_toboolean(L,3)==1);

		wrapper_ork_SetTargetTask* self=Luna< ork::Object >::checkSubType< wrapper_ork_SetTargetTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetTargetTask::public_init(const std::vector< ork::SetTargetTask::Target > &, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(targets, autoResize);

		return 0;
	}

	// void ork::SetTargetTask::public_swap(ork::ptr< ork::SetTargetTask > t)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetTargetTask::public_swap(ork::ptr< ork::SetTargetTask > t) function, expected prototype:\nvoid ork::SetTargetTask::public_swap(ork::ptr< ork::SetTargetTask > t)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SetTargetTask > t = Luna< ork::Object >::checkSubType< ork::SetTargetTask >(L,2);

		wrapper_ork_SetTargetTask* self=Luna< ork::Object >::checkSubType< wrapper_ork_SetTargetTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetTargetTask::public_swap(ork::ptr< ork::SetTargetTask >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
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

