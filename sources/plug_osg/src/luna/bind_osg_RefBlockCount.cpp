#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_RefBlockCount.h>

class luna_wrapper_osg_RefBlockCount {
public:
	typedef Luna< osg::RefBlockCount > luna_t;

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

		osg::RefBlockCount* self= (osg::RefBlockCount*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::RefBlockCount >::push(L,self,false);
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
		//osg::RefBlockCount* ptr= dynamic_cast< osg::RefBlockCount* >(Luna< osg::Referenced >::check(L,1));
		osg::RefBlockCount* ptr= luna_caster< osg::Referenced, osg::RefBlockCount >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::RefBlockCount >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_BlockCount(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osg::RefBlockCount* ptr= dynamic_cast< osg::RefBlockCount* >(Luna< OpenThreads::BlockCount >::check(L,1));
		osg::RefBlockCount* ptr= luna_caster< OpenThreads::BlockCount, osg::RefBlockCount >::cast(Luna< OpenThreads::BlockCount >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::RefBlockCount >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::RefBlockCount::RefBlockCount(unsigned int blockCount)
	static osg::RefBlockCount* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefBlockCount::RefBlockCount(unsigned int blockCount) function, expected prototype:\nosg::RefBlockCount::RefBlockCount(unsigned int blockCount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned blockCount=(unsigned)lua_tointeger(L,1);

		return new osg::RefBlockCount(blockCount);
	}

	// osg::RefBlockCount::RefBlockCount(lua_Table * data, unsigned int blockCount)
	static osg::RefBlockCount* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefBlockCount::RefBlockCount(lua_Table * data, unsigned int blockCount) function, expected prototype:\nosg::RefBlockCount::RefBlockCount(lua_Table * data, unsigned int blockCount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned blockCount=(unsigned)lua_tointeger(L,2);

		return new wrapper_osg_RefBlockCount(L,NULL, blockCount);
	}

	// Overload binder for osg::RefBlockCount::RefBlockCount
	static osg::RefBlockCount* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function RefBlockCount, cannot match any of the overloads for function RefBlockCount:\n  RefBlockCount(unsigned int)\n  RefBlockCount(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osg::RefBlockCount::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RefBlockCount::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::RefBlockCount::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::RefBlockCount* self=Luna< osg::Referenced >::checkSubType< osg::RefBlockCount >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RefBlockCount::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefBlockCount::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_OpenThreads_BlockCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_OpenThreads_BlockCount(lua_State *L) {
		if (!_lg_typecheck_baseCast_OpenThreads_BlockCount(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_OpenThreads_BlockCount function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		OpenThreads::BlockCount* res = luna_caster<osg::Referenced,OpenThreads::BlockCount>::cast(self); // dynamic_cast<OpenThreads::BlockCount*>(self);
		if(!res)
			return 0;
			
		Luna< OpenThreads::BlockCount >::push(L,res,false);
		return 1;

	}

};

osg::RefBlockCount* LunaTraits< osg::RefBlockCount >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_RefBlockCount::_bind_ctor(L);
}

void LunaTraits< osg::RefBlockCount >::_bind_dtor(osg::RefBlockCount* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::RefBlockCount >::className[] = "RefBlockCount";
const char LunaTraits< osg::RefBlockCount >::fullName[] = "osg::RefBlockCount";
const char LunaTraits< osg::RefBlockCount >::moduleName[] = "osg";
const char* LunaTraits< osg::RefBlockCount >::parents[] = {"osg.Referenced", "OpenThreads.BlockCount", 0};
const int LunaTraits< osg::RefBlockCount >::hash = 73970977;
const int LunaTraits< osg::RefBlockCount >::uniqueIDs[] = {50169651, 46486281,0};

luna_RegType LunaTraits< osg::RefBlockCount >::methods[] = {
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_RefBlockCount::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_RefBlockCount::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_RefBlockCount::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_RefBlockCount::_bind_getTable},
	{"asBlockCount", &luna_wrapper_osg_RefBlockCount::_bind_baseCast_OpenThreads_BlockCount},
	{0,0}
};

luna_ConverterType LunaTraits< osg::RefBlockCount >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_RefBlockCount::_cast_from_Referenced},
	{"OpenThreads::BlockCount", &luna_wrapper_osg_RefBlockCount::_cast_from_BlockCount},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::RefBlockCount >::enumValues[] = {
	{0,0}
};


