#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_AutoTransform.h>

class luna_wrapper_osg_AutoTransform {
public:
	typedef Luna< osg::AutoTransform > luna_t;

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

		osg::AutoTransform* self= (osg::AutoTransform*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::AutoTransform >::push(L,self,false);
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
		//osg::AutoTransform* ptr= dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		osg::AutoTransform* ptr= luna_caster< osg::Referenced, osg::AutoTransform >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::AutoTransform >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_asAutoTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asAutoTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_setRotation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRotation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setScale_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScale_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMinimumScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMinimumScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaximumScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaximumScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPivotPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPivotPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAutoUpdateEyeMovementTolerance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAutoUpdateEyeMovementTolerance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAutoRotateMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAutoRotateMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAxis(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAutoScaleToScreen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAutoScaleToScreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAutoScaleTransitionWidthRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAutoScaleTransitionWidthRatio(lua_State *L) {
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

	inline static bool _lg_typecheck_base_asAutoTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asAutoTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::AutoTransform::AutoTransform()
	static osg::AutoTransform* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::AutoTransform::AutoTransform() function, expected prototype:\nosg::AutoTransform::AutoTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::AutoTransform();
	}

	// osg::AutoTransform::AutoTransform(const osg::AutoTransform & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::AutoTransform* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::AutoTransform::AutoTransform(const osg::AutoTransform & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::AutoTransform::AutoTransform(const osg::AutoTransform & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::AutoTransform* pat_ptr=(Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1));
		if( !pat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pat in osg::AutoTransform::AutoTransform function");
		}
		const osg::AutoTransform & pat=*pat_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::AutoTransform::AutoTransform function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::AutoTransform(pat, copyop);
	}

	// osg::AutoTransform::AutoTransform(lua_Table * data)
	static osg::AutoTransform* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::AutoTransform::AutoTransform(lua_Table * data) function, expected prototype:\nosg::AutoTransform::AutoTransform(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_AutoTransform(L,NULL);
	}

	// osg::AutoTransform::AutoTransform(lua_Table * data, const osg::AutoTransform & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::AutoTransform* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::AutoTransform::AutoTransform(lua_Table * data, const osg::AutoTransform & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::AutoTransform::AutoTransform(lua_Table * data, const osg::AutoTransform & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::AutoTransform* pat_ptr=(Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,2));
		if( !pat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pat in osg::AutoTransform::AutoTransform function");
		}
		const osg::AutoTransform & pat=*pat_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::AutoTransform::AutoTransform function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_AutoTransform(L,NULL, pat, copyop);
	}

	// Overload binder for osg::AutoTransform::AutoTransform
	static osg::AutoTransform* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function AutoTransform, cannot match any of the overloads for function AutoTransform:\n  AutoTransform()\n  AutoTransform(const osg::AutoTransform &, const osg::CopyOp &)\n  AutoTransform(lua_Table *)\n  AutoTransform(lua_Table *, const osg::AutoTransform &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::AutoTransform::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AutoTransform::cloneType() const function, expected prototype:\nosg::Object * osg::AutoTransform::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::AutoTransform::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::AutoTransform::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AutoTransform::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::AutoTransform::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::AutoTransform::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::AutoTransform::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::AutoTransform::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AutoTransform::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::AutoTransform::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AutoTransform::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::AutoTransform::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AutoTransform::className() const function, expected prototype:\nconst char * osg::AutoTransform::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AutoTransform::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::AutoTransform::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AutoTransform::libraryName() const function, expected prototype:\nconst char * osg::AutoTransform::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AutoTransform::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::AutoTransform::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::AutoTransform::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::AutoTransform::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// osg::AutoTransform * osg::AutoTransform::asAutoTransform()
	static int _bind_asAutoTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_asAutoTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::AutoTransform * osg::AutoTransform::asAutoTransform() function, expected prototype:\nosg::AutoTransform * osg::AutoTransform::asAutoTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::AutoTransform * osg::AutoTransform::asAutoTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::AutoTransform * lret = self->asAutoTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::AutoTransform >::push(L,lret,false);

		return 1;
	}

	// const osg::AutoTransform * osg::AutoTransform::asAutoTransform() const
	static int _bind_asAutoTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_asAutoTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::AutoTransform * osg::AutoTransform::asAutoTransform() const function, expected prototype:\nconst osg::AutoTransform * osg::AutoTransform::asAutoTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::AutoTransform * osg::AutoTransform::asAutoTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::AutoTransform * lret = self->asAutoTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::AutoTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::AutoTransform::asAutoTransform
	static int _bind_asAutoTransform(lua_State *L) {
		if (_lg_typecheck_asAutoTransform_overload_1(L)) return _bind_asAutoTransform_overload_1(L);
		if (_lg_typecheck_asAutoTransform_overload_2(L)) return _bind_asAutoTransform_overload_2(L);

		luaL_error(L, "error in function asAutoTransform, cannot match any of the overloads for function asAutoTransform:\n  asAutoTransform()\n  asAutoTransform()\n");
		return 0;
	}

	// void osg::AutoTransform::setPosition(const osg::Vec3d & pos)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setPosition(const osg::Vec3d & pos) function, expected prototype:\nvoid osg::AutoTransform::setPosition(const osg::Vec3d & pos)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* pos_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in osg::AutoTransform::setPosition function");
		}
		const osg::Vec3d & pos=*pos_ptr;

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setPosition(const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPosition(pos);

		return 0;
	}

	// const osg::Vec3d & osg::AutoTransform::getPosition() const
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3d & osg::AutoTransform::getPosition() const function, expected prototype:\nconst osg::Vec3d & osg::AutoTransform::getPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3d & osg::AutoTransform::getPosition() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3d* lret = &self->getPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// void osg::AutoTransform::setRotation(const osg::Quat & quat)
	static int _bind_setRotation(lua_State *L) {
		if (!_lg_typecheck_setRotation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setRotation(const osg::Quat & quat) function, expected prototype:\nvoid osg::AutoTransform::setRotation(const osg::Quat & quat)\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* quat_ptr=(Luna< osg::Quat >::check(L,2));
		if( !quat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg quat in osg::AutoTransform::setRotation function");
		}
		const osg::Quat & quat=*quat_ptr;

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setRotation(const osg::Quat &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRotation(quat);

		return 0;
	}

	// const osg::Quat & osg::AutoTransform::getRotation() const
	static int _bind_getRotation(lua_State *L) {
		if (!_lg_typecheck_getRotation(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Quat & osg::AutoTransform::getRotation() const function, expected prototype:\nconst osg::Quat & osg::AutoTransform::getRotation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Quat & osg::AutoTransform::getRotation() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Quat* lret = &self->getRotation();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,false);

		return 1;
	}

	// void osg::AutoTransform::setScale(double scale)
	static int _bind_setScale_overload_1(lua_State *L) {
		if (!_lg_typecheck_setScale_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setScale(double scale) function, expected prototype:\nvoid osg::AutoTransform::setScale(double scale)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double scale=(double)lua_tonumber(L,2);

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setScale(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setScale(scale);

		return 0;
	}

	// void osg::AutoTransform::setScale(const osg::Vec3d & scale)
	static int _bind_setScale_overload_2(lua_State *L) {
		if (!_lg_typecheck_setScale_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setScale(const osg::Vec3d & scale) function, expected prototype:\nvoid osg::AutoTransform::setScale(const osg::Vec3d & scale)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* scale_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !scale_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scale in osg::AutoTransform::setScale function");
		}
		const osg::Vec3d & scale=*scale_ptr;

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setScale(const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setScale(scale);

		return 0;
	}

	// Overload binder for osg::AutoTransform::setScale
	static int _bind_setScale(lua_State *L) {
		if (_lg_typecheck_setScale_overload_1(L)) return _bind_setScale_overload_1(L);
		if (_lg_typecheck_setScale_overload_2(L)) return _bind_setScale_overload_2(L);

		luaL_error(L, "error in function setScale, cannot match any of the overloads for function setScale:\n  setScale(double)\n  setScale(const osg::Vec3d &)\n");
		return 0;
	}

	// const osg::Vec3d & osg::AutoTransform::getScale() const
	static int _bind_getScale(lua_State *L) {
		if (!_lg_typecheck_getScale(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3d & osg::AutoTransform::getScale() const function, expected prototype:\nconst osg::Vec3d & osg::AutoTransform::getScale() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3d & osg::AutoTransform::getScale() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3d* lret = &self->getScale();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// void osg::AutoTransform::setMinimumScale(double minimumScale)
	static int _bind_setMinimumScale(lua_State *L) {
		if (!_lg_typecheck_setMinimumScale(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setMinimumScale(double minimumScale) function, expected prototype:\nvoid osg::AutoTransform::setMinimumScale(double minimumScale)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double minimumScale=(double)lua_tonumber(L,2);

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setMinimumScale(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMinimumScale(minimumScale);

		return 0;
	}

	// double osg::AutoTransform::getMinimumScale() const
	static int _bind_getMinimumScale(lua_State *L) {
		if (!_lg_typecheck_getMinimumScale(L)) {
			luaL_error(L, "luna typecheck failed in double osg::AutoTransform::getMinimumScale() const function, expected prototype:\ndouble osg::AutoTransform::getMinimumScale() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::AutoTransform::getMinimumScale() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getMinimumScale();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AutoTransform::setMaximumScale(double maximumScale)
	static int _bind_setMaximumScale(lua_State *L) {
		if (!_lg_typecheck_setMaximumScale(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setMaximumScale(double maximumScale) function, expected prototype:\nvoid osg::AutoTransform::setMaximumScale(double maximumScale)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double maximumScale=(double)lua_tonumber(L,2);

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setMaximumScale(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMaximumScale(maximumScale);

		return 0;
	}

	// double osg::AutoTransform::getMaximumScale() const
	static int _bind_getMaximumScale(lua_State *L) {
		if (!_lg_typecheck_getMaximumScale(L)) {
			luaL_error(L, "luna typecheck failed in double osg::AutoTransform::getMaximumScale() const function, expected prototype:\ndouble osg::AutoTransform::getMaximumScale() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::AutoTransform::getMaximumScale() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getMaximumScale();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AutoTransform::setPivotPoint(const osg::Vec3d & pivot)
	static int _bind_setPivotPoint(lua_State *L) {
		if (!_lg_typecheck_setPivotPoint(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setPivotPoint(const osg::Vec3d & pivot) function, expected prototype:\nvoid osg::AutoTransform::setPivotPoint(const osg::Vec3d & pivot)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* pivot_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !pivot_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivot in osg::AutoTransform::setPivotPoint function");
		}
		const osg::Vec3d & pivot=*pivot_ptr;

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setPivotPoint(const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPivotPoint(pivot);

		return 0;
	}

	// const osg::Vec3d & osg::AutoTransform::getPivotPoint() const
	static int _bind_getPivotPoint(lua_State *L) {
		if (!_lg_typecheck_getPivotPoint(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3d & osg::AutoTransform::getPivotPoint() const function, expected prototype:\nconst osg::Vec3d & osg::AutoTransform::getPivotPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3d & osg::AutoTransform::getPivotPoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3d* lret = &self->getPivotPoint();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// void osg::AutoTransform::setAutoUpdateEyeMovementTolerance(float tolerance)
	static int _bind_setAutoUpdateEyeMovementTolerance(lua_State *L) {
		if (!_lg_typecheck_setAutoUpdateEyeMovementTolerance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setAutoUpdateEyeMovementTolerance(float tolerance) function, expected prototype:\nvoid osg::AutoTransform::setAutoUpdateEyeMovementTolerance(float tolerance)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float tolerance=(float)lua_tonumber(L,2);

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setAutoUpdateEyeMovementTolerance(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAutoUpdateEyeMovementTolerance(tolerance);

		return 0;
	}

	// float osg::AutoTransform::getAutoUpdateEyeMovementTolerance() const
	static int _bind_getAutoUpdateEyeMovementTolerance(lua_State *L) {
		if (!_lg_typecheck_getAutoUpdateEyeMovementTolerance(L)) {
			luaL_error(L, "luna typecheck failed in float osg::AutoTransform::getAutoUpdateEyeMovementTolerance() const function, expected prototype:\nfloat osg::AutoTransform::getAutoUpdateEyeMovementTolerance() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::AutoTransform::getAutoUpdateEyeMovementTolerance() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getAutoUpdateEyeMovementTolerance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AutoTransform::setAutoRotateMode(osg::AutoTransform::AutoRotateMode mode)
	static int _bind_setAutoRotateMode(lua_State *L) {
		if (!_lg_typecheck_setAutoRotateMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setAutoRotateMode(osg::AutoTransform::AutoRotateMode mode) function, expected prototype:\nvoid osg::AutoTransform::setAutoRotateMode(osg::AutoTransform::AutoRotateMode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::AutoTransform::AutoRotateMode mode=(osg::AutoTransform::AutoRotateMode)lua_tointeger(L,2);

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setAutoRotateMode(osg::AutoTransform::AutoRotateMode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAutoRotateMode(mode);

		return 0;
	}

	// osg::AutoTransform::AutoRotateMode osg::AutoTransform::getAutoRotateMode() const
	static int _bind_getAutoRotateMode(lua_State *L) {
		if (!_lg_typecheck_getAutoRotateMode(L)) {
			luaL_error(L, "luna typecheck failed in osg::AutoTransform::AutoRotateMode osg::AutoTransform::getAutoRotateMode() const function, expected prototype:\nosg::AutoTransform::AutoRotateMode osg::AutoTransform::getAutoRotateMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::AutoTransform::AutoRotateMode osg::AutoTransform::getAutoRotateMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::AutoTransform::AutoRotateMode lret = self->getAutoRotateMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AutoTransform::setAxis(const osg::Vec3f & axis)
	static int _bind_setAxis(lua_State *L) {
		if (!_lg_typecheck_setAxis(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setAxis(const osg::Vec3f & axis) function, expected prototype:\nvoid osg::AutoTransform::setAxis(const osg::Vec3f & axis)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* axis_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in osg::AutoTransform::setAxis function");
		}
		const osg::Vec3f & axis=*axis_ptr;

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setAxis(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAxis(axis);

		return 0;
	}

	// const osg::Vec3f & osg::AutoTransform::getAxis() const
	static int _bind_getAxis(lua_State *L) {
		if (!_lg_typecheck_getAxis(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::AutoTransform::getAxis() const function, expected prototype:\nconst osg::Vec3f & osg::AutoTransform::getAxis() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::AutoTransform::getAxis() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getAxis();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osg::AutoTransform::setNormal(const osg::Vec3f & normal)
	static int _bind_setNormal(lua_State *L) {
		if (!_lg_typecheck_setNormal(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setNormal(const osg::Vec3f & normal) function, expected prototype:\nvoid osg::AutoTransform::setNormal(const osg::Vec3f & normal)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* normal_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in osg::AutoTransform::setNormal function");
		}
		const osg::Vec3f & normal=*normal_ptr;

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setNormal(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNormal(normal);

		return 0;
	}

	// const osg::Vec3f & osg::AutoTransform::getNormal() const
	static int _bind_getNormal(lua_State *L) {
		if (!_lg_typecheck_getNormal(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::AutoTransform::getNormal() const function, expected prototype:\nconst osg::Vec3f & osg::AutoTransform::getNormal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::AutoTransform::getNormal() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getNormal();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osg::AutoTransform::setAutoScaleToScreen(bool autoScaleToScreen)
	static int _bind_setAutoScaleToScreen(lua_State *L) {
		if (!_lg_typecheck_setAutoScaleToScreen(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setAutoScaleToScreen(bool autoScaleToScreen) function, expected prototype:\nvoid osg::AutoTransform::setAutoScaleToScreen(bool autoScaleToScreen)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool autoScaleToScreen=(bool)(lua_toboolean(L,2)==1);

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setAutoScaleToScreen(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAutoScaleToScreen(autoScaleToScreen);

		return 0;
	}

	// bool osg::AutoTransform::getAutoScaleToScreen() const
	static int _bind_getAutoScaleToScreen(lua_State *L) {
		if (!_lg_typecheck_getAutoScaleToScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AutoTransform::getAutoScaleToScreen() const function, expected prototype:\nbool osg::AutoTransform::getAutoScaleToScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AutoTransform::getAutoScaleToScreen() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getAutoScaleToScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::AutoTransform::setAutoScaleTransitionWidthRatio(float ratio)
	static int _bind_setAutoScaleTransitionWidthRatio(lua_State *L) {
		if (!_lg_typecheck_setAutoScaleTransitionWidthRatio(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setAutoScaleTransitionWidthRatio(float ratio) function, expected prototype:\nvoid osg::AutoTransform::setAutoScaleTransitionWidthRatio(float ratio)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float ratio=(float)lua_tonumber(L,2);

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setAutoScaleTransitionWidthRatio(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAutoScaleTransitionWidthRatio(ratio);

		return 0;
	}

	// float osg::AutoTransform::getAutoScaleTransitionWidthRatio() const
	static int _bind_getAutoScaleTransitionWidthRatio(lua_State *L) {
		if (!_lg_typecheck_getAutoScaleTransitionWidthRatio(L)) {
			luaL_error(L, "luna typecheck failed in float osg::AutoTransform::getAutoScaleTransitionWidthRatio() const function, expected prototype:\nfloat osg::AutoTransform::getAutoScaleTransitionWidthRatio() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::AutoTransform::getAutoScaleTransitionWidthRatio() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getAutoScaleTransitionWidthRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::AutoTransform::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const
	static int _bind_computeLocalToWorldMatrix(lua_State *L) {
		if (!_lg_typecheck_computeLocalToWorldMatrix(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AutoTransform::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const function, expected prototype:\nbool osg::AutoTransform::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::AutoTransform::computeLocalToWorldMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AutoTransform::computeLocalToWorldMatrix(osg::Matrixd &, osg::NodeVisitor *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->computeLocalToWorldMatrix(matrix, nv);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::AutoTransform::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const
	static int _bind_computeWorldToLocalMatrix(lua_State *L) {
		if (!_lg_typecheck_computeWorldToLocalMatrix(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AutoTransform::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const function, expected prototype:\nbool osg::AutoTransform::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::AutoTransform::computeWorldToLocalMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AutoTransform::computeWorldToLocalMatrix(osg::Matrixd &, osg::NodeVisitor *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->computeWorldToLocalMatrix(matrix, nv);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::BoundingSphered osg::AutoTransform::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::AutoTransform::computeBound() const function, expected prototype:\nosg::BoundingSphered osg::AutoTransform::computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::AutoTransform::computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// void osg::AutoTransform::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::base_setName(const std::string & name) function, expected prototype:\nvoid osg::AutoTransform::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AutoTransform::setName(name);

		return 0;
	}

	// void osg::AutoTransform::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::base_computeDataVariance() function, expected prototype:\nvoid osg::AutoTransform::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AutoTransform::computeDataVariance();

		return 0;
	}

	// void osg::AutoTransform::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::AutoTransform::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AutoTransform::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::AutoTransform::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::AutoTransform::base_getUserData() function, expected prototype:\nosg::Referenced * osg::AutoTransform::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::AutoTransform::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->AutoTransform::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::AutoTransform::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::AutoTransform::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::AutoTransform::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::AutoTransform::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->AutoTransform::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::AutoTransform::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Camera * osg::AutoTransform::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osg::AutoTransform::base_asCamera() function, expected prototype:\nosg::Camera * osg::AutoTransform::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osg::AutoTransform::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->AutoTransform::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osg::AutoTransform::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osg::AutoTransform::base_asCamera() const function, expected prototype:\nconst osg::Camera * osg::AutoTransform::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osg::AutoTransform::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->AutoTransform::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::AutoTransform::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osg::AutoTransform::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osg::AutoTransform::base_asSwitch() function, expected prototype:\nosg::Switch * osg::AutoTransform::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osg::AutoTransform::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->AutoTransform::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osg::AutoTransform::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osg::AutoTransform::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osg::AutoTransform::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osg::AutoTransform::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->AutoTransform::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::AutoTransform::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osg::AutoTransform::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osg::AutoTransform::base_asGeode() function, expected prototype:\nosg::Geode * osg::AutoTransform::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osg::AutoTransform::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->AutoTransform::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osg::AutoTransform::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osg::AutoTransform::base_asGeode() const function, expected prototype:\nconst osg::Geode * osg::AutoTransform::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osg::AutoTransform::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->AutoTransform::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::AutoTransform::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osg::AutoTransform::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::AutoTransform::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::AutoTransform::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AutoTransform::ascend(nv);

		return 0;
	}

	// osg::Group * osg::AutoTransform::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osg::AutoTransform::base_asGroup() function, expected prototype:\nosg::Group * osg::AutoTransform::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osg::AutoTransform::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->AutoTransform::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osg::AutoTransform::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osg::AutoTransform::base_asGroup() const function, expected prototype:\nconst osg::Group * osg::AutoTransform::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osg::AutoTransform::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->AutoTransform::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::AutoTransform::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// void osg::AutoTransform::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::AutoTransform::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::AutoTransform::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AutoTransform::traverse(_arg1);

		return 0;
	}

	// bool osg::AutoTransform::base_addChild(osg::Node * child)
	static int _bind_base_addChild(lua_State *L) {
		if (!_lg_typecheck_base_addChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AutoTransform::base_addChild(osg::Node * child) function, expected prototype:\nbool osg::AutoTransform::base_addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AutoTransform::base_addChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AutoTransform::addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::AutoTransform::base_insertChild(unsigned int index, osg::Node * child)
	static int _bind_base_insertChild(lua_State *L) {
		if (!_lg_typecheck_base_insertChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AutoTransform::base_insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osg::AutoTransform::base_insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AutoTransform::base_insertChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AutoTransform::insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::AutoTransform::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_base_removeChildren(lua_State *L) {
		if (!_lg_typecheck_base_removeChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AutoTransform::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osg::AutoTransform::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AutoTransform::base_removeChildren(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AutoTransform::removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::AutoTransform::base_replaceChild(osg::Node * origChild, osg::Node * newChild)
	static int _bind_base_replaceChild(lua_State *L) {
		if (!_lg_typecheck_base_replaceChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AutoTransform::base_replaceChild(osg::Node * origChild, osg::Node * newChild) function, expected prototype:\nbool osg::AutoTransform::base_replaceChild(osg::Node * origChild, osg::Node * newChild)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* origChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::Node* newChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AutoTransform::base_replaceChild(osg::Node *, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AutoTransform::replaceChild(origChild, newChild);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::AutoTransform::base_setChild(unsigned int i, osg::Node * node)
	static int _bind_base_setChild(lua_State *L) {
		if (!_lg_typecheck_base_setChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AutoTransform::base_setChild(unsigned int i, osg::Node * node) function, expected prototype:\nbool osg::AutoTransform::base_setChild(unsigned int i, osg::Node * node)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AutoTransform::base_setChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AutoTransform::setChild(i, node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::AutoTransform::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::AutoTransform::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AutoTransform::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::AutoTransform::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::AutoTransform::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AutoTransform::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Transform * osg::AutoTransform::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osg::AutoTransform::base_asTransform() function, expected prototype:\nosg::Transform * osg::AutoTransform::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osg::AutoTransform::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->AutoTransform::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osg::AutoTransform::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osg::AutoTransform::base_asTransform() const function, expected prototype:\nconst osg::Transform * osg::AutoTransform::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osg::AutoTransform::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->AutoTransform::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::AutoTransform::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::MatrixTransform * osg::AutoTransform::base_asMatrixTransform()
	static int _bind_base_asMatrixTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asMatrixTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::MatrixTransform * osg::AutoTransform::base_asMatrixTransform() function, expected prototype:\nosg::MatrixTransform * osg::AutoTransform::base_asMatrixTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::MatrixTransform * osg::AutoTransform::base_asMatrixTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::MatrixTransform * lret = self->AutoTransform::asMatrixTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixTransform >::push(L,lret,false);

		return 1;
	}

	// const osg::MatrixTransform * osg::AutoTransform::base_asMatrixTransform() const
	static int _bind_base_asMatrixTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asMatrixTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::MatrixTransform * osg::AutoTransform::base_asMatrixTransform() const function, expected prototype:\nconst osg::MatrixTransform * osg::AutoTransform::base_asMatrixTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::MatrixTransform * osg::AutoTransform::base_asMatrixTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::MatrixTransform * lret = self->AutoTransform::asMatrixTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::AutoTransform::base_asMatrixTransform
	static int _bind_base_asMatrixTransform(lua_State *L) {
		if (_lg_typecheck_base_asMatrixTransform_overload_1(L)) return _bind_base_asMatrixTransform_overload_1(L);
		if (_lg_typecheck_base_asMatrixTransform_overload_2(L)) return _bind_base_asMatrixTransform_overload_2(L);

		luaL_error(L, "error in function base_asMatrixTransform, cannot match any of the overloads for function base_asMatrixTransform:\n  base_asMatrixTransform()\n  base_asMatrixTransform()\n");
		return 0;
	}

	// osg::PositionAttitudeTransform * osg::AutoTransform::base_asPositionAttitudeTransform()
	static int _bind_base_asPositionAttitudeTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asPositionAttitudeTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::PositionAttitudeTransform * osg::AutoTransform::base_asPositionAttitudeTransform() function, expected prototype:\nosg::PositionAttitudeTransform * osg::AutoTransform::base_asPositionAttitudeTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::PositionAttitudeTransform * osg::AutoTransform::base_asPositionAttitudeTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::PositionAttitudeTransform * lret = self->AutoTransform::asPositionAttitudeTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PositionAttitudeTransform >::push(L,lret,false);

		return 1;
	}

	// const osg::PositionAttitudeTransform * osg::AutoTransform::base_asPositionAttitudeTransform() const
	static int _bind_base_asPositionAttitudeTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asPositionAttitudeTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::PositionAttitudeTransform * osg::AutoTransform::base_asPositionAttitudeTransform() const function, expected prototype:\nconst osg::PositionAttitudeTransform * osg::AutoTransform::base_asPositionAttitudeTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::PositionAttitudeTransform * osg::AutoTransform::base_asPositionAttitudeTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::PositionAttitudeTransform * lret = self->AutoTransform::asPositionAttitudeTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PositionAttitudeTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::AutoTransform::base_asPositionAttitudeTransform
	static int _bind_base_asPositionAttitudeTransform(lua_State *L) {
		if (_lg_typecheck_base_asPositionAttitudeTransform_overload_1(L)) return _bind_base_asPositionAttitudeTransform_overload_1(L);
		if (_lg_typecheck_base_asPositionAttitudeTransform_overload_2(L)) return _bind_base_asPositionAttitudeTransform_overload_2(L);

		luaL_error(L, "error in function base_asPositionAttitudeTransform, cannot match any of the overloads for function base_asPositionAttitudeTransform:\n  base_asPositionAttitudeTransform()\n  base_asPositionAttitudeTransform()\n");
		return 0;
	}

	// osg::Object * osg::AutoTransform::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AutoTransform::base_cloneType() const function, expected prototype:\nosg::Object * osg::AutoTransform::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::AutoTransform::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->AutoTransform::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::AutoTransform::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AutoTransform::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::AutoTransform::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::AutoTransform::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::AutoTransform::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->AutoTransform::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::AutoTransform::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AutoTransform::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::AutoTransform::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AutoTransform::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AutoTransform::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::AutoTransform::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AutoTransform::base_className() const function, expected prototype:\nconst char * osg::AutoTransform::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AutoTransform::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->AutoTransform::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::AutoTransform::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AutoTransform::base_libraryName() const function, expected prototype:\nconst char * osg::AutoTransform::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AutoTransform::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->AutoTransform::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::AutoTransform::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::AutoTransform::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::AutoTransform::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AutoTransform::accept(nv);

		return 0;
	}

	// osg::AutoTransform * osg::AutoTransform::base_asAutoTransform()
	static int _bind_base_asAutoTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asAutoTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::AutoTransform * osg::AutoTransform::base_asAutoTransform() function, expected prototype:\nosg::AutoTransform * osg::AutoTransform::base_asAutoTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::AutoTransform * osg::AutoTransform::base_asAutoTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::AutoTransform * lret = self->AutoTransform::asAutoTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::AutoTransform >::push(L,lret,false);

		return 1;
	}

	// const osg::AutoTransform * osg::AutoTransform::base_asAutoTransform() const
	static int _bind_base_asAutoTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asAutoTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::AutoTransform * osg::AutoTransform::base_asAutoTransform() const function, expected prototype:\nconst osg::AutoTransform * osg::AutoTransform::base_asAutoTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::AutoTransform * osg::AutoTransform::base_asAutoTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::AutoTransform * lret = self->AutoTransform::asAutoTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::AutoTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::AutoTransform::base_asAutoTransform
	static int _bind_base_asAutoTransform(lua_State *L) {
		if (_lg_typecheck_base_asAutoTransform_overload_1(L)) return _bind_base_asAutoTransform_overload_1(L);
		if (_lg_typecheck_base_asAutoTransform_overload_2(L)) return _bind_base_asAutoTransform_overload_2(L);

		luaL_error(L, "error in function base_asAutoTransform, cannot match any of the overloads for function base_asAutoTransform:\n  base_asAutoTransform()\n  base_asAutoTransform()\n");
		return 0;
	}

	// bool osg::AutoTransform::base_computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const
	static int _bind_base_computeLocalToWorldMatrix(lua_State *L) {
		if (!_lg_typecheck_base_computeLocalToWorldMatrix(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AutoTransform::base_computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const function, expected prototype:\nbool osg::AutoTransform::base_computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::AutoTransform::base_computeLocalToWorldMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AutoTransform::base_computeLocalToWorldMatrix(osg::Matrixd &, osg::NodeVisitor *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AutoTransform::computeLocalToWorldMatrix(matrix, nv);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::AutoTransform::base_computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const
	static int _bind_base_computeWorldToLocalMatrix(lua_State *L) {
		if (!_lg_typecheck_base_computeWorldToLocalMatrix(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AutoTransform::base_computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const function, expected prototype:\nbool osg::AutoTransform::base_computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::AutoTransform::base_computeWorldToLocalMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AutoTransform::base_computeWorldToLocalMatrix(osg::Matrixd &, osg::NodeVisitor *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AutoTransform::computeWorldToLocalMatrix(matrix, nv);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::BoundingSphered osg::AutoTransform::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::AutoTransform::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osg::AutoTransform::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AutoTransform* self=Luna< osg::Referenced >::checkSubType< osg::AutoTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::AutoTransform::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->AutoTransform::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::AutoTransform* LunaTraits< osg::AutoTransform >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_AutoTransform::_bind_ctor(L);
}

void LunaTraits< osg::AutoTransform >::_bind_dtor(osg::AutoTransform* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::AutoTransform >::className[] = "AutoTransform";
const char LunaTraits< osg::AutoTransform >::fullName[] = "osg::AutoTransform";
const char LunaTraits< osg::AutoTransform >::moduleName[] = "osg";
const char* LunaTraits< osg::AutoTransform >::parents[] = {"osg.Transform", 0};
const int LunaTraits< osg::AutoTransform >::hash = 29175925;
const int LunaTraits< osg::AutoTransform >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::AutoTransform >::methods[] = {
	{"cloneType", &luna_wrapper_osg_AutoTransform::_bind_cloneType},
	{"clone", &luna_wrapper_osg_AutoTransform::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_AutoTransform::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_AutoTransform::_bind_className},
	{"libraryName", &luna_wrapper_osg_AutoTransform::_bind_libraryName},
	{"accept", &luna_wrapper_osg_AutoTransform::_bind_accept},
	{"asAutoTransform", &luna_wrapper_osg_AutoTransform::_bind_asAutoTransform},
	{"setPosition", &luna_wrapper_osg_AutoTransform::_bind_setPosition},
	{"getPosition", &luna_wrapper_osg_AutoTransform::_bind_getPosition},
	{"setRotation", &luna_wrapper_osg_AutoTransform::_bind_setRotation},
	{"getRotation", &luna_wrapper_osg_AutoTransform::_bind_getRotation},
	{"setScale", &luna_wrapper_osg_AutoTransform::_bind_setScale},
	{"getScale", &luna_wrapper_osg_AutoTransform::_bind_getScale},
	{"setMinimumScale", &luna_wrapper_osg_AutoTransform::_bind_setMinimumScale},
	{"getMinimumScale", &luna_wrapper_osg_AutoTransform::_bind_getMinimumScale},
	{"setMaximumScale", &luna_wrapper_osg_AutoTransform::_bind_setMaximumScale},
	{"getMaximumScale", &luna_wrapper_osg_AutoTransform::_bind_getMaximumScale},
	{"setPivotPoint", &luna_wrapper_osg_AutoTransform::_bind_setPivotPoint},
	{"getPivotPoint", &luna_wrapper_osg_AutoTransform::_bind_getPivotPoint},
	{"setAutoUpdateEyeMovementTolerance", &luna_wrapper_osg_AutoTransform::_bind_setAutoUpdateEyeMovementTolerance},
	{"getAutoUpdateEyeMovementTolerance", &luna_wrapper_osg_AutoTransform::_bind_getAutoUpdateEyeMovementTolerance},
	{"setAutoRotateMode", &luna_wrapper_osg_AutoTransform::_bind_setAutoRotateMode},
	{"getAutoRotateMode", &luna_wrapper_osg_AutoTransform::_bind_getAutoRotateMode},
	{"setAxis", &luna_wrapper_osg_AutoTransform::_bind_setAxis},
	{"getAxis", &luna_wrapper_osg_AutoTransform::_bind_getAxis},
	{"setNormal", &luna_wrapper_osg_AutoTransform::_bind_setNormal},
	{"getNormal", &luna_wrapper_osg_AutoTransform::_bind_getNormal},
	{"setAutoScaleToScreen", &luna_wrapper_osg_AutoTransform::_bind_setAutoScaleToScreen},
	{"getAutoScaleToScreen", &luna_wrapper_osg_AutoTransform::_bind_getAutoScaleToScreen},
	{"setAutoScaleTransitionWidthRatio", &luna_wrapper_osg_AutoTransform::_bind_setAutoScaleTransitionWidthRatio},
	{"getAutoScaleTransitionWidthRatio", &luna_wrapper_osg_AutoTransform::_bind_getAutoScaleTransitionWidthRatio},
	{"computeLocalToWorldMatrix", &luna_wrapper_osg_AutoTransform::_bind_computeLocalToWorldMatrix},
	{"computeWorldToLocalMatrix", &luna_wrapper_osg_AutoTransform::_bind_computeWorldToLocalMatrix},
	{"computeBound", &luna_wrapper_osg_AutoTransform::_bind_computeBound},
	{"base_setName", &luna_wrapper_osg_AutoTransform::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_AutoTransform::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_AutoTransform::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_AutoTransform::_bind_base_getUserData},
	{"base_asCamera", &luna_wrapper_osg_AutoTransform::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osg_AutoTransform::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osg_AutoTransform::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osg_AutoTransform::_bind_base_ascend},
	{"base_asGroup", &luna_wrapper_osg_AutoTransform::_bind_base_asGroup},
	{"base_traverse", &luna_wrapper_osg_AutoTransform::_bind_base_traverse},
	{"base_addChild", &luna_wrapper_osg_AutoTransform::_bind_base_addChild},
	{"base_insertChild", &luna_wrapper_osg_AutoTransform::_bind_base_insertChild},
	{"base_removeChildren", &luna_wrapper_osg_AutoTransform::_bind_base_removeChildren},
	{"base_replaceChild", &luna_wrapper_osg_AutoTransform::_bind_base_replaceChild},
	{"base_setChild", &luna_wrapper_osg_AutoTransform::_bind_base_setChild},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_AutoTransform::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osg_AutoTransform::_bind_base_releaseGLObjects},
	{"base_asTransform", &luna_wrapper_osg_AutoTransform::_bind_base_asTransform},
	{"base_asMatrixTransform", &luna_wrapper_osg_AutoTransform::_bind_base_asMatrixTransform},
	{"base_asPositionAttitudeTransform", &luna_wrapper_osg_AutoTransform::_bind_base_asPositionAttitudeTransform},
	{"base_cloneType", &luna_wrapper_osg_AutoTransform::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_AutoTransform::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_AutoTransform::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osg_AutoTransform::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osg_AutoTransform::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osg_AutoTransform::_bind_base_accept},
	{"base_asAutoTransform", &luna_wrapper_osg_AutoTransform::_bind_base_asAutoTransform},
	{"base_computeLocalToWorldMatrix", &luna_wrapper_osg_AutoTransform::_bind_base_computeLocalToWorldMatrix},
	{"base_computeWorldToLocalMatrix", &luna_wrapper_osg_AutoTransform::_bind_base_computeWorldToLocalMatrix},
	{"base_computeBound", &luna_wrapper_osg_AutoTransform::_bind_base_computeBound},
	{"fromVoid", &luna_wrapper_osg_AutoTransform::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_AutoTransform::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_AutoTransform::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::AutoTransform >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_AutoTransform::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::AutoTransform >::enumValues[] = {
	{"NO_ROTATION", osg::AutoTransform::NO_ROTATION},
	{"ROTATE_TO_SCREEN", osg::AutoTransform::ROTATE_TO_SCREEN},
	{"ROTATE_TO_CAMERA", osg::AutoTransform::ROTATE_TO_CAMERA},
	{"ROTATE_TO_AXIS", osg::AutoTransform::ROTATE_TO_AXIS},
	{0,0}
};


