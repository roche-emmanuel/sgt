#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_State_DynamicObjectRenderingCompletedCallback.h>

class luna_wrapper_osg_State_DynamicObjectRenderingCompletedCallback {
public:
	typedef Luna< osg::State::DynamicObjectRenderingCompletedCallback > luna_t;

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

		osg::State::DynamicObjectRenderingCompletedCallback* self= (osg::State::DynamicObjectRenderingCompletedCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::State::DynamicObjectRenderingCompletedCallback >::push(L,self,false);
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
		//osg::State::DynamicObjectRenderingCompletedCallback* ptr= dynamic_cast< osg::State::DynamicObjectRenderingCompletedCallback* >(Luna< osg::Referenced >::check(L,1));
		osg::State::DynamicObjectRenderingCompletedCallback* ptr= luna_caster< osg::Referenced, osg::State::DynamicObjectRenderingCompletedCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::State::DynamicObjectRenderingCompletedCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_completed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::State::DynamicObjectRenderingCompletedCallback::DynamicObjectRenderingCompletedCallback(lua_Table * data)
	static osg::State::DynamicObjectRenderingCompletedCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osg::State::DynamicObjectRenderingCompletedCallback::DynamicObjectRenderingCompletedCallback(lua_Table * data) function, expected prototype:\nosg::State::DynamicObjectRenderingCompletedCallback::DynamicObjectRenderingCompletedCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_State_DynamicObjectRenderingCompletedCallback(L,NULL);
	}


	// Function binds:
	// void osg::State::DynamicObjectRenderingCompletedCallback::completed(osg::State * arg1)
	static int _bind_completed(lua_State *L) {
		if (!_lg_typecheck_completed(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::DynamicObjectRenderingCompletedCallback::completed(osg::State * arg1) function, expected prototype:\nvoid osg::State::DynamicObjectRenderingCompletedCallback::completed(osg::State * arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));

		osg::State::DynamicObjectRenderingCompletedCallback* self=Luna< osg::Referenced >::checkSubType< osg::State::DynamicObjectRenderingCompletedCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::DynamicObjectRenderingCompletedCallback::completed(osg::State *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->completed(_arg1);

		return 0;
	}

	// void osg::State::DynamicObjectRenderingCompletedCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::DynamicObjectRenderingCompletedCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::State::DynamicObjectRenderingCompletedCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::State::DynamicObjectRenderingCompletedCallback* self=Luna< osg::Referenced >::checkSubType< osg::State::DynamicObjectRenderingCompletedCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::DynamicObjectRenderingCompletedCallback::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DynamicObjectRenderingCompletedCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::State::DynamicObjectRenderingCompletedCallback* LunaTraits< osg::State::DynamicObjectRenderingCompletedCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_State_DynamicObjectRenderingCompletedCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osg::State::DynamicObjectRenderingCompletedCallback::completed(osg::State * arg1)
}

void LunaTraits< osg::State::DynamicObjectRenderingCompletedCallback >::_bind_dtor(osg::State::DynamicObjectRenderingCompletedCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::State::DynamicObjectRenderingCompletedCallback >::className[] = "State_DynamicObjectRenderingCompletedCallback";
const char LunaTraits< osg::State::DynamicObjectRenderingCompletedCallback >::fullName[] = "osg::State::DynamicObjectRenderingCompletedCallback";
const char LunaTraits< osg::State::DynamicObjectRenderingCompletedCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::State::DynamicObjectRenderingCompletedCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::State::DynamicObjectRenderingCompletedCallback >::hash = 27574193;
const int LunaTraits< osg::State::DynamicObjectRenderingCompletedCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::State::DynamicObjectRenderingCompletedCallback >::methods[] = {
	{"completed", &luna_wrapper_osg_State_DynamicObjectRenderingCompletedCallback::_bind_completed},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_State_DynamicObjectRenderingCompletedCallback::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_State_DynamicObjectRenderingCompletedCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_State_DynamicObjectRenderingCompletedCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_State_DynamicObjectRenderingCompletedCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::State::DynamicObjectRenderingCompletedCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_State_DynamicObjectRenderingCompletedCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::State::DynamicObjectRenderingCompletedCallback >::enumValues[] = {
	{0,0}
};


