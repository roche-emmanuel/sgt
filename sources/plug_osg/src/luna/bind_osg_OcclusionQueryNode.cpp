#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_OcclusionQueryNode.h>

class luna_wrapper_osg_OcclusionQueryNode {
public:
	typedef Luna< osg::OcclusionQueryNode > luna_t;

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

		osg::OcclusionQueryNode* self= (osg::OcclusionQueryNode*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::OcclusionQueryNode >::push(L,self,false);
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
		//osg::OcclusionQueryNode* ptr= dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		osg::OcclusionQueryNode* ptr= luna_caster< osg::Referenced, osg::OcclusionQueryNode >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::OcclusionQueryNode >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setQueriesEnabled(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getQueriesEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVisibilityThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVisibilityThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setQueryFrameCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getQueryFrameCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDebugDisplay(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDebugDisplay(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setQueryStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getQueryStateSet_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getQueryStateSet_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDebugStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDebugStateSet_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDebugStateSet_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPassed_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPassed_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_traverseQuery(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_traverseDebug(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flushDeletedQueryObjects(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_discardDeletedQueryObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
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

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getPassed(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::OcclusionQueryNode::OcclusionQueryNode()
	static osg::OcclusionQueryNode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::OcclusionQueryNode::OcclusionQueryNode() function, expected prototype:\nosg::OcclusionQueryNode::OcclusionQueryNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::OcclusionQueryNode();
	}

	// osg::OcclusionQueryNode::OcclusionQueryNode(const osg::OcclusionQueryNode & oqn, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::OcclusionQueryNode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::OcclusionQueryNode::OcclusionQueryNode(const osg::OcclusionQueryNode & oqn, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::OcclusionQueryNode::OcclusionQueryNode(const osg::OcclusionQueryNode & oqn, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::OcclusionQueryNode* oqn_ptr=(Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1));
		if( !oqn_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg oqn in osg::OcclusionQueryNode::OcclusionQueryNode function");
		}
		const osg::OcclusionQueryNode & oqn=*oqn_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::OcclusionQueryNode::OcclusionQueryNode function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::OcclusionQueryNode(oqn, copyop);
	}

	// osg::OcclusionQueryNode::OcclusionQueryNode(lua_Table * data)
	static osg::OcclusionQueryNode* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::OcclusionQueryNode::OcclusionQueryNode(lua_Table * data) function, expected prototype:\nosg::OcclusionQueryNode::OcclusionQueryNode(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_OcclusionQueryNode(L,NULL);
	}

	// osg::OcclusionQueryNode::OcclusionQueryNode(lua_Table * data, const osg::OcclusionQueryNode & oqn, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::OcclusionQueryNode* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::OcclusionQueryNode::OcclusionQueryNode(lua_Table * data, const osg::OcclusionQueryNode & oqn, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::OcclusionQueryNode::OcclusionQueryNode(lua_Table * data, const osg::OcclusionQueryNode & oqn, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::OcclusionQueryNode* oqn_ptr=(Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,2));
		if( !oqn_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg oqn in osg::OcclusionQueryNode::OcclusionQueryNode function");
		}
		const osg::OcclusionQueryNode & oqn=*oqn_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::OcclusionQueryNode::OcclusionQueryNode function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_OcclusionQueryNode(L,NULL, oqn, copyop);
	}

	// Overload binder for osg::OcclusionQueryNode::OcclusionQueryNode
	static osg::OcclusionQueryNode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function OcclusionQueryNode, cannot match any of the overloads for function OcclusionQueryNode:\n  OcclusionQueryNode()\n  OcclusionQueryNode(const osg::OcclusionQueryNode &, const osg::CopyOp &)\n  OcclusionQueryNode(lua_Table *)\n  OcclusionQueryNode(lua_Table *, const osg::OcclusionQueryNode &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::OcclusionQueryNode::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::OcclusionQueryNode::cloneType() const function, expected prototype:\nosg::Object * osg::OcclusionQueryNode::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::OcclusionQueryNode::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::OcclusionQueryNode::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::OcclusionQueryNode::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::OcclusionQueryNode::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::OcclusionQueryNode::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::OcclusionQueryNode::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::OcclusionQueryNode::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::OcclusionQueryNode::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::OcclusionQueryNode::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::OcclusionQueryNode::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::OcclusionQueryNode::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::OcclusionQueryNode::className() const function, expected prototype:\nconst char * osg::OcclusionQueryNode::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::OcclusionQueryNode::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::OcclusionQueryNode::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::OcclusionQueryNode::libraryName() const function, expected prototype:\nconst char * osg::OcclusionQueryNode::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::OcclusionQueryNode::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::OcclusionQueryNode::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::OcclusionQueryNode::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::OcclusionQueryNode::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// osg::BoundingSphered osg::OcclusionQueryNode::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::OcclusionQueryNode::computeBound() const function, expected prototype:\nosg::BoundingSphered osg::OcclusionQueryNode::computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::OcclusionQueryNode::computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// void osg::OcclusionQueryNode::releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::OcclusionQueryNode::releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseGLObjects(_arg1);

		return 0;
	}

	// void osg::OcclusionQueryNode::setQueriesEnabled(bool enable = true)
	static int _bind_setQueriesEnabled(lua_State *L) {
		if (!_lg_typecheck_setQueriesEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::setQueriesEnabled(bool enable = true) function, expected prototype:\nvoid osg::OcclusionQueryNode::setQueriesEnabled(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::setQueriesEnabled(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setQueriesEnabled(enable);

		return 0;
	}

	// bool osg::OcclusionQueryNode::getQueriesEnabled() const
	static int _bind_getQueriesEnabled(lua_State *L) {
		if (!_lg_typecheck_getQueriesEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::OcclusionQueryNode::getQueriesEnabled() const function, expected prototype:\nbool osg::OcclusionQueryNode::getQueriesEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::OcclusionQueryNode::getQueriesEnabled() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getQueriesEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::OcclusionQueryNode::setVisibilityThreshold(unsigned int pixels)
	static int _bind_setVisibilityThreshold(lua_State *L) {
		if (!_lg_typecheck_setVisibilityThreshold(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::setVisibilityThreshold(unsigned int pixels) function, expected prototype:\nvoid osg::OcclusionQueryNode::setVisibilityThreshold(unsigned int pixels)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pixels=(unsigned int)lua_tointeger(L,2);

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::setVisibilityThreshold(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVisibilityThreshold(pixels);

		return 0;
	}

	// unsigned int osg::OcclusionQueryNode::getVisibilityThreshold() const
	static int _bind_getVisibilityThreshold(lua_State *L) {
		if (!_lg_typecheck_getVisibilityThreshold(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::OcclusionQueryNode::getVisibilityThreshold() const function, expected prototype:\nunsigned int osg::OcclusionQueryNode::getVisibilityThreshold() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::OcclusionQueryNode::getVisibilityThreshold() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getVisibilityThreshold();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::OcclusionQueryNode::setQueryFrameCount(unsigned int frames)
	static int _bind_setQueryFrameCount(lua_State *L) {
		if (!_lg_typecheck_setQueryFrameCount(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::setQueryFrameCount(unsigned int frames) function, expected prototype:\nvoid osg::OcclusionQueryNode::setQueryFrameCount(unsigned int frames)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int frames=(unsigned int)lua_tointeger(L,2);

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::setQueryFrameCount(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setQueryFrameCount(frames);

		return 0;
	}

	// unsigned int osg::OcclusionQueryNode::getQueryFrameCount() const
	static int _bind_getQueryFrameCount(lua_State *L) {
		if (!_lg_typecheck_getQueryFrameCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::OcclusionQueryNode::getQueryFrameCount() const function, expected prototype:\nunsigned int osg::OcclusionQueryNode::getQueryFrameCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::OcclusionQueryNode::getQueryFrameCount() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getQueryFrameCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::OcclusionQueryNode::setDebugDisplay(bool enable)
	static int _bind_setDebugDisplay(lua_State *L) {
		if (!_lg_typecheck_setDebugDisplay(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::setDebugDisplay(bool enable) function, expected prototype:\nvoid osg::OcclusionQueryNode::setDebugDisplay(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::setDebugDisplay(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDebugDisplay(enable);

		return 0;
	}

	// bool osg::OcclusionQueryNode::getDebugDisplay() const
	static int _bind_getDebugDisplay(lua_State *L) {
		if (!_lg_typecheck_getDebugDisplay(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::OcclusionQueryNode::getDebugDisplay() const function, expected prototype:\nbool osg::OcclusionQueryNode::getDebugDisplay() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::OcclusionQueryNode::getDebugDisplay() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getDebugDisplay();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::OcclusionQueryNode::setQueryStateSet(osg::StateSet * ss)
	static int _bind_setQueryStateSet(lua_State *L) {
		if (!_lg_typecheck_setQueryStateSet(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::setQueryStateSet(osg::StateSet * ss) function, expected prototype:\nvoid osg::OcclusionQueryNode::setQueryStateSet(osg::StateSet * ss)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* ss=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::setQueryStateSet(osg::StateSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setQueryStateSet(ss);

		return 0;
	}

	// osg::StateSet * osg::OcclusionQueryNode::getQueryStateSet()
	static int _bind_getQueryStateSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_getQueryStateSet_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet * osg::OcclusionQueryNode::getQueryStateSet() function, expected prototype:\nosg::StateSet * osg::OcclusionQueryNode::getQueryStateSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet * osg::OcclusionQueryNode::getQueryStateSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet * lret = self->getQueryStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet * osg::OcclusionQueryNode::getQueryStateSet() const
	static int _bind_getQueryStateSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_getQueryStateSet_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateSet * osg::OcclusionQueryNode::getQueryStateSet() const function, expected prototype:\nconst osg::StateSet * osg::OcclusionQueryNode::getQueryStateSet() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateSet * osg::OcclusionQueryNode::getQueryStateSet() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet * lret = self->getQueryStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::OcclusionQueryNode::getQueryStateSet
	static int _bind_getQueryStateSet(lua_State *L) {
		if (_lg_typecheck_getQueryStateSet_overload_1(L)) return _bind_getQueryStateSet_overload_1(L);
		if (_lg_typecheck_getQueryStateSet_overload_2(L)) return _bind_getQueryStateSet_overload_2(L);

		luaL_error(L, "error in function getQueryStateSet, cannot match any of the overloads for function getQueryStateSet:\n  getQueryStateSet()\n  getQueryStateSet()\n");
		return 0;
	}

	// void osg::OcclusionQueryNode::setDebugStateSet(osg::StateSet * ss)
	static int _bind_setDebugStateSet(lua_State *L) {
		if (!_lg_typecheck_setDebugStateSet(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::setDebugStateSet(osg::StateSet * ss) function, expected prototype:\nvoid osg::OcclusionQueryNode::setDebugStateSet(osg::StateSet * ss)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* ss=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::setDebugStateSet(osg::StateSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDebugStateSet(ss);

		return 0;
	}

	// osg::StateSet * osg::OcclusionQueryNode::getDebugStateSet()
	static int _bind_getDebugStateSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDebugStateSet_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet * osg::OcclusionQueryNode::getDebugStateSet() function, expected prototype:\nosg::StateSet * osg::OcclusionQueryNode::getDebugStateSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet * osg::OcclusionQueryNode::getDebugStateSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet * lret = self->getDebugStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet * osg::OcclusionQueryNode::getDebugStateSet() const
	static int _bind_getDebugStateSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDebugStateSet_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateSet * osg::OcclusionQueryNode::getDebugStateSet() const function, expected prototype:\nconst osg::StateSet * osg::OcclusionQueryNode::getDebugStateSet() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateSet * osg::OcclusionQueryNode::getDebugStateSet() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet * lret = self->getDebugStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::OcclusionQueryNode::getDebugStateSet
	static int _bind_getDebugStateSet(lua_State *L) {
		if (_lg_typecheck_getDebugStateSet_overload_1(L)) return _bind_getDebugStateSet_overload_1(L);
		if (_lg_typecheck_getDebugStateSet_overload_2(L)) return _bind_getDebugStateSet_overload_2(L);

		luaL_error(L, "error in function getDebugStateSet, cannot match any of the overloads for function getDebugStateSet:\n  getDebugStateSet()\n  getDebugStateSet()\n");
		return 0;
	}

	// bool osg::OcclusionQueryNode::getPassed() const
	static int _bind_getPassed_overload_1(lua_State *L) {
		if (!_lg_typecheck_getPassed_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::OcclusionQueryNode::getPassed() const function, expected prototype:\nbool osg::OcclusionQueryNode::getPassed() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::OcclusionQueryNode::getPassed() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getPassed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::OcclusionQueryNode::getPassed(const osg::Camera * camera, osg::NodeVisitor & nv)
	static int _bind_getPassed_overload_2(lua_State *L) {
		if (!_lg_typecheck_getPassed_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::OcclusionQueryNode::getPassed(const osg::Camera * camera, osg::NodeVisitor & nv) function, expected prototype:\nbool osg::OcclusionQueryNode::getPassed(const osg::Camera * camera, osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Camera* camera=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));
		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::OcclusionQueryNode::getPassed function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::OcclusionQueryNode::getPassed(const osg::Camera *, osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getPassed(camera, nv);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::OcclusionQueryNode::getPassed
	static int _bind_getPassed(lua_State *L) {
		if (_lg_typecheck_getPassed_overload_1(L)) return _bind_getPassed_overload_1(L);
		if (_lg_typecheck_getPassed_overload_2(L)) return _bind_getPassed_overload_2(L);

		luaL_error(L, "error in function getPassed, cannot match any of the overloads for function getPassed:\n  getPassed()\n  getPassed(const osg::Camera *, osg::NodeVisitor &)\n");
		return 0;
	}

	// void osg::OcclusionQueryNode::traverseQuery(const osg::Camera * camera, osg::NodeVisitor & nv)
	static int _bind_traverseQuery(lua_State *L) {
		if (!_lg_typecheck_traverseQuery(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::traverseQuery(const osg::Camera * camera, osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::OcclusionQueryNode::traverseQuery(const osg::Camera * camera, osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Camera* camera=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));
		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::OcclusionQueryNode::traverseQuery function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::traverseQuery(const osg::Camera *, osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->traverseQuery(camera, nv);

		return 0;
	}

	// void osg::OcclusionQueryNode::traverseDebug(osg::NodeVisitor & nv)
	static int _bind_traverseDebug(lua_State *L) {
		if (!_lg_typecheck_traverseDebug(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::traverseDebug(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::OcclusionQueryNode::traverseDebug(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::OcclusionQueryNode::traverseDebug function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::traverseDebug(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->traverseDebug(nv);

		return 0;
	}

	// static void osg::OcclusionQueryNode::flushDeletedQueryObjects(unsigned int contextID, double currentTime, double & availableTime)
	static int _bind_flushDeletedQueryObjects(lua_State *L) {
		if (!_lg_typecheck_flushDeletedQueryObjects(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::OcclusionQueryNode::flushDeletedQueryObjects(unsigned int contextID, double currentTime, double & availableTime) function, expected prototype:\nstatic void osg::OcclusionQueryNode::flushDeletedQueryObjects(unsigned int contextID, double currentTime, double & availableTime)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		double currentTime=(double)lua_tonumber(L,2);
		double availableTime=(double)lua_tonumber(L,3);

		osg::OcclusionQueryNode::flushDeletedQueryObjects(contextID, currentTime, availableTime);

		lua_pushnumber(L,availableTime);
		return 1;
	}

	// static void osg::OcclusionQueryNode::discardDeletedQueryObjects(unsigned int contextID)
	static int _bind_discardDeletedQueryObjects(lua_State *L) {
		if (!_lg_typecheck_discardDeletedQueryObjects(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::OcclusionQueryNode::discardDeletedQueryObjects(unsigned int contextID) function, expected prototype:\nstatic void osg::OcclusionQueryNode::discardDeletedQueryObjects(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::OcclusionQueryNode::discardDeletedQueryObjects(contextID);

		return 0;
	}

	// void osg::OcclusionQueryNode::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::base_setName(const std::string & name) function, expected prototype:\nvoid osg::OcclusionQueryNode::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OcclusionQueryNode::setName(name);

		return 0;
	}

	// void osg::OcclusionQueryNode::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::base_computeDataVariance() function, expected prototype:\nvoid osg::OcclusionQueryNode::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OcclusionQueryNode::computeDataVariance();

		return 0;
	}

	// void osg::OcclusionQueryNode::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::OcclusionQueryNode::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OcclusionQueryNode::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::OcclusionQueryNode::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::OcclusionQueryNode::base_getUserData() function, expected prototype:\nosg::Referenced * osg::OcclusionQueryNode::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::OcclusionQueryNode::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->OcclusionQueryNode::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::OcclusionQueryNode::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::OcclusionQueryNode::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::OcclusionQueryNode::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::OcclusionQueryNode::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->OcclusionQueryNode::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::OcclusionQueryNode::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Transform * osg::OcclusionQueryNode::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osg::OcclusionQueryNode::base_asTransform() function, expected prototype:\nosg::Transform * osg::OcclusionQueryNode::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osg::OcclusionQueryNode::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->OcclusionQueryNode::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osg::OcclusionQueryNode::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osg::OcclusionQueryNode::base_asTransform() const function, expected prototype:\nconst osg::Transform * osg::OcclusionQueryNode::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osg::OcclusionQueryNode::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->OcclusionQueryNode::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::OcclusionQueryNode::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::Camera * osg::OcclusionQueryNode::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osg::OcclusionQueryNode::base_asCamera() function, expected prototype:\nosg::Camera * osg::OcclusionQueryNode::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osg::OcclusionQueryNode::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->OcclusionQueryNode::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osg::OcclusionQueryNode::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osg::OcclusionQueryNode::base_asCamera() const function, expected prototype:\nconst osg::Camera * osg::OcclusionQueryNode::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osg::OcclusionQueryNode::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->OcclusionQueryNode::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::OcclusionQueryNode::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osg::OcclusionQueryNode::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osg::OcclusionQueryNode::base_asSwitch() function, expected prototype:\nosg::Switch * osg::OcclusionQueryNode::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osg::OcclusionQueryNode::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->OcclusionQueryNode::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osg::OcclusionQueryNode::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osg::OcclusionQueryNode::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osg::OcclusionQueryNode::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osg::OcclusionQueryNode::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->OcclusionQueryNode::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::OcclusionQueryNode::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osg::OcclusionQueryNode::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osg::OcclusionQueryNode::base_asGeode() function, expected prototype:\nosg::Geode * osg::OcclusionQueryNode::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osg::OcclusionQueryNode::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->OcclusionQueryNode::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osg::OcclusionQueryNode::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osg::OcclusionQueryNode::base_asGeode() const function, expected prototype:\nconst osg::Geode * osg::OcclusionQueryNode::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osg::OcclusionQueryNode::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->OcclusionQueryNode::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::OcclusionQueryNode::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osg::OcclusionQueryNode::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::OcclusionQueryNode::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::OcclusionQueryNode::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OcclusionQueryNode::ascend(nv);

		return 0;
	}

	// osg::Group * osg::OcclusionQueryNode::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osg::OcclusionQueryNode::base_asGroup() function, expected prototype:\nosg::Group * osg::OcclusionQueryNode::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osg::OcclusionQueryNode::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->OcclusionQueryNode::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osg::OcclusionQueryNode::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osg::OcclusionQueryNode::base_asGroup() const function, expected prototype:\nconst osg::Group * osg::OcclusionQueryNode::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osg::OcclusionQueryNode::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->OcclusionQueryNode::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::OcclusionQueryNode::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// void osg::OcclusionQueryNode::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::OcclusionQueryNode::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::OcclusionQueryNode::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OcclusionQueryNode::traverse(_arg1);

		return 0;
	}

	// bool osg::OcclusionQueryNode::base_addChild(osg::Node * child)
	static int _bind_base_addChild(lua_State *L) {
		if (!_lg_typecheck_base_addChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::OcclusionQueryNode::base_addChild(osg::Node * child) function, expected prototype:\nbool osg::OcclusionQueryNode::base_addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::OcclusionQueryNode::base_addChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OcclusionQueryNode::addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::OcclusionQueryNode::base_insertChild(unsigned int index, osg::Node * child)
	static int _bind_base_insertChild(lua_State *L) {
		if (!_lg_typecheck_base_insertChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::OcclusionQueryNode::base_insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osg::OcclusionQueryNode::base_insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::OcclusionQueryNode::base_insertChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OcclusionQueryNode::insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::OcclusionQueryNode::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_base_removeChildren(lua_State *L) {
		if (!_lg_typecheck_base_removeChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::OcclusionQueryNode::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osg::OcclusionQueryNode::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::OcclusionQueryNode::base_removeChildren(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OcclusionQueryNode::removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::OcclusionQueryNode::base_replaceChild(osg::Node * origChild, osg::Node * newChild)
	static int _bind_base_replaceChild(lua_State *L) {
		if (!_lg_typecheck_base_replaceChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::OcclusionQueryNode::base_replaceChild(osg::Node * origChild, osg::Node * newChild) function, expected prototype:\nbool osg::OcclusionQueryNode::base_replaceChild(osg::Node * origChild, osg::Node * newChild)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* origChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::Node* newChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::OcclusionQueryNode::base_replaceChild(osg::Node *, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OcclusionQueryNode::replaceChild(origChild, newChild);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::OcclusionQueryNode::base_setChild(unsigned int i, osg::Node * node)
	static int _bind_base_setChild(lua_State *L) {
		if (!_lg_typecheck_base_setChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::OcclusionQueryNode::base_setChild(unsigned int i, osg::Node * node) function, expected prototype:\nbool osg::OcclusionQueryNode::base_setChild(unsigned int i, osg::Node * node)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::OcclusionQueryNode::base_setChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OcclusionQueryNode::setChild(i, node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::OcclusionQueryNode::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::OcclusionQueryNode::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OcclusionQueryNode::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// osg::Object * osg::OcclusionQueryNode::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::OcclusionQueryNode::base_cloneType() const function, expected prototype:\nosg::Object * osg::OcclusionQueryNode::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::OcclusionQueryNode::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->OcclusionQueryNode::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::OcclusionQueryNode::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::OcclusionQueryNode::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::OcclusionQueryNode::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::OcclusionQueryNode::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::OcclusionQueryNode::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->OcclusionQueryNode::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::OcclusionQueryNode::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::OcclusionQueryNode::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::OcclusionQueryNode::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::OcclusionQueryNode::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OcclusionQueryNode::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::OcclusionQueryNode::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::OcclusionQueryNode::base_className() const function, expected prototype:\nconst char * osg::OcclusionQueryNode::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::OcclusionQueryNode::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->OcclusionQueryNode::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::OcclusionQueryNode::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::OcclusionQueryNode::base_libraryName() const function, expected prototype:\nconst char * osg::OcclusionQueryNode::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::OcclusionQueryNode::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->OcclusionQueryNode::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::OcclusionQueryNode::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::OcclusionQueryNode::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::OcclusionQueryNode::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OcclusionQueryNode::accept(nv);

		return 0;
	}

	// osg::BoundingSphered osg::OcclusionQueryNode::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::OcclusionQueryNode::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osg::OcclusionQueryNode::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::OcclusionQueryNode::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->OcclusionQueryNode::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// void osg::OcclusionQueryNode::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::OcclusionQueryNode::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OcclusionQueryNode::releaseGLObjects(_arg1);

		return 0;
	}

	// bool osg::OcclusionQueryNode::base_getPassed(const osg::Camera * camera, osg::NodeVisitor & nv)
	static int _bind_base_getPassed(lua_State *L) {
		if (!_lg_typecheck_base_getPassed(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::OcclusionQueryNode::base_getPassed(const osg::Camera * camera, osg::NodeVisitor & nv) function, expected prototype:\nbool osg::OcclusionQueryNode::base_getPassed(const osg::Camera * camera, osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Camera* camera=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));
		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::OcclusionQueryNode::base_getPassed function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::OcclusionQueryNode* self=Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::OcclusionQueryNode::base_getPassed(const osg::Camera *, osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OcclusionQueryNode::getPassed(camera, nv);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::OcclusionQueryNode* LunaTraits< osg::OcclusionQueryNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_OcclusionQueryNode::_bind_ctor(L);
}

void LunaTraits< osg::OcclusionQueryNode >::_bind_dtor(osg::OcclusionQueryNode* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::OcclusionQueryNode >::className[] = "OcclusionQueryNode";
const char LunaTraits< osg::OcclusionQueryNode >::fullName[] = "osg::OcclusionQueryNode";
const char LunaTraits< osg::OcclusionQueryNode >::moduleName[] = "osg";
const char* LunaTraits< osg::OcclusionQueryNode >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::OcclusionQueryNode >::hash = 36588064;
const int LunaTraits< osg::OcclusionQueryNode >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::OcclusionQueryNode >::methods[] = {
	{"cloneType", &luna_wrapper_osg_OcclusionQueryNode::_bind_cloneType},
	{"clone", &luna_wrapper_osg_OcclusionQueryNode::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_OcclusionQueryNode::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_OcclusionQueryNode::_bind_className},
	{"libraryName", &luna_wrapper_osg_OcclusionQueryNode::_bind_libraryName},
	{"accept", &luna_wrapper_osg_OcclusionQueryNode::_bind_accept},
	{"computeBound", &luna_wrapper_osg_OcclusionQueryNode::_bind_computeBound},
	{"releaseGLObjects", &luna_wrapper_osg_OcclusionQueryNode::_bind_releaseGLObjects},
	{"setQueriesEnabled", &luna_wrapper_osg_OcclusionQueryNode::_bind_setQueriesEnabled},
	{"getQueriesEnabled", &luna_wrapper_osg_OcclusionQueryNode::_bind_getQueriesEnabled},
	{"setVisibilityThreshold", &luna_wrapper_osg_OcclusionQueryNode::_bind_setVisibilityThreshold},
	{"getVisibilityThreshold", &luna_wrapper_osg_OcclusionQueryNode::_bind_getVisibilityThreshold},
	{"setQueryFrameCount", &luna_wrapper_osg_OcclusionQueryNode::_bind_setQueryFrameCount},
	{"getQueryFrameCount", &luna_wrapper_osg_OcclusionQueryNode::_bind_getQueryFrameCount},
	{"setDebugDisplay", &luna_wrapper_osg_OcclusionQueryNode::_bind_setDebugDisplay},
	{"getDebugDisplay", &luna_wrapper_osg_OcclusionQueryNode::_bind_getDebugDisplay},
	{"setQueryStateSet", &luna_wrapper_osg_OcclusionQueryNode::_bind_setQueryStateSet},
	{"getQueryStateSet", &luna_wrapper_osg_OcclusionQueryNode::_bind_getQueryStateSet},
	{"setDebugStateSet", &luna_wrapper_osg_OcclusionQueryNode::_bind_setDebugStateSet},
	{"getDebugStateSet", &luna_wrapper_osg_OcclusionQueryNode::_bind_getDebugStateSet},
	{"getPassed", &luna_wrapper_osg_OcclusionQueryNode::_bind_getPassed},
	{"traverseQuery", &luna_wrapper_osg_OcclusionQueryNode::_bind_traverseQuery},
	{"traverseDebug", &luna_wrapper_osg_OcclusionQueryNode::_bind_traverseDebug},
	{"flushDeletedQueryObjects", &luna_wrapper_osg_OcclusionQueryNode::_bind_flushDeletedQueryObjects},
	{"discardDeletedQueryObjects", &luna_wrapper_osg_OcclusionQueryNode::_bind_discardDeletedQueryObjects},
	{"base_setName", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_getUserData},
	{"base_asTransform", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_asTransform},
	{"base_asCamera", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_ascend},
	{"base_asGroup", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_asGroup},
	{"base_traverse", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_traverse},
	{"base_addChild", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_addChild},
	{"base_insertChild", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_insertChild},
	{"base_removeChildren", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_removeChildren},
	{"base_replaceChild", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_replaceChild},
	{"base_setChild", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_setChild},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_setThreadSafeRefUnref},
	{"base_cloneType", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_accept},
	{"base_computeBound", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_computeBound},
	{"base_releaseGLObjects", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_releaseGLObjects},
	{"base_getPassed", &luna_wrapper_osg_OcclusionQueryNode::_bind_base_getPassed},
	{"fromVoid", &luna_wrapper_osg_OcclusionQueryNode::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_OcclusionQueryNode::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_OcclusionQueryNode::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::OcclusionQueryNode >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_OcclusionQueryNode::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::OcclusionQueryNode >::enumValues[] = {
	{0,0}
};


