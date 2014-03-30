#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_GraphicsContext.h>

class luna_wrapper_osg_GraphicsContext {
public:
	typedef Luna< osg::GraphicsContext > luna_t;

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

		osg::GraphicsContext* self= (osg::GraphicsContext*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::GraphicsContext >::push(L,self,false);
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
		//osg::GraphicsContext* ptr= dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,1));
		osg::GraphicsContext* ptr= luna_caster< osg::Referenced, osg::GraphicsContext >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GraphicsContext >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_setWindowingSystemInterface(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWindowingSystemInterface(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_createGraphicsContext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createNewContextID(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxContextID(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_incrementContextIDUsageCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_decrementContextIDUsageCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAllRegisteredGraphicsContexts(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRegisteredGraphicsContexts(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCompileContext(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOrCreateCompileContext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCompileContext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_remove_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Operation >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_remove_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeAllOperations(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_runOperations(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOperationsQueue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOperationsBlock(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentOperation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTraits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_valid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getState_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getState_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setClearColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClearColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setClearMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClearMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTimeSinceLastClear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_realize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_close(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_swapBuffers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isRealized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_makeCurrent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_makeContextCurrent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseContext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isCurrent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_bindPBufferToTexture(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createGraphicsThread(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGraphicsThread(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGraphicsThread_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGraphicsThread_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_realizeImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isRealizedImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_closeImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_makeCurrentImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_makeContextCurrentImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseContextImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_bindPBufferToTextureImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSwapCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSwapCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSwapCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_swapBuffersCallbackOrImplemenation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_swapBuffersImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_resized(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setResizedCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getResizedCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getResizedCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_resizedImplementation(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCameras_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCameras_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDefaultFboId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDefaultFboId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_runOperations(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_resizedImplementation(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static void osg::GraphicsContext::setWindowingSystemInterface(osg::GraphicsContext::WindowingSystemInterface * wsInterface)
	static int _bind_setWindowingSystemInterface(lua_State *L) {
		if (!_lg_typecheck_setWindowingSystemInterface(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::GraphicsContext::setWindowingSystemInterface(osg::GraphicsContext::WindowingSystemInterface * wsInterface) function, expected prototype:\nstatic void osg::GraphicsContext::setWindowingSystemInterface(osg::GraphicsContext::WindowingSystemInterface * wsInterface)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GraphicsContext::WindowingSystemInterface* wsInterface=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::WindowingSystemInterface >(L,1));

		osg::GraphicsContext::setWindowingSystemInterface(wsInterface);

		return 0;
	}

	// static osg::GraphicsContext::WindowingSystemInterface * osg::GraphicsContext::getWindowingSystemInterface()
	static int _bind_getWindowingSystemInterface(lua_State *L) {
		if (!_lg_typecheck_getWindowingSystemInterface(L)) {
			luaL_error(L, "luna typecheck failed in static osg::GraphicsContext::WindowingSystemInterface * osg::GraphicsContext::getWindowingSystemInterface() function, expected prototype:\nstatic osg::GraphicsContext::WindowingSystemInterface * osg::GraphicsContext::getWindowingSystemInterface()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::WindowingSystemInterface * lret = osg::GraphicsContext::getWindowingSystemInterface();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext::WindowingSystemInterface >::push(L,lret,false);

		return 1;
	}

	// static osg::GraphicsContext * osg::GraphicsContext::createGraphicsContext(osg::GraphicsContext::Traits * traits)
	static int _bind_createGraphicsContext(lua_State *L) {
		if (!_lg_typecheck_createGraphicsContext(L)) {
			luaL_error(L, "luna typecheck failed in static osg::GraphicsContext * osg::GraphicsContext::createGraphicsContext(osg::GraphicsContext::Traits * traits) function, expected prototype:\nstatic osg::GraphicsContext * osg::GraphicsContext::createGraphicsContext(osg::GraphicsContext::Traits * traits)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GraphicsContext::Traits* traits=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1));

		osg::GraphicsContext * lret = osg::GraphicsContext::createGraphicsContext(traits);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext >::push(L,lret,false);

		return 1;
	}

	// static unsigned int osg::GraphicsContext::createNewContextID()
	static int _bind_createNewContextID(lua_State *L) {
		if (!_lg_typecheck_createNewContextID(L)) {
			luaL_error(L, "luna typecheck failed in static unsigned int osg::GraphicsContext::createNewContextID() function, expected prototype:\nstatic unsigned int osg::GraphicsContext::createNewContextID()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		unsigned int lret = osg::GraphicsContext::createNewContextID();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static unsigned int osg::GraphicsContext::getMaxContextID()
	static int _bind_getMaxContextID(lua_State *L) {
		if (!_lg_typecheck_getMaxContextID(L)) {
			luaL_error(L, "luna typecheck failed in static unsigned int osg::GraphicsContext::getMaxContextID() function, expected prototype:\nstatic unsigned int osg::GraphicsContext::getMaxContextID()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		unsigned int lret = osg::GraphicsContext::getMaxContextID();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void osg::GraphicsContext::incrementContextIDUsageCount(unsigned int contextID)
	static int _bind_incrementContextIDUsageCount(lua_State *L) {
		if (!_lg_typecheck_incrementContextIDUsageCount(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::GraphicsContext::incrementContextIDUsageCount(unsigned int contextID) function, expected prototype:\nstatic void osg::GraphicsContext::incrementContextIDUsageCount(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::GraphicsContext::incrementContextIDUsageCount(contextID);

		return 0;
	}

	// static void osg::GraphicsContext::decrementContextIDUsageCount(unsigned int contextID)
	static int _bind_decrementContextIDUsageCount(lua_State *L) {
		if (!_lg_typecheck_decrementContextIDUsageCount(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::GraphicsContext::decrementContextIDUsageCount(unsigned int contextID) function, expected prototype:\nstatic void osg::GraphicsContext::decrementContextIDUsageCount(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::GraphicsContext::decrementContextIDUsageCount(contextID);

		return 0;
	}

	// static osg::GraphicsContext::GraphicsContexts osg::GraphicsContext::getAllRegisteredGraphicsContexts()
	static int _bind_getAllRegisteredGraphicsContexts(lua_State *L) {
		if (!_lg_typecheck_getAllRegisteredGraphicsContexts(L)) {
			luaL_error(L, "luna typecheck failed in static osg::GraphicsContext::GraphicsContexts osg::GraphicsContext::getAllRegisteredGraphicsContexts() function, expected prototype:\nstatic osg::GraphicsContext::GraphicsContexts osg::GraphicsContext::getAllRegisteredGraphicsContexts()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::GraphicsContexts stack_lret = osg::GraphicsContext::getAllRegisteredGraphicsContexts();
		osg::GraphicsContext::GraphicsContexts* lret = new osg::GraphicsContext::GraphicsContexts(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext::GraphicsContexts >::push(L,lret,true);

		return 1;
	}

	// static osg::GraphicsContext::GraphicsContexts osg::GraphicsContext::getRegisteredGraphicsContexts(unsigned int contextID)
	static int _bind_getRegisteredGraphicsContexts(lua_State *L) {
		if (!_lg_typecheck_getRegisteredGraphicsContexts(L)) {
			luaL_error(L, "luna typecheck failed in static osg::GraphicsContext::GraphicsContexts osg::GraphicsContext::getRegisteredGraphicsContexts(unsigned int contextID) function, expected prototype:\nstatic osg::GraphicsContext::GraphicsContexts osg::GraphicsContext::getRegisteredGraphicsContexts(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::GraphicsContext::GraphicsContexts stack_lret = osg::GraphicsContext::getRegisteredGraphicsContexts(contextID);
		osg::GraphicsContext::GraphicsContexts* lret = new osg::GraphicsContext::GraphicsContexts(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext::GraphicsContexts >::push(L,lret,true);

		return 1;
	}

	// static void osg::GraphicsContext::setCompileContext(unsigned int contextID, osg::GraphicsContext * gc)
	static int _bind_setCompileContext(lua_State *L) {
		if (!_lg_typecheck_setCompileContext(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::GraphicsContext::setCompileContext(unsigned int contextID, osg::GraphicsContext * gc) function, expected prototype:\nstatic void osg::GraphicsContext::setCompileContext(unsigned int contextID, osg::GraphicsContext * gc)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		osg::GraphicsContext* gc=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,2));

		osg::GraphicsContext::setCompileContext(contextID, gc);

		return 0;
	}

	// static osg::GraphicsContext * osg::GraphicsContext::getOrCreateCompileContext(unsigned int contextID)
	static int _bind_getOrCreateCompileContext(lua_State *L) {
		if (!_lg_typecheck_getOrCreateCompileContext(L)) {
			luaL_error(L, "luna typecheck failed in static osg::GraphicsContext * osg::GraphicsContext::getOrCreateCompileContext(unsigned int contextID) function, expected prototype:\nstatic osg::GraphicsContext * osg::GraphicsContext::getOrCreateCompileContext(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::GraphicsContext * lret = osg::GraphicsContext::getOrCreateCompileContext(contextID);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext >::push(L,lret,false);

		return 1;
	}

	// static osg::GraphicsContext * osg::GraphicsContext::getCompileContext(unsigned int contextID)
	static int _bind_getCompileContext(lua_State *L) {
		if (!_lg_typecheck_getCompileContext(L)) {
			luaL_error(L, "luna typecheck failed in static osg::GraphicsContext * osg::GraphicsContext::getCompileContext(unsigned int contextID) function, expected prototype:\nstatic osg::GraphicsContext * osg::GraphicsContext::getCompileContext(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::GraphicsContext * lret = osg::GraphicsContext::getCompileContext(contextID);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext >::push(L,lret,false);

		return 1;
	}

	// void osg::GraphicsContext::add(osg::Operation * operation)
	static int _bind_add(lua_State *L) {
		if (!_lg_typecheck_add(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::add(osg::Operation * operation) function, expected prototype:\nvoid osg::GraphicsContext::add(osg::Operation * operation)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Operation* operation=(Luna< osg::Referenced >::checkSubType< osg::Operation >(L,2));

		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::add(osg::Operation *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->add(operation);

		return 0;
	}

	// void osg::GraphicsContext::remove(osg::Operation * operation)
	static int _bind_remove_overload_1(lua_State *L) {
		if (!_lg_typecheck_remove_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::remove(osg::Operation * operation) function, expected prototype:\nvoid osg::GraphicsContext::remove(osg::Operation * operation)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Operation* operation=(Luna< osg::Referenced >::checkSubType< osg::Operation >(L,2));

		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::remove(osg::Operation *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->remove(operation);

		return 0;
	}

	// void osg::GraphicsContext::remove(const std::string & name)
	static int _bind_remove_overload_2(lua_State *L) {
		if (!_lg_typecheck_remove_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::remove(const std::string & name) function, expected prototype:\nvoid osg::GraphicsContext::remove(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::remove(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->remove(name);

		return 0;
	}

	// Overload binder for osg::GraphicsContext::remove
	static int _bind_remove(lua_State *L) {
		if (_lg_typecheck_remove_overload_1(L)) return _bind_remove_overload_1(L);
		if (_lg_typecheck_remove_overload_2(L)) return _bind_remove_overload_2(L);

		luaL_error(L, "error in function remove, cannot match any of the overloads for function remove:\n  remove(osg::Operation *)\n  remove(const std::string &)\n");
		return 0;
	}

	// void osg::GraphicsContext::removeAllOperations()
	static int _bind_removeAllOperations(lua_State *L) {
		if (!_lg_typecheck_removeAllOperations(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::removeAllOperations() function, expected prototype:\nvoid osg::GraphicsContext::removeAllOperations()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::removeAllOperations(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeAllOperations();

		return 0;
	}

	// void osg::GraphicsContext::runOperations()
	static int _bind_runOperations(lua_State *L) {
		if (!_lg_typecheck_runOperations(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::runOperations() function, expected prototype:\nvoid osg::GraphicsContext::runOperations()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::runOperations(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->runOperations();

		return 0;
	}

	// osg::GraphicsContext::GraphicsOperationQueue & osg::GraphicsContext::getOperationsQueue()
	static int _bind_getOperationsQueue(lua_State *L) {
		if (!_lg_typecheck_getOperationsQueue(L)) {
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext::GraphicsOperationQueue & osg::GraphicsContext::getOperationsQueue() function, expected prototype:\nosg::GraphicsContext::GraphicsOperationQueue & osg::GraphicsContext::getOperationsQueue()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::GraphicsContext::GraphicsOperationQueue & osg::GraphicsContext::getOperationsQueue(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::GraphicsContext::GraphicsOperationQueue* lret = &self->getOperationsQueue();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext::GraphicsOperationQueue >::push(L,lret,false);

		return 1;
	}

	// osg::RefBlock * osg::GraphicsContext::getOperationsBlock()
	static int _bind_getOperationsBlock(lua_State *L) {
		if (!_lg_typecheck_getOperationsBlock(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefBlock * osg::GraphicsContext::getOperationsBlock() function, expected prototype:\nosg::RefBlock * osg::GraphicsContext::getOperationsBlock()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::RefBlock * osg::GraphicsContext::getOperationsBlock(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::RefBlock * lret = self->getOperationsBlock();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefBlock >::push(L,lret,false);

		return 1;
	}

	// osg::Operation * osg::GraphicsContext::getCurrentOperation()
	static int _bind_getCurrentOperation(lua_State *L) {
		if (!_lg_typecheck_getCurrentOperation(L)) {
			luaL_error(L, "luna typecheck failed in osg::Operation * osg::GraphicsContext::getCurrentOperation() function, expected prototype:\nosg::Operation * osg::GraphicsContext::getCurrentOperation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Operation * osg::GraphicsContext::getCurrentOperation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Operation * lret = self->getCurrentOperation();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Operation >::push(L,lret,false);

		return 1;
	}

	// const osg::GraphicsContext::Traits * osg::GraphicsContext::getTraits() const
	static int _bind_getTraits(lua_State *L) {
		if (!_lg_typecheck_getTraits(L)) {
			luaL_error(L, "luna typecheck failed in const osg::GraphicsContext::Traits * osg::GraphicsContext::getTraits() const function, expected prototype:\nconst osg::GraphicsContext::Traits * osg::GraphicsContext::getTraits() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::GraphicsContext::Traits * osg::GraphicsContext::getTraits() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::GraphicsContext::Traits * lret = self->getTraits();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext::Traits >::push(L,lret,false);

		return 1;
	}

	// bool osg::GraphicsContext::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::valid() const function, expected prototype:\nbool osg::GraphicsContext::valid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::valid() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::GraphicsContext::setState(osg::State * state)
	static int _bind_setState(lua_State *L) {
		if (!_lg_typecheck_setState(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::setState(osg::State * state) function, expected prototype:\nvoid osg::GraphicsContext::setState(osg::State * state)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));

		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::setState(osg::State *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setState(state);

		return 0;
	}

	// osg::State * osg::GraphicsContext::getState()
	static int _bind_getState_overload_1(lua_State *L) {
		if (!_lg_typecheck_getState_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::State * osg::GraphicsContext::getState() function, expected prototype:\nosg::State * osg::GraphicsContext::getState()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::State * osg::GraphicsContext::getState(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::State * lret = self->getState();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::State >::push(L,lret,false);

		return 1;
	}

	// const osg::State * osg::GraphicsContext::getState() const
	static int _bind_getState_overload_2(lua_State *L) {
		if (!_lg_typecheck_getState_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::State * osg::GraphicsContext::getState() const function, expected prototype:\nconst osg::State * osg::GraphicsContext::getState() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::State * osg::GraphicsContext::getState() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::State * lret = self->getState();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::State >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::GraphicsContext::getState
	static int _bind_getState(lua_State *L) {
		if (_lg_typecheck_getState_overload_1(L)) return _bind_getState_overload_1(L);
		if (_lg_typecheck_getState_overload_2(L)) return _bind_getState_overload_2(L);

		luaL_error(L, "error in function getState, cannot match any of the overloads for function getState:\n  getState()\n  getState()\n");
		return 0;
	}

	// void osg::GraphicsContext::setClearColor(const osg::Vec4f & color)
	static int _bind_setClearColor(lua_State *L) {
		if (!_lg_typecheck_setClearColor(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::setClearColor(const osg::Vec4f & color) function, expected prototype:\nvoid osg::GraphicsContext::setClearColor(const osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osg::GraphicsContext::setClearColor function");
		}
		const osg::Vec4f & color=*color_ptr;

		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::setClearColor(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setClearColor(color);

		return 0;
	}

	// const osg::Vec4f & osg::GraphicsContext::getClearColor() const
	static int _bind_getClearColor(lua_State *L) {
		if (!_lg_typecheck_getClearColor(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::GraphicsContext::getClearColor() const function, expected prototype:\nconst osg::Vec4f & osg::GraphicsContext::getClearColor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::GraphicsContext::getClearColor() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getClearColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osg::GraphicsContext::setClearMask(unsigned int mask)
	static int _bind_setClearMask(lua_State *L) {
		if (!_lg_typecheck_setClearMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::setClearMask(unsigned int mask) function, expected prototype:\nvoid osg::GraphicsContext::setClearMask(unsigned int mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mask=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::setClearMask(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setClearMask(mask);

		return 0;
	}

	// unsigned int osg::GraphicsContext::getClearMask() const
	static int _bind_getClearMask(lua_State *L) {
		if (!_lg_typecheck_getClearMask(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GraphicsContext::getClearMask() const function, expected prototype:\nunsigned int osg::GraphicsContext::getClearMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GraphicsContext::getClearMask() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getClearMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::GraphicsContext::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::clear() function, expected prototype:\nvoid osg::GraphicsContext::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::clear(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// double osg::GraphicsContext::getTimeSinceLastClear() const
	static int _bind_getTimeSinceLastClear(lua_State *L) {
		if (!_lg_typecheck_getTimeSinceLastClear(L)) {
			luaL_error(L, "luna typecheck failed in double osg::GraphicsContext::getTimeSinceLastClear() const function, expected prototype:\ndouble osg::GraphicsContext::getTimeSinceLastClear() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::GraphicsContext::getTimeSinceLastClear() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getTimeSinceLastClear();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::GraphicsContext::realize()
	static int _bind_realize(lua_State *L) {
		if (!_lg_typecheck_realize(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::realize() function, expected prototype:\nbool osg::GraphicsContext::realize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::realize(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->realize();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::GraphicsContext::close(bool callCloseImplementation = true)
	static int _bind_close(lua_State *L) {
		if (!_lg_typecheck_close(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::close(bool callCloseImplementation = true) function, expected prototype:\nvoid osg::GraphicsContext::close(bool callCloseImplementation = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool callCloseImplementation=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::close(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->close(callCloseImplementation);

		return 0;
	}

	// void osg::GraphicsContext::swapBuffers()
	static int _bind_swapBuffers(lua_State *L) {
		if (!_lg_typecheck_swapBuffers(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::swapBuffers() function, expected prototype:\nvoid osg::GraphicsContext::swapBuffers()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::swapBuffers(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->swapBuffers();

		return 0;
	}

	// bool osg::GraphicsContext::isRealized() const
	static int _bind_isRealized(lua_State *L) {
		if (!_lg_typecheck_isRealized(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::isRealized() const function, expected prototype:\nbool osg::GraphicsContext::isRealized() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::isRealized() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isRealized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GraphicsContext::makeCurrent()
	static int _bind_makeCurrent(lua_State *L) {
		if (!_lg_typecheck_makeCurrent(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::makeCurrent() function, expected prototype:\nbool osg::GraphicsContext::makeCurrent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::makeCurrent(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->makeCurrent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GraphicsContext::makeContextCurrent(osg::GraphicsContext * readContext)
	static int _bind_makeContextCurrent(lua_State *L) {
		if (!_lg_typecheck_makeContextCurrent(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::makeContextCurrent(osg::GraphicsContext * readContext) function, expected prototype:\nbool osg::GraphicsContext::makeContextCurrent(osg::GraphicsContext * readContext)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GraphicsContext* readContext=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,2));

		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::makeContextCurrent(osg::GraphicsContext *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->makeContextCurrent(readContext);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GraphicsContext::releaseContext()
	static int _bind_releaseContext(lua_State *L) {
		if (!_lg_typecheck_releaseContext(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::releaseContext() function, expected prototype:\nbool osg::GraphicsContext::releaseContext()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::releaseContext(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->releaseContext();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GraphicsContext::isCurrent() const
	static int _bind_isCurrent(lua_State *L) {
		if (!_lg_typecheck_isCurrent(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::isCurrent() const function, expected prototype:\nbool osg::GraphicsContext::isCurrent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::isCurrent() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isCurrent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::GraphicsContext::bindPBufferToTexture(unsigned int buffer)
	static int _bind_bindPBufferToTexture(lua_State *L) {
		if (!_lg_typecheck_bindPBufferToTexture(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::bindPBufferToTexture(unsigned int buffer) function, expected prototype:\nvoid osg::GraphicsContext::bindPBufferToTexture(unsigned int buffer)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int buffer=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::bindPBufferToTexture(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->bindPBufferToTexture(buffer);

		return 0;
	}

	// void osg::GraphicsContext::createGraphicsThread()
	static int _bind_createGraphicsThread(lua_State *L) {
		if (!_lg_typecheck_createGraphicsThread(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::createGraphicsThread() function, expected prototype:\nvoid osg::GraphicsContext::createGraphicsThread()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::createGraphicsThread(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->createGraphicsThread();

		return 0;
	}

	// void osg::GraphicsContext::setGraphicsThread(osg::GraphicsThread * gt)
	static int _bind_setGraphicsThread(lua_State *L) {
		if (!_lg_typecheck_setGraphicsThread(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::setGraphicsThread(osg::GraphicsThread * gt) function, expected prototype:\nvoid osg::GraphicsContext::setGraphicsThread(osg::GraphicsThread * gt)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GraphicsThread* gt=(Luna< osg::Referenced >::checkSubType< osg::GraphicsThread >(L,2));

		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::setGraphicsThread(osg::GraphicsThread *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setGraphicsThread(gt);

		return 0;
	}

	// osg::GraphicsThread * osg::GraphicsContext::getGraphicsThread()
	static int _bind_getGraphicsThread_overload_1(lua_State *L) {
		if (!_lg_typecheck_getGraphicsThread_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::GraphicsThread * osg::GraphicsContext::getGraphicsThread() function, expected prototype:\nosg::GraphicsThread * osg::GraphicsContext::getGraphicsThread()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::GraphicsThread * osg::GraphicsContext::getGraphicsThread(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::GraphicsThread * lret = self->getGraphicsThread();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsThread >::push(L,lret,false);

		return 1;
	}

	// const osg::GraphicsThread * osg::GraphicsContext::getGraphicsThread() const
	static int _bind_getGraphicsThread_overload_2(lua_State *L) {
		if (!_lg_typecheck_getGraphicsThread_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::GraphicsThread * osg::GraphicsContext::getGraphicsThread() const function, expected prototype:\nconst osg::GraphicsThread * osg::GraphicsContext::getGraphicsThread() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::GraphicsThread * osg::GraphicsContext::getGraphicsThread() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::GraphicsThread * lret = self->getGraphicsThread();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsThread >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::GraphicsContext::getGraphicsThread
	static int _bind_getGraphicsThread(lua_State *L) {
		if (_lg_typecheck_getGraphicsThread_overload_1(L)) return _bind_getGraphicsThread_overload_1(L);
		if (_lg_typecheck_getGraphicsThread_overload_2(L)) return _bind_getGraphicsThread_overload_2(L);

		luaL_error(L, "error in function getGraphicsThread, cannot match any of the overloads for function getGraphicsThread:\n  getGraphicsThread()\n  getGraphicsThread()\n");
		return 0;
	}

	// bool osg::GraphicsContext::realizeImplementation()
	static int _bind_realizeImplementation(lua_State *L) {
		if (!_lg_typecheck_realizeImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::realizeImplementation() function, expected prototype:\nbool osg::GraphicsContext::realizeImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::realizeImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->realizeImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GraphicsContext::isRealizedImplementation() const
	static int _bind_isRealizedImplementation(lua_State *L) {
		if (!_lg_typecheck_isRealizedImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::isRealizedImplementation() const function, expected prototype:\nbool osg::GraphicsContext::isRealizedImplementation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::isRealizedImplementation() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isRealizedImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::GraphicsContext::closeImplementation()
	static int _bind_closeImplementation(lua_State *L) {
		if (!_lg_typecheck_closeImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::closeImplementation() function, expected prototype:\nvoid osg::GraphicsContext::closeImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::closeImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->closeImplementation();

		return 0;
	}

	// bool osg::GraphicsContext::makeCurrentImplementation()
	static int _bind_makeCurrentImplementation(lua_State *L) {
		if (!_lg_typecheck_makeCurrentImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::makeCurrentImplementation() function, expected prototype:\nbool osg::GraphicsContext::makeCurrentImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::makeCurrentImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->makeCurrentImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GraphicsContext::makeContextCurrentImplementation(osg::GraphicsContext * readContext)
	static int _bind_makeContextCurrentImplementation(lua_State *L) {
		if (!_lg_typecheck_makeContextCurrentImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::makeContextCurrentImplementation(osg::GraphicsContext * readContext) function, expected prototype:\nbool osg::GraphicsContext::makeContextCurrentImplementation(osg::GraphicsContext * readContext)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GraphicsContext* readContext=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,2));

		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::makeContextCurrentImplementation(osg::GraphicsContext *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->makeContextCurrentImplementation(readContext);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GraphicsContext::releaseContextImplementation()
	static int _bind_releaseContextImplementation(lua_State *L) {
		if (!_lg_typecheck_releaseContextImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::releaseContextImplementation() function, expected prototype:\nbool osg::GraphicsContext::releaseContextImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::releaseContextImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->releaseContextImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::GraphicsContext::bindPBufferToTextureImplementation(unsigned int buffer)
	static int _bind_bindPBufferToTextureImplementation(lua_State *L) {
		if (!_lg_typecheck_bindPBufferToTextureImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::bindPBufferToTextureImplementation(unsigned int buffer) function, expected prototype:\nvoid osg::GraphicsContext::bindPBufferToTextureImplementation(unsigned int buffer)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int buffer=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::bindPBufferToTextureImplementation(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->bindPBufferToTextureImplementation(buffer);

		return 0;
	}

	// void osg::GraphicsContext::setSwapCallback(osg::GraphicsContext::SwapCallback * rc)
	static int _bind_setSwapCallback(lua_State *L) {
		if (!_lg_typecheck_setSwapCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::setSwapCallback(osg::GraphicsContext::SwapCallback * rc) function, expected prototype:\nvoid osg::GraphicsContext::setSwapCallback(osg::GraphicsContext::SwapCallback * rc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GraphicsContext::SwapCallback* rc=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::SwapCallback >(L,2));

		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::setSwapCallback(osg::GraphicsContext::SwapCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSwapCallback(rc);

		return 0;
	}

	// osg::GraphicsContext::SwapCallback * osg::GraphicsContext::getSwapCallback()
	static int _bind_getSwapCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getSwapCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext::SwapCallback * osg::GraphicsContext::getSwapCallback() function, expected prototype:\nosg::GraphicsContext::SwapCallback * osg::GraphicsContext::getSwapCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::GraphicsContext::SwapCallback * osg::GraphicsContext::getSwapCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::GraphicsContext::SwapCallback * lret = self->getSwapCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext::SwapCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::GraphicsContext::SwapCallback * osg::GraphicsContext::getSwapCallback() const
	static int _bind_getSwapCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getSwapCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::GraphicsContext::SwapCallback * osg::GraphicsContext::getSwapCallback() const function, expected prototype:\nconst osg::GraphicsContext::SwapCallback * osg::GraphicsContext::getSwapCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::GraphicsContext::SwapCallback * osg::GraphicsContext::getSwapCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::GraphicsContext::SwapCallback * lret = self->getSwapCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext::SwapCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::GraphicsContext::getSwapCallback
	static int _bind_getSwapCallback(lua_State *L) {
		if (_lg_typecheck_getSwapCallback_overload_1(L)) return _bind_getSwapCallback_overload_1(L);
		if (_lg_typecheck_getSwapCallback_overload_2(L)) return _bind_getSwapCallback_overload_2(L);

		luaL_error(L, "error in function getSwapCallback, cannot match any of the overloads for function getSwapCallback:\n  getSwapCallback()\n  getSwapCallback()\n");
		return 0;
	}

	// void osg::GraphicsContext::swapBuffersCallbackOrImplemenation()
	static int _bind_swapBuffersCallbackOrImplemenation(lua_State *L) {
		if (!_lg_typecheck_swapBuffersCallbackOrImplemenation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::swapBuffersCallbackOrImplemenation() function, expected prototype:\nvoid osg::GraphicsContext::swapBuffersCallbackOrImplemenation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::swapBuffersCallbackOrImplemenation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->swapBuffersCallbackOrImplemenation();

		return 0;
	}

	// void osg::GraphicsContext::swapBuffersImplementation()
	static int _bind_swapBuffersImplementation(lua_State *L) {
		if (!_lg_typecheck_swapBuffersImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::swapBuffersImplementation() function, expected prototype:\nvoid osg::GraphicsContext::swapBuffersImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::swapBuffersImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->swapBuffersImplementation();

		return 0;
	}

	// void osg::GraphicsContext::resized(int x, int y, int width, int height)
	static int _bind_resized(lua_State *L) {
		if (!_lg_typecheck_resized(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::resized(int x, int y, int width, int height) function, expected prototype:\nvoid osg::GraphicsContext::resized(int x, int y, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::resized(int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->resized(x, y, width, height);

		return 0;
	}

	// void osg::GraphicsContext::setResizedCallback(osg::GraphicsContext::ResizedCallback * rc)
	static int _bind_setResizedCallback(lua_State *L) {
		if (!_lg_typecheck_setResizedCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::setResizedCallback(osg::GraphicsContext::ResizedCallback * rc) function, expected prototype:\nvoid osg::GraphicsContext::setResizedCallback(osg::GraphicsContext::ResizedCallback * rc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GraphicsContext::ResizedCallback* rc=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::ResizedCallback >(L,2));

		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::setResizedCallback(osg::GraphicsContext::ResizedCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setResizedCallback(rc);

		return 0;
	}

	// osg::GraphicsContext::ResizedCallback * osg::GraphicsContext::getResizedCallback()
	static int _bind_getResizedCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getResizedCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext::ResizedCallback * osg::GraphicsContext::getResizedCallback() function, expected prototype:\nosg::GraphicsContext::ResizedCallback * osg::GraphicsContext::getResizedCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::GraphicsContext::ResizedCallback * osg::GraphicsContext::getResizedCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::GraphicsContext::ResizedCallback * lret = self->getResizedCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext::ResizedCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::GraphicsContext::ResizedCallback * osg::GraphicsContext::getResizedCallback() const
	static int _bind_getResizedCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getResizedCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::GraphicsContext::ResizedCallback * osg::GraphicsContext::getResizedCallback() const function, expected prototype:\nconst osg::GraphicsContext::ResizedCallback * osg::GraphicsContext::getResizedCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::GraphicsContext::ResizedCallback * osg::GraphicsContext::getResizedCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::GraphicsContext::ResizedCallback * lret = self->getResizedCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext::ResizedCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::GraphicsContext::getResizedCallback
	static int _bind_getResizedCallback(lua_State *L) {
		if (_lg_typecheck_getResizedCallback_overload_1(L)) return _bind_getResizedCallback_overload_1(L);
		if (_lg_typecheck_getResizedCallback_overload_2(L)) return _bind_getResizedCallback_overload_2(L);

		luaL_error(L, "error in function getResizedCallback, cannot match any of the overloads for function getResizedCallback:\n  getResizedCallback()\n  getResizedCallback()\n");
		return 0;
	}

	// void osg::GraphicsContext::resizedImplementation(int x, int y, int width, int height)
	static int _bind_resizedImplementation(lua_State *L) {
		if (!_lg_typecheck_resizedImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::resizedImplementation(int x, int y, int width, int height) function, expected prototype:\nvoid osg::GraphicsContext::resizedImplementation(int x, int y, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::resizedImplementation(int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->resizedImplementation(x, y, width, height);

		return 0;
	}

	// osg::GraphicsContext::Cameras & osg::GraphicsContext::getCameras()
	static int _bind_getCameras_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCameras_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext::Cameras & osg::GraphicsContext::getCameras() function, expected prototype:\nosg::GraphicsContext::Cameras & osg::GraphicsContext::getCameras()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::GraphicsContext::Cameras & osg::GraphicsContext::getCameras(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::GraphicsContext::Cameras* lret = &self->getCameras();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext::Cameras >::push(L,lret,false);

		return 1;
	}

	// const osg::GraphicsContext::Cameras & osg::GraphicsContext::getCameras() const
	static int _bind_getCameras_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCameras_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::GraphicsContext::Cameras & osg::GraphicsContext::getCameras() const function, expected prototype:\nconst osg::GraphicsContext::Cameras & osg::GraphicsContext::getCameras() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::GraphicsContext::Cameras & osg::GraphicsContext::getCameras() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::GraphicsContext::Cameras* lret = &self->getCameras();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext::Cameras >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::GraphicsContext::getCameras
	static int _bind_getCameras(lua_State *L) {
		if (_lg_typecheck_getCameras_overload_1(L)) return _bind_getCameras_overload_1(L);
		if (_lg_typecheck_getCameras_overload_2(L)) return _bind_getCameras_overload_2(L);

		luaL_error(L, "error in function getCameras, cannot match any of the overloads for function getCameras:\n  getCameras()\n  getCameras()\n");
		return 0;
	}

	// void osg::GraphicsContext::setDefaultFboId(unsigned int i)
	static int _bind_setDefaultFboId(lua_State *L) {
		if (!_lg_typecheck_setDefaultFboId(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::setDefaultFboId(unsigned int i) function, expected prototype:\nvoid osg::GraphicsContext::setDefaultFboId(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::setDefaultFboId(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDefaultFboId(i);

		return 0;
	}

	// unsigned int osg::GraphicsContext::getDefaultFboId() const
	static int _bind_getDefaultFboId(lua_State *L) {
		if (!_lg_typecheck_getDefaultFboId(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GraphicsContext::getDefaultFboId() const function, expected prototype:\nunsigned int osg::GraphicsContext::getDefaultFboId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GraphicsContext::getDefaultFboId() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getDefaultFboId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::GraphicsContext::isSameKindAs(const osg::Object * object) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::isSameKindAs(const osg::Object * object) const function, expected prototype:\nbool osg::GraphicsContext::isSameKindAs(const osg::Object * object) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* object=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(object);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::GraphicsContext::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::GraphicsContext::libraryName() const function, expected prototype:\nconst char * osg::GraphicsContext::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::GraphicsContext::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::GraphicsContext::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::GraphicsContext::className() const function, expected prototype:\nconst char * osg::GraphicsContext::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::GraphicsContext::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::GraphicsContext::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::GraphicsContext::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsContext::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::GraphicsContext::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::base_setName(const std::string & name) function, expected prototype:\nvoid osg::GraphicsContext::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsContext::setName(name);

		return 0;
	}

	// void osg::GraphicsContext::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::base_computeDataVariance() function, expected prototype:\nvoid osg::GraphicsContext::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsContext::computeDataVariance();

		return 0;
	}

	// void osg::GraphicsContext::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::GraphicsContext::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsContext::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::GraphicsContext::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::GraphicsContext::base_getUserData() function, expected prototype:\nosg::Referenced * osg::GraphicsContext::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::GraphicsContext::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->GraphicsContext::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::GraphicsContext::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::GraphicsContext::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::GraphicsContext::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::GraphicsContext::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->GraphicsContext::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::GraphicsContext::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::GraphicsContext::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::GraphicsContext::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsContext::releaseGLObjects(_arg1);

		return 0;
	}

	// void osg::GraphicsContext::base_runOperations()
	static int _bind_base_runOperations(lua_State *L) {
		if (!_lg_typecheck_base_runOperations(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::base_runOperations() function, expected prototype:\nvoid osg::GraphicsContext::base_runOperations()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::base_runOperations(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsContext::runOperations();

		return 0;
	}

	// void osg::GraphicsContext::base_clear()
	static int _bind_base_clear(lua_State *L) {
		if (!_lg_typecheck_base_clear(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::base_clear() function, expected prototype:\nvoid osg::GraphicsContext::base_clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::base_clear(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsContext::clear();

		return 0;
	}

	// void osg::GraphicsContext::base_resizedImplementation(int x, int y, int width, int height)
	static int _bind_base_resizedImplementation(lua_State *L) {
		if (!_lg_typecheck_base_resizedImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::base_resizedImplementation(int x, int y, int width, int height) function, expected prototype:\nvoid osg::GraphicsContext::base_resizedImplementation(int x, int y, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::base_resizedImplementation(int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsContext::resizedImplementation(x, y, width, height);

		return 0;
	}

	// bool osg::GraphicsContext::base_isSameKindAs(const osg::Object * object) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::base_isSameKindAs(const osg::Object * object) const function, expected prototype:\nbool osg::GraphicsContext::base_isSameKindAs(const osg::Object * object) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* object=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GraphicsContext::isSameKindAs(object);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::GraphicsContext::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::GraphicsContext::base_libraryName() const function, expected prototype:\nconst char * osg::GraphicsContext::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::GraphicsContext::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->GraphicsContext::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::GraphicsContext::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::GraphicsContext::base_className() const function, expected prototype:\nconst char * osg::GraphicsContext::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::GraphicsContext::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->GraphicsContext::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::GraphicsContext* LunaTraits< osg::GraphicsContext >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool osg::GraphicsContext::valid() const
	// bool osg::GraphicsContext::realizeImplementation()
	// bool osg::GraphicsContext::isRealizedImplementation() const
	// void osg::GraphicsContext::closeImplementation()
	// bool osg::GraphicsContext::makeCurrentImplementation()
	// bool osg::GraphicsContext::makeContextCurrentImplementation(osg::GraphicsContext * readContext)
	// bool osg::GraphicsContext::releaseContextImplementation()
	// void osg::GraphicsContext::bindPBufferToTextureImplementation(unsigned int buffer)
	// void osg::GraphicsContext::swapBuffersImplementation()
}

void LunaTraits< osg::GraphicsContext >::_bind_dtor(osg::GraphicsContext* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::GraphicsContext >::className[] = "GraphicsContext";
const char LunaTraits< osg::GraphicsContext >::fullName[] = "osg::GraphicsContext";
const char LunaTraits< osg::GraphicsContext >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsContext >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::GraphicsContext >::hash = 15306948;
const int LunaTraits< osg::GraphicsContext >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::GraphicsContext >::methods[] = {
	{"setWindowingSystemInterface", &luna_wrapper_osg_GraphicsContext::_bind_setWindowingSystemInterface},
	{"getWindowingSystemInterface", &luna_wrapper_osg_GraphicsContext::_bind_getWindowingSystemInterface},
	{"createGraphicsContext", &luna_wrapper_osg_GraphicsContext::_bind_createGraphicsContext},
	{"createNewContextID", &luna_wrapper_osg_GraphicsContext::_bind_createNewContextID},
	{"getMaxContextID", &luna_wrapper_osg_GraphicsContext::_bind_getMaxContextID},
	{"incrementContextIDUsageCount", &luna_wrapper_osg_GraphicsContext::_bind_incrementContextIDUsageCount},
	{"decrementContextIDUsageCount", &luna_wrapper_osg_GraphicsContext::_bind_decrementContextIDUsageCount},
	{"getAllRegisteredGraphicsContexts", &luna_wrapper_osg_GraphicsContext::_bind_getAllRegisteredGraphicsContexts},
	{"getRegisteredGraphicsContexts", &luna_wrapper_osg_GraphicsContext::_bind_getRegisteredGraphicsContexts},
	{"setCompileContext", &luna_wrapper_osg_GraphicsContext::_bind_setCompileContext},
	{"getOrCreateCompileContext", &luna_wrapper_osg_GraphicsContext::_bind_getOrCreateCompileContext},
	{"getCompileContext", &luna_wrapper_osg_GraphicsContext::_bind_getCompileContext},
	{"add", &luna_wrapper_osg_GraphicsContext::_bind_add},
	{"remove", &luna_wrapper_osg_GraphicsContext::_bind_remove},
	{"removeAllOperations", &luna_wrapper_osg_GraphicsContext::_bind_removeAllOperations},
	{"runOperations", &luna_wrapper_osg_GraphicsContext::_bind_runOperations},
	{"getOperationsQueue", &luna_wrapper_osg_GraphicsContext::_bind_getOperationsQueue},
	{"getOperationsBlock", &luna_wrapper_osg_GraphicsContext::_bind_getOperationsBlock},
	{"getCurrentOperation", &luna_wrapper_osg_GraphicsContext::_bind_getCurrentOperation},
	{"getTraits", &luna_wrapper_osg_GraphicsContext::_bind_getTraits},
	{"valid", &luna_wrapper_osg_GraphicsContext::_bind_valid},
	{"setState", &luna_wrapper_osg_GraphicsContext::_bind_setState},
	{"getState", &luna_wrapper_osg_GraphicsContext::_bind_getState},
	{"setClearColor", &luna_wrapper_osg_GraphicsContext::_bind_setClearColor},
	{"getClearColor", &luna_wrapper_osg_GraphicsContext::_bind_getClearColor},
	{"setClearMask", &luna_wrapper_osg_GraphicsContext::_bind_setClearMask},
	{"getClearMask", &luna_wrapper_osg_GraphicsContext::_bind_getClearMask},
	{"clear", &luna_wrapper_osg_GraphicsContext::_bind_clear},
	{"getTimeSinceLastClear", &luna_wrapper_osg_GraphicsContext::_bind_getTimeSinceLastClear},
	{"realize", &luna_wrapper_osg_GraphicsContext::_bind_realize},
	{"close", &luna_wrapper_osg_GraphicsContext::_bind_close},
	{"swapBuffers", &luna_wrapper_osg_GraphicsContext::_bind_swapBuffers},
	{"isRealized", &luna_wrapper_osg_GraphicsContext::_bind_isRealized},
	{"makeCurrent", &luna_wrapper_osg_GraphicsContext::_bind_makeCurrent},
	{"makeContextCurrent", &luna_wrapper_osg_GraphicsContext::_bind_makeContextCurrent},
	{"releaseContext", &luna_wrapper_osg_GraphicsContext::_bind_releaseContext},
	{"isCurrent", &luna_wrapper_osg_GraphicsContext::_bind_isCurrent},
	{"bindPBufferToTexture", &luna_wrapper_osg_GraphicsContext::_bind_bindPBufferToTexture},
	{"createGraphicsThread", &luna_wrapper_osg_GraphicsContext::_bind_createGraphicsThread},
	{"setGraphicsThread", &luna_wrapper_osg_GraphicsContext::_bind_setGraphicsThread},
	{"getGraphicsThread", &luna_wrapper_osg_GraphicsContext::_bind_getGraphicsThread},
	{"realizeImplementation", &luna_wrapper_osg_GraphicsContext::_bind_realizeImplementation},
	{"isRealizedImplementation", &luna_wrapper_osg_GraphicsContext::_bind_isRealizedImplementation},
	{"closeImplementation", &luna_wrapper_osg_GraphicsContext::_bind_closeImplementation},
	{"makeCurrentImplementation", &luna_wrapper_osg_GraphicsContext::_bind_makeCurrentImplementation},
	{"makeContextCurrentImplementation", &luna_wrapper_osg_GraphicsContext::_bind_makeContextCurrentImplementation},
	{"releaseContextImplementation", &luna_wrapper_osg_GraphicsContext::_bind_releaseContextImplementation},
	{"bindPBufferToTextureImplementation", &luna_wrapper_osg_GraphicsContext::_bind_bindPBufferToTextureImplementation},
	{"setSwapCallback", &luna_wrapper_osg_GraphicsContext::_bind_setSwapCallback},
	{"getSwapCallback", &luna_wrapper_osg_GraphicsContext::_bind_getSwapCallback},
	{"swapBuffersCallbackOrImplemenation", &luna_wrapper_osg_GraphicsContext::_bind_swapBuffersCallbackOrImplemenation},
	{"swapBuffersImplementation", &luna_wrapper_osg_GraphicsContext::_bind_swapBuffersImplementation},
	{"resized", &luna_wrapper_osg_GraphicsContext::_bind_resized},
	{"setResizedCallback", &luna_wrapper_osg_GraphicsContext::_bind_setResizedCallback},
	{"getResizedCallback", &luna_wrapper_osg_GraphicsContext::_bind_getResizedCallback},
	{"resizedImplementation", &luna_wrapper_osg_GraphicsContext::_bind_resizedImplementation},
	{"getCameras", &luna_wrapper_osg_GraphicsContext::_bind_getCameras},
	{"setDefaultFboId", &luna_wrapper_osg_GraphicsContext::_bind_setDefaultFboId},
	{"getDefaultFboId", &luna_wrapper_osg_GraphicsContext::_bind_getDefaultFboId},
	{"isSameKindAs", &luna_wrapper_osg_GraphicsContext::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_GraphicsContext::_bind_libraryName},
	{"className", &luna_wrapper_osg_GraphicsContext::_bind_className},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_GraphicsContext::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_GraphicsContext::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_GraphicsContext::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_GraphicsContext::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_GraphicsContext::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_GraphicsContext::_bind_base_releaseGLObjects},
	{"base_runOperations", &luna_wrapper_osg_GraphicsContext::_bind_base_runOperations},
	{"base_clear", &luna_wrapper_osg_GraphicsContext::_bind_base_clear},
	{"base_resizedImplementation", &luna_wrapper_osg_GraphicsContext::_bind_base_resizedImplementation},
	{"base_isSameKindAs", &luna_wrapper_osg_GraphicsContext::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_GraphicsContext::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_GraphicsContext::_bind_base_className},
	{"fromVoid", &luna_wrapper_osg_GraphicsContext::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_GraphicsContext::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_GraphicsContext::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GraphicsContext >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_GraphicsContext::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GraphicsContext >::enumValues[] = {
	{0,0}
};


