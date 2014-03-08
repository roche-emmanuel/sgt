#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_RenderBin_DrawCallback.h>

class luna_wrapper_osgUtil_RenderBin_DrawCallback {
public:
	typedef Luna< osgUtil::RenderBin::DrawCallback > luna_t;

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

		osgUtil::RenderBin::DrawCallback* self= (osgUtil::RenderBin::DrawCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::RenderBin::DrawCallback >::push(L,self,false);
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
		//osgUtil::RenderBin::DrawCallback* ptr= dynamic_cast< osgUtil::RenderBin::DrawCallback* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::RenderBin::DrawCallback* ptr= luna_caster< osg::Referenced, osgUtil::RenderBin::DrawCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::RenderBin::DrawCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,2286263) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
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
	// osgUtil::RenderBin::DrawCallback::DrawCallback(lua_Table * data)
	static osgUtil::RenderBin::DrawCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::RenderBin::DrawCallback::DrawCallback(lua_Table * data) function, expected prototype:\nosgUtil::RenderBin::DrawCallback::DrawCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgUtil_RenderBin_DrawCallback(L,NULL);
	}


	// Function binds:
	// void osgUtil::RenderBin::DrawCallback::drawImplementation(osgUtil::RenderBin * bin, osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderBin::DrawCallback::drawImplementation(osgUtil::RenderBin * bin, osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous) function, expected prototype:\nvoid osgUtil::RenderBin::DrawCallback::drawImplementation(osgUtil::RenderBin * bin, osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 2286263\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::RenderBin* bin=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderBin >(L,2));
		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,3));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::RenderBin::DrawCallback::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;
		osgUtil::RenderLeaf* previous=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,4));

		osgUtil::RenderBin::DrawCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderBin::DrawCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderBin::DrawCallback::drawImplementation(osgUtil::RenderBin *, osg::RenderInfo &, osgUtil::RenderLeaf *&). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawImplementation(bin, renderInfo, previous);

		return 0;
	}

	// void osgUtil::RenderBin::DrawCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderBin::DrawCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::RenderBin::DrawCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::RenderBin::DrawCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderBin::DrawCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderBin::DrawCallback::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osgUtil::RenderBin::DrawCallback* LunaTraits< osgUtil::RenderBin::DrawCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_RenderBin_DrawCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osgUtil::RenderBin::DrawCallback::drawImplementation(osgUtil::RenderBin * bin, osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)
}

void LunaTraits< osgUtil::RenderBin::DrawCallback >::_bind_dtor(osgUtil::RenderBin::DrawCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::RenderBin::DrawCallback >::className[] = "RenderBin_DrawCallback";
const char LunaTraits< osgUtil::RenderBin::DrawCallback >::fullName[] = "osgUtil::RenderBin::DrawCallback";
const char LunaTraits< osgUtil::RenderBin::DrawCallback >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::RenderBin::DrawCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::RenderBin::DrawCallback >::hash = 94600367;
const int LunaTraits< osgUtil::RenderBin::DrawCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::RenderBin::DrawCallback >::methods[] = {
	{"drawImplementation", &luna_wrapper_osgUtil_RenderBin_DrawCallback::_bind_drawImplementation},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_RenderBin_DrawCallback::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osgUtil_RenderBin_DrawCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_RenderBin_DrawCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_RenderBin_DrawCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::RenderBin::DrawCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_RenderBin_DrawCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::RenderBin::DrawCallback >::enumValues[] = {
	{0,0}
};


