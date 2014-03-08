#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_RenderBin_SortCallback.h>

class luna_wrapper_osgUtil_RenderBin_SortCallback {
public:
	typedef Luna< osgUtil::RenderBin::SortCallback > luna_t;

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

		osgUtil::RenderBin::SortCallback* self= (osgUtil::RenderBin::SortCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::RenderBin::SortCallback >::push(L,self,false);
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
		//osgUtil::RenderBin::SortCallback* ptr= dynamic_cast< osgUtil::RenderBin::SortCallback* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::RenderBin::SortCallback* ptr= luna_caster< osg::Referenced, osgUtil::RenderBin::SortCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::RenderBin::SortCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_sortImplementation(lua_State *L) {
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
	// osgUtil::RenderBin::SortCallback::SortCallback(lua_Table * data)
	static osgUtil::RenderBin::SortCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::RenderBin::SortCallback::SortCallback(lua_Table * data) function, expected prototype:\nosgUtil::RenderBin::SortCallback::SortCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgUtil_RenderBin_SortCallback(L,NULL);
	}


	// Function binds:
	// void osgUtil::RenderBin::SortCallback::sortImplementation(osgUtil::RenderBin * arg1)
	static int _bind_sortImplementation(lua_State *L) {
		if (!_lg_typecheck_sortImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderBin::SortCallback::sortImplementation(osgUtil::RenderBin * arg1) function, expected prototype:\nvoid osgUtil::RenderBin::SortCallback::sortImplementation(osgUtil::RenderBin * arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::RenderBin* _arg1=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderBin >(L,2));

		osgUtil::RenderBin::SortCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderBin::SortCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderBin::SortCallback::sortImplementation(osgUtil::RenderBin *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->sortImplementation(_arg1);

		return 0;
	}

	// void osgUtil::RenderBin::SortCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderBin::SortCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::RenderBin::SortCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::RenderBin::SortCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderBin::SortCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderBin::SortCallback::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SortCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osgUtil::RenderBin::SortCallback* LunaTraits< osgUtil::RenderBin::SortCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_RenderBin_SortCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osgUtil::RenderBin::SortCallback::sortImplementation(osgUtil::RenderBin * arg1)
}

void LunaTraits< osgUtil::RenderBin::SortCallback >::_bind_dtor(osgUtil::RenderBin::SortCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::RenderBin::SortCallback >::className[] = "RenderBin_SortCallback";
const char LunaTraits< osgUtil::RenderBin::SortCallback >::fullName[] = "osgUtil::RenderBin::SortCallback";
const char LunaTraits< osgUtil::RenderBin::SortCallback >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::RenderBin::SortCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::RenderBin::SortCallback >::hash = 60083473;
const int LunaTraits< osgUtil::RenderBin::SortCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::RenderBin::SortCallback >::methods[] = {
	{"sortImplementation", &luna_wrapper_osgUtil_RenderBin_SortCallback::_bind_sortImplementation},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_RenderBin_SortCallback::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osgUtil_RenderBin_SortCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_RenderBin_SortCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_RenderBin_SortCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::RenderBin::SortCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_RenderBin_SortCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::RenderBin::SortCallback >::enumValues[] = {
	{0,0}
};


