#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_CameraView.h>

class luna_wrapper_osg_CameraView {
public:
	typedef Luna< osg::CameraView > luna_t;

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

		osg::CameraView* self= (osg::CameraView*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::CameraView >::push(L,self,false);
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
		//osg::CameraView* ptr= dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,1));
		osg::CameraView* ptr= luna_caster< osg::Referenced, osg::CameraView >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::CameraView >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAttitude(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAttitude(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFieldOfView(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFieldOfView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFieldOfViewMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFieldOfViewMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFocalLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFocalLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeLocalToWorldMatrix(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeWorldToLocalMatrix(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_asTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asMatrixTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asMatrixTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asPositionAttitudeTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asPositionAttitudeTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_computeLocalToWorldMatrix(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeWorldToLocalMatrix(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::CameraView::CameraView()
	static osg::CameraView* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::CameraView::CameraView() function, expected prototype:\nosg::CameraView::CameraView()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::CameraView();
	}

	// osg::CameraView::CameraView(const osg::CameraView & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::CameraView* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::CameraView::CameraView(const osg::CameraView & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::CameraView::CameraView(const osg::CameraView & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::CameraView* pat_ptr=(Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1));
		if( !pat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pat in osg::CameraView::CameraView function");
		}
		const osg::CameraView & pat=*pat_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::CameraView::CameraView function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::CameraView(pat, copyop);
	}

	// osg::CameraView::CameraView(lua_Table * data)
	static osg::CameraView* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::CameraView::CameraView(lua_Table * data) function, expected prototype:\nosg::CameraView::CameraView(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_CameraView(L,NULL);
	}

	// osg::CameraView::CameraView(lua_Table * data, const osg::CameraView & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::CameraView* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::CameraView::CameraView(lua_Table * data, const osg::CameraView & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::CameraView::CameraView(lua_Table * data, const osg::CameraView & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::CameraView* pat_ptr=(Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,2));
		if( !pat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pat in osg::CameraView::CameraView function");
		}
		const osg::CameraView & pat=*pat_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::CameraView::CameraView function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_CameraView(L,NULL, pat, copyop);
	}

	// Overload binder for osg::CameraView::CameraView
	static osg::CameraView* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function CameraView, cannot match any of the overloads for function CameraView:\n  CameraView()\n  CameraView(const osg::CameraView &, const osg::CopyOp &)\n  CameraView(lua_Table *)\n  CameraView(lua_Table *, const osg::CameraView &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::CameraView::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::CameraView::cloneType() const function, expected prototype:\nosg::Object * osg::CameraView::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::CameraView::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::CameraView::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::CameraView::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::CameraView::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::CameraView::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::CameraView::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::CameraView::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CameraView::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::CameraView::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CameraView::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::CameraView::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::CameraView::className() const function, expected prototype:\nconst char * osg::CameraView::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::CameraView::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::CameraView::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::CameraView::libraryName() const function, expected prototype:\nconst char * osg::CameraView::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::CameraView::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::CameraView::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CameraView::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::CameraView::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::CameraView::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CameraView::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// void osg::CameraView::setPosition(const osg::Vec3d & pos)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CameraView::setPosition(const osg::Vec3d & pos) function, expected prototype:\nvoid osg::CameraView::setPosition(const osg::Vec3d & pos)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* pos_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in osg::CameraView::setPosition function");
		}
		const osg::Vec3d & pos=*pos_ptr;

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CameraView::setPosition(const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPosition(pos);

		return 0;
	}

	// const osg::Vec3d & osg::CameraView::getPosition() const
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3d & osg::CameraView::getPosition() const function, expected prototype:\nconst osg::Vec3d & osg::CameraView::getPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3d & osg::CameraView::getPosition() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3d* lret = &self->getPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// void osg::CameraView::setAttitude(const osg::Quat & quat)
	static int _bind_setAttitude(lua_State *L) {
		if (!_lg_typecheck_setAttitude(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CameraView::setAttitude(const osg::Quat & quat) function, expected prototype:\nvoid osg::CameraView::setAttitude(const osg::Quat & quat)\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* quat_ptr=(Luna< osg::Quat >::check(L,2));
		if( !quat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg quat in osg::CameraView::setAttitude function");
		}
		const osg::Quat & quat=*quat_ptr;

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CameraView::setAttitude(const osg::Quat &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAttitude(quat);

		return 0;
	}

	// const osg::Quat & osg::CameraView::getAttitude() const
	static int _bind_getAttitude(lua_State *L) {
		if (!_lg_typecheck_getAttitude(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Quat & osg::CameraView::getAttitude() const function, expected prototype:\nconst osg::Quat & osg::CameraView::getAttitude() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Quat & osg::CameraView::getAttitude() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Quat* lret = &self->getAttitude();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,false);

		return 1;
	}

	// void osg::CameraView::setFieldOfView(double fieldOfView)
	static int _bind_setFieldOfView(lua_State *L) {
		if (!_lg_typecheck_setFieldOfView(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CameraView::setFieldOfView(double fieldOfView) function, expected prototype:\nvoid osg::CameraView::setFieldOfView(double fieldOfView)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double fieldOfView=(double)lua_tonumber(L,2);

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CameraView::setFieldOfView(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFieldOfView(fieldOfView);

		return 0;
	}

	// double osg::CameraView::getFieldOfView() const
	static int _bind_getFieldOfView(lua_State *L) {
		if (!_lg_typecheck_getFieldOfView(L)) {
			luaL_error(L, "luna typecheck failed in double osg::CameraView::getFieldOfView() const function, expected prototype:\ndouble osg::CameraView::getFieldOfView() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::CameraView::getFieldOfView() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getFieldOfView();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::CameraView::setFieldOfViewMode(osg::CameraView::FieldOfViewMode mode)
	static int _bind_setFieldOfViewMode(lua_State *L) {
		if (!_lg_typecheck_setFieldOfViewMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CameraView::setFieldOfViewMode(osg::CameraView::FieldOfViewMode mode) function, expected prototype:\nvoid osg::CameraView::setFieldOfViewMode(osg::CameraView::FieldOfViewMode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::CameraView::FieldOfViewMode mode=(osg::CameraView::FieldOfViewMode)lua_tointeger(L,2);

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CameraView::setFieldOfViewMode(osg::CameraView::FieldOfViewMode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFieldOfViewMode(mode);

		return 0;
	}

	// osg::CameraView::FieldOfViewMode osg::CameraView::getFieldOfViewMode() const
	static int _bind_getFieldOfViewMode(lua_State *L) {
		if (!_lg_typecheck_getFieldOfViewMode(L)) {
			luaL_error(L, "luna typecheck failed in osg::CameraView::FieldOfViewMode osg::CameraView::getFieldOfViewMode() const function, expected prototype:\nosg::CameraView::FieldOfViewMode osg::CameraView::getFieldOfViewMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::CameraView::FieldOfViewMode osg::CameraView::getFieldOfViewMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::CameraView::FieldOfViewMode lret = self->getFieldOfViewMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::CameraView::setFocalLength(double focalLength)
	static int _bind_setFocalLength(lua_State *L) {
		if (!_lg_typecheck_setFocalLength(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CameraView::setFocalLength(double focalLength) function, expected prototype:\nvoid osg::CameraView::setFocalLength(double focalLength)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double focalLength=(double)lua_tonumber(L,2);

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CameraView::setFocalLength(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFocalLength(focalLength);

		return 0;
	}

	// double osg::CameraView::getFocalLength() const
	static int _bind_getFocalLength(lua_State *L) {
		if (!_lg_typecheck_getFocalLength(L)) {
			luaL_error(L, "luna typecheck failed in double osg::CameraView::getFocalLength() const function, expected prototype:\ndouble osg::CameraView::getFocalLength() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::CameraView::getFocalLength() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getFocalLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::CameraView::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const
	static int _bind_computeLocalToWorldMatrix(lua_State *L) {
		if (!_lg_typecheck_computeLocalToWorldMatrix(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CameraView::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const function, expected prototype:\nbool osg::CameraView::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::CameraView::computeLocalToWorldMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CameraView::computeLocalToWorldMatrix(osg::Matrixd &, osg::NodeVisitor *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->computeLocalToWorldMatrix(matrix, nv);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::CameraView::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const
	static int _bind_computeWorldToLocalMatrix(lua_State *L) {
		if (!_lg_typecheck_computeWorldToLocalMatrix(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CameraView::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const function, expected prototype:\nbool osg::CameraView::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::CameraView::computeWorldToLocalMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CameraView::computeWorldToLocalMatrix(osg::Matrixd &, osg::NodeVisitor *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->computeWorldToLocalMatrix(matrix, nv);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::CameraView::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CameraView::base_setName(const std::string & name) function, expected prototype:\nvoid osg::CameraView::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CameraView::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CameraView::setName(name);

		return 0;
	}

	// void osg::CameraView::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CameraView::base_computeDataVariance() function, expected prototype:\nvoid osg::CameraView::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CameraView::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CameraView::computeDataVariance();

		return 0;
	}

	// void osg::CameraView::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CameraView::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::CameraView::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CameraView::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CameraView::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::CameraView::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::CameraView::base_getUserData() function, expected prototype:\nosg::Referenced * osg::CameraView::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::CameraView::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->CameraView::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::CameraView::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::CameraView::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::CameraView::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::CameraView::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->CameraView::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CameraView::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Camera * osg::CameraView::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osg::CameraView::base_asCamera() function, expected prototype:\nosg::Camera * osg::CameraView::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osg::CameraView::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->CameraView::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osg::CameraView::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osg::CameraView::base_asCamera() const function, expected prototype:\nconst osg::Camera * osg::CameraView::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osg::CameraView::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->CameraView::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CameraView::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osg::CameraView::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osg::CameraView::base_asSwitch() function, expected prototype:\nosg::Switch * osg::CameraView::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osg::CameraView::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->CameraView::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osg::CameraView::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osg::CameraView::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osg::CameraView::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osg::CameraView::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->CameraView::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CameraView::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osg::CameraView::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osg::CameraView::base_asGeode() function, expected prototype:\nosg::Geode * osg::CameraView::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osg::CameraView::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->CameraView::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osg::CameraView::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osg::CameraView::base_asGeode() const function, expected prototype:\nconst osg::Geode * osg::CameraView::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osg::CameraView::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->CameraView::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CameraView::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osg::CameraView::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CameraView::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::CameraView::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::CameraView::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CameraView::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CameraView::ascend(nv);

		return 0;
	}

	// osg::Group * osg::CameraView::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osg::CameraView::base_asGroup() function, expected prototype:\nosg::Group * osg::CameraView::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osg::CameraView::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->CameraView::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osg::CameraView::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osg::CameraView::base_asGroup() const function, expected prototype:\nconst osg::Group * osg::CameraView::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osg::CameraView::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->CameraView::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CameraView::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// void osg::CameraView::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CameraView::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::CameraView::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::CameraView::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CameraView::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CameraView::traverse(_arg1);

		return 0;
	}

	// bool osg::CameraView::base_addChild(osg::Node * child)
	static int _bind_base_addChild(lua_State *L) {
		if (!_lg_typecheck_base_addChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CameraView::base_addChild(osg::Node * child) function, expected prototype:\nbool osg::CameraView::base_addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CameraView::base_addChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CameraView::addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::CameraView::base_insertChild(unsigned int index, osg::Node * child)
	static int _bind_base_insertChild(lua_State *L) {
		if (!_lg_typecheck_base_insertChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CameraView::base_insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osg::CameraView::base_insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CameraView::base_insertChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CameraView::insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::CameraView::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_base_removeChildren(lua_State *L) {
		if (!_lg_typecheck_base_removeChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CameraView::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osg::CameraView::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CameraView::base_removeChildren(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CameraView::removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::CameraView::base_replaceChild(osg::Node * origChild, osg::Node * newChild)
	static int _bind_base_replaceChild(lua_State *L) {
		if (!_lg_typecheck_base_replaceChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CameraView::base_replaceChild(osg::Node * origChild, osg::Node * newChild) function, expected prototype:\nbool osg::CameraView::base_replaceChild(osg::Node * origChild, osg::Node * newChild)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* origChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::Node* newChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CameraView::base_replaceChild(osg::Node *, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CameraView::replaceChild(origChild, newChild);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::CameraView::base_setChild(unsigned int i, osg::Node * node)
	static int _bind_base_setChild(lua_State *L) {
		if (!_lg_typecheck_base_setChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CameraView::base_setChild(unsigned int i, osg::Node * node) function, expected prototype:\nbool osg::CameraView::base_setChild(unsigned int i, osg::Node * node)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CameraView::base_setChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CameraView::setChild(i, node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::CameraView::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CameraView::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::CameraView::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CameraView::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CameraView::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::CameraView::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CameraView::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::CameraView::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CameraView::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CameraView::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Transform * osg::CameraView::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osg::CameraView::base_asTransform() function, expected prototype:\nosg::Transform * osg::CameraView::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osg::CameraView::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->CameraView::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osg::CameraView::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osg::CameraView::base_asTransform() const function, expected prototype:\nconst osg::Transform * osg::CameraView::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osg::CameraView::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->CameraView::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CameraView::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::MatrixTransform * osg::CameraView::base_asMatrixTransform()
	static int _bind_base_asMatrixTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asMatrixTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::MatrixTransform * osg::CameraView::base_asMatrixTransform() function, expected prototype:\nosg::MatrixTransform * osg::CameraView::base_asMatrixTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::MatrixTransform * osg::CameraView::base_asMatrixTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::MatrixTransform * lret = self->CameraView::asMatrixTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixTransform >::push(L,lret,false);

		return 1;
	}

	// const osg::MatrixTransform * osg::CameraView::base_asMatrixTransform() const
	static int _bind_base_asMatrixTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asMatrixTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::MatrixTransform * osg::CameraView::base_asMatrixTransform() const function, expected prototype:\nconst osg::MatrixTransform * osg::CameraView::base_asMatrixTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::MatrixTransform * osg::CameraView::base_asMatrixTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::MatrixTransform * lret = self->CameraView::asMatrixTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CameraView::base_asMatrixTransform
	static int _bind_base_asMatrixTransform(lua_State *L) {
		if (_lg_typecheck_base_asMatrixTransform_overload_1(L)) return _bind_base_asMatrixTransform_overload_1(L);
		if (_lg_typecheck_base_asMatrixTransform_overload_2(L)) return _bind_base_asMatrixTransform_overload_2(L);

		luaL_error(L, "error in function base_asMatrixTransform, cannot match any of the overloads for function base_asMatrixTransform:\n  base_asMatrixTransform()\n  base_asMatrixTransform()\n");
		return 0;
	}

	// osg::PositionAttitudeTransform * osg::CameraView::base_asPositionAttitudeTransform()
	static int _bind_base_asPositionAttitudeTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asPositionAttitudeTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::PositionAttitudeTransform * osg::CameraView::base_asPositionAttitudeTransform() function, expected prototype:\nosg::PositionAttitudeTransform * osg::CameraView::base_asPositionAttitudeTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::PositionAttitudeTransform * osg::CameraView::base_asPositionAttitudeTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::PositionAttitudeTransform * lret = self->CameraView::asPositionAttitudeTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PositionAttitudeTransform >::push(L,lret,false);

		return 1;
	}

	// const osg::PositionAttitudeTransform * osg::CameraView::base_asPositionAttitudeTransform() const
	static int _bind_base_asPositionAttitudeTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asPositionAttitudeTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::PositionAttitudeTransform * osg::CameraView::base_asPositionAttitudeTransform() const function, expected prototype:\nconst osg::PositionAttitudeTransform * osg::CameraView::base_asPositionAttitudeTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::PositionAttitudeTransform * osg::CameraView::base_asPositionAttitudeTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::PositionAttitudeTransform * lret = self->CameraView::asPositionAttitudeTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PositionAttitudeTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CameraView::base_asPositionAttitudeTransform
	static int _bind_base_asPositionAttitudeTransform(lua_State *L) {
		if (_lg_typecheck_base_asPositionAttitudeTransform_overload_1(L)) return _bind_base_asPositionAttitudeTransform_overload_1(L);
		if (_lg_typecheck_base_asPositionAttitudeTransform_overload_2(L)) return _bind_base_asPositionAttitudeTransform_overload_2(L);

		luaL_error(L, "error in function base_asPositionAttitudeTransform, cannot match any of the overloads for function base_asPositionAttitudeTransform:\n  base_asPositionAttitudeTransform()\n  base_asPositionAttitudeTransform()\n");
		return 0;
	}

	// osg::BoundingSphered osg::CameraView::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::CameraView::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osg::CameraView::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::CameraView::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->CameraView::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// osg::Object * osg::CameraView::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::CameraView::base_cloneType() const function, expected prototype:\nosg::Object * osg::CameraView::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::CameraView::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->CameraView::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::CameraView::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::CameraView::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::CameraView::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::CameraView::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::CameraView::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->CameraView::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::CameraView::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CameraView::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::CameraView::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CameraView::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CameraView::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::CameraView::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::CameraView::base_className() const function, expected prototype:\nconst char * osg::CameraView::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::CameraView::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->CameraView::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::CameraView::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::CameraView::base_libraryName() const function, expected prototype:\nconst char * osg::CameraView::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::CameraView::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->CameraView::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::CameraView::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CameraView::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::CameraView::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::CameraView::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CameraView::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CameraView::accept(nv);

		return 0;
	}

	// bool osg::CameraView::base_computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const
	static int _bind_base_computeLocalToWorldMatrix(lua_State *L) {
		if (!_lg_typecheck_base_computeLocalToWorldMatrix(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CameraView::base_computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const function, expected prototype:\nbool osg::CameraView::base_computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::CameraView::base_computeLocalToWorldMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CameraView::base_computeLocalToWorldMatrix(osg::Matrixd &, osg::NodeVisitor *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CameraView::computeLocalToWorldMatrix(matrix, nv);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::CameraView::base_computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const
	static int _bind_base_computeWorldToLocalMatrix(lua_State *L) {
		if (!_lg_typecheck_base_computeWorldToLocalMatrix(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CameraView::base_computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const function, expected prototype:\nbool osg::CameraView::base_computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::CameraView::base_computeWorldToLocalMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::CameraView* self=Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CameraView::base_computeWorldToLocalMatrix(osg::Matrixd &, osg::NodeVisitor *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CameraView::computeWorldToLocalMatrix(matrix, nv);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::CameraView* LunaTraits< osg::CameraView >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_CameraView::_bind_ctor(L);
}

void LunaTraits< osg::CameraView >::_bind_dtor(osg::CameraView* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::CameraView >::className[] = "CameraView";
const char LunaTraits< osg::CameraView >::fullName[] = "osg::CameraView";
const char LunaTraits< osg::CameraView >::moduleName[] = "osg";
const char* LunaTraits< osg::CameraView >::parents[] = {"osg.Transform", 0};
const int LunaTraits< osg::CameraView >::hash = 81795341;
const int LunaTraits< osg::CameraView >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::CameraView >::methods[] = {
	{"cloneType", &luna_wrapper_osg_CameraView::_bind_cloneType},
	{"clone", &luna_wrapper_osg_CameraView::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_CameraView::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_CameraView::_bind_className},
	{"libraryName", &luna_wrapper_osg_CameraView::_bind_libraryName},
	{"accept", &luna_wrapper_osg_CameraView::_bind_accept},
	{"setPosition", &luna_wrapper_osg_CameraView::_bind_setPosition},
	{"getPosition", &luna_wrapper_osg_CameraView::_bind_getPosition},
	{"setAttitude", &luna_wrapper_osg_CameraView::_bind_setAttitude},
	{"getAttitude", &luna_wrapper_osg_CameraView::_bind_getAttitude},
	{"setFieldOfView", &luna_wrapper_osg_CameraView::_bind_setFieldOfView},
	{"getFieldOfView", &luna_wrapper_osg_CameraView::_bind_getFieldOfView},
	{"setFieldOfViewMode", &luna_wrapper_osg_CameraView::_bind_setFieldOfViewMode},
	{"getFieldOfViewMode", &luna_wrapper_osg_CameraView::_bind_getFieldOfViewMode},
	{"setFocalLength", &luna_wrapper_osg_CameraView::_bind_setFocalLength},
	{"getFocalLength", &luna_wrapper_osg_CameraView::_bind_getFocalLength},
	{"computeLocalToWorldMatrix", &luna_wrapper_osg_CameraView::_bind_computeLocalToWorldMatrix},
	{"computeWorldToLocalMatrix", &luna_wrapper_osg_CameraView::_bind_computeWorldToLocalMatrix},
	{"base_setName", &luna_wrapper_osg_CameraView::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_CameraView::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_CameraView::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_CameraView::_bind_base_getUserData},
	{"base_asCamera", &luna_wrapper_osg_CameraView::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osg_CameraView::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osg_CameraView::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osg_CameraView::_bind_base_ascend},
	{"base_asGroup", &luna_wrapper_osg_CameraView::_bind_base_asGroup},
	{"base_traverse", &luna_wrapper_osg_CameraView::_bind_base_traverse},
	{"base_addChild", &luna_wrapper_osg_CameraView::_bind_base_addChild},
	{"base_insertChild", &luna_wrapper_osg_CameraView::_bind_base_insertChild},
	{"base_removeChildren", &luna_wrapper_osg_CameraView::_bind_base_removeChildren},
	{"base_replaceChild", &luna_wrapper_osg_CameraView::_bind_base_replaceChild},
	{"base_setChild", &luna_wrapper_osg_CameraView::_bind_base_setChild},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_CameraView::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osg_CameraView::_bind_base_releaseGLObjects},
	{"base_asTransform", &luna_wrapper_osg_CameraView::_bind_base_asTransform},
	{"base_asMatrixTransform", &luna_wrapper_osg_CameraView::_bind_base_asMatrixTransform},
	{"base_asPositionAttitudeTransform", &luna_wrapper_osg_CameraView::_bind_base_asPositionAttitudeTransform},
	{"base_computeBound", &luna_wrapper_osg_CameraView::_bind_base_computeBound},
	{"base_cloneType", &luna_wrapper_osg_CameraView::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_CameraView::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_CameraView::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osg_CameraView::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osg_CameraView::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osg_CameraView::_bind_base_accept},
	{"base_computeLocalToWorldMatrix", &luna_wrapper_osg_CameraView::_bind_base_computeLocalToWorldMatrix},
	{"base_computeWorldToLocalMatrix", &luna_wrapper_osg_CameraView::_bind_base_computeWorldToLocalMatrix},
	{"fromVoid", &luna_wrapper_osg_CameraView::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_CameraView::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_CameraView::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::CameraView >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_CameraView::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::CameraView >::enumValues[] = {
	{"UNCONSTRAINED", osg::CameraView::UNCONSTRAINED},
	{"HORIZONTAL", osg::CameraView::HORIZONTAL},
	{"VERTICAL", osg::CameraView::VERTICAL},
	{0,0}
};


