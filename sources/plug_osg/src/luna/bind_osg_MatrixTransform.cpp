#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_MatrixTransform.h>

class luna_wrapper_osg_MatrixTransform {
public:
	typedef Luna< osg::MatrixTransform > luna_t;

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

		osg::MatrixTransform* self= (osg::MatrixTransform*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::MatrixTransform >::push(L,self,false);
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
		//osg::MatrixTransform* ptr= dynamic_cast< osg::MatrixTransform* >(Luna< osg::Referenced >::check(L,1));
		osg::MatrixTransform* ptr= luna_caster< osg::Referenced, osg::MatrixTransform >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::MatrixTransform >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,1))) ) return false;
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
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_asMatrixTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asMatrixTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_preMult(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_postMult(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInverseMatrix(lua_State *L) {
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

	inline static bool _lg_typecheck_base_asMatrixTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asMatrixTransform_overload_2(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::MatrixTransform::MatrixTransform()
	static osg::MatrixTransform* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::MatrixTransform::MatrixTransform() function, expected prototype:\nosg::MatrixTransform::MatrixTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::MatrixTransform();
	}

	// osg::MatrixTransform::MatrixTransform(const osg::MatrixTransform & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::MatrixTransform* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::MatrixTransform::MatrixTransform(const osg::MatrixTransform & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::MatrixTransform::MatrixTransform(const osg::MatrixTransform & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::MatrixTransform* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::MatrixTransform::MatrixTransform function");
		}
		const osg::MatrixTransform & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::MatrixTransform::MatrixTransform function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::MatrixTransform(_arg1, copyop);
	}

	// osg::MatrixTransform::MatrixTransform(const osg::Matrixd & matix)
	static osg::MatrixTransform* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::MatrixTransform::MatrixTransform(const osg::Matrixd & matix) function, expected prototype:\nosg::MatrixTransform::MatrixTransform(const osg::Matrixd & matix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matix_ptr=(Luna< osg::Matrixd >::check(L,1));
		if( !matix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matix in osg::MatrixTransform::MatrixTransform function");
		}
		const osg::Matrixd & matix=*matix_ptr;

		return new osg::MatrixTransform(matix);
	}

	// osg::MatrixTransform::MatrixTransform(lua_Table * data)
	static osg::MatrixTransform* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::MatrixTransform::MatrixTransform(lua_Table * data) function, expected prototype:\nosg::MatrixTransform::MatrixTransform(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_MatrixTransform(L,NULL);
	}

	// osg::MatrixTransform::MatrixTransform(lua_Table * data, const osg::MatrixTransform & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::MatrixTransform* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::MatrixTransform::MatrixTransform(lua_Table * data, const osg::MatrixTransform & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::MatrixTransform::MatrixTransform(lua_Table * data, const osg::MatrixTransform & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::MatrixTransform* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::MatrixTransform::MatrixTransform function");
		}
		const osg::MatrixTransform & _arg2=*_arg2_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::MatrixTransform::MatrixTransform function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_MatrixTransform(L,NULL, _arg2, copyop);
	}

	// osg::MatrixTransform::MatrixTransform(lua_Table * data, const osg::Matrixd & matix)
	static osg::MatrixTransform* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::MatrixTransform::MatrixTransform(lua_Table * data, const osg::Matrixd & matix) function, expected prototype:\nosg::MatrixTransform::MatrixTransform(lua_Table * data, const osg::Matrixd & matix)\nClass arguments details:\narg 2 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matix in osg::MatrixTransform::MatrixTransform function");
		}
		const osg::Matrixd & matix=*matix_ptr;

		return new wrapper_osg_MatrixTransform(L,NULL, matix);
	}

	// Overload binder for osg::MatrixTransform::MatrixTransform
	static osg::MatrixTransform* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function MatrixTransform, cannot match any of the overloads for function MatrixTransform:\n  MatrixTransform()\n  MatrixTransform(const osg::MatrixTransform &, const osg::CopyOp &)\n  MatrixTransform(const osg::Matrixd &)\n  MatrixTransform(lua_Table *)\n  MatrixTransform(lua_Table *, const osg::MatrixTransform &, const osg::CopyOp &)\n  MatrixTransform(lua_Table *, const osg::Matrixd &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::MatrixTransform::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::MatrixTransform::cloneType() const function, expected prototype:\nosg::Object * osg::MatrixTransform::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::MatrixTransform::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::MatrixTransform::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::MatrixTransform::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::MatrixTransform::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::MatrixTransform::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::MatrixTransform::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::MatrixTransform::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::MatrixTransform::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::MatrixTransform::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::MatrixTransform::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::MatrixTransform::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::MatrixTransform::className() const function, expected prototype:\nconst char * osg::MatrixTransform::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::MatrixTransform::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::MatrixTransform::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::MatrixTransform::libraryName() const function, expected prototype:\nconst char * osg::MatrixTransform::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::MatrixTransform::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::MatrixTransform::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::MatrixTransform::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::MatrixTransform::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::MatrixTransform::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::MatrixTransform::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// osg::MatrixTransform * osg::MatrixTransform::asMatrixTransform()
	static int _bind_asMatrixTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_asMatrixTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::MatrixTransform * osg::MatrixTransform::asMatrixTransform() function, expected prototype:\nosg::MatrixTransform * osg::MatrixTransform::asMatrixTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::MatrixTransform * osg::MatrixTransform::asMatrixTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::MatrixTransform * lret = self->asMatrixTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixTransform >::push(L,lret,false);

		return 1;
	}

	// const osg::MatrixTransform * osg::MatrixTransform::asMatrixTransform() const
	static int _bind_asMatrixTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_asMatrixTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::MatrixTransform * osg::MatrixTransform::asMatrixTransform() const function, expected prototype:\nconst osg::MatrixTransform * osg::MatrixTransform::asMatrixTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::MatrixTransform * osg::MatrixTransform::asMatrixTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::MatrixTransform * lret = self->asMatrixTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::MatrixTransform::asMatrixTransform
	static int _bind_asMatrixTransform(lua_State *L) {
		if (_lg_typecheck_asMatrixTransform_overload_1(L)) return _bind_asMatrixTransform_overload_1(L);
		if (_lg_typecheck_asMatrixTransform_overload_2(L)) return _bind_asMatrixTransform_overload_2(L);

		luaL_error(L, "error in function asMatrixTransform, cannot match any of the overloads for function asMatrixTransform:\n  asMatrixTransform()\n  asMatrixTransform()\n");
		return 0;
	}

	// void osg::MatrixTransform::setMatrix(const osg::Matrixd & mat)
	static int _bind_setMatrix(lua_State *L) {
		if (!_lg_typecheck_setMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osg::MatrixTransform::setMatrix(const osg::Matrixd & mat) function, expected prototype:\nvoid osg::MatrixTransform::setMatrix(const osg::Matrixd & mat)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* mat_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in osg::MatrixTransform::setMatrix function");
		}
		const osg::Matrixd & mat=*mat_ptr;

		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::MatrixTransform::setMatrix(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMatrix(mat);

		return 0;
	}

	// const osg::Matrixd & osg::MatrixTransform::getMatrix() const
	static int _bind_getMatrix(lua_State *L) {
		if (!_lg_typecheck_getMatrix(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Matrixd & osg::MatrixTransform::getMatrix() const function, expected prototype:\nconst osg::Matrixd & osg::MatrixTransform::getMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Matrixd & osg::MatrixTransform::getMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Matrixd* lret = &self->getMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// void osg::MatrixTransform::preMult(const osg::Matrixd & mat)
	static int _bind_preMult(lua_State *L) {
		if (!_lg_typecheck_preMult(L)) {
			luaL_error(L, "luna typecheck failed in void osg::MatrixTransform::preMult(const osg::Matrixd & mat) function, expected prototype:\nvoid osg::MatrixTransform::preMult(const osg::Matrixd & mat)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* mat_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in osg::MatrixTransform::preMult function");
		}
		const osg::Matrixd & mat=*mat_ptr;

		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::MatrixTransform::preMult(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->preMult(mat);

		return 0;
	}

	// void osg::MatrixTransform::postMult(const osg::Matrixd & mat)
	static int _bind_postMult(lua_State *L) {
		if (!_lg_typecheck_postMult(L)) {
			luaL_error(L, "luna typecheck failed in void osg::MatrixTransform::postMult(const osg::Matrixd & mat) function, expected prototype:\nvoid osg::MatrixTransform::postMult(const osg::Matrixd & mat)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* mat_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in osg::MatrixTransform::postMult function");
		}
		const osg::Matrixd & mat=*mat_ptr;

		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::MatrixTransform::postMult(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->postMult(mat);

		return 0;
	}

	// const osg::Matrixd & osg::MatrixTransform::getInverseMatrix() const
	static int _bind_getInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_getInverseMatrix(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Matrixd & osg::MatrixTransform::getInverseMatrix() const function, expected prototype:\nconst osg::Matrixd & osg::MatrixTransform::getInverseMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Matrixd & osg::MatrixTransform::getInverseMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Matrixd* lret = &self->getInverseMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// bool osg::MatrixTransform::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const
	static int _bind_computeLocalToWorldMatrix(lua_State *L) {
		if (!_lg_typecheck_computeLocalToWorldMatrix(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::MatrixTransform::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const function, expected prototype:\nbool osg::MatrixTransform::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::MatrixTransform::computeLocalToWorldMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* _arg2=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::MatrixTransform::computeLocalToWorldMatrix(osg::Matrixd &, osg::NodeVisitor *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->computeLocalToWorldMatrix(matrix, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::MatrixTransform::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const
	static int _bind_computeWorldToLocalMatrix(lua_State *L) {
		if (!_lg_typecheck_computeWorldToLocalMatrix(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::MatrixTransform::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const function, expected prototype:\nbool osg::MatrixTransform::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::MatrixTransform::computeWorldToLocalMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* _arg2=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::MatrixTransform::computeWorldToLocalMatrix(osg::Matrixd &, osg::NodeVisitor *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->computeWorldToLocalMatrix(matrix, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::MatrixTransform::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::MatrixTransform::base_setName(const std::string & name) function, expected prototype:\nvoid osg::MatrixTransform::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::MatrixTransform::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MatrixTransform::setName(name);

		return 0;
	}

	// void osg::MatrixTransform::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::MatrixTransform::base_computeDataVariance() function, expected prototype:\nvoid osg::MatrixTransform::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::MatrixTransform::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MatrixTransform::computeDataVariance();

		return 0;
	}

	// void osg::MatrixTransform::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::MatrixTransform::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::MatrixTransform::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::MatrixTransform::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MatrixTransform::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::MatrixTransform::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::MatrixTransform::base_getUserData() function, expected prototype:\nosg::Referenced * osg::MatrixTransform::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::MatrixTransform::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->MatrixTransform::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::MatrixTransform::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::MatrixTransform::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::MatrixTransform::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::MatrixTransform::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->MatrixTransform::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::MatrixTransform::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Camera * osg::MatrixTransform::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osg::MatrixTransform::base_asCamera() function, expected prototype:\nosg::Camera * osg::MatrixTransform::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osg::MatrixTransform::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->MatrixTransform::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osg::MatrixTransform::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osg::MatrixTransform::base_asCamera() const function, expected prototype:\nconst osg::Camera * osg::MatrixTransform::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osg::MatrixTransform::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->MatrixTransform::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::MatrixTransform::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osg::MatrixTransform::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osg::MatrixTransform::base_asSwitch() function, expected prototype:\nosg::Switch * osg::MatrixTransform::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osg::MatrixTransform::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->MatrixTransform::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osg::MatrixTransform::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osg::MatrixTransform::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osg::MatrixTransform::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osg::MatrixTransform::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->MatrixTransform::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::MatrixTransform::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osg::MatrixTransform::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osg::MatrixTransform::base_asGeode() function, expected prototype:\nosg::Geode * osg::MatrixTransform::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osg::MatrixTransform::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->MatrixTransform::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osg::MatrixTransform::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osg::MatrixTransform::base_asGeode() const function, expected prototype:\nconst osg::Geode * osg::MatrixTransform::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osg::MatrixTransform::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->MatrixTransform::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::MatrixTransform::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osg::MatrixTransform::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osg::MatrixTransform::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::MatrixTransform::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::MatrixTransform::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::MatrixTransform::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MatrixTransform::ascend(nv);

		return 0;
	}

	// osg::Group * osg::MatrixTransform::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osg::MatrixTransform::base_asGroup() function, expected prototype:\nosg::Group * osg::MatrixTransform::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osg::MatrixTransform::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->MatrixTransform::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osg::MatrixTransform::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osg::MatrixTransform::base_asGroup() const function, expected prototype:\nconst osg::Group * osg::MatrixTransform::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osg::MatrixTransform::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->MatrixTransform::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::MatrixTransform::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// void osg::MatrixTransform::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::MatrixTransform::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::MatrixTransform::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::MatrixTransform::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::MatrixTransform::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MatrixTransform::traverse(_arg1);

		return 0;
	}

	// bool osg::MatrixTransform::base_addChild(osg::Node * child)
	static int _bind_base_addChild(lua_State *L) {
		if (!_lg_typecheck_base_addChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::MatrixTransform::base_addChild(osg::Node * child) function, expected prototype:\nbool osg::MatrixTransform::base_addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::MatrixTransform::base_addChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MatrixTransform::addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::MatrixTransform::base_insertChild(unsigned int index, osg::Node * child)
	static int _bind_base_insertChild(lua_State *L) {
		if (!_lg_typecheck_base_insertChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::MatrixTransform::base_insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osg::MatrixTransform::base_insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::MatrixTransform::base_insertChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MatrixTransform::insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::MatrixTransform::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_base_removeChildren(lua_State *L) {
		if (!_lg_typecheck_base_removeChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::MatrixTransform::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osg::MatrixTransform::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::MatrixTransform::base_removeChildren(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MatrixTransform::removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::MatrixTransform::base_replaceChild(osg::Node * origChild, osg::Node * newChild)
	static int _bind_base_replaceChild(lua_State *L) {
		if (!_lg_typecheck_base_replaceChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::MatrixTransform::base_replaceChild(osg::Node * origChild, osg::Node * newChild) function, expected prototype:\nbool osg::MatrixTransform::base_replaceChild(osg::Node * origChild, osg::Node * newChild)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* origChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::Node* newChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::MatrixTransform::base_replaceChild(osg::Node *, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MatrixTransform::replaceChild(origChild, newChild);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::MatrixTransform::base_setChild(unsigned int i, osg::Node * node)
	static int _bind_base_setChild(lua_State *L) {
		if (!_lg_typecheck_base_setChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::MatrixTransform::base_setChild(unsigned int i, osg::Node * node) function, expected prototype:\nbool osg::MatrixTransform::base_setChild(unsigned int i, osg::Node * node)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::MatrixTransform::base_setChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MatrixTransform::setChild(i, node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::MatrixTransform::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::MatrixTransform::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::MatrixTransform::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::MatrixTransform::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MatrixTransform::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::MatrixTransform::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::MatrixTransform::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::MatrixTransform::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::MatrixTransform::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MatrixTransform::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Transform * osg::MatrixTransform::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osg::MatrixTransform::base_asTransform() function, expected prototype:\nosg::Transform * osg::MatrixTransform::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osg::MatrixTransform::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->MatrixTransform::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osg::MatrixTransform::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osg::MatrixTransform::base_asTransform() const function, expected prototype:\nconst osg::Transform * osg::MatrixTransform::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osg::MatrixTransform::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->MatrixTransform::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::MatrixTransform::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::PositionAttitudeTransform * osg::MatrixTransform::base_asPositionAttitudeTransform()
	static int _bind_base_asPositionAttitudeTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asPositionAttitudeTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::PositionAttitudeTransform * osg::MatrixTransform::base_asPositionAttitudeTransform() function, expected prototype:\nosg::PositionAttitudeTransform * osg::MatrixTransform::base_asPositionAttitudeTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::PositionAttitudeTransform * osg::MatrixTransform::base_asPositionAttitudeTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::PositionAttitudeTransform * lret = self->MatrixTransform::asPositionAttitudeTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PositionAttitudeTransform >::push(L,lret,false);

		return 1;
	}

	// const osg::PositionAttitudeTransform * osg::MatrixTransform::base_asPositionAttitudeTransform() const
	static int _bind_base_asPositionAttitudeTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asPositionAttitudeTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::PositionAttitudeTransform * osg::MatrixTransform::base_asPositionAttitudeTransform() const function, expected prototype:\nconst osg::PositionAttitudeTransform * osg::MatrixTransform::base_asPositionAttitudeTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::PositionAttitudeTransform * osg::MatrixTransform::base_asPositionAttitudeTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::PositionAttitudeTransform * lret = self->MatrixTransform::asPositionAttitudeTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PositionAttitudeTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::MatrixTransform::base_asPositionAttitudeTransform
	static int _bind_base_asPositionAttitudeTransform(lua_State *L) {
		if (_lg_typecheck_base_asPositionAttitudeTransform_overload_1(L)) return _bind_base_asPositionAttitudeTransform_overload_1(L);
		if (_lg_typecheck_base_asPositionAttitudeTransform_overload_2(L)) return _bind_base_asPositionAttitudeTransform_overload_2(L);

		luaL_error(L, "error in function base_asPositionAttitudeTransform, cannot match any of the overloads for function base_asPositionAttitudeTransform:\n  base_asPositionAttitudeTransform()\n  base_asPositionAttitudeTransform()\n");
		return 0;
	}

	// osg::BoundingSphered osg::MatrixTransform::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::MatrixTransform::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osg::MatrixTransform::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::MatrixTransform::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->MatrixTransform::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// osg::Object * osg::MatrixTransform::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::MatrixTransform::base_cloneType() const function, expected prototype:\nosg::Object * osg::MatrixTransform::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::MatrixTransform::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->MatrixTransform::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::MatrixTransform::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::MatrixTransform::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::MatrixTransform::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::MatrixTransform::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::MatrixTransform::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->MatrixTransform::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::MatrixTransform::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::MatrixTransform::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::MatrixTransform::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::MatrixTransform::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MatrixTransform::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::MatrixTransform::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::MatrixTransform::base_className() const function, expected prototype:\nconst char * osg::MatrixTransform::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::MatrixTransform::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->MatrixTransform::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::MatrixTransform::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::MatrixTransform::base_libraryName() const function, expected prototype:\nconst char * osg::MatrixTransform::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::MatrixTransform::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->MatrixTransform::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::MatrixTransform::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::MatrixTransform::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::MatrixTransform::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::MatrixTransform::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::MatrixTransform::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MatrixTransform::accept(nv);

		return 0;
	}

	// osg::MatrixTransform * osg::MatrixTransform::base_asMatrixTransform()
	static int _bind_base_asMatrixTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asMatrixTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::MatrixTransform * osg::MatrixTransform::base_asMatrixTransform() function, expected prototype:\nosg::MatrixTransform * osg::MatrixTransform::base_asMatrixTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::MatrixTransform * osg::MatrixTransform::base_asMatrixTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::MatrixTransform * lret = self->MatrixTransform::asMatrixTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixTransform >::push(L,lret,false);

		return 1;
	}

	// const osg::MatrixTransform * osg::MatrixTransform::base_asMatrixTransform() const
	static int _bind_base_asMatrixTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asMatrixTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::MatrixTransform * osg::MatrixTransform::base_asMatrixTransform() const function, expected prototype:\nconst osg::MatrixTransform * osg::MatrixTransform::base_asMatrixTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::MatrixTransform * osg::MatrixTransform::base_asMatrixTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::MatrixTransform * lret = self->MatrixTransform::asMatrixTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::MatrixTransform::base_asMatrixTransform
	static int _bind_base_asMatrixTransform(lua_State *L) {
		if (_lg_typecheck_base_asMatrixTransform_overload_1(L)) return _bind_base_asMatrixTransform_overload_1(L);
		if (_lg_typecheck_base_asMatrixTransform_overload_2(L)) return _bind_base_asMatrixTransform_overload_2(L);

		luaL_error(L, "error in function base_asMatrixTransform, cannot match any of the overloads for function base_asMatrixTransform:\n  base_asMatrixTransform()\n  base_asMatrixTransform()\n");
		return 0;
	}

	// bool osg::MatrixTransform::base_computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const
	static int _bind_base_computeLocalToWorldMatrix(lua_State *L) {
		if (!_lg_typecheck_base_computeLocalToWorldMatrix(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::MatrixTransform::base_computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const function, expected prototype:\nbool osg::MatrixTransform::base_computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::MatrixTransform::base_computeLocalToWorldMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* _arg2=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::MatrixTransform::base_computeLocalToWorldMatrix(osg::Matrixd &, osg::NodeVisitor *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MatrixTransform::computeLocalToWorldMatrix(matrix, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::MatrixTransform::base_computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const
	static int _bind_base_computeWorldToLocalMatrix(lua_State *L) {
		if (!_lg_typecheck_base_computeWorldToLocalMatrix(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::MatrixTransform::base_computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const function, expected prototype:\nbool osg::MatrixTransform::base_computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::MatrixTransform::base_computeWorldToLocalMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* _arg2=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::MatrixTransform* self=Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::MatrixTransform::base_computeWorldToLocalMatrix(osg::Matrixd &, osg::NodeVisitor *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MatrixTransform::computeWorldToLocalMatrix(matrix, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::MatrixTransform* LunaTraits< osg::MatrixTransform >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_MatrixTransform::_bind_ctor(L);
}

void LunaTraits< osg::MatrixTransform >::_bind_dtor(osg::MatrixTransform* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::MatrixTransform >::className[] = "MatrixTransform";
const char LunaTraits< osg::MatrixTransform >::fullName[] = "osg::MatrixTransform";
const char LunaTraits< osg::MatrixTransform >::moduleName[] = "osg";
const char* LunaTraits< osg::MatrixTransform >::parents[] = {"osg.Transform", 0};
const int LunaTraits< osg::MatrixTransform >::hash = 11455287;
const int LunaTraits< osg::MatrixTransform >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::MatrixTransform >::methods[] = {
	{"cloneType", &luna_wrapper_osg_MatrixTransform::_bind_cloneType},
	{"clone", &luna_wrapper_osg_MatrixTransform::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_MatrixTransform::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_MatrixTransform::_bind_className},
	{"libraryName", &luna_wrapper_osg_MatrixTransform::_bind_libraryName},
	{"accept", &luna_wrapper_osg_MatrixTransform::_bind_accept},
	{"asMatrixTransform", &luna_wrapper_osg_MatrixTransform::_bind_asMatrixTransform},
	{"setMatrix", &luna_wrapper_osg_MatrixTransform::_bind_setMatrix},
	{"getMatrix", &luna_wrapper_osg_MatrixTransform::_bind_getMatrix},
	{"preMult", &luna_wrapper_osg_MatrixTransform::_bind_preMult},
	{"postMult", &luna_wrapper_osg_MatrixTransform::_bind_postMult},
	{"getInverseMatrix", &luna_wrapper_osg_MatrixTransform::_bind_getInverseMatrix},
	{"computeLocalToWorldMatrix", &luna_wrapper_osg_MatrixTransform::_bind_computeLocalToWorldMatrix},
	{"computeWorldToLocalMatrix", &luna_wrapper_osg_MatrixTransform::_bind_computeWorldToLocalMatrix},
	{"base_setName", &luna_wrapper_osg_MatrixTransform::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_MatrixTransform::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_MatrixTransform::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_MatrixTransform::_bind_base_getUserData},
	{"base_asCamera", &luna_wrapper_osg_MatrixTransform::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osg_MatrixTransform::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osg_MatrixTransform::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osg_MatrixTransform::_bind_base_ascend},
	{"base_asGroup", &luna_wrapper_osg_MatrixTransform::_bind_base_asGroup},
	{"base_traverse", &luna_wrapper_osg_MatrixTransform::_bind_base_traverse},
	{"base_addChild", &luna_wrapper_osg_MatrixTransform::_bind_base_addChild},
	{"base_insertChild", &luna_wrapper_osg_MatrixTransform::_bind_base_insertChild},
	{"base_removeChildren", &luna_wrapper_osg_MatrixTransform::_bind_base_removeChildren},
	{"base_replaceChild", &luna_wrapper_osg_MatrixTransform::_bind_base_replaceChild},
	{"base_setChild", &luna_wrapper_osg_MatrixTransform::_bind_base_setChild},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_MatrixTransform::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osg_MatrixTransform::_bind_base_releaseGLObjects},
	{"base_asTransform", &luna_wrapper_osg_MatrixTransform::_bind_base_asTransform},
	{"base_asPositionAttitudeTransform", &luna_wrapper_osg_MatrixTransform::_bind_base_asPositionAttitudeTransform},
	{"base_computeBound", &luna_wrapper_osg_MatrixTransform::_bind_base_computeBound},
	{"base_cloneType", &luna_wrapper_osg_MatrixTransform::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_MatrixTransform::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_MatrixTransform::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osg_MatrixTransform::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osg_MatrixTransform::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osg_MatrixTransform::_bind_base_accept},
	{"base_asMatrixTransform", &luna_wrapper_osg_MatrixTransform::_bind_base_asMatrixTransform},
	{"base_computeLocalToWorldMatrix", &luna_wrapper_osg_MatrixTransform::_bind_base_computeLocalToWorldMatrix},
	{"base_computeWorldToLocalMatrix", &luna_wrapper_osg_MatrixTransform::_bind_base_computeWorldToLocalMatrix},
	{"fromVoid", &luna_wrapper_osg_MatrixTransform::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_MatrixTransform::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_MatrixTransform::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::MatrixTransform >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_MatrixTransform::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::MatrixTransform >::enumValues[] = {
	{0,0}
};


