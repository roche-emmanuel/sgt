#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Drawable.h>

class luna_wrapper_osg_Drawable {
public:
	typedef Luna< osg::Drawable > luna_t;

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

		osg::Drawable* self= (osg::Drawable*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Drawable >::push(L,self,false);
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
		//osg::Drawable* ptr= dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,1));
		osg::Drawable* ptr= luna_caster< osg::Referenced, osg::Drawable >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Drawable >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
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

	inline static bool _lg_typecheck_asGeometry_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asGeometry_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParents_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParents_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParent_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParent_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumParents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWorldMatrices(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStateSet_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStateSet_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOrCreateStateSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInitialBound(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41227270) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInitialBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_dirtyBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setComputeBoundingBoxCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getComputeBoundingBoxCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getComputeBoundingBoxCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setShape(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getShape_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getShape_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSupportsDisplayList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSupportsDisplayList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseDisplayList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseDisplayList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDisplayList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUseVertexBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseVertexBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_dirtyDisplayList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGLObjectSizeHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_draw(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_compileGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUpdateCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUpdateCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUpdateCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_requiresUpdateTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEventCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEventCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEventCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_requiresEventTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCullCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCullCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCullCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDrawCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDrawCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDrawCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_generateDisplayList(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMinimumNumberOfDisplayListsToRetainInCache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMinimumNumberOfDisplayListsToRetainInCache(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_deleteDisplayList(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flushAllDeletedDisplayLists(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_discardAllDeletedDisplayLists(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flushDeletedDisplayLists(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_s_numberDrawablesReusedLastInLastFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_s_numberNewDrawablesInLastFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_s_numberDeletedDrawablesInLastFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_s_numberDrawablesReusedLastInLastFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_s_numberNewDrawablesInLastFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_s_numberDeletedDrawablesInLastFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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

	inline static bool _lg_typecheck_base_asGeometry_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGeometry_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUseVertexBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_dirtyDisplayList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getGLObjectSizeHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_compileGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setUpdateCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setEventCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setCullCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setDrawCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Drawable::Drawable(lua_Table * data)
	static osg::Drawable* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Drawable::Drawable(lua_Table * data) function, expected prototype:\nosg::Drawable::Drawable(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Drawable(L,NULL);
	}

	// osg::Drawable::Drawable(lua_Table * data, const osg::Drawable & drawable, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Drawable* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Drawable::Drawable(lua_Table * data, const osg::Drawable & drawable, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Drawable::Drawable(lua_Table * data, const osg::Drawable & drawable, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Drawable* drawable_ptr=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));
		if( !drawable_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg drawable in osg::Drawable::Drawable function");
		}
		const osg::Drawable & drawable=*drawable_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Drawable::Drawable function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Drawable(L,NULL, drawable, copyop);
	}

	// Overload binder for osg::Drawable::Drawable
	static osg::Drawable* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Drawable, cannot match any of the overloads for function Drawable:\n  Drawable(lua_Table *)\n  Drawable(lua_Table *, const osg::Drawable &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// bool osg::Drawable::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Drawable::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Drawable::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Drawable::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Drawable::libraryName() const function, expected prototype:\nconst char * osg::Drawable::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Drawable::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Drawable::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Drawable::className() const function, expected prototype:\nconst char * osg::Drawable::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Drawable::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Geometry * osg::Drawable::asGeometry()
	static int _bind_asGeometry_overload_1(lua_State *L) {
		if (!_lg_typecheck_asGeometry_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry * osg::Drawable::asGeometry() function, expected prototype:\nosg::Geometry * osg::Drawable::asGeometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry * osg::Drawable::asGeometry(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry * lret = self->asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry * osg::Drawable::asGeometry() const
	static int _bind_asGeometry_overload_2(lua_State *L) {
		if (!_lg_typecheck_asGeometry_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry * osg::Drawable::asGeometry() const function, expected prototype:\nconst osg::Geometry * osg::Drawable::asGeometry() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry * osg::Drawable::asGeometry() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry * lret = self->asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Drawable::asGeometry
	static int _bind_asGeometry(lua_State *L) {
		if (_lg_typecheck_asGeometry_overload_1(L)) return _bind_asGeometry_overload_1(L);
		if (_lg_typecheck_asGeometry_overload_2(L)) return _bind_asGeometry_overload_2(L);

		luaL_error(L, "error in function asGeometry, cannot match any of the overloads for function asGeometry:\n  asGeometry()\n  asGeometry()\n");
		return 0;
	}

	// void osg::Drawable::computeDataVariance()
	static int _bind_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::computeDataVariance() function, expected prototype:\nvoid osg::Drawable::computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->computeDataVariance();

		return 0;
	}

	// const osg::Drawable::ParentList & osg::Drawable::getParents() const
	static int _bind_getParents_overload_1(lua_State *L) {
		if (!_lg_typecheck_getParents_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Drawable::ParentList & osg::Drawable::getParents() const function, expected prototype:\nconst osg::Drawable::ParentList & osg::Drawable::getParents() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Drawable::ParentList & osg::Drawable::getParents() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Drawable::ParentList* lret = &self->getParents();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable::ParentList >::push(L,lret,false);

		return 1;
	}

	// osg::Drawable::ParentList osg::Drawable::getParents()
	static int _bind_getParents_overload_2(lua_State *L) {
		if (!_lg_typecheck_getParents_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Drawable::ParentList osg::Drawable::getParents() function, expected prototype:\nosg::Drawable::ParentList osg::Drawable::getParents()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Drawable::ParentList osg::Drawable::getParents(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Drawable::ParentList stack_lret = self->getParents();
		osg::Drawable::ParentList* lret = new osg::Drawable::ParentList(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable::ParentList >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osg::Drawable::getParents
	static int _bind_getParents(lua_State *L) {
		if (_lg_typecheck_getParents_overload_1(L)) return _bind_getParents_overload_1(L);
		if (_lg_typecheck_getParents_overload_2(L)) return _bind_getParents_overload_2(L);

		luaL_error(L, "error in function getParents, cannot match any of the overloads for function getParents:\n  getParents()\n  getParents()\n");
		return 0;
	}

	// osg::Node * osg::Drawable::getParent(unsigned int i)
	static int _bind_getParent_overload_1(lua_State *L) {
		if (!_lg_typecheck_getParent_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node * osg::Drawable::getParent(unsigned int i) function, expected prototype:\nosg::Node * osg::Drawable::getParent(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node * osg::Drawable::getParent(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node * lret = self->getParent(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// const osg::Node * osg::Drawable::getParent(unsigned int i) const
	static int _bind_getParent_overload_2(lua_State *L) {
		if (!_lg_typecheck_getParent_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Node * osg::Drawable::getParent(unsigned int i) const function, expected prototype:\nconst osg::Node * osg::Drawable::getParent(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Node * osg::Drawable::getParent(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Node * lret = self->getParent(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Drawable::getParent
	static int _bind_getParent(lua_State *L) {
		if (_lg_typecheck_getParent_overload_1(L)) return _bind_getParent_overload_1(L);
		if (_lg_typecheck_getParent_overload_2(L)) return _bind_getParent_overload_2(L);

		luaL_error(L, "error in function getParent, cannot match any of the overloads for function getParent:\n  getParent(unsigned int)\n  getParent(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::Drawable::getNumParents() const
	static int _bind_getNumParents(lua_State *L) {
		if (!_lg_typecheck_getNumParents(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Drawable::getNumParents() const function, expected prototype:\nunsigned int osg::Drawable::getNumParents() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Drawable::getNumParents() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumParents();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::MatrixList osg::Drawable::getWorldMatrices(const osg::Node * haltTraversalAtNode = 0) const
	static int _bind_getWorldMatrices(lua_State *L) {
		if (!_lg_typecheck_getWorldMatrices(L)) {
			luaL_error(L, "luna typecheck failed in osg::MatrixList osg::Drawable::getWorldMatrices(const osg::Node * haltTraversalAtNode = 0) const function, expected prototype:\nosg::MatrixList osg::Drawable::getWorldMatrices(const osg::Node * haltTraversalAtNode = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Node* haltTraversalAtNode=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::Node >(L,2)) : (const osg::Node*)0;

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::MatrixList osg::Drawable::getWorldMatrices(const osg::Node *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::MatrixList stack_lret = self->getWorldMatrices(haltTraversalAtNode);
		osg::MatrixList* lret = new osg::MatrixList(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixList >::push(L,lret,true);

		return 1;
	}

	// void osg::Drawable::setStateSet(osg::StateSet * stateset)
	static int _bind_setStateSet(lua_State *L) {
		if (!_lg_typecheck_setStateSet(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::setStateSet(osg::StateSet * stateset) function, expected prototype:\nvoid osg::Drawable::setStateSet(osg::StateSet * stateset)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* stateset=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::setStateSet(osg::StateSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStateSet(stateset);

		return 0;
	}

	// osg::StateSet * osg::Drawable::getStateSet()
	static int _bind_getStateSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_getStateSet_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet * osg::Drawable::getStateSet() function, expected prototype:\nosg::StateSet * osg::Drawable::getStateSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet * osg::Drawable::getStateSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet * lret = self->getStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet * osg::Drawable::getStateSet() const
	static int _bind_getStateSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_getStateSet_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateSet * osg::Drawable::getStateSet() const function, expected prototype:\nconst osg::StateSet * osg::Drawable::getStateSet() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateSet * osg::Drawable::getStateSet() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet * lret = self->getStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Drawable::getStateSet
	static int _bind_getStateSet(lua_State *L) {
		if (_lg_typecheck_getStateSet_overload_1(L)) return _bind_getStateSet_overload_1(L);
		if (_lg_typecheck_getStateSet_overload_2(L)) return _bind_getStateSet_overload_2(L);

		luaL_error(L, "error in function getStateSet, cannot match any of the overloads for function getStateSet:\n  getStateSet()\n  getStateSet()\n");
		return 0;
	}

	// osg::StateSet * osg::Drawable::getOrCreateStateSet()
	static int _bind_getOrCreateStateSet(lua_State *L) {
		if (!_lg_typecheck_getOrCreateStateSet(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet * osg::Drawable::getOrCreateStateSet() function, expected prototype:\nosg::StateSet * osg::Drawable::getOrCreateStateSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet * osg::Drawable::getOrCreateStateSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet * lret = self->getOrCreateStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// void osg::Drawable::setInitialBound(const osg::BoundingBoxd & bbox)
	static int _bind_setInitialBound(lua_State *L) {
		if (!_lg_typecheck_setInitialBound(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::setInitialBound(const osg::BoundingBoxd & bbox) function, expected prototype:\nvoid osg::Drawable::setInitialBound(const osg::BoundingBoxd & bbox)\nClass arguments details:\narg 1 ID = 82744897\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BoundingBoxd* bbox_ptr=(Luna< osg::BoundingBoxImpl< osg::Vec3d > >::checkSubType< osg::BoundingBoxd >(L,2));
		if( !bbox_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bbox in osg::Drawable::setInitialBound function");
		}
		const osg::BoundingBoxd & bbox=*bbox_ptr;

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::setInitialBound(const osg::BoundingBoxd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setInitialBound(bbox);

		return 0;
	}

	// const osg::BoundingBoxd & osg::Drawable::getInitialBound() const
	static int _bind_getInitialBound(lua_State *L) {
		if (!_lg_typecheck_getInitialBound(L)) {
			luaL_error(L, "luna typecheck failed in const osg::BoundingBoxd & osg::Drawable::getInitialBound() const function, expected prototype:\nconst osg::BoundingBoxd & osg::Drawable::getInitialBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::BoundingBoxd & osg::Drawable::getInitialBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::BoundingBoxd* lret = &self->getInitialBound();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,false);

		return 1;
	}

	// void osg::Drawable::dirtyBound()
	static int _bind_dirtyBound(lua_State *L) {
		if (!_lg_typecheck_dirtyBound(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::dirtyBound() function, expected prototype:\nvoid osg::Drawable::dirtyBound()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::dirtyBound(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dirtyBound();

		return 0;
	}

	// const osg::BoundingBoxd & osg::Drawable::getBound() const
	static int _bind_getBound(lua_State *L) {
		if (!_lg_typecheck_getBound(L)) {
			luaL_error(L, "luna typecheck failed in const osg::BoundingBoxd & osg::Drawable::getBound() const function, expected prototype:\nconst osg::BoundingBoxd & osg::Drawable::getBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::BoundingBoxd & osg::Drawable::getBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::BoundingBoxd* lret = &self->getBound();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,false);

		return 1;
	}

	// osg::BoundingBoxd osg::Drawable::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxd osg::Drawable::computeBound() const function, expected prototype:\nosg::BoundingBoxd osg::Drawable::computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBoxd osg::Drawable::computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingBoxd stack_lret = self->computeBound();
		osg::BoundingBoxd* lret = new osg::BoundingBoxd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,true);

		return 1;
	}

	// void osg::Drawable::setComputeBoundingBoxCallback(osg::Drawable::ComputeBoundingBoxCallback * callback)
	static int _bind_setComputeBoundingBoxCallback(lua_State *L) {
		if (!_lg_typecheck_setComputeBoundingBoxCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::setComputeBoundingBoxCallback(osg::Drawable::ComputeBoundingBoxCallback * callback) function, expected prototype:\nvoid osg::Drawable::setComputeBoundingBoxCallback(osg::Drawable::ComputeBoundingBoxCallback * callback)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::ComputeBoundingBoxCallback* callback=(Luna< osg::Referenced >::checkSubType< osg::Drawable::ComputeBoundingBoxCallback >(L,2));

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::setComputeBoundingBoxCallback(osg::Drawable::ComputeBoundingBoxCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setComputeBoundingBoxCallback(callback);

		return 0;
	}

	// osg::Drawable::ComputeBoundingBoxCallback * osg::Drawable::getComputeBoundingBoxCallback()
	static int _bind_getComputeBoundingBoxCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getComputeBoundingBoxCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Drawable::ComputeBoundingBoxCallback * osg::Drawable::getComputeBoundingBoxCallback() function, expected prototype:\nosg::Drawable::ComputeBoundingBoxCallback * osg::Drawable::getComputeBoundingBoxCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Drawable::ComputeBoundingBoxCallback * osg::Drawable::getComputeBoundingBoxCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Drawable::ComputeBoundingBoxCallback * lret = self->getComputeBoundingBoxCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable::ComputeBoundingBoxCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::Drawable::ComputeBoundingBoxCallback * osg::Drawable::getComputeBoundingBoxCallback() const
	static int _bind_getComputeBoundingBoxCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getComputeBoundingBoxCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Drawable::ComputeBoundingBoxCallback * osg::Drawable::getComputeBoundingBoxCallback() const function, expected prototype:\nconst osg::Drawable::ComputeBoundingBoxCallback * osg::Drawable::getComputeBoundingBoxCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Drawable::ComputeBoundingBoxCallback * osg::Drawable::getComputeBoundingBoxCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Drawable::ComputeBoundingBoxCallback * lret = self->getComputeBoundingBoxCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable::ComputeBoundingBoxCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Drawable::getComputeBoundingBoxCallback
	static int _bind_getComputeBoundingBoxCallback(lua_State *L) {
		if (_lg_typecheck_getComputeBoundingBoxCallback_overload_1(L)) return _bind_getComputeBoundingBoxCallback_overload_1(L);
		if (_lg_typecheck_getComputeBoundingBoxCallback_overload_2(L)) return _bind_getComputeBoundingBoxCallback_overload_2(L);

		luaL_error(L, "error in function getComputeBoundingBoxCallback, cannot match any of the overloads for function getComputeBoundingBoxCallback:\n  getComputeBoundingBoxCallback()\n  getComputeBoundingBoxCallback()\n");
		return 0;
	}

	// void osg::Drawable::setShape(osg::Shape * shape)
	static int _bind_setShape(lua_State *L) {
		if (!_lg_typecheck_setShape(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::setShape(osg::Shape * shape) function, expected prototype:\nvoid osg::Drawable::setShape(osg::Shape * shape)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Shape* shape=(Luna< osg::Referenced >::checkSubType< osg::Shape >(L,2));

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::setShape(osg::Shape *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setShape(shape);

		return 0;
	}

	// osg::Shape * osg::Drawable::getShape()
	static int _bind_getShape_overload_1(lua_State *L) {
		if (!_lg_typecheck_getShape_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Shape * osg::Drawable::getShape() function, expected prototype:\nosg::Shape * osg::Drawable::getShape()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Shape * osg::Drawable::getShape(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Shape * lret = self->getShape();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shape >::push(L,lret,false);

		return 1;
	}

	// const osg::Shape * osg::Drawable::getShape() const
	static int _bind_getShape_overload_2(lua_State *L) {
		if (!_lg_typecheck_getShape_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Shape * osg::Drawable::getShape() const function, expected prototype:\nconst osg::Shape * osg::Drawable::getShape() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Shape * osg::Drawable::getShape() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Shape * lret = self->getShape();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shape >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Drawable::getShape
	static int _bind_getShape(lua_State *L) {
		if (_lg_typecheck_getShape_overload_1(L)) return _bind_getShape_overload_1(L);
		if (_lg_typecheck_getShape_overload_2(L)) return _bind_getShape_overload_2(L);

		luaL_error(L, "error in function getShape, cannot match any of the overloads for function getShape:\n  getShape()\n  getShape()\n");
		return 0;
	}

	// void osg::Drawable::setSupportsDisplayList(bool flag)
	static int _bind_setSupportsDisplayList(lua_State *L) {
		if (!_lg_typecheck_setSupportsDisplayList(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::setSupportsDisplayList(bool flag) function, expected prototype:\nvoid osg::Drawable::setSupportsDisplayList(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::setSupportsDisplayList(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSupportsDisplayList(flag);

		return 0;
	}

	// bool osg::Drawable::getSupportsDisplayList() const
	static int _bind_getSupportsDisplayList(lua_State *L) {
		if (!_lg_typecheck_getSupportsDisplayList(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::getSupportsDisplayList() const function, expected prototype:\nbool osg::Drawable::getSupportsDisplayList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Drawable::getSupportsDisplayList() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getSupportsDisplayList();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Drawable::setUseDisplayList(bool flag)
	static int _bind_setUseDisplayList(lua_State *L) {
		if (!_lg_typecheck_setUseDisplayList(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::setUseDisplayList(bool flag) function, expected prototype:\nvoid osg::Drawable::setUseDisplayList(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::setUseDisplayList(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUseDisplayList(flag);

		return 0;
	}

	// bool osg::Drawable::getUseDisplayList() const
	static int _bind_getUseDisplayList(lua_State *L) {
		if (!_lg_typecheck_getUseDisplayList(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::getUseDisplayList() const function, expected prototype:\nbool osg::Drawable::getUseDisplayList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Drawable::getUseDisplayList() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getUseDisplayList();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int & osg::Drawable::getDisplayList(unsigned int contextID) const
	static int _bind_getDisplayList(lua_State *L) {
		if (!_lg_typecheck_getDisplayList(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int & osg::Drawable::getDisplayList(unsigned int contextID) const function, expected prototype:\nunsigned int & osg::Drawable::getDisplayList(unsigned int contextID) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int & osg::Drawable::getDisplayList(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int & lret = self->getDisplayList(contextID);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Drawable::setUseVertexBufferObjects(bool flag)
	static int _bind_setUseVertexBufferObjects(lua_State *L) {
		if (!_lg_typecheck_setUseVertexBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::setUseVertexBufferObjects(bool flag) function, expected prototype:\nvoid osg::Drawable::setUseVertexBufferObjects(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::setUseVertexBufferObjects(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUseVertexBufferObjects(flag);

		return 0;
	}

	// bool osg::Drawable::getUseVertexBufferObjects() const
	static int _bind_getUseVertexBufferObjects(lua_State *L) {
		if (!_lg_typecheck_getUseVertexBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::getUseVertexBufferObjects() const function, expected prototype:\nbool osg::Drawable::getUseVertexBufferObjects() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Drawable::getUseVertexBufferObjects() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getUseVertexBufferObjects();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Drawable::dirtyDisplayList()
	static int _bind_dirtyDisplayList(lua_State *L) {
		if (!_lg_typecheck_dirtyDisplayList(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::dirtyDisplayList() function, expected prototype:\nvoid osg::Drawable::dirtyDisplayList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::dirtyDisplayList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dirtyDisplayList();

		return 0;
	}

	// unsigned int osg::Drawable::getGLObjectSizeHint() const
	static int _bind_getGLObjectSizeHint(lua_State *L) {
		if (!_lg_typecheck_getGLObjectSizeHint(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Drawable::getGLObjectSizeHint() const function, expected prototype:\nunsigned int osg::Drawable::getGLObjectSizeHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Drawable::getGLObjectSizeHint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getGLObjectSizeHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Drawable::draw(osg::RenderInfo & renderInfo) const
	static int _bind_draw(lua_State *L) {
		if (!_lg_typecheck_draw(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::draw(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osg::Drawable::draw(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::Drawable::draw function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::draw(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->draw(renderInfo);

		return 0;
	}

	// void osg::Drawable::compileGLObjects(osg::RenderInfo & renderInfo) const
	static int _bind_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::compileGLObjects(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osg::Drawable::compileGLObjects(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::Drawable::compileGLObjects function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::compileGLObjects(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->compileGLObjects(renderInfo);

		return 0;
	}

	// void osg::Drawable::setThreadSafeRefUnref(bool threadSafe)
	static int _bind_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Drawable::setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Drawable::releaseGLObjects(osg::State * state = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::Drawable::releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseGLObjects(state);

		return 0;
	}

	// void osg::Drawable::setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	static int _bind_setUpdateCallback(lua_State *L) {
		if (!_lg_typecheck_setUpdateCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::setUpdateCallback(osg::Drawable::UpdateCallback * ac) function, expected prototype:\nvoid osg::Drawable::setUpdateCallback(osg::Drawable::UpdateCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::UpdateCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,2));

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::setUpdateCallback(osg::Drawable::UpdateCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUpdateCallback(ac);

		return 0;
	}

	// osg::Drawable::UpdateCallback * osg::Drawable::getUpdateCallback()
	static int _bind_getUpdateCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUpdateCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Drawable::UpdateCallback * osg::Drawable::getUpdateCallback() function, expected prototype:\nosg::Drawable::UpdateCallback * osg::Drawable::getUpdateCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Drawable::UpdateCallback * osg::Drawable::getUpdateCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Drawable::UpdateCallback * lret = self->getUpdateCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable::UpdateCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::Drawable::UpdateCallback * osg::Drawable::getUpdateCallback() const
	static int _bind_getUpdateCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUpdateCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Drawable::UpdateCallback * osg::Drawable::getUpdateCallback() const function, expected prototype:\nconst osg::Drawable::UpdateCallback * osg::Drawable::getUpdateCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Drawable::UpdateCallback * osg::Drawable::getUpdateCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Drawable::UpdateCallback * lret = self->getUpdateCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable::UpdateCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Drawable::getUpdateCallback
	static int _bind_getUpdateCallback(lua_State *L) {
		if (_lg_typecheck_getUpdateCallback_overload_1(L)) return _bind_getUpdateCallback_overload_1(L);
		if (_lg_typecheck_getUpdateCallback_overload_2(L)) return _bind_getUpdateCallback_overload_2(L);

		luaL_error(L, "error in function getUpdateCallback, cannot match any of the overloads for function getUpdateCallback:\n  getUpdateCallback()\n  getUpdateCallback()\n");
		return 0;
	}

	// bool osg::Drawable::requiresUpdateTraversal() const
	static int _bind_requiresUpdateTraversal(lua_State *L) {
		if (!_lg_typecheck_requiresUpdateTraversal(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::requiresUpdateTraversal() const function, expected prototype:\nbool osg::Drawable::requiresUpdateTraversal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Drawable::requiresUpdateTraversal() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->requiresUpdateTraversal();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Drawable::setEventCallback(osg::Drawable::EventCallback * ac)
	static int _bind_setEventCallback(lua_State *L) {
		if (!_lg_typecheck_setEventCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::setEventCallback(osg::Drawable::EventCallback * ac) function, expected prototype:\nvoid osg::Drawable::setEventCallback(osg::Drawable::EventCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::EventCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,2));

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::setEventCallback(osg::Drawable::EventCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEventCallback(ac);

		return 0;
	}

	// osg::Drawable::EventCallback * osg::Drawable::getEventCallback()
	static int _bind_getEventCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getEventCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Drawable::EventCallback * osg::Drawable::getEventCallback() function, expected prototype:\nosg::Drawable::EventCallback * osg::Drawable::getEventCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Drawable::EventCallback * osg::Drawable::getEventCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Drawable::EventCallback * lret = self->getEventCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable::EventCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::Drawable::EventCallback * osg::Drawable::getEventCallback() const
	static int _bind_getEventCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getEventCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Drawable::EventCallback * osg::Drawable::getEventCallback() const function, expected prototype:\nconst osg::Drawable::EventCallback * osg::Drawable::getEventCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Drawable::EventCallback * osg::Drawable::getEventCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Drawable::EventCallback * lret = self->getEventCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable::EventCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Drawable::getEventCallback
	static int _bind_getEventCallback(lua_State *L) {
		if (_lg_typecheck_getEventCallback_overload_1(L)) return _bind_getEventCallback_overload_1(L);
		if (_lg_typecheck_getEventCallback_overload_2(L)) return _bind_getEventCallback_overload_2(L);

		luaL_error(L, "error in function getEventCallback, cannot match any of the overloads for function getEventCallback:\n  getEventCallback()\n  getEventCallback()\n");
		return 0;
	}

	// bool osg::Drawable::requiresEventTraversal() const
	static int _bind_requiresEventTraversal(lua_State *L) {
		if (!_lg_typecheck_requiresEventTraversal(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::requiresEventTraversal() const function, expected prototype:\nbool osg::Drawable::requiresEventTraversal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Drawable::requiresEventTraversal() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->requiresEventTraversal();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Drawable::setCullCallback(osg::Drawable::CullCallback * cc)
	static int _bind_setCullCallback(lua_State *L) {
		if (!_lg_typecheck_setCullCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::setCullCallback(osg::Drawable::CullCallback * cc) function, expected prototype:\nvoid osg::Drawable::setCullCallback(osg::Drawable::CullCallback * cc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::CullCallback* cc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,2));

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::setCullCallback(osg::Drawable::CullCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCullCallback(cc);

		return 0;
	}

	// osg::Drawable::CullCallback * osg::Drawable::getCullCallback()
	static int _bind_getCullCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCullCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Drawable::CullCallback * osg::Drawable::getCullCallback() function, expected prototype:\nosg::Drawable::CullCallback * osg::Drawable::getCullCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Drawable::CullCallback * osg::Drawable::getCullCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Drawable::CullCallback * lret = self->getCullCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable::CullCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::Drawable::CullCallback * osg::Drawable::getCullCallback() const
	static int _bind_getCullCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCullCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Drawable::CullCallback * osg::Drawable::getCullCallback() const function, expected prototype:\nconst osg::Drawable::CullCallback * osg::Drawable::getCullCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Drawable::CullCallback * osg::Drawable::getCullCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Drawable::CullCallback * lret = self->getCullCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable::CullCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Drawable::getCullCallback
	static int _bind_getCullCallback(lua_State *L) {
		if (_lg_typecheck_getCullCallback_overload_1(L)) return _bind_getCullCallback_overload_1(L);
		if (_lg_typecheck_getCullCallback_overload_2(L)) return _bind_getCullCallback_overload_2(L);

		luaL_error(L, "error in function getCullCallback, cannot match any of the overloads for function getCullCallback:\n  getCullCallback()\n  getCullCallback()\n");
		return 0;
	}

	// void osg::Drawable::setDrawCallback(osg::Drawable::DrawCallback * dc)
	static int _bind_setDrawCallback(lua_State *L) {
		if (!_lg_typecheck_setDrawCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::setDrawCallback(osg::Drawable::DrawCallback * dc) function, expected prototype:\nvoid osg::Drawable::setDrawCallback(osg::Drawable::DrawCallback * dc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::DrawCallback* dc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::DrawCallback >(L,2));

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::setDrawCallback(osg::Drawable::DrawCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDrawCallback(dc);

		return 0;
	}

	// osg::Drawable::DrawCallback * osg::Drawable::getDrawCallback()
	static int _bind_getDrawCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDrawCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Drawable::DrawCallback * osg::Drawable::getDrawCallback() function, expected prototype:\nosg::Drawable::DrawCallback * osg::Drawable::getDrawCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Drawable::DrawCallback * osg::Drawable::getDrawCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Drawable::DrawCallback * lret = self->getDrawCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable::DrawCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::Drawable::DrawCallback * osg::Drawable::getDrawCallback() const
	static int _bind_getDrawCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDrawCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Drawable::DrawCallback * osg::Drawable::getDrawCallback() const function, expected prototype:\nconst osg::Drawable::DrawCallback * osg::Drawable::getDrawCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Drawable::DrawCallback * osg::Drawable::getDrawCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Drawable::DrawCallback * lret = self->getDrawCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable::DrawCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Drawable::getDrawCallback
	static int _bind_getDrawCallback(lua_State *L) {
		if (_lg_typecheck_getDrawCallback_overload_1(L)) return _bind_getDrawCallback_overload_1(L);
		if (_lg_typecheck_getDrawCallback_overload_2(L)) return _bind_getDrawCallback_overload_2(L);

		luaL_error(L, "error in function getDrawCallback, cannot match any of the overloads for function getDrawCallback:\n  getDrawCallback()\n  getDrawCallback()\n");
		return 0;
	}

	// void osg::Drawable::drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osg::Drawable::drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::Drawable::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::drawImplementation(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawImplementation(renderInfo);

		return 0;
	}

	// static unsigned int osg::Drawable::generateDisplayList(unsigned int contextID, unsigned int sizeHint = 0)
	static int _bind_generateDisplayList(lua_State *L) {
		if (!_lg_typecheck_generateDisplayList(L)) {
			luaL_error(L, "luna typecheck failed in static unsigned int osg::Drawable::generateDisplayList(unsigned int contextID, unsigned int sizeHint = 0) function, expected prototype:\nstatic unsigned int osg::Drawable::generateDisplayList(unsigned int contextID, unsigned int sizeHint = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		unsigned int sizeHint=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)0;

		unsigned int lret = osg::Drawable::generateDisplayList(contextID, sizeHint);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void osg::Drawable::setMinimumNumberOfDisplayListsToRetainInCache(unsigned int minimum)
	static int _bind_setMinimumNumberOfDisplayListsToRetainInCache(lua_State *L) {
		if (!_lg_typecheck_setMinimumNumberOfDisplayListsToRetainInCache(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::Drawable::setMinimumNumberOfDisplayListsToRetainInCache(unsigned int minimum) function, expected prototype:\nstatic void osg::Drawable::setMinimumNumberOfDisplayListsToRetainInCache(unsigned int minimum)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int minimum=(unsigned int)lua_tointeger(L,1);

		osg::Drawable::setMinimumNumberOfDisplayListsToRetainInCache(minimum);

		return 0;
	}

	// static unsigned int osg::Drawable::getMinimumNumberOfDisplayListsToRetainInCache()
	static int _bind_getMinimumNumberOfDisplayListsToRetainInCache(lua_State *L) {
		if (!_lg_typecheck_getMinimumNumberOfDisplayListsToRetainInCache(L)) {
			luaL_error(L, "luna typecheck failed in static unsigned int osg::Drawable::getMinimumNumberOfDisplayListsToRetainInCache() function, expected prototype:\nstatic unsigned int osg::Drawable::getMinimumNumberOfDisplayListsToRetainInCache()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		unsigned int lret = osg::Drawable::getMinimumNumberOfDisplayListsToRetainInCache();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void osg::Drawable::deleteDisplayList(unsigned int contextID, unsigned int globj, unsigned int sizeHint = 0)
	static int _bind_deleteDisplayList(lua_State *L) {
		if (!_lg_typecheck_deleteDisplayList(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::Drawable::deleteDisplayList(unsigned int contextID, unsigned int globj, unsigned int sizeHint = 0) function, expected prototype:\nstatic void osg::Drawable::deleteDisplayList(unsigned int contextID, unsigned int globj, unsigned int sizeHint = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		unsigned int globj=(unsigned int)lua_tointeger(L,2);
		unsigned int sizeHint=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		osg::Drawable::deleteDisplayList(contextID, globj, sizeHint);

		return 0;
	}

	// static void osg::Drawable::flushAllDeletedDisplayLists(unsigned int contextID)
	static int _bind_flushAllDeletedDisplayLists(lua_State *L) {
		if (!_lg_typecheck_flushAllDeletedDisplayLists(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::Drawable::flushAllDeletedDisplayLists(unsigned int contextID) function, expected prototype:\nstatic void osg::Drawable::flushAllDeletedDisplayLists(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::Drawable::flushAllDeletedDisplayLists(contextID);

		return 0;
	}

	// static void osg::Drawable::discardAllDeletedDisplayLists(unsigned int contextID)
	static int _bind_discardAllDeletedDisplayLists(lua_State *L) {
		if (!_lg_typecheck_discardAllDeletedDisplayLists(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::Drawable::discardAllDeletedDisplayLists(unsigned int contextID) function, expected prototype:\nstatic void osg::Drawable::discardAllDeletedDisplayLists(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::Drawable::discardAllDeletedDisplayLists(contextID);

		return 0;
	}

	// static void osg::Drawable::flushDeletedDisplayLists(unsigned int contextID, double & availableTime)
	static int _bind_flushDeletedDisplayLists(lua_State *L) {
		if (!_lg_typecheck_flushDeletedDisplayLists(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::Drawable::flushDeletedDisplayLists(unsigned int contextID, double & availableTime) function, expected prototype:\nstatic void osg::Drawable::flushDeletedDisplayLists(unsigned int contextID, double & availableTime)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		double availableTime=(double)lua_tonumber(L,2);

		osg::Drawable::flushDeletedDisplayLists(contextID, availableTime);

		lua_pushnumber(L,availableTime);
		return 1;
	}

	// static osg::Drawable::Extensions * osg::Drawable::getExtensions(unsigned int contextID, bool createIfNotInitalized)
	static int _bind_getExtensions(lua_State *L) {
		if (!_lg_typecheck_getExtensions(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Drawable::Extensions * osg::Drawable::getExtensions(unsigned int contextID, bool createIfNotInitalized) function, expected prototype:\nstatic osg::Drawable::Extensions * osg::Drawable::getExtensions(unsigned int contextID, bool createIfNotInitalized)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		bool createIfNotInitalized=(bool)(lua_toboolean(L,2)==1);

		osg::Drawable::Extensions * lret = osg::Drawable::getExtensions(contextID, createIfNotInitalized);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable::Extensions >::push(L,lret,false);

		return 1;
	}

	// static void osg::Drawable::setExtensions(unsigned int contextID, osg::Drawable::Extensions * extensions)
	static int _bind_setExtensions(lua_State *L) {
		if (!_lg_typecheck_setExtensions(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::Drawable::setExtensions(unsigned int contextID, osg::Drawable::Extensions * extensions) function, expected prototype:\nstatic void osg::Drawable::setExtensions(unsigned int contextID, osg::Drawable::Extensions * extensions)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		osg::Drawable::Extensions* extensions=(Luna< osg::Referenced >::checkSubType< osg::Drawable::Extensions >(L,2));

		osg::Drawable::setExtensions(contextID, extensions);

		return 0;
	}

	// unsigned int osg::Drawable::s_numberDrawablesReusedLastInLastFrame()
	static int _bind_get_s_numberDrawablesReusedLastInLastFrame(lua_State *L) {
		if (!_lg_typecheck_get_s_numberDrawablesReusedLastInLastFrame(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Drawable::s_numberDrawablesReusedLastInLastFrame() function, expected prototype:\nunsigned int osg::Drawable::s_numberDrawablesReusedLastInLastFrame()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Drawable::s_numberDrawablesReusedLastInLastFrame(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->s_numberDrawablesReusedLastInLastFrame;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Drawable::s_numberNewDrawablesInLastFrame()
	static int _bind_get_s_numberNewDrawablesInLastFrame(lua_State *L) {
		if (!_lg_typecheck_get_s_numberNewDrawablesInLastFrame(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Drawable::s_numberNewDrawablesInLastFrame() function, expected prototype:\nunsigned int osg::Drawable::s_numberNewDrawablesInLastFrame()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Drawable::s_numberNewDrawablesInLastFrame(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->s_numberNewDrawablesInLastFrame;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Drawable::s_numberDeletedDrawablesInLastFrame()
	static int _bind_get_s_numberDeletedDrawablesInLastFrame(lua_State *L) {
		if (!_lg_typecheck_get_s_numberDeletedDrawablesInLastFrame(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Drawable::s_numberDeletedDrawablesInLastFrame() function, expected prototype:\nunsigned int osg::Drawable::s_numberDeletedDrawablesInLastFrame()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Drawable::s_numberDeletedDrawablesInLastFrame(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->s_numberDeletedDrawablesInLastFrame;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Drawable::s_numberDrawablesReusedLastInLastFrame(unsigned int value)
	static int _bind_set_s_numberDrawablesReusedLastInLastFrame(lua_State *L) {
		if (!_lg_typecheck_set_s_numberDrawablesReusedLastInLastFrame(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::s_numberDrawablesReusedLastInLastFrame(unsigned int value) function, expected prototype:\nvoid osg::Drawable::s_numberDrawablesReusedLastInLastFrame(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::s_numberDrawablesReusedLastInLastFrame(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->s_numberDrawablesReusedLastInLastFrame = value;

		return 0;
	}

	// void osg::Drawable::s_numberNewDrawablesInLastFrame(unsigned int value)
	static int _bind_set_s_numberNewDrawablesInLastFrame(lua_State *L) {
		if (!_lg_typecheck_set_s_numberNewDrawablesInLastFrame(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::s_numberNewDrawablesInLastFrame(unsigned int value) function, expected prototype:\nvoid osg::Drawable::s_numberNewDrawablesInLastFrame(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::s_numberNewDrawablesInLastFrame(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->s_numberNewDrawablesInLastFrame = value;

		return 0;
	}

	// void osg::Drawable::s_numberDeletedDrawablesInLastFrame(unsigned int value)
	static int _bind_set_s_numberDeletedDrawablesInLastFrame(lua_State *L) {
		if (!_lg_typecheck_set_s_numberDeletedDrawablesInLastFrame(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::s_numberDeletedDrawablesInLastFrame(unsigned int value) function, expected prototype:\nvoid osg::Drawable::s_numberDeletedDrawablesInLastFrame(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::s_numberDeletedDrawablesInLastFrame(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->s_numberDeletedDrawablesInLastFrame = value;

		return 0;
	}

	// void osg::Drawable::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Drawable::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Drawable::setName(name);

		return 0;
	}

	// void osg::Drawable::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Drawable::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Drawable::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Drawable::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Drawable::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Drawable::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Drawable::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Drawable::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Drawable::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Drawable::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Drawable::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Drawable::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Drawable::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Drawable::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// bool osg::Drawable::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Drawable::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Drawable::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Drawable::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Drawable::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Drawable::base_libraryName() const function, expected prototype:\nconst char * osg::Drawable::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Drawable::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Drawable::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Drawable::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Drawable::base_className() const function, expected prototype:\nconst char * osg::Drawable::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Drawable::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Drawable::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Geometry * osg::Drawable::base_asGeometry()
	static int _bind_base_asGeometry_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeometry_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry * osg::Drawable::base_asGeometry() function, expected prototype:\nosg::Geometry * osg::Drawable::base_asGeometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry * osg::Drawable::base_asGeometry(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry * lret = self->Drawable::asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry * osg::Drawable::base_asGeometry() const
	static int _bind_base_asGeometry_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeometry_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry * osg::Drawable::base_asGeometry() const function, expected prototype:\nconst osg::Geometry * osg::Drawable::base_asGeometry() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry * osg::Drawable::base_asGeometry() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry * lret = self->Drawable::asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Drawable::base_asGeometry
	static int _bind_base_asGeometry(lua_State *L) {
		if (_lg_typecheck_base_asGeometry_overload_1(L)) return _bind_base_asGeometry_overload_1(L);
		if (_lg_typecheck_base_asGeometry_overload_2(L)) return _bind_base_asGeometry_overload_2(L);

		luaL_error(L, "error in function base_asGeometry, cannot match any of the overloads for function base_asGeometry:\n  base_asGeometry()\n  base_asGeometry()\n");
		return 0;
	}

	// void osg::Drawable::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::base_computeDataVariance() function, expected prototype:\nvoid osg::Drawable::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Drawable::computeDataVariance();

		return 0;
	}

	// osg::BoundingBoxd osg::Drawable::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxd osg::Drawable::base_computeBound() const function, expected prototype:\nosg::BoundingBoxd osg::Drawable::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBoxd osg::Drawable::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingBoxd stack_lret = self->Drawable::computeBound();
		osg::BoundingBoxd* lret = new osg::BoundingBoxd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,true);

		return 1;
	}

	// void osg::Drawable::base_setUseVertexBufferObjects(bool flag)
	static int _bind_base_setUseVertexBufferObjects(lua_State *L) {
		if (!_lg_typecheck_base_setUseVertexBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::base_setUseVertexBufferObjects(bool flag) function, expected prototype:\nvoid osg::Drawable::base_setUseVertexBufferObjects(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::base_setUseVertexBufferObjects(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Drawable::setUseVertexBufferObjects(flag);

		return 0;
	}

	// void osg::Drawable::base_dirtyDisplayList()
	static int _bind_base_dirtyDisplayList(lua_State *L) {
		if (!_lg_typecheck_base_dirtyDisplayList(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::base_dirtyDisplayList() function, expected prototype:\nvoid osg::Drawable::base_dirtyDisplayList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::base_dirtyDisplayList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Drawable::dirtyDisplayList();

		return 0;
	}

	// unsigned int osg::Drawable::base_getGLObjectSizeHint() const
	static int _bind_base_getGLObjectSizeHint(lua_State *L) {
		if (!_lg_typecheck_base_getGLObjectSizeHint(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Drawable::base_getGLObjectSizeHint() const function, expected prototype:\nunsigned int osg::Drawable::base_getGLObjectSizeHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Drawable::base_getGLObjectSizeHint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Drawable::getGLObjectSizeHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Drawable::base_compileGLObjects(osg::RenderInfo & renderInfo) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::base_compileGLObjects(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osg::Drawable::base_compileGLObjects(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::Drawable::base_compileGLObjects function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::base_compileGLObjects(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Drawable::compileGLObjects(renderInfo);

		return 0;
	}

	// void osg::Drawable::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Drawable::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Drawable::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Drawable::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::Drawable::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Drawable::releaseGLObjects(state);

		return 0;
	}

	// void osg::Drawable::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	static int _bind_base_setUpdateCallback(lua_State *L) {
		if (!_lg_typecheck_base_setUpdateCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac) function, expected prototype:\nvoid osg::Drawable::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::UpdateCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,2));

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::base_setUpdateCallback(osg::Drawable::UpdateCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Drawable::setUpdateCallback(ac);

		return 0;
	}

	// void osg::Drawable::base_setEventCallback(osg::Drawable::EventCallback * ac)
	static int _bind_base_setEventCallback(lua_State *L) {
		if (!_lg_typecheck_base_setEventCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::base_setEventCallback(osg::Drawable::EventCallback * ac) function, expected prototype:\nvoid osg::Drawable::base_setEventCallback(osg::Drawable::EventCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::EventCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,2));

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::base_setEventCallback(osg::Drawable::EventCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Drawable::setEventCallback(ac);

		return 0;
	}

	// void osg::Drawable::base_setCullCallback(osg::Drawable::CullCallback * cc)
	static int _bind_base_setCullCallback(lua_State *L) {
		if (!_lg_typecheck_base_setCullCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::base_setCullCallback(osg::Drawable::CullCallback * cc) function, expected prototype:\nvoid osg::Drawable::base_setCullCallback(osg::Drawable::CullCallback * cc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::CullCallback* cc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,2));

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::base_setCullCallback(osg::Drawable::CullCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Drawable::setCullCallback(cc);

		return 0;
	}

	// void osg::Drawable::base_setDrawCallback(osg::Drawable::DrawCallback * dc)
	static int _bind_base_setDrawCallback(lua_State *L) {
		if (!_lg_typecheck_base_setDrawCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::base_setDrawCallback(osg::Drawable::DrawCallback * dc) function, expected prototype:\nvoid osg::Drawable::base_setDrawCallback(osg::Drawable::DrawCallback * dc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::DrawCallback* dc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::DrawCallback >(L,2));

		osg::Drawable* self=Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::base_setDrawCallback(osg::Drawable::DrawCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Drawable::setDrawCallback(dc);

		return 0;
	}


	// Operator binds:

};

osg::Drawable* LunaTraits< osg::Drawable >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Drawable::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osg::Drawable::drawImplementation(osg::RenderInfo & renderInfo) const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
}

void LunaTraits< osg::Drawable >::_bind_dtor(osg::Drawable* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Drawable >::className[] = "Drawable";
const char LunaTraits< osg::Drawable >::fullName[] = "osg::Drawable";
const char LunaTraits< osg::Drawable >::moduleName[] = "osg";
const char* LunaTraits< osg::Drawable >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::Drawable >::hash = 20484188;
const int LunaTraits< osg::Drawable >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Drawable >::methods[] = {
	{"isSameKindAs", &luna_wrapper_osg_Drawable::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Drawable::_bind_libraryName},
	{"className", &luna_wrapper_osg_Drawable::_bind_className},
	{"asGeometry", &luna_wrapper_osg_Drawable::_bind_asGeometry},
	{"computeDataVariance", &luna_wrapper_osg_Drawable::_bind_computeDataVariance},
	{"getParents", &luna_wrapper_osg_Drawable::_bind_getParents},
	{"getParent", &luna_wrapper_osg_Drawable::_bind_getParent},
	{"getNumParents", &luna_wrapper_osg_Drawable::_bind_getNumParents},
	{"getWorldMatrices", &luna_wrapper_osg_Drawable::_bind_getWorldMatrices},
	{"setStateSet", &luna_wrapper_osg_Drawable::_bind_setStateSet},
	{"getStateSet", &luna_wrapper_osg_Drawable::_bind_getStateSet},
	{"getOrCreateStateSet", &luna_wrapper_osg_Drawable::_bind_getOrCreateStateSet},
	{"setInitialBound", &luna_wrapper_osg_Drawable::_bind_setInitialBound},
	{"getInitialBound", &luna_wrapper_osg_Drawable::_bind_getInitialBound},
	{"dirtyBound", &luna_wrapper_osg_Drawable::_bind_dirtyBound},
	{"getBound", &luna_wrapper_osg_Drawable::_bind_getBound},
	{"computeBound", &luna_wrapper_osg_Drawable::_bind_computeBound},
	{"setComputeBoundingBoxCallback", &luna_wrapper_osg_Drawable::_bind_setComputeBoundingBoxCallback},
	{"getComputeBoundingBoxCallback", &luna_wrapper_osg_Drawable::_bind_getComputeBoundingBoxCallback},
	{"setShape", &luna_wrapper_osg_Drawable::_bind_setShape},
	{"getShape", &luna_wrapper_osg_Drawable::_bind_getShape},
	{"setSupportsDisplayList", &luna_wrapper_osg_Drawable::_bind_setSupportsDisplayList},
	{"getSupportsDisplayList", &luna_wrapper_osg_Drawable::_bind_getSupportsDisplayList},
	{"setUseDisplayList", &luna_wrapper_osg_Drawable::_bind_setUseDisplayList},
	{"getUseDisplayList", &luna_wrapper_osg_Drawable::_bind_getUseDisplayList},
	{"getDisplayList", &luna_wrapper_osg_Drawable::_bind_getDisplayList},
	{"setUseVertexBufferObjects", &luna_wrapper_osg_Drawable::_bind_setUseVertexBufferObjects},
	{"getUseVertexBufferObjects", &luna_wrapper_osg_Drawable::_bind_getUseVertexBufferObjects},
	{"dirtyDisplayList", &luna_wrapper_osg_Drawable::_bind_dirtyDisplayList},
	{"getGLObjectSizeHint", &luna_wrapper_osg_Drawable::_bind_getGLObjectSizeHint},
	{"draw", &luna_wrapper_osg_Drawable::_bind_draw},
	{"compileGLObjects", &luna_wrapper_osg_Drawable::_bind_compileGLObjects},
	{"setThreadSafeRefUnref", &luna_wrapper_osg_Drawable::_bind_setThreadSafeRefUnref},
	{"releaseGLObjects", &luna_wrapper_osg_Drawable::_bind_releaseGLObjects},
	{"setUpdateCallback", &luna_wrapper_osg_Drawable::_bind_setUpdateCallback},
	{"getUpdateCallback", &luna_wrapper_osg_Drawable::_bind_getUpdateCallback},
	{"requiresUpdateTraversal", &luna_wrapper_osg_Drawable::_bind_requiresUpdateTraversal},
	{"setEventCallback", &luna_wrapper_osg_Drawable::_bind_setEventCallback},
	{"getEventCallback", &luna_wrapper_osg_Drawable::_bind_getEventCallback},
	{"requiresEventTraversal", &luna_wrapper_osg_Drawable::_bind_requiresEventTraversal},
	{"setCullCallback", &luna_wrapper_osg_Drawable::_bind_setCullCallback},
	{"getCullCallback", &luna_wrapper_osg_Drawable::_bind_getCullCallback},
	{"setDrawCallback", &luna_wrapper_osg_Drawable::_bind_setDrawCallback},
	{"getDrawCallback", &luna_wrapper_osg_Drawable::_bind_getDrawCallback},
	{"drawImplementation", &luna_wrapper_osg_Drawable::_bind_drawImplementation},
	{"generateDisplayList", &luna_wrapper_osg_Drawable::_bind_generateDisplayList},
	{"setMinimumNumberOfDisplayListsToRetainInCache", &luna_wrapper_osg_Drawable::_bind_setMinimumNumberOfDisplayListsToRetainInCache},
	{"getMinimumNumberOfDisplayListsToRetainInCache", &luna_wrapper_osg_Drawable::_bind_getMinimumNumberOfDisplayListsToRetainInCache},
	{"deleteDisplayList", &luna_wrapper_osg_Drawable::_bind_deleteDisplayList},
	{"flushAllDeletedDisplayLists", &luna_wrapper_osg_Drawable::_bind_flushAllDeletedDisplayLists},
	{"discardAllDeletedDisplayLists", &luna_wrapper_osg_Drawable::_bind_discardAllDeletedDisplayLists},
	{"flushDeletedDisplayLists", &luna_wrapper_osg_Drawable::_bind_flushDeletedDisplayLists},
	{"getExtensions", &luna_wrapper_osg_Drawable::_bind_getExtensions},
	{"setExtensions", &luna_wrapper_osg_Drawable::_bind_setExtensions},
	{"get_s_numberDrawablesReusedLastInLastFrame", &luna_wrapper_osg_Drawable::_bind_get_s_numberDrawablesReusedLastInLastFrame},
	{"get_s_numberNewDrawablesInLastFrame", &luna_wrapper_osg_Drawable::_bind_get_s_numberNewDrawablesInLastFrame},
	{"get_s_numberDeletedDrawablesInLastFrame", &luna_wrapper_osg_Drawable::_bind_get_s_numberDeletedDrawablesInLastFrame},
	{"set_s_numberDrawablesReusedLastInLastFrame", &luna_wrapper_osg_Drawable::_bind_set_s_numberDrawablesReusedLastInLastFrame},
	{"set_s_numberNewDrawablesInLastFrame", &luna_wrapper_osg_Drawable::_bind_set_s_numberNewDrawablesInLastFrame},
	{"set_s_numberDeletedDrawablesInLastFrame", &luna_wrapper_osg_Drawable::_bind_set_s_numberDeletedDrawablesInLastFrame},
	{"base_setName", &luna_wrapper_osg_Drawable::_bind_base_setName},
	{"base_setUserData", &luna_wrapper_osg_Drawable::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Drawable::_bind_base_getUserData},
	{"base_isSameKindAs", &luna_wrapper_osg_Drawable::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Drawable::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Drawable::_bind_base_className},
	{"base_asGeometry", &luna_wrapper_osg_Drawable::_bind_base_asGeometry},
	{"base_computeDataVariance", &luna_wrapper_osg_Drawable::_bind_base_computeDataVariance},
	{"base_computeBound", &luna_wrapper_osg_Drawable::_bind_base_computeBound},
	{"base_setUseVertexBufferObjects", &luna_wrapper_osg_Drawable::_bind_base_setUseVertexBufferObjects},
	{"base_dirtyDisplayList", &luna_wrapper_osg_Drawable::_bind_base_dirtyDisplayList},
	{"base_getGLObjectSizeHint", &luna_wrapper_osg_Drawable::_bind_base_getGLObjectSizeHint},
	{"base_compileGLObjects", &luna_wrapper_osg_Drawable::_bind_base_compileGLObjects},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Drawable::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osg_Drawable::_bind_base_releaseGLObjects},
	{"base_setUpdateCallback", &luna_wrapper_osg_Drawable::_bind_base_setUpdateCallback},
	{"base_setEventCallback", &luna_wrapper_osg_Drawable::_bind_base_setEventCallback},
	{"base_setCullCallback", &luna_wrapper_osg_Drawable::_bind_base_setCullCallback},
	{"base_setDrawCallback", &luna_wrapper_osg_Drawable::_bind_base_setDrawCallback},
	{"fromVoid", &luna_wrapper_osg_Drawable::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Drawable::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Drawable::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Drawable >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Drawable::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Drawable >::enumValues[] = {
	{"VERTICES", osg::Drawable::VERTICES},
	{"WEIGHTS", osg::Drawable::WEIGHTS},
	{"NORMALS", osg::Drawable::NORMALS},
	{"COLORS", osg::Drawable::COLORS},
	{"SECONDARY_COLORS", osg::Drawable::SECONDARY_COLORS},
	{"FOG_COORDS", osg::Drawable::FOG_COORDS},
	{"ATTRIBUTE_6", osg::Drawable::ATTRIBUTE_6},
	{"ATTRIBUTE_7", osg::Drawable::ATTRIBUTE_7},
	{"TEXTURE_COORDS", osg::Drawable::TEXTURE_COORDS},
	{"TEXTURE_COORDS_0", osg::Drawable::TEXTURE_COORDS_0},
	{"TEXTURE_COORDS_1", osg::Drawable::TEXTURE_COORDS_1},
	{"TEXTURE_COORDS_2", osg::Drawable::TEXTURE_COORDS_2},
	{"TEXTURE_COORDS_3", osg::Drawable::TEXTURE_COORDS_3},
	{"TEXTURE_COORDS_4", osg::Drawable::TEXTURE_COORDS_4},
	{"TEXTURE_COORDS_5", osg::Drawable::TEXTURE_COORDS_5},
	{"TEXTURE_COORDS_6", osg::Drawable::TEXTURE_COORDS_6},
	{"TEXTURE_COORDS_7", osg::Drawable::TEXTURE_COORDS_7},
	{0,0}
};


