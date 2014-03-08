#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_TriangleMesh.h>

class luna_wrapper_osg_TriangleMesh {
public:
	typedef Luna< osg::TriangleMesh > luna_t;

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

		osg::TriangleMesh* self= (osg::TriangleMesh*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::TriangleMesh >::push(L,self,false);
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
		//osg::TriangleMesh* ptr= dynamic_cast< osg::TriangleMesh* >(Luna< osg::Referenced >::check(L,1));
		osg::TriangleMesh* ptr= luna_caster< osg::Referenced, osg::TriangleMesh >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TriangleMesh >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertices_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertices_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setIndices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIndices_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndices_overload_2(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::TriangleMesh::TriangleMesh()
	static osg::TriangleMesh* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::TriangleMesh::TriangleMesh() function, expected prototype:\nosg::TriangleMesh::TriangleMesh()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::TriangleMesh();
	}

	// osg::TriangleMesh::TriangleMesh(const osg::TriangleMesh & mesh, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TriangleMesh* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::TriangleMesh::TriangleMesh(const osg::TriangleMesh & mesh, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TriangleMesh::TriangleMesh(const osg::TriangleMesh & mesh, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::TriangleMesh* mesh_ptr=(Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1));
		if( !mesh_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mesh in osg::TriangleMesh::TriangleMesh function");
		}
		const osg::TriangleMesh & mesh=*mesh_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TriangleMesh::TriangleMesh function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::TriangleMesh(mesh, copyop);
	}

	// osg::TriangleMesh::TriangleMesh(lua_Table * data)
	static osg::TriangleMesh* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::TriangleMesh::TriangleMesh(lua_Table * data) function, expected prototype:\nosg::TriangleMesh::TriangleMesh(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_TriangleMesh(L,NULL);
	}

	// osg::TriangleMesh::TriangleMesh(lua_Table * data, const osg::TriangleMesh & mesh, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TriangleMesh* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::TriangleMesh::TriangleMesh(lua_Table * data, const osg::TriangleMesh & mesh, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TriangleMesh::TriangleMesh(lua_Table * data, const osg::TriangleMesh & mesh, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::TriangleMesh* mesh_ptr=(Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,2));
		if( !mesh_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mesh in osg::TriangleMesh::TriangleMesh function");
		}
		const osg::TriangleMesh & mesh=*mesh_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TriangleMesh::TriangleMesh function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_TriangleMesh(L,NULL, mesh, copyop);
	}

	// Overload binder for osg::TriangleMesh::TriangleMesh
	static osg::TriangleMesh* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function TriangleMesh, cannot match any of the overloads for function TriangleMesh:\n  TriangleMesh()\n  TriangleMesh(const osg::TriangleMesh &, const osg::CopyOp &)\n  TriangleMesh(lua_Table *)\n  TriangleMesh(lua_Table *, const osg::TriangleMesh &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::TriangleMesh::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TriangleMesh::cloneType() const function, expected prototype:\nosg::Object * osg::TriangleMesh::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TriangleMesh::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TriangleMesh::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TriangleMesh::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::TriangleMesh::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TriangleMesh::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TriangleMesh::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TriangleMesh::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TriangleMesh::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TriangleMesh::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TriangleMesh::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TriangleMesh::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TriangleMesh::libraryName() const function, expected prototype:\nconst char * osg::TriangleMesh::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TriangleMesh::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TriangleMesh::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TriangleMesh::className() const function, expected prototype:\nconst char * osg::TriangleMesh::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TriangleMesh::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::TriangleMesh::accept(osg::ShapeVisitor & arg1)
	static int _bind_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_accept_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TriangleMesh::accept(osg::ShapeVisitor & arg1) function, expected prototype:\nvoid osg::TriangleMesh::accept(osg::ShapeVisitor & arg1)\nClass arguments details:\narg 1 ID = 36301858\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ShapeVisitor* _arg1_ptr=(Luna< osg::ShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TriangleMesh::accept function");
		}
		osg::ShapeVisitor & _arg1=*_arg1_ptr;

		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TriangleMesh::accept(osg::ShapeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(_arg1);

		return 0;
	}

	// void osg::TriangleMesh::accept(osg::ConstShapeVisitor & arg1) const
	static int _bind_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_accept_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TriangleMesh::accept(osg::ConstShapeVisitor & arg1) const function, expected prototype:\nvoid osg::TriangleMesh::accept(osg::ConstShapeVisitor & arg1) const\nClass arguments details:\narg 1 ID = 45826538\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ConstShapeVisitor* _arg1_ptr=(Luna< osg::ConstShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TriangleMesh::accept function");
		}
		osg::ConstShapeVisitor & _arg1=*_arg1_ptr;

		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TriangleMesh::accept(osg::ConstShapeVisitor &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(_arg1);

		return 0;
	}

	// Overload binder for osg::TriangleMesh::accept
	static int _bind_accept(lua_State *L) {
		if (_lg_typecheck_accept_overload_1(L)) return _bind_accept_overload_1(L);
		if (_lg_typecheck_accept_overload_2(L)) return _bind_accept_overload_2(L);

		luaL_error(L, "error in function accept, cannot match any of the overloads for function accept:\n  accept(osg::ShapeVisitor &)\n  accept(osg::ConstShapeVisitor &)\n");
		return 0;
	}

	// void osg::TriangleMesh::setVertices(osg::Vec3Array * vertices)
	static int _bind_setVertices(lua_State *L) {
		if (!_lg_typecheck_setVertices(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TriangleMesh::setVertices(osg::Vec3Array * vertices) function, expected prototype:\nvoid osg::TriangleMesh::setVertices(osg::Vec3Array * vertices)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3Array* vertices=(Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,2));

		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TriangleMesh::setVertices(osg::Vec3Array *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertices(vertices);

		return 0;
	}

	// osg::Vec3Array * osg::TriangleMesh::getVertices()
	static int _bind_getVertices_overload_1(lua_State *L) {
		if (!_lg_typecheck_getVertices_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3Array * osg::TriangleMesh::getVertices() function, expected prototype:\nosg::Vec3Array * osg::TriangleMesh::getVertices()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3Array * osg::TriangleMesh::getVertices(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3Array * lret = self->getVertices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3Array >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec3Array * osg::TriangleMesh::getVertices() const
	static int _bind_getVertices_overload_2(lua_State *L) {
		if (!_lg_typecheck_getVertices_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3Array * osg::TriangleMesh::getVertices() const function, expected prototype:\nconst osg::Vec3Array * osg::TriangleMesh::getVertices() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3Array * osg::TriangleMesh::getVertices() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3Array * lret = self->getVertices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TriangleMesh::getVertices
	static int _bind_getVertices(lua_State *L) {
		if (_lg_typecheck_getVertices_overload_1(L)) return _bind_getVertices_overload_1(L);
		if (_lg_typecheck_getVertices_overload_2(L)) return _bind_getVertices_overload_2(L);

		luaL_error(L, "error in function getVertices, cannot match any of the overloads for function getVertices:\n  getVertices()\n  getVertices()\n");
		return 0;
	}

	// void osg::TriangleMesh::setIndices(osg::IndexArray * indices)
	static int _bind_setIndices(lua_State *L) {
		if (!_lg_typecheck_setIndices(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TriangleMesh::setIndices(osg::IndexArray * indices) function, expected prototype:\nvoid osg::TriangleMesh::setIndices(osg::IndexArray * indices)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::IndexArray* indices=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,2));

		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TriangleMesh::setIndices(osg::IndexArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setIndices(indices);

		return 0;
	}

	// osg::IndexArray * osg::TriangleMesh::getIndices()
	static int _bind_getIndices_overload_1(lua_State *L) {
		if (!_lg_typecheck_getIndices_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::IndexArray * osg::TriangleMesh::getIndices() function, expected prototype:\nosg::IndexArray * osg::TriangleMesh::getIndices()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::IndexArray * osg::TriangleMesh::getIndices(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::IndexArray * lret = self->getIndices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::IndexArray >::push(L,lret,false);

		return 1;
	}

	// const osg::IndexArray * osg::TriangleMesh::getIndices() const
	static int _bind_getIndices_overload_2(lua_State *L) {
		if (!_lg_typecheck_getIndices_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::IndexArray * osg::TriangleMesh::getIndices() const function, expected prototype:\nconst osg::IndexArray * osg::TriangleMesh::getIndices() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::IndexArray * osg::TriangleMesh::getIndices() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::IndexArray * lret = self->getIndices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::IndexArray >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TriangleMesh::getIndices
	static int _bind_getIndices(lua_State *L) {
		if (_lg_typecheck_getIndices_overload_1(L)) return _bind_getIndices_overload_1(L);
		if (_lg_typecheck_getIndices_overload_2(L)) return _bind_getIndices_overload_2(L);

		luaL_error(L, "error in function getIndices, cannot match any of the overloads for function getIndices:\n  getIndices()\n  getIndices()\n");
		return 0;
	}

	// void osg::TriangleMesh::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TriangleMesh::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::TriangleMesh::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TriangleMesh::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TriangleMesh::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::TriangleMesh::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TriangleMesh::base_setName(const std::string & name) function, expected prototype:\nvoid osg::TriangleMesh::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TriangleMesh::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TriangleMesh::setName(name);

		return 0;
	}

	// void osg::TriangleMesh::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TriangleMesh::base_computeDataVariance() function, expected prototype:\nvoid osg::TriangleMesh::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TriangleMesh::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TriangleMesh::computeDataVariance();

		return 0;
	}

	// void osg::TriangleMesh::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TriangleMesh::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::TriangleMesh::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TriangleMesh::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TriangleMesh::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::TriangleMesh::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::TriangleMesh::base_getUserData() function, expected prototype:\nosg::Referenced * osg::TriangleMesh::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::TriangleMesh::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->TriangleMesh::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::TriangleMesh::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::TriangleMesh::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::TriangleMesh::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::TriangleMesh::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->TriangleMesh::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TriangleMesh::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::TriangleMesh::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TriangleMesh::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::TriangleMesh::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TriangleMesh::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TriangleMesh::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::TriangleMesh::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TriangleMesh::base_cloneType() const function, expected prototype:\nosg::Object * osg::TriangleMesh::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TriangleMesh::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->TriangleMesh::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TriangleMesh::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TriangleMesh::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::TriangleMesh::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TriangleMesh::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TriangleMesh::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->TriangleMesh::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TriangleMesh::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TriangleMesh::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TriangleMesh::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TriangleMesh::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TriangleMesh::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TriangleMesh::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TriangleMesh::base_libraryName() const function, expected prototype:\nconst char * osg::TriangleMesh::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TriangleMesh::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TriangleMesh::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TriangleMesh::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TriangleMesh::base_className() const function, expected prototype:\nconst char * osg::TriangleMesh::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TriangleMesh::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TriangleMesh::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::TriangleMesh::base_accept(osg::ShapeVisitor & arg1)
	static int _bind_base_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_accept_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TriangleMesh::base_accept(osg::ShapeVisitor & arg1) function, expected prototype:\nvoid osg::TriangleMesh::base_accept(osg::ShapeVisitor & arg1)\nClass arguments details:\narg 1 ID = 36301858\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ShapeVisitor* _arg1_ptr=(Luna< osg::ShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TriangleMesh::base_accept function");
		}
		osg::ShapeVisitor & _arg1=*_arg1_ptr;

		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TriangleMesh::base_accept(osg::ShapeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TriangleMesh::accept(_arg1);

		return 0;
	}

	// void osg::TriangleMesh::base_accept(osg::ConstShapeVisitor & arg1) const
	static int _bind_base_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_accept_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TriangleMesh::base_accept(osg::ConstShapeVisitor & arg1) const function, expected prototype:\nvoid osg::TriangleMesh::base_accept(osg::ConstShapeVisitor & arg1) const\nClass arguments details:\narg 1 ID = 45826538\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ConstShapeVisitor* _arg1_ptr=(Luna< osg::ConstShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TriangleMesh::base_accept function");
		}
		osg::ConstShapeVisitor & _arg1=*_arg1_ptr;

		osg::TriangleMesh* self=Luna< osg::Referenced >::checkSubType< osg::TriangleMesh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TriangleMesh::base_accept(osg::ConstShapeVisitor &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TriangleMesh::accept(_arg1);

		return 0;
	}

	// Overload binder for osg::TriangleMesh::base_accept
	static int _bind_base_accept(lua_State *L) {
		if (_lg_typecheck_base_accept_overload_1(L)) return _bind_base_accept_overload_1(L);
		if (_lg_typecheck_base_accept_overload_2(L)) return _bind_base_accept_overload_2(L);

		luaL_error(L, "error in function base_accept, cannot match any of the overloads for function base_accept:\n  base_accept(osg::ShapeVisitor &)\n  base_accept(osg::ConstShapeVisitor &)\n");
		return 0;
	}


	// Operator binds:

};

osg::TriangleMesh* LunaTraits< osg::TriangleMesh >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_TriangleMesh::_bind_ctor(L);
}

void LunaTraits< osg::TriangleMesh >::_bind_dtor(osg::TriangleMesh* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TriangleMesh >::className[] = "TriangleMesh";
const char LunaTraits< osg::TriangleMesh >::fullName[] = "osg::TriangleMesh";
const char LunaTraits< osg::TriangleMesh >::moduleName[] = "osg";
const char* LunaTraits< osg::TriangleMesh >::parents[] = {"osg.Shape", 0};
const int LunaTraits< osg::TriangleMesh >::hash = 23977023;
const int LunaTraits< osg::TriangleMesh >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TriangleMesh >::methods[] = {
	{"cloneType", &luna_wrapper_osg_TriangleMesh::_bind_cloneType},
	{"clone", &luna_wrapper_osg_TriangleMesh::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_TriangleMesh::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_TriangleMesh::_bind_libraryName},
	{"className", &luna_wrapper_osg_TriangleMesh::_bind_className},
	{"accept", &luna_wrapper_osg_TriangleMesh::_bind_accept},
	{"setVertices", &luna_wrapper_osg_TriangleMesh::_bind_setVertices},
	{"getVertices", &luna_wrapper_osg_TriangleMesh::_bind_getVertices},
	{"setIndices", &luna_wrapper_osg_TriangleMesh::_bind_setIndices},
	{"getIndices", &luna_wrapper_osg_TriangleMesh::_bind_getIndices},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_TriangleMesh::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_TriangleMesh::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_TriangleMesh::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_TriangleMesh::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_TriangleMesh::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_TriangleMesh::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_TriangleMesh::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_TriangleMesh::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_TriangleMesh::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_TriangleMesh::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_TriangleMesh::_bind_base_className},
	{"base_accept", &luna_wrapper_osg_TriangleMesh::_bind_base_accept},
	{"fromVoid", &luna_wrapper_osg_TriangleMesh::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_TriangleMesh::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_TriangleMesh::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TriangleMesh >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TriangleMesh::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TriangleMesh >::enumValues[] = {
	{0,0}
};


