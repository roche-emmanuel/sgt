#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_CoordinateSystemNode.h>

class luna_wrapper_osg_CoordinateSystemNode {
public:
	typedef Luna< osg::CoordinateSystemNode > luna_t;

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

		osg::CoordinateSystemNode* self= (osg::CoordinateSystemNode*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::CoordinateSystemNode >::push(L,self,false);
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
		//osg::CoordinateSystemNode* ptr= dynamic_cast< osg::CoordinateSystemNode* >(Luna< osg::Referenced >::check(L,1));
		osg::CoordinateSystemNode* ptr= luna_caster< osg::Referenced, osg::CoordinateSystemNode >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::CoordinateSystemNode >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1))) ) return false;
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
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCoordinateSystem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCoordinateSystem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEllipsoidModel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEllipsoidModel_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEllipsoidModel_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeLocalCoordinateFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeLocalUpVector(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
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

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::CoordinateSystemNode::CoordinateSystemNode()
	static osg::CoordinateSystemNode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::CoordinateSystemNode::CoordinateSystemNode() function, expected prototype:\nosg::CoordinateSystemNode::CoordinateSystemNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::CoordinateSystemNode();
	}

	// osg::CoordinateSystemNode::CoordinateSystemNode(const std::string & format, const std::string & cs)
	static osg::CoordinateSystemNode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::CoordinateSystemNode::CoordinateSystemNode(const std::string & format, const std::string & cs) function, expected prototype:\nosg::CoordinateSystemNode::CoordinateSystemNode(const std::string & format, const std::string & cs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string format(lua_tostring(L,1),lua_objlen(L,1));
		std::string cs(lua_tostring(L,2),lua_objlen(L,2));

		return new osg::CoordinateSystemNode(format, cs);
	}

	// osg::CoordinateSystemNode::CoordinateSystemNode(const osg::CoordinateSystemNode & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::CoordinateSystemNode* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::CoordinateSystemNode::CoordinateSystemNode(const osg::CoordinateSystemNode & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::CoordinateSystemNode::CoordinateSystemNode(const osg::CoordinateSystemNode & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::CoordinateSystemNode* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::CoordinateSystemNode::CoordinateSystemNode function");
		}
		const osg::CoordinateSystemNode & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::CoordinateSystemNode::CoordinateSystemNode function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::CoordinateSystemNode(_arg1, copyop);
	}

	// osg::CoordinateSystemNode::CoordinateSystemNode(lua_Table * data)
	static osg::CoordinateSystemNode* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::CoordinateSystemNode::CoordinateSystemNode(lua_Table * data) function, expected prototype:\nosg::CoordinateSystemNode::CoordinateSystemNode(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_CoordinateSystemNode(L,NULL);
	}

	// osg::CoordinateSystemNode::CoordinateSystemNode(lua_Table * data, const std::string & format, const std::string & cs)
	static osg::CoordinateSystemNode* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::CoordinateSystemNode::CoordinateSystemNode(lua_Table * data, const std::string & format, const std::string & cs) function, expected prototype:\nosg::CoordinateSystemNode::CoordinateSystemNode(lua_Table * data, const std::string & format, const std::string & cs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string format(lua_tostring(L,2),lua_objlen(L,2));
		std::string cs(lua_tostring(L,3),lua_objlen(L,3));

		return new wrapper_osg_CoordinateSystemNode(L,NULL, format, cs);
	}

	// osg::CoordinateSystemNode::CoordinateSystemNode(lua_Table * data, const osg::CoordinateSystemNode & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::CoordinateSystemNode* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::CoordinateSystemNode::CoordinateSystemNode(lua_Table * data, const osg::CoordinateSystemNode & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::CoordinateSystemNode::CoordinateSystemNode(lua_Table * data, const osg::CoordinateSystemNode & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::CoordinateSystemNode* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::CoordinateSystemNode::CoordinateSystemNode function");
		}
		const osg::CoordinateSystemNode & _arg2=*_arg2_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::CoordinateSystemNode::CoordinateSystemNode function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_CoordinateSystemNode(L,NULL, _arg2, copyop);
	}

	// Overload binder for osg::CoordinateSystemNode::CoordinateSystemNode
	static osg::CoordinateSystemNode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function CoordinateSystemNode, cannot match any of the overloads for function CoordinateSystemNode:\n  CoordinateSystemNode()\n  CoordinateSystemNode(const std::string &, const std::string &)\n  CoordinateSystemNode(const osg::CoordinateSystemNode &, const osg::CopyOp &)\n  CoordinateSystemNode(lua_Table *)\n  CoordinateSystemNode(lua_Table *, const std::string &, const std::string &)\n  CoordinateSystemNode(lua_Table *, const osg::CoordinateSystemNode &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::CoordinateSystemNode::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::CoordinateSystemNode::cloneType() const function, expected prototype:\nosg::Object * osg::CoordinateSystemNode::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::CoordinateSystemNode::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::CoordinateSystemNode::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::CoordinateSystemNode::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::CoordinateSystemNode::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::CoordinateSystemNode::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::CoordinateSystemNode::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::CoordinateSystemNode::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CoordinateSystemNode::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::CoordinateSystemNode::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CoordinateSystemNode::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::CoordinateSystemNode::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::CoordinateSystemNode::className() const function, expected prototype:\nconst char * osg::CoordinateSystemNode::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::CoordinateSystemNode::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::CoordinateSystemNode::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::CoordinateSystemNode::libraryName() const function, expected prototype:\nconst char * osg::CoordinateSystemNode::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::CoordinateSystemNode::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::CoordinateSystemNode::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CoordinateSystemNode::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::CoordinateSystemNode::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::CoordinateSystemNode::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CoordinateSystemNode::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// void osg::CoordinateSystemNode::set(const osg::CoordinateSystemNode & csn)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CoordinateSystemNode::set(const osg::CoordinateSystemNode & csn) function, expected prototype:\nvoid osg::CoordinateSystemNode::set(const osg::CoordinateSystemNode & csn)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CoordinateSystemNode* csn_ptr=(Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,2));
		if( !csn_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg csn in osg::CoordinateSystemNode::set function");
		}
		const osg::CoordinateSystemNode & csn=*csn_ptr;

		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CoordinateSystemNode::set(const osg::CoordinateSystemNode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(csn);

		return 0;
	}

	// void osg::CoordinateSystemNode::setFormat(const std::string & format)
	static int _bind_setFormat(lua_State *L) {
		if (!_lg_typecheck_setFormat(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CoordinateSystemNode::setFormat(const std::string & format) function, expected prototype:\nvoid osg::CoordinateSystemNode::setFormat(const std::string & format)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string format(lua_tostring(L,2),lua_objlen(L,2));

		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CoordinateSystemNode::setFormat(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFormat(format);

		return 0;
	}

	// const std::string & osg::CoordinateSystemNode::getFormat() const
	static int _bind_getFormat(lua_State *L) {
		if (!_lg_typecheck_getFormat(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & osg::CoordinateSystemNode::getFormat() const function, expected prototype:\nconst std::string & osg::CoordinateSystemNode::getFormat() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & osg::CoordinateSystemNode::getFormat() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->getFormat();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::CoordinateSystemNode::setCoordinateSystem(const std::string & cs)
	static int _bind_setCoordinateSystem(lua_State *L) {
		if (!_lg_typecheck_setCoordinateSystem(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CoordinateSystemNode::setCoordinateSystem(const std::string & cs) function, expected prototype:\nvoid osg::CoordinateSystemNode::setCoordinateSystem(const std::string & cs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string cs(lua_tostring(L,2),lua_objlen(L,2));

		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CoordinateSystemNode::setCoordinateSystem(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCoordinateSystem(cs);

		return 0;
	}

	// const std::string & osg::CoordinateSystemNode::getCoordinateSystem() const
	static int _bind_getCoordinateSystem(lua_State *L) {
		if (!_lg_typecheck_getCoordinateSystem(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & osg::CoordinateSystemNode::getCoordinateSystem() const function, expected prototype:\nconst std::string & osg::CoordinateSystemNode::getCoordinateSystem() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & osg::CoordinateSystemNode::getCoordinateSystem() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->getCoordinateSystem();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::CoordinateSystemNode::setEllipsoidModel(osg::EllipsoidModel * ellipsode)
	static int _bind_setEllipsoidModel(lua_State *L) {
		if (!_lg_typecheck_setEllipsoidModel(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CoordinateSystemNode::setEllipsoidModel(osg::EllipsoidModel * ellipsode) function, expected prototype:\nvoid osg::CoordinateSystemNode::setEllipsoidModel(osg::EllipsoidModel * ellipsode)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::EllipsoidModel* ellipsode=(Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,2));

		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CoordinateSystemNode::setEllipsoidModel(osg::EllipsoidModel *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEllipsoidModel(ellipsode);

		return 0;
	}

	// osg::EllipsoidModel * osg::CoordinateSystemNode::getEllipsoidModel()
	static int _bind_getEllipsoidModel_overload_1(lua_State *L) {
		if (!_lg_typecheck_getEllipsoidModel_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::EllipsoidModel * osg::CoordinateSystemNode::getEllipsoidModel() function, expected prototype:\nosg::EllipsoidModel * osg::CoordinateSystemNode::getEllipsoidModel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::EllipsoidModel * osg::CoordinateSystemNode::getEllipsoidModel(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::EllipsoidModel * lret = self->getEllipsoidModel();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::EllipsoidModel >::push(L,lret,false);

		return 1;
	}

	// const osg::EllipsoidModel * osg::CoordinateSystemNode::getEllipsoidModel() const
	static int _bind_getEllipsoidModel_overload_2(lua_State *L) {
		if (!_lg_typecheck_getEllipsoidModel_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::EllipsoidModel * osg::CoordinateSystemNode::getEllipsoidModel() const function, expected prototype:\nconst osg::EllipsoidModel * osg::CoordinateSystemNode::getEllipsoidModel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::EllipsoidModel * osg::CoordinateSystemNode::getEllipsoidModel() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::EllipsoidModel * lret = self->getEllipsoidModel();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::EllipsoidModel >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CoordinateSystemNode::getEllipsoidModel
	static int _bind_getEllipsoidModel(lua_State *L) {
		if (_lg_typecheck_getEllipsoidModel_overload_1(L)) return _bind_getEllipsoidModel_overload_1(L);
		if (_lg_typecheck_getEllipsoidModel_overload_2(L)) return _bind_getEllipsoidModel_overload_2(L);

		luaL_error(L, "error in function getEllipsoidModel, cannot match any of the overloads for function getEllipsoidModel:\n  getEllipsoidModel()\n  getEllipsoidModel()\n");
		return 0;
	}

	// osg::Matrixd osg::CoordinateSystemNode::computeLocalCoordinateFrame(const osg::Vec3d & position) const
	static int _bind_computeLocalCoordinateFrame(lua_State *L) {
		if (!_lg_typecheck_computeLocalCoordinateFrame(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osg::CoordinateSystemNode::computeLocalCoordinateFrame(const osg::Vec3d & position) const function, expected prototype:\nosg::Matrixd osg::CoordinateSystemNode::computeLocalCoordinateFrame(const osg::Vec3d & position) const\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* position_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osg::CoordinateSystemNode::computeLocalCoordinateFrame function");
		}
		const osg::Vec3d & position=*position_ptr;

		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osg::CoordinateSystemNode::computeLocalCoordinateFrame(const osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->computeLocalCoordinateFrame(position);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3d osg::CoordinateSystemNode::computeLocalUpVector(const osg::Vec3d & position) const
	static int _bind_computeLocalUpVector(lua_State *L) {
		if (!_lg_typecheck_computeLocalUpVector(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d osg::CoordinateSystemNode::computeLocalUpVector(const osg::Vec3d & position) const function, expected prototype:\nosg::Vec3d osg::CoordinateSystemNode::computeLocalUpVector(const osg::Vec3d & position) const\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* position_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osg::CoordinateSystemNode::computeLocalUpVector function");
		}
		const osg::Vec3d & position=*position_ptr;

		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3d osg::CoordinateSystemNode::computeLocalUpVector(const osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3d stack_lret = self->computeLocalUpVector(position);
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// void osg::CoordinateSystemNode::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CoordinateSystemNode::base_setName(const std::string & name) function, expected prototype:\nvoid osg::CoordinateSystemNode::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CoordinateSystemNode::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CoordinateSystemNode::setName(name);

		return 0;
	}

	// void osg::CoordinateSystemNode::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CoordinateSystemNode::base_computeDataVariance() function, expected prototype:\nvoid osg::CoordinateSystemNode::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CoordinateSystemNode::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CoordinateSystemNode::computeDataVariance();

		return 0;
	}

	// void osg::CoordinateSystemNode::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CoordinateSystemNode::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::CoordinateSystemNode::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CoordinateSystemNode::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CoordinateSystemNode::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::CoordinateSystemNode::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::CoordinateSystemNode::base_getUserData() function, expected prototype:\nosg::Referenced * osg::CoordinateSystemNode::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::CoordinateSystemNode::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->CoordinateSystemNode::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::CoordinateSystemNode::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::CoordinateSystemNode::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::CoordinateSystemNode::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::CoordinateSystemNode::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->CoordinateSystemNode::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CoordinateSystemNode::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Transform * osg::CoordinateSystemNode::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osg::CoordinateSystemNode::base_asTransform() function, expected prototype:\nosg::Transform * osg::CoordinateSystemNode::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osg::CoordinateSystemNode::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->CoordinateSystemNode::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osg::CoordinateSystemNode::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osg::CoordinateSystemNode::base_asTransform() const function, expected prototype:\nconst osg::Transform * osg::CoordinateSystemNode::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osg::CoordinateSystemNode::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->CoordinateSystemNode::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CoordinateSystemNode::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::Camera * osg::CoordinateSystemNode::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osg::CoordinateSystemNode::base_asCamera() function, expected prototype:\nosg::Camera * osg::CoordinateSystemNode::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osg::CoordinateSystemNode::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->CoordinateSystemNode::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osg::CoordinateSystemNode::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osg::CoordinateSystemNode::base_asCamera() const function, expected prototype:\nconst osg::Camera * osg::CoordinateSystemNode::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osg::CoordinateSystemNode::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->CoordinateSystemNode::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CoordinateSystemNode::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osg::CoordinateSystemNode::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osg::CoordinateSystemNode::base_asSwitch() function, expected prototype:\nosg::Switch * osg::CoordinateSystemNode::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osg::CoordinateSystemNode::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->CoordinateSystemNode::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osg::CoordinateSystemNode::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osg::CoordinateSystemNode::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osg::CoordinateSystemNode::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osg::CoordinateSystemNode::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->CoordinateSystemNode::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CoordinateSystemNode::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osg::CoordinateSystemNode::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osg::CoordinateSystemNode::base_asGeode() function, expected prototype:\nosg::Geode * osg::CoordinateSystemNode::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osg::CoordinateSystemNode::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->CoordinateSystemNode::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osg::CoordinateSystemNode::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osg::CoordinateSystemNode::base_asGeode() const function, expected prototype:\nconst osg::Geode * osg::CoordinateSystemNode::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osg::CoordinateSystemNode::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->CoordinateSystemNode::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CoordinateSystemNode::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osg::CoordinateSystemNode::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CoordinateSystemNode::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::CoordinateSystemNode::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::CoordinateSystemNode::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CoordinateSystemNode::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CoordinateSystemNode::ascend(nv);

		return 0;
	}

	// osg::Group * osg::CoordinateSystemNode::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osg::CoordinateSystemNode::base_asGroup() function, expected prototype:\nosg::Group * osg::CoordinateSystemNode::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osg::CoordinateSystemNode::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->CoordinateSystemNode::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osg::CoordinateSystemNode::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osg::CoordinateSystemNode::base_asGroup() const function, expected prototype:\nconst osg::Group * osg::CoordinateSystemNode::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osg::CoordinateSystemNode::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->CoordinateSystemNode::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CoordinateSystemNode::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// void osg::CoordinateSystemNode::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CoordinateSystemNode::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::CoordinateSystemNode::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::CoordinateSystemNode::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CoordinateSystemNode::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CoordinateSystemNode::traverse(_arg1);

		return 0;
	}

	// bool osg::CoordinateSystemNode::base_addChild(osg::Node * child)
	static int _bind_base_addChild(lua_State *L) {
		if (!_lg_typecheck_base_addChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CoordinateSystemNode::base_addChild(osg::Node * child) function, expected prototype:\nbool osg::CoordinateSystemNode::base_addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CoordinateSystemNode::base_addChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CoordinateSystemNode::addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::CoordinateSystemNode::base_insertChild(unsigned int index, osg::Node * child)
	static int _bind_base_insertChild(lua_State *L) {
		if (!_lg_typecheck_base_insertChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CoordinateSystemNode::base_insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osg::CoordinateSystemNode::base_insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CoordinateSystemNode::base_insertChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CoordinateSystemNode::insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::CoordinateSystemNode::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_base_removeChildren(lua_State *L) {
		if (!_lg_typecheck_base_removeChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CoordinateSystemNode::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osg::CoordinateSystemNode::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CoordinateSystemNode::base_removeChildren(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CoordinateSystemNode::removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::CoordinateSystemNode::base_replaceChild(osg::Node * origChild, osg::Node * newChild)
	static int _bind_base_replaceChild(lua_State *L) {
		if (!_lg_typecheck_base_replaceChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CoordinateSystemNode::base_replaceChild(osg::Node * origChild, osg::Node * newChild) function, expected prototype:\nbool osg::CoordinateSystemNode::base_replaceChild(osg::Node * origChild, osg::Node * newChild)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* origChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::Node* newChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CoordinateSystemNode::base_replaceChild(osg::Node *, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CoordinateSystemNode::replaceChild(origChild, newChild);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::CoordinateSystemNode::base_setChild(unsigned int i, osg::Node * node)
	static int _bind_base_setChild(lua_State *L) {
		if (!_lg_typecheck_base_setChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CoordinateSystemNode::base_setChild(unsigned int i, osg::Node * node) function, expected prototype:\nbool osg::CoordinateSystemNode::base_setChild(unsigned int i, osg::Node * node)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CoordinateSystemNode::base_setChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CoordinateSystemNode::setChild(i, node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::CoordinateSystemNode::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CoordinateSystemNode::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::CoordinateSystemNode::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CoordinateSystemNode::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CoordinateSystemNode::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::CoordinateSystemNode::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CoordinateSystemNode::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::CoordinateSystemNode::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CoordinateSystemNode::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CoordinateSystemNode::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::BoundingSphered osg::CoordinateSystemNode::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::CoordinateSystemNode::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osg::CoordinateSystemNode::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::CoordinateSystemNode::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->CoordinateSystemNode::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// osg::Object * osg::CoordinateSystemNode::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::CoordinateSystemNode::base_cloneType() const function, expected prototype:\nosg::Object * osg::CoordinateSystemNode::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::CoordinateSystemNode::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->CoordinateSystemNode::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::CoordinateSystemNode::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::CoordinateSystemNode::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::CoordinateSystemNode::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::CoordinateSystemNode::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::CoordinateSystemNode::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->CoordinateSystemNode::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::CoordinateSystemNode::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CoordinateSystemNode::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::CoordinateSystemNode::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CoordinateSystemNode::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CoordinateSystemNode::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::CoordinateSystemNode::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::CoordinateSystemNode::base_className() const function, expected prototype:\nconst char * osg::CoordinateSystemNode::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::CoordinateSystemNode::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->CoordinateSystemNode::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::CoordinateSystemNode::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::CoordinateSystemNode::base_libraryName() const function, expected prototype:\nconst char * osg::CoordinateSystemNode::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::CoordinateSystemNode::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->CoordinateSystemNode::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::CoordinateSystemNode::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CoordinateSystemNode::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::CoordinateSystemNode::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::CoordinateSystemNode::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::CoordinateSystemNode* self=Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CoordinateSystemNode::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CoordinateSystemNode::accept(nv);

		return 0;
	}


	// Operator binds:

};

osg::CoordinateSystemNode* LunaTraits< osg::CoordinateSystemNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_CoordinateSystemNode::_bind_ctor(L);
}

void LunaTraits< osg::CoordinateSystemNode >::_bind_dtor(osg::CoordinateSystemNode* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::CoordinateSystemNode >::className[] = "CoordinateSystemNode";
const char LunaTraits< osg::CoordinateSystemNode >::fullName[] = "osg::CoordinateSystemNode";
const char LunaTraits< osg::CoordinateSystemNode >::moduleName[] = "osg";
const char* LunaTraits< osg::CoordinateSystemNode >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::CoordinateSystemNode >::hash = 6002350;
const int LunaTraits< osg::CoordinateSystemNode >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::CoordinateSystemNode >::methods[] = {
	{"cloneType", &luna_wrapper_osg_CoordinateSystemNode::_bind_cloneType},
	{"clone", &luna_wrapper_osg_CoordinateSystemNode::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_CoordinateSystemNode::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_CoordinateSystemNode::_bind_className},
	{"libraryName", &luna_wrapper_osg_CoordinateSystemNode::_bind_libraryName},
	{"accept", &luna_wrapper_osg_CoordinateSystemNode::_bind_accept},
	{"set", &luna_wrapper_osg_CoordinateSystemNode::_bind_set},
	{"setFormat", &luna_wrapper_osg_CoordinateSystemNode::_bind_setFormat},
	{"getFormat", &luna_wrapper_osg_CoordinateSystemNode::_bind_getFormat},
	{"setCoordinateSystem", &luna_wrapper_osg_CoordinateSystemNode::_bind_setCoordinateSystem},
	{"getCoordinateSystem", &luna_wrapper_osg_CoordinateSystemNode::_bind_getCoordinateSystem},
	{"setEllipsoidModel", &luna_wrapper_osg_CoordinateSystemNode::_bind_setEllipsoidModel},
	{"getEllipsoidModel", &luna_wrapper_osg_CoordinateSystemNode::_bind_getEllipsoidModel},
	{"computeLocalCoordinateFrame", &luna_wrapper_osg_CoordinateSystemNode::_bind_computeLocalCoordinateFrame},
	{"computeLocalUpVector", &luna_wrapper_osg_CoordinateSystemNode::_bind_computeLocalUpVector},
	{"base_setName", &luna_wrapper_osg_CoordinateSystemNode::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_CoordinateSystemNode::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_CoordinateSystemNode::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_CoordinateSystemNode::_bind_base_getUserData},
	{"base_asTransform", &luna_wrapper_osg_CoordinateSystemNode::_bind_base_asTransform},
	{"base_asCamera", &luna_wrapper_osg_CoordinateSystemNode::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osg_CoordinateSystemNode::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osg_CoordinateSystemNode::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osg_CoordinateSystemNode::_bind_base_ascend},
	{"base_asGroup", &luna_wrapper_osg_CoordinateSystemNode::_bind_base_asGroup},
	{"base_traverse", &luna_wrapper_osg_CoordinateSystemNode::_bind_base_traverse},
	{"base_addChild", &luna_wrapper_osg_CoordinateSystemNode::_bind_base_addChild},
	{"base_insertChild", &luna_wrapper_osg_CoordinateSystemNode::_bind_base_insertChild},
	{"base_removeChildren", &luna_wrapper_osg_CoordinateSystemNode::_bind_base_removeChildren},
	{"base_replaceChild", &luna_wrapper_osg_CoordinateSystemNode::_bind_base_replaceChild},
	{"base_setChild", &luna_wrapper_osg_CoordinateSystemNode::_bind_base_setChild},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_CoordinateSystemNode::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osg_CoordinateSystemNode::_bind_base_releaseGLObjects},
	{"base_computeBound", &luna_wrapper_osg_CoordinateSystemNode::_bind_base_computeBound},
	{"base_cloneType", &luna_wrapper_osg_CoordinateSystemNode::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_CoordinateSystemNode::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_CoordinateSystemNode::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osg_CoordinateSystemNode::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osg_CoordinateSystemNode::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osg_CoordinateSystemNode::_bind_base_accept},
	{"fromVoid", &luna_wrapper_osg_CoordinateSystemNode::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_CoordinateSystemNode::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_CoordinateSystemNode::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::CoordinateSystemNode >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_CoordinateSystemNode::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::CoordinateSystemNode >::enumValues[] = {
	{0,0}
};


