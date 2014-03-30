#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ClipNode.h>

class luna_wrapper_osg_ClipNode {
public:
	typedef Luna< osg::ClipNode > luna_t;

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

		osg::ClipNode* self= (osg::ClipNode*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ClipNode >::push(L,self,false);
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
		//osg::ClipNode* ptr= dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,1));
		osg::ClipNode* ptr= luna_caster< osg::Referenced, osg::ClipNode >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ClipNode >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setReferenceFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferenceFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_createClipBox(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41227270) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addClipPlane(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeClipPlane_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeClipPlane_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumClipPlanes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getClipPlane_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClipPlane_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setClipPlaneList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,53517213) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClipPlaneList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getClipPlaneList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStateSetModes(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalStateSetModes(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
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

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ClipNode::ClipNode()
	static osg::ClipNode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ClipNode::ClipNode() function, expected prototype:\nosg::ClipNode::ClipNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::ClipNode();
	}

	// osg::ClipNode::ClipNode(const osg::ClipNode & es, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ClipNode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ClipNode::ClipNode(const osg::ClipNode & es, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ClipNode::ClipNode(const osg::ClipNode & es, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::ClipNode* es_ptr=(Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1));
		if( !es_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg es in osg::ClipNode::ClipNode function");
		}
		const osg::ClipNode & es=*es_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ClipNode::ClipNode function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::ClipNode(es, copyop);
	}

	// osg::ClipNode::ClipNode(lua_Table * data)
	static osg::ClipNode* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::ClipNode::ClipNode(lua_Table * data) function, expected prototype:\nosg::ClipNode::ClipNode(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_ClipNode(L,NULL);
	}

	// osg::ClipNode::ClipNode(lua_Table * data, const osg::ClipNode & es, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ClipNode* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::ClipNode::ClipNode(lua_Table * data, const osg::ClipNode & es, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ClipNode::ClipNode(lua_Table * data, const osg::ClipNode & es, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::ClipNode* es_ptr=(Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,2));
		if( !es_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg es in osg::ClipNode::ClipNode function");
		}
		const osg::ClipNode & es=*es_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ClipNode::ClipNode function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_ClipNode(L,NULL, es, copyop);
	}

	// Overload binder for osg::ClipNode::ClipNode
	static osg::ClipNode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ClipNode, cannot match any of the overloads for function ClipNode:\n  ClipNode()\n  ClipNode(const osg::ClipNode &, const osg::CopyOp &)\n  ClipNode(lua_Table *)\n  ClipNode(lua_Table *, const osg::ClipNode &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ClipNode::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ClipNode::cloneType() const function, expected prototype:\nosg::Object * osg::ClipNode::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ClipNode::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ClipNode::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ClipNode::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::ClipNode::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ClipNode::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ClipNode::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ClipNode::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ClipNode::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ClipNode::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ClipNode::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ClipNode::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ClipNode::className() const function, expected prototype:\nconst char * osg::ClipNode::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ClipNode::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ClipNode::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ClipNode::libraryName() const function, expected prototype:\nconst char * osg::ClipNode::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ClipNode::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::ClipNode::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClipNode::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::ClipNode::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::ClipNode::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClipNode::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// void osg::ClipNode::setReferenceFrame(osg::ClipNode::ReferenceFrame rf)
	static int _bind_setReferenceFrame(lua_State *L) {
		if (!_lg_typecheck_setReferenceFrame(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClipNode::setReferenceFrame(osg::ClipNode::ReferenceFrame rf) function, expected prototype:\nvoid osg::ClipNode::setReferenceFrame(osg::ClipNode::ReferenceFrame rf)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ClipNode::ReferenceFrame rf=(osg::ClipNode::ReferenceFrame)lua_tointeger(L,2);

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClipNode::setReferenceFrame(osg::ClipNode::ReferenceFrame). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setReferenceFrame(rf);

		return 0;
	}

	// osg::ClipNode::ReferenceFrame osg::ClipNode::getReferenceFrame() const
	static int _bind_getReferenceFrame(lua_State *L) {
		if (!_lg_typecheck_getReferenceFrame(L)) {
			luaL_error(L, "luna typecheck failed in osg::ClipNode::ReferenceFrame osg::ClipNode::getReferenceFrame() const function, expected prototype:\nosg::ClipNode::ReferenceFrame osg::ClipNode::getReferenceFrame() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ClipNode::ReferenceFrame osg::ClipNode::getReferenceFrame() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ClipNode::ReferenceFrame lret = self->getReferenceFrame();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ClipNode::createClipBox(const osg::BoundingBoxd & bb, unsigned int clipPlaneNumberBase = 0)
	static int _bind_createClipBox(lua_State *L) {
		if (!_lg_typecheck_createClipBox(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClipNode::createClipBox(const osg::BoundingBoxd & bb, unsigned int clipPlaneNumberBase = 0) function, expected prototype:\nvoid osg::ClipNode::createClipBox(const osg::BoundingBoxd & bb, unsigned int clipPlaneNumberBase = 0)\nClass arguments details:\narg 1 ID = 82744897\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::BoundingBoxd* bb_ptr=(Luna< osg::BoundingBoxImpl< osg::Vec3d > >::checkSubType< osg::BoundingBoxd >(L,2));
		if( !bb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bb in osg::ClipNode::createClipBox function");
		}
		const osg::BoundingBoxd & bb=*bb_ptr;
		unsigned int clipPlaneNumberBase=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClipNode::createClipBox(const osg::BoundingBoxd &, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->createClipBox(bb, clipPlaneNumberBase);

		return 0;
	}

	// bool osg::ClipNode::addClipPlane(osg::ClipPlane * clipplane)
	static int _bind_addClipPlane(lua_State *L) {
		if (!_lg_typecheck_addClipPlane(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ClipNode::addClipPlane(osg::ClipPlane * clipplane) function, expected prototype:\nbool osg::ClipNode::addClipPlane(osg::ClipPlane * clipplane)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ClipPlane* clipplane=(Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,2));

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ClipNode::addClipPlane(osg::ClipPlane *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addClipPlane(clipplane);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ClipNode::removeClipPlane(osg::ClipPlane * clipplane)
	static int _bind_removeClipPlane_overload_1(lua_State *L) {
		if (!_lg_typecheck_removeClipPlane_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ClipNode::removeClipPlane(osg::ClipPlane * clipplane) function, expected prototype:\nbool osg::ClipNode::removeClipPlane(osg::ClipPlane * clipplane)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ClipPlane* clipplane=(Luna< osg::Referenced >::checkSubType< osg::ClipPlane >(L,2));

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ClipNode::removeClipPlane(osg::ClipPlane *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->removeClipPlane(clipplane);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ClipNode::removeClipPlane(unsigned int pos)
	static int _bind_removeClipPlane_overload_2(lua_State *L) {
		if (!_lg_typecheck_removeClipPlane_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ClipNode::removeClipPlane(unsigned int pos) function, expected prototype:\nbool osg::ClipNode::removeClipPlane(unsigned int pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ClipNode::removeClipPlane(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->removeClipPlane(pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::ClipNode::removeClipPlane
	static int _bind_removeClipPlane(lua_State *L) {
		if (_lg_typecheck_removeClipPlane_overload_1(L)) return _bind_removeClipPlane_overload_1(L);
		if (_lg_typecheck_removeClipPlane_overload_2(L)) return _bind_removeClipPlane_overload_2(L);

		luaL_error(L, "error in function removeClipPlane, cannot match any of the overloads for function removeClipPlane:\n  removeClipPlane(osg::ClipPlane *)\n  removeClipPlane(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::ClipNode::getNumClipPlanes() const
	static int _bind_getNumClipPlanes(lua_State *L) {
		if (!_lg_typecheck_getNumClipPlanes(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::ClipNode::getNumClipPlanes() const function, expected prototype:\nunsigned int osg::ClipNode::getNumClipPlanes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::ClipNode::getNumClipPlanes() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumClipPlanes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::ClipPlane * osg::ClipNode::getClipPlane(unsigned int pos)
	static int _bind_getClipPlane_overload_1(lua_State *L) {
		if (!_lg_typecheck_getClipPlane_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ClipPlane * osg::ClipNode::getClipPlane(unsigned int pos) function, expected prototype:\nosg::ClipPlane * osg::ClipNode::getClipPlane(unsigned int pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ClipPlane * osg::ClipNode::getClipPlane(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ClipPlane * lret = self->getClipPlane(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ClipPlane >::push(L,lret,false);

		return 1;
	}

	// const osg::ClipPlane * osg::ClipNode::getClipPlane(unsigned int pos) const
	static int _bind_getClipPlane_overload_2(lua_State *L) {
		if (!_lg_typecheck_getClipPlane_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::ClipPlane * osg::ClipNode::getClipPlane(unsigned int pos) const function, expected prototype:\nconst osg::ClipPlane * osg::ClipNode::getClipPlane(unsigned int pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::ClipPlane * osg::ClipNode::getClipPlane(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ClipPlane * lret = self->getClipPlane(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ClipPlane >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ClipNode::getClipPlane
	static int _bind_getClipPlane(lua_State *L) {
		if (_lg_typecheck_getClipPlane_overload_1(L)) return _bind_getClipPlane_overload_1(L);
		if (_lg_typecheck_getClipPlane_overload_2(L)) return _bind_getClipPlane_overload_2(L);

		luaL_error(L, "error in function getClipPlane, cannot match any of the overloads for function getClipPlane:\n  getClipPlane(unsigned int)\n  getClipPlane(unsigned int)\n");
		return 0;
	}

	// void osg::ClipNode::setClipPlaneList(const osg::ClipNode::ClipPlaneList & cpl)
	static int _bind_setClipPlaneList(lua_State *L) {
		if (!_lg_typecheck_setClipPlaneList(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClipNode::setClipPlaneList(const osg::ClipNode::ClipPlaneList & cpl) function, expected prototype:\nvoid osg::ClipNode::setClipPlaneList(const osg::ClipNode::ClipPlaneList & cpl)\nClass arguments details:\narg 1 ID = 73670266\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::ClipNode::ClipPlaneList* cpl_ptr=(Luna< std::vector< osg::ref_ptr< osg::ClipPlane > > >::checkSubType< osg::ClipNode::ClipPlaneList >(L,2));
		if( !cpl_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cpl in osg::ClipNode::setClipPlaneList function");
		}
		const osg::ClipNode::ClipPlaneList & cpl=*cpl_ptr;

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClipNode::setClipPlaneList(const osg::ClipNode::ClipPlaneList &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setClipPlaneList(cpl);

		return 0;
	}

	// osg::ClipNode::ClipPlaneList & osg::ClipNode::getClipPlaneList()
	static int _bind_getClipPlaneList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getClipPlaneList_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ClipNode::ClipPlaneList & osg::ClipNode::getClipPlaneList() function, expected prototype:\nosg::ClipNode::ClipPlaneList & osg::ClipNode::getClipPlaneList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ClipNode::ClipPlaneList & osg::ClipNode::getClipPlaneList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ClipNode::ClipPlaneList* lret = &self->getClipPlaneList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ClipNode::ClipPlaneList >::push(L,lret,false);

		return 1;
	}

	// const osg::ClipNode::ClipPlaneList & osg::ClipNode::getClipPlaneList() const
	static int _bind_getClipPlaneList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getClipPlaneList_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::ClipNode::ClipPlaneList & osg::ClipNode::getClipPlaneList() const function, expected prototype:\nconst osg::ClipNode::ClipPlaneList & osg::ClipNode::getClipPlaneList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::ClipNode::ClipPlaneList & osg::ClipNode::getClipPlaneList() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ClipNode::ClipPlaneList* lret = &self->getClipPlaneList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ClipNode::ClipPlaneList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ClipNode::getClipPlaneList
	static int _bind_getClipPlaneList(lua_State *L) {
		if (_lg_typecheck_getClipPlaneList_overload_1(L)) return _bind_getClipPlaneList_overload_1(L);
		if (_lg_typecheck_getClipPlaneList_overload_2(L)) return _bind_getClipPlaneList_overload_2(L);

		luaL_error(L, "error in function getClipPlaneList, cannot match any of the overloads for function getClipPlaneList:\n  getClipPlaneList()\n  getClipPlaneList()\n");
		return 0;
	}

	// void osg::ClipNode::setStateSetModes(osg::StateSet & arg1, unsigned int arg2) const
	static int _bind_setStateSetModes(lua_State *L) {
		if (!_lg_typecheck_setStateSetModes(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClipNode::setStateSetModes(osg::StateSet & arg1, unsigned int arg2) const function, expected prototype:\nvoid osg::ClipNode::setStateSetModes(osg::StateSet & arg1, unsigned int arg2) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ClipNode::setStateSetModes function");
		}
		osg::StateSet & _arg1=*_arg1_ptr;
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClipNode::setStateSetModes(osg::StateSet &, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStateSetModes(_arg1, _arg2);

		return 0;
	}

	// void osg::ClipNode::setLocalStateSetModes(unsigned int arg1 = osg::StateAttribute::ON)
	static int _bind_setLocalStateSetModes(lua_State *L) {
		if (!_lg_typecheck_setLocalStateSetModes(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClipNode::setLocalStateSetModes(unsigned int arg1 = osg::StateAttribute::ON) function, expected prototype:\nvoid osg::ClipNode::setLocalStateSetModes(unsigned int arg1 = osg::StateAttribute::ON)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int _arg1=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)osg::StateAttribute::ON;

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClipNode::setLocalStateSetModes(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLocalStateSetModes(_arg1);

		return 0;
	}

	// osg::BoundingSphered osg::ClipNode::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::ClipNode::computeBound() const function, expected prototype:\nosg::BoundingSphered osg::ClipNode::computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::ClipNode::computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// void osg::ClipNode::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClipNode::base_setName(const std::string & name) function, expected prototype:\nvoid osg::ClipNode::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClipNode::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClipNode::setName(name);

		return 0;
	}

	// void osg::ClipNode::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClipNode::base_computeDataVariance() function, expected prototype:\nvoid osg::ClipNode::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClipNode::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClipNode::computeDataVariance();

		return 0;
	}

	// void osg::ClipNode::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClipNode::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::ClipNode::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClipNode::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClipNode::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::ClipNode::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::ClipNode::base_getUserData() function, expected prototype:\nosg::Referenced * osg::ClipNode::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::ClipNode::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->ClipNode::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::ClipNode::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::ClipNode::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::ClipNode::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::ClipNode::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->ClipNode::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ClipNode::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Transform * osg::ClipNode::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osg::ClipNode::base_asTransform() function, expected prototype:\nosg::Transform * osg::ClipNode::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osg::ClipNode::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->ClipNode::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osg::ClipNode::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osg::ClipNode::base_asTransform() const function, expected prototype:\nconst osg::Transform * osg::ClipNode::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osg::ClipNode::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->ClipNode::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ClipNode::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::Camera * osg::ClipNode::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osg::ClipNode::base_asCamera() function, expected prototype:\nosg::Camera * osg::ClipNode::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osg::ClipNode::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->ClipNode::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osg::ClipNode::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osg::ClipNode::base_asCamera() const function, expected prototype:\nconst osg::Camera * osg::ClipNode::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osg::ClipNode::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->ClipNode::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ClipNode::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osg::ClipNode::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osg::ClipNode::base_asSwitch() function, expected prototype:\nosg::Switch * osg::ClipNode::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osg::ClipNode::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->ClipNode::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osg::ClipNode::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osg::ClipNode::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osg::ClipNode::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osg::ClipNode::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->ClipNode::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ClipNode::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osg::ClipNode::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osg::ClipNode::base_asGeode() function, expected prototype:\nosg::Geode * osg::ClipNode::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osg::ClipNode::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->ClipNode::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osg::ClipNode::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osg::ClipNode::base_asGeode() const function, expected prototype:\nconst osg::Geode * osg::ClipNode::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osg::ClipNode::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->ClipNode::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ClipNode::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osg::ClipNode::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClipNode::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::ClipNode::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::ClipNode::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClipNode::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClipNode::ascend(nv);

		return 0;
	}

	// osg::Group * osg::ClipNode::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osg::ClipNode::base_asGroup() function, expected prototype:\nosg::Group * osg::ClipNode::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osg::ClipNode::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->ClipNode::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osg::ClipNode::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osg::ClipNode::base_asGroup() const function, expected prototype:\nconst osg::Group * osg::ClipNode::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osg::ClipNode::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->ClipNode::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ClipNode::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// void osg::ClipNode::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClipNode::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::ClipNode::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ClipNode::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClipNode::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClipNode::traverse(_arg1);

		return 0;
	}

	// bool osg::ClipNode::base_addChild(osg::Node * child)
	static int _bind_base_addChild(lua_State *L) {
		if (!_lg_typecheck_base_addChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ClipNode::base_addChild(osg::Node * child) function, expected prototype:\nbool osg::ClipNode::base_addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ClipNode::base_addChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ClipNode::addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ClipNode::base_insertChild(unsigned int index, osg::Node * child)
	static int _bind_base_insertChild(lua_State *L) {
		if (!_lg_typecheck_base_insertChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ClipNode::base_insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osg::ClipNode::base_insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ClipNode::base_insertChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ClipNode::insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ClipNode::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_base_removeChildren(lua_State *L) {
		if (!_lg_typecheck_base_removeChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ClipNode::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osg::ClipNode::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ClipNode::base_removeChildren(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ClipNode::removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ClipNode::base_replaceChild(osg::Node * origChild, osg::Node * newChild)
	static int _bind_base_replaceChild(lua_State *L) {
		if (!_lg_typecheck_base_replaceChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ClipNode::base_replaceChild(osg::Node * origChild, osg::Node * newChild) function, expected prototype:\nbool osg::ClipNode::base_replaceChild(osg::Node * origChild, osg::Node * newChild)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* origChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::Node* newChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ClipNode::base_replaceChild(osg::Node *, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ClipNode::replaceChild(origChild, newChild);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ClipNode::base_setChild(unsigned int i, osg::Node * node)
	static int _bind_base_setChild(lua_State *L) {
		if (!_lg_typecheck_base_setChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ClipNode::base_setChild(unsigned int i, osg::Node * node) function, expected prototype:\nbool osg::ClipNode::base_setChild(unsigned int i, osg::Node * node)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ClipNode::base_setChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ClipNode::setChild(i, node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ClipNode::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClipNode::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::ClipNode::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClipNode::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClipNode::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::ClipNode::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClipNode::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::ClipNode::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClipNode::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClipNode::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::ClipNode::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ClipNode::base_cloneType() const function, expected prototype:\nosg::Object * osg::ClipNode::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ClipNode::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ClipNode::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ClipNode::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ClipNode::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::ClipNode::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ClipNode::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ClipNode::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ClipNode::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ClipNode::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ClipNode::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ClipNode::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ClipNode::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ClipNode::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ClipNode::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ClipNode::base_className() const function, expected prototype:\nconst char * osg::ClipNode::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ClipNode::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ClipNode::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ClipNode::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ClipNode::base_libraryName() const function, expected prototype:\nconst char * osg::ClipNode::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ClipNode::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ClipNode::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::ClipNode::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClipNode::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::ClipNode::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::ClipNode::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClipNode::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClipNode::accept(nv);

		return 0;
	}

	// osg::BoundingSphered osg::ClipNode::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::ClipNode::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osg::ClipNode::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClipNode* self=Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::ClipNode::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->ClipNode::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::ClipNode* LunaTraits< osg::ClipNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ClipNode::_bind_ctor(L);
}

void LunaTraits< osg::ClipNode >::_bind_dtor(osg::ClipNode* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ClipNode >::className[] = "ClipNode";
const char LunaTraits< osg::ClipNode >::fullName[] = "osg::ClipNode";
const char LunaTraits< osg::ClipNode >::moduleName[] = "osg";
const char* LunaTraits< osg::ClipNode >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::ClipNode >::hash = 4866665;
const int LunaTraits< osg::ClipNode >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ClipNode >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ClipNode::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ClipNode::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ClipNode::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_ClipNode::_bind_className},
	{"libraryName", &luna_wrapper_osg_ClipNode::_bind_libraryName},
	{"accept", &luna_wrapper_osg_ClipNode::_bind_accept},
	{"setReferenceFrame", &luna_wrapper_osg_ClipNode::_bind_setReferenceFrame},
	{"getReferenceFrame", &luna_wrapper_osg_ClipNode::_bind_getReferenceFrame},
	{"createClipBox", &luna_wrapper_osg_ClipNode::_bind_createClipBox},
	{"addClipPlane", &luna_wrapper_osg_ClipNode::_bind_addClipPlane},
	{"removeClipPlane", &luna_wrapper_osg_ClipNode::_bind_removeClipPlane},
	{"getNumClipPlanes", &luna_wrapper_osg_ClipNode::_bind_getNumClipPlanes},
	{"getClipPlane", &luna_wrapper_osg_ClipNode::_bind_getClipPlane},
	{"setClipPlaneList", &luna_wrapper_osg_ClipNode::_bind_setClipPlaneList},
	{"getClipPlaneList", &luna_wrapper_osg_ClipNode::_bind_getClipPlaneList},
	{"setStateSetModes", &luna_wrapper_osg_ClipNode::_bind_setStateSetModes},
	{"setLocalStateSetModes", &luna_wrapper_osg_ClipNode::_bind_setLocalStateSetModes},
	{"computeBound", &luna_wrapper_osg_ClipNode::_bind_computeBound},
	{"base_setName", &luna_wrapper_osg_ClipNode::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_ClipNode::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_ClipNode::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_ClipNode::_bind_base_getUserData},
	{"base_asTransform", &luna_wrapper_osg_ClipNode::_bind_base_asTransform},
	{"base_asCamera", &luna_wrapper_osg_ClipNode::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osg_ClipNode::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osg_ClipNode::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osg_ClipNode::_bind_base_ascend},
	{"base_asGroup", &luna_wrapper_osg_ClipNode::_bind_base_asGroup},
	{"base_traverse", &luna_wrapper_osg_ClipNode::_bind_base_traverse},
	{"base_addChild", &luna_wrapper_osg_ClipNode::_bind_base_addChild},
	{"base_insertChild", &luna_wrapper_osg_ClipNode::_bind_base_insertChild},
	{"base_removeChildren", &luna_wrapper_osg_ClipNode::_bind_base_removeChildren},
	{"base_replaceChild", &luna_wrapper_osg_ClipNode::_bind_base_replaceChild},
	{"base_setChild", &luna_wrapper_osg_ClipNode::_bind_base_setChild},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_ClipNode::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osg_ClipNode::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_ClipNode::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_ClipNode::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_ClipNode::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osg_ClipNode::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osg_ClipNode::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osg_ClipNode::_bind_base_accept},
	{"base_computeBound", &luna_wrapper_osg_ClipNode::_bind_base_computeBound},
	{"fromVoid", &luna_wrapper_osg_ClipNode::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ClipNode::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_ClipNode::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ClipNode >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ClipNode::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ClipNode >::enumValues[] = {
	{"RELATIVE_RF", osg::ClipNode::RELATIVE_RF},
	{"ABSOLUTE_RF", osg::ClipNode::ABSOLUTE_RF},
	{0,0}
};


