#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_EndOfDynamicDrawBlock.h>

class luna_wrapper_osg_EndOfDynamicDrawBlock {
public:
	typedef Luna< osg::EndOfDynamicDrawBlock > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		OpenThreads::BlockCount* self=(Luna< OpenThreads::BlockCount >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<OpenThreads::BlockCount,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		osg::EndOfDynamicDrawBlock* self= (osg::EndOfDynamicDrawBlock*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::EndOfDynamicDrawBlock >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,46486281) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< OpenThreads::BlockCount >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_BlockCount(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osg::EndOfDynamicDrawBlock* ptr= dynamic_cast< osg::EndOfDynamicDrawBlock* >(Luna< OpenThreads::BlockCount >::check(L,1));
		osg::EndOfDynamicDrawBlock* ptr= luna_caster< OpenThreads::BlockCount, osg::EndOfDynamicDrawBlock >::cast(Luna< OpenThreads::BlockCount >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::EndOfDynamicDrawBlock >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osg::EndOfDynamicDrawBlock* ptr= dynamic_cast< osg::EndOfDynamicDrawBlock* >(Luna< osg::Referenced >::check(L,1));
		osg::EndOfDynamicDrawBlock* ptr= luna_caster< osg::Referenced, osg::EndOfDynamicDrawBlock >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::EndOfDynamicDrawBlock >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_base_completed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::EndOfDynamicDrawBlock::EndOfDynamicDrawBlock(unsigned int arg1)
	static osg::EndOfDynamicDrawBlock* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::EndOfDynamicDrawBlock::EndOfDynamicDrawBlock(unsigned int arg1) function, expected prototype:\nosg::EndOfDynamicDrawBlock::EndOfDynamicDrawBlock(unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned _arg1=(unsigned)lua_tointeger(L,1);

		return new osg::EndOfDynamicDrawBlock(_arg1);
	}

	// osg::EndOfDynamicDrawBlock::EndOfDynamicDrawBlock(lua_Table * data, unsigned int arg2)
	static osg::EndOfDynamicDrawBlock* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::EndOfDynamicDrawBlock::EndOfDynamicDrawBlock(lua_Table * data, unsigned int arg2) function, expected prototype:\nosg::EndOfDynamicDrawBlock::EndOfDynamicDrawBlock(lua_Table * data, unsigned int arg2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned _arg2=(unsigned)lua_tointeger(L,2);

		return new wrapper_osg_EndOfDynamicDrawBlock(L,NULL, _arg2);
	}

	// Overload binder for osg::EndOfDynamicDrawBlock::EndOfDynamicDrawBlock
	static osg::EndOfDynamicDrawBlock* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function EndOfDynamicDrawBlock, cannot match any of the overloads for function EndOfDynamicDrawBlock:\n  EndOfDynamicDrawBlock(unsigned int)\n  EndOfDynamicDrawBlock(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osg::EndOfDynamicDrawBlock::completed(osg::State * state)
	static int _bind_completed(lua_State *L) {
		if (!_lg_typecheck_completed(L)) {
			luaL_error(L, "luna typecheck failed in void osg::EndOfDynamicDrawBlock::completed(osg::State * state) function, expected prototype:\nvoid osg::EndOfDynamicDrawBlock::completed(osg::State * state)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));

		osg::EndOfDynamicDrawBlock* self=Luna< OpenThreads::BlockCount >::checkSubType< osg::EndOfDynamicDrawBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::EndOfDynamicDrawBlock::completed(osg::State *). Got : '%s'\n%s",typeid(Luna< OpenThreads::BlockCount >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->completed(state);

		return 0;
	}

	// void osg::EndOfDynamicDrawBlock::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::EndOfDynamicDrawBlock::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::EndOfDynamicDrawBlock::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::EndOfDynamicDrawBlock* self=Luna< OpenThreads::BlockCount >::checkSubType< osg::EndOfDynamicDrawBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::EndOfDynamicDrawBlock::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< OpenThreads::BlockCount >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EndOfDynamicDrawBlock::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::EndOfDynamicDrawBlock::base_completed(osg::State * state)
	static int _bind_base_completed(lua_State *L) {
		if (!_lg_typecheck_base_completed(L)) {
			luaL_error(L, "luna typecheck failed in void osg::EndOfDynamicDrawBlock::base_completed(osg::State * state) function, expected prototype:\nvoid osg::EndOfDynamicDrawBlock::base_completed(osg::State * state)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));

		osg::EndOfDynamicDrawBlock* self=Luna< OpenThreads::BlockCount >::checkSubType< osg::EndOfDynamicDrawBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::EndOfDynamicDrawBlock::base_completed(osg::State *). Got : '%s'\n%s",typeid(Luna< OpenThreads::BlockCount >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EndOfDynamicDrawBlock::completed(state);

		return 0;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_osg_Referenced(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_osg_Referenced(lua_State *L) {
		if (!_lg_typecheck_baseCast_osg_Referenced(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_osg_Referenced function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		OpenThreads::BlockCount* self=(Luna< OpenThreads::BlockCount >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		osg::Referenced* res = luna_caster<OpenThreads::BlockCount,osg::Referenced>::cast(self); // dynamic_cast<osg::Referenced*>(self);
		if(!res)
			return 0;
			
		Luna< osg::Referenced >::push(L,res,false);
		return 1;

	}

};

osg::EndOfDynamicDrawBlock* LunaTraits< osg::EndOfDynamicDrawBlock >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_EndOfDynamicDrawBlock::_bind_ctor(L);
}

void LunaTraits< osg::EndOfDynamicDrawBlock >::_bind_dtor(osg::EndOfDynamicDrawBlock* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::EndOfDynamicDrawBlock >::className[] = "EndOfDynamicDrawBlock";
const char LunaTraits< osg::EndOfDynamicDrawBlock >::fullName[] = "osg::EndOfDynamicDrawBlock";
const char LunaTraits< osg::EndOfDynamicDrawBlock >::moduleName[] = "osg";
const char* LunaTraits< osg::EndOfDynamicDrawBlock >::parents[] = {"OpenThreads.BlockCount", "osg.State_DynamicObjectRenderingCompletedCallback", 0};
const int LunaTraits< osg::EndOfDynamicDrawBlock >::hash = 64833397;
const int LunaTraits< osg::EndOfDynamicDrawBlock >::uniqueIDs[] = {46486281, 50169651,0};

luna_RegType LunaTraits< osg::EndOfDynamicDrawBlock >::methods[] = {
	{"completed", &luna_wrapper_osg_EndOfDynamicDrawBlock::_bind_completed},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_EndOfDynamicDrawBlock::_bind_base_setThreadSafeRefUnref},
	{"base_completed", &luna_wrapper_osg_EndOfDynamicDrawBlock::_bind_base_completed},
	{"fromVoid", &luna_wrapper_osg_EndOfDynamicDrawBlock::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_EndOfDynamicDrawBlock::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_EndOfDynamicDrawBlock::_bind_getTable},
	{"asReferenced", &luna_wrapper_osg_EndOfDynamicDrawBlock::_bind_baseCast_osg_Referenced},
	{0,0}
};

luna_ConverterType LunaTraits< osg::EndOfDynamicDrawBlock >::converters[] = {
	{"OpenThreads::BlockCount", &luna_wrapper_osg_EndOfDynamicDrawBlock::_cast_from_BlockCount},
	{"osg::Referenced", &luna_wrapper_osg_EndOfDynamicDrawBlock::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::EndOfDynamicDrawBlock >::enumValues[] = {
	{0,0}
};


