#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ShapeDrawable.h>

class luna_wrapper_osg_ShapeDrawable {
public:
	typedef Luna< osg::ShapeDrawable > luna_t;

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

		osg::ShapeDrawable* self= (osg::ShapeDrawable*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ShapeDrawable >::push(L,self,false);
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
		//osg::ShapeDrawable* ptr= dynamic_cast< osg::ShapeDrawable* >(Luna< osg::Referenced >::check(L,1));
		osg::ShapeDrawable* ptr= luna_caster< osg::Referenced, osg::ShapeDrawable >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ShapeDrawable >::push(L,ptr,false);
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

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Shape >(L,1)) ) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1))) ) return false;
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
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Shape >(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTessellationHints(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTessellationHints_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTessellationHints_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
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

	inline static bool _lg_typecheck_base_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ShapeDrawable::ShapeDrawable()
	static osg::ShapeDrawable* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ShapeDrawable::ShapeDrawable() function, expected prototype:\nosg::ShapeDrawable::ShapeDrawable()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::ShapeDrawable();
	}

	// osg::ShapeDrawable::ShapeDrawable(osg::Shape * shape, osg::TessellationHints * hints = 0)
	static osg::ShapeDrawable* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ShapeDrawable::ShapeDrawable(osg::Shape * shape, osg::TessellationHints * hints = 0) function, expected prototype:\nosg::ShapeDrawable::ShapeDrawable(osg::Shape * shape, osg::TessellationHints * hints = 0)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Shape* shape=(Luna< osg::Referenced >::checkSubType< osg::Shape >(L,1));
		osg::TessellationHints* hints=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,2)) : (osg::TessellationHints*)0;

		return new osg::ShapeDrawable(shape, hints);
	}

	// osg::ShapeDrawable::ShapeDrawable(const osg::ShapeDrawable & pg, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ShapeDrawable* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::ShapeDrawable::ShapeDrawable(const osg::ShapeDrawable & pg, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ShapeDrawable::ShapeDrawable(const osg::ShapeDrawable & pg, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::ShapeDrawable* pg_ptr=(Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1));
		if( !pg_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pg in osg::ShapeDrawable::ShapeDrawable function");
		}
		const osg::ShapeDrawable & pg=*pg_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ShapeDrawable::ShapeDrawable function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::ShapeDrawable(pg, copyop);
	}

	// osg::ShapeDrawable::ShapeDrawable(lua_Table * data)
	static osg::ShapeDrawable* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::ShapeDrawable::ShapeDrawable(lua_Table * data) function, expected prototype:\nosg::ShapeDrawable::ShapeDrawable(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_ShapeDrawable(L,NULL);
	}

	// osg::ShapeDrawable::ShapeDrawable(lua_Table * data, osg::Shape * shape, osg::TessellationHints * hints = 0)
	static osg::ShapeDrawable* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::ShapeDrawable::ShapeDrawable(lua_Table * data, osg::Shape * shape, osg::TessellationHints * hints = 0) function, expected prototype:\nosg::ShapeDrawable::ShapeDrawable(lua_Table * data, osg::Shape * shape, osg::TessellationHints * hints = 0)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Shape* shape=(Luna< osg::Referenced >::checkSubType< osg::Shape >(L,2));
		osg::TessellationHints* hints=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,3)) : (osg::TessellationHints*)0;

		return new wrapper_osg_ShapeDrawable(L,NULL, shape, hints);
	}

	// osg::ShapeDrawable::ShapeDrawable(lua_Table * data, const osg::ShapeDrawable & pg, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ShapeDrawable* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::ShapeDrawable::ShapeDrawable(lua_Table * data, const osg::ShapeDrawable & pg, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ShapeDrawable::ShapeDrawable(lua_Table * data, const osg::ShapeDrawable & pg, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::ShapeDrawable* pg_ptr=(Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,2));
		if( !pg_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pg in osg::ShapeDrawable::ShapeDrawable function");
		}
		const osg::ShapeDrawable & pg=*pg_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ShapeDrawable::ShapeDrawable function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_ShapeDrawable(L,NULL, pg, copyop);
	}

	// Overload binder for osg::ShapeDrawable::ShapeDrawable
	static osg::ShapeDrawable* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function ShapeDrawable, cannot match any of the overloads for function ShapeDrawable:\n  ShapeDrawable()\n  ShapeDrawable(osg::Shape *, osg::TessellationHints *)\n  ShapeDrawable(const osg::ShapeDrawable &, const osg::CopyOp &)\n  ShapeDrawable(lua_Table *)\n  ShapeDrawable(lua_Table *, osg::Shape *, osg::TessellationHints *)\n  ShapeDrawable(lua_Table *, const osg::ShapeDrawable &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ShapeDrawable::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShapeDrawable::cloneType() const function, expected prototype:\nosg::Object * osg::ShapeDrawable::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShapeDrawable::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ShapeDrawable::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShapeDrawable::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ShapeDrawable::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeDrawable::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShapeDrawable::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ShapeDrawable::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ShapeDrawable::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ShapeDrawable::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ShapeDrawable::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ShapeDrawable::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ShapeDrawable::libraryName() const function, expected prototype:\nconst char * osg::ShapeDrawable::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ShapeDrawable::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ShapeDrawable::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ShapeDrawable::className() const function, expected prototype:\nconst char * osg::ShapeDrawable::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ShapeDrawable::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::ShapeDrawable::setColor(const osg::Vec4f & color)
	static int _bind_setColor(lua_State *L) {
		if (!_lg_typecheck_setColor(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeDrawable::setColor(const osg::Vec4f & color) function, expected prototype:\nvoid osg::ShapeDrawable::setColor(const osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osg::ShapeDrawable::setColor function");
		}
		const osg::Vec4f & color=*color_ptr;

		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeDrawable::setColor(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColor(color);

		return 0;
	}

	// const osg::Vec4f & osg::ShapeDrawable::getColor() const
	static int _bind_getColor(lua_State *L) {
		if (!_lg_typecheck_getColor(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::ShapeDrawable::getColor() const function, expected prototype:\nconst osg::Vec4f & osg::ShapeDrawable::getColor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::ShapeDrawable::getColor() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osg::ShapeDrawable::setTessellationHints(osg::TessellationHints * hints)
	static int _bind_setTessellationHints(lua_State *L) {
		if (!_lg_typecheck_setTessellationHints(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeDrawable::setTessellationHints(osg::TessellationHints * hints) function, expected prototype:\nvoid osg::ShapeDrawable::setTessellationHints(osg::TessellationHints * hints)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::TessellationHints* hints=(Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,2));

		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeDrawable::setTessellationHints(osg::TessellationHints *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTessellationHints(hints);

		return 0;
	}

	// osg::TessellationHints * osg::ShapeDrawable::getTessellationHints()
	static int _bind_getTessellationHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTessellationHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::TessellationHints * osg::ShapeDrawable::getTessellationHints() function, expected prototype:\nosg::TessellationHints * osg::ShapeDrawable::getTessellationHints()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::TessellationHints * osg::ShapeDrawable::getTessellationHints(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::TessellationHints * lret = self->getTessellationHints();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::TessellationHints >::push(L,lret,false);

		return 1;
	}

	// const osg::TessellationHints * osg::ShapeDrawable::getTessellationHints() const
	static int _bind_getTessellationHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTessellationHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::TessellationHints * osg::ShapeDrawable::getTessellationHints() const function, expected prototype:\nconst osg::TessellationHints * osg::ShapeDrawable::getTessellationHints() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::TessellationHints * osg::ShapeDrawable::getTessellationHints() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::TessellationHints * lret = self->getTessellationHints();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::TessellationHints >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ShapeDrawable::getTessellationHints
	static int _bind_getTessellationHints(lua_State *L) {
		if (_lg_typecheck_getTessellationHints_overload_1(L)) return _bind_getTessellationHints_overload_1(L);
		if (_lg_typecheck_getTessellationHints_overload_2(L)) return _bind_getTessellationHints_overload_2(L);

		luaL_error(L, "error in function getTessellationHints, cannot match any of the overloads for function getTessellationHints:\n  getTessellationHints()\n  getTessellationHints()\n");
		return 0;
	}

	// void osg::ShapeDrawable::drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeDrawable::drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osg::ShapeDrawable::drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::ShapeDrawable::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeDrawable::drawImplementation(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawImplementation(renderInfo);

		return 0;
	}

	// osg::BoundingBoxd osg::ShapeDrawable::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxd osg::ShapeDrawable::computeBound() const function, expected prototype:\nosg::BoundingBoxd osg::ShapeDrawable::computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBoxd osg::ShapeDrawable::computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingBoxd stack_lret = self->computeBound();
		osg::BoundingBoxd* lret = new osg::BoundingBoxd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,true);

		return 1;
	}

	// void osg::ShapeDrawable::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeDrawable::base_setName(const std::string & name) function, expected prototype:\nvoid osg::ShapeDrawable::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeDrawable::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShapeDrawable::setName(name);

		return 0;
	}

	// void osg::ShapeDrawable::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeDrawable::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::ShapeDrawable::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeDrawable::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShapeDrawable::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::ShapeDrawable::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::ShapeDrawable::base_getUserData() function, expected prototype:\nosg::Referenced * osg::ShapeDrawable::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::ShapeDrawable::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->ShapeDrawable::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::ShapeDrawable::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::ShapeDrawable::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::ShapeDrawable::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::ShapeDrawable::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->ShapeDrawable::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ShapeDrawable::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Geometry * osg::ShapeDrawable::base_asGeometry()
	static int _bind_base_asGeometry_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeometry_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry * osg::ShapeDrawable::base_asGeometry() function, expected prototype:\nosg::Geometry * osg::ShapeDrawable::base_asGeometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry * osg::ShapeDrawable::base_asGeometry(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry * lret = self->ShapeDrawable::asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry * osg::ShapeDrawable::base_asGeometry() const
	static int _bind_base_asGeometry_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeometry_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry * osg::ShapeDrawable::base_asGeometry() const function, expected prototype:\nconst osg::Geometry * osg::ShapeDrawable::base_asGeometry() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry * osg::ShapeDrawable::base_asGeometry() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry * lret = self->ShapeDrawable::asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ShapeDrawable::base_asGeometry
	static int _bind_base_asGeometry(lua_State *L) {
		if (_lg_typecheck_base_asGeometry_overload_1(L)) return _bind_base_asGeometry_overload_1(L);
		if (_lg_typecheck_base_asGeometry_overload_2(L)) return _bind_base_asGeometry_overload_2(L);

		luaL_error(L, "error in function base_asGeometry, cannot match any of the overloads for function base_asGeometry:\n  base_asGeometry()\n  base_asGeometry()\n");
		return 0;
	}

	// void osg::ShapeDrawable::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeDrawable::base_computeDataVariance() function, expected prototype:\nvoid osg::ShapeDrawable::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeDrawable::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShapeDrawable::computeDataVariance();

		return 0;
	}

	// void osg::ShapeDrawable::base_setUseVertexBufferObjects(bool flag)
	static int _bind_base_setUseVertexBufferObjects(lua_State *L) {
		if (!_lg_typecheck_base_setUseVertexBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeDrawable::base_setUseVertexBufferObjects(bool flag) function, expected prototype:\nvoid osg::ShapeDrawable::base_setUseVertexBufferObjects(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeDrawable::base_setUseVertexBufferObjects(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShapeDrawable::setUseVertexBufferObjects(flag);

		return 0;
	}

	// void osg::ShapeDrawable::base_dirtyDisplayList()
	static int _bind_base_dirtyDisplayList(lua_State *L) {
		if (!_lg_typecheck_base_dirtyDisplayList(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeDrawable::base_dirtyDisplayList() function, expected prototype:\nvoid osg::ShapeDrawable::base_dirtyDisplayList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeDrawable::base_dirtyDisplayList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShapeDrawable::dirtyDisplayList();

		return 0;
	}

	// unsigned int osg::ShapeDrawable::base_getGLObjectSizeHint() const
	static int _bind_base_getGLObjectSizeHint(lua_State *L) {
		if (!_lg_typecheck_base_getGLObjectSizeHint(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::ShapeDrawable::base_getGLObjectSizeHint() const function, expected prototype:\nunsigned int osg::ShapeDrawable::base_getGLObjectSizeHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::ShapeDrawable::base_getGLObjectSizeHint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->ShapeDrawable::getGLObjectSizeHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ShapeDrawable::base_compileGLObjects(osg::RenderInfo & renderInfo) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeDrawable::base_compileGLObjects(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osg::ShapeDrawable::base_compileGLObjects(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::ShapeDrawable::base_compileGLObjects function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeDrawable::base_compileGLObjects(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShapeDrawable::compileGLObjects(renderInfo);

		return 0;
	}

	// void osg::ShapeDrawable::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeDrawable::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::ShapeDrawable::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeDrawable::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShapeDrawable::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::ShapeDrawable::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeDrawable::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::ShapeDrawable::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeDrawable::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShapeDrawable::releaseGLObjects(state);

		return 0;
	}

	// void osg::ShapeDrawable::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	static int _bind_base_setUpdateCallback(lua_State *L) {
		if (!_lg_typecheck_base_setUpdateCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeDrawable::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac) function, expected prototype:\nvoid osg::ShapeDrawable::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::UpdateCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,2));

		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeDrawable::base_setUpdateCallback(osg::Drawable::UpdateCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShapeDrawable::setUpdateCallback(ac);

		return 0;
	}

	// void osg::ShapeDrawable::base_setEventCallback(osg::Drawable::EventCallback * ac)
	static int _bind_base_setEventCallback(lua_State *L) {
		if (!_lg_typecheck_base_setEventCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeDrawable::base_setEventCallback(osg::Drawable::EventCallback * ac) function, expected prototype:\nvoid osg::ShapeDrawable::base_setEventCallback(osg::Drawable::EventCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::EventCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,2));

		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeDrawable::base_setEventCallback(osg::Drawable::EventCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShapeDrawable::setEventCallback(ac);

		return 0;
	}

	// void osg::ShapeDrawable::base_setCullCallback(osg::Drawable::CullCallback * cc)
	static int _bind_base_setCullCallback(lua_State *L) {
		if (!_lg_typecheck_base_setCullCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeDrawable::base_setCullCallback(osg::Drawable::CullCallback * cc) function, expected prototype:\nvoid osg::ShapeDrawable::base_setCullCallback(osg::Drawable::CullCallback * cc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::CullCallback* cc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,2));

		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeDrawable::base_setCullCallback(osg::Drawable::CullCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShapeDrawable::setCullCallback(cc);

		return 0;
	}

	// void osg::ShapeDrawable::base_setDrawCallback(osg::Drawable::DrawCallback * dc)
	static int _bind_base_setDrawCallback(lua_State *L) {
		if (!_lg_typecheck_base_setDrawCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeDrawable::base_setDrawCallback(osg::Drawable::DrawCallback * dc) function, expected prototype:\nvoid osg::ShapeDrawable::base_setDrawCallback(osg::Drawable::DrawCallback * dc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::DrawCallback* dc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::DrawCallback >(L,2));

		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeDrawable::base_setDrawCallback(osg::Drawable::DrawCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShapeDrawable::setDrawCallback(dc);

		return 0;
	}

	// osg::Object * osg::ShapeDrawable::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShapeDrawable::base_cloneType() const function, expected prototype:\nosg::Object * osg::ShapeDrawable::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShapeDrawable::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ShapeDrawable::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ShapeDrawable::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShapeDrawable::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ShapeDrawable::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeDrawable::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShapeDrawable::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ShapeDrawable::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ShapeDrawable::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ShapeDrawable::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ShapeDrawable::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ShapeDrawable::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ShapeDrawable::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ShapeDrawable::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ShapeDrawable::base_libraryName() const function, expected prototype:\nconst char * osg::ShapeDrawable::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ShapeDrawable::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ShapeDrawable::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ShapeDrawable::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ShapeDrawable::base_className() const function, expected prototype:\nconst char * osg::ShapeDrawable::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ShapeDrawable::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ShapeDrawable::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::ShapeDrawable::base_drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_base_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_base_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShapeDrawable::base_drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osg::ShapeDrawable::base_drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::ShapeDrawable::base_drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShapeDrawable::base_drawImplementation(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShapeDrawable::drawImplementation(renderInfo);

		return 0;
	}

	// osg::BoundingBoxd osg::ShapeDrawable::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxd osg::ShapeDrawable::base_computeBound() const function, expected prototype:\nosg::BoundingBoxd osg::ShapeDrawable::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBoxd osg::ShapeDrawable::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingBoxd stack_lret = self->ShapeDrawable::computeBound();
		osg::BoundingBoxd* lret = new osg::BoundingBoxd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::ShapeDrawable* LunaTraits< osg::ShapeDrawable >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ShapeDrawable::_bind_ctor(L);
}

void LunaTraits< osg::ShapeDrawable >::_bind_dtor(osg::ShapeDrawable* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ShapeDrawable >::className[] = "ShapeDrawable";
const char LunaTraits< osg::ShapeDrawable >::fullName[] = "osg::ShapeDrawable";
const char LunaTraits< osg::ShapeDrawable >::moduleName[] = "osg";
const char* LunaTraits< osg::ShapeDrawable >::parents[] = {"osg.Drawable", 0};
const int LunaTraits< osg::ShapeDrawable >::hash = 82940632;
const int LunaTraits< osg::ShapeDrawable >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ShapeDrawable >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ShapeDrawable::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ShapeDrawable::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ShapeDrawable::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ShapeDrawable::_bind_libraryName},
	{"className", &luna_wrapper_osg_ShapeDrawable::_bind_className},
	{"setColor", &luna_wrapper_osg_ShapeDrawable::_bind_setColor},
	{"getColor", &luna_wrapper_osg_ShapeDrawable::_bind_getColor},
	{"setTessellationHints", &luna_wrapper_osg_ShapeDrawable::_bind_setTessellationHints},
	{"getTessellationHints", &luna_wrapper_osg_ShapeDrawable::_bind_getTessellationHints},
	{"drawImplementation", &luna_wrapper_osg_ShapeDrawable::_bind_drawImplementation},
	{"computeBound", &luna_wrapper_osg_ShapeDrawable::_bind_computeBound},
	{"base_setName", &luna_wrapper_osg_ShapeDrawable::_bind_base_setName},
	{"base_setUserData", &luna_wrapper_osg_ShapeDrawable::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_ShapeDrawable::_bind_base_getUserData},
	{"base_asGeometry", &luna_wrapper_osg_ShapeDrawable::_bind_base_asGeometry},
	{"base_computeDataVariance", &luna_wrapper_osg_ShapeDrawable::_bind_base_computeDataVariance},
	{"base_setUseVertexBufferObjects", &luna_wrapper_osg_ShapeDrawable::_bind_base_setUseVertexBufferObjects},
	{"base_dirtyDisplayList", &luna_wrapper_osg_ShapeDrawable::_bind_base_dirtyDisplayList},
	{"base_getGLObjectSizeHint", &luna_wrapper_osg_ShapeDrawable::_bind_base_getGLObjectSizeHint},
	{"base_compileGLObjects", &luna_wrapper_osg_ShapeDrawable::_bind_base_compileGLObjects},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_ShapeDrawable::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osg_ShapeDrawable::_bind_base_releaseGLObjects},
	{"base_setUpdateCallback", &luna_wrapper_osg_ShapeDrawable::_bind_base_setUpdateCallback},
	{"base_setEventCallback", &luna_wrapper_osg_ShapeDrawable::_bind_base_setEventCallback},
	{"base_setCullCallback", &luna_wrapper_osg_ShapeDrawable::_bind_base_setCullCallback},
	{"base_setDrawCallback", &luna_wrapper_osg_ShapeDrawable::_bind_base_setDrawCallback},
	{"base_cloneType", &luna_wrapper_osg_ShapeDrawable::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_ShapeDrawable::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_ShapeDrawable::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_ShapeDrawable::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_ShapeDrawable::_bind_base_className},
	{"base_drawImplementation", &luna_wrapper_osg_ShapeDrawable::_bind_base_drawImplementation},
	{"base_computeBound", &luna_wrapper_osg_ShapeDrawable::_bind_base_computeBound},
	{"fromVoid", &luna_wrapper_osg_ShapeDrawable::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ShapeDrawable::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_ShapeDrawable::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ShapeDrawable >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ShapeDrawable::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ShapeDrawable >::enumValues[] = {
	{0,0}
};


