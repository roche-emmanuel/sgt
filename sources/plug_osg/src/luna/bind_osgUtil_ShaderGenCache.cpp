#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_ShaderGenCache.h>

class luna_wrapper_osgUtil_ShaderGenCache {
public:
	typedef Luna< osgUtil::ShaderGenCache > luna_t;

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

		osgUtil::ShaderGenCache* self= (osgUtil::ShaderGenCache*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::ShaderGenCache >::push(L,self,false);
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
		//osgUtil::ShaderGenCache* ptr= dynamic_cast< osgUtil::ShaderGenCache* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::ShaderGenCache* ptr= luna_caster< osg::Referenced, osgUtil::ShaderGenCache >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::ShaderGenCache >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_setStateSet(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOrCreateStateSet(lua_State *L) {
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
	// osgUtil::ShaderGenCache::ShaderGenCache()
	static osgUtil::ShaderGenCache* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::ShaderGenCache::ShaderGenCache() function, expected prototype:\nosgUtil::ShaderGenCache::ShaderGenCache()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgUtil::ShaderGenCache();
	}

	// osgUtil::ShaderGenCache::ShaderGenCache(lua_Table * data)
	static osgUtil::ShaderGenCache* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::ShaderGenCache::ShaderGenCache(lua_Table * data) function, expected prototype:\nosgUtil::ShaderGenCache::ShaderGenCache(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgUtil_ShaderGenCache(L,NULL);
	}

	// Overload binder for osgUtil::ShaderGenCache::ShaderGenCache
	static osgUtil::ShaderGenCache* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ShaderGenCache, cannot match any of the overloads for function ShaderGenCache:\n  ShaderGenCache()\n  ShaderGenCache(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::ShaderGenCache::setStateSet(int stateMask, osg::StateSet * program)
	static int _bind_setStateSet(lua_State *L) {
		if (!_lg_typecheck_setStateSet(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::ShaderGenCache::setStateSet(int stateMask, osg::StateSet * program) function, expected prototype:\nvoid osgUtil::ShaderGenCache::setStateSet(int stateMask, osg::StateSet * program)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int stateMask=(int)lua_tointeger(L,2);
		osg::StateSet* program=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,3));

		osgUtil::ShaderGenCache* self=Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::ShaderGenCache::setStateSet(int, osg::StateSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStateSet(stateMask, program);

		return 0;
	}

	// osg::StateSet * osgUtil::ShaderGenCache::getStateSet(int stateMask) const
	static int _bind_getStateSet(lua_State *L) {
		if (!_lg_typecheck_getStateSet(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgUtil::ShaderGenCache::getStateSet(int stateMask) const function, expected prototype:\nosg::StateSet * osgUtil::ShaderGenCache::getStateSet(int stateMask) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int stateMask=(int)lua_tointeger(L,2);

		osgUtil::ShaderGenCache* self=Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet * osgUtil::ShaderGenCache::getStateSet(int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet * lret = self->getStateSet(stateMask);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// osg::StateSet * osgUtil::ShaderGenCache::getOrCreateStateSet(int stateMask)
	static int _bind_getOrCreateStateSet(lua_State *L) {
		if (!_lg_typecheck_getOrCreateStateSet(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgUtil::ShaderGenCache::getOrCreateStateSet(int stateMask) function, expected prototype:\nosg::StateSet * osgUtil::ShaderGenCache::getOrCreateStateSet(int stateMask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int stateMask=(int)lua_tointeger(L,2);

		osgUtil::ShaderGenCache* self=Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet * osgUtil::ShaderGenCache::getOrCreateStateSet(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet * lret = self->getOrCreateStateSet(stateMask);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::ShaderGenCache::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::ShaderGenCache::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::ShaderGenCache::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::ShaderGenCache* self=Luna< osg::Referenced >::checkSubType< osgUtil::ShaderGenCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::ShaderGenCache::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShaderGenCache::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osgUtil::ShaderGenCache* LunaTraits< osgUtil::ShaderGenCache >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_ShaderGenCache::_bind_ctor(L);
}

void LunaTraits< osgUtil::ShaderGenCache >::_bind_dtor(osgUtil::ShaderGenCache* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::ShaderGenCache >::className[] = "ShaderGenCache";
const char LunaTraits< osgUtil::ShaderGenCache >::fullName[] = "osgUtil::ShaderGenCache";
const char LunaTraits< osgUtil::ShaderGenCache >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::ShaderGenCache >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::ShaderGenCache >::hash = 25249400;
const int LunaTraits< osgUtil::ShaderGenCache >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::ShaderGenCache >::methods[] = {
	{"setStateSet", &luna_wrapper_osgUtil_ShaderGenCache::_bind_setStateSet},
	{"getStateSet", &luna_wrapper_osgUtil_ShaderGenCache::_bind_getStateSet},
	{"getOrCreateStateSet", &luna_wrapper_osgUtil_ShaderGenCache::_bind_getOrCreateStateSet},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_ShaderGenCache::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osgUtil_ShaderGenCache::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_ShaderGenCache::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_ShaderGenCache::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::ShaderGenCache >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_ShaderGenCache::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::ShaderGenCache >::enumValues[] = {
	{"BLEND", osgUtil::ShaderGenCache::BLEND},
	{"LIGHTING", osgUtil::ShaderGenCache::LIGHTING},
	{"FOG", osgUtil::ShaderGenCache::FOG},
	{"DIFFUSE_MAP", osgUtil::ShaderGenCache::DIFFUSE_MAP},
	{"NORMAL_MAP", osgUtil::ShaderGenCache::NORMAL_MAP},
	{0,0}
};


