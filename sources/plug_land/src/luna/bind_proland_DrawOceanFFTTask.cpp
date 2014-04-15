#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_DrawOceanFFTTask.h>

class luna_wrapper_proland_DrawOceanFFTTask {
public:
	typedef Luna< proland::DrawOceanFFTTask > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Object,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::DrawOceanFFTTask* self= (proland::DrawOceanFFTTask*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::DrawOceanFFTTask >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::DrawOceanFFTTask* ptr= dynamic_cast< proland::DrawOceanFFTTask* >(Luna< ork::Object >::check(L,1));
		proland::DrawOceanFFTTask* ptr= luna_caster< ork::Object, proland::DrawOceanFFTTask >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::DrawOceanFFTTask >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,3) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,4) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,5) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,6) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Module >(L,7) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( lua_istable(L,1)==0 ) return false;
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


	// Function checkers:
	inline static bool _lg_typecheck_getTask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Object >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getTask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Object >(L,2) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::DrawOceanFFTTask::DrawOceanFFTTask(float radius, float zmin, ork::ptr< ork::Program > fftInit, ork::ptr< ork::Program > fftx, ork::ptr< ork::Program > ffty, ork::ptr< ork::Program > variances, ork::ptr< ork::Module > brdfShader)
	static proland::DrawOceanFFTTask* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::DrawOceanFFTTask::DrawOceanFFTTask(float radius, float zmin, ork::ptr< ork::Program > fftInit, ork::ptr< ork::Program > fftx, ork::ptr< ork::Program > ffty, ork::ptr< ork::Program > variances, ork::ptr< ork::Module > brdfShader) function, expected prototype:\nproland::DrawOceanFFTTask::DrawOceanFFTTask(float radius, float zmin, ork::ptr< ork::Program > fftInit, ork::ptr< ork::Program > fftx, ork::ptr< ork::Program > ffty, ork::ptr< ork::Program > variances, ork::ptr< ork::Module > brdfShader)\nClass arguments details:\narg 3 ID = [unknown]\narg 4 ID = [unknown]\narg 5 ID = [unknown]\narg 6 ID = [unknown]\narg 7 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		float radius=(float)lua_tonumber(L,1);
		float zmin=(float)lua_tonumber(L,2);
		ork::ptr< ork::Program > fftInit = Luna< ork::Object >::checkSubType< ork::Program >(L,3);
		ork::ptr< ork::Program > fftx = Luna< ork::Object >::checkSubType< ork::Program >(L,4);
		ork::ptr< ork::Program > ffty = Luna< ork::Object >::checkSubType< ork::Program >(L,5);
		ork::ptr< ork::Program > variances = Luna< ork::Object >::checkSubType< ork::Program >(L,6);
		ork::ptr< ork::Module > brdfShader = Luna< ork::Object >::checkSubType< ork::Module >(L,7);

		return new proland::DrawOceanFFTTask(radius, zmin, fftInit, fftx, ffty, variances, brdfShader);
	}

	// proland::DrawOceanFFTTask::DrawOceanFFTTask(lua_Table * data, float radius, float zmin, ork::ptr< ork::Program > fftInit, ork::ptr< ork::Program > fftx, ork::ptr< ork::Program > ffty, ork::ptr< ork::Program > variances, ork::ptr< ork::Module > brdfShader)
	static proland::DrawOceanFFTTask* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::DrawOceanFFTTask::DrawOceanFFTTask(lua_Table * data, float radius, float zmin, ork::ptr< ork::Program > fftInit, ork::ptr< ork::Program > fftx, ork::ptr< ork::Program > ffty, ork::ptr< ork::Program > variances, ork::ptr< ork::Module > brdfShader) function, expected prototype:\nproland::DrawOceanFFTTask::DrawOceanFFTTask(lua_Table * data, float radius, float zmin, ork::ptr< ork::Program > fftInit, ork::ptr< ork::Program > fftx, ork::ptr< ork::Program > ffty, ork::ptr< ork::Program > variances, ork::ptr< ork::Module > brdfShader)\nClass arguments details:\narg 4 ID = [unknown]\narg 5 ID = [unknown]\narg 6 ID = [unknown]\narg 7 ID = [unknown]\narg 8 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		float radius=(float)lua_tonumber(L,2);
		float zmin=(float)lua_tonumber(L,3);
		ork::ptr< ork::Program > fftInit = Luna< ork::Object >::checkSubType< ork::Program >(L,4);
		ork::ptr< ork::Program > fftx = Luna< ork::Object >::checkSubType< ork::Program >(L,5);
		ork::ptr< ork::Program > ffty = Luna< ork::Object >::checkSubType< ork::Program >(L,6);
		ork::ptr< ork::Program > variances = Luna< ork::Object >::checkSubType< ork::Program >(L,7);
		ork::ptr< ork::Module > brdfShader = Luna< ork::Object >::checkSubType< ork::Module >(L,8);

		return new wrapper_proland_DrawOceanFFTTask(L,NULL, radius, zmin, fftInit, fftx, ffty, variances, brdfShader);
	}

	// Overload binder for proland::DrawOceanFFTTask::DrawOceanFFTTask
	static proland::DrawOceanFFTTask* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function DrawOceanFFTTask, cannot match any of the overloads for function DrawOceanFFTTask:\n  DrawOceanFFTTask(float, float, ork::ptr< ork::Program >, ork::ptr< ork::Program >, ork::ptr< ork::Program >, ork::ptr< ork::Program >, ork::ptr< ork::Module >)\n  DrawOceanFFTTask(lua_Table *, float, float, ork::ptr< ork::Program >, ork::ptr< ork::Program >, ork::ptr< ork::Program >, ork::ptr< ork::Program >, ork::ptr< ork::Module >)\n");
		return NULL;
	}


	// Function binds:
	// ork::ptr< ork::Task > proland::DrawOceanFFTTask::getTask(ork::ptr< ork::Object > context)
	static int _bind_getTask(lua_State *L) {
		if (!_lg_typecheck_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > proland::DrawOceanFFTTask::getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > proland::DrawOceanFFTTask::getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		proland::DrawOceanFFTTask* self=Luna< ork::Object >::checkSubType< proland::DrawOceanFFTTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > proland::DrawOceanFFTTask::getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}

	// const char * proland::DrawOceanFFTTask::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::DrawOceanFFTTask::base_toString() function, expected prototype:\nconst char * proland::DrawOceanFFTTask::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawOceanFFTTask* self=Luna< ork::Object >::checkSubType< proland::DrawOceanFFTTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::DrawOceanFFTTask::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DrawOceanFFTTask::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::ptr< ork::Task > proland::DrawOceanFFTTask::base_getTask(ork::ptr< ork::Object > context)
	static int _bind_base_getTask(lua_State *L) {
		if (!_lg_typecheck_base_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > proland::DrawOceanFFTTask::base_getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > proland::DrawOceanFFTTask::base_getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		proland::DrawOceanFFTTask* self=Luna< ork::Object >::checkSubType< proland::DrawOceanFFTTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > proland::DrawOceanFFTTask::base_getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->DrawOceanFFTTask::getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}


	// Operator binds:

};

proland::DrawOceanFFTTask* LunaTraits< proland::DrawOceanFFTTask >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_DrawOceanFFTTask::_bind_ctor(L);
}

void LunaTraits< proland::DrawOceanFFTTask >::_bind_dtor(proland::DrawOceanFFTTask* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::DrawOceanFFTTask >::className[] = "DrawOceanFFTTask";
const char LunaTraits< proland::DrawOceanFFTTask >::fullName[] = "proland::DrawOceanFFTTask";
const char LunaTraits< proland::DrawOceanFFTTask >::moduleName[] = "proland";
const char* LunaTraits< proland::DrawOceanFFTTask >::parents[] = {"ork.AbstractTask", 0};
const int LunaTraits< proland::DrawOceanFFTTask >::hash = 30043502;
const int LunaTraits< proland::DrawOceanFFTTask >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::DrawOceanFFTTask >::methods[] = {
	{"getTask", &luna_wrapper_proland_DrawOceanFFTTask::_bind_getTask},
	{"base_toString", &luna_wrapper_proland_DrawOceanFFTTask::_bind_base_toString},
	{"base_getTask", &luna_wrapper_proland_DrawOceanFFTTask::_bind_base_getTask},
	{"fromVoid", &luna_wrapper_proland_DrawOceanFFTTask::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_DrawOceanFFTTask::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_DrawOceanFFTTask::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::DrawOceanFFTTask >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_DrawOceanFFTTask::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::DrawOceanFFTTask >::enumValues[] = {
	{0,0}
};


