#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Node.h>

class luna_wrapper_osg_Node {
public:
	typedef Luna< osg::Node > luna_t;

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

		osg::Node* self= (osg::Node*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Node >::push(L,self,false);
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
		//osg::Node* ptr= dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,1));
		osg::Node* ptr= luna_caster< osg::Referenced, osg::Node >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Node >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Node >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asGroup_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asGroup_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_asSwitch_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asSwitch_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asGeode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asGeode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ascend(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_getParentalNodePaths(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWorldMatrices(lua_State *L) {
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

	inline static bool _lg_typecheck_addUpdateCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeUpdateCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumChildrenRequiringUpdateTraversal(lua_State *L) {
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

	inline static bool _lg_typecheck_addEventCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeEventCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumChildrenRequiringEventTraversal(lua_State *L) {
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

	inline static bool _lg_typecheck_addCullCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeCullCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCullingActive(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCullingActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumChildrenWithCullingDisabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isCullingActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumChildrenWithOccluderNodes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_containsOccluderNodes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNodeMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNodeMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOrCreateStateSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_setDescriptions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,95416160) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDescriptions_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDescriptions_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDescription_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDescription_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumDescriptions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addDescription(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInitialBound(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65870735) ) return false;
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

	inline static bool _lg_typecheck_setComputeBoundingSphereCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getComputeBoundingSphereCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getComputeBoundingSphereCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_asTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ascend(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Node::Node()
	static osg::Node* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node::Node() function, expected prototype:\nosg::Node::Node()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Node();
	}

	// osg::Node::Node(const osg::Node & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Node* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node::Node(const osg::Node & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Node::Node(const osg::Node & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Node* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Node::Node function");
		}
		const osg::Node & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Node::Node function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::Node(_arg1, copyop);
	}

	// osg::Node::Node(lua_Table * data)
	static osg::Node* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node::Node(lua_Table * data) function, expected prototype:\nosg::Node::Node(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Node(L,NULL);
	}

	// osg::Node::Node(lua_Table * data, const osg::Node & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Node* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node::Node(lua_Table * data, const osg::Node & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Node::Node(lua_Table * data, const osg::Node & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Node* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Node::Node function");
		}
		const osg::Node & _arg2=*_arg2_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Node::Node function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Node(L,NULL, _arg2, copyop);
	}

	// Overload binder for osg::Node::Node
	static osg::Node* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Node, cannot match any of the overloads for function Node:\n  Node()\n  Node(const osg::Node &, const osg::CopyOp &)\n  Node(lua_Table *)\n  Node(lua_Table *, const osg::Node &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Node::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Node::cloneType() const function, expected prototype:\nosg::Object * osg::Node::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Node::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Node::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Node::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::Node::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Node::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Node::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Node::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Node::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Node::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Node::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Node::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Node::libraryName() const function, expected prototype:\nconst char * osg::Node::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Node::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Node::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Node::className() const function, expected prototype:\nconst char * osg::Node::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Node::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Group * osg::Node::asGroup()
	static int _bind_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osg::Node::asGroup() function, expected prototype:\nosg::Group * osg::Node::asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osg::Node::asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osg::Node::asGroup() const
	static int _bind_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osg::Node::asGroup() const function, expected prototype:\nconst osg::Group * osg::Node::asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osg::Node::asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Node::asGroup
	static int _bind_asGroup(lua_State *L) {
		if (_lg_typecheck_asGroup_overload_1(L)) return _bind_asGroup_overload_1(L);
		if (_lg_typecheck_asGroup_overload_2(L)) return _bind_asGroup_overload_2(L);

		luaL_error(L, "error in function asGroup, cannot match any of the overloads for function asGroup:\n  asGroup()\n  asGroup()\n");
		return 0;
	}

	// osg::Transform * osg::Node::asTransform()
	static int _bind_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osg::Node::asTransform() function, expected prototype:\nosg::Transform * osg::Node::asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osg::Node::asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osg::Node::asTransform() const
	static int _bind_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osg::Node::asTransform() const function, expected prototype:\nconst osg::Transform * osg::Node::asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osg::Node::asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Node::asTransform
	static int _bind_asTransform(lua_State *L) {
		if (_lg_typecheck_asTransform_overload_1(L)) return _bind_asTransform_overload_1(L);
		if (_lg_typecheck_asTransform_overload_2(L)) return _bind_asTransform_overload_2(L);

		luaL_error(L, "error in function asTransform, cannot match any of the overloads for function asTransform:\n  asTransform()\n  asTransform()\n");
		return 0;
	}

	// osg::Camera * osg::Node::asCamera()
	static int _bind_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osg::Node::asCamera() function, expected prototype:\nosg::Camera * osg::Node::asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osg::Node::asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osg::Node::asCamera() const
	static int _bind_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osg::Node::asCamera() const function, expected prototype:\nconst osg::Camera * osg::Node::asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osg::Node::asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Node::asCamera
	static int _bind_asCamera(lua_State *L) {
		if (_lg_typecheck_asCamera_overload_1(L)) return _bind_asCamera_overload_1(L);
		if (_lg_typecheck_asCamera_overload_2(L)) return _bind_asCamera_overload_2(L);

		luaL_error(L, "error in function asCamera, cannot match any of the overloads for function asCamera:\n  asCamera()\n  asCamera()\n");
		return 0;
	}

	// osg::Switch * osg::Node::asSwitch()
	static int _bind_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osg::Node::asSwitch() function, expected prototype:\nosg::Switch * osg::Node::asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osg::Node::asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osg::Node::asSwitch() const
	static int _bind_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osg::Node::asSwitch() const function, expected prototype:\nconst osg::Switch * osg::Node::asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osg::Node::asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Node::asSwitch
	static int _bind_asSwitch(lua_State *L) {
		if (_lg_typecheck_asSwitch_overload_1(L)) return _bind_asSwitch_overload_1(L);
		if (_lg_typecheck_asSwitch_overload_2(L)) return _bind_asSwitch_overload_2(L);

		luaL_error(L, "error in function asSwitch, cannot match any of the overloads for function asSwitch:\n  asSwitch()\n  asSwitch()\n");
		return 0;
	}

	// osg::Geode * osg::Node::asGeode()
	static int _bind_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osg::Node::asGeode() function, expected prototype:\nosg::Geode * osg::Node::asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osg::Node::asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osg::Node::asGeode() const
	static int _bind_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osg::Node::asGeode() const function, expected prototype:\nconst osg::Geode * osg::Node::asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osg::Node::asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Node::asGeode
	static int _bind_asGeode(lua_State *L) {
		if (_lg_typecheck_asGeode_overload_1(L)) return _bind_asGeode_overload_1(L);
		if (_lg_typecheck_asGeode_overload_2(L)) return _bind_asGeode_overload_2(L);

		luaL_error(L, "error in function asGeode, cannot match any of the overloads for function asGeode:\n  asGeode()\n  asGeode()\n");
		return 0;
	}

	// void osg::Node::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Node::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Node::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// void osg::Node::ascend(osg::NodeVisitor & nv)
	static int _bind_ascend(lua_State *L) {
		if (!_lg_typecheck_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Node::ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Node::ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ascend(nv);

		return 0;
	}

	// void osg::Node::traverse(osg::NodeVisitor & arg1)
	static int _bind_traverse(lua_State *L) {
		if (!_lg_typecheck_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::Node::traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Node::traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->traverse(_arg1);

		return 0;
	}

	// const osg::Node::ParentList & osg::Node::getParents() const
	static int _bind_getParents_overload_1(lua_State *L) {
		if (!_lg_typecheck_getParents_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Node::ParentList & osg::Node::getParents() const function, expected prototype:\nconst osg::Node::ParentList & osg::Node::getParents() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Node::ParentList & osg::Node::getParents() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Node::ParentList* lret = &self->getParents();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node::ParentList >::push(L,lret,false);

		return 1;
	}

	// osg::Node::ParentList osg::Node::getParents()
	static int _bind_getParents_overload_2(lua_State *L) {
		if (!_lg_typecheck_getParents_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node::ParentList osg::Node::getParents() function, expected prototype:\nosg::Node::ParentList osg::Node::getParents()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node::ParentList osg::Node::getParents(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node::ParentList stack_lret = self->getParents();
		osg::Node::ParentList* lret = new osg::Node::ParentList(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node::ParentList >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osg::Node::getParents
	static int _bind_getParents(lua_State *L) {
		if (_lg_typecheck_getParents_overload_1(L)) return _bind_getParents_overload_1(L);
		if (_lg_typecheck_getParents_overload_2(L)) return _bind_getParents_overload_2(L);

		luaL_error(L, "error in function getParents, cannot match any of the overloads for function getParents:\n  getParents()\n  getParents()\n");
		return 0;
	}

	// osg::Group * osg::Node::getParent(unsigned int i)
	static int _bind_getParent_overload_1(lua_State *L) {
		if (!_lg_typecheck_getParent_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osg::Node::getParent(unsigned int i) function, expected prototype:\nosg::Group * osg::Node::getParent(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osg::Node::getParent(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->getParent(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osg::Node::getParent(unsigned int i) const
	static int _bind_getParent_overload_2(lua_State *L) {
		if (!_lg_typecheck_getParent_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osg::Node::getParent(unsigned int i) const function, expected prototype:\nconst osg::Group * osg::Node::getParent(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osg::Node::getParent(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->getParent(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Node::getParent
	static int _bind_getParent(lua_State *L) {
		if (_lg_typecheck_getParent_overload_1(L)) return _bind_getParent_overload_1(L);
		if (_lg_typecheck_getParent_overload_2(L)) return _bind_getParent_overload_2(L);

		luaL_error(L, "error in function getParent, cannot match any of the overloads for function getParent:\n  getParent(unsigned int)\n  getParent(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::Node::getNumParents() const
	static int _bind_getNumParents(lua_State *L) {
		if (!_lg_typecheck_getNumParents(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Node::getNumParents() const function, expected prototype:\nunsigned int osg::Node::getNumParents() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Node::getNumParents() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumParents();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::NodePathList osg::Node::getParentalNodePaths(osg::Node * haltTraversalAtNode = 0) const
	static int _bind_getParentalNodePaths(lua_State *L) {
		if (!_lg_typecheck_getParentalNodePaths(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodePathList osg::Node::getParentalNodePaths(osg::Node * haltTraversalAtNode = 0) const function, expected prototype:\nosg::NodePathList osg::Node::getParentalNodePaths(osg::Node * haltTraversalAtNode = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Node* haltTraversalAtNode=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::Node >(L,2)) : (osg::Node*)0;

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::NodePathList osg::Node::getParentalNodePaths(osg::Node *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::NodePathList stack_lret = self->getParentalNodePaths(haltTraversalAtNode);
		osg::NodePathList* lret = new osg::NodePathList(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodePathList >::push(L,lret,true);

		return 1;
	}

	// osg::MatrixList osg::Node::getWorldMatrices(const osg::Node * haltTraversalAtNode = 0) const
	static int _bind_getWorldMatrices(lua_State *L) {
		if (!_lg_typecheck_getWorldMatrices(L)) {
			luaL_error(L, "luna typecheck failed in osg::MatrixList osg::Node::getWorldMatrices(const osg::Node * haltTraversalAtNode = 0) const function, expected prototype:\nosg::MatrixList osg::Node::getWorldMatrices(const osg::Node * haltTraversalAtNode = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Node* haltTraversalAtNode=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::Node >(L,2)) : (const osg::Node*)0;

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::MatrixList osg::Node::getWorldMatrices(const osg::Node *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::MatrixList stack_lret = self->getWorldMatrices(haltTraversalAtNode);
		osg::MatrixList* lret = new osg::MatrixList(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixList >::push(L,lret,true);

		return 1;
	}

	// void osg::Node::setUpdateCallback(osg::NodeCallback * nc)
	static int _bind_setUpdateCallback(lua_State *L) {
		if (!_lg_typecheck_setUpdateCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::setUpdateCallback(osg::NodeCallback * nc) function, expected prototype:\nvoid osg::Node::setUpdateCallback(osg::NodeCallback * nc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeCallback* nc=(Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,2));

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::setUpdateCallback(osg::NodeCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUpdateCallback(nc);

		return 0;
	}

	// osg::NodeCallback * osg::Node::getUpdateCallback()
	static int _bind_getUpdateCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUpdateCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodeCallback * osg::Node::getUpdateCallback() function, expected prototype:\nosg::NodeCallback * osg::Node::getUpdateCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::NodeCallback * osg::Node::getUpdateCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::NodeCallback * lret = self->getUpdateCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodeCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::NodeCallback * osg::Node::getUpdateCallback() const
	static int _bind_getUpdateCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUpdateCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::NodeCallback * osg::Node::getUpdateCallback() const function, expected prototype:\nconst osg::NodeCallback * osg::Node::getUpdateCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::NodeCallback * osg::Node::getUpdateCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::NodeCallback * lret = self->getUpdateCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodeCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Node::getUpdateCallback
	static int _bind_getUpdateCallback(lua_State *L) {
		if (_lg_typecheck_getUpdateCallback_overload_1(L)) return _bind_getUpdateCallback_overload_1(L);
		if (_lg_typecheck_getUpdateCallback_overload_2(L)) return _bind_getUpdateCallback_overload_2(L);

		luaL_error(L, "error in function getUpdateCallback, cannot match any of the overloads for function getUpdateCallback:\n  getUpdateCallback()\n  getUpdateCallback()\n");
		return 0;
	}

	// void osg::Node::addUpdateCallback(osg::NodeCallback * nc)
	static int _bind_addUpdateCallback(lua_State *L) {
		if (!_lg_typecheck_addUpdateCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::addUpdateCallback(osg::NodeCallback * nc) function, expected prototype:\nvoid osg::Node::addUpdateCallback(osg::NodeCallback * nc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeCallback* nc=(Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,2));

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::addUpdateCallback(osg::NodeCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addUpdateCallback(nc);

		return 0;
	}

	// void osg::Node::removeUpdateCallback(osg::NodeCallback * nc)
	static int _bind_removeUpdateCallback(lua_State *L) {
		if (!_lg_typecheck_removeUpdateCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::removeUpdateCallback(osg::NodeCallback * nc) function, expected prototype:\nvoid osg::Node::removeUpdateCallback(osg::NodeCallback * nc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeCallback* nc=(Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,2));

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::removeUpdateCallback(osg::NodeCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeUpdateCallback(nc);

		return 0;
	}

	// unsigned int osg::Node::getNumChildrenRequiringUpdateTraversal() const
	static int _bind_getNumChildrenRequiringUpdateTraversal(lua_State *L) {
		if (!_lg_typecheck_getNumChildrenRequiringUpdateTraversal(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Node::getNumChildrenRequiringUpdateTraversal() const function, expected prototype:\nunsigned int osg::Node::getNumChildrenRequiringUpdateTraversal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Node::getNumChildrenRequiringUpdateTraversal() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumChildrenRequiringUpdateTraversal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Node::setEventCallback(osg::NodeCallback * nc)
	static int _bind_setEventCallback(lua_State *L) {
		if (!_lg_typecheck_setEventCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::setEventCallback(osg::NodeCallback * nc) function, expected prototype:\nvoid osg::Node::setEventCallback(osg::NodeCallback * nc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeCallback* nc=(Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,2));

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::setEventCallback(osg::NodeCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEventCallback(nc);

		return 0;
	}

	// osg::NodeCallback * osg::Node::getEventCallback()
	static int _bind_getEventCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getEventCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodeCallback * osg::Node::getEventCallback() function, expected prototype:\nosg::NodeCallback * osg::Node::getEventCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::NodeCallback * osg::Node::getEventCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::NodeCallback * lret = self->getEventCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodeCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::NodeCallback * osg::Node::getEventCallback() const
	static int _bind_getEventCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getEventCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::NodeCallback * osg::Node::getEventCallback() const function, expected prototype:\nconst osg::NodeCallback * osg::Node::getEventCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::NodeCallback * osg::Node::getEventCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::NodeCallback * lret = self->getEventCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodeCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Node::getEventCallback
	static int _bind_getEventCallback(lua_State *L) {
		if (_lg_typecheck_getEventCallback_overload_1(L)) return _bind_getEventCallback_overload_1(L);
		if (_lg_typecheck_getEventCallback_overload_2(L)) return _bind_getEventCallback_overload_2(L);

		luaL_error(L, "error in function getEventCallback, cannot match any of the overloads for function getEventCallback:\n  getEventCallback()\n  getEventCallback()\n");
		return 0;
	}

	// void osg::Node::addEventCallback(osg::NodeCallback * nc)
	static int _bind_addEventCallback(lua_State *L) {
		if (!_lg_typecheck_addEventCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::addEventCallback(osg::NodeCallback * nc) function, expected prototype:\nvoid osg::Node::addEventCallback(osg::NodeCallback * nc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeCallback* nc=(Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,2));

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::addEventCallback(osg::NodeCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addEventCallback(nc);

		return 0;
	}

	// void osg::Node::removeEventCallback(osg::NodeCallback * nc)
	static int _bind_removeEventCallback(lua_State *L) {
		if (!_lg_typecheck_removeEventCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::removeEventCallback(osg::NodeCallback * nc) function, expected prototype:\nvoid osg::Node::removeEventCallback(osg::NodeCallback * nc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeCallback* nc=(Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,2));

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::removeEventCallback(osg::NodeCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeEventCallback(nc);

		return 0;
	}

	// unsigned int osg::Node::getNumChildrenRequiringEventTraversal() const
	static int _bind_getNumChildrenRequiringEventTraversal(lua_State *L) {
		if (!_lg_typecheck_getNumChildrenRequiringEventTraversal(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Node::getNumChildrenRequiringEventTraversal() const function, expected prototype:\nunsigned int osg::Node::getNumChildrenRequiringEventTraversal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Node::getNumChildrenRequiringEventTraversal() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumChildrenRequiringEventTraversal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Node::setCullCallback(osg::NodeCallback * nc)
	static int _bind_setCullCallback(lua_State *L) {
		if (!_lg_typecheck_setCullCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::setCullCallback(osg::NodeCallback * nc) function, expected prototype:\nvoid osg::Node::setCullCallback(osg::NodeCallback * nc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeCallback* nc=(Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,2));

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::setCullCallback(osg::NodeCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCullCallback(nc);

		return 0;
	}

	// osg::NodeCallback * osg::Node::getCullCallback()
	static int _bind_getCullCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCullCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodeCallback * osg::Node::getCullCallback() function, expected prototype:\nosg::NodeCallback * osg::Node::getCullCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::NodeCallback * osg::Node::getCullCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::NodeCallback * lret = self->getCullCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodeCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::NodeCallback * osg::Node::getCullCallback() const
	static int _bind_getCullCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCullCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::NodeCallback * osg::Node::getCullCallback() const function, expected prototype:\nconst osg::NodeCallback * osg::Node::getCullCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::NodeCallback * osg::Node::getCullCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::NodeCallback * lret = self->getCullCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodeCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Node::getCullCallback
	static int _bind_getCullCallback(lua_State *L) {
		if (_lg_typecheck_getCullCallback_overload_1(L)) return _bind_getCullCallback_overload_1(L);
		if (_lg_typecheck_getCullCallback_overload_2(L)) return _bind_getCullCallback_overload_2(L);

		luaL_error(L, "error in function getCullCallback, cannot match any of the overloads for function getCullCallback:\n  getCullCallback()\n  getCullCallback()\n");
		return 0;
	}

	// void osg::Node::addCullCallback(osg::NodeCallback * nc)
	static int _bind_addCullCallback(lua_State *L) {
		if (!_lg_typecheck_addCullCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::addCullCallback(osg::NodeCallback * nc) function, expected prototype:\nvoid osg::Node::addCullCallback(osg::NodeCallback * nc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeCallback* nc=(Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,2));

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::addCullCallback(osg::NodeCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addCullCallback(nc);

		return 0;
	}

	// void osg::Node::removeCullCallback(osg::NodeCallback * nc)
	static int _bind_removeCullCallback(lua_State *L) {
		if (!_lg_typecheck_removeCullCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::removeCullCallback(osg::NodeCallback * nc) function, expected prototype:\nvoid osg::Node::removeCullCallback(osg::NodeCallback * nc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeCallback* nc=(Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,2));

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::removeCullCallback(osg::NodeCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeCullCallback(nc);

		return 0;
	}

	// void osg::Node::setCullingActive(bool active)
	static int _bind_setCullingActive(lua_State *L) {
		if (!_lg_typecheck_setCullingActive(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::setCullingActive(bool active) function, expected prototype:\nvoid osg::Node::setCullingActive(bool active)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool active=(bool)(lua_toboolean(L,2)==1);

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::setCullingActive(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCullingActive(active);

		return 0;
	}

	// bool osg::Node::getCullingActive() const
	static int _bind_getCullingActive(lua_State *L) {
		if (!_lg_typecheck_getCullingActive(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Node::getCullingActive() const function, expected prototype:\nbool osg::Node::getCullingActive() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Node::getCullingActive() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getCullingActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::Node::getNumChildrenWithCullingDisabled() const
	static int _bind_getNumChildrenWithCullingDisabled(lua_State *L) {
		if (!_lg_typecheck_getNumChildrenWithCullingDisabled(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Node::getNumChildrenWithCullingDisabled() const function, expected prototype:\nunsigned int osg::Node::getNumChildrenWithCullingDisabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Node::getNumChildrenWithCullingDisabled() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumChildrenWithCullingDisabled();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Node::isCullingActive() const
	static int _bind_isCullingActive(lua_State *L) {
		if (!_lg_typecheck_isCullingActive(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Node::isCullingActive() const function, expected prototype:\nbool osg::Node::isCullingActive() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Node::isCullingActive() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isCullingActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::Node::getNumChildrenWithOccluderNodes() const
	static int _bind_getNumChildrenWithOccluderNodes(lua_State *L) {
		if (!_lg_typecheck_getNumChildrenWithOccluderNodes(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Node::getNumChildrenWithOccluderNodes() const function, expected prototype:\nunsigned int osg::Node::getNumChildrenWithOccluderNodes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Node::getNumChildrenWithOccluderNodes() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumChildrenWithOccluderNodes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Node::containsOccluderNodes() const
	static int _bind_containsOccluderNodes(lua_State *L) {
		if (!_lg_typecheck_containsOccluderNodes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Node::containsOccluderNodes() const function, expected prototype:\nbool osg::Node::containsOccluderNodes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Node::containsOccluderNodes() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->containsOccluderNodes();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Node::setNodeMask(unsigned int nm)
	static int _bind_setNodeMask(lua_State *L) {
		if (!_lg_typecheck_setNodeMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::setNodeMask(unsigned int nm) function, expected prototype:\nvoid osg::Node::setNodeMask(unsigned int nm)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int nm=(unsigned int)lua_tointeger(L,2);

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::setNodeMask(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNodeMask(nm);

		return 0;
	}

	// unsigned int osg::Node::getNodeMask() const
	static int _bind_getNodeMask(lua_State *L) {
		if (!_lg_typecheck_getNodeMask(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Node::getNodeMask() const function, expected prototype:\nunsigned int osg::Node::getNodeMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Node::getNodeMask() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNodeMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Node::setStateSet(osg::StateSet * stateset)
	static int _bind_setStateSet(lua_State *L) {
		if (!_lg_typecheck_setStateSet(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::setStateSet(osg::StateSet * stateset) function, expected prototype:\nvoid osg::Node::setStateSet(osg::StateSet * stateset)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* stateset=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::setStateSet(osg::StateSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStateSet(stateset);

		return 0;
	}

	// osg::StateSet * osg::Node::getOrCreateStateSet()
	static int _bind_getOrCreateStateSet(lua_State *L) {
		if (!_lg_typecheck_getOrCreateStateSet(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet * osg::Node::getOrCreateStateSet() function, expected prototype:\nosg::StateSet * osg::Node::getOrCreateStateSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet * osg::Node::getOrCreateStateSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet * lret = self->getOrCreateStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// osg::StateSet * osg::Node::getStateSet()
	static int _bind_getStateSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_getStateSet_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet * osg::Node::getStateSet() function, expected prototype:\nosg::StateSet * osg::Node::getStateSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet * osg::Node::getStateSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet * lret = self->getStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet * osg::Node::getStateSet() const
	static int _bind_getStateSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_getStateSet_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateSet * osg::Node::getStateSet() const function, expected prototype:\nconst osg::StateSet * osg::Node::getStateSet() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateSet * osg::Node::getStateSet() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet * lret = self->getStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Node::getStateSet
	static int _bind_getStateSet(lua_State *L) {
		if (_lg_typecheck_getStateSet_overload_1(L)) return _bind_getStateSet_overload_1(L);
		if (_lg_typecheck_getStateSet_overload_2(L)) return _bind_getStateSet_overload_2(L);

		luaL_error(L, "error in function getStateSet, cannot match any of the overloads for function getStateSet:\n  getStateSet()\n  getStateSet()\n");
		return 0;
	}

	// void osg::Node::setDescriptions(const osg::Node::DescriptionList & descriptions)
	static int _bind_setDescriptions(lua_State *L) {
		if (!_lg_typecheck_setDescriptions(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::setDescriptions(const osg::Node::DescriptionList & descriptions) function, expected prototype:\nvoid osg::Node::setDescriptions(const osg::Node::DescriptionList & descriptions)\nClass arguments details:\narg 1 ID = 27507650\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Node::DescriptionList* descriptions_ptr=(Luna< std::vector< std::string > >::checkSubType< osg::Node::DescriptionList >(L,2));
		if( !descriptions_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg descriptions in osg::Node::setDescriptions function");
		}
		const osg::Node::DescriptionList & descriptions=*descriptions_ptr;

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::setDescriptions(const osg::Node::DescriptionList &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDescriptions(descriptions);

		return 0;
	}

	// osg::Node::DescriptionList & osg::Node::getDescriptions()
	static int _bind_getDescriptions_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDescriptions_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node::DescriptionList & osg::Node::getDescriptions() function, expected prototype:\nosg::Node::DescriptionList & osg::Node::getDescriptions()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node::DescriptionList & osg::Node::getDescriptions(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Node::DescriptionList* lret = &self->getDescriptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node::DescriptionList >::push(L,lret,false);

		return 1;
	}

	// const osg::Node::DescriptionList & osg::Node::getDescriptions() const
	static int _bind_getDescriptions_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDescriptions_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Node::DescriptionList & osg::Node::getDescriptions() const function, expected prototype:\nconst osg::Node::DescriptionList & osg::Node::getDescriptions() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Node::DescriptionList & osg::Node::getDescriptions() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Node::DescriptionList* lret = &self->getDescriptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node::DescriptionList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Node::getDescriptions
	static int _bind_getDescriptions(lua_State *L) {
		if (_lg_typecheck_getDescriptions_overload_1(L)) return _bind_getDescriptions_overload_1(L);
		if (_lg_typecheck_getDescriptions_overload_2(L)) return _bind_getDescriptions_overload_2(L);

		luaL_error(L, "error in function getDescriptions, cannot match any of the overloads for function getDescriptions:\n  getDescriptions()\n  getDescriptions()\n");
		return 0;
	}

	// const std::string & osg::Node::getDescription(unsigned int i) const
	static int _bind_getDescription_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDescription_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & osg::Node::getDescription(unsigned int i) const function, expected prototype:\nconst std::string & osg::Node::getDescription(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & osg::Node::getDescription(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->getDescription(i);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// std::string & osg::Node::getDescription(unsigned int i)
	static int _bind_getDescription_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDescription_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in std::string & osg::Node::getDescription(unsigned int i) function, expected prototype:\nstd::string & osg::Node::getDescription(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string & osg::Node::getDescription(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string & lret = self->getDescription(i);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// Overload binder for osg::Node::getDescription
	static int _bind_getDescription(lua_State *L) {
		if (_lg_typecheck_getDescription_overload_1(L)) return _bind_getDescription_overload_1(L);
		if (_lg_typecheck_getDescription_overload_2(L)) return _bind_getDescription_overload_2(L);

		luaL_error(L, "error in function getDescription, cannot match any of the overloads for function getDescription:\n  getDescription(unsigned int)\n  getDescription(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::Node::getNumDescriptions() const
	static int _bind_getNumDescriptions(lua_State *L) {
		if (!_lg_typecheck_getNumDescriptions(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Node::getNumDescriptions() const function, expected prototype:\nunsigned int osg::Node::getNumDescriptions() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Node::getNumDescriptions() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumDescriptions();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Node::addDescription(const std::string & desc)
	static int _bind_addDescription(lua_State *L) {
		if (!_lg_typecheck_addDescription(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::addDescription(const std::string & desc) function, expected prototype:\nvoid osg::Node::addDescription(const std::string & desc)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string desc(lua_tostring(L,2),lua_objlen(L,2));

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::addDescription(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addDescription(desc);

		return 0;
	}

	// void osg::Node::setInitialBound(const osg::BoundingSphered & bsphere)
	static int _bind_setInitialBound(lua_State *L) {
		if (!_lg_typecheck_setInitialBound(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::setInitialBound(const osg::BoundingSphered & bsphere) function, expected prototype:\nvoid osg::Node::setInitialBound(const osg::BoundingSphered & bsphere)\nClass arguments details:\narg 1 ID = 54337300\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BoundingSphered* bsphere_ptr=(Luna< osg::BoundingSphereImpl< osg::Vec3d > >::checkSubType< osg::BoundingSphered >(L,2));
		if( !bsphere_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bsphere in osg::Node::setInitialBound function");
		}
		const osg::BoundingSphered & bsphere=*bsphere_ptr;

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::setInitialBound(const osg::BoundingSphered &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setInitialBound(bsphere);

		return 0;
	}

	// const osg::BoundingSphered & osg::Node::getInitialBound() const
	static int _bind_getInitialBound(lua_State *L) {
		if (!_lg_typecheck_getInitialBound(L)) {
			luaL_error(L, "luna typecheck failed in const osg::BoundingSphered & osg::Node::getInitialBound() const function, expected prototype:\nconst osg::BoundingSphered & osg::Node::getInitialBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::BoundingSphered & osg::Node::getInitialBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::BoundingSphered* lret = &self->getInitialBound();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,false);

		return 1;
	}

	// void osg::Node::dirtyBound()
	static int _bind_dirtyBound(lua_State *L) {
		if (!_lg_typecheck_dirtyBound(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::dirtyBound() function, expected prototype:\nvoid osg::Node::dirtyBound()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::dirtyBound(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dirtyBound();

		return 0;
	}

	// const osg::BoundingSphered & osg::Node::getBound() const
	static int _bind_getBound(lua_State *L) {
		if (!_lg_typecheck_getBound(L)) {
			luaL_error(L, "luna typecheck failed in const osg::BoundingSphered & osg::Node::getBound() const function, expected prototype:\nconst osg::BoundingSphered & osg::Node::getBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::BoundingSphered & osg::Node::getBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::BoundingSphered* lret = &self->getBound();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,false);

		return 1;
	}

	// osg::BoundingSphered osg::Node::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::Node::computeBound() const function, expected prototype:\nosg::BoundingSphered osg::Node::computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::Node::computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// void osg::Node::setComputeBoundingSphereCallback(osg::Node::ComputeBoundingSphereCallback * callback)
	static int _bind_setComputeBoundingSphereCallback(lua_State *L) {
		if (!_lg_typecheck_setComputeBoundingSphereCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::setComputeBoundingSphereCallback(osg::Node::ComputeBoundingSphereCallback * callback) function, expected prototype:\nvoid osg::Node::setComputeBoundingSphereCallback(osg::Node::ComputeBoundingSphereCallback * callback)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node::ComputeBoundingSphereCallback* callback=(Luna< osg::Referenced >::checkSubType< osg::Node::ComputeBoundingSphereCallback >(L,2));

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::setComputeBoundingSphereCallback(osg::Node::ComputeBoundingSphereCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setComputeBoundingSphereCallback(callback);

		return 0;
	}

	// osg::Node::ComputeBoundingSphereCallback * osg::Node::getComputeBoundingSphereCallback()
	static int _bind_getComputeBoundingSphereCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getComputeBoundingSphereCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node::ComputeBoundingSphereCallback * osg::Node::getComputeBoundingSphereCallback() function, expected prototype:\nosg::Node::ComputeBoundingSphereCallback * osg::Node::getComputeBoundingSphereCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node::ComputeBoundingSphereCallback * osg::Node::getComputeBoundingSphereCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node::ComputeBoundingSphereCallback * lret = self->getComputeBoundingSphereCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node::ComputeBoundingSphereCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::Node::ComputeBoundingSphereCallback * osg::Node::getComputeBoundingSphereCallback() const
	static int _bind_getComputeBoundingSphereCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getComputeBoundingSphereCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Node::ComputeBoundingSphereCallback * osg::Node::getComputeBoundingSphereCallback() const function, expected prototype:\nconst osg::Node::ComputeBoundingSphereCallback * osg::Node::getComputeBoundingSphereCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Node::ComputeBoundingSphereCallback * osg::Node::getComputeBoundingSphereCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Node::ComputeBoundingSphereCallback * lret = self->getComputeBoundingSphereCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node::ComputeBoundingSphereCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Node::getComputeBoundingSphereCallback
	static int _bind_getComputeBoundingSphereCallback(lua_State *L) {
		if (_lg_typecheck_getComputeBoundingSphereCallback_overload_1(L)) return _bind_getComputeBoundingSphereCallback_overload_1(L);
		if (_lg_typecheck_getComputeBoundingSphereCallback_overload_2(L)) return _bind_getComputeBoundingSphereCallback_overload_2(L);

		luaL_error(L, "error in function getComputeBoundingSphereCallback, cannot match any of the overloads for function getComputeBoundingSphereCallback:\n  getComputeBoundingSphereCallback()\n  getComputeBoundingSphereCallback()\n");
		return 0;
	}

	// void osg::Node::setThreadSafeRefUnref(bool threadSafe)
	static int _bind_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Node::setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Node::releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Node::releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseGLObjects(_arg1);

		return 0;
	}

	// void osg::Node::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Node::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Node::setName(name);

		return 0;
	}

	// void osg::Node::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::base_computeDataVariance() function, expected prototype:\nvoid osg::Node::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Node::computeDataVariance();

		return 0;
	}

	// void osg::Node::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Node::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Node::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Node::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Node::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Node::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Node::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Node::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Node::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Node::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Node::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Node::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Node::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Node::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Object * osg::Node::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Node::base_cloneType() const function, expected prototype:\nosg::Object * osg::Node::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Node::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Node::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Node::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Node::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::Node::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Node::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Node::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Node::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Node::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Node::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Node::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Node::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Node::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Node::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Node::base_libraryName() const function, expected prototype:\nconst char * osg::Node::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Node::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Node::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Node::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Node::base_className() const function, expected prototype:\nconst char * osg::Node::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Node::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Node::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Group * osg::Node::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osg::Node::base_asGroup() function, expected prototype:\nosg::Group * osg::Node::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osg::Node::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->Node::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osg::Node::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osg::Node::base_asGroup() const function, expected prototype:\nconst osg::Group * osg::Node::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osg::Node::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->Node::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Node::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// osg::Transform * osg::Node::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osg::Node::base_asTransform() function, expected prototype:\nosg::Transform * osg::Node::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osg::Node::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->Node::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osg::Node::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osg::Node::base_asTransform() const function, expected prototype:\nconst osg::Transform * osg::Node::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osg::Node::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->Node::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Node::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::Camera * osg::Node::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osg::Node::base_asCamera() function, expected prototype:\nosg::Camera * osg::Node::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osg::Node::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->Node::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osg::Node::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osg::Node::base_asCamera() const function, expected prototype:\nconst osg::Camera * osg::Node::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osg::Node::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->Node::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Node::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osg::Node::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osg::Node::base_asSwitch() function, expected prototype:\nosg::Switch * osg::Node::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osg::Node::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->Node::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osg::Node::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osg::Node::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osg::Node::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osg::Node::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->Node::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Node::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osg::Node::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osg::Node::base_asGeode() function, expected prototype:\nosg::Geode * osg::Node::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osg::Node::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->Node::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osg::Node::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osg::Node::base_asGeode() const function, expected prototype:\nconst osg::Geode * osg::Node::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osg::Node::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->Node::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Node::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osg::Node::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Node::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Node::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Node::accept(nv);

		return 0;
	}

	// void osg::Node::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Node::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Node::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Node::ascend(nv);

		return 0;
	}

	// void osg::Node::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::Node::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Node::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Node::traverse(_arg1);

		return 0;
	}

	// osg::BoundingSphered osg::Node::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::Node::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osg::Node::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::Node::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->Node::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// void osg::Node::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Node::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Node::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Node::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Node::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Node* self=Luna< osg::Referenced >::checkSubType< osg::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Node::releaseGLObjects(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::Node* LunaTraits< osg::Node >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Node::_bind_ctor(L);
}

void LunaTraits< osg::Node >::_bind_dtor(osg::Node* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Node >::className[] = "Node";
const char LunaTraits< osg::Node >::fullName[] = "osg::Node";
const char LunaTraits< osg::Node >::moduleName[] = "osg";
const char* LunaTraits< osg::Node >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::Node >::hash = 80168245;
const int LunaTraits< osg::Node >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Node >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Node::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Node::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Node::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Node::_bind_libraryName},
	{"className", &luna_wrapper_osg_Node::_bind_className},
	{"asGroup", &luna_wrapper_osg_Node::_bind_asGroup},
	{"asTransform", &luna_wrapper_osg_Node::_bind_asTransform},
	{"asCamera", &luna_wrapper_osg_Node::_bind_asCamera},
	{"asSwitch", &luna_wrapper_osg_Node::_bind_asSwitch},
	{"asGeode", &luna_wrapper_osg_Node::_bind_asGeode},
	{"accept", &luna_wrapper_osg_Node::_bind_accept},
	{"ascend", &luna_wrapper_osg_Node::_bind_ascend},
	{"traverse", &luna_wrapper_osg_Node::_bind_traverse},
	{"getParents", &luna_wrapper_osg_Node::_bind_getParents},
	{"getParent", &luna_wrapper_osg_Node::_bind_getParent},
	{"getNumParents", &luna_wrapper_osg_Node::_bind_getNumParents},
	{"getParentalNodePaths", &luna_wrapper_osg_Node::_bind_getParentalNodePaths},
	{"getWorldMatrices", &luna_wrapper_osg_Node::_bind_getWorldMatrices},
	{"setUpdateCallback", &luna_wrapper_osg_Node::_bind_setUpdateCallback},
	{"getUpdateCallback", &luna_wrapper_osg_Node::_bind_getUpdateCallback},
	{"addUpdateCallback", &luna_wrapper_osg_Node::_bind_addUpdateCallback},
	{"removeUpdateCallback", &luna_wrapper_osg_Node::_bind_removeUpdateCallback},
	{"getNumChildrenRequiringUpdateTraversal", &luna_wrapper_osg_Node::_bind_getNumChildrenRequiringUpdateTraversal},
	{"setEventCallback", &luna_wrapper_osg_Node::_bind_setEventCallback},
	{"getEventCallback", &luna_wrapper_osg_Node::_bind_getEventCallback},
	{"addEventCallback", &luna_wrapper_osg_Node::_bind_addEventCallback},
	{"removeEventCallback", &luna_wrapper_osg_Node::_bind_removeEventCallback},
	{"getNumChildrenRequiringEventTraversal", &luna_wrapper_osg_Node::_bind_getNumChildrenRequiringEventTraversal},
	{"setCullCallback", &luna_wrapper_osg_Node::_bind_setCullCallback},
	{"getCullCallback", &luna_wrapper_osg_Node::_bind_getCullCallback},
	{"addCullCallback", &luna_wrapper_osg_Node::_bind_addCullCallback},
	{"removeCullCallback", &luna_wrapper_osg_Node::_bind_removeCullCallback},
	{"setCullingActive", &luna_wrapper_osg_Node::_bind_setCullingActive},
	{"getCullingActive", &luna_wrapper_osg_Node::_bind_getCullingActive},
	{"getNumChildrenWithCullingDisabled", &luna_wrapper_osg_Node::_bind_getNumChildrenWithCullingDisabled},
	{"isCullingActive", &luna_wrapper_osg_Node::_bind_isCullingActive},
	{"getNumChildrenWithOccluderNodes", &luna_wrapper_osg_Node::_bind_getNumChildrenWithOccluderNodes},
	{"containsOccluderNodes", &luna_wrapper_osg_Node::_bind_containsOccluderNodes},
	{"setNodeMask", &luna_wrapper_osg_Node::_bind_setNodeMask},
	{"getNodeMask", &luna_wrapper_osg_Node::_bind_getNodeMask},
	{"setStateSet", &luna_wrapper_osg_Node::_bind_setStateSet},
	{"getOrCreateStateSet", &luna_wrapper_osg_Node::_bind_getOrCreateStateSet},
	{"getStateSet", &luna_wrapper_osg_Node::_bind_getStateSet},
	{"setDescriptions", &luna_wrapper_osg_Node::_bind_setDescriptions},
	{"getDescriptions", &luna_wrapper_osg_Node::_bind_getDescriptions},
	{"getDescription", &luna_wrapper_osg_Node::_bind_getDescription},
	{"getNumDescriptions", &luna_wrapper_osg_Node::_bind_getNumDescriptions},
	{"addDescription", &luna_wrapper_osg_Node::_bind_addDescription},
	{"setInitialBound", &luna_wrapper_osg_Node::_bind_setInitialBound},
	{"getInitialBound", &luna_wrapper_osg_Node::_bind_getInitialBound},
	{"dirtyBound", &luna_wrapper_osg_Node::_bind_dirtyBound},
	{"getBound", &luna_wrapper_osg_Node::_bind_getBound},
	{"computeBound", &luna_wrapper_osg_Node::_bind_computeBound},
	{"setComputeBoundingSphereCallback", &luna_wrapper_osg_Node::_bind_setComputeBoundingSphereCallback},
	{"getComputeBoundingSphereCallback", &luna_wrapper_osg_Node::_bind_getComputeBoundingSphereCallback},
	{"setThreadSafeRefUnref", &luna_wrapper_osg_Node::_bind_setThreadSafeRefUnref},
	{"releaseGLObjects", &luna_wrapper_osg_Node::_bind_releaseGLObjects},
	{"base_setName", &luna_wrapper_osg_Node::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Node::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Node::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Node::_bind_base_getUserData},
	{"base_cloneType", &luna_wrapper_osg_Node::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Node::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Node::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Node::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Node::_bind_base_className},
	{"base_asGroup", &luna_wrapper_osg_Node::_bind_base_asGroup},
	{"base_asTransform", &luna_wrapper_osg_Node::_bind_base_asTransform},
	{"base_asCamera", &luna_wrapper_osg_Node::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osg_Node::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osg_Node::_bind_base_asGeode},
	{"base_accept", &luna_wrapper_osg_Node::_bind_base_accept},
	{"base_ascend", &luna_wrapper_osg_Node::_bind_base_ascend},
	{"base_traverse", &luna_wrapper_osg_Node::_bind_base_traverse},
	{"base_computeBound", &luna_wrapper_osg_Node::_bind_base_computeBound},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Node::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osg_Node::_bind_base_releaseGLObjects},
	{"fromVoid", &luna_wrapper_osg_Node::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Node::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Node::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Node >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Node::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Node >::enumValues[] = {
	{0,0}
};


