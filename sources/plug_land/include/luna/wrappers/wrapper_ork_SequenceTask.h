#ifndef _WRAPPERS_WRAPPER_ORK_SEQUENCETASK_H_
#define _WRAPPERS_WRAPPER_ORK_SEQUENCETASK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/scenegraph/SequenceTask.h>

class wrapper_ork_SequenceTask : public ork::SequenceTask, public luna_wrapper_base {

public:
		

	~wrapper_ork_SequenceTask() {
		logDEBUG3("Calling delete function for wrapper ork_SequenceTask");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::SequenceTask*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_SequenceTask(lua_State* L, lua_Table* dum, const std::vector< ork::ptr< ork::TaskFactory > > & subtasks) 
		: ork::SequenceTask(subtasks), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::SequenceTask*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_ork_SequenceTask(lua_State* L, lua_Table* dum) 
		: ork::SequenceTask(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::SequenceTask*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::SequenceTask*)this);
			return (_obj.callFunction<void>());
		}

		return SequenceTask::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::SequenceTask*)this);
			return (_obj.callFunction<const char*>());
		}

		return SequenceTask::toString();
	};

	// ork::ptr< ork::Task > ork::SequenceTask::getTask(ork::ptr< ork::Object > context)
	ork::ptr< ork::Task > getTask(ork::ptr< ork::Object > context) {
		if(_obj.pushFunction("getTask")) {
			_obj.pushArg((ork::SequenceTask*)this);
			_obj.pushArg((ork::Object*)context.get());
			return _obj.callFunction< ork::Task* >();
		}

		return SequenceTask::getTask(context);
	};


	// Protected non-virtual methods:
	// void ork::SequenceTask::init(const std::vector< ork::ptr< ork::TaskFactory > > & subtasks)
	void public_init(const std::vector< ork::ptr< ork::TaskFactory > > & subtasks) {
		return ork::SequenceTask::init(subtasks);
	};

	// void ork::SequenceTask::swap(ork::ptr< ork::SequenceTask > t)
	void public_swap(ork::ptr< ork::SequenceTask > t) {
		return ork::SequenceTask::swap(t);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41801658) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SequenceTask >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void ork::SequenceTask::public_init(const std::vector< ork::ptr< ork::TaskFactory > > & subtasks)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SequenceTask::public_init(const std::vector< ork::ptr< ork::TaskFactory > > & subtasks) function, expected prototype:\nvoid ork::SequenceTask::public_init(const std::vector< ork::ptr< ork::TaskFactory > > & subtasks)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const std::vector< ork::ptr< ork::TaskFactory > >* subtasks_ptr=(Luna< std::vector< ork::ptr< ork::TaskFactory > > >::check(L,2));
		if( !subtasks_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg subtasks in ork::SequenceTask::public_init function");
		}
		const std::vector< ork::ptr< ork::TaskFactory > > & subtasks=*subtasks_ptr;

		wrapper_ork_SequenceTask* self=Luna< ork::Object >::checkSubType< wrapper_ork_SequenceTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SequenceTask::public_init(const std::vector< ork::ptr< ork::TaskFactory > > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(subtasks);

		return 0;
	}

	// void ork::SequenceTask::public_swap(ork::ptr< ork::SequenceTask > t)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SequenceTask::public_swap(ork::ptr< ork::SequenceTask > t) function, expected prototype:\nvoid ork::SequenceTask::public_swap(ork::ptr< ork::SequenceTask > t)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SequenceTask > t = Luna< ork::Object >::checkSubType< ork::SequenceTask >(L,2);

		wrapper_ork_SequenceTask* self=Luna< ork::Object >::checkSubType< wrapper_ork_SequenceTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SequenceTask::public_swap(ork::ptr< ork::SequenceTask >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
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

