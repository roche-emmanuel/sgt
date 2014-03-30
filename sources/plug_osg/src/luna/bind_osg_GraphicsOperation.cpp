#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_GraphicsOperation.h>

class luna_wrapper_osg_GraphicsOperation {
public:
	typedef Luna< osg::GraphicsOperation > luna_t;

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

		osg::GraphicsOperation* self= (osg::GraphicsOperation*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::GraphicsOperation >::push(L,self,false);
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
		//osg::GraphicsOperation* ptr= dynamic_cast< osg::GraphicsOperation* >(Luna< osg::Referenced >::check(L,1));
		osg::GraphicsOperation* ptr= luna_caster< osg::Referenced, osg::GraphicsOperation >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GraphicsOperation >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
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
	// (found 2 valid operators)
	inline static bool _lg_typecheck_op_call_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_call_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,2)) ) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::GraphicsOperation::GraphicsOperation(lua_Table * data, const std::string & name, bool keep)
	static osg::GraphicsOperation* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osg::GraphicsOperation::GraphicsOperation(lua_Table * data, const std::string & name, bool keep) function, expected prototype:\nosg::GraphicsOperation::GraphicsOperation(lua_Table * data, const std::string & name, bool keep)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		bool keep=(bool)(lua_toboolean(L,3)==1);

		return new wrapper_osg_GraphicsOperation(L,NULL, name, keep);
	}


	// Function binds:
	// void osg::GraphicsOperation::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsOperation::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::GraphicsOperation::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::GraphicsOperation* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsOperation::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsOperation::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::GraphicsOperation::base_release()
	static int _bind_base_release(lua_State *L) {
		if (!_lg_typecheck_base_release(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsOperation::base_release() function, expected prototype:\nvoid osg::GraphicsOperation::base_release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsOperation* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsOperation::base_release(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsOperation::release();

		return 0;
	}


	// Operator binds:
	// void osg::GraphicsOperation::operator()(osg::Object * object)
	static int _bind_op_call_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsOperation::operator()(osg::Object * object) function, expected prototype:\nvoid osg::GraphicsOperation::operator()(osg::Object * object)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Object* object=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::GraphicsOperation* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsOperation::operator()(osg::Object *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator()(object);

		return 0;
	}

	// void osg::GraphicsOperation::operator()(osg::GraphicsContext * context)
	static int _bind_op_call_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsOperation::operator()(osg::GraphicsContext * context) function, expected prototype:\nvoid osg::GraphicsOperation::operator()(osg::GraphicsContext * context)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GraphicsContext* context=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,2));

		osg::GraphicsOperation* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsOperation::operator()(osg::GraphicsContext *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator()(context);

		return 0;
	}

	// Overload binder for osg::GraphicsOperation::operator()
	static int _bind_op_call(lua_State *L) {
		if (_lg_typecheck_op_call_overload_1(L)) return _bind_op_call_overload_1(L);
		if (_lg_typecheck_op_call_overload_2(L)) return _bind_op_call_overload_2(L);

		luaL_error(L, "error in function operator(), cannot match any of the overloads for function operator():\n  operator()(osg::Object *)\n  operator()(osg::GraphicsContext *)\n");
		return 0;
	}


};

osg::GraphicsOperation* LunaTraits< osg::GraphicsOperation >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_GraphicsOperation::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osg::GraphicsOperation::operator()(osg::GraphicsContext * context)
}

void LunaTraits< osg::GraphicsOperation >::_bind_dtor(osg::GraphicsOperation* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::GraphicsOperation >::className[] = "GraphicsOperation";
const char LunaTraits< osg::GraphicsOperation >::fullName[] = "osg::GraphicsOperation";
const char LunaTraits< osg::GraphicsOperation >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsOperation >::parents[] = {"osg.Operation", 0};
const int LunaTraits< osg::GraphicsOperation >::hash = 64493298;
const int LunaTraits< osg::GraphicsOperation >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::GraphicsOperation >::methods[] = {
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_GraphicsOperation::_bind_base_setThreadSafeRefUnref},
	{"base_release", &luna_wrapper_osg_GraphicsOperation::_bind_base_release},
	{"op_call", &luna_wrapper_osg_GraphicsOperation::_bind_op_call},
	{"fromVoid", &luna_wrapper_osg_GraphicsOperation::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_GraphicsOperation::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_GraphicsOperation::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GraphicsOperation >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_GraphicsOperation::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GraphicsOperation >::enumValues[] = {
	{0,0}
};


