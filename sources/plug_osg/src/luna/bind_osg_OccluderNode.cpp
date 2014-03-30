#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_OccluderNode.h>

class luna_wrapper_osg_OccluderNode {
public:
	typedef Luna< osg::OccluderNode > luna_t;

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

		osg::OccluderNode* self= (osg::OccluderNode*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::OccluderNode >::push(L,self,false);
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
		//osg::OccluderNode* ptr= dynamic_cast< osg::OccluderNode* >(Luna< osg::Referenced >::check(L,1));
		osg::OccluderNode* ptr= luna_caster< osg::Referenced, osg::OccluderNode >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::OccluderNode >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setOccluder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOccluder_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOccluder_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// osg::OccluderNode::OccluderNode()
	static osg::OccluderNode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::OccluderNode::OccluderNode() function, expected prototype:\nosg::OccluderNode::OccluderNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::OccluderNode();
	}

	// osg::OccluderNode::OccluderNode(const osg::OccluderNode & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::OccluderNode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::OccluderNode::OccluderNode(const osg::OccluderNode & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::OccluderNode::OccluderNode(const osg::OccluderNode & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::OccluderNode* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::OccluderNode::OccluderNode function");
		}
		const osg::OccluderNode & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::OccluderNode::OccluderNode function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::OccluderNode(_arg1, copyop);
	}

	// osg::OccluderNode::OccluderNode(lua_Table * data)
	static osg::OccluderNode* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::OccluderNode::OccluderNode(lua_Table * data) function, expected prototype:\nosg::OccluderNode::OccluderNode(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_OccluderNode(L,NULL);
	}

	// osg::OccluderNode::OccluderNode(lua_Table * data, const osg::OccluderNode & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::OccluderNode* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::OccluderNode::OccluderNode(lua_Table * data, const osg::OccluderNode & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::OccluderNode::OccluderNode(lua_Table * data, const osg::OccluderNode & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::OccluderNode* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::OccluderNode::OccluderNode function");
		}
		const osg::OccluderNode & _arg2=*_arg2_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::OccluderNode::OccluderNode function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_OccluderNode(L,NULL, _arg2, copyop);
	}

	// Overload binder for osg::OccluderNode::OccluderNode
	static osg::OccluderNode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function OccluderNode, cannot match any of the overloads for function OccluderNode:\n  OccluderNode()\n  OccluderNode(const osg::OccluderNode &, const osg::CopyOp &)\n  OccluderNode(lua_Table *)\n  OccluderNode(lua_Table *, const osg::OccluderNode &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::OccluderNode::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::OccluderNode::cloneType() const function, expected prototype:\nosg::Object * osg::OccluderNode::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::OccluderNode::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::OccluderNode::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::OccluderNode::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::OccluderNode::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::OccluderNode::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::OccluderNode::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::OccluderNode::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::OccluderNode::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::OccluderNode::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::OccluderNode::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::OccluderNode::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::OccluderNode::className() const function, expected prototype:\nconst char * osg::OccluderNode::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::OccluderNode::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::OccluderNode::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::OccluderNode::libraryName() const function, expected prototype:\nconst char * osg::OccluderNode::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::OccluderNode::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::OccluderNode::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OccluderNode::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::OccluderNode::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::OccluderNode::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OccluderNode::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// void osg::OccluderNode::setOccluder(osg::ConvexPlanarOccluder * occluder)
	static int _bind_setOccluder(lua_State *L) {
		if (!_lg_typecheck_setOccluder(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OccluderNode::setOccluder(osg::ConvexPlanarOccluder * occluder) function, expected prototype:\nvoid osg::OccluderNode::setOccluder(osg::ConvexPlanarOccluder * occluder)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ConvexPlanarOccluder* occluder=(Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,2));

		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OccluderNode::setOccluder(osg::ConvexPlanarOccluder *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOccluder(occluder);

		return 0;
	}

	// osg::ConvexPlanarOccluder * osg::OccluderNode::getOccluder()
	static int _bind_getOccluder_overload_1(lua_State *L) {
		if (!_lg_typecheck_getOccluder_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ConvexPlanarOccluder * osg::OccluderNode::getOccluder() function, expected prototype:\nosg::ConvexPlanarOccluder * osg::OccluderNode::getOccluder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ConvexPlanarOccluder * osg::OccluderNode::getOccluder(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ConvexPlanarOccluder * lret = self->getOccluder();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ConvexPlanarOccluder >::push(L,lret,false);

		return 1;
	}

	// const osg::ConvexPlanarOccluder * osg::OccluderNode::getOccluder() const
	static int _bind_getOccluder_overload_2(lua_State *L) {
		if (!_lg_typecheck_getOccluder_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::ConvexPlanarOccluder * osg::OccluderNode::getOccluder() const function, expected prototype:\nconst osg::ConvexPlanarOccluder * osg::OccluderNode::getOccluder() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::ConvexPlanarOccluder * osg::OccluderNode::getOccluder() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ConvexPlanarOccluder * lret = self->getOccluder();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ConvexPlanarOccluder >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::OccluderNode::getOccluder
	static int _bind_getOccluder(lua_State *L) {
		if (_lg_typecheck_getOccluder_overload_1(L)) return _bind_getOccluder_overload_1(L);
		if (_lg_typecheck_getOccluder_overload_2(L)) return _bind_getOccluder_overload_2(L);

		luaL_error(L, "error in function getOccluder, cannot match any of the overloads for function getOccluder:\n  getOccluder()\n  getOccluder()\n");
		return 0;
	}

	// osg::BoundingSphered osg::OccluderNode::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::OccluderNode::computeBound() const function, expected prototype:\nosg::BoundingSphered osg::OccluderNode::computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::OccluderNode::computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// void osg::OccluderNode::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OccluderNode::base_setName(const std::string & name) function, expected prototype:\nvoid osg::OccluderNode::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OccluderNode::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OccluderNode::setName(name);

		return 0;
	}

	// void osg::OccluderNode::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OccluderNode::base_computeDataVariance() function, expected prototype:\nvoid osg::OccluderNode::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OccluderNode::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OccluderNode::computeDataVariance();

		return 0;
	}

	// void osg::OccluderNode::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OccluderNode::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::OccluderNode::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OccluderNode::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OccluderNode::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::OccluderNode::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::OccluderNode::base_getUserData() function, expected prototype:\nosg::Referenced * osg::OccluderNode::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::OccluderNode::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->OccluderNode::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::OccluderNode::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::OccluderNode::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::OccluderNode::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::OccluderNode::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->OccluderNode::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::OccluderNode::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Transform * osg::OccluderNode::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osg::OccluderNode::base_asTransform() function, expected prototype:\nosg::Transform * osg::OccluderNode::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osg::OccluderNode::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->OccluderNode::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osg::OccluderNode::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osg::OccluderNode::base_asTransform() const function, expected prototype:\nconst osg::Transform * osg::OccluderNode::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osg::OccluderNode::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->OccluderNode::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::OccluderNode::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::Camera * osg::OccluderNode::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osg::OccluderNode::base_asCamera() function, expected prototype:\nosg::Camera * osg::OccluderNode::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osg::OccluderNode::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->OccluderNode::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osg::OccluderNode::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osg::OccluderNode::base_asCamera() const function, expected prototype:\nconst osg::Camera * osg::OccluderNode::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osg::OccluderNode::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->OccluderNode::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::OccluderNode::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osg::OccluderNode::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osg::OccluderNode::base_asSwitch() function, expected prototype:\nosg::Switch * osg::OccluderNode::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osg::OccluderNode::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->OccluderNode::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osg::OccluderNode::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osg::OccluderNode::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osg::OccluderNode::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osg::OccluderNode::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->OccluderNode::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::OccluderNode::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osg::OccluderNode::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osg::OccluderNode::base_asGeode() function, expected prototype:\nosg::Geode * osg::OccluderNode::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osg::OccluderNode::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->OccluderNode::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osg::OccluderNode::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osg::OccluderNode::base_asGeode() const function, expected prototype:\nconst osg::Geode * osg::OccluderNode::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osg::OccluderNode::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->OccluderNode::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::OccluderNode::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osg::OccluderNode::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OccluderNode::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::OccluderNode::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::OccluderNode::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OccluderNode::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OccluderNode::ascend(nv);

		return 0;
	}

	// osg::Group * osg::OccluderNode::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osg::OccluderNode::base_asGroup() function, expected prototype:\nosg::Group * osg::OccluderNode::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osg::OccluderNode::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->OccluderNode::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osg::OccluderNode::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osg::OccluderNode::base_asGroup() const function, expected prototype:\nconst osg::Group * osg::OccluderNode::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osg::OccluderNode::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->OccluderNode::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::OccluderNode::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// void osg::OccluderNode::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OccluderNode::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::OccluderNode::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::OccluderNode::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OccluderNode::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OccluderNode::traverse(_arg1);

		return 0;
	}

	// bool osg::OccluderNode::base_addChild(osg::Node * child)
	static int _bind_base_addChild(lua_State *L) {
		if (!_lg_typecheck_base_addChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::OccluderNode::base_addChild(osg::Node * child) function, expected prototype:\nbool osg::OccluderNode::base_addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::OccluderNode::base_addChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OccluderNode::addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::OccluderNode::base_insertChild(unsigned int index, osg::Node * child)
	static int _bind_base_insertChild(lua_State *L) {
		if (!_lg_typecheck_base_insertChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::OccluderNode::base_insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osg::OccluderNode::base_insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::OccluderNode::base_insertChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OccluderNode::insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::OccluderNode::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_base_removeChildren(lua_State *L) {
		if (!_lg_typecheck_base_removeChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::OccluderNode::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osg::OccluderNode::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::OccluderNode::base_removeChildren(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OccluderNode::removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::OccluderNode::base_replaceChild(osg::Node * origChild, osg::Node * newChild)
	static int _bind_base_replaceChild(lua_State *L) {
		if (!_lg_typecheck_base_replaceChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::OccluderNode::base_replaceChild(osg::Node * origChild, osg::Node * newChild) function, expected prototype:\nbool osg::OccluderNode::base_replaceChild(osg::Node * origChild, osg::Node * newChild)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* origChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::Node* newChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::OccluderNode::base_replaceChild(osg::Node *, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OccluderNode::replaceChild(origChild, newChild);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::OccluderNode::base_setChild(unsigned int i, osg::Node * node)
	static int _bind_base_setChild(lua_State *L) {
		if (!_lg_typecheck_base_setChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::OccluderNode::base_setChild(unsigned int i, osg::Node * node) function, expected prototype:\nbool osg::OccluderNode::base_setChild(unsigned int i, osg::Node * node)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::OccluderNode::base_setChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OccluderNode::setChild(i, node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::OccluderNode::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OccluderNode::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::OccluderNode::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OccluderNode::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OccluderNode::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::OccluderNode::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OccluderNode::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::OccluderNode::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OccluderNode::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OccluderNode::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::OccluderNode::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::OccluderNode::base_cloneType() const function, expected prototype:\nosg::Object * osg::OccluderNode::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::OccluderNode::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->OccluderNode::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::OccluderNode::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::OccluderNode::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::OccluderNode::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::OccluderNode::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::OccluderNode::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->OccluderNode::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::OccluderNode::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::OccluderNode::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::OccluderNode::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::OccluderNode::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OccluderNode::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::OccluderNode::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::OccluderNode::base_className() const function, expected prototype:\nconst char * osg::OccluderNode::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::OccluderNode::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->OccluderNode::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::OccluderNode::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::OccluderNode::base_libraryName() const function, expected prototype:\nconst char * osg::OccluderNode::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::OccluderNode::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->OccluderNode::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::OccluderNode::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OccluderNode::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::OccluderNode::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::OccluderNode::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OccluderNode::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OccluderNode::accept(nv);

		return 0;
	}

	// osg::BoundingSphered osg::OccluderNode::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::OccluderNode::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osg::OccluderNode::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OccluderNode* self=Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::OccluderNode::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->OccluderNode::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::OccluderNode* LunaTraits< osg::OccluderNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_OccluderNode::_bind_ctor(L);
}

void LunaTraits< osg::OccluderNode >::_bind_dtor(osg::OccluderNode* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::OccluderNode >::className[] = "OccluderNode";
const char LunaTraits< osg::OccluderNode >::fullName[] = "osg::OccluderNode";
const char LunaTraits< osg::OccluderNode >::moduleName[] = "osg";
const char* LunaTraits< osg::OccluderNode >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::OccluderNode >::hash = 97875440;
const int LunaTraits< osg::OccluderNode >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::OccluderNode >::methods[] = {
	{"cloneType", &luna_wrapper_osg_OccluderNode::_bind_cloneType},
	{"clone", &luna_wrapper_osg_OccluderNode::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_OccluderNode::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_OccluderNode::_bind_className},
	{"libraryName", &luna_wrapper_osg_OccluderNode::_bind_libraryName},
	{"accept", &luna_wrapper_osg_OccluderNode::_bind_accept},
	{"setOccluder", &luna_wrapper_osg_OccluderNode::_bind_setOccluder},
	{"getOccluder", &luna_wrapper_osg_OccluderNode::_bind_getOccluder},
	{"computeBound", &luna_wrapper_osg_OccluderNode::_bind_computeBound},
	{"base_setName", &luna_wrapper_osg_OccluderNode::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_OccluderNode::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_OccluderNode::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_OccluderNode::_bind_base_getUserData},
	{"base_asTransform", &luna_wrapper_osg_OccluderNode::_bind_base_asTransform},
	{"base_asCamera", &luna_wrapper_osg_OccluderNode::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osg_OccluderNode::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osg_OccluderNode::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osg_OccluderNode::_bind_base_ascend},
	{"base_asGroup", &luna_wrapper_osg_OccluderNode::_bind_base_asGroup},
	{"base_traverse", &luna_wrapper_osg_OccluderNode::_bind_base_traverse},
	{"base_addChild", &luna_wrapper_osg_OccluderNode::_bind_base_addChild},
	{"base_insertChild", &luna_wrapper_osg_OccluderNode::_bind_base_insertChild},
	{"base_removeChildren", &luna_wrapper_osg_OccluderNode::_bind_base_removeChildren},
	{"base_replaceChild", &luna_wrapper_osg_OccluderNode::_bind_base_replaceChild},
	{"base_setChild", &luna_wrapper_osg_OccluderNode::_bind_base_setChild},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_OccluderNode::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osg_OccluderNode::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_OccluderNode::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_OccluderNode::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_OccluderNode::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osg_OccluderNode::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osg_OccluderNode::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osg_OccluderNode::_bind_base_accept},
	{"base_computeBound", &luna_wrapper_osg_OccluderNode::_bind_base_computeBound},
	{"fromVoid", &luna_wrapper_osg_OccluderNode::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_OccluderNode::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_OccluderNode::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::OccluderNode >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_OccluderNode::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::OccluderNode >::enumValues[] = {
	{0,0}
};


