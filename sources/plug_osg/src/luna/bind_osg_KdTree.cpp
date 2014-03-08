#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_KdTree.h>

class luna_wrapper_osg_KdTree {
public:
	typedef Luna< osg::KdTree > luna_t;

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

		osg::KdTree* self= (osg::KdTree*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::KdTree >::push(L,self,false);
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
		//osg::KdTree* ptr= dynamic_cast< osg::KdTree* >(Luna< osg::Referenced >::check(L,1));
		osg::KdTree* ptr= luna_caster< osg::Referenced, osg::KdTree >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::KdTree >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_accept_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36301858) ) return false;
		if( (!(Luna< osg::ShapeVisitor >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_accept_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45826538) ) return false;
		if( (!(Luna< osg::ConstShapeVisitor >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_intersect(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,63704215) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72782769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNodes_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNodes_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addTriangle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,43117328) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTriangle_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTriangle_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTriangles_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTriangles_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_base_accept_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36301858) ) return false;
		if( (!(Luna< osg::ShapeVisitor >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_accept_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45826538) ) return false;
		if( (!(Luna< osg::ConstShapeVisitor >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_intersect(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,63704215) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::KdTree::KdTree()
	static osg::KdTree* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::KdTree::KdTree() function, expected prototype:\nosg::KdTree::KdTree()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::KdTree();
	}

	// osg::KdTree::KdTree(const osg::KdTree & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::KdTree* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::KdTree::KdTree(const osg::KdTree & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::KdTree::KdTree(const osg::KdTree & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::KdTree* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::KdTree::KdTree function");
		}
		const osg::KdTree & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::KdTree::KdTree function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::KdTree(rhs, copyop);
	}

	// osg::KdTree::KdTree(lua_Table * data)
	static osg::KdTree* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::KdTree::KdTree(lua_Table * data) function, expected prototype:\nosg::KdTree::KdTree(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_KdTree(L,NULL);
	}

	// osg::KdTree::KdTree(lua_Table * data, const osg::KdTree & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::KdTree* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::KdTree::KdTree(lua_Table * data, const osg::KdTree & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::KdTree::KdTree(lua_Table * data, const osg::KdTree & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::KdTree* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::KdTree::KdTree function");
		}
		const osg::KdTree & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::KdTree::KdTree function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_KdTree(L,NULL, rhs, copyop);
	}

	// Overload binder for osg::KdTree::KdTree
	static osg::KdTree* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function KdTree, cannot match any of the overloads for function KdTree:\n  KdTree()\n  KdTree(const osg::KdTree &, const osg::CopyOp &)\n  KdTree(lua_Table *)\n  KdTree(lua_Table *, const osg::KdTree &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::KdTree::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::KdTree::cloneType() const function, expected prototype:\nosg::Object * osg::KdTree::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::KdTree::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::KdTree::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::KdTree::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::KdTree::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::KdTree::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::KdTree::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::KdTree::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::KdTree::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::KdTree::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::KdTree::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::KdTree::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::KdTree::libraryName() const function, expected prototype:\nconst char * osg::KdTree::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::KdTree::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::KdTree::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::KdTree::className() const function, expected prototype:\nconst char * osg::KdTree::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::KdTree::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::KdTree::accept(osg::ShapeVisitor & arg1)
	static int _bind_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_accept_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::accept(osg::ShapeVisitor & arg1) function, expected prototype:\nvoid osg::KdTree::accept(osg::ShapeVisitor & arg1)\nClass arguments details:\narg 1 ID = 36301858\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ShapeVisitor* _arg1_ptr=(Luna< osg::ShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::KdTree::accept function");
		}
		osg::ShapeVisitor & _arg1=*_arg1_ptr;

		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::accept(osg::ShapeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(_arg1);

		return 0;
	}

	// void osg::KdTree::accept(osg::ConstShapeVisitor & arg1) const
	static int _bind_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_accept_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::accept(osg::ConstShapeVisitor & arg1) const function, expected prototype:\nvoid osg::KdTree::accept(osg::ConstShapeVisitor & arg1) const\nClass arguments details:\narg 1 ID = 45826538\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ConstShapeVisitor* _arg1_ptr=(Luna< osg::ConstShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::KdTree::accept function");
		}
		osg::ConstShapeVisitor & _arg1=*_arg1_ptr;

		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::accept(osg::ConstShapeVisitor &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(_arg1);

		return 0;
	}

	// Overload binder for osg::KdTree::accept
	static int _bind_accept(lua_State *L) {
		if (_lg_typecheck_accept_overload_1(L)) return _bind_accept_overload_1(L);
		if (_lg_typecheck_accept_overload_2(L)) return _bind_accept_overload_2(L);

		luaL_error(L, "error in function accept, cannot match any of the overloads for function accept:\n  accept(osg::ShapeVisitor &)\n  accept(osg::ConstShapeVisitor &)\n");
		return 0;
	}

	// bool osg::KdTree::intersect(const osg::Vec3d & start, const osg::Vec3d & end, osg::KdTree::LineSegmentIntersections & intersections) const
	static int _bind_intersect(lua_State *L) {
		if (!_lg_typecheck_intersect(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::KdTree::intersect(const osg::Vec3d & start, const osg::Vec3d & end, osg::KdTree::LineSegmentIntersections & intersections) const function, expected prototype:\nbool osg::KdTree::intersect(const osg::Vec3d & start, const osg::Vec3d & end, osg::KdTree::LineSegmentIntersections & intersections) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 91252552\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* start_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in osg::KdTree::intersect function");
		}
		const osg::Vec3d & start=*start_ptr;
		const osg::Vec3d* end_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !end_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg end in osg::KdTree::intersect function");
		}
		const osg::Vec3d & end=*end_ptr;
		osg::KdTree::LineSegmentIntersections* intersections_ptr=(Luna< std::vector< osg::KdTree::LineSegmentIntersection > >::checkSubType< osg::KdTree::LineSegmentIntersections >(L,4));
		if( !intersections_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg intersections in osg::KdTree::intersect function");
		}
		osg::KdTree::LineSegmentIntersections & intersections=*intersections_ptr;

		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::KdTree::intersect(const osg::Vec3d &, const osg::Vec3d &, osg::KdTree::LineSegmentIntersections &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->intersect(start, end, intersections);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int osg::KdTree::addNode(const osg::KdTree::KdNode & node)
	static int _bind_addNode(lua_State *L) {
		if (!_lg_typecheck_addNode(L)) {
			luaL_error(L, "luna typecheck failed in int osg::KdTree::addNode(const osg::KdTree::KdNode & node) function, expected prototype:\nint osg::KdTree::addNode(const osg::KdTree::KdNode & node)\nClass arguments details:\narg 1 ID = 72782769\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::KdTree::KdNode* node_ptr=(Luna< osg::KdTree::KdNode >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::KdTree::addNode function");
		}
		const osg::KdTree::KdNode & node=*node_ptr;

		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::KdTree::addNode(const osg::KdTree::KdNode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->addNode(node);
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::KdTree::KdNode & osg::KdTree::getNode(int nodeNum)
	static int _bind_getNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::KdTree::KdNode & osg::KdTree::getNode(int nodeNum) function, expected prototype:\nosg::KdTree::KdNode & osg::KdTree::getNode(int nodeNum)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int nodeNum=(int)lua_tointeger(L,2);

		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::KdTree::KdNode & osg::KdTree::getNode(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::KdTree::KdNode* lret = &self->getNode(nodeNum);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::KdTree::KdNode >::push(L,lret,false);

		return 1;
	}

	// const osg::KdTree::KdNode & osg::KdTree::getNode(int nodeNum) const
	static int _bind_getNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::KdTree::KdNode & osg::KdTree::getNode(int nodeNum) const function, expected prototype:\nconst osg::KdTree::KdNode & osg::KdTree::getNode(int nodeNum) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int nodeNum=(int)lua_tointeger(L,2);

		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::KdTree::KdNode & osg::KdTree::getNode(int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::KdTree::KdNode* lret = &self->getNode(nodeNum);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::KdTree::KdNode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::KdTree::getNode
	static int _bind_getNode(lua_State *L) {
		if (_lg_typecheck_getNode_overload_1(L)) return _bind_getNode_overload_1(L);
		if (_lg_typecheck_getNode_overload_2(L)) return _bind_getNode_overload_2(L);

		luaL_error(L, "error in function getNode, cannot match any of the overloads for function getNode:\n  getNode(int)\n  getNode(int)\n");
		return 0;
	}

	// osg::KdTree::KdNodeList & osg::KdTree::getNodes()
	static int _bind_getNodes_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNodes_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::KdTree::KdNodeList & osg::KdTree::getNodes() function, expected prototype:\nosg::KdTree::KdNodeList & osg::KdTree::getNodes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::KdTree::KdNodeList & osg::KdTree::getNodes(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::KdTree::KdNodeList* lret = &self->getNodes();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::KdTree::KdNodeList >::push(L,lret,false);

		return 1;
	}

	// const osg::KdTree::KdNodeList & osg::KdTree::getNodes() const
	static int _bind_getNodes_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNodes_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::KdTree::KdNodeList & osg::KdTree::getNodes() const function, expected prototype:\nconst osg::KdTree::KdNodeList & osg::KdTree::getNodes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::KdTree::KdNodeList & osg::KdTree::getNodes() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::KdTree::KdNodeList* lret = &self->getNodes();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::KdTree::KdNodeList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::KdTree::getNodes
	static int _bind_getNodes(lua_State *L) {
		if (_lg_typecheck_getNodes_overload_1(L)) return _bind_getNodes_overload_1(L);
		if (_lg_typecheck_getNodes_overload_2(L)) return _bind_getNodes_overload_2(L);

		luaL_error(L, "error in function getNodes, cannot match any of the overloads for function getNodes:\n  getNodes()\n  getNodes()\n");
		return 0;
	}

	// void osg::KdTree::setVertices(osg::Vec3Array * vertices)
	static int _bind_setVertices(lua_State *L) {
		if (!_lg_typecheck_setVertices(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::setVertices(osg::Vec3Array * vertices) function, expected prototype:\nvoid osg::KdTree::setVertices(osg::Vec3Array * vertices)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3Array* vertices=(Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,2));

		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::setVertices(osg::Vec3Array *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertices(vertices);

		return 0;
	}

	// const osg::Vec3Array * osg::KdTree::getVertices() const
	static int _bind_getVertices(lua_State *L) {
		if (!_lg_typecheck_getVertices(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3Array * osg::KdTree::getVertices() const function, expected prototype:\nconst osg::Vec3Array * osg::KdTree::getVertices() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3Array * osg::KdTree::getVertices() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3Array * lret = self->getVertices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3Array >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::KdTree::addTriangle(const osg::KdTree::Triangle & tri)
	static int _bind_addTriangle(lua_State *L) {
		if (!_lg_typecheck_addTriangle(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::KdTree::addTriangle(const osg::KdTree::Triangle & tri) function, expected prototype:\nunsigned int osg::KdTree::addTriangle(const osg::KdTree::Triangle & tri)\nClass arguments details:\narg 1 ID = 43117328\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::KdTree::Triangle* tri_ptr=(Luna< osg::KdTree::Triangle >::check(L,2));
		if( !tri_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tri in osg::KdTree::addTriangle function");
		}
		const osg::KdTree::Triangle & tri=*tri_ptr;

		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::KdTree::addTriangle(const osg::KdTree::Triangle &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->addTriangle(tri);
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::KdTree::Triangle & osg::KdTree::getTriangle(unsigned int i)
	static int _bind_getTriangle_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTriangle_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::KdTree::Triangle & osg::KdTree::getTriangle(unsigned int i) function, expected prototype:\nosg::KdTree::Triangle & osg::KdTree::getTriangle(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::KdTree::Triangle & osg::KdTree::getTriangle(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::KdTree::Triangle* lret = &self->getTriangle(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::KdTree::Triangle >::push(L,lret,false);

		return 1;
	}

	// const osg::KdTree::Triangle & osg::KdTree::getTriangle(unsigned int i) const
	static int _bind_getTriangle_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTriangle_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::KdTree::Triangle & osg::KdTree::getTriangle(unsigned int i) const function, expected prototype:\nconst osg::KdTree::Triangle & osg::KdTree::getTriangle(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::KdTree::Triangle & osg::KdTree::getTriangle(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::KdTree::Triangle* lret = &self->getTriangle(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::KdTree::Triangle >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::KdTree::getTriangle
	static int _bind_getTriangle(lua_State *L) {
		if (_lg_typecheck_getTriangle_overload_1(L)) return _bind_getTriangle_overload_1(L);
		if (_lg_typecheck_getTriangle_overload_2(L)) return _bind_getTriangle_overload_2(L);

		luaL_error(L, "error in function getTriangle, cannot match any of the overloads for function getTriangle:\n  getTriangle(unsigned int)\n  getTriangle(unsigned int)\n");
		return 0;
	}

	// osg::KdTree::TriangleList & osg::KdTree::getTriangles()
	static int _bind_getTriangles_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTriangles_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::KdTree::TriangleList & osg::KdTree::getTriangles() function, expected prototype:\nosg::KdTree::TriangleList & osg::KdTree::getTriangles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::KdTree::TriangleList & osg::KdTree::getTriangles(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::KdTree::TriangleList* lret = &self->getTriangles();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::KdTree::TriangleList >::push(L,lret,false);

		return 1;
	}

	// const osg::KdTree::TriangleList & osg::KdTree::getTriangles() const
	static int _bind_getTriangles_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTriangles_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::KdTree::TriangleList & osg::KdTree::getTriangles() const function, expected prototype:\nconst osg::KdTree::TriangleList & osg::KdTree::getTriangles() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::KdTree::TriangleList & osg::KdTree::getTriangles() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::KdTree::TriangleList* lret = &self->getTriangles();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::KdTree::TriangleList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::KdTree::getTriangles
	static int _bind_getTriangles(lua_State *L) {
		if (_lg_typecheck_getTriangles_overload_1(L)) return _bind_getTriangles_overload_1(L);
		if (_lg_typecheck_getTriangles_overload_2(L)) return _bind_getTriangles_overload_2(L);

		luaL_error(L, "error in function getTriangles, cannot match any of the overloads for function getTriangles:\n  getTriangles()\n  getTriangles()\n");
		return 0;
	}

	// void osg::KdTree::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::KdTree::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->KdTree::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::KdTree::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::base_setName(const std::string & name) function, expected prototype:\nvoid osg::KdTree::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->KdTree::setName(name);

		return 0;
	}

	// void osg::KdTree::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::base_computeDataVariance() function, expected prototype:\nvoid osg::KdTree::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->KdTree::computeDataVariance();

		return 0;
	}

	// void osg::KdTree::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::KdTree::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->KdTree::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::KdTree::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::KdTree::base_getUserData() function, expected prototype:\nosg::Referenced * osg::KdTree::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::KdTree::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->KdTree::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::KdTree::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::KdTree::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::KdTree::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::KdTree::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->KdTree::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::KdTree::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::KdTree::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::KdTree::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->KdTree::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::KdTree::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::KdTree::base_cloneType() const function, expected prototype:\nosg::Object * osg::KdTree::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::KdTree::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->KdTree::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::KdTree::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::KdTree::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::KdTree::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::KdTree::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::KdTree::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->KdTree::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::KdTree::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::KdTree::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::KdTree::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::KdTree::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->KdTree::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::KdTree::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::KdTree::base_libraryName() const function, expected prototype:\nconst char * osg::KdTree::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::KdTree::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->KdTree::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::KdTree::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::KdTree::base_className() const function, expected prototype:\nconst char * osg::KdTree::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::KdTree::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->KdTree::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::KdTree::base_accept(osg::ShapeVisitor & arg1)
	static int _bind_base_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_accept_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::base_accept(osg::ShapeVisitor & arg1) function, expected prototype:\nvoid osg::KdTree::base_accept(osg::ShapeVisitor & arg1)\nClass arguments details:\narg 1 ID = 36301858\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ShapeVisitor* _arg1_ptr=(Luna< osg::ShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::KdTree::base_accept function");
		}
		osg::ShapeVisitor & _arg1=*_arg1_ptr;

		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::base_accept(osg::ShapeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->KdTree::accept(_arg1);

		return 0;
	}

	// void osg::KdTree::base_accept(osg::ConstShapeVisitor & arg1) const
	static int _bind_base_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_accept_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::base_accept(osg::ConstShapeVisitor & arg1) const function, expected prototype:\nvoid osg::KdTree::base_accept(osg::ConstShapeVisitor & arg1) const\nClass arguments details:\narg 1 ID = 45826538\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ConstShapeVisitor* _arg1_ptr=(Luna< osg::ConstShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::KdTree::base_accept function");
		}
		osg::ConstShapeVisitor & _arg1=*_arg1_ptr;

		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::base_accept(osg::ConstShapeVisitor &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->KdTree::accept(_arg1);

		return 0;
	}

	// Overload binder for osg::KdTree::base_accept
	static int _bind_base_accept(lua_State *L) {
		if (_lg_typecheck_base_accept_overload_1(L)) return _bind_base_accept_overload_1(L);
		if (_lg_typecheck_base_accept_overload_2(L)) return _bind_base_accept_overload_2(L);

		luaL_error(L, "error in function base_accept, cannot match any of the overloads for function base_accept:\n  base_accept(osg::ShapeVisitor &)\n  base_accept(osg::ConstShapeVisitor &)\n");
		return 0;
	}

	// bool osg::KdTree::base_intersect(const osg::Vec3d & start, const osg::Vec3d & end, osg::KdTree::LineSegmentIntersections & intersections) const
	static int _bind_base_intersect(lua_State *L) {
		if (!_lg_typecheck_base_intersect(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::KdTree::base_intersect(const osg::Vec3d & start, const osg::Vec3d & end, osg::KdTree::LineSegmentIntersections & intersections) const function, expected prototype:\nbool osg::KdTree::base_intersect(const osg::Vec3d & start, const osg::Vec3d & end, osg::KdTree::LineSegmentIntersections & intersections) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 91252552\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* start_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in osg::KdTree::base_intersect function");
		}
		const osg::Vec3d & start=*start_ptr;
		const osg::Vec3d* end_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !end_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg end in osg::KdTree::base_intersect function");
		}
		const osg::Vec3d & end=*end_ptr;
		osg::KdTree::LineSegmentIntersections* intersections_ptr=(Luna< std::vector< osg::KdTree::LineSegmentIntersection > >::checkSubType< osg::KdTree::LineSegmentIntersections >(L,4));
		if( !intersections_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg intersections in osg::KdTree::base_intersect function");
		}
		osg::KdTree::LineSegmentIntersections & intersections=*intersections_ptr;

		osg::KdTree* self=Luna< osg::Referenced >::checkSubType< osg::KdTree >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::KdTree::base_intersect(const osg::Vec3d &, const osg::Vec3d &, osg::KdTree::LineSegmentIntersections &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->KdTree::intersect(start, end, intersections);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::KdTree* LunaTraits< osg::KdTree >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_KdTree::_bind_ctor(L);
}

void LunaTraits< osg::KdTree >::_bind_dtor(osg::KdTree* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::KdTree >::className[] = "KdTree";
const char LunaTraits< osg::KdTree >::fullName[] = "osg::KdTree";
const char LunaTraits< osg::KdTree >::moduleName[] = "osg";
const char* LunaTraits< osg::KdTree >::parents[] = {"osg.Shape", 0};
const int LunaTraits< osg::KdTree >::hash = 45168615;
const int LunaTraits< osg::KdTree >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::KdTree >::methods[] = {
	{"cloneType", &luna_wrapper_osg_KdTree::_bind_cloneType},
	{"clone", &luna_wrapper_osg_KdTree::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_KdTree::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_KdTree::_bind_libraryName},
	{"className", &luna_wrapper_osg_KdTree::_bind_className},
	{"accept", &luna_wrapper_osg_KdTree::_bind_accept},
	{"intersect", &luna_wrapper_osg_KdTree::_bind_intersect},
	{"addNode", &luna_wrapper_osg_KdTree::_bind_addNode},
	{"getNode", &luna_wrapper_osg_KdTree::_bind_getNode},
	{"getNodes", &luna_wrapper_osg_KdTree::_bind_getNodes},
	{"setVertices", &luna_wrapper_osg_KdTree::_bind_setVertices},
	{"getVertices", &luna_wrapper_osg_KdTree::_bind_getVertices},
	{"addTriangle", &luna_wrapper_osg_KdTree::_bind_addTriangle},
	{"getTriangle", &luna_wrapper_osg_KdTree::_bind_getTriangle},
	{"getTriangles", &luna_wrapper_osg_KdTree::_bind_getTriangles},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_KdTree::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_KdTree::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_KdTree::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_KdTree::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_KdTree::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_KdTree::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_KdTree::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_KdTree::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_KdTree::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_KdTree::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_KdTree::_bind_base_className},
	{"base_accept", &luna_wrapper_osg_KdTree::_bind_base_accept},
	{"base_intersect", &luna_wrapper_osg_KdTree::_bind_base_intersect},
	{"fromVoid", &luna_wrapper_osg_KdTree::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_KdTree::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_KdTree::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::KdTree >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_KdTree::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::KdTree >::enumValues[] = {
	{0,0}
};


