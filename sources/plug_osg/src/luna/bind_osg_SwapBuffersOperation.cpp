#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_SwapBuffersOperation.h>

class luna_wrapper_osg_SwapBuffersOperation {
public:
	typedef Luna< osg::SwapBuffersOperation > luna_t;

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

		osg::SwapBuffersOperation* self= (osg::SwapBuffersOperation*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::SwapBuffersOperation >::push(L,self,false);
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
		//osg::SwapBuffersOperation* ptr= dynamic_cast< osg::SwapBuffersOperation* >(Luna< osg::Referenced >::check(L,1));
		osg::SwapBuffersOperation* ptr= luna_caster< osg::Referenced, osg::SwapBuffersOperation >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::SwapBuffersOperation >::push(L,ptr,false);
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
	// osg::SwapBuffersOperation::SwapBuffersOperation()
	static osg::SwapBuffersOperation* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::SwapBuffersOperation::SwapBuffersOperation() function, expected prototype:\nosg::SwapBuffersOperation::SwapBuffersOperation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::SwapBuffersOperation();
	}

	// osg::SwapBuffersOperation::SwapBuffersOperation(lua_Table * data)
	static osg::SwapBuffersOperation* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::SwapBuffersOperation::SwapBuffersOperation(lua_Table * data) function, expected prototype:\nosg::SwapBuffersOperation::SwapBuffersOperation(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_SwapBuffersOperation(L,NULL);
	}

	// Overload binder for osg::SwapBuffersOperation::SwapBuffersOperation
	static osg::SwapBuffersOperation* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function SwapBuffersOperation, cannot match any of the overloads for function SwapBuffersOperation:\n  SwapBuffersOperation()\n  SwapBuffersOperation(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::SwapBuffersOperation::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::SwapBuffersOperation::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::SwapBuffersOperation::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::SwapBuffersOperation* self=Luna< osg::Referenced >::checkSubType< osg::SwapBuffersOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::SwapBuffersOperation::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SwapBuffersOperation::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::SwapBuffersOperation::base_release()
	static int _bind_base_release(lua_State *L) {
		if (!_lg_typecheck_base_release(L)) {
			luaL_error(L, "luna typecheck failed in void osg::SwapBuffersOperation::base_release() function, expected prototype:\nvoid osg::SwapBuffersOperation::base_release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::SwapBuffersOperation* self=Luna< osg::Referenced >::checkSubType< osg::SwapBuffersOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::SwapBuffersOperation::base_release(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SwapBuffersOperation::release();

		return 0;
	}


	// Operator binds:
	// void osg::SwapBuffersOperation::operator()(osg::GraphicsContext * context)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luaL_error(L, "luna typecheck failed in void osg::SwapBuffersOperation::operator()(osg::GraphicsContext * context) function, expected prototype:\nvoid osg::SwapBuffersOperation::operator()(osg::GraphicsContext * context)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GraphicsContext* context=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,2));

		osg::SwapBuffersOperation* self=Luna< osg::Referenced >::checkSubType< osg::SwapBuffersOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::SwapBuffersOperation::operator()(osg::GraphicsContext *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator()(context);

		return 0;
	}


};

osg::SwapBuffersOperation* LunaTraits< osg::SwapBuffersOperation >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_SwapBuffersOperation::_bind_ctor(L);
}

void LunaTraits< osg::SwapBuffersOperation >::_bind_dtor(osg::SwapBuffersOperation* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::SwapBuffersOperation >::className[] = "SwapBuffersOperation";
const char LunaTraits< osg::SwapBuffersOperation >::fullName[] = "osg::SwapBuffersOperation";
const char LunaTraits< osg::SwapBuffersOperation >::moduleName[] = "osg";
const char* LunaTraits< osg::SwapBuffersOperation >::parents[] = {"osg.GraphicsOperation", 0};
const int LunaTraits< osg::SwapBuffersOperation >::hash = 11954890;
const int LunaTraits< osg::SwapBuffersOperation >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::SwapBuffersOperation >::methods[] = {
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_SwapBuffersOperation::_bind_base_setThreadSafeRefUnref},
	{"base_release", &luna_wrapper_osg_SwapBuffersOperation::_bind_base_release},
	{"op_call", &luna_wrapper_osg_SwapBuffersOperation::_bind_op_call},
	{"fromVoid", &luna_wrapper_osg_SwapBuffersOperation::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_SwapBuffersOperation::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_SwapBuffersOperation::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::SwapBuffersOperation >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_SwapBuffersOperation::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::SwapBuffersOperation >::enumValues[] = {
	{0,0}
};


