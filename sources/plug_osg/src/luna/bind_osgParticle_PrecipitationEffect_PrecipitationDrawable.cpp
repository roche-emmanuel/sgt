#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable.h>

class luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable {
public:
	typedef Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable > luna_t;

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

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self= (osgParticle::PrecipitationEffect::PrecipitationDrawable*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable >::push(L,self,false);
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
		//osgParticle::PrecipitationEffect::PrecipitationDrawable* ptr= dynamic_cast< osgParticle::PrecipitationEffect::PrecipitationDrawable* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::PrecipitationEffect::PrecipitationDrawable* ptr= luna_caster< osg::Referenced, osgParticle::PrecipitationEffect::PrecipitationDrawable >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setRequiresPreviousMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRequiresPreviousMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGeometry(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGeometry_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGeometry_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDrawType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDrawType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumberOfVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumberOfVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCurrentCellMatrixMap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPreviousCellMatrixMap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_newFrame(lua_State *L) {
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

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable()
	static osgParticle::PrecipitationEffect::PrecipitationDrawable* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable() function, expected prototype:\nosgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgParticle::PrecipitationEffect::PrecipitationDrawable();
	}

	// osgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable(const osgParticle::PrecipitationEffect::PrecipitationDrawable & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::PrecipitationEffect::PrecipitationDrawable* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable(const osgParticle::PrecipitationEffect::PrecipitationDrawable & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable(const osgParticle::PrecipitationEffect::PrecipitationDrawable & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::PrecipitationEffect::PrecipitationDrawable* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable function");
		}
		const osgParticle::PrecipitationEffect::PrecipitationDrawable & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::PrecipitationEffect::PrecipitationDrawable(copy, copyop);
	}

	// osgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable(lua_Table * data)
	static osgParticle::PrecipitationEffect::PrecipitationDrawable* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable(lua_Table * data) function, expected prototype:\nosgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable(L,NULL);
	}

	// osgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable(lua_Table * data, const osgParticle::PrecipitationEffect::PrecipitationDrawable & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::PrecipitationEffect::PrecipitationDrawable* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable(lua_Table * data, const osgParticle::PrecipitationEffect::PrecipitationDrawable & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable(lua_Table * data, const osgParticle::PrecipitationEffect::PrecipitationDrawable & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::PrecipitationEffect::PrecipitationDrawable* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable function");
		}
		const osgParticle::PrecipitationEffect::PrecipitationDrawable & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::PrecipitationEffect::PrecipitationDrawable::PrecipitationDrawable
	static osgParticle::PrecipitationEffect::PrecipitationDrawable* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function PrecipitationDrawable, cannot match any of the overloads for function PrecipitationDrawable:\n  PrecipitationDrawable()\n  PrecipitationDrawable(const osgParticle::PrecipitationEffect::PrecipitationDrawable &, const osg::CopyOp &)\n  PrecipitationDrawable(lua_Table *)\n  PrecipitationDrawable(lua_Table *, const osgParticle::PrecipitationEffect::PrecipitationDrawable &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::cloneType() const function, expected prototype:\nosg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::PrecipitationEffect::PrecipitationDrawable::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::PrecipitationEffect::PrecipitationDrawable::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::PrecipitationEffect::PrecipitationDrawable::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::PrecipitationEffect::PrecipitationDrawable::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::PrecipitationEffect::PrecipitationDrawable::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::PrecipitationEffect::PrecipitationDrawable::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::PrecipitationEffect::PrecipitationDrawable::libraryName() const function, expected prototype:\nconst char * osgParticle::PrecipitationEffect::PrecipitationDrawable::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::PrecipitationEffect::PrecipitationDrawable::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::PrecipitationEffect::PrecipitationDrawable::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::PrecipitationEffect::PrecipitationDrawable::className() const function, expected prototype:\nconst char * osgParticle::PrecipitationEffect::PrecipitationDrawable::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::PrecipitationEffect::PrecipitationDrawable::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::setRequiresPreviousMatrix(bool flag)
	static int _bind_setRequiresPreviousMatrix(lua_State *L) {
		if (!_lg_typecheck_setRequiresPreviousMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::setRequiresPreviousMatrix(bool flag) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::setRequiresPreviousMatrix(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::setRequiresPreviousMatrix(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRequiresPreviousMatrix(flag);

		return 0;
	}

	// bool osgParticle::PrecipitationEffect::PrecipitationDrawable::getRequiresPreviousMatrix() const
	static int _bind_getRequiresPreviousMatrix(lua_State *L) {
		if (!_lg_typecheck_getRequiresPreviousMatrix(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::PrecipitationEffect::PrecipitationDrawable::getRequiresPreviousMatrix() const function, expected prototype:\nbool osgParticle::PrecipitationEffect::PrecipitationDrawable::getRequiresPreviousMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::PrecipitationEffect::PrecipitationDrawable::getRequiresPreviousMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getRequiresPreviousMatrix();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::setGeometry(osg::Geometry * geom)
	static int _bind_setGeometry(lua_State *L) {
		if (!_lg_typecheck_setGeometry(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::setGeometry(osg::Geometry * geom) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::setGeometry(osg::Geometry * geom)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geometry* geom=(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2));

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::setGeometry(osg::Geometry *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setGeometry(geom);

		return 0;
	}

	// osg::Geometry * osgParticle::PrecipitationEffect::PrecipitationDrawable::getGeometry()
	static int _bind_getGeometry_overload_1(lua_State *L) {
		if (!_lg_typecheck_getGeometry_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry * osgParticle::PrecipitationEffect::PrecipitationDrawable::getGeometry() function, expected prototype:\nosg::Geometry * osgParticle::PrecipitationEffect::PrecipitationDrawable::getGeometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry * osgParticle::PrecipitationEffect::PrecipitationDrawable::getGeometry(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry * lret = self->getGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry * osgParticle::PrecipitationEffect::PrecipitationDrawable::getGeometry() const
	static int _bind_getGeometry_overload_2(lua_State *L) {
		if (!_lg_typecheck_getGeometry_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry * osgParticle::PrecipitationEffect::PrecipitationDrawable::getGeometry() const function, expected prototype:\nconst osg::Geometry * osgParticle::PrecipitationEffect::PrecipitationDrawable::getGeometry() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry * osgParticle::PrecipitationEffect::PrecipitationDrawable::getGeometry() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry * lret = self->getGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::PrecipitationEffect::PrecipitationDrawable::getGeometry
	static int _bind_getGeometry(lua_State *L) {
		if (_lg_typecheck_getGeometry_overload_1(L)) return _bind_getGeometry_overload_1(L);
		if (_lg_typecheck_getGeometry_overload_2(L)) return _bind_getGeometry_overload_2(L);

		luaL_error(L, "error in function getGeometry, cannot match any of the overloads for function getGeometry:\n  getGeometry()\n  getGeometry()\n");
		return 0;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::setDrawType(unsigned int type)
	static int _bind_setDrawType(lua_State *L) {
		if (!_lg_typecheck_setDrawType(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::setDrawType(unsigned int type) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::setDrawType(unsigned int type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int type=(unsigned int)lua_tointeger(L,2);

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::setDrawType(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDrawType(type);

		return 0;
	}

	// unsigned int osgParticle::PrecipitationEffect::PrecipitationDrawable::getDrawType() const
	static int _bind_getDrawType(lua_State *L) {
		if (!_lg_typecheck_getDrawType(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgParticle::PrecipitationEffect::PrecipitationDrawable::getDrawType() const function, expected prototype:\nunsigned int osgParticle::PrecipitationEffect::PrecipitationDrawable::getDrawType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgParticle::PrecipitationEffect::PrecipitationDrawable::getDrawType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getDrawType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::setNumberOfVertices(unsigned int numVertices)
	static int _bind_setNumberOfVertices(lua_State *L) {
		if (!_lg_typecheck_setNumberOfVertices(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::setNumberOfVertices(unsigned int numVertices) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::setNumberOfVertices(unsigned int numVertices)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int numVertices=(unsigned int)lua_tointeger(L,2);

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::setNumberOfVertices(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNumberOfVertices(numVertices);

		return 0;
	}

	// unsigned int osgParticle::PrecipitationEffect::PrecipitationDrawable::getNumberOfVertices() const
	static int _bind_getNumberOfVertices(lua_State *L) {
		if (!_lg_typecheck_getNumberOfVertices(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgParticle::PrecipitationEffect::PrecipitationDrawable::getNumberOfVertices() const function, expected prototype:\nunsigned int osgParticle::PrecipitationEffect::PrecipitationDrawable::getNumberOfVertices() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgParticle::PrecipitationEffect::PrecipitationDrawable::getNumberOfVertices() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumberOfVertices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgParticle::PrecipitationEffect::PrecipitationDrawable::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::drawImplementation(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawImplementation(renderInfo);

		return 0;
	}

	// osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap & osgParticle::PrecipitationEffect::PrecipitationDrawable::getCurrentCellMatrixMap()
	static int _bind_getCurrentCellMatrixMap(lua_State *L) {
		if (!_lg_typecheck_getCurrentCellMatrixMap(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap & osgParticle::PrecipitationEffect::PrecipitationDrawable::getCurrentCellMatrixMap() function, expected prototype:\nosgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap & osgParticle::PrecipitationEffect::PrecipitationDrawable::getCurrentCellMatrixMap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap & osgParticle::PrecipitationEffect::PrecipitationDrawable::getCurrentCellMatrixMap(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap* lret = &self->getCurrentCellMatrixMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap >::push(L,lret,false);

		return 1;
	}

	// osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap & osgParticle::PrecipitationEffect::PrecipitationDrawable::getPreviousCellMatrixMap()
	static int _bind_getPreviousCellMatrixMap(lua_State *L) {
		if (!_lg_typecheck_getPreviousCellMatrixMap(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap & osgParticle::PrecipitationEffect::PrecipitationDrawable::getPreviousCellMatrixMap() function, expected prototype:\nosgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap & osgParticle::PrecipitationEffect::PrecipitationDrawable::getPreviousCellMatrixMap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap & osgParticle::PrecipitationEffect::PrecipitationDrawable::getPreviousCellMatrixMap(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap* lret = &self->getPreviousCellMatrixMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::newFrame()
	static int _bind_newFrame(lua_State *L) {
		if (!_lg_typecheck_newFrame(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::newFrame() function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::newFrame()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::newFrame(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->newFrame();

		return 0;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PrecipitationDrawable::setName(name);

		return 0;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PrecipitationDrawable::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->PrecipitationDrawable::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->PrecipitationDrawable::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::PrecipitationEffect::PrecipitationDrawable::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Geometry * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_asGeometry()
	static int _bind_base_asGeometry_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeometry_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_asGeometry() function, expected prototype:\nosg::Geometry * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_asGeometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_asGeometry(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry * lret = self->PrecipitationDrawable::asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_asGeometry() const
	static int _bind_base_asGeometry_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeometry_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_asGeometry() const function, expected prototype:\nconst osg::Geometry * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_asGeometry() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_asGeometry() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry * lret = self->PrecipitationDrawable::asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::PrecipitationEffect::PrecipitationDrawable::base_asGeometry
	static int _bind_base_asGeometry(lua_State *L) {
		if (_lg_typecheck_base_asGeometry_overload_1(L)) return _bind_base_asGeometry_overload_1(L);
		if (_lg_typecheck_base_asGeometry_overload_2(L)) return _bind_base_asGeometry_overload_2(L);

		luaL_error(L, "error in function base_asGeometry, cannot match any of the overloads for function base_asGeometry:\n  base_asGeometry()\n  base_asGeometry()\n");
		return 0;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PrecipitationDrawable::computeDataVariance();

		return 0;
	}

	// osg::BoundingBoxd osgParticle::PrecipitationEffect::PrecipitationDrawable::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxd osgParticle::PrecipitationEffect::PrecipitationDrawable::base_computeBound() const function, expected prototype:\nosg::BoundingBoxd osgParticle::PrecipitationEffect::PrecipitationDrawable::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBoxd osgParticle::PrecipitationEffect::PrecipitationDrawable::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingBoxd stack_lret = self->PrecipitationDrawable::computeBound();
		osg::BoundingBoxd* lret = new osg::BoundingBoxd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,true);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setUseVertexBufferObjects(bool flag)
	static int _bind_base_setUseVertexBufferObjects(lua_State *L) {
		if (!_lg_typecheck_base_setUseVertexBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setUseVertexBufferObjects(bool flag) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setUseVertexBufferObjects(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setUseVertexBufferObjects(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PrecipitationDrawable::setUseVertexBufferObjects(flag);

		return 0;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_dirtyDisplayList()
	static int _bind_base_dirtyDisplayList(lua_State *L) {
		if (!_lg_typecheck_base_dirtyDisplayList(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_dirtyDisplayList() function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::base_dirtyDisplayList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_dirtyDisplayList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PrecipitationDrawable::dirtyDisplayList();

		return 0;
	}

	// unsigned int osgParticle::PrecipitationEffect::PrecipitationDrawable::base_getGLObjectSizeHint() const
	static int _bind_base_getGLObjectSizeHint(lua_State *L) {
		if (!_lg_typecheck_base_getGLObjectSizeHint(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgParticle::PrecipitationEffect::PrecipitationDrawable::base_getGLObjectSizeHint() const function, expected prototype:\nunsigned int osgParticle::PrecipitationEffect::PrecipitationDrawable::base_getGLObjectSizeHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgParticle::PrecipitationEffect::PrecipitationDrawable::base_getGLObjectSizeHint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->PrecipitationDrawable::getGLObjectSizeHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_compileGLObjects(osg::RenderInfo & renderInfo) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_compileGLObjects(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::base_compileGLObjects(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgParticle::PrecipitationEffect::PrecipitationDrawable::base_compileGLObjects function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_compileGLObjects(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PrecipitationDrawable::compileGLObjects(renderInfo);

		return 0;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PrecipitationDrawable::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PrecipitationDrawable::releaseGLObjects(state);

		return 0;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	static int _bind_base_setUpdateCallback(lua_State *L) {
		if (!_lg_typecheck_base_setUpdateCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::UpdateCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,2));

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setUpdateCallback(osg::Drawable::UpdateCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PrecipitationDrawable::setUpdateCallback(ac);

		return 0;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setEventCallback(osg::Drawable::EventCallback * ac)
	static int _bind_base_setEventCallback(lua_State *L) {
		if (!_lg_typecheck_base_setEventCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setEventCallback(osg::Drawable::EventCallback * ac) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setEventCallback(osg::Drawable::EventCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::EventCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,2));

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setEventCallback(osg::Drawable::EventCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PrecipitationDrawable::setEventCallback(ac);

		return 0;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setCullCallback(osg::Drawable::CullCallback * cc)
	static int _bind_base_setCullCallback(lua_State *L) {
		if (!_lg_typecheck_base_setCullCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setCullCallback(osg::Drawable::CullCallback * cc) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setCullCallback(osg::Drawable::CullCallback * cc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::CullCallback* cc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,2));

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setCullCallback(osg::Drawable::CullCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PrecipitationDrawable::setCullCallback(cc);

		return 0;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setDrawCallback(osg::Drawable::DrawCallback * dc)
	static int _bind_base_setDrawCallback(lua_State *L) {
		if (!_lg_typecheck_base_setDrawCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setDrawCallback(osg::Drawable::DrawCallback * dc) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setDrawCallback(osg::Drawable::DrawCallback * dc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::DrawCallback* dc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::DrawCallback >(L,2));

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_setDrawCallback(osg::Drawable::DrawCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PrecipitationDrawable::setDrawCallback(dc);

		return 0;
	}

	// osg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_cloneType() const function, expected prototype:\nosg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->PrecipitationDrawable::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::PrecipitationEffect::PrecipitationDrawable::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->PrecipitationDrawable::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::PrecipitationEffect::PrecipitationDrawable::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::PrecipitationEffect::PrecipitationDrawable::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::PrecipitationEffect::PrecipitationDrawable::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::PrecipitationEffect::PrecipitationDrawable::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PrecipitationDrawable::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_libraryName() const function, expected prototype:\nconst char * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->PrecipitationDrawable::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_className() const function, expected prototype:\nconst char * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::PrecipitationEffect::PrecipitationDrawable::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->PrecipitationDrawable::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_base_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_base_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::base_drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgParticle::PrecipitationEffect::PrecipitationDrawable::base_drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgParticle::PrecipitationEffect::PrecipitationDrawable* self=Luna< osg::Referenced >::checkSubType< osgParticle::PrecipitationEffect::PrecipitationDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::base_drawImplementation(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PrecipitationDrawable::drawImplementation(renderInfo);

		return 0;
	}


	// Operator binds:

};

osgParticle::PrecipitationEffect::PrecipitationDrawable* LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_ctor(L);
}

void LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable >::_bind_dtor(osgParticle::PrecipitationEffect::PrecipitationDrawable* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable >::className[] = "PrecipitationEffect_PrecipitationDrawable";
const char LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable >::fullName[] = "osgParticle::PrecipitationEffect::PrecipitationDrawable";
const char LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable >::parents[] = {"osg.Drawable", 0};
const int LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable >::hash = 83449039;
const int LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_className},
	{"setRequiresPreviousMatrix", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_setRequiresPreviousMatrix},
	{"getRequiresPreviousMatrix", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_getRequiresPreviousMatrix},
	{"setGeometry", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_setGeometry},
	{"getGeometry", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_getGeometry},
	{"setDrawType", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_setDrawType},
	{"getDrawType", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_getDrawType},
	{"setNumberOfVertices", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_setNumberOfVertices},
	{"getNumberOfVertices", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_getNumberOfVertices},
	{"drawImplementation", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_drawImplementation},
	{"getCurrentCellMatrixMap", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_getCurrentCellMatrixMap},
	{"getPreviousCellMatrixMap", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_getPreviousCellMatrixMap},
	{"newFrame", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_newFrame},
	{"base_setName", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_base_setName},
	{"base_setUserData", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_base_getUserData},
	{"base_asGeometry", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_base_asGeometry},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_base_computeDataVariance},
	{"base_computeBound", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_base_computeBound},
	{"base_setUseVertexBufferObjects", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_base_setUseVertexBufferObjects},
	{"base_dirtyDisplayList", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_base_dirtyDisplayList},
	{"base_getGLObjectSizeHint", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_base_getGLObjectSizeHint},
	{"base_compileGLObjects", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_base_compileGLObjects},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_base_releaseGLObjects},
	{"base_setUpdateCallback", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_base_setUpdateCallback},
	{"base_setEventCallback", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_base_setEventCallback},
	{"base_setCullCallback", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_base_setCullCallback},
	{"base_setDrawCallback", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_base_setDrawCallback},
	{"base_cloneType", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_base_className},
	{"base_drawImplementation", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_base_drawImplementation},
	{"fromVoid", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable >::enumValues[] = {
	{0,0}
};


