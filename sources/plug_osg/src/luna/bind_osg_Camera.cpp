#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Camera.h>

class luna_wrapper_osg_Camera {
public:
	typedef Luna< osg::Camera > luna_t;

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

		osg::Camera* self= (osg::Camera*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Camera >::push(L,self,false);
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
		//osg::Camera* ptr= dynamic_cast< osg::Camera* >(Luna< osg::Referenced >::check(L,1));
		osg::Camera* ptr= luna_caster< osg::Referenced, osg::Camera >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Camera >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_CullSettings(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osg::Camera* ptr= dynamic_cast< osg::Camera* >(Luna< osg::CullSettings >::check(L,1));
		osg::Camera* ptr= luna_caster< osg::CullSettings, osg::Camera >::cast(Luna< osg::CullSettings >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Camera >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_asCamera_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asCamera_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setView(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getView_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getView_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStats(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStats_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStats_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAllowEventFocus(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAllowEventFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDisplaySettings(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDisplaySettings_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDisplaySettings_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_setColorMask_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setColorMask_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
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

	inline static bool _lg_typecheck_setViewport_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Viewport >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setViewport_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
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

	inline static bool _lg_typecheck_setTransformOrder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTransformOrder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setProjectionResizePolicy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getProjectionResizePolicy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setProjectionMatrix_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setProjectionMatrix_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setProjectionMatrixAsOrtho(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setProjectionMatrixAsOrtho2D(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setProjectionMatrixAsFrustum(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setProjectionMatrixAsPerspective(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getProjectionMatrix_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProjectionMatrix_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProjectionMatrixAsOrtho(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getProjectionMatrixAsFrustum(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getProjectionMatrixAsPerspective(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setViewMatrix_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setViewMatrix_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getViewMatrix_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewMatrix_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setViewMatrixAsLookAt(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getViewMatrixAsLookAt_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,4))) ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getViewMatrixAsLookAt_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,4))) ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInverseViewMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRenderOrder(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRenderOrder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRenderOrderNum(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isRenderToTextureCamera(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRenderTargetImplementation_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRenderTargetImplementation_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRenderTargetImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRenderTargetFallback(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDrawBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDrawBuffer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setReadBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReadBuffer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_attach_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_attach_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>8 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,3)) ) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_attach_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Image >(L,3)) ) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_detach(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBufferAttachmentMap_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBufferAttachmentMap_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setImplicitBufferAttachmentMask(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setImplicitBufferAttachmentRenderMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setImplicitBufferAttachmentResolveMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImplicitBufferAttachmentRenderMask(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImplicitBufferAttachmentResolveMask(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createCameraThread(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCameraThread(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCameraThread_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCameraThread_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_setRenderer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRenderer_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRenderer_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRenderingCache(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRenderingCache_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRenderingCache_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInitialDrawCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInitialDrawCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInitialDrawCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPreDrawCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPreDrawCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPreDrawCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPostDrawCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPostDrawCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPostDrawCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFinalDrawCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFinalDrawCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFinalDrawCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeLocalToWorldMatrix(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeWorldToLocalMatrix(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_inheritCullSettings(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31435107) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_FACE_CONTROLLED_BY_GEOMETRY_SHADER(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_asSwitch_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asSwitch_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGeode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGeode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ascend(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_asGroup_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGroup_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_insertChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeChildren(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_replaceChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_asTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asMatrixTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asMatrixTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asPositionAttitudeTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asPositionAttitudeTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setDefaults(lua_State *L) {
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

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_asCamera_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asCamera_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeLocalToWorldMatrix(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeWorldToLocalMatrix(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_inheritCullSettings(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31435107) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Camera::Camera()
	static osg::Camera* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera::Camera() function, expected prototype:\nosg::Camera::Camera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Camera();
	}

	// osg::Camera::Camera(const osg::Camera & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Camera* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera::Camera(const osg::Camera & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Camera::Camera(const osg::Camera & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Camera* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Camera::Camera function");
		}
		const osg::Camera & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Camera::Camera function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::Camera(_arg1, copyop);
	}

	// osg::Camera::Camera(lua_Table * data)
	static osg::Camera* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera::Camera(lua_Table * data) function, expected prototype:\nosg::Camera::Camera(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Camera(L,NULL);
	}

	// osg::Camera::Camera(lua_Table * data, const osg::Camera & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Camera* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera::Camera(lua_Table * data, const osg::Camera & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Camera::Camera(lua_Table * data, const osg::Camera & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Camera* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Camera::Camera function");
		}
		const osg::Camera & _arg2=*_arg2_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Camera::Camera function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Camera(L,NULL, _arg2, copyop);
	}

	// Overload binder for osg::Camera::Camera
	static osg::Camera* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Camera, cannot match any of the overloads for function Camera:\n  Camera()\n  Camera(const osg::Camera &, const osg::CopyOp &)\n  Camera(lua_Table *)\n  Camera(lua_Table *, const osg::Camera &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Camera::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Camera::cloneType() const function, expected prototype:\nosg::Object * osg::Camera::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Camera::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Camera::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Camera::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::Camera::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Camera::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Camera::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Camera::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Camera::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Camera::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Camera::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Camera::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Camera::className() const function, expected prototype:\nconst char * osg::Camera::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Camera::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Camera::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Camera::libraryName() const function, expected prototype:\nconst char * osg::Camera::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Camera::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Camera::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Camera::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Camera::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// osg::Camera * osg::Camera::asCamera()
	static int _bind_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osg::Camera::asCamera() function, expected prototype:\nosg::Camera * osg::Camera::asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osg::Camera::asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osg::Camera::asCamera() const
	static int _bind_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osg::Camera::asCamera() const function, expected prototype:\nconst osg::Camera * osg::Camera::asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osg::Camera::asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::asCamera
	static int _bind_asCamera(lua_State *L) {
		if (_lg_typecheck_asCamera_overload_1(L)) return _bind_asCamera_overload_1(L);
		if (_lg_typecheck_asCamera_overload_2(L)) return _bind_asCamera_overload_2(L);

		luaL_error(L, "error in function asCamera, cannot match any of the overloads for function asCamera:\n  asCamera()\n  asCamera()\n");
		return 0;
	}

	// void osg::Camera::setView(osg::View * view)
	static int _bind_setView(lua_State *L) {
		if (!_lg_typecheck_setView(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setView(osg::View * view) function, expected prototype:\nvoid osg::Camera::setView(osg::View * view)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::View* view=(Luna< osg::Referenced >::checkSubType< osg::View >(L,2));

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setView(osg::View *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setView(view);

		return 0;
	}

	// osg::View * osg::Camera::getView()
	static int _bind_getView_overload_1(lua_State *L) {
		if (!_lg_typecheck_getView_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::View * osg::Camera::getView() function, expected prototype:\nosg::View * osg::Camera::getView()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::View * osg::Camera::getView(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::View * lret = self->getView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::View >::push(L,lret,false);

		return 1;
	}

	// const osg::View * osg::Camera::getView() const
	static int _bind_getView_overload_2(lua_State *L) {
		if (!_lg_typecheck_getView_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::View * osg::Camera::getView() const function, expected prototype:\nconst osg::View * osg::Camera::getView() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::View * osg::Camera::getView() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::View * lret = self->getView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::View >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::getView
	static int _bind_getView(lua_State *L) {
		if (_lg_typecheck_getView_overload_1(L)) return _bind_getView_overload_1(L);
		if (_lg_typecheck_getView_overload_2(L)) return _bind_getView_overload_2(L);

		luaL_error(L, "error in function getView, cannot match any of the overloads for function getView:\n  getView()\n  getView()\n");
		return 0;
	}

	// void osg::Camera::setStats(osg::Stats * stats)
	static int _bind_setStats(lua_State *L) {
		if (!_lg_typecheck_setStats(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setStats(osg::Stats * stats) function, expected prototype:\nvoid osg::Camera::setStats(osg::Stats * stats)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Stats* stats=(Luna< osg::Referenced >::checkSubType< osg::Stats >(L,2));

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setStats(osg::Stats *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStats(stats);

		return 0;
	}

	// osg::Stats * osg::Camera::getStats()
	static int _bind_getStats_overload_1(lua_State *L) {
		if (!_lg_typecheck_getStats_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Stats * osg::Camera::getStats() function, expected prototype:\nosg::Stats * osg::Camera::getStats()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Stats * osg::Camera::getStats(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Stats * lret = self->getStats();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Stats >::push(L,lret,false);

		return 1;
	}

	// const osg::Stats * osg::Camera::getStats() const
	static int _bind_getStats_overload_2(lua_State *L) {
		if (!_lg_typecheck_getStats_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Stats * osg::Camera::getStats() const function, expected prototype:\nconst osg::Stats * osg::Camera::getStats() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Stats * osg::Camera::getStats() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Stats * lret = self->getStats();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Stats >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::getStats
	static int _bind_getStats(lua_State *L) {
		if (_lg_typecheck_getStats_overload_1(L)) return _bind_getStats_overload_1(L);
		if (_lg_typecheck_getStats_overload_2(L)) return _bind_getStats_overload_2(L);

		luaL_error(L, "error in function getStats, cannot match any of the overloads for function getStats:\n  getStats()\n  getStats()\n");
		return 0;
	}

	// void osg::Camera::setAllowEventFocus(bool focus)
	static int _bind_setAllowEventFocus(lua_State *L) {
		if (!_lg_typecheck_setAllowEventFocus(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setAllowEventFocus(bool focus) function, expected prototype:\nvoid osg::Camera::setAllowEventFocus(bool focus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool focus=(bool)(lua_toboolean(L,2)==1);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setAllowEventFocus(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAllowEventFocus(focus);

		return 0;
	}

	// bool osg::Camera::getAllowEventFocus() const
	static int _bind_getAllowEventFocus(lua_State *L) {
		if (!_lg_typecheck_getAllowEventFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Camera::getAllowEventFocus() const function, expected prototype:\nbool osg::Camera::getAllowEventFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Camera::getAllowEventFocus() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getAllowEventFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Camera::setDisplaySettings(osg::DisplaySettings * ds)
	static int _bind_setDisplaySettings(lua_State *L) {
		if (!_lg_typecheck_setDisplaySettings(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setDisplaySettings(osg::DisplaySettings * ds) function, expected prototype:\nvoid osg::Camera::setDisplaySettings(osg::DisplaySettings * ds)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::DisplaySettings* ds=(Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,2));

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setDisplaySettings(osg::DisplaySettings *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDisplaySettings(ds);

		return 0;
	}

	// osg::DisplaySettings * osg::Camera::getDisplaySettings()
	static int _bind_getDisplaySettings_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDisplaySettings_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::DisplaySettings * osg::Camera::getDisplaySettings() function, expected prototype:\nosg::DisplaySettings * osg::Camera::getDisplaySettings()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::DisplaySettings * osg::Camera::getDisplaySettings(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::DisplaySettings * lret = self->getDisplaySettings();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DisplaySettings >::push(L,lret,false);

		return 1;
	}

	// const osg::DisplaySettings * osg::Camera::getDisplaySettings() const
	static int _bind_getDisplaySettings_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDisplaySettings_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::DisplaySettings * osg::Camera::getDisplaySettings() const function, expected prototype:\nconst osg::DisplaySettings * osg::Camera::getDisplaySettings() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::DisplaySettings * osg::Camera::getDisplaySettings() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::DisplaySettings * lret = self->getDisplaySettings();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DisplaySettings >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::getDisplaySettings
	static int _bind_getDisplaySettings(lua_State *L) {
		if (_lg_typecheck_getDisplaySettings_overload_1(L)) return _bind_getDisplaySettings_overload_1(L);
		if (_lg_typecheck_getDisplaySettings_overload_2(L)) return _bind_getDisplaySettings_overload_2(L);

		luaL_error(L, "error in function getDisplaySettings, cannot match any of the overloads for function getDisplaySettings:\n  getDisplaySettings()\n  getDisplaySettings()\n");
		return 0;
	}

	// void osg::Camera::setClearMask(unsigned int mask)
	static int _bind_setClearMask(lua_State *L) {
		if (!_lg_typecheck_setClearMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setClearMask(unsigned int mask) function, expected prototype:\nvoid osg::Camera::setClearMask(unsigned int mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mask=(unsigned int)lua_tointeger(L,2);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setClearMask(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setClearMask(mask);

		return 0;
	}

	// unsigned int osg::Camera::getClearMask() const
	static int _bind_getClearMask(lua_State *L) {
		if (!_lg_typecheck_getClearMask(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Camera::getClearMask() const function, expected prototype:\nunsigned int osg::Camera::getClearMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Camera::getClearMask() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getClearMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Camera::setClearColor(const osg::Vec4f & color)
	static int _bind_setClearColor(lua_State *L) {
		if (!_lg_typecheck_setClearColor(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setClearColor(const osg::Vec4f & color) function, expected prototype:\nvoid osg::Camera::setClearColor(const osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osg::Camera::setClearColor function");
		}
		const osg::Vec4f & color=*color_ptr;

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setClearColor(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setClearColor(color);

		return 0;
	}

	// const osg::Vec4f & osg::Camera::getClearColor() const
	static int _bind_getClearColor(lua_State *L) {
		if (!_lg_typecheck_getClearColor(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::Camera::getClearColor() const function, expected prototype:\nconst osg::Vec4f & osg::Camera::getClearColor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::Camera::getClearColor() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getClearColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osg::Camera::setClearAccum(const osg::Vec4f & color)
	static int _bind_setClearAccum(lua_State *L) {
		if (!_lg_typecheck_setClearAccum(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setClearAccum(const osg::Vec4f & color) function, expected prototype:\nvoid osg::Camera::setClearAccum(const osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osg::Camera::setClearAccum function");
		}
		const osg::Vec4f & color=*color_ptr;

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setClearAccum(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setClearAccum(color);

		return 0;
	}

	// const osg::Vec4f & osg::Camera::getClearAccum() const
	static int _bind_getClearAccum(lua_State *L) {
		if (!_lg_typecheck_getClearAccum(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::Camera::getClearAccum() const function, expected prototype:\nconst osg::Vec4f & osg::Camera::getClearAccum() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::Camera::getClearAccum() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getClearAccum();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osg::Camera::setClearDepth(double depth)
	static int _bind_setClearDepth(lua_State *L) {
		if (!_lg_typecheck_setClearDepth(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setClearDepth(double depth) function, expected prototype:\nvoid osg::Camera::setClearDepth(double depth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double depth=(double)lua_tonumber(L,2);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setClearDepth(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setClearDepth(depth);

		return 0;
	}

	// double osg::Camera::getClearDepth() const
	static int _bind_getClearDepth(lua_State *L) {
		if (!_lg_typecheck_getClearDepth(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Camera::getClearDepth() const function, expected prototype:\ndouble osg::Camera::getClearDepth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Camera::getClearDepth() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getClearDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Camera::setClearStencil(int stencil)
	static int _bind_setClearStencil(lua_State *L) {
		if (!_lg_typecheck_setClearStencil(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setClearStencil(int stencil) function, expected prototype:\nvoid osg::Camera::setClearStencil(int stencil)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int stencil=(int)lua_tointeger(L,2);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setClearStencil(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setClearStencil(stencil);

		return 0;
	}

	// int osg::Camera::getClearStencil() const
	static int _bind_getClearStencil(lua_State *L) {
		if (!_lg_typecheck_getClearStencil(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Camera::getClearStencil() const function, expected prototype:\nint osg::Camera::getClearStencil() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Camera::getClearStencil() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getClearStencil();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Camera::setColorMask(osg::ColorMask * colorMask)
	static int _bind_setColorMask_overload_1(lua_State *L) {
		if (!_lg_typecheck_setColorMask_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setColorMask(osg::ColorMask * colorMask) function, expected prototype:\nvoid osg::Camera::setColorMask(osg::ColorMask * colorMask)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ColorMask* colorMask=(Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,2));

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setColorMask(osg::ColorMask *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColorMask(colorMask);

		return 0;
	}

	// void osg::Camera::setColorMask(bool red, bool green, bool blue, bool alpha)
	static int _bind_setColorMask_overload_2(lua_State *L) {
		if (!_lg_typecheck_setColorMask_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setColorMask(bool red, bool green, bool blue, bool alpha) function, expected prototype:\nvoid osg::Camera::setColorMask(bool red, bool green, bool blue, bool alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool red=(bool)(lua_toboolean(L,2)==1);
		bool green=(bool)(lua_toboolean(L,3)==1);
		bool blue=(bool)(lua_toboolean(L,4)==1);
		bool alpha=(bool)(lua_toboolean(L,5)==1);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setColorMask(bool, bool, bool, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColorMask(red, green, blue, alpha);

		return 0;
	}

	// Overload binder for osg::Camera::setColorMask
	static int _bind_setColorMask(lua_State *L) {
		if (_lg_typecheck_setColorMask_overload_1(L)) return _bind_setColorMask_overload_1(L);
		if (_lg_typecheck_setColorMask_overload_2(L)) return _bind_setColorMask_overload_2(L);

		luaL_error(L, "error in function setColorMask, cannot match any of the overloads for function setColorMask:\n  setColorMask(osg::ColorMask *)\n  setColorMask(bool, bool, bool, bool)\n");
		return 0;
	}

	// const osg::ColorMask * osg::Camera::getColorMask() const
	static int _bind_getColorMask_overload_1(lua_State *L) {
		if (!_lg_typecheck_getColorMask_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const osg::ColorMask * osg::Camera::getColorMask() const function, expected prototype:\nconst osg::ColorMask * osg::Camera::getColorMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::ColorMask * osg::Camera::getColorMask() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ColorMask * lret = self->getColorMask();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ColorMask >::push(L,lret,false);

		return 1;
	}

	// osg::ColorMask * osg::Camera::getColorMask()
	static int _bind_getColorMask_overload_2(lua_State *L) {
		if (!_lg_typecheck_getColorMask_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ColorMask * osg::Camera::getColorMask() function, expected prototype:\nosg::ColorMask * osg::Camera::getColorMask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ColorMask * osg::Camera::getColorMask(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ColorMask * lret = self->getColorMask();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ColorMask >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::getColorMask
	static int _bind_getColorMask(lua_State *L) {
		if (_lg_typecheck_getColorMask_overload_1(L)) return _bind_getColorMask_overload_1(L);
		if (_lg_typecheck_getColorMask_overload_2(L)) return _bind_getColorMask_overload_2(L);

		luaL_error(L, "error in function getColorMask, cannot match any of the overloads for function getColorMask:\n  getColorMask()\n  getColorMask()\n");
		return 0;
	}

	// void osg::Camera::setViewport(osg::Viewport * viewport)
	static int _bind_setViewport_overload_1(lua_State *L) {
		if (!_lg_typecheck_setViewport_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setViewport(osg::Viewport * viewport) function, expected prototype:\nvoid osg::Camera::setViewport(osg::Viewport * viewport)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Viewport* viewport=(Luna< osg::Referenced >::checkSubType< osg::Viewport >(L,2));

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setViewport(osg::Viewport *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setViewport(viewport);

		return 0;
	}

	// void osg::Camera::setViewport(int x, int y, int width, int height)
	static int _bind_setViewport_overload_2(lua_State *L) {
		if (!_lg_typecheck_setViewport_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setViewport(int x, int y, int width, int height) function, expected prototype:\nvoid osg::Camera::setViewport(int x, int y, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setViewport(int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setViewport(x, y, width, height);

		return 0;
	}

	// Overload binder for osg::Camera::setViewport
	static int _bind_setViewport(lua_State *L) {
		if (_lg_typecheck_setViewport_overload_1(L)) return _bind_setViewport_overload_1(L);
		if (_lg_typecheck_setViewport_overload_2(L)) return _bind_setViewport_overload_2(L);

		luaL_error(L, "error in function setViewport, cannot match any of the overloads for function setViewport:\n  setViewport(osg::Viewport *)\n  setViewport(int, int, int, int)\n");
		return 0;
	}

	// const osg::Viewport * osg::Camera::getViewport() const
	static int _bind_getViewport_overload_1(lua_State *L) {
		if (!_lg_typecheck_getViewport_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Viewport * osg::Camera::getViewport() const function, expected prototype:\nconst osg::Viewport * osg::Camera::getViewport() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Viewport * osg::Camera::getViewport() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Viewport * lret = self->getViewport();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Viewport >::push(L,lret,false);

		return 1;
	}

	// osg::Viewport * osg::Camera::getViewport()
	static int _bind_getViewport_overload_2(lua_State *L) {
		if (!_lg_typecheck_getViewport_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Viewport * osg::Camera::getViewport() function, expected prototype:\nosg::Viewport * osg::Camera::getViewport()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Viewport * osg::Camera::getViewport(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Viewport * lret = self->getViewport();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Viewport >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::getViewport
	static int _bind_getViewport(lua_State *L) {
		if (_lg_typecheck_getViewport_overload_1(L)) return _bind_getViewport_overload_1(L);
		if (_lg_typecheck_getViewport_overload_2(L)) return _bind_getViewport_overload_2(L);

		luaL_error(L, "error in function getViewport, cannot match any of the overloads for function getViewport:\n  getViewport()\n  getViewport()\n");
		return 0;
	}

	// void osg::Camera::setTransformOrder(osg::Camera::TransformOrder order)
	static int _bind_setTransformOrder(lua_State *L) {
		if (!_lg_typecheck_setTransformOrder(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setTransformOrder(osg::Camera::TransformOrder order) function, expected prototype:\nvoid osg::Camera::setTransformOrder(osg::Camera::TransformOrder order)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera::TransformOrder order=(osg::Camera::TransformOrder)lua_tointeger(L,2);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setTransformOrder(osg::Camera::TransformOrder). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTransformOrder(order);

		return 0;
	}

	// osg::Camera::TransformOrder osg::Camera::getTransformOrder() const
	static int _bind_getTransformOrder(lua_State *L) {
		if (!_lg_typecheck_getTransformOrder(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera::TransformOrder osg::Camera::getTransformOrder() const function, expected prototype:\nosg::Camera::TransformOrder osg::Camera::getTransformOrder() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera::TransformOrder osg::Camera::getTransformOrder() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera::TransformOrder lret = self->getTransformOrder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Camera::setProjectionResizePolicy(osg::Camera::ProjectionResizePolicy policy)
	static int _bind_setProjectionResizePolicy(lua_State *L) {
		if (!_lg_typecheck_setProjectionResizePolicy(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setProjectionResizePolicy(osg::Camera::ProjectionResizePolicy policy) function, expected prototype:\nvoid osg::Camera::setProjectionResizePolicy(osg::Camera::ProjectionResizePolicy policy)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera::ProjectionResizePolicy policy=(osg::Camera::ProjectionResizePolicy)lua_tointeger(L,2);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setProjectionResizePolicy(osg::Camera::ProjectionResizePolicy). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setProjectionResizePolicy(policy);

		return 0;
	}

	// osg::Camera::ProjectionResizePolicy osg::Camera::getProjectionResizePolicy() const
	static int _bind_getProjectionResizePolicy(lua_State *L) {
		if (!_lg_typecheck_getProjectionResizePolicy(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera::ProjectionResizePolicy osg::Camera::getProjectionResizePolicy() const function, expected prototype:\nosg::Camera::ProjectionResizePolicy osg::Camera::getProjectionResizePolicy() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera::ProjectionResizePolicy osg::Camera::getProjectionResizePolicy() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera::ProjectionResizePolicy lret = self->getProjectionResizePolicy();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Camera::setProjectionMatrix(const osg::Matrixf & matrix)
	static int _bind_setProjectionMatrix_overload_1(lua_State *L) {
		if (!_lg_typecheck_setProjectionMatrix_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setProjectionMatrix(const osg::Matrixf & matrix) function, expected prototype:\nvoid osg::Camera::setProjectionMatrix(const osg::Matrixf & matrix)\nClass arguments details:\narg 1 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixf* matrix_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::Camera::setProjectionMatrix function");
		}
		const osg::Matrixf & matrix=*matrix_ptr;

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setProjectionMatrix(const osg::Matrixf &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setProjectionMatrix(matrix);

		return 0;
	}

	// void osg::Camera::setProjectionMatrix(const osg::Matrixd & matrix)
	static int _bind_setProjectionMatrix_overload_2(lua_State *L) {
		if (!_lg_typecheck_setProjectionMatrix_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setProjectionMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osg::Camera::setProjectionMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::Camera::setProjectionMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setProjectionMatrix(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setProjectionMatrix(matrix);

		return 0;
	}

	// Overload binder for osg::Camera::setProjectionMatrix
	static int _bind_setProjectionMatrix(lua_State *L) {
		if (_lg_typecheck_setProjectionMatrix_overload_1(L)) return _bind_setProjectionMatrix_overload_1(L);
		if (_lg_typecheck_setProjectionMatrix_overload_2(L)) return _bind_setProjectionMatrix_overload_2(L);

		luaL_error(L, "error in function setProjectionMatrix, cannot match any of the overloads for function setProjectionMatrix:\n  setProjectionMatrix(const osg::Matrixf &)\n  setProjectionMatrix(const osg::Matrixd &)\n");
		return 0;
	}

	// void osg::Camera::setProjectionMatrixAsOrtho(double left, double right, double bottom, double top, double zNear, double zFar)
	static int _bind_setProjectionMatrixAsOrtho(lua_State *L) {
		if (!_lg_typecheck_setProjectionMatrixAsOrtho(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setProjectionMatrixAsOrtho(double left, double right, double bottom, double top, double zNear, double zFar) function, expected prototype:\nvoid osg::Camera::setProjectionMatrixAsOrtho(double left, double right, double bottom, double top, double zNear, double zFar)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double left=(double)lua_tonumber(L,2);
		double right=(double)lua_tonumber(L,3);
		double bottom=(double)lua_tonumber(L,4);
		double top=(double)lua_tonumber(L,5);
		double zNear=(double)lua_tonumber(L,6);
		double zFar=(double)lua_tonumber(L,7);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setProjectionMatrixAsOrtho(double, double, double, double, double, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setProjectionMatrixAsOrtho(left, right, bottom, top, zNear, zFar);

		return 0;
	}

	// void osg::Camera::setProjectionMatrixAsOrtho2D(double left, double right, double bottom, double top)
	static int _bind_setProjectionMatrixAsOrtho2D(lua_State *L) {
		if (!_lg_typecheck_setProjectionMatrixAsOrtho2D(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setProjectionMatrixAsOrtho2D(double left, double right, double bottom, double top) function, expected prototype:\nvoid osg::Camera::setProjectionMatrixAsOrtho2D(double left, double right, double bottom, double top)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double left=(double)lua_tonumber(L,2);
		double right=(double)lua_tonumber(L,3);
		double bottom=(double)lua_tonumber(L,4);
		double top=(double)lua_tonumber(L,5);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setProjectionMatrixAsOrtho2D(double, double, double, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setProjectionMatrixAsOrtho2D(left, right, bottom, top);

		return 0;
	}

	// void osg::Camera::setProjectionMatrixAsFrustum(double left, double right, double bottom, double top, double zNear, double zFar)
	static int _bind_setProjectionMatrixAsFrustum(lua_State *L) {
		if (!_lg_typecheck_setProjectionMatrixAsFrustum(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setProjectionMatrixAsFrustum(double left, double right, double bottom, double top, double zNear, double zFar) function, expected prototype:\nvoid osg::Camera::setProjectionMatrixAsFrustum(double left, double right, double bottom, double top, double zNear, double zFar)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double left=(double)lua_tonumber(L,2);
		double right=(double)lua_tonumber(L,3);
		double bottom=(double)lua_tonumber(L,4);
		double top=(double)lua_tonumber(L,5);
		double zNear=(double)lua_tonumber(L,6);
		double zFar=(double)lua_tonumber(L,7);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setProjectionMatrixAsFrustum(double, double, double, double, double, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setProjectionMatrixAsFrustum(left, right, bottom, top, zNear, zFar);

		return 0;
	}

	// void osg::Camera::setProjectionMatrixAsPerspective(double fovy, double aspectRatio, double zNear, double zFar)
	static int _bind_setProjectionMatrixAsPerspective(lua_State *L) {
		if (!_lg_typecheck_setProjectionMatrixAsPerspective(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setProjectionMatrixAsPerspective(double fovy, double aspectRatio, double zNear, double zFar) function, expected prototype:\nvoid osg::Camera::setProjectionMatrixAsPerspective(double fovy, double aspectRatio, double zNear, double zFar)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double fovy=(double)lua_tonumber(L,2);
		double aspectRatio=(double)lua_tonumber(L,3);
		double zNear=(double)lua_tonumber(L,4);
		double zFar=(double)lua_tonumber(L,5);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setProjectionMatrixAsPerspective(double, double, double, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setProjectionMatrixAsPerspective(fovy, aspectRatio, zNear, zFar);

		return 0;
	}

	// osg::Matrixd & osg::Camera::getProjectionMatrix()
	static int _bind_getProjectionMatrix_overload_1(lua_State *L) {
		if (!_lg_typecheck_getProjectionMatrix_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd & osg::Camera::getProjectionMatrix() function, expected prototype:\nosg::Matrixd & osg::Camera::getProjectionMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd & osg::Camera::getProjectionMatrix(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Matrixd* lret = &self->getProjectionMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// const osg::Matrixd & osg::Camera::getProjectionMatrix() const
	static int _bind_getProjectionMatrix_overload_2(lua_State *L) {
		if (!_lg_typecheck_getProjectionMatrix_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Matrixd & osg::Camera::getProjectionMatrix() const function, expected prototype:\nconst osg::Matrixd & osg::Camera::getProjectionMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Matrixd & osg::Camera::getProjectionMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Matrixd* lret = &self->getProjectionMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::getProjectionMatrix
	static int _bind_getProjectionMatrix(lua_State *L) {
		if (_lg_typecheck_getProjectionMatrix_overload_1(L)) return _bind_getProjectionMatrix_overload_1(L);
		if (_lg_typecheck_getProjectionMatrix_overload_2(L)) return _bind_getProjectionMatrix_overload_2(L);

		luaL_error(L, "error in function getProjectionMatrix, cannot match any of the overloads for function getProjectionMatrix:\n  getProjectionMatrix()\n  getProjectionMatrix()\n");
		return 0;
	}

	// bool osg::Camera::getProjectionMatrixAsOrtho(double & left, double & right, double & bottom, double & top, double & zNear, double & zFar) const
	static int _bind_getProjectionMatrixAsOrtho(lua_State *L) {
		if (!_lg_typecheck_getProjectionMatrixAsOrtho(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Camera::getProjectionMatrixAsOrtho(double & left, double & right, double & bottom, double & top, double & zNear, double & zFar) const function, expected prototype:\nbool osg::Camera::getProjectionMatrixAsOrtho(double & left, double & right, double & bottom, double & top, double & zNear, double & zFar) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double left=(double)lua_tonumber(L,2);
		double right=(double)lua_tonumber(L,3);
		double bottom=(double)lua_tonumber(L,4);
		double top=(double)lua_tonumber(L,5);
		double zNear=(double)lua_tonumber(L,6);
		double zFar=(double)lua_tonumber(L,7);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Camera::getProjectionMatrixAsOrtho(double &, double &, double &, double &, double &, double &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getProjectionMatrixAsOrtho(left, right, bottom, top, zNear, zFar);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,left);
		lua_pushnumber(L,right);
		lua_pushnumber(L,bottom);
		lua_pushnumber(L,top);
		lua_pushnumber(L,zNear);
		lua_pushnumber(L,zFar);
		return 7;
	}

	// bool osg::Camera::getProjectionMatrixAsFrustum(double & left, double & right, double & bottom, double & top, double & zNear, double & zFar) const
	static int _bind_getProjectionMatrixAsFrustum(lua_State *L) {
		if (!_lg_typecheck_getProjectionMatrixAsFrustum(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Camera::getProjectionMatrixAsFrustum(double & left, double & right, double & bottom, double & top, double & zNear, double & zFar) const function, expected prototype:\nbool osg::Camera::getProjectionMatrixAsFrustum(double & left, double & right, double & bottom, double & top, double & zNear, double & zFar) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double left=(double)lua_tonumber(L,2);
		double right=(double)lua_tonumber(L,3);
		double bottom=(double)lua_tonumber(L,4);
		double top=(double)lua_tonumber(L,5);
		double zNear=(double)lua_tonumber(L,6);
		double zFar=(double)lua_tonumber(L,7);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Camera::getProjectionMatrixAsFrustum(double &, double &, double &, double &, double &, double &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getProjectionMatrixAsFrustum(left, right, bottom, top, zNear, zFar);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,left);
		lua_pushnumber(L,right);
		lua_pushnumber(L,bottom);
		lua_pushnumber(L,top);
		lua_pushnumber(L,zNear);
		lua_pushnumber(L,zFar);
		return 7;
	}

	// bool osg::Camera::getProjectionMatrixAsPerspective(double & fovy, double & aspectRatio, double & zNear, double & zFar) const
	static int _bind_getProjectionMatrixAsPerspective(lua_State *L) {
		if (!_lg_typecheck_getProjectionMatrixAsPerspective(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Camera::getProjectionMatrixAsPerspective(double & fovy, double & aspectRatio, double & zNear, double & zFar) const function, expected prototype:\nbool osg::Camera::getProjectionMatrixAsPerspective(double & fovy, double & aspectRatio, double & zNear, double & zFar) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double fovy=(double)lua_tonumber(L,2);
		double aspectRatio=(double)lua_tonumber(L,3);
		double zNear=(double)lua_tonumber(L,4);
		double zFar=(double)lua_tonumber(L,5);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Camera::getProjectionMatrixAsPerspective(double &, double &, double &, double &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getProjectionMatrixAsPerspective(fovy, aspectRatio, zNear, zFar);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,fovy);
		lua_pushnumber(L,aspectRatio);
		lua_pushnumber(L,zNear);
		lua_pushnumber(L,zFar);
		return 5;
	}

	// void osg::Camera::setViewMatrix(const osg::Matrixf & matrix)
	static int _bind_setViewMatrix_overload_1(lua_State *L) {
		if (!_lg_typecheck_setViewMatrix_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setViewMatrix(const osg::Matrixf & matrix) function, expected prototype:\nvoid osg::Camera::setViewMatrix(const osg::Matrixf & matrix)\nClass arguments details:\narg 1 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixf* matrix_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::Camera::setViewMatrix function");
		}
		const osg::Matrixf & matrix=*matrix_ptr;

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setViewMatrix(const osg::Matrixf &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setViewMatrix(matrix);

		return 0;
	}

	// void osg::Camera::setViewMatrix(const osg::Matrixd & matrix)
	static int _bind_setViewMatrix_overload_2(lua_State *L) {
		if (!_lg_typecheck_setViewMatrix_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setViewMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osg::Camera::setViewMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::Camera::setViewMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setViewMatrix(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setViewMatrix(matrix);

		return 0;
	}

	// Overload binder for osg::Camera::setViewMatrix
	static int _bind_setViewMatrix(lua_State *L) {
		if (_lg_typecheck_setViewMatrix_overload_1(L)) return _bind_setViewMatrix_overload_1(L);
		if (_lg_typecheck_setViewMatrix_overload_2(L)) return _bind_setViewMatrix_overload_2(L);

		luaL_error(L, "error in function setViewMatrix, cannot match any of the overloads for function setViewMatrix:\n  setViewMatrix(const osg::Matrixf &)\n  setViewMatrix(const osg::Matrixd &)\n");
		return 0;
	}

	// osg::Matrixd & osg::Camera::getViewMatrix()
	static int _bind_getViewMatrix_overload_1(lua_State *L) {
		if (!_lg_typecheck_getViewMatrix_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd & osg::Camera::getViewMatrix() function, expected prototype:\nosg::Matrixd & osg::Camera::getViewMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd & osg::Camera::getViewMatrix(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Matrixd* lret = &self->getViewMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// const osg::Matrixd & osg::Camera::getViewMatrix() const
	static int _bind_getViewMatrix_overload_2(lua_State *L) {
		if (!_lg_typecheck_getViewMatrix_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Matrixd & osg::Camera::getViewMatrix() const function, expected prototype:\nconst osg::Matrixd & osg::Camera::getViewMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Matrixd & osg::Camera::getViewMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Matrixd* lret = &self->getViewMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::getViewMatrix
	static int _bind_getViewMatrix(lua_State *L) {
		if (_lg_typecheck_getViewMatrix_overload_1(L)) return _bind_getViewMatrix_overload_1(L);
		if (_lg_typecheck_getViewMatrix_overload_2(L)) return _bind_getViewMatrix_overload_2(L);

		luaL_error(L, "error in function getViewMatrix, cannot match any of the overloads for function getViewMatrix:\n  getViewMatrix()\n  getViewMatrix()\n");
		return 0;
	}

	// void osg::Camera::setViewMatrixAsLookAt(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up)
	static int _bind_setViewMatrixAsLookAt(lua_State *L) {
		if (!_lg_typecheck_setViewMatrixAsLookAt(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setViewMatrixAsLookAt(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up) function, expected prototype:\nvoid osg::Camera::setViewMatrixAsLookAt(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osg::Camera::setViewMatrixAsLookAt function");
		}
		const osg::Vec3d & eye=*eye_ptr;
		const osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Camera::setViewMatrixAsLookAt function");
		}
		const osg::Vec3d & center=*center_ptr;
		const osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osg::Camera::setViewMatrixAsLookAt function");
		}
		const osg::Vec3d & up=*up_ptr;

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setViewMatrixAsLookAt(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setViewMatrixAsLookAt(eye, center, up);

		return 0;
	}

	// void osg::Camera::getViewMatrixAsLookAt(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up, double lookDistance = 1.0) const
	static int _bind_getViewMatrixAsLookAt_overload_1(lua_State *L) {
		if (!_lg_typecheck_getViewMatrixAsLookAt_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::getViewMatrixAsLookAt(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up, double lookDistance = 1.0) const function, expected prototype:\nvoid osg::Camera::getViewMatrixAsLookAt(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up, double lookDistance = 1.0) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osg::Camera::getViewMatrixAsLookAt function");
		}
		osg::Vec3d & eye=*eye_ptr;
		osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Camera::getViewMatrixAsLookAt function");
		}
		osg::Vec3d & center=*center_ptr;
		osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osg::Camera::getViewMatrixAsLookAt function");
		}
		osg::Vec3d & up=*up_ptr;
		double lookDistance=luatop>4 ? (double)lua_tonumber(L,5) : (double)1.0;

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::getViewMatrixAsLookAt(osg::Vec3d &, osg::Vec3d &, osg::Vec3d &, double) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getViewMatrixAsLookAt(eye, center, up, lookDistance);

		return 0;
	}

	// void osg::Camera::getViewMatrixAsLookAt(osg::Vec3f & eye, osg::Vec3f & center, osg::Vec3f & up, float lookDistance = 1.0f) const
	static int _bind_getViewMatrixAsLookAt_overload_2(lua_State *L) {
		if (!_lg_typecheck_getViewMatrixAsLookAt_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::getViewMatrixAsLookAt(osg::Vec3f & eye, osg::Vec3f & center, osg::Vec3f & up, float lookDistance = 1.0f) const function, expected prototype:\nvoid osg::Camera::getViewMatrixAsLookAt(osg::Vec3f & eye, osg::Vec3f & center, osg::Vec3f & up, float lookDistance = 1.0f) const\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\narg 3 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Vec3f* eye_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osg::Camera::getViewMatrixAsLookAt function");
		}
		osg::Vec3f & eye=*eye_ptr;
		osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Camera::getViewMatrixAsLookAt function");
		}
		osg::Vec3f & center=*center_ptr;
		osg::Vec3f* up_ptr=(Luna< osg::Vec3f >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osg::Camera::getViewMatrixAsLookAt function");
		}
		osg::Vec3f & up=*up_ptr;
		float lookDistance=luatop>4 ? (float)lua_tonumber(L,5) : (float)1.0f;

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::getViewMatrixAsLookAt(osg::Vec3f &, osg::Vec3f &, osg::Vec3f &, float) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getViewMatrixAsLookAt(eye, center, up, lookDistance);

		return 0;
	}

	// Overload binder for osg::Camera::getViewMatrixAsLookAt
	static int _bind_getViewMatrixAsLookAt(lua_State *L) {
		if (_lg_typecheck_getViewMatrixAsLookAt_overload_1(L)) return _bind_getViewMatrixAsLookAt_overload_1(L);
		if (_lg_typecheck_getViewMatrixAsLookAt_overload_2(L)) return _bind_getViewMatrixAsLookAt_overload_2(L);

		luaL_error(L, "error in function getViewMatrixAsLookAt, cannot match any of the overloads for function getViewMatrixAsLookAt:\n  getViewMatrixAsLookAt(osg::Vec3d &, osg::Vec3d &, osg::Vec3d &, double)\n  getViewMatrixAsLookAt(osg::Vec3f &, osg::Vec3f &, osg::Vec3f &, float)\n");
		return 0;
	}

	// osg::Matrixd osg::Camera::getInverseViewMatrix() const
	static int _bind_getInverseViewMatrix(lua_State *L) {
		if (!_lg_typecheck_getInverseViewMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osg::Camera::getInverseViewMatrix() const function, expected prototype:\nosg::Matrixd osg::Camera::getInverseViewMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osg::Camera::getInverseViewMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->getInverseViewMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// void osg::Camera::setRenderOrder(osg::Camera::RenderOrder order, int orderNum = 0)
	static int _bind_setRenderOrder(lua_State *L) {
		if (!_lg_typecheck_setRenderOrder(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setRenderOrder(osg::Camera::RenderOrder order, int orderNum = 0) function, expected prototype:\nvoid osg::Camera::setRenderOrder(osg::Camera::RenderOrder order, int orderNum = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Camera::RenderOrder order=(osg::Camera::RenderOrder)lua_tointeger(L,2);
		int orderNum=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setRenderOrder(osg::Camera::RenderOrder, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRenderOrder(order, orderNum);

		return 0;
	}

	// osg::Camera::RenderOrder osg::Camera::getRenderOrder() const
	static int _bind_getRenderOrder(lua_State *L) {
		if (!_lg_typecheck_getRenderOrder(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera::RenderOrder osg::Camera::getRenderOrder() const function, expected prototype:\nosg::Camera::RenderOrder osg::Camera::getRenderOrder() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera::RenderOrder osg::Camera::getRenderOrder() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera::RenderOrder lret = self->getRenderOrder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Camera::getRenderOrderNum() const
	static int _bind_getRenderOrderNum(lua_State *L) {
		if (!_lg_typecheck_getRenderOrderNum(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Camera::getRenderOrderNum() const function, expected prototype:\nint osg::Camera::getRenderOrderNum() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Camera::getRenderOrderNum() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getRenderOrderNum();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Camera::isRenderToTextureCamera() const
	static int _bind_isRenderToTextureCamera(lua_State *L) {
		if (!_lg_typecheck_isRenderToTextureCamera(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Camera::isRenderToTextureCamera() const function, expected prototype:\nbool osg::Camera::isRenderToTextureCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Camera::isRenderToTextureCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isRenderToTextureCamera();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Camera::setRenderTargetImplementation(osg::Camera::RenderTargetImplementation impl)
	static int _bind_setRenderTargetImplementation_overload_1(lua_State *L) {
		if (!_lg_typecheck_setRenderTargetImplementation_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setRenderTargetImplementation(osg::Camera::RenderTargetImplementation impl) function, expected prototype:\nvoid osg::Camera::setRenderTargetImplementation(osg::Camera::RenderTargetImplementation impl)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera::RenderTargetImplementation impl=(osg::Camera::RenderTargetImplementation)lua_tointeger(L,2);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setRenderTargetImplementation(osg::Camera::RenderTargetImplementation). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRenderTargetImplementation(impl);

		return 0;
	}

	// void osg::Camera::setRenderTargetImplementation(osg::Camera::RenderTargetImplementation impl, osg::Camera::RenderTargetImplementation fallback)
	static int _bind_setRenderTargetImplementation_overload_2(lua_State *L) {
		if (!_lg_typecheck_setRenderTargetImplementation_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setRenderTargetImplementation(osg::Camera::RenderTargetImplementation impl, osg::Camera::RenderTargetImplementation fallback) function, expected prototype:\nvoid osg::Camera::setRenderTargetImplementation(osg::Camera::RenderTargetImplementation impl, osg::Camera::RenderTargetImplementation fallback)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera::RenderTargetImplementation impl=(osg::Camera::RenderTargetImplementation)lua_tointeger(L,2);
		osg::Camera::RenderTargetImplementation fallback=(osg::Camera::RenderTargetImplementation)lua_tointeger(L,3);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setRenderTargetImplementation(osg::Camera::RenderTargetImplementation, osg::Camera::RenderTargetImplementation). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRenderTargetImplementation(impl, fallback);

		return 0;
	}

	// Overload binder for osg::Camera::setRenderTargetImplementation
	static int _bind_setRenderTargetImplementation(lua_State *L) {
		if (_lg_typecheck_setRenderTargetImplementation_overload_1(L)) return _bind_setRenderTargetImplementation_overload_1(L);
		if (_lg_typecheck_setRenderTargetImplementation_overload_2(L)) return _bind_setRenderTargetImplementation_overload_2(L);

		luaL_error(L, "error in function setRenderTargetImplementation, cannot match any of the overloads for function setRenderTargetImplementation:\n  setRenderTargetImplementation(osg::Camera::RenderTargetImplementation)\n  setRenderTargetImplementation(osg::Camera::RenderTargetImplementation, osg::Camera::RenderTargetImplementation)\n");
		return 0;
	}

	// osg::Camera::RenderTargetImplementation osg::Camera::getRenderTargetImplementation() const
	static int _bind_getRenderTargetImplementation(lua_State *L) {
		if (!_lg_typecheck_getRenderTargetImplementation(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera::RenderTargetImplementation osg::Camera::getRenderTargetImplementation() const function, expected prototype:\nosg::Camera::RenderTargetImplementation osg::Camera::getRenderTargetImplementation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera::RenderTargetImplementation osg::Camera::getRenderTargetImplementation() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera::RenderTargetImplementation lret = self->getRenderTargetImplementation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Camera::RenderTargetImplementation osg::Camera::getRenderTargetFallback() const
	static int _bind_getRenderTargetFallback(lua_State *L) {
		if (!_lg_typecheck_getRenderTargetFallback(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera::RenderTargetImplementation osg::Camera::getRenderTargetFallback() const function, expected prototype:\nosg::Camera::RenderTargetImplementation osg::Camera::getRenderTargetFallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera::RenderTargetImplementation osg::Camera::getRenderTargetFallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera::RenderTargetImplementation lret = self->getRenderTargetFallback();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Camera::setDrawBuffer(unsigned int buffer)
	static int _bind_setDrawBuffer(lua_State *L) {
		if (!_lg_typecheck_setDrawBuffer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setDrawBuffer(unsigned int buffer) function, expected prototype:\nvoid osg::Camera::setDrawBuffer(unsigned int buffer)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int buffer=(unsigned int)lua_tointeger(L,2);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setDrawBuffer(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDrawBuffer(buffer);

		return 0;
	}

	// unsigned int osg::Camera::getDrawBuffer() const
	static int _bind_getDrawBuffer(lua_State *L) {
		if (!_lg_typecheck_getDrawBuffer(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Camera::getDrawBuffer() const function, expected prototype:\nunsigned int osg::Camera::getDrawBuffer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Camera::getDrawBuffer() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getDrawBuffer();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Camera::setReadBuffer(unsigned int buffer)
	static int _bind_setReadBuffer(lua_State *L) {
		if (!_lg_typecheck_setReadBuffer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setReadBuffer(unsigned int buffer) function, expected prototype:\nvoid osg::Camera::setReadBuffer(unsigned int buffer)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int buffer=(unsigned int)lua_tointeger(L,2);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setReadBuffer(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setReadBuffer(buffer);

		return 0;
	}

	// unsigned int osg::Camera::getReadBuffer() const
	static int _bind_getReadBuffer(lua_State *L) {
		if (!_lg_typecheck_getReadBuffer(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Camera::getReadBuffer() const function, expected prototype:\nunsigned int osg::Camera::getReadBuffer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Camera::getReadBuffer() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getReadBuffer();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Camera::attach(osg::Camera::BufferComponent buffer, unsigned int internalFormat)
	static int _bind_attach_overload_1(lua_State *L) {
		if (!_lg_typecheck_attach_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::attach(osg::Camera::BufferComponent buffer, unsigned int internalFormat) function, expected prototype:\nvoid osg::Camera::attach(osg::Camera::BufferComponent buffer, unsigned int internalFormat)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera::BufferComponent buffer=(osg::Camera::BufferComponent)lua_tointeger(L,2);
		unsigned int internalFormat=(unsigned int)lua_tointeger(L,3);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::attach(osg::Camera::BufferComponent, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->attach(buffer, internalFormat);

		return 0;
	}

	// void osg::Camera::attach(osg::Camera::BufferComponent buffer, osg::Texture * texture, unsigned int level = 0, unsigned int face = 0, bool mipMapGeneration = false, unsigned int multisampleSamples = 0, unsigned int multisampleColorSamples = 0)
	static int _bind_attach_overload_2(lua_State *L) {
		if (!_lg_typecheck_attach_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::attach(osg::Camera::BufferComponent buffer, osg::Texture * texture, unsigned int level = 0, unsigned int face = 0, bool mipMapGeneration = false, unsigned int multisampleSamples = 0, unsigned int multisampleColorSamples = 0) function, expected prototype:\nvoid osg::Camera::attach(osg::Camera::BufferComponent buffer, osg::Texture * texture, unsigned int level = 0, unsigned int face = 0, bool mipMapGeneration = false, unsigned int multisampleSamples = 0, unsigned int multisampleColorSamples = 0)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Camera::BufferComponent buffer=(osg::Camera::BufferComponent)lua_tointeger(L,2);
		osg::Texture* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,3));
		unsigned int level=luatop>3 ? (unsigned int)lua_tointeger(L,4) : (unsigned int)0;
		unsigned int face=luatop>4 ? (unsigned int)lua_tointeger(L,5) : (unsigned int)0;
		bool mipMapGeneration=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;
		unsigned int multisampleSamples=luatop>6 ? (unsigned int)lua_tointeger(L,7) : (unsigned int)0;
		unsigned int multisampleColorSamples=luatop>7 ? (unsigned int)lua_tointeger(L,8) : (unsigned int)0;

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::attach(osg::Camera::BufferComponent, osg::Texture *, unsigned int, unsigned int, bool, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->attach(buffer, texture, level, face, mipMapGeneration, multisampleSamples, multisampleColorSamples);

		return 0;
	}

	// void osg::Camera::attach(osg::Camera::BufferComponent buffer, osg::Image * image, unsigned int multisampleSamples = 0, unsigned int multisampleColorSamples = 0)
	static int _bind_attach_overload_3(lua_State *L) {
		if (!_lg_typecheck_attach_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::attach(osg::Camera::BufferComponent buffer, osg::Image * image, unsigned int multisampleSamples = 0, unsigned int multisampleColorSamples = 0) function, expected prototype:\nvoid osg::Camera::attach(osg::Camera::BufferComponent buffer, osg::Image * image, unsigned int multisampleSamples = 0, unsigned int multisampleColorSamples = 0)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Camera::BufferComponent buffer=(osg::Camera::BufferComponent)lua_tointeger(L,2);
		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,3));
		unsigned int multisampleSamples=luatop>3 ? (unsigned int)lua_tointeger(L,4) : (unsigned int)0;
		unsigned int multisampleColorSamples=luatop>4 ? (unsigned int)lua_tointeger(L,5) : (unsigned int)0;

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::attach(osg::Camera::BufferComponent, osg::Image *, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->attach(buffer, image, multisampleSamples, multisampleColorSamples);

		return 0;
	}

	// Overload binder for osg::Camera::attach
	static int _bind_attach(lua_State *L) {
		if (_lg_typecheck_attach_overload_1(L)) return _bind_attach_overload_1(L);
		if (_lg_typecheck_attach_overload_2(L)) return _bind_attach_overload_2(L);
		if (_lg_typecheck_attach_overload_3(L)) return _bind_attach_overload_3(L);

		luaL_error(L, "error in function attach, cannot match any of the overloads for function attach:\n  attach(osg::Camera::BufferComponent, unsigned int)\n  attach(osg::Camera::BufferComponent, osg::Texture *, unsigned int, unsigned int, bool, unsigned int, unsigned int)\n  attach(osg::Camera::BufferComponent, osg::Image *, unsigned int, unsigned int)\n");
		return 0;
	}

	// void osg::Camera::detach(osg::Camera::BufferComponent buffer)
	static int _bind_detach(lua_State *L) {
		if (!_lg_typecheck_detach(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::detach(osg::Camera::BufferComponent buffer) function, expected prototype:\nvoid osg::Camera::detach(osg::Camera::BufferComponent buffer)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera::BufferComponent buffer=(osg::Camera::BufferComponent)lua_tointeger(L,2);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::detach(osg::Camera::BufferComponent). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->detach(buffer);

		return 0;
	}

	// osg::Camera::BufferAttachmentMap & osg::Camera::getBufferAttachmentMap()
	static int _bind_getBufferAttachmentMap_overload_1(lua_State *L) {
		if (!_lg_typecheck_getBufferAttachmentMap_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera::BufferAttachmentMap & osg::Camera::getBufferAttachmentMap() function, expected prototype:\nosg::Camera::BufferAttachmentMap & osg::Camera::getBufferAttachmentMap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera::BufferAttachmentMap & osg::Camera::getBufferAttachmentMap(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera::BufferAttachmentMap* lret = &self->getBufferAttachmentMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera::BufferAttachmentMap >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera::BufferAttachmentMap & osg::Camera::getBufferAttachmentMap() const
	static int _bind_getBufferAttachmentMap_overload_2(lua_State *L) {
		if (!_lg_typecheck_getBufferAttachmentMap_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera::BufferAttachmentMap & osg::Camera::getBufferAttachmentMap() const function, expected prototype:\nconst osg::Camera::BufferAttachmentMap & osg::Camera::getBufferAttachmentMap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera::BufferAttachmentMap & osg::Camera::getBufferAttachmentMap() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera::BufferAttachmentMap* lret = &self->getBufferAttachmentMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera::BufferAttachmentMap >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::getBufferAttachmentMap
	static int _bind_getBufferAttachmentMap(lua_State *L) {
		if (_lg_typecheck_getBufferAttachmentMap_overload_1(L)) return _bind_getBufferAttachmentMap_overload_1(L);
		if (_lg_typecheck_getBufferAttachmentMap_overload_2(L)) return _bind_getBufferAttachmentMap_overload_2(L);

		luaL_error(L, "error in function getBufferAttachmentMap, cannot match any of the overloads for function getBufferAttachmentMap:\n  getBufferAttachmentMap()\n  getBufferAttachmentMap()\n");
		return 0;
	}

	// void osg::Camera::setImplicitBufferAttachmentMask(int renderMask = osg::DisplaySettings::DEFAULT_IMPLICIT_BUFFER_ATTACHMENT, int resolveMask = osg::DisplaySettings::DEFAULT_IMPLICIT_BUFFER_ATTACHMENT)
	static int _bind_setImplicitBufferAttachmentMask(lua_State *L) {
		if (!_lg_typecheck_setImplicitBufferAttachmentMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setImplicitBufferAttachmentMask(int renderMask = osg::DisplaySettings::DEFAULT_IMPLICIT_BUFFER_ATTACHMENT, int resolveMask = osg::DisplaySettings::DEFAULT_IMPLICIT_BUFFER_ATTACHMENT) function, expected prototype:\nvoid osg::Camera::setImplicitBufferAttachmentMask(int renderMask = osg::DisplaySettings::DEFAULT_IMPLICIT_BUFFER_ATTACHMENT, int resolveMask = osg::DisplaySettings::DEFAULT_IMPLICIT_BUFFER_ATTACHMENT)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int renderMask=luatop>1 ? (int)lua_tointeger(L,2) : (int)osg::DisplaySettings::DEFAULT_IMPLICIT_BUFFER_ATTACHMENT;
		int resolveMask=luatop>2 ? (int)lua_tointeger(L,3) : (int)osg::DisplaySettings::DEFAULT_IMPLICIT_BUFFER_ATTACHMENT;

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setImplicitBufferAttachmentMask(int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setImplicitBufferAttachmentMask(renderMask, resolveMask);

		return 0;
	}

	// void osg::Camera::setImplicitBufferAttachmentRenderMask(int implicitBufferAttachmentRenderMask)
	static int _bind_setImplicitBufferAttachmentRenderMask(lua_State *L) {
		if (!_lg_typecheck_setImplicitBufferAttachmentRenderMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setImplicitBufferAttachmentRenderMask(int implicitBufferAttachmentRenderMask) function, expected prototype:\nvoid osg::Camera::setImplicitBufferAttachmentRenderMask(int implicitBufferAttachmentRenderMask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int implicitBufferAttachmentRenderMask=(int)lua_tointeger(L,2);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setImplicitBufferAttachmentRenderMask(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setImplicitBufferAttachmentRenderMask(implicitBufferAttachmentRenderMask);

		return 0;
	}

	// void osg::Camera::setImplicitBufferAttachmentResolveMask(int implicitBufferAttachmentResolveMask)
	static int _bind_setImplicitBufferAttachmentResolveMask(lua_State *L) {
		if (!_lg_typecheck_setImplicitBufferAttachmentResolveMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setImplicitBufferAttachmentResolveMask(int implicitBufferAttachmentResolveMask) function, expected prototype:\nvoid osg::Camera::setImplicitBufferAttachmentResolveMask(int implicitBufferAttachmentResolveMask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int implicitBufferAttachmentResolveMask=(int)lua_tointeger(L,2);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setImplicitBufferAttachmentResolveMask(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setImplicitBufferAttachmentResolveMask(implicitBufferAttachmentResolveMask);

		return 0;
	}

	// int osg::Camera::getImplicitBufferAttachmentRenderMask(bool effectiveMask = false) const
	static int _bind_getImplicitBufferAttachmentRenderMask(lua_State *L) {
		if (!_lg_typecheck_getImplicitBufferAttachmentRenderMask(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Camera::getImplicitBufferAttachmentRenderMask(bool effectiveMask = false) const function, expected prototype:\nint osg::Camera::getImplicitBufferAttachmentRenderMask(bool effectiveMask = false) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool effectiveMask=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Camera::getImplicitBufferAttachmentRenderMask(bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getImplicitBufferAttachmentRenderMask(effectiveMask);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Camera::getImplicitBufferAttachmentResolveMask(bool effectiveMask = false) const
	static int _bind_getImplicitBufferAttachmentResolveMask(lua_State *L) {
		if (!_lg_typecheck_getImplicitBufferAttachmentResolveMask(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Camera::getImplicitBufferAttachmentResolveMask(bool effectiveMask = false) const function, expected prototype:\nint osg::Camera::getImplicitBufferAttachmentResolveMask(bool effectiveMask = false) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool effectiveMask=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Camera::getImplicitBufferAttachmentResolveMask(bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getImplicitBufferAttachmentResolveMask(effectiveMask);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Camera::createCameraThread()
	static int _bind_createCameraThread(lua_State *L) {
		if (!_lg_typecheck_createCameraThread(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::createCameraThread() function, expected prototype:\nvoid osg::Camera::createCameraThread()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::createCameraThread(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->createCameraThread();

		return 0;
	}

	// void osg::Camera::setCameraThread(osg::OperationThread * gt)
	static int _bind_setCameraThread(lua_State *L) {
		if (!_lg_typecheck_setCameraThread(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setCameraThread(osg::OperationThread * gt) function, expected prototype:\nvoid osg::Camera::setCameraThread(osg::OperationThread * gt)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::OperationThread* gt=(Luna< osg::Referenced >::checkSubType< osg::OperationThread >(L,2));

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setCameraThread(osg::OperationThread *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCameraThread(gt);

		return 0;
	}

	// osg::OperationThread * osg::Camera::getCameraThread()
	static int _bind_getCameraThread_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCameraThread_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::OperationThread * osg::Camera::getCameraThread() function, expected prototype:\nosg::OperationThread * osg::Camera::getCameraThread()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::OperationThread * osg::Camera::getCameraThread(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::OperationThread * lret = self->getCameraThread();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::OperationThread >::push(L,lret,false);

		return 1;
	}

	// const osg::OperationThread * osg::Camera::getCameraThread() const
	static int _bind_getCameraThread_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCameraThread_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::OperationThread * osg::Camera::getCameraThread() const function, expected prototype:\nconst osg::OperationThread * osg::Camera::getCameraThread() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::OperationThread * osg::Camera::getCameraThread() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::OperationThread * lret = self->getCameraThread();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::OperationThread >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::getCameraThread
	static int _bind_getCameraThread(lua_State *L) {
		if (_lg_typecheck_getCameraThread_overload_1(L)) return _bind_getCameraThread_overload_1(L);
		if (_lg_typecheck_getCameraThread_overload_2(L)) return _bind_getCameraThread_overload_2(L);

		luaL_error(L, "error in function getCameraThread, cannot match any of the overloads for function getCameraThread:\n  getCameraThread()\n  getCameraThread()\n");
		return 0;
	}

	// void osg::Camera::setGraphicsContext(osg::GraphicsContext * context)
	static int _bind_setGraphicsContext(lua_State *L) {
		if (!_lg_typecheck_setGraphicsContext(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setGraphicsContext(osg::GraphicsContext * context) function, expected prototype:\nvoid osg::Camera::setGraphicsContext(osg::GraphicsContext * context)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GraphicsContext* context=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,2));

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setGraphicsContext(osg::GraphicsContext *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setGraphicsContext(context);

		return 0;
	}

	// osg::GraphicsContext * osg::Camera::getGraphicsContext()
	static int _bind_getGraphicsContext_overload_1(lua_State *L) {
		if (!_lg_typecheck_getGraphicsContext_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext * osg::Camera::getGraphicsContext() function, expected prototype:\nosg::GraphicsContext * osg::Camera::getGraphicsContext()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::GraphicsContext * osg::Camera::getGraphicsContext(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::GraphicsContext * lret = self->getGraphicsContext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext >::push(L,lret,false);

		return 1;
	}

	// const osg::GraphicsContext * osg::Camera::getGraphicsContext() const
	static int _bind_getGraphicsContext_overload_2(lua_State *L) {
		if (!_lg_typecheck_getGraphicsContext_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::GraphicsContext * osg::Camera::getGraphicsContext() const function, expected prototype:\nconst osg::GraphicsContext * osg::Camera::getGraphicsContext() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::GraphicsContext * osg::Camera::getGraphicsContext() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::GraphicsContext * lret = self->getGraphicsContext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::getGraphicsContext
	static int _bind_getGraphicsContext(lua_State *L) {
		if (_lg_typecheck_getGraphicsContext_overload_1(L)) return _bind_getGraphicsContext_overload_1(L);
		if (_lg_typecheck_getGraphicsContext_overload_2(L)) return _bind_getGraphicsContext_overload_2(L);

		luaL_error(L, "error in function getGraphicsContext, cannot match any of the overloads for function getGraphicsContext:\n  getGraphicsContext()\n  getGraphicsContext()\n");
		return 0;
	}

	// void osg::Camera::setRenderer(osg::GraphicsOperation * rc)
	static int _bind_setRenderer(lua_State *L) {
		if (!_lg_typecheck_setRenderer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setRenderer(osg::GraphicsOperation * rc) function, expected prototype:\nvoid osg::Camera::setRenderer(osg::GraphicsOperation * rc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GraphicsOperation* rc=(Luna< osg::Referenced >::checkSubType< osg::GraphicsOperation >(L,2));

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setRenderer(osg::GraphicsOperation *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRenderer(rc);

		return 0;
	}

	// osg::GraphicsOperation * osg::Camera::getRenderer()
	static int _bind_getRenderer_overload_1(lua_State *L) {
		if (!_lg_typecheck_getRenderer_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::GraphicsOperation * osg::Camera::getRenderer() function, expected prototype:\nosg::GraphicsOperation * osg::Camera::getRenderer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::GraphicsOperation * osg::Camera::getRenderer(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::GraphicsOperation * lret = self->getRenderer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsOperation >::push(L,lret,false);

		return 1;
	}

	// const osg::GraphicsOperation * osg::Camera::getRenderer() const
	static int _bind_getRenderer_overload_2(lua_State *L) {
		if (!_lg_typecheck_getRenderer_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::GraphicsOperation * osg::Camera::getRenderer() const function, expected prototype:\nconst osg::GraphicsOperation * osg::Camera::getRenderer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::GraphicsOperation * osg::Camera::getRenderer() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::GraphicsOperation * lret = self->getRenderer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsOperation >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::getRenderer
	static int _bind_getRenderer(lua_State *L) {
		if (_lg_typecheck_getRenderer_overload_1(L)) return _bind_getRenderer_overload_1(L);
		if (_lg_typecheck_getRenderer_overload_2(L)) return _bind_getRenderer_overload_2(L);

		luaL_error(L, "error in function getRenderer, cannot match any of the overloads for function getRenderer:\n  getRenderer()\n  getRenderer()\n");
		return 0;
	}

	// void osg::Camera::setRenderingCache(osg::Object * rc)
	static int _bind_setRenderingCache(lua_State *L) {
		if (!_lg_typecheck_setRenderingCache(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setRenderingCache(osg::Object * rc) function, expected prototype:\nvoid osg::Camera::setRenderingCache(osg::Object * rc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Object* rc=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setRenderingCache(osg::Object *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRenderingCache(rc);

		return 0;
	}

	// osg::Object * osg::Camera::getRenderingCache()
	static int _bind_getRenderingCache_overload_1(lua_State *L) {
		if (!_lg_typecheck_getRenderingCache_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Camera::getRenderingCache() function, expected prototype:\nosg::Object * osg::Camera::getRenderingCache()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Camera::getRenderingCache(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->getRenderingCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// const osg::Object * osg::Camera::getRenderingCache() const
	static int _bind_getRenderingCache_overload_2(lua_State *L) {
		if (!_lg_typecheck_getRenderingCache_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Object * osg::Camera::getRenderingCache() const function, expected prototype:\nconst osg::Object * osg::Camera::getRenderingCache() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Object * osg::Camera::getRenderingCache() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Object * lret = self->getRenderingCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::getRenderingCache
	static int _bind_getRenderingCache(lua_State *L) {
		if (_lg_typecheck_getRenderingCache_overload_1(L)) return _bind_getRenderingCache_overload_1(L);
		if (_lg_typecheck_getRenderingCache_overload_2(L)) return _bind_getRenderingCache_overload_2(L);

		luaL_error(L, "error in function getRenderingCache, cannot match any of the overloads for function getRenderingCache:\n  getRenderingCache()\n  getRenderingCache()\n");
		return 0;
	}

	// void osg::Camera::setInitialDrawCallback(osg::Camera::DrawCallback * cb)
	static int _bind_setInitialDrawCallback(lua_State *L) {
		if (!_lg_typecheck_setInitialDrawCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setInitialDrawCallback(osg::Camera::DrawCallback * cb) function, expected prototype:\nvoid osg::Camera::setInitialDrawCallback(osg::Camera::DrawCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera::DrawCallback* cb=(Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,2));

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setInitialDrawCallback(osg::Camera::DrawCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setInitialDrawCallback(cb);

		return 0;
	}

	// osg::Camera::DrawCallback * osg::Camera::getInitialDrawCallback()
	static int _bind_getInitialDrawCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getInitialDrawCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera::DrawCallback * osg::Camera::getInitialDrawCallback() function, expected prototype:\nosg::Camera::DrawCallback * osg::Camera::getInitialDrawCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera::DrawCallback * osg::Camera::getInitialDrawCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera::DrawCallback * lret = self->getInitialDrawCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera::DrawCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera::DrawCallback * osg::Camera::getInitialDrawCallback() const
	static int _bind_getInitialDrawCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getInitialDrawCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera::DrawCallback * osg::Camera::getInitialDrawCallback() const function, expected prototype:\nconst osg::Camera::DrawCallback * osg::Camera::getInitialDrawCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera::DrawCallback * osg::Camera::getInitialDrawCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera::DrawCallback * lret = self->getInitialDrawCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera::DrawCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::getInitialDrawCallback
	static int _bind_getInitialDrawCallback(lua_State *L) {
		if (_lg_typecheck_getInitialDrawCallback_overload_1(L)) return _bind_getInitialDrawCallback_overload_1(L);
		if (_lg_typecheck_getInitialDrawCallback_overload_2(L)) return _bind_getInitialDrawCallback_overload_2(L);

		luaL_error(L, "error in function getInitialDrawCallback, cannot match any of the overloads for function getInitialDrawCallback:\n  getInitialDrawCallback()\n  getInitialDrawCallback()\n");
		return 0;
	}

	// void osg::Camera::setPreDrawCallback(osg::Camera::DrawCallback * cb)
	static int _bind_setPreDrawCallback(lua_State *L) {
		if (!_lg_typecheck_setPreDrawCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setPreDrawCallback(osg::Camera::DrawCallback * cb) function, expected prototype:\nvoid osg::Camera::setPreDrawCallback(osg::Camera::DrawCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera::DrawCallback* cb=(Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,2));

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setPreDrawCallback(osg::Camera::DrawCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPreDrawCallback(cb);

		return 0;
	}

	// osg::Camera::DrawCallback * osg::Camera::getPreDrawCallback()
	static int _bind_getPreDrawCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getPreDrawCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera::DrawCallback * osg::Camera::getPreDrawCallback() function, expected prototype:\nosg::Camera::DrawCallback * osg::Camera::getPreDrawCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera::DrawCallback * osg::Camera::getPreDrawCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera::DrawCallback * lret = self->getPreDrawCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera::DrawCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera::DrawCallback * osg::Camera::getPreDrawCallback() const
	static int _bind_getPreDrawCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getPreDrawCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera::DrawCallback * osg::Camera::getPreDrawCallback() const function, expected prototype:\nconst osg::Camera::DrawCallback * osg::Camera::getPreDrawCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera::DrawCallback * osg::Camera::getPreDrawCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera::DrawCallback * lret = self->getPreDrawCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera::DrawCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::getPreDrawCallback
	static int _bind_getPreDrawCallback(lua_State *L) {
		if (_lg_typecheck_getPreDrawCallback_overload_1(L)) return _bind_getPreDrawCallback_overload_1(L);
		if (_lg_typecheck_getPreDrawCallback_overload_2(L)) return _bind_getPreDrawCallback_overload_2(L);

		luaL_error(L, "error in function getPreDrawCallback, cannot match any of the overloads for function getPreDrawCallback:\n  getPreDrawCallback()\n  getPreDrawCallback()\n");
		return 0;
	}

	// void osg::Camera::setPostDrawCallback(osg::Camera::DrawCallback * cb)
	static int _bind_setPostDrawCallback(lua_State *L) {
		if (!_lg_typecheck_setPostDrawCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setPostDrawCallback(osg::Camera::DrawCallback * cb) function, expected prototype:\nvoid osg::Camera::setPostDrawCallback(osg::Camera::DrawCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera::DrawCallback* cb=(Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,2));

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setPostDrawCallback(osg::Camera::DrawCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPostDrawCallback(cb);

		return 0;
	}

	// osg::Camera::DrawCallback * osg::Camera::getPostDrawCallback()
	static int _bind_getPostDrawCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getPostDrawCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera::DrawCallback * osg::Camera::getPostDrawCallback() function, expected prototype:\nosg::Camera::DrawCallback * osg::Camera::getPostDrawCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera::DrawCallback * osg::Camera::getPostDrawCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera::DrawCallback * lret = self->getPostDrawCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera::DrawCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera::DrawCallback * osg::Camera::getPostDrawCallback() const
	static int _bind_getPostDrawCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getPostDrawCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera::DrawCallback * osg::Camera::getPostDrawCallback() const function, expected prototype:\nconst osg::Camera::DrawCallback * osg::Camera::getPostDrawCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera::DrawCallback * osg::Camera::getPostDrawCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera::DrawCallback * lret = self->getPostDrawCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera::DrawCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::getPostDrawCallback
	static int _bind_getPostDrawCallback(lua_State *L) {
		if (_lg_typecheck_getPostDrawCallback_overload_1(L)) return _bind_getPostDrawCallback_overload_1(L);
		if (_lg_typecheck_getPostDrawCallback_overload_2(L)) return _bind_getPostDrawCallback_overload_2(L);

		luaL_error(L, "error in function getPostDrawCallback, cannot match any of the overloads for function getPostDrawCallback:\n  getPostDrawCallback()\n  getPostDrawCallback()\n");
		return 0;
	}

	// void osg::Camera::setFinalDrawCallback(osg::Camera::DrawCallback * cb)
	static int _bind_setFinalDrawCallback(lua_State *L) {
		if (!_lg_typecheck_setFinalDrawCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::setFinalDrawCallback(osg::Camera::DrawCallback * cb) function, expected prototype:\nvoid osg::Camera::setFinalDrawCallback(osg::Camera::DrawCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera::DrawCallback* cb=(Luna< osg::Referenced >::checkSubType< osg::Camera::DrawCallback >(L,2));

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::setFinalDrawCallback(osg::Camera::DrawCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFinalDrawCallback(cb);

		return 0;
	}

	// osg::Camera::DrawCallback * osg::Camera::getFinalDrawCallback()
	static int _bind_getFinalDrawCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFinalDrawCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera::DrawCallback * osg::Camera::getFinalDrawCallback() function, expected prototype:\nosg::Camera::DrawCallback * osg::Camera::getFinalDrawCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera::DrawCallback * osg::Camera::getFinalDrawCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera::DrawCallback * lret = self->getFinalDrawCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera::DrawCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera::DrawCallback * osg::Camera::getFinalDrawCallback() const
	static int _bind_getFinalDrawCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFinalDrawCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera::DrawCallback * osg::Camera::getFinalDrawCallback() const function, expected prototype:\nconst osg::Camera::DrawCallback * osg::Camera::getFinalDrawCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera::DrawCallback * osg::Camera::getFinalDrawCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera::DrawCallback * lret = self->getFinalDrawCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera::DrawCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::getFinalDrawCallback
	static int _bind_getFinalDrawCallback(lua_State *L) {
		if (_lg_typecheck_getFinalDrawCallback_overload_1(L)) return _bind_getFinalDrawCallback_overload_1(L);
		if (_lg_typecheck_getFinalDrawCallback_overload_2(L)) return _bind_getFinalDrawCallback_overload_2(L);

		luaL_error(L, "error in function getFinalDrawCallback, cannot match any of the overloads for function getFinalDrawCallback:\n  getFinalDrawCallback()\n  getFinalDrawCallback()\n");
		return 0;
	}

	// void osg::Camera::releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Camera::releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseGLObjects(_arg1);

		return 0;
	}

	// bool osg::Camera::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const
	static int _bind_computeLocalToWorldMatrix(lua_State *L) {
		if (!_lg_typecheck_computeLocalToWorldMatrix(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Camera::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const function, expected prototype:\nbool osg::Camera::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::Camera::computeLocalToWorldMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* _arg2=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Camera::computeLocalToWorldMatrix(osg::Matrixd &, osg::NodeVisitor *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->computeLocalToWorldMatrix(matrix, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Camera::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const
	static int _bind_computeWorldToLocalMatrix(lua_State *L) {
		if (!_lg_typecheck_computeWorldToLocalMatrix(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Camera::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const function, expected prototype:\nbool osg::Camera::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::Camera::computeWorldToLocalMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* _arg2=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Camera::computeWorldToLocalMatrix(osg::Matrixd &, osg::NodeVisitor *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->computeWorldToLocalMatrix(matrix, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Camera::inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)
	static int _bind_inheritCullSettings(lua_State *L) {
		if (!_lg_typecheck_inheritCullSettings(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask) function, expected prototype:\nvoid osg::Camera::inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)\nClass arguments details:\narg 1 ID = 31435107\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CullSettings* settings_ptr=(Luna< osg::CullSettings >::check(L,2));
		if( !settings_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg settings in osg::Camera::inheritCullSettings function");
		}
		const osg::CullSettings & settings=*settings_ptr;
		unsigned int inheritanceMask=(unsigned int)lua_tointeger(L,3);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::inheritCullSettings(const osg::CullSettings &, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->inheritCullSettings(settings, inheritanceMask);

		return 0;
	}

	// const unsigned int osg::Camera::FACE_CONTROLLED_BY_GEOMETRY_SHADER()
	static int _bind_get_FACE_CONTROLLED_BY_GEOMETRY_SHADER(lua_State *L) {
		if (!_lg_typecheck_get_FACE_CONTROLLED_BY_GEOMETRY_SHADER(L)) {
			luaL_error(L, "luna typecheck failed in const unsigned int osg::Camera::FACE_CONTROLLED_BY_GEOMETRY_SHADER() function, expected prototype:\nconst unsigned int osg::Camera::FACE_CONTROLLED_BY_GEOMETRY_SHADER()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const unsigned int osg::Camera::FACE_CONTROLLED_BY_GEOMETRY_SHADER(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const unsigned int lret = self->FACE_CONTROLLED_BY_GEOMETRY_SHADER;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Camera::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Camera::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Camera::setName(name);

		return 0;
	}

	// void osg::Camera::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::base_computeDataVariance() function, expected prototype:\nvoid osg::Camera::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Camera::computeDataVariance();

		return 0;
	}

	// void osg::Camera::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Camera::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Camera::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Camera::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Camera::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Camera::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Camera::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Camera::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Camera::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Camera::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Camera::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Camera::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Camera::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Switch * osg::Camera::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osg::Camera::base_asSwitch() function, expected prototype:\nosg::Switch * osg::Camera::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osg::Camera::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->Camera::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osg::Camera::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osg::Camera::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osg::Camera::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osg::Camera::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->Camera::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osg::Camera::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osg::Camera::base_asGeode() function, expected prototype:\nosg::Geode * osg::Camera::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osg::Camera::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->Camera::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osg::Camera::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osg::Camera::base_asGeode() const function, expected prototype:\nconst osg::Geode * osg::Camera::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osg::Camera::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->Camera::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osg::Camera::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Camera::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Camera::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Camera::ascend(nv);

		return 0;
	}

	// osg::Group * osg::Camera::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osg::Camera::base_asGroup() function, expected prototype:\nosg::Group * osg::Camera::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osg::Camera::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->Camera::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osg::Camera::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osg::Camera::base_asGroup() const function, expected prototype:\nconst osg::Group * osg::Camera::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osg::Camera::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->Camera::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// void osg::Camera::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::Camera::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Camera::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Camera::traverse(_arg1);

		return 0;
	}

	// bool osg::Camera::base_addChild(osg::Node * child)
	static int _bind_base_addChild(lua_State *L) {
		if (!_lg_typecheck_base_addChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Camera::base_addChild(osg::Node * child) function, expected prototype:\nbool osg::Camera::base_addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Camera::base_addChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Camera::addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Camera::base_insertChild(unsigned int index, osg::Node * child)
	static int _bind_base_insertChild(lua_State *L) {
		if (!_lg_typecheck_base_insertChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Camera::base_insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osg::Camera::base_insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Camera::base_insertChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Camera::insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Camera::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_base_removeChildren(lua_State *L) {
		if (!_lg_typecheck_base_removeChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Camera::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osg::Camera::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Camera::base_removeChildren(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Camera::removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Camera::base_replaceChild(osg::Node * origChild, osg::Node * newChild)
	static int _bind_base_replaceChild(lua_State *L) {
		if (!_lg_typecheck_base_replaceChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Camera::base_replaceChild(osg::Node * origChild, osg::Node * newChild) function, expected prototype:\nbool osg::Camera::base_replaceChild(osg::Node * origChild, osg::Node * newChild)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* origChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::Node* newChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Camera::base_replaceChild(osg::Node *, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Camera::replaceChild(origChild, newChild);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Camera::base_setChild(unsigned int i, osg::Node * node)
	static int _bind_base_setChild(lua_State *L) {
		if (!_lg_typecheck_base_setChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Camera::base_setChild(unsigned int i, osg::Node * node) function, expected prototype:\nbool osg::Camera::base_setChild(unsigned int i, osg::Node * node)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Camera::base_setChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Camera::setChild(i, node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Camera::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Camera::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Camera::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// osg::Transform * osg::Camera::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osg::Camera::base_asTransform() function, expected prototype:\nosg::Transform * osg::Camera::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osg::Camera::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->Camera::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osg::Camera::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osg::Camera::base_asTransform() const function, expected prototype:\nconst osg::Transform * osg::Camera::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osg::Camera::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->Camera::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::MatrixTransform * osg::Camera::base_asMatrixTransform()
	static int _bind_base_asMatrixTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asMatrixTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::MatrixTransform * osg::Camera::base_asMatrixTransform() function, expected prototype:\nosg::MatrixTransform * osg::Camera::base_asMatrixTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::MatrixTransform * osg::Camera::base_asMatrixTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::MatrixTransform * lret = self->Camera::asMatrixTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixTransform >::push(L,lret,false);

		return 1;
	}

	// const osg::MatrixTransform * osg::Camera::base_asMatrixTransform() const
	static int _bind_base_asMatrixTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asMatrixTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::MatrixTransform * osg::Camera::base_asMatrixTransform() const function, expected prototype:\nconst osg::MatrixTransform * osg::Camera::base_asMatrixTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::MatrixTransform * osg::Camera::base_asMatrixTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::MatrixTransform * lret = self->Camera::asMatrixTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::base_asMatrixTransform
	static int _bind_base_asMatrixTransform(lua_State *L) {
		if (_lg_typecheck_base_asMatrixTransform_overload_1(L)) return _bind_base_asMatrixTransform_overload_1(L);
		if (_lg_typecheck_base_asMatrixTransform_overload_2(L)) return _bind_base_asMatrixTransform_overload_2(L);

		luaL_error(L, "error in function base_asMatrixTransform, cannot match any of the overloads for function base_asMatrixTransform:\n  base_asMatrixTransform()\n  base_asMatrixTransform()\n");
		return 0;
	}

	// osg::PositionAttitudeTransform * osg::Camera::base_asPositionAttitudeTransform()
	static int _bind_base_asPositionAttitudeTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asPositionAttitudeTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::PositionAttitudeTransform * osg::Camera::base_asPositionAttitudeTransform() function, expected prototype:\nosg::PositionAttitudeTransform * osg::Camera::base_asPositionAttitudeTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::PositionAttitudeTransform * osg::Camera::base_asPositionAttitudeTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::PositionAttitudeTransform * lret = self->Camera::asPositionAttitudeTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PositionAttitudeTransform >::push(L,lret,false);

		return 1;
	}

	// const osg::PositionAttitudeTransform * osg::Camera::base_asPositionAttitudeTransform() const
	static int _bind_base_asPositionAttitudeTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asPositionAttitudeTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::PositionAttitudeTransform * osg::Camera::base_asPositionAttitudeTransform() const function, expected prototype:\nconst osg::PositionAttitudeTransform * osg::Camera::base_asPositionAttitudeTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::PositionAttitudeTransform * osg::Camera::base_asPositionAttitudeTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::PositionAttitudeTransform * lret = self->Camera::asPositionAttitudeTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PositionAttitudeTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::base_asPositionAttitudeTransform
	static int _bind_base_asPositionAttitudeTransform(lua_State *L) {
		if (_lg_typecheck_base_asPositionAttitudeTransform_overload_1(L)) return _bind_base_asPositionAttitudeTransform_overload_1(L);
		if (_lg_typecheck_base_asPositionAttitudeTransform_overload_2(L)) return _bind_base_asPositionAttitudeTransform_overload_2(L);

		luaL_error(L, "error in function base_asPositionAttitudeTransform, cannot match any of the overloads for function base_asPositionAttitudeTransform:\n  base_asPositionAttitudeTransform()\n  base_asPositionAttitudeTransform()\n");
		return 0;
	}

	// osg::BoundingSphered osg::Camera::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::Camera::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osg::Camera::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::Camera::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->Camera::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// void osg::Camera::base_setDefaults()
	static int _bind_base_setDefaults(lua_State *L) {
		if (!_lg_typecheck_base_setDefaults(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::base_setDefaults() function, expected prototype:\nvoid osg::Camera::base_setDefaults()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::base_setDefaults(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Camera::setDefaults();

		return 0;
	}

	// osg::Object * osg::Camera::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Camera::base_cloneType() const function, expected prototype:\nosg::Object * osg::Camera::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Camera::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Camera::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Camera::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Camera::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::Camera::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Camera::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Camera::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Camera::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Camera::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Camera::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Camera::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Camera::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Camera::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Camera::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Camera::base_className() const function, expected prototype:\nconst char * osg::Camera::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Camera::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Camera::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Camera::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Camera::base_libraryName() const function, expected prototype:\nconst char * osg::Camera::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Camera::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Camera::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Camera::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Camera::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Camera::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Camera::accept(nv);

		return 0;
	}

	// osg::Camera * osg::Camera::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osg::Camera::base_asCamera() function, expected prototype:\nosg::Camera * osg::Camera::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osg::Camera::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->Camera::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osg::Camera::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osg::Camera::base_asCamera() const function, expected prototype:\nconst osg::Camera * osg::Camera::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osg::Camera::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->Camera::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Camera::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// void osg::Camera::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Camera::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Camera::releaseGLObjects(_arg1);

		return 0;
	}

	// bool osg::Camera::base_computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const
	static int _bind_base_computeLocalToWorldMatrix(lua_State *L) {
		if (!_lg_typecheck_base_computeLocalToWorldMatrix(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Camera::base_computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const function, expected prototype:\nbool osg::Camera::base_computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::Camera::base_computeLocalToWorldMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* _arg2=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Camera::base_computeLocalToWorldMatrix(osg::Matrixd &, osg::NodeVisitor *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Camera::computeLocalToWorldMatrix(matrix, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Camera::base_computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const
	static int _bind_base_computeWorldToLocalMatrix(lua_State *L) {
		if (!_lg_typecheck_base_computeWorldToLocalMatrix(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Camera::base_computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const function, expected prototype:\nbool osg::Camera::base_computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::Camera::base_computeWorldToLocalMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* _arg2=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Camera::base_computeWorldToLocalMatrix(osg::Matrixd &, osg::NodeVisitor *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Camera::computeWorldToLocalMatrix(matrix, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Camera::base_inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)
	static int _bind_base_inheritCullSettings(lua_State *L) {
		if (!_lg_typecheck_base_inheritCullSettings(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Camera::base_inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask) function, expected prototype:\nvoid osg::Camera::base_inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)\nClass arguments details:\narg 1 ID = 31435107\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CullSettings* settings_ptr=(Luna< osg::CullSettings >::check(L,2));
		if( !settings_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg settings in osg::Camera::base_inheritCullSettings function");
		}
		const osg::CullSettings & settings=*settings_ptr;
		unsigned int inheritanceMask=(unsigned int)lua_tointeger(L,3);

		osg::Camera* self=Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Camera::base_inheritCullSettings(const osg::CullSettings &, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Camera::inheritCullSettings(settings, inheritanceMask);

		return 0;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_osg_CullSettings(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_osg_CullSettings(lua_State *L) {
		if (!_lg_typecheck_baseCast_osg_CullSettings(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_osg_CullSettings function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		osg::CullSettings* res = luna_caster<osg::Referenced,osg::CullSettings>::cast(self); // dynamic_cast<osg::CullSettings*>(self);
		if(!res)
			return 0;
			
		Luna< osg::CullSettings >::push(L,res,false);
		return 1;

	}

};

osg::Camera* LunaTraits< osg::Camera >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Camera::_bind_ctor(L);
}

void LunaTraits< osg::Camera >::_bind_dtor(osg::Camera* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Camera >::className[] = "Camera";
const char LunaTraits< osg::Camera >::fullName[] = "osg::Camera";
const char LunaTraits< osg::Camera >::moduleName[] = "osg";
const char* LunaTraits< osg::Camera >::parents[] = {"osg.Transform", "osg.CullSettings", 0};
const int LunaTraits< osg::Camera >::hash = 14097547;
const int LunaTraits< osg::Camera >::uniqueIDs[] = {50169651, 31435107,0};

luna_RegType LunaTraits< osg::Camera >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Camera::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Camera::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Camera::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_Camera::_bind_className},
	{"libraryName", &luna_wrapper_osg_Camera::_bind_libraryName},
	{"accept", &luna_wrapper_osg_Camera::_bind_accept},
	{"asCamera", &luna_wrapper_osg_Camera::_bind_asCamera},
	{"setView", &luna_wrapper_osg_Camera::_bind_setView},
	{"getView", &luna_wrapper_osg_Camera::_bind_getView},
	{"setStats", &luna_wrapper_osg_Camera::_bind_setStats},
	{"getStats", &luna_wrapper_osg_Camera::_bind_getStats},
	{"setAllowEventFocus", &luna_wrapper_osg_Camera::_bind_setAllowEventFocus},
	{"getAllowEventFocus", &luna_wrapper_osg_Camera::_bind_getAllowEventFocus},
	{"setDisplaySettings", &luna_wrapper_osg_Camera::_bind_setDisplaySettings},
	{"getDisplaySettings", &luna_wrapper_osg_Camera::_bind_getDisplaySettings},
	{"setClearMask", &luna_wrapper_osg_Camera::_bind_setClearMask},
	{"getClearMask", &luna_wrapper_osg_Camera::_bind_getClearMask},
	{"setClearColor", &luna_wrapper_osg_Camera::_bind_setClearColor},
	{"getClearColor", &luna_wrapper_osg_Camera::_bind_getClearColor},
	{"setClearAccum", &luna_wrapper_osg_Camera::_bind_setClearAccum},
	{"getClearAccum", &luna_wrapper_osg_Camera::_bind_getClearAccum},
	{"setClearDepth", &luna_wrapper_osg_Camera::_bind_setClearDepth},
	{"getClearDepth", &luna_wrapper_osg_Camera::_bind_getClearDepth},
	{"setClearStencil", &luna_wrapper_osg_Camera::_bind_setClearStencil},
	{"getClearStencil", &luna_wrapper_osg_Camera::_bind_getClearStencil},
	{"setColorMask", &luna_wrapper_osg_Camera::_bind_setColorMask},
	{"getColorMask", &luna_wrapper_osg_Camera::_bind_getColorMask},
	{"setViewport", &luna_wrapper_osg_Camera::_bind_setViewport},
	{"getViewport", &luna_wrapper_osg_Camera::_bind_getViewport},
	{"setTransformOrder", &luna_wrapper_osg_Camera::_bind_setTransformOrder},
	{"getTransformOrder", &luna_wrapper_osg_Camera::_bind_getTransformOrder},
	{"setProjectionResizePolicy", &luna_wrapper_osg_Camera::_bind_setProjectionResizePolicy},
	{"getProjectionResizePolicy", &luna_wrapper_osg_Camera::_bind_getProjectionResizePolicy},
	{"setProjectionMatrix", &luna_wrapper_osg_Camera::_bind_setProjectionMatrix},
	{"setProjectionMatrixAsOrtho", &luna_wrapper_osg_Camera::_bind_setProjectionMatrixAsOrtho},
	{"setProjectionMatrixAsOrtho2D", &luna_wrapper_osg_Camera::_bind_setProjectionMatrixAsOrtho2D},
	{"setProjectionMatrixAsFrustum", &luna_wrapper_osg_Camera::_bind_setProjectionMatrixAsFrustum},
	{"setProjectionMatrixAsPerspective", &luna_wrapper_osg_Camera::_bind_setProjectionMatrixAsPerspective},
	{"getProjectionMatrix", &luna_wrapper_osg_Camera::_bind_getProjectionMatrix},
	{"getProjectionMatrixAsOrtho", &luna_wrapper_osg_Camera::_bind_getProjectionMatrixAsOrtho},
	{"getProjectionMatrixAsFrustum", &luna_wrapper_osg_Camera::_bind_getProjectionMatrixAsFrustum},
	{"getProjectionMatrixAsPerspective", &luna_wrapper_osg_Camera::_bind_getProjectionMatrixAsPerspective},
	{"setViewMatrix", &luna_wrapper_osg_Camera::_bind_setViewMatrix},
	{"getViewMatrix", &luna_wrapper_osg_Camera::_bind_getViewMatrix},
	{"setViewMatrixAsLookAt", &luna_wrapper_osg_Camera::_bind_setViewMatrixAsLookAt},
	{"getViewMatrixAsLookAt", &luna_wrapper_osg_Camera::_bind_getViewMatrixAsLookAt},
	{"getInverseViewMatrix", &luna_wrapper_osg_Camera::_bind_getInverseViewMatrix},
	{"setRenderOrder", &luna_wrapper_osg_Camera::_bind_setRenderOrder},
	{"getRenderOrder", &luna_wrapper_osg_Camera::_bind_getRenderOrder},
	{"getRenderOrderNum", &luna_wrapper_osg_Camera::_bind_getRenderOrderNum},
	{"isRenderToTextureCamera", &luna_wrapper_osg_Camera::_bind_isRenderToTextureCamera},
	{"setRenderTargetImplementation", &luna_wrapper_osg_Camera::_bind_setRenderTargetImplementation},
	{"getRenderTargetImplementation", &luna_wrapper_osg_Camera::_bind_getRenderTargetImplementation},
	{"getRenderTargetFallback", &luna_wrapper_osg_Camera::_bind_getRenderTargetFallback},
	{"setDrawBuffer", &luna_wrapper_osg_Camera::_bind_setDrawBuffer},
	{"getDrawBuffer", &luna_wrapper_osg_Camera::_bind_getDrawBuffer},
	{"setReadBuffer", &luna_wrapper_osg_Camera::_bind_setReadBuffer},
	{"getReadBuffer", &luna_wrapper_osg_Camera::_bind_getReadBuffer},
	{"attach", &luna_wrapper_osg_Camera::_bind_attach},
	{"detach", &luna_wrapper_osg_Camera::_bind_detach},
	{"getBufferAttachmentMap", &luna_wrapper_osg_Camera::_bind_getBufferAttachmentMap},
	{"setImplicitBufferAttachmentMask", &luna_wrapper_osg_Camera::_bind_setImplicitBufferAttachmentMask},
	{"setImplicitBufferAttachmentRenderMask", &luna_wrapper_osg_Camera::_bind_setImplicitBufferAttachmentRenderMask},
	{"setImplicitBufferAttachmentResolveMask", &luna_wrapper_osg_Camera::_bind_setImplicitBufferAttachmentResolveMask},
	{"getImplicitBufferAttachmentRenderMask", &luna_wrapper_osg_Camera::_bind_getImplicitBufferAttachmentRenderMask},
	{"getImplicitBufferAttachmentResolveMask", &luna_wrapper_osg_Camera::_bind_getImplicitBufferAttachmentResolveMask},
	{"createCameraThread", &luna_wrapper_osg_Camera::_bind_createCameraThread},
	{"setCameraThread", &luna_wrapper_osg_Camera::_bind_setCameraThread},
	{"getCameraThread", &luna_wrapper_osg_Camera::_bind_getCameraThread},
	{"setGraphicsContext", &luna_wrapper_osg_Camera::_bind_setGraphicsContext},
	{"getGraphicsContext", &luna_wrapper_osg_Camera::_bind_getGraphicsContext},
	{"setRenderer", &luna_wrapper_osg_Camera::_bind_setRenderer},
	{"getRenderer", &luna_wrapper_osg_Camera::_bind_getRenderer},
	{"setRenderingCache", &luna_wrapper_osg_Camera::_bind_setRenderingCache},
	{"getRenderingCache", &luna_wrapper_osg_Camera::_bind_getRenderingCache},
	{"setInitialDrawCallback", &luna_wrapper_osg_Camera::_bind_setInitialDrawCallback},
	{"getInitialDrawCallback", &luna_wrapper_osg_Camera::_bind_getInitialDrawCallback},
	{"setPreDrawCallback", &luna_wrapper_osg_Camera::_bind_setPreDrawCallback},
	{"getPreDrawCallback", &luna_wrapper_osg_Camera::_bind_getPreDrawCallback},
	{"setPostDrawCallback", &luna_wrapper_osg_Camera::_bind_setPostDrawCallback},
	{"getPostDrawCallback", &luna_wrapper_osg_Camera::_bind_getPostDrawCallback},
	{"setFinalDrawCallback", &luna_wrapper_osg_Camera::_bind_setFinalDrawCallback},
	{"getFinalDrawCallback", &luna_wrapper_osg_Camera::_bind_getFinalDrawCallback},
	{"releaseGLObjects", &luna_wrapper_osg_Camera::_bind_releaseGLObjects},
	{"computeLocalToWorldMatrix", &luna_wrapper_osg_Camera::_bind_computeLocalToWorldMatrix},
	{"computeWorldToLocalMatrix", &luna_wrapper_osg_Camera::_bind_computeWorldToLocalMatrix},
	{"inheritCullSettings", &luna_wrapper_osg_Camera::_bind_inheritCullSettings},
	{"get_FACE_CONTROLLED_BY_GEOMETRY_SHADER", &luna_wrapper_osg_Camera::_bind_get_FACE_CONTROLLED_BY_GEOMETRY_SHADER},
	{"base_setName", &luna_wrapper_osg_Camera::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Camera::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Camera::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Camera::_bind_base_getUserData},
	{"base_asSwitch", &luna_wrapper_osg_Camera::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osg_Camera::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osg_Camera::_bind_base_ascend},
	{"base_asGroup", &luna_wrapper_osg_Camera::_bind_base_asGroup},
	{"base_traverse", &luna_wrapper_osg_Camera::_bind_base_traverse},
	{"base_addChild", &luna_wrapper_osg_Camera::_bind_base_addChild},
	{"base_insertChild", &luna_wrapper_osg_Camera::_bind_base_insertChild},
	{"base_removeChildren", &luna_wrapper_osg_Camera::_bind_base_removeChildren},
	{"base_replaceChild", &luna_wrapper_osg_Camera::_bind_base_replaceChild},
	{"base_setChild", &luna_wrapper_osg_Camera::_bind_base_setChild},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Camera::_bind_base_setThreadSafeRefUnref},
	{"base_asTransform", &luna_wrapper_osg_Camera::_bind_base_asTransform},
	{"base_asMatrixTransform", &luna_wrapper_osg_Camera::_bind_base_asMatrixTransform},
	{"base_asPositionAttitudeTransform", &luna_wrapper_osg_Camera::_bind_base_asPositionAttitudeTransform},
	{"base_computeBound", &luna_wrapper_osg_Camera::_bind_base_computeBound},
	{"base_setDefaults", &luna_wrapper_osg_Camera::_bind_base_setDefaults},
	{"base_cloneType", &luna_wrapper_osg_Camera::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Camera::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Camera::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osg_Camera::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osg_Camera::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osg_Camera::_bind_base_accept},
	{"base_asCamera", &luna_wrapper_osg_Camera::_bind_base_asCamera},
	{"base_releaseGLObjects", &luna_wrapper_osg_Camera::_bind_base_releaseGLObjects},
	{"base_computeLocalToWorldMatrix", &luna_wrapper_osg_Camera::_bind_base_computeLocalToWorldMatrix},
	{"base_computeWorldToLocalMatrix", &luna_wrapper_osg_Camera::_bind_base_computeWorldToLocalMatrix},
	{"base_inheritCullSettings", &luna_wrapper_osg_Camera::_bind_base_inheritCullSettings},
	{"fromVoid", &luna_wrapper_osg_Camera::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Camera::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Camera::_bind_getTable},
	{"asCullSettings", &luna_wrapper_osg_Camera::_bind_baseCast_osg_CullSettings},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Camera >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Camera::_cast_from_Referenced},
	{"osg::CullSettings", &luna_wrapper_osg_Camera::_cast_from_CullSettings},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Camera >::enumValues[] = {
	{"PRE_MULTIPLY", osg::Camera::PRE_MULTIPLY},
	{"POST_MULTIPLY", osg::Camera::POST_MULTIPLY},
	{"FIXED", osg::Camera::FIXED},
	{"HORIZONTAL", osg::Camera::HORIZONTAL},
	{"VERTICAL", osg::Camera::VERTICAL},
	{"PRE_RENDER", osg::Camera::PRE_RENDER},
	{"NESTED_RENDER", osg::Camera::NESTED_RENDER},
	{"POST_RENDER", osg::Camera::POST_RENDER},
	{"FRAME_BUFFER_OBJECT", osg::Camera::FRAME_BUFFER_OBJECT},
	{"PIXEL_BUFFER_RTT", osg::Camera::PIXEL_BUFFER_RTT},
	{"PIXEL_BUFFER", osg::Camera::PIXEL_BUFFER},
	{"FRAME_BUFFER", osg::Camera::FRAME_BUFFER},
	{"SEPERATE_WINDOW", osg::Camera::SEPERATE_WINDOW},
	{"DEPTH_BUFFER", osg::Camera::DEPTH_BUFFER},
	{"STENCIL_BUFFER", osg::Camera::STENCIL_BUFFER},
	{"PACKED_DEPTH_STENCIL_BUFFER", osg::Camera::PACKED_DEPTH_STENCIL_BUFFER},
	{"COLOR_BUFFER", osg::Camera::COLOR_BUFFER},
	{"COLOR_BUFFER0", osg::Camera::COLOR_BUFFER0},
	{"COLOR_BUFFER1", osg::Camera::COLOR_BUFFER1},
	{"COLOR_BUFFER2", osg::Camera::COLOR_BUFFER2},
	{"COLOR_BUFFER3", osg::Camera::COLOR_BUFFER3},
	{"COLOR_BUFFER4", osg::Camera::COLOR_BUFFER4},
	{"COLOR_BUFFER5", osg::Camera::COLOR_BUFFER5},
	{"COLOR_BUFFER6", osg::Camera::COLOR_BUFFER6},
	{"COLOR_BUFFER7", osg::Camera::COLOR_BUFFER7},
	{"COLOR_BUFFER8", osg::Camera::COLOR_BUFFER8},
	{"COLOR_BUFFER9", osg::Camera::COLOR_BUFFER9},
	{"COLOR_BUFFER10", osg::Camera::COLOR_BUFFER10},
	{"COLOR_BUFFER11", osg::Camera::COLOR_BUFFER11},
	{"COLOR_BUFFER12", osg::Camera::COLOR_BUFFER12},
	{"COLOR_BUFFER13", osg::Camera::COLOR_BUFFER13},
	{"COLOR_BUFFER14", osg::Camera::COLOR_BUFFER14},
	{"COLOR_BUFFER15", osg::Camera::COLOR_BUFFER15},
	{"IMPLICIT_DEPTH_BUFFER_ATTACHMENT", osg::Camera::IMPLICIT_DEPTH_BUFFER_ATTACHMENT},
	{"IMPLICIT_STENCIL_BUFFER_ATTACHMENT", osg::Camera::IMPLICIT_STENCIL_BUFFER_ATTACHMENT},
	{"IMPLICIT_COLOR_BUFFER_ATTACHMENT", osg::Camera::IMPLICIT_COLOR_BUFFER_ATTACHMENT},
	{"USE_DISPLAY_SETTINGS_MASK", osg::Camera::USE_DISPLAY_SETTINGS_MASK},
	{0,0}
};


