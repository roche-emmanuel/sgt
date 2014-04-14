#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_SetStateTask.h>

class luna_wrapper_ork_SetStateTask {
public:
	typedef Luna< ork::SetStateTask > luna_t;

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

		ork::SetStateTask* self= (ork::SetStateTask*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::SetStateTask >::push(L,self,false);
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
		//ork::SetStateTask* ptr= dynamic_cast< ork::SetStateTask* >(Luna< ork::Object >::check(L,1));
		ork::SetStateTask* ptr= luna_caster< ork::Object, ork::SetStateTask >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::SetStateTask >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_addRunnable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,52646128)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setViewport(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3943576) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDepthRange(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setClipDistances(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setClearColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67378769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setClearDepth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setClearStencil(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPointSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPointFadeThresholdSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPointLowerLeftOrigin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLineWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLineSmooth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFrontFaceCW(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPolygonMode(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPolygonSmooth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPolygonOffset_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPolygonOffset_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMultisample(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSampleAlpha(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSampleCoverage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSampleMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSampleShading(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOcclusionTest(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Query >(L,2) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScissorTest_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScissorTest_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,3943576) ) return false;
		if( (!(Luna< ork::vec4< int > >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStencilTest(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>14 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( luatop>9 && (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		if( luatop>10 && (lua_type(L,11)!=LUA_TNUMBER || lua_tointeger(L,11) != lua_tonumber(L,11)) ) return false;
		if( luatop>11 && (lua_type(L,12)!=LUA_TNUMBER || lua_tointeger(L,12) != lua_tonumber(L,12)) ) return false;
		if( luatop>12 && (lua_type(L,13)!=LUA_TNUMBER || lua_tointeger(L,13) != lua_tonumber(L,13)) ) return false;
		if( luatop>13 && (lua_type(L,14)!=LUA_TNUMBER || lua_tointeger(L,14) != lua_tonumber(L,14)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDepthTest(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBlend(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>9 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBlendColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67378769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDither(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLogicOp(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setColorMask(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDepthMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStencilMask(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setClearState(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBuffers(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

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
	// ork::SetStateTask::SetStateTask()
	static ork::SetStateTask* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::SetStateTask::SetStateTask() function, expected prototype:\nork::SetStateTask::SetStateTask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::SetStateTask();
	}

	// ork::SetStateTask::SetStateTask(lua_Table * data)
	static ork::SetStateTask* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::SetStateTask::SetStateTask(lua_Table * data) function, expected prototype:\nork::SetStateTask::SetStateTask(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_ork_SetStateTask(L,NULL);
	}

	// Overload binder for ork::SetStateTask::SetStateTask
	static ork::SetStateTask* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function SetStateTask, cannot match any of the overloads for function SetStateTask:\n  SetStateTask()\n  SetStateTask(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void ork::SetStateTask::addRunnable(ork::SetStateTask::Runnable * r)
	static int _bind_addRunnable(lua_State *L) {
		if (!_lg_typecheck_addRunnable(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::addRunnable(ork::SetStateTask::Runnable * r) function, expected prototype:\nvoid ork::SetStateTask::addRunnable(ork::SetStateTask::Runnable * r)\nClass arguments details:\narg 1 ID = 52646128\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::SetStateTask::Runnable* r=(Luna< ork::SetStateTask::Runnable >::check(L,2));

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::addRunnable(ork::SetStateTask::Runnable *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addRunnable(r);

		return 0;
	}

	// void ork::SetStateTask::setViewport(ork::vec4< int > viewport)
	static int _bind_setViewport(lua_State *L) {
		if (!_lg_typecheck_setViewport(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setViewport(ork::vec4< int > viewport) function, expected prototype:\nvoid ork::SetStateTask::setViewport(ork::vec4< int > viewport)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec4< int >* viewport_ptr=(Luna< ork::vec4< int > >::check(L,2));
		if( !viewport_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg viewport in ork::SetStateTask::setViewport function");
		}
		ork::vec4< int > viewport=*viewport_ptr;

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setViewport(ork::vec4< int >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setViewport(viewport);

		return 0;
	}

	// void ork::SetStateTask::setDepthRange(float n, float f)
	static int _bind_setDepthRange(lua_State *L) {
		if (!_lg_typecheck_setDepthRange(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setDepthRange(float n, float f) function, expected prototype:\nvoid ork::SetStateTask::setDepthRange(float n, float f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float n=(float)lua_tonumber(L,2);
		float f=(float)lua_tonumber(L,3);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setDepthRange(float, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDepthRange(n, f);

		return 0;
	}

	// void ork::SetStateTask::setClipDistances(int d)
	static int _bind_setClipDistances(lua_State *L) {
		if (!_lg_typecheck_setClipDistances(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setClipDistances(int d) function, expected prototype:\nvoid ork::SetStateTask::setClipDistances(int d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int d=(int)lua_tointeger(L,2);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setClipDistances(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setClipDistances(d);

		return 0;
	}

	// void ork::SetStateTask::setClearColor(ork::vec4< float > & c)
	static int _bind_setClearColor(lua_State *L) {
		if (!_lg_typecheck_setClearColor(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setClearColor(ork::vec4< float > & c) function, expected prototype:\nvoid ork::SetStateTask::setClearColor(ork::vec4< float > & c)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec4< float >* c_ptr=(Luna< ork::vec4< float > >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in ork::SetStateTask::setClearColor function");
		}
		ork::vec4< float > & c=*c_ptr;

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setClearColor(ork::vec4< float > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setClearColor(c);

		return 0;
	}

	// void ork::SetStateTask::setClearDepth(float clearDepth)
	static int _bind_setClearDepth(lua_State *L) {
		if (!_lg_typecheck_setClearDepth(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setClearDepth(float clearDepth) function, expected prototype:\nvoid ork::SetStateTask::setClearDepth(float clearDepth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float clearDepth=(float)lua_tonumber(L,2);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setClearDepth(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setClearDepth(clearDepth);

		return 0;
	}

	// void ork::SetStateTask::setClearStencil(int clearStencil)
	static int _bind_setClearStencil(lua_State *L) {
		if (!_lg_typecheck_setClearStencil(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setClearStencil(int clearStencil) function, expected prototype:\nvoid ork::SetStateTask::setClearStencil(int clearStencil)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int clearStencil=(int)lua_tointeger(L,2);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setClearStencil(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setClearStencil(clearStencil);

		return 0;
	}

	// void ork::SetStateTask::setPointSize(float pointSize)
	static int _bind_setPointSize(lua_State *L) {
		if (!_lg_typecheck_setPointSize(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setPointSize(float pointSize) function, expected prototype:\nvoid ork::SetStateTask::setPointSize(float pointSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float pointSize=(float)lua_tonumber(L,2);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setPointSize(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPointSize(pointSize);

		return 0;
	}

	// void ork::SetStateTask::setPointFadeThresholdSize(float tSize)
	static int _bind_setPointFadeThresholdSize(lua_State *L) {
		if (!_lg_typecheck_setPointFadeThresholdSize(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setPointFadeThresholdSize(float tSize) function, expected prototype:\nvoid ork::SetStateTask::setPointFadeThresholdSize(float tSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float tSize=(float)lua_tonumber(L,2);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setPointFadeThresholdSize(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPointFadeThresholdSize(tSize);

		return 0;
	}

	// void ork::SetStateTask::setPointLowerLeftOrigin(bool pointLowerLeftOrigin)
	static int _bind_setPointLowerLeftOrigin(lua_State *L) {
		if (!_lg_typecheck_setPointLowerLeftOrigin(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setPointLowerLeftOrigin(bool pointLowerLeftOrigin) function, expected prototype:\nvoid ork::SetStateTask::setPointLowerLeftOrigin(bool pointLowerLeftOrigin)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool pointLowerLeftOrigin=(bool)(lua_toboolean(L,2)==1);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setPointLowerLeftOrigin(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPointLowerLeftOrigin(pointLowerLeftOrigin);

		return 0;
	}

	// void ork::SetStateTask::setLineWidth(float lineWidth)
	static int _bind_setLineWidth(lua_State *L) {
		if (!_lg_typecheck_setLineWidth(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setLineWidth(float lineWidth) function, expected prototype:\nvoid ork::SetStateTask::setLineWidth(float lineWidth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float lineWidth=(float)lua_tonumber(L,2);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setLineWidth(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLineWidth(lineWidth);

		return 0;
	}

	// void ork::SetStateTask::setLineSmooth(bool lineSmooth)
	static int _bind_setLineSmooth(lua_State *L) {
		if (!_lg_typecheck_setLineSmooth(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setLineSmooth(bool lineSmooth) function, expected prototype:\nvoid ork::SetStateTask::setLineSmooth(bool lineSmooth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool lineSmooth=(bool)(lua_toboolean(L,2)==1);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setLineSmooth(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLineSmooth(lineSmooth);

		return 0;
	}

	// void ork::SetStateTask::setFrontFaceCW(bool frontFaceCW)
	static int _bind_setFrontFaceCW(lua_State *L) {
		if (!_lg_typecheck_setFrontFaceCW(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setFrontFaceCW(bool frontFaceCW) function, expected prototype:\nvoid ork::SetStateTask::setFrontFaceCW(bool frontFaceCW)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool frontFaceCW=(bool)(lua_toboolean(L,2)==1);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setFrontFaceCW(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFrontFaceCW(frontFaceCW);

		return 0;
	}

	// void ork::SetStateTask::setPolygonMode(ork::PolygonMode polygonFront, ork::PolygonMode polygonBack)
	static int _bind_setPolygonMode(lua_State *L) {
		if (!_lg_typecheck_setPolygonMode(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setPolygonMode(ork::PolygonMode polygonFront, ork::PolygonMode polygonBack) function, expected prototype:\nvoid ork::SetStateTask::setPolygonMode(ork::PolygonMode polygonFront, ork::PolygonMode polygonBack)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::PolygonMode polygonFront=(ork::PolygonMode)lua_tointeger(L,2);
		ork::PolygonMode polygonBack=(ork::PolygonMode)lua_tointeger(L,3);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setPolygonMode(ork::PolygonMode, ork::PolygonMode). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPolygonMode(polygonFront, polygonBack);

		return 0;
	}

	// void ork::SetStateTask::setPolygonSmooth(bool polygonSmooth)
	static int _bind_setPolygonSmooth(lua_State *L) {
		if (!_lg_typecheck_setPolygonSmooth(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setPolygonSmooth(bool polygonSmooth) function, expected prototype:\nvoid ork::SetStateTask::setPolygonSmooth(bool polygonSmooth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool polygonSmooth=(bool)(lua_toboolean(L,2)==1);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setPolygonSmooth(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPolygonSmooth(polygonSmooth);

		return 0;
	}

	// void ork::SetStateTask::setPolygonOffset(float factor, float units)
	static int _bind_setPolygonOffset_overload_1(lua_State *L) {
		if (!_lg_typecheck_setPolygonOffset_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setPolygonOffset(float factor, float units) function, expected prototype:\nvoid ork::SetStateTask::setPolygonOffset(float factor, float units)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float factor=(float)lua_tonumber(L,2);
		float units=(float)lua_tonumber(L,3);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setPolygonOffset(float, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPolygonOffset(factor, units);

		return 0;
	}

	// void ork::SetStateTask::setPolygonOffset(bool pointOffset, bool lineOffset, bool polygonOffset)
	static int _bind_setPolygonOffset_overload_2(lua_State *L) {
		if (!_lg_typecheck_setPolygonOffset_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setPolygonOffset(bool pointOffset, bool lineOffset, bool polygonOffset) function, expected prototype:\nvoid ork::SetStateTask::setPolygonOffset(bool pointOffset, bool lineOffset, bool polygonOffset)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool pointOffset=(bool)(lua_toboolean(L,2)==1);
		bool lineOffset=(bool)(lua_toboolean(L,3)==1);
		bool polygonOffset=(bool)(lua_toboolean(L,4)==1);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setPolygonOffset(bool, bool, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPolygonOffset(pointOffset, lineOffset, polygonOffset);

		return 0;
	}

	// Overload binder for ork::SetStateTask::setPolygonOffset
	static int _bind_setPolygonOffset(lua_State *L) {
		if (_lg_typecheck_setPolygonOffset_overload_1(L)) return _bind_setPolygonOffset_overload_1(L);
		if (_lg_typecheck_setPolygonOffset_overload_2(L)) return _bind_setPolygonOffset_overload_2(L);

		luaL_error(L, "error in function setPolygonOffset, cannot match any of the overloads for function setPolygonOffset:\n  setPolygonOffset(float, float)\n  setPolygonOffset(bool, bool, bool)\n");
		return 0;
	}

	// void ork::SetStateTask::setMultisample(bool multiSample)
	static int _bind_setMultisample(lua_State *L) {
		if (!_lg_typecheck_setMultisample(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setMultisample(bool multiSample) function, expected prototype:\nvoid ork::SetStateTask::setMultisample(bool multiSample)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool multiSample=(bool)(lua_toboolean(L,2)==1);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setMultisample(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMultisample(multiSample);

		return 0;
	}

	// void ork::SetStateTask::setSampleAlpha(bool sampleAlphaToCoverage, bool sampleAlphaToOne)
	static int _bind_setSampleAlpha(lua_State *L) {
		if (!_lg_typecheck_setSampleAlpha(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setSampleAlpha(bool sampleAlphaToCoverage, bool sampleAlphaToOne) function, expected prototype:\nvoid ork::SetStateTask::setSampleAlpha(bool sampleAlphaToCoverage, bool sampleAlphaToOne)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool sampleAlphaToCoverage=(bool)(lua_toboolean(L,2)==1);
		bool sampleAlphaToOne=(bool)(lua_toboolean(L,3)==1);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setSampleAlpha(bool, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSampleAlpha(sampleAlphaToCoverage, sampleAlphaToOne);

		return 0;
	}

	// void ork::SetStateTask::setSampleCoverage(float sampleCoverage)
	static int _bind_setSampleCoverage(lua_State *L) {
		if (!_lg_typecheck_setSampleCoverage(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setSampleCoverage(float sampleCoverage) function, expected prototype:\nvoid ork::SetStateTask::setSampleCoverage(float sampleCoverage)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float sampleCoverage=(float)lua_tonumber(L,2);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setSampleCoverage(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSampleCoverage(sampleCoverage);

		return 0;
	}

	// void ork::SetStateTask::setSampleMask(int sampleMask)
	static int _bind_setSampleMask(lua_State *L) {
		if (!_lg_typecheck_setSampleMask(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setSampleMask(int sampleMask) function, expected prototype:\nvoid ork::SetStateTask::setSampleMask(int sampleMask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int sampleMask=(int)lua_tointeger(L,2);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setSampleMask(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSampleMask(sampleMask);

		return 0;
	}

	// void ork::SetStateTask::setSampleShading(bool sampleShading, float minSamples)
	static int _bind_setSampleShading(lua_State *L) {
		if (!_lg_typecheck_setSampleShading(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setSampleShading(bool sampleShading, float minSamples) function, expected prototype:\nvoid ork::SetStateTask::setSampleShading(bool sampleShading, float minSamples)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool sampleShading=(bool)(lua_toboolean(L,2)==1);
		float minSamples=(float)lua_tonumber(L,3);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setSampleShading(bool, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSampleShading(sampleShading, minSamples);

		return 0;
	}

	// void ork::SetStateTask::setOcclusionTest(ork::ptr< ork::Query > occlusionQuery, ork::QueryMode occlusionMode)
	static int _bind_setOcclusionTest(lua_State *L) {
		if (!_lg_typecheck_setOcclusionTest(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setOcclusionTest(ork::ptr< ork::Query > occlusionQuery, ork::QueryMode occlusionMode) function, expected prototype:\nvoid ork::SetStateTask::setOcclusionTest(ork::ptr< ork::Query > occlusionQuery, ork::QueryMode occlusionMode)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Query > occlusionQuery = Luna< ork::Object >::checkSubType< ork::Query >(L,2);
		ork::QueryMode occlusionMode=(ork::QueryMode)lua_tointeger(L,3);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setOcclusionTest(ork::ptr< ork::Query >, ork::QueryMode). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOcclusionTest(occlusionQuery, occlusionMode);

		return 0;
	}

	// void ork::SetStateTask::setScissorTest(bool enableScissor)
	static int _bind_setScissorTest_overload_1(lua_State *L) {
		if (!_lg_typecheck_setScissorTest_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setScissorTest(bool enableScissor) function, expected prototype:\nvoid ork::SetStateTask::setScissorTest(bool enableScissor)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enableScissor=(bool)(lua_toboolean(L,2)==1);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setScissorTest(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setScissorTest(enableScissor);

		return 0;
	}

	// void ork::SetStateTask::setScissorTest(bool enableScissor, ork::vec4< int > & scissor)
	static int _bind_setScissorTest_overload_2(lua_State *L) {
		if (!_lg_typecheck_setScissorTest_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setScissorTest(bool enableScissor, ork::vec4< int > & scissor) function, expected prototype:\nvoid ork::SetStateTask::setScissorTest(bool enableScissor, ork::vec4< int > & scissor)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enableScissor=(bool)(lua_toboolean(L,2)==1);
		ork::vec4< int >* scissor_ptr=(Luna< ork::vec4< int > >::check(L,3));
		if( !scissor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scissor in ork::SetStateTask::setScissorTest function");
		}
		ork::vec4< int > & scissor=*scissor_ptr;

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setScissorTest(bool, ork::vec4< int > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setScissorTest(enableScissor, scissor);

		return 0;
	}

	// Overload binder for ork::SetStateTask::setScissorTest
	static int _bind_setScissorTest(lua_State *L) {
		if (_lg_typecheck_setScissorTest_overload_1(L)) return _bind_setScissorTest_overload_1(L);
		if (_lg_typecheck_setScissorTest_overload_2(L)) return _bind_setScissorTest_overload_2(L);

		luaL_error(L, "error in function setScissorTest, cannot match any of the overloads for function setScissorTest:\n  setScissorTest(bool)\n  setScissorTest(bool, ork::vec4< int > &)\n");
		return 0;
	}

	// void ork::SetStateTask::setStencilTest(bool enableStencil, ork::Function ff = ( ork::Function )-1, int fref = -1, int fmask = -1, ork::StencilOperation ffail = ( ork::StencilOperation )-1, ork::StencilOperation fdpfail = ( ork::StencilOperation )-1, ork::StencilOperation fdppass = ( ork::StencilOperation )-1, ork::Function bf = ( ork::Function )-1, int bref = -1, int bmask = -1, ork::StencilOperation bfail = ( ork::StencilOperation )-1, ork::StencilOperation bdpfail = ( ork::StencilOperation )-1, ork::StencilOperation bdppass = ( ork::StencilOperation )-1)
	static int _bind_setStencilTest(lua_State *L) {
		if (!_lg_typecheck_setStencilTest(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setStencilTest(bool enableStencil, ork::Function ff = ( ork::Function )-1, int fref = -1, int fmask = -1, ork::StencilOperation ffail = ( ork::StencilOperation )-1, ork::StencilOperation fdpfail = ( ork::StencilOperation )-1, ork::StencilOperation fdppass = ( ork::StencilOperation )-1, ork::Function bf = ( ork::Function )-1, int bref = -1, int bmask = -1, ork::StencilOperation bfail = ( ork::StencilOperation )-1, ork::StencilOperation bdpfail = ( ork::StencilOperation )-1, ork::StencilOperation bdppass = ( ork::StencilOperation )-1) function, expected prototype:\nvoid ork::SetStateTask::setStencilTest(bool enableStencil, ork::Function ff = ( ork::Function )-1, int fref = -1, int fmask = -1, ork::StencilOperation ffail = ( ork::StencilOperation )-1, ork::StencilOperation fdpfail = ( ork::StencilOperation )-1, ork::StencilOperation fdppass = ( ork::StencilOperation )-1, ork::Function bf = ( ork::Function )-1, int bref = -1, int bmask = -1, ork::StencilOperation bfail = ( ork::StencilOperation )-1, ork::StencilOperation bdpfail = ( ork::StencilOperation )-1, ork::StencilOperation bdppass = ( ork::StencilOperation )-1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enableStencil=(bool)(lua_toboolean(L,2)==1);
		ork::Function ff=luatop>2 ? (ork::Function)lua_tointeger(L,3) : (ork::Function)( ork::Function )-1;
		int fref=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int fmask=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		ork::StencilOperation ffail=luatop>5 ? (ork::StencilOperation)lua_tointeger(L,6) : (ork::StencilOperation)( ork::StencilOperation )-1;
		ork::StencilOperation fdpfail=luatop>6 ? (ork::StencilOperation)lua_tointeger(L,7) : (ork::StencilOperation)( ork::StencilOperation )-1;
		ork::StencilOperation fdppass=luatop>7 ? (ork::StencilOperation)lua_tointeger(L,8) : (ork::StencilOperation)( ork::StencilOperation )-1;
		ork::Function bf=luatop>8 ? (ork::Function)lua_tointeger(L,9) : (ork::Function)( ork::Function )-1;
		int bref=luatop>9 ? (int)lua_tointeger(L,10) : (int)-1;
		int bmask=luatop>10 ? (int)lua_tointeger(L,11) : (int)-1;
		ork::StencilOperation bfail=luatop>11 ? (ork::StencilOperation)lua_tointeger(L,12) : (ork::StencilOperation)( ork::StencilOperation )-1;
		ork::StencilOperation bdpfail=luatop>12 ? (ork::StencilOperation)lua_tointeger(L,13) : (ork::StencilOperation)( ork::StencilOperation )-1;
		ork::StencilOperation bdppass=luatop>13 ? (ork::StencilOperation)lua_tointeger(L,14) : (ork::StencilOperation)( ork::StencilOperation )-1;

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setStencilTest(bool, ork::Function, int, int, ork::StencilOperation, ork::StencilOperation, ork::StencilOperation, ork::Function, int, int, ork::StencilOperation, ork::StencilOperation, ork::StencilOperation). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStencilTest(enableStencil, ff, fref, fmask, ffail, fdpfail, fdppass, bf, bref, bmask, bfail, bdpfail, bdppass);

		return 0;
	}

	// void ork::SetStateTask::setDepthTest(bool enableDepth, ork::Function depth = ( ork::Function )-1)
	static int _bind_setDepthTest(lua_State *L) {
		if (!_lg_typecheck_setDepthTest(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setDepthTest(bool enableDepth, ork::Function depth = ( ork::Function )-1) function, expected prototype:\nvoid ork::SetStateTask::setDepthTest(bool enableDepth, ork::Function depth = ( ork::Function )-1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enableDepth=(bool)(lua_toboolean(L,2)==1);
		ork::Function depth=luatop>2 ? (ork::Function)lua_tointeger(L,3) : (ork::Function)( ork::Function )-1;

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setDepthTest(bool, ork::Function). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDepthTest(enableDepth, depth);

		return 0;
	}

	// void ork::SetStateTask::setBlend(ork::BufferId buffer, bool enableBlend, ork::BlendEquation rgb = ( ork::BlendEquation )-1, ork::BlendArgument srgb = ( ork::BlendArgument )-1, ork::BlendArgument drgb = ( ork::BlendArgument )-1, ork::BlendEquation alpha = ( ork::BlendEquation )-1, ork::BlendArgument salpha = ( ork::BlendArgument )-1, ork::BlendArgument dalpha = ( ork::BlendArgument )-1)
	static int _bind_setBlend(lua_State *L) {
		if (!_lg_typecheck_setBlend(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setBlend(ork::BufferId buffer, bool enableBlend, ork::BlendEquation rgb = ( ork::BlendEquation )-1, ork::BlendArgument srgb = ( ork::BlendArgument )-1, ork::BlendArgument drgb = ( ork::BlendArgument )-1, ork::BlendEquation alpha = ( ork::BlendEquation )-1, ork::BlendArgument salpha = ( ork::BlendArgument )-1, ork::BlendArgument dalpha = ( ork::BlendArgument )-1) function, expected prototype:\nvoid ork::SetStateTask::setBlend(ork::BufferId buffer, bool enableBlend, ork::BlendEquation rgb = ( ork::BlendEquation )-1, ork::BlendArgument srgb = ( ork::BlendArgument )-1, ork::BlendArgument drgb = ( ork::BlendArgument )-1, ork::BlendEquation alpha = ( ork::BlendEquation )-1, ork::BlendArgument salpha = ( ork::BlendArgument )-1, ork::BlendArgument dalpha = ( ork::BlendArgument )-1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::BufferId buffer=(ork::BufferId)lua_tointeger(L,2);
		bool enableBlend=(bool)(lua_toboolean(L,3)==1);
		ork::BlendEquation rgb=luatop>3 ? (ork::BlendEquation)lua_tointeger(L,4) : (ork::BlendEquation)( ork::BlendEquation )-1;
		ork::BlendArgument srgb=luatop>4 ? (ork::BlendArgument)lua_tointeger(L,5) : (ork::BlendArgument)( ork::BlendArgument )-1;
		ork::BlendArgument drgb=luatop>5 ? (ork::BlendArgument)lua_tointeger(L,6) : (ork::BlendArgument)( ork::BlendArgument )-1;
		ork::BlendEquation alpha=luatop>6 ? (ork::BlendEquation)lua_tointeger(L,7) : (ork::BlendEquation)( ork::BlendEquation )-1;
		ork::BlendArgument salpha=luatop>7 ? (ork::BlendArgument)lua_tointeger(L,8) : (ork::BlendArgument)( ork::BlendArgument )-1;
		ork::BlendArgument dalpha=luatop>8 ? (ork::BlendArgument)lua_tointeger(L,9) : (ork::BlendArgument)( ork::BlendArgument )-1;

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setBlend(ork::BufferId, bool, ork::BlendEquation, ork::BlendArgument, ork::BlendArgument, ork::BlendEquation, ork::BlendArgument, ork::BlendArgument). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBlend(buffer, enableBlend, rgb, srgb, drgb, alpha, salpha, dalpha);

		return 0;
	}

	// void ork::SetStateTask::setBlendColor(ork::vec4< float > & color)
	static int _bind_setBlendColor(lua_State *L) {
		if (!_lg_typecheck_setBlendColor(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setBlendColor(ork::vec4< float > & color) function, expected prototype:\nvoid ork::SetStateTask::setBlendColor(ork::vec4< float > & color)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec4< float >* color_ptr=(Luna< ork::vec4< float > >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in ork::SetStateTask::setBlendColor function");
		}
		ork::vec4< float > & color=*color_ptr;

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setBlendColor(ork::vec4< float > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBlendColor(color);

		return 0;
	}

	// void ork::SetStateTask::setDither(bool enableDither)
	static int _bind_setDither(lua_State *L) {
		if (!_lg_typecheck_setDither(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setDither(bool enableDither) function, expected prototype:\nvoid ork::SetStateTask::setDither(bool enableDither)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enableDither=(bool)(lua_toboolean(L,2)==1);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setDither(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDither(enableDither);

		return 0;
	}

	// void ork::SetStateTask::setLogicOp(bool enableLogic, ork::LogicOperation logicOp = ( ork::LogicOperation )-1)
	static int _bind_setLogicOp(lua_State *L) {
		if (!_lg_typecheck_setLogicOp(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setLogicOp(bool enableLogic, ork::LogicOperation logicOp = ( ork::LogicOperation )-1) function, expected prototype:\nvoid ork::SetStateTask::setLogicOp(bool enableLogic, ork::LogicOperation logicOp = ( ork::LogicOperation )-1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enableLogic=(bool)(lua_toboolean(L,2)==1);
		ork::LogicOperation logicOp=luatop>2 ? (ork::LogicOperation)lua_tointeger(L,3) : (ork::LogicOperation)( ork::LogicOperation )-1;

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setLogicOp(bool, ork::LogicOperation). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLogicOp(enableLogic, logicOp);

		return 0;
	}

	// void ork::SetStateTask::setColorMask(ork::BufferId buffer, bool r, bool g, bool b, bool a)
	static int _bind_setColorMask(lua_State *L) {
		if (!_lg_typecheck_setColorMask(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setColorMask(ork::BufferId buffer, bool r, bool g, bool b, bool a) function, expected prototype:\nvoid ork::SetStateTask::setColorMask(ork::BufferId buffer, bool r, bool g, bool b, bool a)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId buffer=(ork::BufferId)lua_tointeger(L,2);
		bool r=(bool)(lua_toboolean(L,3)==1);
		bool g=(bool)(lua_toboolean(L,4)==1);
		bool b=(bool)(lua_toboolean(L,5)==1);
		bool a=(bool)(lua_toboolean(L,6)==1);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setColorMask(ork::BufferId, bool, bool, bool, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColorMask(buffer, r, g, b, a);

		return 0;
	}

	// void ork::SetStateTask::setDepthMask(bool d)
	static int _bind_setDepthMask(lua_State *L) {
		if (!_lg_typecheck_setDepthMask(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setDepthMask(bool d) function, expected prototype:\nvoid ork::SetStateTask::setDepthMask(bool d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool d=(bool)(lua_toboolean(L,2)==1);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setDepthMask(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDepthMask(d);

		return 0;
	}

	// void ork::SetStateTask::setStencilMask(int frontMask, int backMask)
	static int _bind_setStencilMask(lua_State *L) {
		if (!_lg_typecheck_setStencilMask(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setStencilMask(int frontMask, int backMask) function, expected prototype:\nvoid ork::SetStateTask::setStencilMask(int frontMask, int backMask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int frontMask=(int)lua_tointeger(L,2);
		int backMask=(int)lua_tointeger(L,3);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setStencilMask(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStencilMask(frontMask, backMask);

		return 0;
	}

	// void ork::SetStateTask::setClearState(bool color, bool stencil, bool depth)
	static int _bind_setClearState(lua_State *L) {
		if (!_lg_typecheck_setClearState(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setClearState(bool color, bool stencil, bool depth) function, expected prototype:\nvoid ork::SetStateTask::setClearState(bool color, bool stencil, bool depth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool color=(bool)(lua_toboolean(L,2)==1);
		bool stencil=(bool)(lua_toboolean(L,3)==1);
		bool depth=(bool)(lua_toboolean(L,4)==1);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setClearState(bool, bool, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setClearState(color, stencil, depth);

		return 0;
	}

	// void ork::SetStateTask::setBuffers(ork::BufferId rb, ork::BufferId db)
	static int _bind_setBuffers(lua_State *L) {
		if (!_lg_typecheck_setBuffers(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetStateTask::setBuffers(ork::BufferId rb, ork::BufferId db) function, expected prototype:\nvoid ork::SetStateTask::setBuffers(ork::BufferId rb, ork::BufferId db)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId rb=(ork::BufferId)lua_tointeger(L,2);
		ork::BufferId db=(ork::BufferId)lua_tointeger(L,3);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetStateTask::setBuffers(ork::BufferId, ork::BufferId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBuffers(rb, db);

		return 0;
	}

	// ork::ptr< ork::Task > ork::SetStateTask::getTask(ork::ptr< ork::Object > context)
	static int _bind_getTask(lua_State *L) {
		if (!_lg_typecheck_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > ork::SetStateTask::getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > ork::SetStateTask::getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > ork::SetStateTask::getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}

	// const char * ork::SetStateTask::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::SetStateTask::base_toString() function, expected prototype:\nconst char * ork::SetStateTask::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::SetStateTask::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->SetStateTask::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::ptr< ork::Task > ork::SetStateTask::base_getTask(ork::ptr< ork::Object > context)
	static int _bind_base_getTask(lua_State *L) {
		if (!_lg_typecheck_base_getTask(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > ork::SetStateTask::base_getTask(ork::ptr< ork::Object > context) function, expected prototype:\nork::ptr< ork::Task > ork::SetStateTask::base_getTask(ork::ptr< ork::Object > context)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > context = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		ork::SetStateTask* self=Luna< ork::Object >::checkSubType< ork::SetStateTask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > ork::SetStateTask::base_getTask(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->SetStateTask::getTask(context);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}


	// Operator binds:

};

ork::SetStateTask* LunaTraits< ork::SetStateTask >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_SetStateTask::_bind_ctor(L);
}

void LunaTraits< ork::SetStateTask >::_bind_dtor(ork::SetStateTask* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::SetStateTask >::className[] = "SetStateTask";
const char LunaTraits< ork::SetStateTask >::fullName[] = "ork::SetStateTask";
const char LunaTraits< ork::SetStateTask >::moduleName[] = "ork";
const char* LunaTraits< ork::SetStateTask >::parents[] = {"ork.AbstractTask", 0};
const int LunaTraits< ork::SetStateTask >::hash = 14841760;
const int LunaTraits< ork::SetStateTask >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::SetStateTask >::methods[] = {
	{"addRunnable", &luna_wrapper_ork_SetStateTask::_bind_addRunnable},
	{"setViewport", &luna_wrapper_ork_SetStateTask::_bind_setViewport},
	{"setDepthRange", &luna_wrapper_ork_SetStateTask::_bind_setDepthRange},
	{"setClipDistances", &luna_wrapper_ork_SetStateTask::_bind_setClipDistances},
	{"setClearColor", &luna_wrapper_ork_SetStateTask::_bind_setClearColor},
	{"setClearDepth", &luna_wrapper_ork_SetStateTask::_bind_setClearDepth},
	{"setClearStencil", &luna_wrapper_ork_SetStateTask::_bind_setClearStencil},
	{"setPointSize", &luna_wrapper_ork_SetStateTask::_bind_setPointSize},
	{"setPointFadeThresholdSize", &luna_wrapper_ork_SetStateTask::_bind_setPointFadeThresholdSize},
	{"setPointLowerLeftOrigin", &luna_wrapper_ork_SetStateTask::_bind_setPointLowerLeftOrigin},
	{"setLineWidth", &luna_wrapper_ork_SetStateTask::_bind_setLineWidth},
	{"setLineSmooth", &luna_wrapper_ork_SetStateTask::_bind_setLineSmooth},
	{"setFrontFaceCW", &luna_wrapper_ork_SetStateTask::_bind_setFrontFaceCW},
	{"setPolygonMode", &luna_wrapper_ork_SetStateTask::_bind_setPolygonMode},
	{"setPolygonSmooth", &luna_wrapper_ork_SetStateTask::_bind_setPolygonSmooth},
	{"setPolygonOffset", &luna_wrapper_ork_SetStateTask::_bind_setPolygonOffset},
	{"setMultisample", &luna_wrapper_ork_SetStateTask::_bind_setMultisample},
	{"setSampleAlpha", &luna_wrapper_ork_SetStateTask::_bind_setSampleAlpha},
	{"setSampleCoverage", &luna_wrapper_ork_SetStateTask::_bind_setSampleCoverage},
	{"setSampleMask", &luna_wrapper_ork_SetStateTask::_bind_setSampleMask},
	{"setSampleShading", &luna_wrapper_ork_SetStateTask::_bind_setSampleShading},
	{"setOcclusionTest", &luna_wrapper_ork_SetStateTask::_bind_setOcclusionTest},
	{"setScissorTest", &luna_wrapper_ork_SetStateTask::_bind_setScissorTest},
	{"setStencilTest", &luna_wrapper_ork_SetStateTask::_bind_setStencilTest},
	{"setDepthTest", &luna_wrapper_ork_SetStateTask::_bind_setDepthTest},
	{"setBlend", &luna_wrapper_ork_SetStateTask::_bind_setBlend},
	{"setBlendColor", &luna_wrapper_ork_SetStateTask::_bind_setBlendColor},
	{"setDither", &luna_wrapper_ork_SetStateTask::_bind_setDither},
	{"setLogicOp", &luna_wrapper_ork_SetStateTask::_bind_setLogicOp},
	{"setColorMask", &luna_wrapper_ork_SetStateTask::_bind_setColorMask},
	{"setDepthMask", &luna_wrapper_ork_SetStateTask::_bind_setDepthMask},
	{"setStencilMask", &luna_wrapper_ork_SetStateTask::_bind_setStencilMask},
	{"setClearState", &luna_wrapper_ork_SetStateTask::_bind_setClearState},
	{"setBuffers", &luna_wrapper_ork_SetStateTask::_bind_setBuffers},
	{"getTask", &luna_wrapper_ork_SetStateTask::_bind_getTask},
	{"base_toString", &luna_wrapper_ork_SetStateTask::_bind_base_toString},
	{"base_getTask", &luna_wrapper_ork_SetStateTask::_bind_base_getTask},
	{"fromVoid", &luna_wrapper_ork_SetStateTask::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_SetStateTask::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_SetStateTask::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::SetStateTask >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_SetStateTask::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::SetStateTask >::enumValues[] = {
	{0,0}
};


