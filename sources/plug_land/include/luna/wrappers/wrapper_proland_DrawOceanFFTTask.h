#ifndef _WRAPPERS_WRAPPER_PROLAND_DRAWOCEANFFTTASK_H_
#define _WRAPPERS_WRAPPER_PROLAND_DRAWOCEANFFTTASK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/ocean/proland/ocean/DrawOceanFFTTask.h>

class wrapper_proland_DrawOceanFFTTask : public proland::DrawOceanFFTTask, public luna_wrapper_base {

public:
		

	~wrapper_proland_DrawOceanFFTTask() {
		logDEBUG3("Calling delete function for wrapper proland_DrawOceanFFTTask");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::DrawOceanFFTTask*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_DrawOceanFFTTask(lua_State* L, lua_Table* dum, float radius, float zmin, ork::ptr< ork::Program > fftInit, ork::ptr< ork::Program > fftx, ork::ptr< ork::Program > ffty, ork::ptr< ork::Program > variances, ork::ptr< ork::Module > brdfShader) 
		: proland::DrawOceanFFTTask(radius, zmin, fftInit, fftx, ffty, variances, brdfShader), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::DrawOceanFFTTask*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_DrawOceanFFTTask(lua_State* L, lua_Table* dum) 
		: proland::DrawOceanFFTTask(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::DrawOceanFFTTask*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::DrawOceanFFTTask*)this);
			return (_obj.callFunction<void>());
		}

		return DrawOceanFFTTask::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::DrawOceanFFTTask*)this);
			return (_obj.callFunction<const char*>());
		}

		return DrawOceanFFTTask::toString();
	};

	// ork::ptr< ork::Task > proland::DrawOceanFFTTask::getTask(ork::ptr< ork::Object > context)
	ork::ptr< ork::Task > getTask(ork::ptr< ork::Object > context) {
		if(_obj.pushFunction("getTask")) {
			_obj.pushArg((proland::DrawOceanFFTTask*)this);
			_obj.pushArg((ork::Object*)context.get());
			return _obj.callFunction< ork::Task* >();
		}

		return DrawOceanFFTTask::getTask(context);
	};


	// Protected non-virtual methods:
	// void proland::DrawOceanFFTTask::init(float radius, float zmin, ork::ptr< ork::Program > fftInit, ork::ptr< ork::Program > fftx, ork::ptr< ork::Program > ffty, ork::ptr< ork::Program > variances, ork::ptr< ork::Module > brdfShader)
	void public_init(float radius, float zmin, ork::ptr< ork::Program > fftInit, ork::ptr< ork::Program > fftx, ork::ptr< ork::Program > ffty, ork::ptr< ork::Program > variances, ork::ptr< ork::Module > brdfShader) {
		return proland::DrawOceanFFTTask::init(radius, zmin, fftInit, fftx, ffty, variances, brdfShader);
	};

	// void proland::DrawOceanFFTTask::swap(ork::ptr< proland::DrawOceanFFTTask > t)
	void public_swap(ork::ptr< proland::DrawOceanFFTTask > t) {
		return proland::DrawOceanFFTTask::swap(t);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,4) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,5) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,6) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,7) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Module >(L,8) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::DrawOceanFFTTask >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::DrawOceanFFTTask::public_init(float radius, float zmin, ork::ptr< ork::Program > fftInit, ork::ptr< ork::Program > fftx, ork::ptr< ork::Program > ffty, ork::ptr< ork::Program > variances, ork::ptr< ork::Module > brdfShader)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawOceanFFTTask::public_init(float radius, float zmin, ork::ptr< ork::Program > fftInit, ork::ptr< ork::Program > fftx, ork::ptr< ork::Program > ffty, ork::ptr< ork::Program > variances, ork::ptr< ork::Module > brdfShader) function, expected prototype:\nvoid proland::DrawOceanFFTTask::public_init(float radius, float zmin, ork::ptr< ork::Program > fftInit, ork::ptr< ork::Program > fftx, ork::ptr< ork::Program > ffty, ork::ptr< ork::Program > variances, ork::ptr< ork::Module > brdfShader)\nClass arguments details:\narg 3 ID = [unknown]\narg 4 ID = [unknown]\narg 5 ID = [unknown]\narg 6 ID = [unknown]\narg 7 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		float radius=(float)lua_tonumber(L,2);
		float zmin=(float)lua_tonumber(L,3);
		ork::ptr< ork::Program > fftInit = Luna< ork::Object >::checkSubType< ork::Program >(L,4);
		ork::ptr< ork::Program > fftx = Luna< ork::Object >::checkSubType< ork::Program >(L,5);
		ork::ptr< ork::Program > ffty = Luna< ork::Object >::checkSubType< ork::Program >(L,6);
		ork::ptr< ork::Program > variances = Luna< ork::Object >::checkSubType< ork::Program >(L,7);
		ork::ptr< ork::Module > brdfShader = Luna< ork::Object >::checkSubType< ork::Module >(L,8);

		wrapper_proland_DrawOceanFFTTask* self=Luna< ork::Object >::checkSubType< wrapper_proland_DrawOceanFFTTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawOceanFFTTask::public_init(float, float, ork::ptr< ork::Program >, ork::ptr< ork::Program >, ork::ptr< ork::Program >, ork::ptr< ork::Program >, ork::ptr< ork::Module >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(radius, zmin, fftInit, fftx, ffty, variances, brdfShader);

		return 0;
	}

	// void proland::DrawOceanFFTTask::public_swap(ork::ptr< proland::DrawOceanFFTTask > t)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawOceanFFTTask::public_swap(ork::ptr< proland::DrawOceanFFTTask > t) function, expected prototype:\nvoid proland::DrawOceanFFTTask::public_swap(ork::ptr< proland::DrawOceanFFTTask > t)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::DrawOceanFFTTask > t = Luna< ork::Object >::checkSubType< proland::DrawOceanFFTTask >(L,2);

		wrapper_proland_DrawOceanFFTTask* self=Luna< ork::Object >::checkSubType< wrapper_proland_DrawOceanFFTTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawOceanFFTTask::public_swap(ork::ptr< proland::DrawOceanFFTTask >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
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

