#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_TexGenNode.h>

class luna_wrapper_osg_TexGenNode {
public:
	typedef Luna< osg::TexGenNode > luna_t;

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

		osg::TexGenNode* self= (osg::TexGenNode*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::TexGenNode >::push(L,self,false);
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
		//osg::TexGenNode* ptr= dynamic_cast< osg::TexGenNode* >(Luna< osg::Referenced >::check(L,1));
		osg::TexGenNode* ptr= luna_caster< osg::Referenced, osg::TexGenNode >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TexGenNode >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::TexGen >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1))) ) return false;
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
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::TexGen >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setTextureUnit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureUnit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTexGen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTexGen_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTexGen_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setThreadSafeRefUnref(lua_State *L) {
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

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::TexGenNode::TexGenNode()
	static osg::TexGenNode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::TexGenNode::TexGenNode() function, expected prototype:\nosg::TexGenNode::TexGenNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::TexGenNode();
	}

	// osg::TexGenNode::TexGenNode(osg::TexGen * texgen)
	static osg::TexGenNode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::TexGenNode::TexGenNode(osg::TexGen * texgen) function, expected prototype:\nosg::TexGenNode::TexGenNode(osg::TexGen * texgen)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::TexGen* texgen=(Luna< osg::Referenced >::checkSubType< osg::TexGen >(L,1));

		return new osg::TexGenNode(texgen);
	}

	// osg::TexGenNode::TexGenNode(const osg::TexGenNode & tgb, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TexGenNode* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::TexGenNode::TexGenNode(const osg::TexGenNode & tgb, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TexGenNode::TexGenNode(const osg::TexGenNode & tgb, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::TexGenNode* tgb_ptr=(Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1));
		if( !tgb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tgb in osg::TexGenNode::TexGenNode function");
		}
		const osg::TexGenNode & tgb=*tgb_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TexGenNode::TexGenNode function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::TexGenNode(tgb, copyop);
	}

	// osg::TexGenNode::TexGenNode(lua_Table * data)
	static osg::TexGenNode* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::TexGenNode::TexGenNode(lua_Table * data) function, expected prototype:\nosg::TexGenNode::TexGenNode(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_TexGenNode(L,NULL);
	}

	// osg::TexGenNode::TexGenNode(lua_Table * data, osg::TexGen * texgen)
	static osg::TexGenNode* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::TexGenNode::TexGenNode(lua_Table * data, osg::TexGen * texgen) function, expected prototype:\nosg::TexGenNode::TexGenNode(lua_Table * data, osg::TexGen * texgen)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::TexGen* texgen=(Luna< osg::Referenced >::checkSubType< osg::TexGen >(L,2));

		return new wrapper_osg_TexGenNode(L,NULL, texgen);
	}

	// osg::TexGenNode::TexGenNode(lua_Table * data, const osg::TexGenNode & tgb, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TexGenNode* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::TexGenNode::TexGenNode(lua_Table * data, const osg::TexGenNode & tgb, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TexGenNode::TexGenNode(lua_Table * data, const osg::TexGenNode & tgb, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::TexGenNode* tgb_ptr=(Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,2));
		if( !tgb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tgb in osg::TexGenNode::TexGenNode function");
		}
		const osg::TexGenNode & tgb=*tgb_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TexGenNode::TexGenNode function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_TexGenNode(L,NULL, tgb, copyop);
	}

	// Overload binder for osg::TexGenNode::TexGenNode
	static osg::TexGenNode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function TexGenNode, cannot match any of the overloads for function TexGenNode:\n  TexGenNode()\n  TexGenNode(osg::TexGen *)\n  TexGenNode(const osg::TexGenNode &, const osg::CopyOp &)\n  TexGenNode(lua_Table *)\n  TexGenNode(lua_Table *, osg::TexGen *)\n  TexGenNode(lua_Table *, const osg::TexGenNode &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::TexGenNode::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TexGenNode::cloneType() const function, expected prototype:\nosg::Object * osg::TexGenNode::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TexGenNode::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TexGenNode::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TexGenNode::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::TexGenNode::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TexGenNode::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TexGenNode::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TexGenNode::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TexGenNode::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TexGenNode::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TexGenNode::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TexGenNode::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TexGenNode::className() const function, expected prototype:\nconst char * osg::TexGenNode::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TexGenNode::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TexGenNode::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TexGenNode::libraryName() const function, expected prototype:\nconst char * osg::TexGenNode::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TexGenNode::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::TexGenNode::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexGenNode::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::TexGenNode::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::TexGenNode::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexGenNode::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// void osg::TexGenNode::setReferenceFrame(osg::TexGenNode::ReferenceFrame rf)
	static int _bind_setReferenceFrame(lua_State *L) {
		if (!_lg_typecheck_setReferenceFrame(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexGenNode::setReferenceFrame(osg::TexGenNode::ReferenceFrame rf) function, expected prototype:\nvoid osg::TexGenNode::setReferenceFrame(osg::TexGenNode::ReferenceFrame rf)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::TexGenNode::ReferenceFrame rf=(osg::TexGenNode::ReferenceFrame)lua_tointeger(L,2);

		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexGenNode::setReferenceFrame(osg::TexGenNode::ReferenceFrame). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setReferenceFrame(rf);

		return 0;
	}

	// osg::TexGenNode::ReferenceFrame osg::TexGenNode::getReferenceFrame() const
	static int _bind_getReferenceFrame(lua_State *L) {
		if (!_lg_typecheck_getReferenceFrame(L)) {
			luaL_error(L, "luna typecheck failed in osg::TexGenNode::ReferenceFrame osg::TexGenNode::getReferenceFrame() const function, expected prototype:\nosg::TexGenNode::ReferenceFrame osg::TexGenNode::getReferenceFrame() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::TexGenNode::ReferenceFrame osg::TexGenNode::getReferenceFrame() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::TexGenNode::ReferenceFrame lret = self->getReferenceFrame();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TexGenNode::setTextureUnit(unsigned int textureUnit)
	static int _bind_setTextureUnit(lua_State *L) {
		if (!_lg_typecheck_setTextureUnit(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexGenNode::setTextureUnit(unsigned int textureUnit) function, expected prototype:\nvoid osg::TexGenNode::setTextureUnit(unsigned int textureUnit)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int textureUnit=(unsigned int)lua_tointeger(L,2);

		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexGenNode::setTextureUnit(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureUnit(textureUnit);

		return 0;
	}

	// unsigned int osg::TexGenNode::getTextureUnit() const
	static int _bind_getTextureUnit(lua_State *L) {
		if (!_lg_typecheck_getTextureUnit(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::TexGenNode::getTextureUnit() const function, expected prototype:\nunsigned int osg::TexGenNode::getTextureUnit() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::TexGenNode::getTextureUnit() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getTextureUnit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TexGenNode::setTexGen(osg::TexGen * texgen)
	static int _bind_setTexGen(lua_State *L) {
		if (!_lg_typecheck_setTexGen(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexGenNode::setTexGen(osg::TexGen * texgen) function, expected prototype:\nvoid osg::TexGenNode::setTexGen(osg::TexGen * texgen)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::TexGen* texgen=(Luna< osg::Referenced >::checkSubType< osg::TexGen >(L,2));

		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexGenNode::setTexGen(osg::TexGen *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTexGen(texgen);

		return 0;
	}

	// osg::TexGen * osg::TexGenNode::getTexGen()
	static int _bind_getTexGen_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTexGen_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::TexGen * osg::TexGenNode::getTexGen() function, expected prototype:\nosg::TexGen * osg::TexGenNode::getTexGen()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::TexGen * osg::TexGenNode::getTexGen(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::TexGen * lret = self->getTexGen();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::TexGen >::push(L,lret,false);

		return 1;
	}

	// const osg::TexGen * osg::TexGenNode::getTexGen() const
	static int _bind_getTexGen_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTexGen_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::TexGen * osg::TexGenNode::getTexGen() const function, expected prototype:\nconst osg::TexGen * osg::TexGenNode::getTexGen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::TexGen * osg::TexGenNode::getTexGen() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::TexGen * lret = self->getTexGen();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::TexGen >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TexGenNode::getTexGen
	static int _bind_getTexGen(lua_State *L) {
		if (_lg_typecheck_getTexGen_overload_1(L)) return _bind_getTexGen_overload_1(L);
		if (_lg_typecheck_getTexGen_overload_2(L)) return _bind_getTexGen_overload_2(L);

		luaL_error(L, "error in function getTexGen, cannot match any of the overloads for function getTexGen:\n  getTexGen()\n  getTexGen()\n");
		return 0;
	}

	// void osg::TexGenNode::setThreadSafeRefUnref(bool threadSafe)
	static int _bind_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexGenNode::setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::TexGenNode::setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexGenNode::setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::TexGenNode::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexGenNode::base_setName(const std::string & name) function, expected prototype:\nvoid osg::TexGenNode::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexGenNode::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexGenNode::setName(name);

		return 0;
	}

	// void osg::TexGenNode::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexGenNode::base_computeDataVariance() function, expected prototype:\nvoid osg::TexGenNode::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexGenNode::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexGenNode::computeDataVariance();

		return 0;
	}

	// void osg::TexGenNode::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexGenNode::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::TexGenNode::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexGenNode::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexGenNode::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::TexGenNode::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::TexGenNode::base_getUserData() function, expected prototype:\nosg::Referenced * osg::TexGenNode::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::TexGenNode::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->TexGenNode::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::TexGenNode::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::TexGenNode::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::TexGenNode::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::TexGenNode::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->TexGenNode::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TexGenNode::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Transform * osg::TexGenNode::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osg::TexGenNode::base_asTransform() function, expected prototype:\nosg::Transform * osg::TexGenNode::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osg::TexGenNode::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->TexGenNode::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osg::TexGenNode::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osg::TexGenNode::base_asTransform() const function, expected prototype:\nconst osg::Transform * osg::TexGenNode::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osg::TexGenNode::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->TexGenNode::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TexGenNode::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::Camera * osg::TexGenNode::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osg::TexGenNode::base_asCamera() function, expected prototype:\nosg::Camera * osg::TexGenNode::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osg::TexGenNode::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->TexGenNode::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osg::TexGenNode::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osg::TexGenNode::base_asCamera() const function, expected prototype:\nconst osg::Camera * osg::TexGenNode::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osg::TexGenNode::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->TexGenNode::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TexGenNode::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osg::TexGenNode::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osg::TexGenNode::base_asSwitch() function, expected prototype:\nosg::Switch * osg::TexGenNode::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osg::TexGenNode::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->TexGenNode::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osg::TexGenNode::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osg::TexGenNode::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osg::TexGenNode::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osg::TexGenNode::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->TexGenNode::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TexGenNode::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osg::TexGenNode::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osg::TexGenNode::base_asGeode() function, expected prototype:\nosg::Geode * osg::TexGenNode::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osg::TexGenNode::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->TexGenNode::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osg::TexGenNode::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osg::TexGenNode::base_asGeode() const function, expected prototype:\nconst osg::Geode * osg::TexGenNode::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osg::TexGenNode::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->TexGenNode::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TexGenNode::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osg::TexGenNode::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexGenNode::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::TexGenNode::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::TexGenNode::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexGenNode::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexGenNode::ascend(nv);

		return 0;
	}

	// osg::Group * osg::TexGenNode::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osg::TexGenNode::base_asGroup() function, expected prototype:\nosg::Group * osg::TexGenNode::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osg::TexGenNode::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->TexGenNode::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osg::TexGenNode::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osg::TexGenNode::base_asGroup() const function, expected prototype:\nconst osg::Group * osg::TexGenNode::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osg::TexGenNode::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->TexGenNode::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TexGenNode::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// void osg::TexGenNode::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexGenNode::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::TexGenNode::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TexGenNode::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexGenNode::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexGenNode::traverse(_arg1);

		return 0;
	}

	// bool osg::TexGenNode::base_addChild(osg::Node * child)
	static int _bind_base_addChild(lua_State *L) {
		if (!_lg_typecheck_base_addChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TexGenNode::base_addChild(osg::Node * child) function, expected prototype:\nbool osg::TexGenNode::base_addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TexGenNode::base_addChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TexGenNode::addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::TexGenNode::base_insertChild(unsigned int index, osg::Node * child)
	static int _bind_base_insertChild(lua_State *L) {
		if (!_lg_typecheck_base_insertChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TexGenNode::base_insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osg::TexGenNode::base_insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TexGenNode::base_insertChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TexGenNode::insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::TexGenNode::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_base_removeChildren(lua_State *L) {
		if (!_lg_typecheck_base_removeChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TexGenNode::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osg::TexGenNode::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TexGenNode::base_removeChildren(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TexGenNode::removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::TexGenNode::base_replaceChild(osg::Node * origChild, osg::Node * newChild)
	static int _bind_base_replaceChild(lua_State *L) {
		if (!_lg_typecheck_base_replaceChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TexGenNode::base_replaceChild(osg::Node * origChild, osg::Node * newChild) function, expected prototype:\nbool osg::TexGenNode::base_replaceChild(osg::Node * origChild, osg::Node * newChild)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* origChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::Node* newChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TexGenNode::base_replaceChild(osg::Node *, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TexGenNode::replaceChild(origChild, newChild);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::TexGenNode::base_setChild(unsigned int i, osg::Node * node)
	static int _bind_base_setChild(lua_State *L) {
		if (!_lg_typecheck_base_setChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TexGenNode::base_setChild(unsigned int i, osg::Node * node) function, expected prototype:\nbool osg::TexGenNode::base_setChild(unsigned int i, osg::Node * node)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TexGenNode::base_setChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TexGenNode::setChild(i, node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::TexGenNode::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexGenNode::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::TexGenNode::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexGenNode::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexGenNode::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::BoundingSphered osg::TexGenNode::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::TexGenNode::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osg::TexGenNode::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::TexGenNode::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->TexGenNode::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// osg::Object * osg::TexGenNode::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TexGenNode::base_cloneType() const function, expected prototype:\nosg::Object * osg::TexGenNode::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TexGenNode::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->TexGenNode::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TexGenNode::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TexGenNode::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::TexGenNode::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TexGenNode::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TexGenNode::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->TexGenNode::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TexGenNode::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TexGenNode::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TexGenNode::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TexGenNode::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TexGenNode::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TexGenNode::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TexGenNode::base_className() const function, expected prototype:\nconst char * osg::TexGenNode::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TexGenNode::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TexGenNode::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TexGenNode::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TexGenNode::base_libraryName() const function, expected prototype:\nconst char * osg::TexGenNode::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TexGenNode::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TexGenNode::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::TexGenNode::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexGenNode::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::TexGenNode::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::TexGenNode::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexGenNode::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexGenNode::accept(nv);

		return 0;
	}

	// void osg::TexGenNode::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexGenNode::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::TexGenNode::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::TexGenNode* self=Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexGenNode::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexGenNode::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::TexGenNode* LunaTraits< osg::TexGenNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_TexGenNode::_bind_ctor(L);
}

void LunaTraits< osg::TexGenNode >::_bind_dtor(osg::TexGenNode* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TexGenNode >::className[] = "TexGenNode";
const char LunaTraits< osg::TexGenNode >::fullName[] = "osg::TexGenNode";
const char LunaTraits< osg::TexGenNode >::moduleName[] = "osg";
const char* LunaTraits< osg::TexGenNode >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::TexGenNode >::hash = 26149945;
const int LunaTraits< osg::TexGenNode >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TexGenNode >::methods[] = {
	{"cloneType", &luna_wrapper_osg_TexGenNode::_bind_cloneType},
	{"clone", &luna_wrapper_osg_TexGenNode::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_TexGenNode::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_TexGenNode::_bind_className},
	{"libraryName", &luna_wrapper_osg_TexGenNode::_bind_libraryName},
	{"accept", &luna_wrapper_osg_TexGenNode::_bind_accept},
	{"setReferenceFrame", &luna_wrapper_osg_TexGenNode::_bind_setReferenceFrame},
	{"getReferenceFrame", &luna_wrapper_osg_TexGenNode::_bind_getReferenceFrame},
	{"setTextureUnit", &luna_wrapper_osg_TexGenNode::_bind_setTextureUnit},
	{"getTextureUnit", &luna_wrapper_osg_TexGenNode::_bind_getTextureUnit},
	{"setTexGen", &luna_wrapper_osg_TexGenNode::_bind_setTexGen},
	{"getTexGen", &luna_wrapper_osg_TexGenNode::_bind_getTexGen},
	{"setThreadSafeRefUnref", &luna_wrapper_osg_TexGenNode::_bind_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_TexGenNode::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_TexGenNode::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_TexGenNode::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_TexGenNode::_bind_base_getUserData},
	{"base_asTransform", &luna_wrapper_osg_TexGenNode::_bind_base_asTransform},
	{"base_asCamera", &luna_wrapper_osg_TexGenNode::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osg_TexGenNode::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osg_TexGenNode::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osg_TexGenNode::_bind_base_ascend},
	{"base_asGroup", &luna_wrapper_osg_TexGenNode::_bind_base_asGroup},
	{"base_traverse", &luna_wrapper_osg_TexGenNode::_bind_base_traverse},
	{"base_addChild", &luna_wrapper_osg_TexGenNode::_bind_base_addChild},
	{"base_insertChild", &luna_wrapper_osg_TexGenNode::_bind_base_insertChild},
	{"base_removeChildren", &luna_wrapper_osg_TexGenNode::_bind_base_removeChildren},
	{"base_replaceChild", &luna_wrapper_osg_TexGenNode::_bind_base_replaceChild},
	{"base_setChild", &luna_wrapper_osg_TexGenNode::_bind_base_setChild},
	{"base_releaseGLObjects", &luna_wrapper_osg_TexGenNode::_bind_base_releaseGLObjects},
	{"base_computeBound", &luna_wrapper_osg_TexGenNode::_bind_base_computeBound},
	{"base_cloneType", &luna_wrapper_osg_TexGenNode::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_TexGenNode::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_TexGenNode::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osg_TexGenNode::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osg_TexGenNode::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osg_TexGenNode::_bind_base_accept},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_TexGenNode::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_TexGenNode::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_TexGenNode::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_TexGenNode::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TexGenNode >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TexGenNode::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TexGenNode >::enumValues[] = {
	{"RELATIVE_RF", osg::TexGenNode::RELATIVE_RF},
	{"ABSOLUTE_RF", osg::TexGenNode::ABSOLUTE_RF},
	{0,0}
};


