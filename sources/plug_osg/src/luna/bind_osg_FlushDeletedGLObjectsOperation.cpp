#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_FlushDeletedGLObjectsOperation.h>

class luna_wrapper_osg_FlushDeletedGLObjectsOperation {
public:
	typedef Luna< osg::FlushDeletedGLObjectsOperation > luna_t;

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

		osg::FlushDeletedGLObjectsOperation* self= (osg::FlushDeletedGLObjectsOperation*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::FlushDeletedGLObjectsOperation >::push(L,self,false);
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
		//osg::FlushDeletedGLObjectsOperation* ptr= dynamic_cast< osg::FlushDeletedGLObjectsOperation* >(Luna< osg::Referenced >::check(L,1));
		osg::FlushDeletedGLObjectsOperation* ptr= luna_caster< osg::Referenced, osg::FlushDeletedGLObjectsOperation >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::FlushDeletedGLObjectsOperation >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getAvailableTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAvailableTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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
	// osg::FlushDeletedGLObjectsOperation::FlushDeletedGLObjectsOperation(double availableTime, bool keep = false)
	static osg::FlushDeletedGLObjectsOperation* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::FlushDeletedGLObjectsOperation::FlushDeletedGLObjectsOperation(double availableTime, bool keep = false) function, expected prototype:\nosg::FlushDeletedGLObjectsOperation::FlushDeletedGLObjectsOperation(double availableTime, bool keep = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double availableTime=(double)lua_tonumber(L,1);
		bool keep=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		return new osg::FlushDeletedGLObjectsOperation(availableTime, keep);
	}

	// osg::FlushDeletedGLObjectsOperation::FlushDeletedGLObjectsOperation(lua_Table * data, double availableTime, bool keep = false)
	static osg::FlushDeletedGLObjectsOperation* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::FlushDeletedGLObjectsOperation::FlushDeletedGLObjectsOperation(lua_Table * data, double availableTime, bool keep = false) function, expected prototype:\nosg::FlushDeletedGLObjectsOperation::FlushDeletedGLObjectsOperation(lua_Table * data, double availableTime, bool keep = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double availableTime=(double)lua_tonumber(L,2);
		bool keep=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		return new wrapper_osg_FlushDeletedGLObjectsOperation(L,NULL, availableTime, keep);
	}

	// Overload binder for osg::FlushDeletedGLObjectsOperation::FlushDeletedGLObjectsOperation
	static osg::FlushDeletedGLObjectsOperation* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function FlushDeletedGLObjectsOperation, cannot match any of the overloads for function FlushDeletedGLObjectsOperation:\n  FlushDeletedGLObjectsOperation(double, bool)\n  FlushDeletedGLObjectsOperation(lua_Table *, double, bool)\n");
		return NULL;
	}


	// Function binds:
	// double osg::FlushDeletedGLObjectsOperation::_availableTime()
	static int _bind_getAvailableTime(lua_State *L) {
		if (!_lg_typecheck_getAvailableTime(L)) {
			luaL_error(L, "luna typecheck failed in double osg::FlushDeletedGLObjectsOperation::_availableTime() function, expected prototype:\ndouble osg::FlushDeletedGLObjectsOperation::_availableTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FlushDeletedGLObjectsOperation* self=Luna< osg::Referenced >::checkSubType< osg::FlushDeletedGLObjectsOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::FlushDeletedGLObjectsOperation::_availableTime(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->_availableTime;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::FlushDeletedGLObjectsOperation::_availableTime(double value)
	static int _bind_setAvailableTime(lua_State *L) {
		if (!_lg_typecheck_setAvailableTime(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FlushDeletedGLObjectsOperation::_availableTime(double value) function, expected prototype:\nvoid osg::FlushDeletedGLObjectsOperation::_availableTime(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		osg::FlushDeletedGLObjectsOperation* self=Luna< osg::Referenced >::checkSubType< osg::FlushDeletedGLObjectsOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FlushDeletedGLObjectsOperation::_availableTime(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_availableTime = value;

		return 0;
	}

	// void osg::FlushDeletedGLObjectsOperation::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FlushDeletedGLObjectsOperation::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::FlushDeletedGLObjectsOperation::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::FlushDeletedGLObjectsOperation* self=Luna< osg::Referenced >::checkSubType< osg::FlushDeletedGLObjectsOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FlushDeletedGLObjectsOperation::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FlushDeletedGLObjectsOperation::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::FlushDeletedGLObjectsOperation::base_release()
	static int _bind_base_release(lua_State *L) {
		if (!_lg_typecheck_base_release(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FlushDeletedGLObjectsOperation::base_release() function, expected prototype:\nvoid osg::FlushDeletedGLObjectsOperation::base_release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FlushDeletedGLObjectsOperation* self=Luna< osg::Referenced >::checkSubType< osg::FlushDeletedGLObjectsOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FlushDeletedGLObjectsOperation::base_release(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FlushDeletedGLObjectsOperation::release();

		return 0;
	}


	// Operator binds:
	// void osg::FlushDeletedGLObjectsOperation::operator()(osg::GraphicsContext * arg1)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FlushDeletedGLObjectsOperation::operator()(osg::GraphicsContext * arg1) function, expected prototype:\nvoid osg::FlushDeletedGLObjectsOperation::operator()(osg::GraphicsContext * arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GraphicsContext* _arg1=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,2));

		osg::FlushDeletedGLObjectsOperation* self=Luna< osg::Referenced >::checkSubType< osg::FlushDeletedGLObjectsOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FlushDeletedGLObjectsOperation::operator()(osg::GraphicsContext *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator()(_arg1);

		return 0;
	}


};

osg::FlushDeletedGLObjectsOperation* LunaTraits< osg::FlushDeletedGLObjectsOperation >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_FlushDeletedGLObjectsOperation::_bind_ctor(L);
}

void LunaTraits< osg::FlushDeletedGLObjectsOperation >::_bind_dtor(osg::FlushDeletedGLObjectsOperation* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::FlushDeletedGLObjectsOperation >::className[] = "FlushDeletedGLObjectsOperation";
const char LunaTraits< osg::FlushDeletedGLObjectsOperation >::fullName[] = "osg::FlushDeletedGLObjectsOperation";
const char LunaTraits< osg::FlushDeletedGLObjectsOperation >::moduleName[] = "osg";
const char* LunaTraits< osg::FlushDeletedGLObjectsOperation >::parents[] = {"osg.GraphicsOperation", 0};
const int LunaTraits< osg::FlushDeletedGLObjectsOperation >::hash = 15266697;
const int LunaTraits< osg::FlushDeletedGLObjectsOperation >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::FlushDeletedGLObjectsOperation >::methods[] = {
	{"getAvailableTime", &luna_wrapper_osg_FlushDeletedGLObjectsOperation::_bind_getAvailableTime},
	{"setAvailableTime", &luna_wrapper_osg_FlushDeletedGLObjectsOperation::_bind_setAvailableTime},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_FlushDeletedGLObjectsOperation::_bind_base_setThreadSafeRefUnref},
	{"base_release", &luna_wrapper_osg_FlushDeletedGLObjectsOperation::_bind_base_release},
	{"op_call", &luna_wrapper_osg_FlushDeletedGLObjectsOperation::_bind_op_call},
	{"fromVoid", &luna_wrapper_osg_FlushDeletedGLObjectsOperation::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_FlushDeletedGLObjectsOperation::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_FlushDeletedGLObjectsOperation::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::FlushDeletedGLObjectsOperation >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_FlushDeletedGLObjectsOperation::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::FlushDeletedGLObjectsOperation >::enumValues[] = {
	{0,0}
};


