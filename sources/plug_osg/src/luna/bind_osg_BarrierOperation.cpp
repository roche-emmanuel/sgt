#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_BarrierOperation.h>

class luna_wrapper_osg_BarrierOperation {
public:
	typedef Luna< osg::BarrierOperation > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		osg::BarrierOperation* self= (osg::BarrierOperation*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::BarrierOperation >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osg::BarrierOperation* ptr= dynamic_cast< osg::BarrierOperation* >(Luna< osg::Referenced >::check(L,1));
		osg::BarrierOperation* ptr= luna_caster< osg::Referenced, osg::BarrierOperation >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::BarrierOperation >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Barrier(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osg::BarrierOperation* ptr= dynamic_cast< osg::BarrierOperation* >(Luna< OpenThreads::Barrier >::check(L,1));
		osg::BarrierOperation* ptr= luna_caster< OpenThreads::Barrier, osg::BarrierOperation >::cast(Luna< OpenThreads::Barrier >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::BarrierOperation >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPreBlockOp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPreBlockOp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_block(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_numThreadsCurrentlyBlocked(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::BarrierOperation::BarrierOperation(int numThreads, osg::BarrierOperation::PreBlockOp op = osg::BarrierOperation::NO_OPERATION, bool keep = true)
	static osg::BarrierOperation* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::BarrierOperation::BarrierOperation(int numThreads, osg::BarrierOperation::PreBlockOp op = osg::BarrierOperation::NO_OPERATION, bool keep = true) function, expected prototype:\nosg::BarrierOperation::BarrierOperation(int numThreads, osg::BarrierOperation::PreBlockOp op = osg::BarrierOperation::NO_OPERATION, bool keep = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int numThreads=(int)lua_tointeger(L,1);
		osg::BarrierOperation::PreBlockOp op=luatop>1 ? (osg::BarrierOperation::PreBlockOp)lua_tointeger(L,2) : (osg::BarrierOperation::PreBlockOp)osg::BarrierOperation::NO_OPERATION;
		bool keep=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		return new osg::BarrierOperation(numThreads, op, keep);
	}

	// osg::BarrierOperation::BarrierOperation(lua_Table * data, int numThreads, osg::BarrierOperation::PreBlockOp op = osg::BarrierOperation::NO_OPERATION, bool keep = true)
	static osg::BarrierOperation* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::BarrierOperation::BarrierOperation(lua_Table * data, int numThreads, osg::BarrierOperation::PreBlockOp op = osg::BarrierOperation::NO_OPERATION, bool keep = true) function, expected prototype:\nosg::BarrierOperation::BarrierOperation(lua_Table * data, int numThreads, osg::BarrierOperation::PreBlockOp op = osg::BarrierOperation::NO_OPERATION, bool keep = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int numThreads=(int)lua_tointeger(L,2);
		osg::BarrierOperation::PreBlockOp op=luatop>2 ? (osg::BarrierOperation::PreBlockOp)lua_tointeger(L,3) : (osg::BarrierOperation::PreBlockOp)osg::BarrierOperation::NO_OPERATION;
		bool keep=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		return new wrapper_osg_BarrierOperation(L,NULL, numThreads, op, keep);
	}

	// Overload binder for osg::BarrierOperation::BarrierOperation
	static osg::BarrierOperation* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function BarrierOperation, cannot match any of the overloads for function BarrierOperation:\n  BarrierOperation(int, osg::BarrierOperation::PreBlockOp, bool)\n  BarrierOperation(lua_Table *, int, osg::BarrierOperation::PreBlockOp, bool)\n");
		return NULL;
	}


	// Function binds:
	// void osg::BarrierOperation::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BarrierOperation::release() function, expected prototype:\nvoid osg::BarrierOperation::release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BarrierOperation* self=Luna< osg::Referenced >::checkSubType< osg::BarrierOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BarrierOperation::release(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->release();

		return 0;
	}

	// osg::BarrierOperation::PreBlockOp osg::BarrierOperation::_preBlockOp()
	static int _bind_getPreBlockOp(lua_State *L) {
		if (!_lg_typecheck_getPreBlockOp(L)) {
			luaL_error(L, "luna typecheck failed in osg::BarrierOperation::PreBlockOp osg::BarrierOperation::_preBlockOp() function, expected prototype:\nosg::BarrierOperation::PreBlockOp osg::BarrierOperation::_preBlockOp()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BarrierOperation* self=Luna< osg::Referenced >::checkSubType< osg::BarrierOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BarrierOperation::PreBlockOp osg::BarrierOperation::_preBlockOp(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BarrierOperation::PreBlockOp lret = self->_preBlockOp;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BarrierOperation::_preBlockOp(osg::BarrierOperation::PreBlockOp value)
	static int _bind_setPreBlockOp(lua_State *L) {
		if (!_lg_typecheck_setPreBlockOp(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BarrierOperation::_preBlockOp(osg::BarrierOperation::PreBlockOp value) function, expected prototype:\nvoid osg::BarrierOperation::_preBlockOp(osg::BarrierOperation::PreBlockOp value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::BarrierOperation::PreBlockOp value=(osg::BarrierOperation::PreBlockOp)lua_tointeger(L,2);

		osg::BarrierOperation* self=Luna< osg::Referenced >::checkSubType< osg::BarrierOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BarrierOperation::_preBlockOp(osg::BarrierOperation::PreBlockOp). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_preBlockOp = value;

		return 0;
	}

	// void osg::BarrierOperation::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BarrierOperation::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::BarrierOperation::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::BarrierOperation* self=Luna< osg::Referenced >::checkSubType< osg::BarrierOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BarrierOperation::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BarrierOperation::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::BarrierOperation::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BarrierOperation::base_reset() function, expected prototype:\nvoid osg::BarrierOperation::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BarrierOperation* self=Luna< osg::Referenced >::checkSubType< osg::BarrierOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BarrierOperation::base_reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BarrierOperation::reset();

		return 0;
	}

	// void osg::BarrierOperation::base_block(unsigned int numThreads = 0)
	static int _bind_base_block(lua_State *L) {
		if (!_lg_typecheck_base_block(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BarrierOperation::base_block(unsigned int numThreads = 0) function, expected prototype:\nvoid osg::BarrierOperation::base_block(unsigned int numThreads = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int numThreads=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)0;

		osg::BarrierOperation* self=Luna< osg::Referenced >::checkSubType< osg::BarrierOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BarrierOperation::base_block(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BarrierOperation::block(numThreads);

		return 0;
	}

	// int osg::BarrierOperation::base_numThreadsCurrentlyBlocked()
	static int _bind_base_numThreadsCurrentlyBlocked(lua_State *L) {
		if (!_lg_typecheck_base_numThreadsCurrentlyBlocked(L)) {
			luaL_error(L, "luna typecheck failed in int osg::BarrierOperation::base_numThreadsCurrentlyBlocked() function, expected prototype:\nint osg::BarrierOperation::base_numThreadsCurrentlyBlocked()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BarrierOperation* self=Luna< osg::Referenced >::checkSubType< osg::BarrierOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::BarrierOperation::base_numThreadsCurrentlyBlocked(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->BarrierOperation::numThreadsCurrentlyBlocked();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BarrierOperation::base_release()
	static int _bind_base_release(lua_State *L) {
		if (!_lg_typecheck_base_release(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BarrierOperation::base_release() function, expected prototype:\nvoid osg::BarrierOperation::base_release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BarrierOperation* self=Luna< osg::Referenced >::checkSubType< osg::BarrierOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BarrierOperation::base_release(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BarrierOperation::release();

		return 0;
	}


	// Operator binds:
	// void osg::BarrierOperation::operator()(osg::Object * arg1)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BarrierOperation::operator()(osg::Object * arg1) function, expected prototype:\nvoid osg::BarrierOperation::operator()(osg::Object * arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Object* _arg1=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::BarrierOperation* self=Luna< osg::Referenced >::checkSubType< osg::BarrierOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BarrierOperation::operator()(osg::Object *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator()(_arg1);

		return 0;
	}


	inline static bool _lg_typecheck_baseCast_OpenThreads_Barrier(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_OpenThreads_Barrier(lua_State *L) {
		if (!_lg_typecheck_baseCast_OpenThreads_Barrier(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_OpenThreads_Barrier function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		OpenThreads::Barrier* res = luna_caster<osg::Referenced,OpenThreads::Barrier>::cast(self); // dynamic_cast<OpenThreads::Barrier*>(self);
		if(!res)
			return 0;
			
		Luna< OpenThreads::Barrier >::push(L,res,false);
		return 1;

	}

};

osg::BarrierOperation* LunaTraits< osg::BarrierOperation >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_BarrierOperation::_bind_ctor(L);
}

void LunaTraits< osg::BarrierOperation >::_bind_dtor(osg::BarrierOperation* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::BarrierOperation >::className[] = "BarrierOperation";
const char LunaTraits< osg::BarrierOperation >::fullName[] = "osg::BarrierOperation";
const char LunaTraits< osg::BarrierOperation >::moduleName[] = "osg";
const char* LunaTraits< osg::BarrierOperation >::parents[] = {"osg.Operation", "OpenThreads.Barrier", 0};
const int LunaTraits< osg::BarrierOperation >::hash = 64442474;
const int LunaTraits< osg::BarrierOperation >::uniqueIDs[] = {50169651, 8229717,0};

luna_RegType LunaTraits< osg::BarrierOperation >::methods[] = {
	{"release", &luna_wrapper_osg_BarrierOperation::_bind_release},
	{"getPreBlockOp", &luna_wrapper_osg_BarrierOperation::_bind_getPreBlockOp},
	{"setPreBlockOp", &luna_wrapper_osg_BarrierOperation::_bind_setPreBlockOp},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_BarrierOperation::_bind_base_setThreadSafeRefUnref},
	{"base_reset", &luna_wrapper_osg_BarrierOperation::_bind_base_reset},
	{"base_block", &luna_wrapper_osg_BarrierOperation::_bind_base_block},
	{"base_numThreadsCurrentlyBlocked", &luna_wrapper_osg_BarrierOperation::_bind_base_numThreadsCurrentlyBlocked},
	{"base_release", &luna_wrapper_osg_BarrierOperation::_bind_base_release},
	{"op_call", &luna_wrapper_osg_BarrierOperation::_bind_op_call},
	{"fromVoid", &luna_wrapper_osg_BarrierOperation::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_BarrierOperation::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_BarrierOperation::_bind_getTable},
	{"asBarrier", &luna_wrapper_osg_BarrierOperation::_bind_baseCast_OpenThreads_Barrier},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BarrierOperation >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_BarrierOperation::_cast_from_Referenced},
	{"OpenThreads::Barrier", &luna_wrapper_osg_BarrierOperation::_cast_from_Barrier},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BarrierOperation >::enumValues[] = {
	{"NO_OPERATION", osg::BarrierOperation::NO_OPERATION},
	{"GL_FLUSH", osg::BarrierOperation::GL_FLUSH},
	{"GL_FINISH", osg::BarrierOperation::GL_FINISH},
	{0,0}
};


