#ifndef _WRAPPERS_WRAPPER_PROLAND_DRAWTWEAKBARTASK_H_
#define _WRAPPERS_WRAPPER_PROLAND_DRAWTWEAKBARTASK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/ui/twbar/DrawTweakBarTask.h>

class wrapper_proland_DrawTweakBarTask : public proland::DrawTweakBarTask, public luna_wrapper_base {

public:
		

	~wrapper_proland_DrawTweakBarTask() {
		logDEBUG3("Calling delete function for wrapper proland_DrawTweakBarTask");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::DrawTweakBarTask*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_DrawTweakBarTask(lua_State* L, lua_Table* dum) 
		: proland::DrawTweakBarTask(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::DrawTweakBarTask*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::DrawTweakBarTask*)this);
			return (_obj.callFunction<void>());
		}

		return DrawTweakBarTask::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::DrawTweakBarTask*)this);
			return (_obj.callFunction<const char*>());
		}

		return DrawTweakBarTask::toString();
	};

	// ork::ptr< ork::Task > proland::DrawTweakBarTask::getTask(ork::ptr< ork::Object > context)
	ork::ptr< ork::Task > getTask(ork::ptr< ork::Object > context) {
		if(_obj.pushFunction("getTask")) {
			_obj.pushArg((proland::DrawTweakBarTask*)this);
			_obj.pushArg((ork::Object*)context.get());
			return _obj.callFunction< ork::Task* >();
		}

		return DrawTweakBarTask::getTask(context);
	};


	// Protected non-virtual methods:
	// void proland::DrawTweakBarTask::swap(ork::ptr< proland::DrawTweakBarTask > a)
	void public_swap(ork::ptr< proland::DrawTweakBarTask > a) {
		return proland::DrawTweakBarTask::swap(a);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::DrawTweakBarTask >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::DrawTweakBarTask::public_swap(ork::ptr< proland::DrawTweakBarTask > a)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawTweakBarTask::public_swap(ork::ptr< proland::DrawTweakBarTask > a) function, expected prototype:\nvoid proland::DrawTweakBarTask::public_swap(ork::ptr< proland::DrawTweakBarTask > a)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::DrawTweakBarTask > a = Luna< ork::Object >::checkSubType< proland::DrawTweakBarTask >(L,2);

		wrapper_proland_DrawTweakBarTask* self=Luna< ork::Object >::checkSubType< wrapper_proland_DrawTweakBarTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawTweakBarTask::public_swap(ork::ptr< proland::DrawTweakBarTask >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_swap(a);

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

