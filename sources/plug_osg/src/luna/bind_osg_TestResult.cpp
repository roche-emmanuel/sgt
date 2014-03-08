#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_TestResult.h>

class luna_wrapper_osg_TestResult {
public:
	typedef Luna< osg::TestResult > luna_t;

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

		osg::TestResult* self= (osg::TestResult*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::TestResult >::push(L,self,false);
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
		//osg::TestResult* ptr= dynamic_cast< osg::TestResult* >(Luna< osg::Referenced >::check(L,1));
		osg::TestResult* ptr= luna_caster< osg::Referenced, osg::TestResult >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TestResult >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_getInit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getContextID(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumPixels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setContextID(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setActive(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumPixels(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
	// osg::TestResult::TestResult()
	static osg::TestResult* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::TestResult::TestResult() function, expected prototype:\nosg::TestResult::TestResult()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::TestResult();
	}

	// osg::TestResult::TestResult(lua_Table * data)
	static osg::TestResult* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::TestResult::TestResult(lua_Table * data) function, expected prototype:\nosg::TestResult::TestResult(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_TestResult(L,NULL);
	}

	// Overload binder for osg::TestResult::TestResult
	static osg::TestResult* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TestResult, cannot match any of the overloads for function TestResult:\n  TestResult()\n  TestResult(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool osg::TestResult::_init()
	static int _bind_getInit(lua_State *L) {
		if (!_lg_typecheck_getInit(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TestResult::_init() function, expected prototype:\nbool osg::TestResult::_init()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TestResult* self=Luna< osg::Referenced >::checkSubType< osg::TestResult >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TestResult::_init(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->_init;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::TestResult::_id()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::TestResult::_id() function, expected prototype:\nunsigned int osg::TestResult::_id()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TestResult* self=Luna< osg::Referenced >::checkSubType< osg::TestResult >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::TestResult::_id(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_id;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::TestResult::_contextID()
	static int _bind_getContextID(lua_State *L) {
		if (!_lg_typecheck_getContextID(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::TestResult::_contextID() function, expected prototype:\nunsigned int osg::TestResult::_contextID()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TestResult* self=Luna< osg::Referenced >::checkSubType< osg::TestResult >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::TestResult::_contextID(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_contextID;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::TestResult::_active()
	static int _bind_getActive(lua_State *L) {
		if (!_lg_typecheck_getActive(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TestResult::_active() function, expected prototype:\nbool osg::TestResult::_active()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TestResult* self=Luna< osg::Referenced >::checkSubType< osg::TestResult >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TestResult::_active(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->_active;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int osg::TestResult::_numPixels()
	static int _bind_getNumPixels(lua_State *L) {
		if (!_lg_typecheck_getNumPixels(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TestResult::_numPixels() function, expected prototype:\nint osg::TestResult::_numPixels()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TestResult* self=Luna< osg::Referenced >::checkSubType< osg::TestResult >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TestResult::_numPixels(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->_numPixels;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TestResult::_init(bool value)
	static int _bind_setInit(lua_State *L) {
		if (!_lg_typecheck_setInit(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TestResult::_init(bool value) function, expected prototype:\nvoid osg::TestResult::_init(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osg::TestResult* self=Luna< osg::Referenced >::checkSubType< osg::TestResult >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TestResult::_init(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_init = value;

		return 0;
	}

	// void osg::TestResult::_id(unsigned int value)
	static int _bind_setId(lua_State *L) {
		if (!_lg_typecheck_setId(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TestResult::_id(unsigned int value) function, expected prototype:\nvoid osg::TestResult::_id(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::TestResult* self=Luna< osg::Referenced >::checkSubType< osg::TestResult >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TestResult::_id(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_id = value;

		return 0;
	}

	// void osg::TestResult::_contextID(unsigned int value)
	static int _bind_setContextID(lua_State *L) {
		if (!_lg_typecheck_setContextID(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TestResult::_contextID(unsigned int value) function, expected prototype:\nvoid osg::TestResult::_contextID(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::TestResult* self=Luna< osg::Referenced >::checkSubType< osg::TestResult >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TestResult::_contextID(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_contextID = value;

		return 0;
	}

	// void osg::TestResult::_active(bool value)
	static int _bind_setActive(lua_State *L) {
		if (!_lg_typecheck_setActive(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TestResult::_active(bool value) function, expected prototype:\nvoid osg::TestResult::_active(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osg::TestResult* self=Luna< osg::Referenced >::checkSubType< osg::TestResult >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TestResult::_active(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_active = value;

		return 0;
	}

	// void osg::TestResult::_numPixels(int value)
	static int _bind_setNumPixels(lua_State *L) {
		if (!_lg_typecheck_setNumPixels(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TestResult::_numPixels(int value) function, expected prototype:\nvoid osg::TestResult::_numPixels(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osg::TestResult* self=Luna< osg::Referenced >::checkSubType< osg::TestResult >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TestResult::_numPixels(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_numPixels = value;

		return 0;
	}

	// void osg::TestResult::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TestResult::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::TestResult::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::TestResult* self=Luna< osg::Referenced >::checkSubType< osg::TestResult >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TestResult::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TestResult::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::TestResult* LunaTraits< osg::TestResult >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_TestResult::_bind_ctor(L);
}

void LunaTraits< osg::TestResult >::_bind_dtor(osg::TestResult* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TestResult >::className[] = "TestResult";
const char LunaTraits< osg::TestResult >::fullName[] = "osg::TestResult";
const char LunaTraits< osg::TestResult >::moduleName[] = "osg";
const char* LunaTraits< osg::TestResult >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::TestResult >::hash = 49600581;
const int LunaTraits< osg::TestResult >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TestResult >::methods[] = {
	{"getInit", &luna_wrapper_osg_TestResult::_bind_getInit},
	{"getId", &luna_wrapper_osg_TestResult::_bind_getId},
	{"getContextID", &luna_wrapper_osg_TestResult::_bind_getContextID},
	{"getActive", &luna_wrapper_osg_TestResult::_bind_getActive},
	{"getNumPixels", &luna_wrapper_osg_TestResult::_bind_getNumPixels},
	{"setInit", &luna_wrapper_osg_TestResult::_bind_setInit},
	{"setId", &luna_wrapper_osg_TestResult::_bind_setId},
	{"setContextID", &luna_wrapper_osg_TestResult::_bind_setContextID},
	{"setActive", &luna_wrapper_osg_TestResult::_bind_setActive},
	{"setNumPixels", &luna_wrapper_osg_TestResult::_bind_setNumPixels},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_TestResult::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_TestResult::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_TestResult::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_TestResult::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TestResult >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TestResult::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TestResult >::enumValues[] = {
	{0,0}
};


