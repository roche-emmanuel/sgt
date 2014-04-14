#ifndef _WRAPPERS_WRAPPER_ORK_LOOPTASK_H_
#define _WRAPPERS_WRAPPER_ORK_LOOPTASK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/scenegraph/LoopTask.h>

class wrapper_ork_LoopTask : public ork::LoopTask, public luna_wrapper_base {

public:
		

	~wrapper_ork_LoopTask() {
		logDEBUG3("Calling delete function for wrapper ork_LoopTask");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::LoopTask*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_LoopTask(lua_State* L, lua_Table* dum, const std::string & var, const std::string & flag, bool cull, bool parallel, ork::ptr< ork::TaskFactory > subtask) 
		: ork::LoopTask(var, flag, cull, parallel, subtask), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::LoopTask*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_ork_LoopTask(lua_State* L, lua_Table* dum) 
		: ork::LoopTask(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::LoopTask*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::LoopTask*)this);
			return (_obj.callFunction<void>());
		}

		return LoopTask::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::LoopTask*)this);
			return (_obj.callFunction<const char*>());
		}

		return LoopTask::toString();
	};

	// ork::ptr< ork::Task > ork::LoopTask::getTask(ork::ptr< ork::Object > context)
	ork::ptr< ork::Task > getTask(ork::ptr< ork::Object > context) {
		if(_obj.pushFunction("getTask")) {
			_obj.pushArg((ork::LoopTask*)this);
			_obj.pushArg((ork::Object*)context.get());
			return _obj.callFunction< ork::Task* >();
		}

		return LoopTask::getTask(context);
	};


	// Protected non-virtual methods:
	// void ork::LoopTask::init(const std::string & var, const std::string & flag, bool cull, bool parallel, ork::ptr< ork::TaskFactory > subtask)
	void public_init(const std::string & var, const std::string & flag, bool cull, bool parallel, ork::ptr< ork::TaskFactory > subtask) {
		return ork::LoopTask::init(var, flag, cull, parallel, subtask);
	};

	// void ork::LoopTask::swap(ork::ptr< ork::LoopTask > t)
	void public_swap(ork::ptr< ork::LoopTask > t) {
		return ork::LoopTask::swap(t);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,6,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::TaskFactory >(L,6) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::LoopTask >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void ork::LoopTask::public_init(const std::string & var, const std::string & flag, bool cull, bool parallel, ork::ptr< ork::TaskFactory > subtask)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void ork::LoopTask::public_init(const std::string & var, const std::string & flag, bool cull, bool parallel, ork::ptr< ork::TaskFactory > subtask) function, expected prototype:\nvoid ork::LoopTask::public_init(const std::string & var, const std::string & flag, bool cull, bool parallel, ork::ptr< ork::TaskFactory > subtask)\nClass arguments details:\narg 5 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string var(lua_tostring(L,2),lua_objlen(L,2));
		std::string flag(lua_tostring(L,3),lua_objlen(L,3));
		bool cull=(bool)(lua_toboolean(L,4)==1);
		bool parallel=(bool)(lua_toboolean(L,5)==1);
		ork::ptr< ork::TaskFactory > subtask = Luna< ork::Object >::checkSubType< ork::TaskFactory >(L,6);

		wrapper_ork_LoopTask* self=Luna< ork::Object >::checkSubType< wrapper_ork_LoopTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::LoopTask::public_init(const std::string &, const std::string &, bool, bool, ork::ptr< ork::TaskFactory >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(var, flag, cull, parallel, subtask);

		return 0;
	}

	// void ork::LoopTask::public_swap(ork::ptr< ork::LoopTask > t)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void ork::LoopTask::public_swap(ork::ptr< ork::LoopTask > t) function, expected prototype:\nvoid ork::LoopTask::public_swap(ork::ptr< ork::LoopTask > t)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::LoopTask > t = Luna< ork::Object >::checkSubType< ork::LoopTask >(L,2);

		wrapper_ork_LoopTask* self=Luna< ork::Object >::checkSubType< wrapper_ork_LoopTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::LoopTask::public_swap(ork::ptr< ork::LoopTask >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
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

