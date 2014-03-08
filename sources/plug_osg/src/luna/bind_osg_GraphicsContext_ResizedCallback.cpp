#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_GraphicsContext_ResizedCallback.h>

class luna_wrapper_osg_GraphicsContext_ResizedCallback {
public:
	typedef Luna< osg::GraphicsContext::ResizedCallback > luna_t;

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

		osg::GraphicsContext::ResizedCallback* self= (osg::GraphicsContext::ResizedCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::GraphicsContext::ResizedCallback >::push(L,self,false);
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
		//osg::GraphicsContext::ResizedCallback* ptr= dynamic_cast< osg::GraphicsContext::ResizedCallback* >(Luna< osg::Referenced >::check(L,1));
		osg::GraphicsContext::ResizedCallback* ptr= luna_caster< osg::Referenced, osg::GraphicsContext::ResizedCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GraphicsContext::ResizedCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_resizedImplementation(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
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
	// osg::GraphicsContext::ResizedCallback::ResizedCallback(lua_Table * data)
	static osg::GraphicsContext::ResizedCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext::ResizedCallback::ResizedCallback(lua_Table * data) function, expected prototype:\nosg::GraphicsContext::ResizedCallback::ResizedCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_GraphicsContext_ResizedCallback(L,NULL);
	}


	// Function binds:
	// void osg::GraphicsContext::ResizedCallback::resizedImplementation(osg::GraphicsContext * gc, int x, int y, int width, int height)
	static int _bind_resizedImplementation(lua_State *L) {
		if (!_lg_typecheck_resizedImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::ResizedCallback::resizedImplementation(osg::GraphicsContext * gc, int x, int y, int width, int height) function, expected prototype:\nvoid osg::GraphicsContext::ResizedCallback::resizedImplementation(osg::GraphicsContext * gc, int x, int y, int width, int height)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GraphicsContext* gc=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,2));
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);
		int width=(int)lua_tointeger(L,5);
		int height=(int)lua_tointeger(L,6);

		osg::GraphicsContext::ResizedCallback* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::ResizedCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::ResizedCallback::resizedImplementation(osg::GraphicsContext *, int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->resizedImplementation(gc, x, y, width, height);

		return 0;
	}

	// void osg::GraphicsContext::ResizedCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::ResizedCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::GraphicsContext::ResizedCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::GraphicsContext::ResizedCallback* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::ResizedCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::ResizedCallback::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ResizedCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::GraphicsContext::ResizedCallback* LunaTraits< osg::GraphicsContext::ResizedCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_GraphicsContext_ResizedCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osg::GraphicsContext::ResizedCallback::resizedImplementation(osg::GraphicsContext * gc, int x, int y, int width, int height)
}

void LunaTraits< osg::GraphicsContext::ResizedCallback >::_bind_dtor(osg::GraphicsContext::ResizedCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::GraphicsContext::ResizedCallback >::className[] = "GraphicsContext_ResizedCallback";
const char LunaTraits< osg::GraphicsContext::ResizedCallback >::fullName[] = "osg::GraphicsContext::ResizedCallback";
const char LunaTraits< osg::GraphicsContext::ResizedCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsContext::ResizedCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::GraphicsContext::ResizedCallback >::hash = 62903875;
const int LunaTraits< osg::GraphicsContext::ResizedCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::GraphicsContext::ResizedCallback >::methods[] = {
	{"resizedImplementation", &luna_wrapper_osg_GraphicsContext_ResizedCallback::_bind_resizedImplementation},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_GraphicsContext_ResizedCallback::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_GraphicsContext_ResizedCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_GraphicsContext_ResizedCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_GraphicsContext_ResizedCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GraphicsContext::ResizedCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_GraphicsContext_ResizedCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GraphicsContext::ResizedCallback >::enumValues[] = {
	{0,0}
};


