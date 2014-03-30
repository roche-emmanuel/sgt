#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_RefBlock.h>

class luna_wrapper_osg_RefBlock {
public:
	typedef Luna< osg::RefBlock > luna_t;

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

		osg::RefBlock* self= (osg::RefBlock*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::RefBlock >::push(L,self,false);
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
		//osg::RefBlock* ptr= dynamic_cast< osg::RefBlock* >(Luna< osg::Referenced >::check(L,1));
		osg::RefBlock* ptr= luna_caster< osg::Referenced, osg::RefBlock >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::RefBlock >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Block(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osg::RefBlock* ptr= dynamic_cast< osg::RefBlock* >(Luna< OpenThreads::Block >::check(L,1));
		osg::RefBlock* ptr= luna_caster< OpenThreads::Block, osg::RefBlock >::cast(Luna< OpenThreads::Block >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::RefBlock >::push(L,ptr,false);
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::RefBlock::RefBlock()
	static osg::RefBlock* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefBlock::RefBlock() function, expected prototype:\nosg::RefBlock::RefBlock()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::RefBlock();
	}

	// osg::RefBlock::RefBlock(lua_Table * data)
	static osg::RefBlock* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefBlock::RefBlock(lua_Table * data) function, expected prototype:\nosg::RefBlock::RefBlock(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_RefBlock(L,NULL);
	}

	// Overload binder for osg::RefBlock::RefBlock
	static osg::RefBlock* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function RefBlock, cannot match any of the overloads for function RefBlock:\n  RefBlock()\n  RefBlock(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::RefBlock::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RefBlock::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::RefBlock::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::RefBlock* self=Luna< osg::Referenced >::checkSubType< osg::RefBlock >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RefBlock::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefBlock::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

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

osg::RefBlock* LunaTraits< osg::RefBlock >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_RefBlock::_bind_ctor(L);
}

void LunaTraits< osg::RefBlock >::_bind_dtor(osg::RefBlock* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::RefBlock >::className[] = "RefBlock";
const char LunaTraits< osg::RefBlock >::fullName[] = "osg::RefBlock";
const char LunaTraits< osg::RefBlock >::moduleName[] = "osg";
const char* LunaTraits< osg::RefBlock >::parents[] = {"osg.Referenced", "OpenThreads.Block", 0};
const int LunaTraits< osg::RefBlock >::hash = 54031935;
const int LunaTraits< osg::RefBlock >::uniqueIDs[] = {50169651, 92736679,0};

luna_RegType LunaTraits< osg::RefBlock >::methods[] = {
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_RefBlock::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_RefBlock::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_RefBlock::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_RefBlock::_bind_getTable},
	{"asBlock", &luna_wrapper_osg_RefBlock::_bind_baseCast_OpenThreads_Block},
	{0,0}
};

luna_ConverterType LunaTraits< osg::RefBlock >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_RefBlock::_cast_from_Referenced},
	{"OpenThreads::Block", &luna_wrapper_osg_RefBlock::_cast_from_Block},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::RefBlock >::enumValues[] = {
	{0,0}
};


