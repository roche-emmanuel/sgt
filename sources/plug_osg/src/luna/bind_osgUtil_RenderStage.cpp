#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_RenderStage.h>

class luna_wrapper_osgUtil_RenderStage {
public:
	typedef Luna< osgUtil::RenderStage > luna_t;

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

		osgUtil::RenderStage* self= (osgUtil::RenderStage*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::RenderStage >::push(L,self,false);
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
		//osgUtil::RenderStage* ptr= dynamic_cast< osgUtil::RenderStage* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::RenderStage* ptr= luna_caster< osg::Referenced, osgUtil::RenderStage >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::RenderStage >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDrawBuffer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDrawBuffer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDrawBufferApplyMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDrawBufferApplyMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setReadBuffer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReadBuffer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getReadBufferApplyMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setReadBufferApplyMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setViewport(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getViewport_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewport_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInitialViewMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInitialViewMatrix(lua_State *L) {
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

	inline static bool _lg_typecheck_setColorMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColorMask_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColorMask_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_setClearAccum(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClearAccum(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setClearDepth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClearDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setClearStencil(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClearStencil(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCamera(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCamera_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCamera_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCameraRequiresSetUp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCameraRequiresSetUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_runCameraSetUp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTexture(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTexture(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setImageReadPixelFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImageReadPixelFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setImageReadPixelDataType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImageReadPixelDataType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFrameBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrameBufferObject_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrameBufferObject_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMultisampleResolveFramebufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMultisampleResolveFramebufferObject_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMultisampleResolveFramebufferObject_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDisableFboAfterRender(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDisableFboAfterRender(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGraphicsContext(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGraphicsContext_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGraphicsContext_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInheritedPositionalStateContainerMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInheritedPositionalStateContainerMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInheritedPositionalStateContainer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInheritedPositionalStateContainer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPositionalStateContainer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPositionalStateContainer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addPositionedAttribute(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addPositionedTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_copyTexture(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_sort(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_drawPreRenderStages(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_draw(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawInner(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawPostRenderStages(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addToDependencyList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addPreRenderStage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addPostRenderStage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStats(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,95996950) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeNumberOfDynamicRenderLeaves(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_attach(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_collateReferencesToDependentCameras(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clearReferencesToDependentCameras(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_sortImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_sortByState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_sortByStateThenFrontToBack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_sortFrontToBack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_sortBackToFront(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_sortTraversalOrder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_addPositionedAttribute(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addPositionedTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_sort(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_drawPreRenderStages(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_draw(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawInner(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawPostRenderStages(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeNumberOfDynamicRenderLeaves(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::RenderStage::RenderStage()
	static osgUtil::RenderStage* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::RenderStage::RenderStage() function, expected prototype:\nosgUtil::RenderStage::RenderStage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgUtil::RenderStage();
	}

	// osgUtil::RenderStage::RenderStage(osgUtil::RenderBin::SortMode mode)
	static osgUtil::RenderStage* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::RenderStage::RenderStage(osgUtil::RenderBin::SortMode mode) function, expected prototype:\nosgUtil::RenderStage::RenderStage(osgUtil::RenderBin::SortMode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::RenderBin::SortMode mode=(osgUtil::RenderBin::SortMode)lua_tointeger(L,1);

		return new osgUtil::RenderStage(mode);
	}

	// osgUtil::RenderStage::RenderStage(const osgUtil::RenderStage & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgUtil::RenderStage* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::RenderStage::RenderStage(const osgUtil::RenderStage & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgUtil::RenderStage::RenderStage(const osgUtil::RenderStage & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgUtil::RenderStage* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgUtil::RenderStage::RenderStage function");
		}
		const osgUtil::RenderStage & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgUtil::RenderStage::RenderStage function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgUtil::RenderStage(rhs, copyop);
	}

	// osgUtil::RenderStage::RenderStage(lua_Table * data)
	static osgUtil::RenderStage* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::RenderStage::RenderStage(lua_Table * data) function, expected prototype:\nosgUtil::RenderStage::RenderStage(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgUtil_RenderStage(L,NULL);
	}

	// osgUtil::RenderStage::RenderStage(lua_Table * data, osgUtil::RenderBin::SortMode mode)
	static osgUtil::RenderStage* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::RenderStage::RenderStage(lua_Table * data, osgUtil::RenderBin::SortMode mode) function, expected prototype:\nosgUtil::RenderStage::RenderStage(lua_Table * data, osgUtil::RenderBin::SortMode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::RenderBin::SortMode mode=(osgUtil::RenderBin::SortMode)lua_tointeger(L,2);

		return new wrapper_osgUtil_RenderStage(L,NULL, mode);
	}

	// osgUtil::RenderStage::RenderStage(lua_Table * data, const osgUtil::RenderStage & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgUtil::RenderStage* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::RenderStage::RenderStage(lua_Table * data, const osgUtil::RenderStage & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgUtil::RenderStage::RenderStage(lua_Table * data, const osgUtil::RenderStage & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgUtil::RenderStage* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgUtil::RenderStage::RenderStage function");
		}
		const osgUtil::RenderStage & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgUtil::RenderStage::RenderStage function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgUtil_RenderStage(L,NULL, rhs, copyop);
	}

	// Overload binder for osgUtil::RenderStage::RenderStage
	static osgUtil::RenderStage* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function RenderStage, cannot match any of the overloads for function RenderStage:\n  RenderStage()\n  RenderStage(osgUtil::RenderBin::SortMode)\n  RenderStage(const osgUtil::RenderStage &, const osg::CopyOp &)\n  RenderStage(lua_Table *)\n  RenderStage(lua_Table *, osgUtil::RenderBin::SortMode)\n  RenderStage(lua_Table *, const osgUtil::RenderStage &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgUtil::RenderStage::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgUtil::RenderStage::cloneType() const function, expected prototype:\nosg::Object * osgUtil::RenderStage::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgUtil::RenderStage::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgUtil::RenderStage::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgUtil::RenderStage::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgUtil::RenderStage::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::RenderStage::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgUtil::RenderStage::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgUtil::RenderStage::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::RenderStage::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgUtil::RenderStage::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::RenderStage::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgUtil::RenderStage::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::RenderStage::className() const function, expected prototype:\nconst char * osgUtil::RenderStage::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::RenderStage::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::RenderStage::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::reset() function, expected prototype:\nvoid osgUtil::RenderStage::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// void osgUtil::RenderStage::setDrawBuffer(unsigned int buffer, bool applyMask = true)
	static int _bind_setDrawBuffer(lua_State *L) {
		if (!_lg_typecheck_setDrawBuffer(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::setDrawBuffer(unsigned int buffer, bool applyMask = true) function, expected prototype:\nvoid osgUtil::RenderStage::setDrawBuffer(unsigned int buffer, bool applyMask = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int buffer=(unsigned int)lua_tointeger(L,2);
		bool applyMask=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::setDrawBuffer(unsigned int, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDrawBuffer(buffer, applyMask);

		return 0;
	}

	// unsigned int osgUtil::RenderStage::getDrawBuffer() const
	static int _bind_getDrawBuffer(lua_State *L) {
		if (!_lg_typecheck_getDrawBuffer(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::RenderStage::getDrawBuffer() const function, expected prototype:\nunsigned int osgUtil::RenderStage::getDrawBuffer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::RenderStage::getDrawBuffer() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getDrawBuffer();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgUtil::RenderStage::getDrawBufferApplyMask() const
	static int _bind_getDrawBufferApplyMask(lua_State *L) {
		if (!_lg_typecheck_getDrawBufferApplyMask(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::RenderStage::getDrawBufferApplyMask() const function, expected prototype:\nbool osgUtil::RenderStage::getDrawBufferApplyMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::RenderStage::getDrawBufferApplyMask() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getDrawBufferApplyMask();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::RenderStage::setDrawBufferApplyMask(bool applyMask)
	static int _bind_setDrawBufferApplyMask(lua_State *L) {
		if (!_lg_typecheck_setDrawBufferApplyMask(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::setDrawBufferApplyMask(bool applyMask) function, expected prototype:\nvoid osgUtil::RenderStage::setDrawBufferApplyMask(bool applyMask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool applyMask=(bool)(lua_toboolean(L,2)==1);

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::setDrawBufferApplyMask(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDrawBufferApplyMask(applyMask);

		return 0;
	}

	// void osgUtil::RenderStage::setReadBuffer(unsigned int buffer, bool applyMask = true)
	static int _bind_setReadBuffer(lua_State *L) {
		if (!_lg_typecheck_setReadBuffer(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::setReadBuffer(unsigned int buffer, bool applyMask = true) function, expected prototype:\nvoid osgUtil::RenderStage::setReadBuffer(unsigned int buffer, bool applyMask = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int buffer=(unsigned int)lua_tointeger(L,2);
		bool applyMask=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::setReadBuffer(unsigned int, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setReadBuffer(buffer, applyMask);

		return 0;
	}

	// unsigned int osgUtil::RenderStage::getReadBuffer() const
	static int _bind_getReadBuffer(lua_State *L) {
		if (!_lg_typecheck_getReadBuffer(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::RenderStage::getReadBuffer() const function, expected prototype:\nunsigned int osgUtil::RenderStage::getReadBuffer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::RenderStage::getReadBuffer() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getReadBuffer();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgUtil::RenderStage::getReadBufferApplyMask() const
	static int _bind_getReadBufferApplyMask(lua_State *L) {
		if (!_lg_typecheck_getReadBufferApplyMask(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::RenderStage::getReadBufferApplyMask() const function, expected prototype:\nbool osgUtil::RenderStage::getReadBufferApplyMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::RenderStage::getReadBufferApplyMask() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getReadBufferApplyMask();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::RenderStage::setReadBufferApplyMask(bool applyMask)
	static int _bind_setReadBufferApplyMask(lua_State *L) {
		if (!_lg_typecheck_setReadBufferApplyMask(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::setReadBufferApplyMask(bool applyMask) function, expected prototype:\nvoid osgUtil::RenderStage::setReadBufferApplyMask(bool applyMask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool applyMask=(bool)(lua_toboolean(L,2)==1);

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::setReadBufferApplyMask(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setReadBufferApplyMask(applyMask);

		return 0;
	}

	// void osgUtil::RenderStage::setViewport(osg::Viewport * viewport)
	static int _bind_setViewport(lua_State *L) {
		if (!_lg_typecheck_setViewport(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::setViewport(osg::Viewport * viewport) function, expected prototype:\nvoid osgUtil::RenderStage::setViewport(osg::Viewport * viewport)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Viewport* viewport=(Luna< osg::Referenced >::checkSubType< osg::Viewport >(L,2));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::setViewport(osg::Viewport *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setViewport(viewport);

		return 0;
	}

	// const osg::Viewport * osgUtil::RenderStage::getViewport() const
	static int _bind_getViewport_overload_1(lua_State *L) {
		if (!_lg_typecheck_getViewport_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Viewport * osgUtil::RenderStage::getViewport() const function, expected prototype:\nconst osg::Viewport * osgUtil::RenderStage::getViewport() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Viewport * osgUtil::RenderStage::getViewport() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Viewport * lret = self->getViewport();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Viewport >::push(L,lret,false);

		return 1;
	}

	// osg::Viewport * osgUtil::RenderStage::getViewport()
	static int _bind_getViewport_overload_2(lua_State *L) {
		if (!_lg_typecheck_getViewport_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Viewport * osgUtil::RenderStage::getViewport() function, expected prototype:\nosg::Viewport * osgUtil::RenderStage::getViewport()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Viewport * osgUtil::RenderStage::getViewport(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Viewport * lret = self->getViewport();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Viewport >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::RenderStage::getViewport
	static int _bind_getViewport(lua_State *L) {
		if (_lg_typecheck_getViewport_overload_1(L)) return _bind_getViewport_overload_1(L);
		if (_lg_typecheck_getViewport_overload_2(L)) return _bind_getViewport_overload_2(L);

		luaL_error(L, "error in function getViewport, cannot match any of the overloads for function getViewport:\n  getViewport()\n  getViewport()\n");
		return 0;
	}

	// void osgUtil::RenderStage::setInitialViewMatrix(const osg::RefMatrixd * matrix)
	static int _bind_setInitialViewMatrix(lua_State *L) {
		if (!_lg_typecheck_setInitialViewMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::setInitialViewMatrix(const osg::RefMatrixd * matrix) function, expected prototype:\nvoid osgUtil::RenderStage::setInitialViewMatrix(const osg::RefMatrixd * matrix)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::RefMatrixd* matrix=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,2));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::setInitialViewMatrix(const osg::RefMatrixd *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setInitialViewMatrix(matrix);

		return 0;
	}

	// const osg::RefMatrixd * osgUtil::RenderStage::getInitialViewMatrix()
	static int _bind_getInitialViewMatrix(lua_State *L) {
		if (!_lg_typecheck_getInitialViewMatrix(L)) {
			luaL_error(L, "luna typecheck failed in const osg::RefMatrixd * osgUtil::RenderStage::getInitialViewMatrix() function, expected prototype:\nconst osg::RefMatrixd * osgUtil::RenderStage::getInitialViewMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::RefMatrixd * osgUtil::RenderStage::getInitialViewMatrix(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::RefMatrixd * lret = self->getInitialViewMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefMatrixd >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::RenderStage::setClearMask(unsigned int mask)
	static int _bind_setClearMask(lua_State *L) {
		if (!_lg_typecheck_setClearMask(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::setClearMask(unsigned int mask) function, expected prototype:\nvoid osgUtil::RenderStage::setClearMask(unsigned int mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mask=(unsigned int)lua_tointeger(L,2);

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::setClearMask(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setClearMask(mask);

		return 0;
	}

	// unsigned int osgUtil::RenderStage::getClearMask() const
	static int _bind_getClearMask(lua_State *L) {
		if (!_lg_typecheck_getClearMask(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::RenderStage::getClearMask() const function, expected prototype:\nunsigned int osgUtil::RenderStage::getClearMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::RenderStage::getClearMask() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getClearMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::RenderStage::setColorMask(osg::ColorMask * cm)
	static int _bind_setColorMask(lua_State *L) {
		if (!_lg_typecheck_setColorMask(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::setColorMask(osg::ColorMask * cm) function, expected prototype:\nvoid osgUtil::RenderStage::setColorMask(osg::ColorMask * cm)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ColorMask* cm=(Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,2));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::setColorMask(osg::ColorMask *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColorMask(cm);

		return 0;
	}

	// osg::ColorMask * osgUtil::RenderStage::getColorMask()
	static int _bind_getColorMask_overload_1(lua_State *L) {
		if (!_lg_typecheck_getColorMask_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ColorMask * osgUtil::RenderStage::getColorMask() function, expected prototype:\nosg::ColorMask * osgUtil::RenderStage::getColorMask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ColorMask * osgUtil::RenderStage::getColorMask(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ColorMask * lret = self->getColorMask();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ColorMask >::push(L,lret,false);

		return 1;
	}

	// const osg::ColorMask * osgUtil::RenderStage::getColorMask() const
	static int _bind_getColorMask_overload_2(lua_State *L) {
		if (!_lg_typecheck_getColorMask_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::ColorMask * osgUtil::RenderStage::getColorMask() const function, expected prototype:\nconst osg::ColorMask * osgUtil::RenderStage::getColorMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::ColorMask * osgUtil::RenderStage::getColorMask() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ColorMask * lret = self->getColorMask();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ColorMask >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::RenderStage::getColorMask
	static int _bind_getColorMask(lua_State *L) {
		if (_lg_typecheck_getColorMask_overload_1(L)) return _bind_getColorMask_overload_1(L);
		if (_lg_typecheck_getColorMask_overload_2(L)) return _bind_getColorMask_overload_2(L);

		luaL_error(L, "error in function getColorMask, cannot match any of the overloads for function getColorMask:\n  getColorMask()\n  getColorMask()\n");
		return 0;
	}

	// void osgUtil::RenderStage::setClearColor(const osg::Vec4f & color)
	static int _bind_setClearColor(lua_State *L) {
		if (!_lg_typecheck_setClearColor(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::setClearColor(const osg::Vec4f & color) function, expected prototype:\nvoid osgUtil::RenderStage::setClearColor(const osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osgUtil::RenderStage::setClearColor function");
		}
		const osg::Vec4f & color=*color_ptr;

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::setClearColor(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setClearColor(color);

		return 0;
	}

	// const osg::Vec4f & osgUtil::RenderStage::getClearColor() const
	static int _bind_getClearColor(lua_State *L) {
		if (!_lg_typecheck_getClearColor(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osgUtil::RenderStage::getClearColor() const function, expected prototype:\nconst osg::Vec4f & osgUtil::RenderStage::getClearColor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osgUtil::RenderStage::getClearColor() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getClearColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::RenderStage::setClearAccum(const osg::Vec4f & color)
	static int _bind_setClearAccum(lua_State *L) {
		if (!_lg_typecheck_setClearAccum(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::setClearAccum(const osg::Vec4f & color) function, expected prototype:\nvoid osgUtil::RenderStage::setClearAccum(const osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osgUtil::RenderStage::setClearAccum function");
		}
		const osg::Vec4f & color=*color_ptr;

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::setClearAccum(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setClearAccum(color);

		return 0;
	}

	// const osg::Vec4f & osgUtil::RenderStage::getClearAccum() const
	static int _bind_getClearAccum(lua_State *L) {
		if (!_lg_typecheck_getClearAccum(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osgUtil::RenderStage::getClearAccum() const function, expected prototype:\nconst osg::Vec4f & osgUtil::RenderStage::getClearAccum() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osgUtil::RenderStage::getClearAccum() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getClearAccum();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::RenderStage::setClearDepth(double depth)
	static int _bind_setClearDepth(lua_State *L) {
		if (!_lg_typecheck_setClearDepth(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::setClearDepth(double depth) function, expected prototype:\nvoid osgUtil::RenderStage::setClearDepth(double depth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double depth=(double)lua_tonumber(L,2);

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::setClearDepth(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setClearDepth(depth);

		return 0;
	}

	// double osgUtil::RenderStage::getClearDepth() const
	static int _bind_getClearDepth(lua_State *L) {
		if (!_lg_typecheck_getClearDepth(L)) {
			luaL_error(L, "luna typecheck failed in double osgUtil::RenderStage::getClearDepth() const function, expected prototype:\ndouble osgUtil::RenderStage::getClearDepth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgUtil::RenderStage::getClearDepth() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getClearDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::RenderStage::setClearStencil(int stencil)
	static int _bind_setClearStencil(lua_State *L) {
		if (!_lg_typecheck_setClearStencil(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::setClearStencil(int stencil) function, expected prototype:\nvoid osgUtil::RenderStage::setClearStencil(int stencil)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int stencil=(int)lua_tointeger(L,2);

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::setClearStencil(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setClearStencil(stencil);

		return 0;
	}

	// int osgUtil::RenderStage::getClearStencil() const
	static int _bind_getClearStencil(lua_State *L) {
		if (!_lg_typecheck_getClearStencil(L)) {
			luaL_error(L, "luna typecheck failed in int osgUtil::RenderStage::getClearStencil() const function, expected prototype:\nint osgUtil::RenderStage::getClearStencil() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgUtil::RenderStage::getClearStencil() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getClearStencil();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::RenderStage::setCamera(osg::Camera * camera)
	static int _bind_setCamera(lua_State *L) {
		if (!_lg_typecheck_setCamera(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::setCamera(osg::Camera * camera) function, expected prototype:\nvoid osgUtil::RenderStage::setCamera(osg::Camera * camera)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera* camera=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::setCamera(osg::Camera *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCamera(camera);

		return 0;
	}

	// osg::Camera * osgUtil::RenderStage::getCamera()
	static int _bind_getCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osgUtil::RenderStage::getCamera() function, expected prototype:\nosg::Camera * osgUtil::RenderStage::getCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osgUtil::RenderStage::getCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->getCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osgUtil::RenderStage::getCamera() const
	static int _bind_getCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osgUtil::RenderStage::getCamera() const function, expected prototype:\nconst osg::Camera * osgUtil::RenderStage::getCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osgUtil::RenderStage::getCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->getCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::RenderStage::getCamera
	static int _bind_getCamera(lua_State *L) {
		if (_lg_typecheck_getCamera_overload_1(L)) return _bind_getCamera_overload_1(L);
		if (_lg_typecheck_getCamera_overload_2(L)) return _bind_getCamera_overload_2(L);

		luaL_error(L, "error in function getCamera, cannot match any of the overloads for function getCamera:\n  getCamera()\n  getCamera()\n");
		return 0;
	}

	// void osgUtil::RenderStage::setCameraRequiresSetUp(bool flag)
	static int _bind_setCameraRequiresSetUp(lua_State *L) {
		if (!_lg_typecheck_setCameraRequiresSetUp(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::setCameraRequiresSetUp(bool flag) function, expected prototype:\nvoid osgUtil::RenderStage::setCameraRequiresSetUp(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::setCameraRequiresSetUp(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCameraRequiresSetUp(flag);

		return 0;
	}

	// bool osgUtil::RenderStage::getCameraRequiresSetUp() const
	static int _bind_getCameraRequiresSetUp(lua_State *L) {
		if (!_lg_typecheck_getCameraRequiresSetUp(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::RenderStage::getCameraRequiresSetUp() const function, expected prototype:\nbool osgUtil::RenderStage::getCameraRequiresSetUp() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::RenderStage::getCameraRequiresSetUp() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getCameraRequiresSetUp();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::RenderStage::runCameraSetUp(osg::RenderInfo & renderInfo)
	static int _bind_runCameraSetUp(lua_State *L) {
		if (!_lg_typecheck_runCameraSetUp(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::runCameraSetUp(osg::RenderInfo & renderInfo) function, expected prototype:\nvoid osgUtil::RenderStage::runCameraSetUp(osg::RenderInfo & renderInfo)\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::RenderStage::runCameraSetUp function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::runCameraSetUp(osg::RenderInfo &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->runCameraSetUp(renderInfo);

		return 0;
	}

	// void osgUtil::RenderStage::setTexture(osg::Texture * texture, unsigned int level = 0, unsigned int face = 0)
	static int _bind_setTexture(lua_State *L) {
		if (!_lg_typecheck_setTexture(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::setTexture(osg::Texture * texture, unsigned int level = 0, unsigned int face = 0) function, expected prototype:\nvoid osgUtil::RenderStage::setTexture(osg::Texture * texture, unsigned int level = 0, unsigned int face = 0)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Texture* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2));
		unsigned int level=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;
		unsigned int face=luatop>3 ? (unsigned int)lua_tointeger(L,4) : (unsigned int)0;

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::setTexture(osg::Texture *, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTexture(texture, level, face);

		return 0;
	}

	// osg::Texture * osgUtil::RenderStage::getTexture()
	static int _bind_getTexture(lua_State *L) {
		if (!_lg_typecheck_getTexture(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osgUtil::RenderStage::getTexture() function, expected prototype:\nosg::Texture * osgUtil::RenderStage::getTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osgUtil::RenderStage::getTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->getTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::RenderStage::setImage(osg::Image * image)
	static int _bind_setImage(lua_State *L) {
		if (!_lg_typecheck_setImage(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::setImage(osg::Image * image) function, expected prototype:\nvoid osgUtil::RenderStage::setImage(osg::Image * image)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::setImage(osg::Image *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setImage(image);

		return 0;
	}

	// osg::Image * osgUtil::RenderStage::getImage()
	static int _bind_getImage(lua_State *L) {
		if (!_lg_typecheck_getImage(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osgUtil::RenderStage::getImage() function, expected prototype:\nosg::Image * osgUtil::RenderStage::getImage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osgUtil::RenderStage::getImage(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->getImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::RenderStage::setImageReadPixelFormat(unsigned int format)
	static int _bind_setImageReadPixelFormat(lua_State *L) {
		if (!_lg_typecheck_setImageReadPixelFormat(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::setImageReadPixelFormat(unsigned int format) function, expected prototype:\nvoid osgUtil::RenderStage::setImageReadPixelFormat(unsigned int format)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int format=(unsigned int)lua_tointeger(L,2);

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::setImageReadPixelFormat(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setImageReadPixelFormat(format);

		return 0;
	}

	// unsigned int osgUtil::RenderStage::getImageReadPixelFormat() const
	static int _bind_getImageReadPixelFormat(lua_State *L) {
		if (!_lg_typecheck_getImageReadPixelFormat(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::RenderStage::getImageReadPixelFormat() const function, expected prototype:\nunsigned int osgUtil::RenderStage::getImageReadPixelFormat() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::RenderStage::getImageReadPixelFormat() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getImageReadPixelFormat();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::RenderStage::setImageReadPixelDataType(unsigned int type)
	static int _bind_setImageReadPixelDataType(lua_State *L) {
		if (!_lg_typecheck_setImageReadPixelDataType(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::setImageReadPixelDataType(unsigned int type) function, expected prototype:\nvoid osgUtil::RenderStage::setImageReadPixelDataType(unsigned int type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int type=(unsigned int)lua_tointeger(L,2);

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::setImageReadPixelDataType(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setImageReadPixelDataType(type);

		return 0;
	}

	// unsigned int osgUtil::RenderStage::getImageReadPixelDataType() const
	static int _bind_getImageReadPixelDataType(lua_State *L) {
		if (!_lg_typecheck_getImageReadPixelDataType(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::RenderStage::getImageReadPixelDataType() const function, expected prototype:\nunsigned int osgUtil::RenderStage::getImageReadPixelDataType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::RenderStage::getImageReadPixelDataType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getImageReadPixelDataType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::RenderStage::setFrameBufferObject(osg::FrameBufferObject * fbo)
	static int _bind_setFrameBufferObject(lua_State *L) {
		if (!_lg_typecheck_setFrameBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::setFrameBufferObject(osg::FrameBufferObject * fbo) function, expected prototype:\nvoid osgUtil::RenderStage::setFrameBufferObject(osg::FrameBufferObject * fbo)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::FrameBufferObject* fbo=(Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,2));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::setFrameBufferObject(osg::FrameBufferObject *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFrameBufferObject(fbo);

		return 0;
	}

	// osg::FrameBufferObject * osgUtil::RenderStage::getFrameBufferObject()
	static int _bind_getFrameBufferObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFrameBufferObject_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameBufferObject * osgUtil::RenderStage::getFrameBufferObject() function, expected prototype:\nosg::FrameBufferObject * osgUtil::RenderStage::getFrameBufferObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::FrameBufferObject * osgUtil::RenderStage::getFrameBufferObject(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::FrameBufferObject * lret = self->getFrameBufferObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameBufferObject >::push(L,lret,false);

		return 1;
	}

	// const osg::FrameBufferObject * osgUtil::RenderStage::getFrameBufferObject() const
	static int _bind_getFrameBufferObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFrameBufferObject_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::FrameBufferObject * osgUtil::RenderStage::getFrameBufferObject() const function, expected prototype:\nconst osg::FrameBufferObject * osgUtil::RenderStage::getFrameBufferObject() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::FrameBufferObject * osgUtil::RenderStage::getFrameBufferObject() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::FrameBufferObject * lret = self->getFrameBufferObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameBufferObject >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::RenderStage::getFrameBufferObject
	static int _bind_getFrameBufferObject(lua_State *L) {
		if (_lg_typecheck_getFrameBufferObject_overload_1(L)) return _bind_getFrameBufferObject_overload_1(L);
		if (_lg_typecheck_getFrameBufferObject_overload_2(L)) return _bind_getFrameBufferObject_overload_2(L);

		luaL_error(L, "error in function getFrameBufferObject, cannot match any of the overloads for function getFrameBufferObject:\n  getFrameBufferObject()\n  getFrameBufferObject()\n");
		return 0;
	}

	// void osgUtil::RenderStage::setMultisampleResolveFramebufferObject(osg::FrameBufferObject * fbo)
	static int _bind_setMultisampleResolveFramebufferObject(lua_State *L) {
		if (!_lg_typecheck_setMultisampleResolveFramebufferObject(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::setMultisampleResolveFramebufferObject(osg::FrameBufferObject * fbo) function, expected prototype:\nvoid osgUtil::RenderStage::setMultisampleResolveFramebufferObject(osg::FrameBufferObject * fbo)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::FrameBufferObject* fbo=(Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,2));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::setMultisampleResolveFramebufferObject(osg::FrameBufferObject *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMultisampleResolveFramebufferObject(fbo);

		return 0;
	}

	// osg::FrameBufferObject * osgUtil::RenderStage::getMultisampleResolveFramebufferObject()
	static int _bind_getMultisampleResolveFramebufferObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_getMultisampleResolveFramebufferObject_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameBufferObject * osgUtil::RenderStage::getMultisampleResolveFramebufferObject() function, expected prototype:\nosg::FrameBufferObject * osgUtil::RenderStage::getMultisampleResolveFramebufferObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::FrameBufferObject * osgUtil::RenderStage::getMultisampleResolveFramebufferObject(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::FrameBufferObject * lret = self->getMultisampleResolveFramebufferObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameBufferObject >::push(L,lret,false);

		return 1;
	}

	// const osg::FrameBufferObject * osgUtil::RenderStage::getMultisampleResolveFramebufferObject() const
	static int _bind_getMultisampleResolveFramebufferObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_getMultisampleResolveFramebufferObject_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::FrameBufferObject * osgUtil::RenderStage::getMultisampleResolveFramebufferObject() const function, expected prototype:\nconst osg::FrameBufferObject * osgUtil::RenderStage::getMultisampleResolveFramebufferObject() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::FrameBufferObject * osgUtil::RenderStage::getMultisampleResolveFramebufferObject() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::FrameBufferObject * lret = self->getMultisampleResolveFramebufferObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameBufferObject >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::RenderStage::getMultisampleResolveFramebufferObject
	static int _bind_getMultisampleResolveFramebufferObject(lua_State *L) {
		if (_lg_typecheck_getMultisampleResolveFramebufferObject_overload_1(L)) return _bind_getMultisampleResolveFramebufferObject_overload_1(L);
		if (_lg_typecheck_getMultisampleResolveFramebufferObject_overload_2(L)) return _bind_getMultisampleResolveFramebufferObject_overload_2(L);

		luaL_error(L, "error in function getMultisampleResolveFramebufferObject, cannot match any of the overloads for function getMultisampleResolveFramebufferObject:\n  getMultisampleResolveFramebufferObject()\n  getMultisampleResolveFramebufferObject()\n");
		return 0;
	}

	// void osgUtil::RenderStage::setDisableFboAfterRender(bool disable)
	static int _bind_setDisableFboAfterRender(lua_State *L) {
		if (!_lg_typecheck_setDisableFboAfterRender(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::setDisableFboAfterRender(bool disable) function, expected prototype:\nvoid osgUtil::RenderStage::setDisableFboAfterRender(bool disable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool disable=(bool)(lua_toboolean(L,2)==1);

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::setDisableFboAfterRender(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDisableFboAfterRender(disable);

		return 0;
	}

	// bool osgUtil::RenderStage::getDisableFboAfterRender() const
	static int _bind_getDisableFboAfterRender(lua_State *L) {
		if (!_lg_typecheck_getDisableFboAfterRender(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::RenderStage::getDisableFboAfterRender() const function, expected prototype:\nbool osgUtil::RenderStage::getDisableFboAfterRender() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::RenderStage::getDisableFboAfterRender() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getDisableFboAfterRender();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::RenderStage::setGraphicsContext(osg::GraphicsContext * context)
	static int _bind_setGraphicsContext(lua_State *L) {
		if (!_lg_typecheck_setGraphicsContext(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::setGraphicsContext(osg::GraphicsContext * context) function, expected prototype:\nvoid osgUtil::RenderStage::setGraphicsContext(osg::GraphicsContext * context)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GraphicsContext* context=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,2));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::setGraphicsContext(osg::GraphicsContext *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setGraphicsContext(context);

		return 0;
	}

	// osg::GraphicsContext * osgUtil::RenderStage::getGraphicsContext()
	static int _bind_getGraphicsContext_overload_1(lua_State *L) {
		if (!_lg_typecheck_getGraphicsContext_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext * osgUtil::RenderStage::getGraphicsContext() function, expected prototype:\nosg::GraphicsContext * osgUtil::RenderStage::getGraphicsContext()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::GraphicsContext * osgUtil::RenderStage::getGraphicsContext(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::GraphicsContext * lret = self->getGraphicsContext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext >::push(L,lret,false);

		return 1;
	}

	// const osg::GraphicsContext * osgUtil::RenderStage::getGraphicsContext() const
	static int _bind_getGraphicsContext_overload_2(lua_State *L) {
		if (!_lg_typecheck_getGraphicsContext_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::GraphicsContext * osgUtil::RenderStage::getGraphicsContext() const function, expected prototype:\nconst osg::GraphicsContext * osgUtil::RenderStage::getGraphicsContext() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::GraphicsContext * osgUtil::RenderStage::getGraphicsContext() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::GraphicsContext * lret = self->getGraphicsContext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::RenderStage::getGraphicsContext
	static int _bind_getGraphicsContext(lua_State *L) {
		if (_lg_typecheck_getGraphicsContext_overload_1(L)) return _bind_getGraphicsContext_overload_1(L);
		if (_lg_typecheck_getGraphicsContext_overload_2(L)) return _bind_getGraphicsContext_overload_2(L);

		luaL_error(L, "error in function getGraphicsContext, cannot match any of the overloads for function getGraphicsContext:\n  getGraphicsContext()\n  getGraphicsContext()\n");
		return 0;
	}

	// void osgUtil::RenderStage::setInheritedPositionalStateContainerMatrix(const osg::Matrixd & matrix)
	static int _bind_setInheritedPositionalStateContainerMatrix(lua_State *L) {
		if (!_lg_typecheck_setInheritedPositionalStateContainerMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::setInheritedPositionalStateContainerMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgUtil::RenderStage::setInheritedPositionalStateContainerMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgUtil::RenderStage::setInheritedPositionalStateContainerMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::setInheritedPositionalStateContainerMatrix(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setInheritedPositionalStateContainerMatrix(matrix);

		return 0;
	}

	// const osg::Matrixd & osgUtil::RenderStage::getInheritedPositionalStateContainerMatrix() const
	static int _bind_getInheritedPositionalStateContainerMatrix(lua_State *L) {
		if (!_lg_typecheck_getInheritedPositionalStateContainerMatrix(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Matrixd & osgUtil::RenderStage::getInheritedPositionalStateContainerMatrix() const function, expected prototype:\nconst osg::Matrixd & osgUtil::RenderStage::getInheritedPositionalStateContainerMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Matrixd & osgUtil::RenderStage::getInheritedPositionalStateContainerMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Matrixd* lret = &self->getInheritedPositionalStateContainerMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::RenderStage::setInheritedPositionalStateContainer(osgUtil::PositionalStateContainer * rsl)
	static int _bind_setInheritedPositionalStateContainer(lua_State *L) {
		if (!_lg_typecheck_setInheritedPositionalStateContainer(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::setInheritedPositionalStateContainer(osgUtil::PositionalStateContainer * rsl) function, expected prototype:\nvoid osgUtil::RenderStage::setInheritedPositionalStateContainer(osgUtil::PositionalStateContainer * rsl)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::PositionalStateContainer* rsl=(Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,2));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::setInheritedPositionalStateContainer(osgUtil::PositionalStateContainer *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setInheritedPositionalStateContainer(rsl);

		return 0;
	}

	// osgUtil::PositionalStateContainer * osgUtil::RenderStage::getInheritedPositionalStateContainer()
	static int _bind_getInheritedPositionalStateContainer(lua_State *L) {
		if (!_lg_typecheck_getInheritedPositionalStateContainer(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::PositionalStateContainer * osgUtil::RenderStage::getInheritedPositionalStateContainer() function, expected prototype:\nosgUtil::PositionalStateContainer * osgUtil::RenderStage::getInheritedPositionalStateContainer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::PositionalStateContainer * osgUtil::RenderStage::getInheritedPositionalStateContainer(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::PositionalStateContainer * lret = self->getInheritedPositionalStateContainer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::PositionalStateContainer >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::RenderStage::setPositionalStateContainer(osgUtil::PositionalStateContainer * rsl)
	static int _bind_setPositionalStateContainer(lua_State *L) {
		if (!_lg_typecheck_setPositionalStateContainer(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::setPositionalStateContainer(osgUtil::PositionalStateContainer * rsl) function, expected prototype:\nvoid osgUtil::RenderStage::setPositionalStateContainer(osgUtil::PositionalStateContainer * rsl)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::PositionalStateContainer* rsl=(Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,2));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::setPositionalStateContainer(osgUtil::PositionalStateContainer *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPositionalStateContainer(rsl);

		return 0;
	}

	// osgUtil::PositionalStateContainer * osgUtil::RenderStage::getPositionalStateContainer() const
	static int _bind_getPositionalStateContainer(lua_State *L) {
		if (!_lg_typecheck_getPositionalStateContainer(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::PositionalStateContainer * osgUtil::RenderStage::getPositionalStateContainer() const function, expected prototype:\nosgUtil::PositionalStateContainer * osgUtil::RenderStage::getPositionalStateContainer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::PositionalStateContainer * osgUtil::RenderStage::getPositionalStateContainer() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::PositionalStateContainer * lret = self->getPositionalStateContainer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::PositionalStateContainer >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::RenderStage::addPositionedAttribute(osg::RefMatrixd * matrix, const osg::StateAttribute * attr)
	static int _bind_addPositionedAttribute(lua_State *L) {
		if (!_lg_typecheck_addPositionedAttribute(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::addPositionedAttribute(osg::RefMatrixd * matrix, const osg::StateAttribute * attr) function, expected prototype:\nvoid osgUtil::RenderStage::addPositionedAttribute(osg::RefMatrixd * matrix, const osg::StateAttribute * attr)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RefMatrixd* matrix=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,2));
		const osg::StateAttribute* attr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,3));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::addPositionedAttribute(osg::RefMatrixd *, const osg::StateAttribute *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addPositionedAttribute(matrix, attr);

		return 0;
	}

	// void osgUtil::RenderStage::addPositionedTextureAttribute(unsigned int textureUnit, osg::RefMatrixd * matrix, const osg::StateAttribute * attr)
	static int _bind_addPositionedTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_addPositionedTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::addPositionedTextureAttribute(unsigned int textureUnit, osg::RefMatrixd * matrix, const osg::StateAttribute * attr) function, expected prototype:\nvoid osgUtil::RenderStage::addPositionedTextureAttribute(unsigned int textureUnit, osg::RefMatrixd * matrix, const osg::StateAttribute * attr)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int textureUnit=(unsigned int)lua_tointeger(L,2);
		osg::RefMatrixd* matrix=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,3));
		const osg::StateAttribute* attr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,4));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::addPositionedTextureAttribute(unsigned int, osg::RefMatrixd *, const osg::StateAttribute *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addPositionedTextureAttribute(textureUnit, matrix, attr);

		return 0;
	}

	// void osgUtil::RenderStage::copyTexture(osg::RenderInfo & renderInfo)
	static int _bind_copyTexture(lua_State *L) {
		if (!_lg_typecheck_copyTexture(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::copyTexture(osg::RenderInfo & renderInfo) function, expected prototype:\nvoid osgUtil::RenderStage::copyTexture(osg::RenderInfo & renderInfo)\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::RenderStage::copyTexture function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::copyTexture(osg::RenderInfo &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->copyTexture(renderInfo);

		return 0;
	}

	// void osgUtil::RenderStage::sort()
	static int _bind_sort(lua_State *L) {
		if (!_lg_typecheck_sort(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::sort() function, expected prototype:\nvoid osgUtil::RenderStage::sort()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::sort(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->sort();

		return 0;
	}

	// void osgUtil::RenderStage::drawPreRenderStages(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)
	static int _bind_drawPreRenderStages(lua_State *L) {
		if (!_lg_typecheck_drawPreRenderStages(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::drawPreRenderStages(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous) function, expected prototype:\nvoid osgUtil::RenderStage::drawPreRenderStages(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)\nClass arguments details:\narg 1 ID = 2286263\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::RenderStage::drawPreRenderStages function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;
		osgUtil::RenderLeaf* previous=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,3));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::drawPreRenderStages(osg::RenderInfo &, osgUtil::RenderLeaf *&). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawPreRenderStages(renderInfo, previous);

		return 0;
	}

	// void osgUtil::RenderStage::draw(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)
	static int _bind_draw(lua_State *L) {
		if (!_lg_typecheck_draw(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::draw(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous) function, expected prototype:\nvoid osgUtil::RenderStage::draw(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)\nClass arguments details:\narg 1 ID = 2286263\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::RenderStage::draw function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;
		osgUtil::RenderLeaf* previous=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,3));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::draw(osg::RenderInfo &, osgUtil::RenderLeaf *&). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->draw(renderInfo, previous);

		return 0;
	}

	// void osgUtil::RenderStage::drawInner(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous, bool & doCopyTexture)
	static int _bind_drawInner(lua_State *L) {
		if (!_lg_typecheck_drawInner(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::drawInner(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous, bool & doCopyTexture) function, expected prototype:\nvoid osgUtil::RenderStage::drawInner(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous, bool & doCopyTexture)\nClass arguments details:\narg 1 ID = 2286263\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::RenderStage::drawInner function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;
		osgUtil::RenderLeaf* previous=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,3));
		bool doCopyTexture=(bool)(lua_toboolean(L,4)==1);

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::drawInner(osg::RenderInfo &, osgUtil::RenderLeaf *&, bool &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawInner(renderInfo, previous, doCopyTexture);

		lua_pushboolean(L,doCopyTexture?1:0);
		return 1;
	}

	// void osgUtil::RenderStage::drawPostRenderStages(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)
	static int _bind_drawPostRenderStages(lua_State *L) {
		if (!_lg_typecheck_drawPostRenderStages(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::drawPostRenderStages(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous) function, expected prototype:\nvoid osgUtil::RenderStage::drawPostRenderStages(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)\nClass arguments details:\narg 1 ID = 2286263\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::RenderStage::drawPostRenderStages function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;
		osgUtil::RenderLeaf* previous=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,3));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::drawPostRenderStages(osg::RenderInfo &, osgUtil::RenderLeaf *&). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawPostRenderStages(renderInfo, previous);

		return 0;
	}

	// void osgUtil::RenderStage::drawImplementation(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::drawImplementation(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous) function, expected prototype:\nvoid osgUtil::RenderStage::drawImplementation(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)\nClass arguments details:\narg 1 ID = 2286263\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::RenderStage::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;
		osgUtil::RenderLeaf* previous=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,3));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::drawImplementation(osg::RenderInfo &, osgUtil::RenderLeaf *&). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawImplementation(renderInfo, previous);

		return 0;
	}

	// void osgUtil::RenderStage::addToDependencyList(osgUtil::RenderStage * rs)
	static int _bind_addToDependencyList(lua_State *L) {
		if (!_lg_typecheck_addToDependencyList(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::addToDependencyList(osgUtil::RenderStage * rs) function, expected prototype:\nvoid osgUtil::RenderStage::addToDependencyList(osgUtil::RenderStage * rs)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::RenderStage* rs=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,2));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::addToDependencyList(osgUtil::RenderStage *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addToDependencyList(rs);

		return 0;
	}

	// void osgUtil::RenderStage::addPreRenderStage(osgUtil::RenderStage * rs, int order = 0)
	static int _bind_addPreRenderStage(lua_State *L) {
		if (!_lg_typecheck_addPreRenderStage(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::addPreRenderStage(osgUtil::RenderStage * rs, int order = 0) function, expected prototype:\nvoid osgUtil::RenderStage::addPreRenderStage(osgUtil::RenderStage * rs, int order = 0)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgUtil::RenderStage* rs=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,2));
		int order=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::addPreRenderStage(osgUtil::RenderStage *, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addPreRenderStage(rs, order);

		return 0;
	}

	// void osgUtil::RenderStage::addPostRenderStage(osgUtil::RenderStage * rs, int order = 0)
	static int _bind_addPostRenderStage(lua_State *L) {
		if (!_lg_typecheck_addPostRenderStage(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::addPostRenderStage(osgUtil::RenderStage * rs, int order = 0) function, expected prototype:\nvoid osgUtil::RenderStage::addPostRenderStage(osgUtil::RenderStage * rs, int order = 0)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgUtil::RenderStage* rs=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,2));
		int order=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::addPostRenderStage(osgUtil::RenderStage *, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addPostRenderStage(rs, order);

		return 0;
	}

	// bool osgUtil::RenderStage::getStats(osgUtil::Statistics & stats) const
	static int _bind_getStats(lua_State *L) {
		if (!_lg_typecheck_getStats(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::RenderStage::getStats(osgUtil::Statistics & stats) const function, expected prototype:\nbool osgUtil::RenderStage::getStats(osgUtil::Statistics & stats) const\nClass arguments details:\narg 1 ID = 95996950\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::Statistics* stats_ptr=(Luna< osgUtil::Statistics >::check(L,2));
		if( !stats_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stats in osgUtil::RenderStage::getStats function");
		}
		osgUtil::Statistics & stats=*stats_ptr;

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::RenderStage::getStats(osgUtil::Statistics &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getStats(stats);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osgUtil::RenderStage::computeNumberOfDynamicRenderLeaves() const
	static int _bind_computeNumberOfDynamicRenderLeaves(lua_State *L) {
		if (!_lg_typecheck_computeNumberOfDynamicRenderLeaves(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::RenderStage::computeNumberOfDynamicRenderLeaves() const function, expected prototype:\nunsigned int osgUtil::RenderStage::computeNumberOfDynamicRenderLeaves() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::RenderStage::computeNumberOfDynamicRenderLeaves() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->computeNumberOfDynamicRenderLeaves();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::RenderStage::attach(osg::Camera::BufferComponent buffer, osg::Image * image)
	static int _bind_attach(lua_State *L) {
		if (!_lg_typecheck_attach(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::attach(osg::Camera::BufferComponent buffer, osg::Image * image) function, expected prototype:\nvoid osgUtil::RenderStage::attach(osg::Camera::BufferComponent buffer, osg::Image * image)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera::BufferComponent buffer=(osg::Camera::BufferComponent)lua_tointeger(L,2);
		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,3));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::attach(osg::Camera::BufferComponent, osg::Image *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->attach(buffer, image);

		return 0;
	}

	// void osgUtil::RenderStage::collateReferencesToDependentCameras()
	static int _bind_collateReferencesToDependentCameras(lua_State *L) {
		if (!_lg_typecheck_collateReferencesToDependentCameras(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::collateReferencesToDependentCameras() function, expected prototype:\nvoid osgUtil::RenderStage::collateReferencesToDependentCameras()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::collateReferencesToDependentCameras(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->collateReferencesToDependentCameras();

		return 0;
	}

	// void osgUtil::RenderStage::clearReferencesToDependentCameras()
	static int _bind_clearReferencesToDependentCameras(lua_State *L) {
		if (!_lg_typecheck_clearReferencesToDependentCameras(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::clearReferencesToDependentCameras() function, expected prototype:\nvoid osgUtil::RenderStage::clearReferencesToDependentCameras()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::clearReferencesToDependentCameras(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clearReferencesToDependentCameras();

		return 0;
	}

	// void osgUtil::RenderStage::releaseGLObjects(osg::State * state = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osgUtil::RenderStage::releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseGLObjects(state);

		return 0;
	}

	// void osgUtil::RenderStage::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::RenderStage::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderStage::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgUtil::RenderStage::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::base_setName(const std::string & name) function, expected prototype:\nvoid osgUtil::RenderStage::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderStage::setName(name);

		return 0;
	}

	// void osgUtil::RenderStage::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::base_computeDataVariance() function, expected prototype:\nvoid osgUtil::RenderStage::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderStage::computeDataVariance();

		return 0;
	}

	// void osgUtil::RenderStage::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgUtil::RenderStage::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderStage::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgUtil::RenderStage::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgUtil::RenderStage::base_getUserData() function, expected prototype:\nosg::Referenced * osgUtil::RenderStage::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgUtil::RenderStage::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->RenderStage::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgUtil::RenderStage::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgUtil::RenderStage::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgUtil::RenderStage::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgUtil::RenderStage::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->RenderStage::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::RenderStage::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// const char * osgUtil::RenderStage::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::RenderStage::base_libraryName() const function, expected prototype:\nconst char * osgUtil::RenderStage::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::RenderStage::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->RenderStage::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::RenderStage::base_sortImplementation()
	static int _bind_base_sortImplementation(lua_State *L) {
		if (!_lg_typecheck_base_sortImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::base_sortImplementation() function, expected prototype:\nvoid osgUtil::RenderStage::base_sortImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::base_sortImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderStage::sortImplementation();

		return 0;
	}

	// void osgUtil::RenderStage::base_sortByState()
	static int _bind_base_sortByState(lua_State *L) {
		if (!_lg_typecheck_base_sortByState(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::base_sortByState() function, expected prototype:\nvoid osgUtil::RenderStage::base_sortByState()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::base_sortByState(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderStage::sortByState();

		return 0;
	}

	// void osgUtil::RenderStage::base_sortByStateThenFrontToBack()
	static int _bind_base_sortByStateThenFrontToBack(lua_State *L) {
		if (!_lg_typecheck_base_sortByStateThenFrontToBack(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::base_sortByStateThenFrontToBack() function, expected prototype:\nvoid osgUtil::RenderStage::base_sortByStateThenFrontToBack()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::base_sortByStateThenFrontToBack(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderStage::sortByStateThenFrontToBack();

		return 0;
	}

	// void osgUtil::RenderStage::base_sortFrontToBack()
	static int _bind_base_sortFrontToBack(lua_State *L) {
		if (!_lg_typecheck_base_sortFrontToBack(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::base_sortFrontToBack() function, expected prototype:\nvoid osgUtil::RenderStage::base_sortFrontToBack()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::base_sortFrontToBack(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderStage::sortFrontToBack();

		return 0;
	}

	// void osgUtil::RenderStage::base_sortBackToFront()
	static int _bind_base_sortBackToFront(lua_State *L) {
		if (!_lg_typecheck_base_sortBackToFront(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::base_sortBackToFront() function, expected prototype:\nvoid osgUtil::RenderStage::base_sortBackToFront()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::base_sortBackToFront(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderStage::sortBackToFront();

		return 0;
	}

	// void osgUtil::RenderStage::base_sortTraversalOrder()
	static int _bind_base_sortTraversalOrder(lua_State *L) {
		if (!_lg_typecheck_base_sortTraversalOrder(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::base_sortTraversalOrder() function, expected prototype:\nvoid osgUtil::RenderStage::base_sortTraversalOrder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::base_sortTraversalOrder(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderStage::sortTraversalOrder();

		return 0;
	}

	// osg::Object * osgUtil::RenderStage::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgUtil::RenderStage::base_cloneType() const function, expected prototype:\nosg::Object * osgUtil::RenderStage::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgUtil::RenderStage::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->RenderStage::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgUtil::RenderStage::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgUtil::RenderStage::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgUtil::RenderStage::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::RenderStage::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgUtil::RenderStage::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->RenderStage::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgUtil::RenderStage::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::RenderStage::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgUtil::RenderStage::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::RenderStage::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RenderStage::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgUtil::RenderStage::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::RenderStage::base_className() const function, expected prototype:\nconst char * osgUtil::RenderStage::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::RenderStage::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->RenderStage::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::RenderStage::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::base_reset() function, expected prototype:\nvoid osgUtil::RenderStage::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::base_reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderStage::reset();

		return 0;
	}

	// void osgUtil::RenderStage::base_addPositionedAttribute(osg::RefMatrixd * matrix, const osg::StateAttribute * attr)
	static int _bind_base_addPositionedAttribute(lua_State *L) {
		if (!_lg_typecheck_base_addPositionedAttribute(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::base_addPositionedAttribute(osg::RefMatrixd * matrix, const osg::StateAttribute * attr) function, expected prototype:\nvoid osgUtil::RenderStage::base_addPositionedAttribute(osg::RefMatrixd * matrix, const osg::StateAttribute * attr)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RefMatrixd* matrix=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,2));
		const osg::StateAttribute* attr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,3));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::base_addPositionedAttribute(osg::RefMatrixd *, const osg::StateAttribute *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderStage::addPositionedAttribute(matrix, attr);

		return 0;
	}

	// void osgUtil::RenderStage::base_addPositionedTextureAttribute(unsigned int textureUnit, osg::RefMatrixd * matrix, const osg::StateAttribute * attr)
	static int _bind_base_addPositionedTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_addPositionedTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::base_addPositionedTextureAttribute(unsigned int textureUnit, osg::RefMatrixd * matrix, const osg::StateAttribute * attr) function, expected prototype:\nvoid osgUtil::RenderStage::base_addPositionedTextureAttribute(unsigned int textureUnit, osg::RefMatrixd * matrix, const osg::StateAttribute * attr)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int textureUnit=(unsigned int)lua_tointeger(L,2);
		osg::RefMatrixd* matrix=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,3));
		const osg::StateAttribute* attr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,4));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::base_addPositionedTextureAttribute(unsigned int, osg::RefMatrixd *, const osg::StateAttribute *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderStage::addPositionedTextureAttribute(textureUnit, matrix, attr);

		return 0;
	}

	// void osgUtil::RenderStage::base_sort()
	static int _bind_base_sort(lua_State *L) {
		if (!_lg_typecheck_base_sort(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::base_sort() function, expected prototype:\nvoid osgUtil::RenderStage::base_sort()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::base_sort(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderStage::sort();

		return 0;
	}

	// void osgUtil::RenderStage::base_drawPreRenderStages(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)
	static int _bind_base_drawPreRenderStages(lua_State *L) {
		if (!_lg_typecheck_base_drawPreRenderStages(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::base_drawPreRenderStages(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous) function, expected prototype:\nvoid osgUtil::RenderStage::base_drawPreRenderStages(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)\nClass arguments details:\narg 1 ID = 2286263\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::RenderStage::base_drawPreRenderStages function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;
		osgUtil::RenderLeaf* previous=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,3));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::base_drawPreRenderStages(osg::RenderInfo &, osgUtil::RenderLeaf *&). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderStage::drawPreRenderStages(renderInfo, previous);

		return 0;
	}

	// void osgUtil::RenderStage::base_draw(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)
	static int _bind_base_draw(lua_State *L) {
		if (!_lg_typecheck_base_draw(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::base_draw(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous) function, expected prototype:\nvoid osgUtil::RenderStage::base_draw(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)\nClass arguments details:\narg 1 ID = 2286263\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::RenderStage::base_draw function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;
		osgUtil::RenderLeaf* previous=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,3));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::base_draw(osg::RenderInfo &, osgUtil::RenderLeaf *&). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderStage::draw(renderInfo, previous);

		return 0;
	}

	// void osgUtil::RenderStage::base_drawInner(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous, bool & doCopyTexture)
	static int _bind_base_drawInner(lua_State *L) {
		if (!_lg_typecheck_base_drawInner(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::base_drawInner(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous, bool & doCopyTexture) function, expected prototype:\nvoid osgUtil::RenderStage::base_drawInner(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous, bool & doCopyTexture)\nClass arguments details:\narg 1 ID = 2286263\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::RenderStage::base_drawInner function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;
		osgUtil::RenderLeaf* previous=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,3));
		bool doCopyTexture=(bool)(lua_toboolean(L,4)==1);

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::base_drawInner(osg::RenderInfo &, osgUtil::RenderLeaf *&, bool &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderStage::drawInner(renderInfo, previous, doCopyTexture);

		lua_pushboolean(L,doCopyTexture?1:0);
		return 1;
	}

	// void osgUtil::RenderStage::base_drawPostRenderStages(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)
	static int _bind_base_drawPostRenderStages(lua_State *L) {
		if (!_lg_typecheck_base_drawPostRenderStages(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::base_drawPostRenderStages(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous) function, expected prototype:\nvoid osgUtil::RenderStage::base_drawPostRenderStages(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)\nClass arguments details:\narg 1 ID = 2286263\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::RenderStage::base_drawPostRenderStages function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;
		osgUtil::RenderLeaf* previous=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,3));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::base_drawPostRenderStages(osg::RenderInfo &, osgUtil::RenderLeaf *&). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderStage::drawPostRenderStages(renderInfo, previous);

		return 0;
	}

	// void osgUtil::RenderStage::base_drawImplementation(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)
	static int _bind_base_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_base_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::base_drawImplementation(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous) function, expected prototype:\nvoid osgUtil::RenderStage::base_drawImplementation(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)\nClass arguments details:\narg 1 ID = 2286263\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::RenderStage::base_drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;
		osgUtil::RenderLeaf* previous=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,3));

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::base_drawImplementation(osg::RenderInfo &, osgUtil::RenderLeaf *&). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderStage::drawImplementation(renderInfo, previous);

		return 0;
	}

	// unsigned int osgUtil::RenderStage::base_computeNumberOfDynamicRenderLeaves() const
	static int _bind_base_computeNumberOfDynamicRenderLeaves(lua_State *L) {
		if (!_lg_typecheck_base_computeNumberOfDynamicRenderLeaves(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::RenderStage::base_computeNumberOfDynamicRenderLeaves() const function, expected prototype:\nunsigned int osgUtil::RenderStage::base_computeNumberOfDynamicRenderLeaves() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::RenderStage::base_computeNumberOfDynamicRenderLeaves() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->RenderStage::computeNumberOfDynamicRenderLeaves();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::RenderStage::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osgUtil::RenderStage::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgUtil::RenderStage* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderStage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderStage::releaseGLObjects(state);

		return 0;
	}


	// Operator binds:

};

osgUtil::RenderStage* LunaTraits< osgUtil::RenderStage >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_RenderStage::_bind_ctor(L);
}

void LunaTraits< osgUtil::RenderStage >::_bind_dtor(osgUtil::RenderStage* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::RenderStage >::className[] = "RenderStage";
const char LunaTraits< osgUtil::RenderStage >::fullName[] = "osgUtil::RenderStage";
const char LunaTraits< osgUtil::RenderStage >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::RenderStage >::parents[] = {"osgUtil.RenderBin", 0};
const int LunaTraits< osgUtil::RenderStage >::hash = 92760820;
const int LunaTraits< osgUtil::RenderStage >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::RenderStage >::methods[] = {
	{"cloneType", &luna_wrapper_osgUtil_RenderStage::_bind_cloneType},
	{"clone", &luna_wrapper_osgUtil_RenderStage::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgUtil_RenderStage::_bind_isSameKindAs},
	{"className", &luna_wrapper_osgUtil_RenderStage::_bind_className},
	{"reset", &luna_wrapper_osgUtil_RenderStage::_bind_reset},
	{"setDrawBuffer", &luna_wrapper_osgUtil_RenderStage::_bind_setDrawBuffer},
	{"getDrawBuffer", &luna_wrapper_osgUtil_RenderStage::_bind_getDrawBuffer},
	{"getDrawBufferApplyMask", &luna_wrapper_osgUtil_RenderStage::_bind_getDrawBufferApplyMask},
	{"setDrawBufferApplyMask", &luna_wrapper_osgUtil_RenderStage::_bind_setDrawBufferApplyMask},
	{"setReadBuffer", &luna_wrapper_osgUtil_RenderStage::_bind_setReadBuffer},
	{"getReadBuffer", &luna_wrapper_osgUtil_RenderStage::_bind_getReadBuffer},
	{"getReadBufferApplyMask", &luna_wrapper_osgUtil_RenderStage::_bind_getReadBufferApplyMask},
	{"setReadBufferApplyMask", &luna_wrapper_osgUtil_RenderStage::_bind_setReadBufferApplyMask},
	{"setViewport", &luna_wrapper_osgUtil_RenderStage::_bind_setViewport},
	{"getViewport", &luna_wrapper_osgUtil_RenderStage::_bind_getViewport},
	{"setInitialViewMatrix", &luna_wrapper_osgUtil_RenderStage::_bind_setInitialViewMatrix},
	{"getInitialViewMatrix", &luna_wrapper_osgUtil_RenderStage::_bind_getInitialViewMatrix},
	{"setClearMask", &luna_wrapper_osgUtil_RenderStage::_bind_setClearMask},
	{"getClearMask", &luna_wrapper_osgUtil_RenderStage::_bind_getClearMask},
	{"setColorMask", &luna_wrapper_osgUtil_RenderStage::_bind_setColorMask},
	{"getColorMask", &luna_wrapper_osgUtil_RenderStage::_bind_getColorMask},
	{"setClearColor", &luna_wrapper_osgUtil_RenderStage::_bind_setClearColor},
	{"getClearColor", &luna_wrapper_osgUtil_RenderStage::_bind_getClearColor},
	{"setClearAccum", &luna_wrapper_osgUtil_RenderStage::_bind_setClearAccum},
	{"getClearAccum", &luna_wrapper_osgUtil_RenderStage::_bind_getClearAccum},
	{"setClearDepth", &luna_wrapper_osgUtil_RenderStage::_bind_setClearDepth},
	{"getClearDepth", &luna_wrapper_osgUtil_RenderStage::_bind_getClearDepth},
	{"setClearStencil", &luna_wrapper_osgUtil_RenderStage::_bind_setClearStencil},
	{"getClearStencil", &luna_wrapper_osgUtil_RenderStage::_bind_getClearStencil},
	{"setCamera", &luna_wrapper_osgUtil_RenderStage::_bind_setCamera},
	{"getCamera", &luna_wrapper_osgUtil_RenderStage::_bind_getCamera},
	{"setCameraRequiresSetUp", &luna_wrapper_osgUtil_RenderStage::_bind_setCameraRequiresSetUp},
	{"getCameraRequiresSetUp", &luna_wrapper_osgUtil_RenderStage::_bind_getCameraRequiresSetUp},
	{"runCameraSetUp", &luna_wrapper_osgUtil_RenderStage::_bind_runCameraSetUp},
	{"setTexture", &luna_wrapper_osgUtil_RenderStage::_bind_setTexture},
	{"getTexture", &luna_wrapper_osgUtil_RenderStage::_bind_getTexture},
	{"setImage", &luna_wrapper_osgUtil_RenderStage::_bind_setImage},
	{"getImage", &luna_wrapper_osgUtil_RenderStage::_bind_getImage},
	{"setImageReadPixelFormat", &luna_wrapper_osgUtil_RenderStage::_bind_setImageReadPixelFormat},
	{"getImageReadPixelFormat", &luna_wrapper_osgUtil_RenderStage::_bind_getImageReadPixelFormat},
	{"setImageReadPixelDataType", &luna_wrapper_osgUtil_RenderStage::_bind_setImageReadPixelDataType},
	{"getImageReadPixelDataType", &luna_wrapper_osgUtil_RenderStage::_bind_getImageReadPixelDataType},
	{"setFrameBufferObject", &luna_wrapper_osgUtil_RenderStage::_bind_setFrameBufferObject},
	{"getFrameBufferObject", &luna_wrapper_osgUtil_RenderStage::_bind_getFrameBufferObject},
	{"setMultisampleResolveFramebufferObject", &luna_wrapper_osgUtil_RenderStage::_bind_setMultisampleResolveFramebufferObject},
	{"getMultisampleResolveFramebufferObject", &luna_wrapper_osgUtil_RenderStage::_bind_getMultisampleResolveFramebufferObject},
	{"setDisableFboAfterRender", &luna_wrapper_osgUtil_RenderStage::_bind_setDisableFboAfterRender},
	{"getDisableFboAfterRender", &luna_wrapper_osgUtil_RenderStage::_bind_getDisableFboAfterRender},
	{"setGraphicsContext", &luna_wrapper_osgUtil_RenderStage::_bind_setGraphicsContext},
	{"getGraphicsContext", &luna_wrapper_osgUtil_RenderStage::_bind_getGraphicsContext},
	{"setInheritedPositionalStateContainerMatrix", &luna_wrapper_osgUtil_RenderStage::_bind_setInheritedPositionalStateContainerMatrix},
	{"getInheritedPositionalStateContainerMatrix", &luna_wrapper_osgUtil_RenderStage::_bind_getInheritedPositionalStateContainerMatrix},
	{"setInheritedPositionalStateContainer", &luna_wrapper_osgUtil_RenderStage::_bind_setInheritedPositionalStateContainer},
	{"getInheritedPositionalStateContainer", &luna_wrapper_osgUtil_RenderStage::_bind_getInheritedPositionalStateContainer},
	{"setPositionalStateContainer", &luna_wrapper_osgUtil_RenderStage::_bind_setPositionalStateContainer},
	{"getPositionalStateContainer", &luna_wrapper_osgUtil_RenderStage::_bind_getPositionalStateContainer},
	{"addPositionedAttribute", &luna_wrapper_osgUtil_RenderStage::_bind_addPositionedAttribute},
	{"addPositionedTextureAttribute", &luna_wrapper_osgUtil_RenderStage::_bind_addPositionedTextureAttribute},
	{"copyTexture", &luna_wrapper_osgUtil_RenderStage::_bind_copyTexture},
	{"sort", &luna_wrapper_osgUtil_RenderStage::_bind_sort},
	{"drawPreRenderStages", &luna_wrapper_osgUtil_RenderStage::_bind_drawPreRenderStages},
	{"draw", &luna_wrapper_osgUtil_RenderStage::_bind_draw},
	{"drawInner", &luna_wrapper_osgUtil_RenderStage::_bind_drawInner},
	{"drawPostRenderStages", &luna_wrapper_osgUtil_RenderStage::_bind_drawPostRenderStages},
	{"drawImplementation", &luna_wrapper_osgUtil_RenderStage::_bind_drawImplementation},
	{"addToDependencyList", &luna_wrapper_osgUtil_RenderStage::_bind_addToDependencyList},
	{"addPreRenderStage", &luna_wrapper_osgUtil_RenderStage::_bind_addPreRenderStage},
	{"addPostRenderStage", &luna_wrapper_osgUtil_RenderStage::_bind_addPostRenderStage},
	{"getStats", &luna_wrapper_osgUtil_RenderStage::_bind_getStats},
	{"computeNumberOfDynamicRenderLeaves", &luna_wrapper_osgUtil_RenderStage::_bind_computeNumberOfDynamicRenderLeaves},
	{"attach", &luna_wrapper_osgUtil_RenderStage::_bind_attach},
	{"collateReferencesToDependentCameras", &luna_wrapper_osgUtil_RenderStage::_bind_collateReferencesToDependentCameras},
	{"clearReferencesToDependentCameras", &luna_wrapper_osgUtil_RenderStage::_bind_clearReferencesToDependentCameras},
	{"releaseGLObjects", &luna_wrapper_osgUtil_RenderStage::_bind_releaseGLObjects},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_RenderStage::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgUtil_RenderStage::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgUtil_RenderStage::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgUtil_RenderStage::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgUtil_RenderStage::_bind_base_getUserData},
	{"base_libraryName", &luna_wrapper_osgUtil_RenderStage::_bind_base_libraryName},
	{"base_sortImplementation", &luna_wrapper_osgUtil_RenderStage::_bind_base_sortImplementation},
	{"base_sortByState", &luna_wrapper_osgUtil_RenderStage::_bind_base_sortByState},
	{"base_sortByStateThenFrontToBack", &luna_wrapper_osgUtil_RenderStage::_bind_base_sortByStateThenFrontToBack},
	{"base_sortFrontToBack", &luna_wrapper_osgUtil_RenderStage::_bind_base_sortFrontToBack},
	{"base_sortBackToFront", &luna_wrapper_osgUtil_RenderStage::_bind_base_sortBackToFront},
	{"base_sortTraversalOrder", &luna_wrapper_osgUtil_RenderStage::_bind_base_sortTraversalOrder},
	{"base_cloneType", &luna_wrapper_osgUtil_RenderStage::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgUtil_RenderStage::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgUtil_RenderStage::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osgUtil_RenderStage::_bind_base_className},
	{"base_reset", &luna_wrapper_osgUtil_RenderStage::_bind_base_reset},
	{"base_addPositionedAttribute", &luna_wrapper_osgUtil_RenderStage::_bind_base_addPositionedAttribute},
	{"base_addPositionedTextureAttribute", &luna_wrapper_osgUtil_RenderStage::_bind_base_addPositionedTextureAttribute},
	{"base_sort", &luna_wrapper_osgUtil_RenderStage::_bind_base_sort},
	{"base_drawPreRenderStages", &luna_wrapper_osgUtil_RenderStage::_bind_base_drawPreRenderStages},
	{"base_draw", &luna_wrapper_osgUtil_RenderStage::_bind_base_draw},
	{"base_drawInner", &luna_wrapper_osgUtil_RenderStage::_bind_base_drawInner},
	{"base_drawPostRenderStages", &luna_wrapper_osgUtil_RenderStage::_bind_base_drawPostRenderStages},
	{"base_drawImplementation", &luna_wrapper_osgUtil_RenderStage::_bind_base_drawImplementation},
	{"base_computeNumberOfDynamicRenderLeaves", &luna_wrapper_osgUtil_RenderStage::_bind_base_computeNumberOfDynamicRenderLeaves},
	{"base_releaseGLObjects", &luna_wrapper_osgUtil_RenderStage::_bind_base_releaseGLObjects},
	{"fromVoid", &luna_wrapper_osgUtil_RenderStage::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_RenderStage::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_RenderStage::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::RenderStage >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_RenderStage::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::RenderStage >::enumValues[] = {
	{0,0}
};


