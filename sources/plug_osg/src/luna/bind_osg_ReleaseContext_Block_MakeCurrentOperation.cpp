#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ReleaseContext_Block_MakeCurrentOperation.h>

class luna_wrapper_osg_ReleaseContext_Block_MakeCurrentOperation {
public:
	typedef Luna< osg::ReleaseContext_Block_MakeCurrentOperation > luna_t;

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

		osg::ReleaseContext_Block_MakeCurrentOperation* self= (osg::ReleaseContext_Block_MakeCurrentOperation*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ReleaseContext_Block_MakeCurrentOperation >::push(L,self,false);
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
		//osg::ReleaseContext_Block_MakeCurrentOperation* ptr= dynamic_cast< osg::ReleaseContext_Block_MakeCurrentOperation* >(Luna< osg::Referenced >::check(L,1));
		osg::ReleaseContext_Block_MakeCurrentOperation* ptr= luna_caster< osg::Referenced, osg::ReleaseContext_Block_MakeCurrentOperation >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ReleaseContext_Block_MakeCurrentOperation >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Block(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osg::ReleaseContext_Block_MakeCurrentOperation* ptr= dynamic_cast< osg::ReleaseContext_Block_MakeCurrentOperation* >(Luna< OpenThreads::Block >::check(L,1));
		osg::ReleaseContext_Block_MakeCurrentOperation* ptr= luna_caster< OpenThreads::Block, osg::ReleaseContext_Block_MakeCurrentOperation >::cast(Luna< OpenThreads::Block >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ReleaseContext_Block_MakeCurrentOperation >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// osg::ReleaseContext_Block_MakeCurrentOperation::ReleaseContext_Block_MakeCurrentOperation()
	static osg::ReleaseContext_Block_MakeCurrentOperation* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ReleaseContext_Block_MakeCurrentOperation::ReleaseContext_Block_MakeCurrentOperation() function, expected prototype:\nosg::ReleaseContext_Block_MakeCurrentOperation::ReleaseContext_Block_MakeCurrentOperation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::ReleaseContext_Block_MakeCurrentOperation();
	}

	// osg::ReleaseContext_Block_MakeCurrentOperation::ReleaseContext_Block_MakeCurrentOperation(lua_Table * data)
	static osg::ReleaseContext_Block_MakeCurrentOperation* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ReleaseContext_Block_MakeCurrentOperation::ReleaseContext_Block_MakeCurrentOperation(lua_Table * data) function, expected prototype:\nosg::ReleaseContext_Block_MakeCurrentOperation::ReleaseContext_Block_MakeCurrentOperation(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_ReleaseContext_Block_MakeCurrentOperation(L,NULL);
	}

	// Overload binder for osg::ReleaseContext_Block_MakeCurrentOperation::ReleaseContext_Block_MakeCurrentOperation
	static osg::ReleaseContext_Block_MakeCurrentOperation* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ReleaseContext_Block_MakeCurrentOperation, cannot match any of the overloads for function ReleaseContext_Block_MakeCurrentOperation:\n  ReleaseContext_Block_MakeCurrentOperation()\n  ReleaseContext_Block_MakeCurrentOperation(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::ReleaseContext_Block_MakeCurrentOperation::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ReleaseContext_Block_MakeCurrentOperation::release() function, expected prototype:\nvoid osg::ReleaseContext_Block_MakeCurrentOperation::release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ReleaseContext_Block_MakeCurrentOperation* self=Luna< osg::Referenced >::checkSubType< osg::ReleaseContext_Block_MakeCurrentOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ReleaseContext_Block_MakeCurrentOperation::release(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->release();

		return 0;
	}

	// void osg::ReleaseContext_Block_MakeCurrentOperation::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ReleaseContext_Block_MakeCurrentOperation::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::ReleaseContext_Block_MakeCurrentOperation::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::ReleaseContext_Block_MakeCurrentOperation* self=Luna< osg::Referenced >::checkSubType< osg::ReleaseContext_Block_MakeCurrentOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ReleaseContext_Block_MakeCurrentOperation::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ReleaseContext_Block_MakeCurrentOperation::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::ReleaseContext_Block_MakeCurrentOperation::base_release()
	static int _bind_base_release(lua_State *L) {
		if (!_lg_typecheck_base_release(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ReleaseContext_Block_MakeCurrentOperation::base_release() function, expected prototype:\nvoid osg::ReleaseContext_Block_MakeCurrentOperation::base_release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ReleaseContext_Block_MakeCurrentOperation* self=Luna< osg::Referenced >::checkSubType< osg::ReleaseContext_Block_MakeCurrentOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ReleaseContext_Block_MakeCurrentOperation::base_release(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ReleaseContext_Block_MakeCurrentOperation::release();

		return 0;
	}


	// Operator binds:
	// void osg::ReleaseContext_Block_MakeCurrentOperation::operator()(osg::GraphicsContext * context)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ReleaseContext_Block_MakeCurrentOperation::operator()(osg::GraphicsContext * context) function, expected prototype:\nvoid osg::ReleaseContext_Block_MakeCurrentOperation::operator()(osg::GraphicsContext * context)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GraphicsContext* context=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,2));

		osg::ReleaseContext_Block_MakeCurrentOperation* self=Luna< osg::Referenced >::checkSubType< osg::ReleaseContext_Block_MakeCurrentOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ReleaseContext_Block_MakeCurrentOperation::operator()(osg::GraphicsContext *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator()(context);

		return 0;
	}


};

osg::ReleaseContext_Block_MakeCurrentOperation* LunaTraits< osg::ReleaseContext_Block_MakeCurrentOperation >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ReleaseContext_Block_MakeCurrentOperation::_bind_ctor(L);
}

void LunaTraits< osg::ReleaseContext_Block_MakeCurrentOperation >::_bind_dtor(osg::ReleaseContext_Block_MakeCurrentOperation* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ReleaseContext_Block_MakeCurrentOperation >::className[] = "ReleaseContext_Block_MakeCurrentOperation";
const char LunaTraits< osg::ReleaseContext_Block_MakeCurrentOperation >::fullName[] = "osg::ReleaseContext_Block_MakeCurrentOperation";
const char LunaTraits< osg::ReleaseContext_Block_MakeCurrentOperation >::moduleName[] = "osg";
const char* LunaTraits< osg::ReleaseContext_Block_MakeCurrentOperation >::parents[] = {"osg.GraphicsOperation", "osg.RefBlock", 0};
const int LunaTraits< osg::ReleaseContext_Block_MakeCurrentOperation >::hash = 12633089;
const int LunaTraits< osg::ReleaseContext_Block_MakeCurrentOperation >::uniqueIDs[] = {50169651, 92736679,0};

luna_RegType LunaTraits< osg::ReleaseContext_Block_MakeCurrentOperation >::methods[] = {
	{"release", &luna_wrapper_osg_ReleaseContext_Block_MakeCurrentOperation::_bind_release},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_ReleaseContext_Block_MakeCurrentOperation::_bind_base_setThreadSafeRefUnref},
	{"base_release", &luna_wrapper_osg_ReleaseContext_Block_MakeCurrentOperation::_bind_base_release},
	{"op_call", &luna_wrapper_osg_ReleaseContext_Block_MakeCurrentOperation::_bind_op_call},
	{"fromVoid", &luna_wrapper_osg_ReleaseContext_Block_MakeCurrentOperation::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ReleaseContext_Block_MakeCurrentOperation::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_ReleaseContext_Block_MakeCurrentOperation::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ReleaseContext_Block_MakeCurrentOperation >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ReleaseContext_Block_MakeCurrentOperation::_cast_from_Referenced},
	{"OpenThreads::Block", &luna_wrapper_osg_ReleaseContext_Block_MakeCurrentOperation::_cast_from_Block},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ReleaseContext_Block_MakeCurrentOperation >::enumValues[] = {
	{0,0}
};


