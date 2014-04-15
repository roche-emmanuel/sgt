#ifndef _WRAPPERS_WRAPPER_PROLAND_DRAWOCEANTASK_H_
#define _WRAPPERS_WRAPPER_PROLAND_DRAWOCEANTASK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/ocean/proland/ocean/DrawOceanTask.h>

class wrapper_proland_DrawOceanTask : public proland::DrawOceanTask, public luna_wrapper_base {

public:
		

	~wrapper_proland_DrawOceanTask() {
		logDEBUG3("Calling delete function for wrapper proland_DrawOceanTask");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::DrawOceanTask*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_DrawOceanTask(lua_State* L, lua_Table* dum, float radius, float zmin, ork::ptr< ork::Module > brdfShader) 
		: proland::DrawOceanTask(radius, zmin, brdfShader), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::DrawOceanTask*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_DrawOceanTask(lua_State* L, lua_Table* dum) 
		: proland::DrawOceanTask(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::DrawOceanTask*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::DrawOceanTask*)this);
			return (_obj.callFunction<void>());
		}

		return DrawOceanTask::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::DrawOceanTask*)this);
			return (_obj.callFunction<const char*>());
		}

		return DrawOceanTask::toString();
	};

	// ork::ptr< ork::Task > proland::DrawOceanTask::getTask(ork::ptr< ork::Object > context)
	ork::ptr< ork::Task > getTask(ork::ptr< ork::Object > context) {
		if(_obj.pushFunction("getTask")) {
			_obj.pushArg((proland::DrawOceanTask*)this);
			_obj.pushArg((ork::Object*)context.get());
			return _obj.callFunction< ork::Task* >();
		}

		return DrawOceanTask::getTask(context);
	};


	// Protected non-virtual methods:
	// void proland::DrawOceanTask::init(float radius, float zmin, ork::ptr< ork::Module > brdfShader)
	void public_init(float radius, float zmin, ork::ptr< ork::Module > brdfShader) {
		return proland::DrawOceanTask::init(radius, zmin, brdfShader);
	};

	// void proland::DrawOceanTask::swap(ork::ptr< proland::DrawOceanTask > t)
	void public_swap(ork::ptr< proland::DrawOceanTask > t) {
		return proland::DrawOceanTask::swap(t);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Module >(L,4) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::DrawOceanTask >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::DrawOceanTask::public_init(float radius, float zmin, ork::ptr< ork::Module > brdfShader)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawOceanTask::public_init(float radius, float zmin, ork::ptr< ork::Module > brdfShader) function, expected prototype:\nvoid proland::DrawOceanTask::public_init(float radius, float zmin, ork::ptr< ork::Module > brdfShader)\nClass arguments details:\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		float radius=(float)lua_tonumber(L,2);
		float zmin=(float)lua_tonumber(L,3);
		ork::ptr< ork::Module > brdfShader = Luna< ork::Object >::checkSubType< ork::Module >(L,4);

		wrapper_proland_DrawOceanTask* self=Luna< ork::Object >::checkSubType< wrapper_proland_DrawOceanTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawOceanTask::public_init(float, float, ork::ptr< ork::Module >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(radius, zmin, brdfShader);

		return 0;
	}

	// void proland::DrawOceanTask::public_swap(ork::ptr< proland::DrawOceanTask > t)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawOceanTask::public_swap(ork::ptr< proland::DrawOceanTask > t) function, expected prototype:\nvoid proland::DrawOceanTask::public_swap(ork::ptr< proland::DrawOceanTask > t)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::DrawOceanTask > t = Luna< ork::Object >::checkSubType< proland::DrawOceanTask >(L,2);

		wrapper_proland_DrawOceanTask* self=Luna< ork::Object >::checkSubType< wrapper_proland_DrawOceanTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawOceanTask::public_swap(ork::ptr< proland::DrawOceanTask >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
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

