#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_BlockAndFlushOperation.h>

class luna_wrapper_osg_BlockAndFlushOperation {
public:
	typedef Luna< osg::BlockAndFlushOperation > luna_t;

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

		osg::BlockAndFlushOperation* self= (osg::BlockAndFlushOperation*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::BlockAndFlushOperation >::push(L,self,false);
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
		//osg::BlockAndFlushOperation* ptr= dynamic_cast< osg::BlockAndFlushOperation* >(Luna< osg::Referenced >::check(L,1));
		osg::BlockAndFlushOperation* ptr= luna_caster< osg::Referenced, osg::BlockAndFlushOperation >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::BlockAndFlushOperation >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Block(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osg::BlockAndFlushOperation* ptr= dynamic_cast< osg::BlockAndFlushOperation* >(Luna< OpenThreads::Block >::check(L,1));
		osg::BlockAndFlushOperation* ptr= luna_caster< OpenThreads::Block, osg::BlockAndFlushOperation >::cast(Luna< OpenThreads::Block >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::BlockAndFlushOperation >::push(L,ptr,false);
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
	// osg::BlockAndFlushOperation::BlockAndFlushOperation()
	static osg::BlockAndFlushOperation* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::BlockAndFlushOperation::BlockAndFlushOperation() function, expected prototype:\nosg::BlockAndFlushOperation::BlockAndFlushOperation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::BlockAndFlushOperation();
	}

	// osg::BlockAndFlushOperation::BlockAndFlushOperation(lua_Table * data)
	static osg::BlockAndFlushOperation* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::BlockAndFlushOperation::BlockAndFlushOperation(lua_Table * data) function, expected prototype:\nosg::BlockAndFlushOperation::BlockAndFlushOperation(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_BlockAndFlushOperation(L,NULL);
	}

	// Overload binder for osg::BlockAndFlushOperation::BlockAndFlushOperation
	static osg::BlockAndFlushOperation* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function BlockAndFlushOperation, cannot match any of the overloads for function BlockAndFlushOperation:\n  BlockAndFlushOperation()\n  BlockAndFlushOperation(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::BlockAndFlushOperation::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlockAndFlushOperation::release() function, expected prototype:\nvoid osg::BlockAndFlushOperation::release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlockAndFlushOperation* self=Luna< osg::Referenced >::checkSubType< osg::BlockAndFlushOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlockAndFlushOperation::release(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->release();

		return 0;
	}

	// void osg::BlockAndFlushOperation::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlockAndFlushOperation::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::BlockAndFlushOperation::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::BlockAndFlushOperation* self=Luna< osg::Referenced >::checkSubType< osg::BlockAndFlushOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlockAndFlushOperation::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BlockAndFlushOperation::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::BlockAndFlushOperation::base_release()
	static int _bind_base_release(lua_State *L) {
		if (!_lg_typecheck_base_release(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlockAndFlushOperation::base_release() function, expected prototype:\nvoid osg::BlockAndFlushOperation::base_release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlockAndFlushOperation* self=Luna< osg::Referenced >::checkSubType< osg::BlockAndFlushOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlockAndFlushOperation::base_release(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BlockAndFlushOperation::release();

		return 0;
	}


	// Operator binds:
	// void osg::BlockAndFlushOperation::operator()(osg::GraphicsContext * arg1)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlockAndFlushOperation::operator()(osg::GraphicsContext * arg1) function, expected prototype:\nvoid osg::BlockAndFlushOperation::operator()(osg::GraphicsContext * arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GraphicsContext* _arg1=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,2));

		osg::BlockAndFlushOperation* self=Luna< osg::Referenced >::checkSubType< osg::BlockAndFlushOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlockAndFlushOperation::operator()(osg::GraphicsContext *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator()(_arg1);

		return 0;
	}


	inline static bool _lg_typecheck_baseCast_OpenThreads_Block(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_OpenThreads_Block(lua_State *L) {
		if (!_lg_typecheck_baseCast_OpenThreads_Block(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_OpenThreads_Block function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		OpenThreads::Block* res = luna_caster<osg::Referenced,OpenThreads::Block>::cast(self); // dynamic_cast<OpenThreads::Block*>(self);
		if(!res)
			return 0;
			
		Luna< OpenThreads::Block >::push(L,res,false);
		return 1;

	}

};

osg::BlockAndFlushOperation* LunaTraits< osg::BlockAndFlushOperation >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_BlockAndFlushOperation::_bind_ctor(L);
}

void LunaTraits< osg::BlockAndFlushOperation >::_bind_dtor(osg::BlockAndFlushOperation* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::BlockAndFlushOperation >::className[] = "BlockAndFlushOperation";
const char LunaTraits< osg::BlockAndFlushOperation >::fullName[] = "osg::BlockAndFlushOperation";
const char LunaTraits< osg::BlockAndFlushOperation >::moduleName[] = "osg";
const char* LunaTraits< osg::BlockAndFlushOperation >::parents[] = {"osg.GraphicsOperation", "OpenThreads.Block", 0};
const int LunaTraits< osg::BlockAndFlushOperation >::hash = 75998919;
const int LunaTraits< osg::BlockAndFlushOperation >::uniqueIDs[] = {50169651, 92736679,0};

luna_RegType LunaTraits< osg::BlockAndFlushOperation >::methods[] = {
	{"release", &luna_wrapper_osg_BlockAndFlushOperation::_bind_release},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_BlockAndFlushOperation::_bind_base_setThreadSafeRefUnref},
	{"base_release", &luna_wrapper_osg_BlockAndFlushOperation::_bind_base_release},
	{"op_call", &luna_wrapper_osg_BlockAndFlushOperation::_bind_op_call},
	{"fromVoid", &luna_wrapper_osg_BlockAndFlushOperation::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_BlockAndFlushOperation::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_BlockAndFlushOperation::_bind_getTable},
	{"asBlock", &luna_wrapper_osg_BlockAndFlushOperation::_bind_baseCast_OpenThreads_Block},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BlockAndFlushOperation >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_BlockAndFlushOperation::_cast_from_Referenced},
	{"OpenThreads::Block", &luna_wrapper_osg_BlockAndFlushOperation::_cast_from_Block},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BlockAndFlushOperation >::enumValues[] = {
	{0,0}
};


