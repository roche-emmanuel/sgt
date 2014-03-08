#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_CompositeShape.h>

class luna_wrapper_osg_CompositeShape {
public:
	typedef Luna< osg::CompositeShape > luna_t;

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

		osg::CompositeShape* self= (osg::CompositeShape*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::CompositeShape >::push(L,self,false);
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
		//osg::CompositeShape* ptr= dynamic_cast< osg::CompositeShape* >(Luna< osg::Referenced >::check(L,1));
		osg::CompositeShape* ptr= luna_caster< osg::Referenced, osg::CompositeShape >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::CompositeShape >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getNumChildren(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getChild_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChild_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findChildNo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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
	// osg::CompositeShape::CompositeShape()
	static osg::CompositeShape* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::CompositeShape::CompositeShape() function, expected prototype:\nosg::CompositeShape::CompositeShape()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::CompositeShape();
	}

	// osg::CompositeShape::CompositeShape(const osg::CompositeShape & cs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::CompositeShape* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::CompositeShape::CompositeShape(const osg::CompositeShape & cs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::CompositeShape::CompositeShape(const osg::CompositeShape & cs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::CompositeShape* cs_ptr=(Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1));
		if( !cs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cs in osg::CompositeShape::CompositeShape function");
		}
		const osg::CompositeShape & cs=*cs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::CompositeShape::CompositeShape function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::CompositeShape(cs, copyop);
	}

	// osg::CompositeShape::CompositeShape(lua_Table * data)
	static osg::CompositeShape* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::CompositeShape::CompositeShape(lua_Table * data) function, expected prototype:\nosg::CompositeShape::CompositeShape(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_CompositeShape(L,NULL);
	}

	// osg::CompositeShape::CompositeShape(lua_Table * data, const osg::CompositeShape & cs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::CompositeShape* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::CompositeShape::CompositeShape(lua_Table * data, const osg::CompositeShape & cs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::CompositeShape::CompositeShape(lua_Table * data, const osg::CompositeShape & cs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::CompositeShape* cs_ptr=(Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,2));
		if( !cs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cs in osg::CompositeShape::CompositeShape function");
		}
		const osg::CompositeShape & cs=*cs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::CompositeShape::CompositeShape function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_CompositeShape(L,NULL, cs, copyop);
	}

	// Overload binder for osg::CompositeShape::CompositeShape
	static osg::CompositeShape* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function CompositeShape, cannot match any of the overloads for function CompositeShape:\n  CompositeShape()\n  CompositeShape(const osg::CompositeShape &, const osg::CopyOp &)\n  CompositeShape(lua_Table *)\n  CompositeShape(lua_Table *, const osg::CompositeShape &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::CompositeShape::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::CompositeShape::cloneType() const function, expected prototype:\nosg::Object * osg::CompositeShape::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::CompositeShape::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::CompositeShape::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::CompositeShape::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::CompositeShape::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::CompositeShape::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::CompositeShape::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::CompositeShape::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CompositeShape::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::CompositeShape::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CompositeShape::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::CompositeShape::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::CompositeShape::libraryName() const function, expected prototype:\nconst char * osg::CompositeShape::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::CompositeShape::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::CompositeShape::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::CompositeShape::className() const function, expected prototype:\nconst char * osg::CompositeShape::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::CompositeShape::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::CompositeShape::accept(osg::ShapeVisitor & arg1)
	static int _bind_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_accept_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CompositeShape::accept(osg::ShapeVisitor & arg1) function, expected prototype:\nvoid osg::CompositeShape::accept(osg::ShapeVisitor & arg1)\nClass arguments details:\narg 1 ID = 36301858\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ShapeVisitor* _arg1_ptr=(Luna< osg::ShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::CompositeShape::accept function");
		}
		osg::ShapeVisitor & _arg1=*_arg1_ptr;

		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CompositeShape::accept(osg::ShapeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(_arg1);

		return 0;
	}

	// void osg::CompositeShape::accept(osg::ConstShapeVisitor & arg1) const
	static int _bind_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_accept_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CompositeShape::accept(osg::ConstShapeVisitor & arg1) const function, expected prototype:\nvoid osg::CompositeShape::accept(osg::ConstShapeVisitor & arg1) const\nClass arguments details:\narg 1 ID = 45826538\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ConstShapeVisitor* _arg1_ptr=(Luna< osg::ConstShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::CompositeShape::accept function");
		}
		osg::ConstShapeVisitor & _arg1=*_arg1_ptr;

		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CompositeShape::accept(osg::ConstShapeVisitor &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(_arg1);

		return 0;
	}

	// Overload binder for osg::CompositeShape::accept
	static int _bind_accept(lua_State *L) {
		if (_lg_typecheck_accept_overload_1(L)) return _bind_accept_overload_1(L);
		if (_lg_typecheck_accept_overload_2(L)) return _bind_accept_overload_2(L);

		luaL_error(L, "error in function accept, cannot match any of the overloads for function accept:\n  accept(osg::ShapeVisitor &)\n  accept(osg::ConstShapeVisitor &)\n");
		return 0;
	}

	// void osg::CompositeShape::setShape(osg::Shape * shape)
	static int _bind_setShape(lua_State *L) {
		if (!_lg_typecheck_setShape(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CompositeShape::setShape(osg::Shape * shape) function, expected prototype:\nvoid osg::CompositeShape::setShape(osg::Shape * shape)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Shape* shape=(Luna< osg::Referenced >::checkSubType< osg::Shape >(L,2));

		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CompositeShape::setShape(osg::Shape *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setShape(shape);

		return 0;
	}

	// osg::Shape * osg::CompositeShape::getShape()
	static int _bind_getShape_overload_1(lua_State *L) {
		if (!_lg_typecheck_getShape_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Shape * osg::CompositeShape::getShape() function, expected prototype:\nosg::Shape * osg::CompositeShape::getShape()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Shape * osg::CompositeShape::getShape(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Shape * lret = self->getShape();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shape >::push(L,lret,false);

		return 1;
	}

	// const osg::Shape * osg::CompositeShape::getShape() const
	static int _bind_getShape_overload_2(lua_State *L) {
		if (!_lg_typecheck_getShape_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Shape * osg::CompositeShape::getShape() const function, expected prototype:\nconst osg::Shape * osg::CompositeShape::getShape() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Shape * osg::CompositeShape::getShape() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Shape * lret = self->getShape();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shape >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CompositeShape::getShape
	static int _bind_getShape(lua_State *L) {
		if (_lg_typecheck_getShape_overload_1(L)) return _bind_getShape_overload_1(L);
		if (_lg_typecheck_getShape_overload_2(L)) return _bind_getShape_overload_2(L);

		luaL_error(L, "error in function getShape, cannot match any of the overloads for function getShape:\n  getShape()\n  getShape()\n");
		return 0;
	}

	// unsigned int osg::CompositeShape::getNumChildren() const
	static int _bind_getNumChildren(lua_State *L) {
		if (!_lg_typecheck_getNumChildren(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::CompositeShape::getNumChildren() const function, expected prototype:\nunsigned int osg::CompositeShape::getNumChildren() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::CompositeShape::getNumChildren() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumChildren();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Shape * osg::CompositeShape::getChild(unsigned int i)
	static int _bind_getChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_getChild_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Shape * osg::CompositeShape::getChild(unsigned int i) function, expected prototype:\nosg::Shape * osg::CompositeShape::getChild(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Shape * osg::CompositeShape::getChild(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Shape * lret = self->getChild(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shape >::push(L,lret,false);

		return 1;
	}

	// const osg::Shape * osg::CompositeShape::getChild(unsigned int i) const
	static int _bind_getChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_getChild_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Shape * osg::CompositeShape::getChild(unsigned int i) const function, expected prototype:\nconst osg::Shape * osg::CompositeShape::getChild(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Shape * osg::CompositeShape::getChild(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Shape * lret = self->getChild(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shape >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CompositeShape::getChild
	static int _bind_getChild(lua_State *L) {
		if (_lg_typecheck_getChild_overload_1(L)) return _bind_getChild_overload_1(L);
		if (_lg_typecheck_getChild_overload_2(L)) return _bind_getChild_overload_2(L);

		luaL_error(L, "error in function getChild, cannot match any of the overloads for function getChild:\n  getChild(unsigned int)\n  getChild(unsigned int)\n");
		return 0;
	}

	// void osg::CompositeShape::addChild(osg::Shape * shape)
	static int _bind_addChild(lua_State *L) {
		if (!_lg_typecheck_addChild(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CompositeShape::addChild(osg::Shape * shape) function, expected prototype:\nvoid osg::CompositeShape::addChild(osg::Shape * shape)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Shape* shape=(Luna< osg::Referenced >::checkSubType< osg::Shape >(L,2));

		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CompositeShape::addChild(osg::Shape *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addChild(shape);

		return 0;
	}

	// void osg::CompositeShape::removeChild(unsigned int i)
	static int _bind_removeChild(lua_State *L) {
		if (!_lg_typecheck_removeChild(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CompositeShape::removeChild(unsigned int i) function, expected prototype:\nvoid osg::CompositeShape::removeChild(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CompositeShape::removeChild(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeChild(i);

		return 0;
	}

	// unsigned int osg::CompositeShape::findChildNo(osg::Shape * shape) const
	static int _bind_findChildNo(lua_State *L) {
		if (!_lg_typecheck_findChildNo(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::CompositeShape::findChildNo(osg::Shape * shape) const function, expected prototype:\nunsigned int osg::CompositeShape::findChildNo(osg::Shape * shape) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Shape* shape=(Luna< osg::Referenced >::checkSubType< osg::Shape >(L,2));

		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::CompositeShape::findChildNo(osg::Shape *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->findChildNo(shape);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::CompositeShape::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CompositeShape::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::CompositeShape::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CompositeShape::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CompositeShape::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::CompositeShape::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CompositeShape::base_setName(const std::string & name) function, expected prototype:\nvoid osg::CompositeShape::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CompositeShape::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CompositeShape::setName(name);

		return 0;
	}

	// void osg::CompositeShape::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CompositeShape::base_computeDataVariance() function, expected prototype:\nvoid osg::CompositeShape::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CompositeShape::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CompositeShape::computeDataVariance();

		return 0;
	}

	// void osg::CompositeShape::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CompositeShape::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::CompositeShape::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CompositeShape::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CompositeShape::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::CompositeShape::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::CompositeShape::base_getUserData() function, expected prototype:\nosg::Referenced * osg::CompositeShape::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::CompositeShape::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->CompositeShape::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::CompositeShape::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::CompositeShape::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::CompositeShape::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::CompositeShape::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->CompositeShape::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CompositeShape::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::CompositeShape::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CompositeShape::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::CompositeShape::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CompositeShape::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CompositeShape::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::CompositeShape::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::CompositeShape::base_cloneType() const function, expected prototype:\nosg::Object * osg::CompositeShape::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::CompositeShape::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->CompositeShape::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::CompositeShape::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::CompositeShape::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::CompositeShape::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::CompositeShape::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::CompositeShape::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->CompositeShape::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::CompositeShape::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CompositeShape::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::CompositeShape::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CompositeShape::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CompositeShape::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::CompositeShape::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::CompositeShape::base_libraryName() const function, expected prototype:\nconst char * osg::CompositeShape::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::CompositeShape::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->CompositeShape::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::CompositeShape::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::CompositeShape::base_className() const function, expected prototype:\nconst char * osg::CompositeShape::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::CompositeShape::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->CompositeShape::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::CompositeShape::base_accept(osg::ShapeVisitor & arg1)
	static int _bind_base_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_accept_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CompositeShape::base_accept(osg::ShapeVisitor & arg1) function, expected prototype:\nvoid osg::CompositeShape::base_accept(osg::ShapeVisitor & arg1)\nClass arguments details:\narg 1 ID = 36301858\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ShapeVisitor* _arg1_ptr=(Luna< osg::ShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::CompositeShape::base_accept function");
		}
		osg::ShapeVisitor & _arg1=*_arg1_ptr;

		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CompositeShape::base_accept(osg::ShapeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CompositeShape::accept(_arg1);

		return 0;
	}

	// void osg::CompositeShape::base_accept(osg::ConstShapeVisitor & arg1) const
	static int _bind_base_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_accept_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CompositeShape::base_accept(osg::ConstShapeVisitor & arg1) const function, expected prototype:\nvoid osg::CompositeShape::base_accept(osg::ConstShapeVisitor & arg1) const\nClass arguments details:\narg 1 ID = 45826538\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ConstShapeVisitor* _arg1_ptr=(Luna< osg::ConstShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::CompositeShape::base_accept function");
		}
		osg::ConstShapeVisitor & _arg1=*_arg1_ptr;

		osg::CompositeShape* self=Luna< osg::Referenced >::checkSubType< osg::CompositeShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CompositeShape::base_accept(osg::ConstShapeVisitor &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CompositeShape::accept(_arg1);

		return 0;
	}

	// Overload binder for osg::CompositeShape::base_accept
	static int _bind_base_accept(lua_State *L) {
		if (_lg_typecheck_base_accept_overload_1(L)) return _bind_base_accept_overload_1(L);
		if (_lg_typecheck_base_accept_overload_2(L)) return _bind_base_accept_overload_2(L);

		luaL_error(L, "error in function base_accept, cannot match any of the overloads for function base_accept:\n  base_accept(osg::ShapeVisitor &)\n  base_accept(osg::ConstShapeVisitor &)\n");
		return 0;
	}


	// Operator binds:

};

osg::CompositeShape* LunaTraits< osg::CompositeShape >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_CompositeShape::_bind_ctor(L);
}

void LunaTraits< osg::CompositeShape >::_bind_dtor(osg::CompositeShape* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::CompositeShape >::className[] = "CompositeShape";
const char LunaTraits< osg::CompositeShape >::fullName[] = "osg::CompositeShape";
const char LunaTraits< osg::CompositeShape >::moduleName[] = "osg";
const char* LunaTraits< osg::CompositeShape >::parents[] = {"osg.Shape", 0};
const int LunaTraits< osg::CompositeShape >::hash = 75936557;
const int LunaTraits< osg::CompositeShape >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::CompositeShape >::methods[] = {
	{"cloneType", &luna_wrapper_osg_CompositeShape::_bind_cloneType},
	{"clone", &luna_wrapper_osg_CompositeShape::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_CompositeShape::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_CompositeShape::_bind_libraryName},
	{"className", &luna_wrapper_osg_CompositeShape::_bind_className},
	{"accept", &luna_wrapper_osg_CompositeShape::_bind_accept},
	{"setShape", &luna_wrapper_osg_CompositeShape::_bind_setShape},
	{"getShape", &luna_wrapper_osg_CompositeShape::_bind_getShape},
	{"getNumChildren", &luna_wrapper_osg_CompositeShape::_bind_getNumChildren},
	{"getChild", &luna_wrapper_osg_CompositeShape::_bind_getChild},
	{"addChild", &luna_wrapper_osg_CompositeShape::_bind_addChild},
	{"removeChild", &luna_wrapper_osg_CompositeShape::_bind_removeChild},
	{"findChildNo", &luna_wrapper_osg_CompositeShape::_bind_findChildNo},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_CompositeShape::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_CompositeShape::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_CompositeShape::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_CompositeShape::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_CompositeShape::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_CompositeShape::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_CompositeShape::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_CompositeShape::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_CompositeShape::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_CompositeShape::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_CompositeShape::_bind_base_className},
	{"base_accept", &luna_wrapper_osg_CompositeShape::_bind_base_accept},
	{"fromVoid", &luna_wrapper_osg_CompositeShape::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_CompositeShape::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_CompositeShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::CompositeShape >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_CompositeShape::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::CompositeShape >::enumValues[] = {
	{0,0}
};


