#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_PositionAttitudeTransform.h>

class luna_wrapper_osg_PositionAttitudeTransform {
public:
	typedef Luna< osg::PositionAttitudeTransform > luna_t;

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

		osg::PositionAttitudeTransform* self= (osg::PositionAttitudeTransform*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::PositionAttitudeTransform >::push(L,self,false);
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
		//osg::PositionAttitudeTransform* ptr= dynamic_cast< osg::PositionAttitudeTransform* >(Luna< osg::Referenced >::check(L,1));
		osg::PositionAttitudeTransform* ptr= luna_caster< osg::Referenced, osg::PositionAttitudeTransform >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::PositionAttitudeTransform >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_asPositionAttitudeTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asPositionAttitudeTransform_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_setAttitude(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAttitude(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScale(lua_State *L) {
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

	inline static bool _lg_typecheck_base_asPositionAttitudeTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asPositionAttitudeTransform_overload_2(lua_State *L) {
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
	// osg::PositionAttitudeTransform::PositionAttitudeTransform()
	static osg::PositionAttitudeTransform* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::PositionAttitudeTransform::PositionAttitudeTransform() function, expected prototype:\nosg::PositionAttitudeTransform::PositionAttitudeTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::PositionAttitudeTransform();
	}

	// osg::PositionAttitudeTransform::PositionAttitudeTransform(const osg::PositionAttitudeTransform & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::PositionAttitudeTransform* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::PositionAttitudeTransform::PositionAttitudeTransform(const osg::PositionAttitudeTransform & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::PositionAttitudeTransform::PositionAttitudeTransform(const osg::PositionAttitudeTransform & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::PositionAttitudeTransform* pat_ptr=(Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1));
		if( !pat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pat in osg::PositionAttitudeTransform::PositionAttitudeTransform function");
		}
		const osg::PositionAttitudeTransform & pat=*pat_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PositionAttitudeTransform::PositionAttitudeTransform function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::PositionAttitudeTransform(pat, copyop);
	}

	// osg::PositionAttitudeTransform::PositionAttitudeTransform(lua_Table * data)
	static osg::PositionAttitudeTransform* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::PositionAttitudeTransform::PositionAttitudeTransform(lua_Table * data) function, expected prototype:\nosg::PositionAttitudeTransform::PositionAttitudeTransform(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_PositionAttitudeTransform(L,NULL);
	}

	// osg::PositionAttitudeTransform::PositionAttitudeTransform(lua_Table * data, const osg::PositionAttitudeTransform & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::PositionAttitudeTransform* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::PositionAttitudeTransform::PositionAttitudeTransform(lua_Table * data, const osg::PositionAttitudeTransform & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::PositionAttitudeTransform::PositionAttitudeTransform(lua_Table * data, const osg::PositionAttitudeTransform & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::PositionAttitudeTransform* pat_ptr=(Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,2));
		if( !pat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pat in osg::PositionAttitudeTransform::PositionAttitudeTransform function");
		}
		const osg::PositionAttitudeTransform & pat=*pat_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PositionAttitudeTransform::PositionAttitudeTransform function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_PositionAttitudeTransform(L,NULL, pat, copyop);
	}

	// Overload binder for osg::PositionAttitudeTransform::PositionAttitudeTransform
	static osg::PositionAttitudeTransform* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function PositionAttitudeTransform, cannot match any of the overloads for function PositionAttitudeTransform:\n  PositionAttitudeTransform()\n  PositionAttitudeTransform(const osg::PositionAttitudeTransform &, const osg::CopyOp &)\n  PositionAttitudeTransform(lua_Table *)\n  PositionAttitudeTransform(lua_Table *, const osg::PositionAttitudeTransform &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::PositionAttitudeTransform::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PositionAttitudeTransform::cloneType() const function, expected prototype:\nosg::Object * osg::PositionAttitudeTransform::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::PositionAttitudeTransform::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::PositionAttitudeTransform::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PositionAttitudeTransform::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::PositionAttitudeTransform::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PositionAttitudeTransform::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::PositionAttitudeTransform::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::PositionAttitudeTransform::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PositionAttitudeTransform::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::PositionAttitudeTransform::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PositionAttitudeTransform::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::PositionAttitudeTransform::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::PositionAttitudeTransform::className() const function, expected prototype:\nconst char * osg::PositionAttitudeTransform::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::PositionAttitudeTransform::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::PositionAttitudeTransform::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::PositionAttitudeTransform::libraryName() const function, expected prototype:\nconst char * osg::PositionAttitudeTransform::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::PositionAttitudeTransform::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::PositionAttitudeTransform::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PositionAttitudeTransform::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::PositionAttitudeTransform::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::PositionAttitudeTransform::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PositionAttitudeTransform::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// osg::PositionAttitudeTransform * osg::PositionAttitudeTransform::asPositionAttitudeTransform()
	static int _bind_asPositionAttitudeTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_asPositionAttitudeTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::PositionAttitudeTransform * osg::PositionAttitudeTransform::asPositionAttitudeTransform() function, expected prototype:\nosg::PositionAttitudeTransform * osg::PositionAttitudeTransform::asPositionAttitudeTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::PositionAttitudeTransform * osg::PositionAttitudeTransform::asPositionAttitudeTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::PositionAttitudeTransform * lret = self->asPositionAttitudeTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PositionAttitudeTransform >::push(L,lret,false);

		return 1;
	}

	// const osg::PositionAttitudeTransform * osg::PositionAttitudeTransform::asPositionAttitudeTransform() const
	static int _bind_asPositionAttitudeTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_asPositionAttitudeTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::PositionAttitudeTransform * osg::PositionAttitudeTransform::asPositionAttitudeTransform() const function, expected prototype:\nconst osg::PositionAttitudeTransform * osg::PositionAttitudeTransform::asPositionAttitudeTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::PositionAttitudeTransform * osg::PositionAttitudeTransform::asPositionAttitudeTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::PositionAttitudeTransform * lret = self->asPositionAttitudeTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PositionAttitudeTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PositionAttitudeTransform::asPositionAttitudeTransform
	static int _bind_asPositionAttitudeTransform(lua_State *L) {
		if (_lg_typecheck_asPositionAttitudeTransform_overload_1(L)) return _bind_asPositionAttitudeTransform_overload_1(L);
		if (_lg_typecheck_asPositionAttitudeTransform_overload_2(L)) return _bind_asPositionAttitudeTransform_overload_2(L);

		luaL_error(L, "error in function asPositionAttitudeTransform, cannot match any of the overloads for function asPositionAttitudeTransform:\n  asPositionAttitudeTransform()\n  asPositionAttitudeTransform()\n");
		return 0;
	}

	// void osg::PositionAttitudeTransform::setPosition(const osg::Vec3d & pos)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PositionAttitudeTransform::setPosition(const osg::Vec3d & pos) function, expected prototype:\nvoid osg::PositionAttitudeTransform::setPosition(const osg::Vec3d & pos)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* pos_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in osg::PositionAttitudeTransform::setPosition function");
		}
		const osg::Vec3d & pos=*pos_ptr;

		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PositionAttitudeTransform::setPosition(const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPosition(pos);

		return 0;
	}

	// const osg::Vec3d & osg::PositionAttitudeTransform::getPosition() const
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3d & osg::PositionAttitudeTransform::getPosition() const function, expected prototype:\nconst osg::Vec3d & osg::PositionAttitudeTransform::getPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3d & osg::PositionAttitudeTransform::getPosition() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3d* lret = &self->getPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// void osg::PositionAttitudeTransform::setAttitude(const osg::Quat & quat)
	static int _bind_setAttitude(lua_State *L) {
		if (!_lg_typecheck_setAttitude(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PositionAttitudeTransform::setAttitude(const osg::Quat & quat) function, expected prototype:\nvoid osg::PositionAttitudeTransform::setAttitude(const osg::Quat & quat)\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* quat_ptr=(Luna< osg::Quat >::check(L,2));
		if( !quat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg quat in osg::PositionAttitudeTransform::setAttitude function");
		}
		const osg::Quat & quat=*quat_ptr;

		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PositionAttitudeTransform::setAttitude(const osg::Quat &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAttitude(quat);

		return 0;
	}

	// const osg::Quat & osg::PositionAttitudeTransform::getAttitude() const
	static int _bind_getAttitude(lua_State *L) {
		if (!_lg_typecheck_getAttitude(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Quat & osg::PositionAttitudeTransform::getAttitude() const function, expected prototype:\nconst osg::Quat & osg::PositionAttitudeTransform::getAttitude() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Quat & osg::PositionAttitudeTransform::getAttitude() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Quat* lret = &self->getAttitude();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,false);

		return 1;
	}

	// void osg::PositionAttitudeTransform::setScale(const osg::Vec3d & scale)
	static int _bind_setScale(lua_State *L) {
		if (!_lg_typecheck_setScale(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PositionAttitudeTransform::setScale(const osg::Vec3d & scale) function, expected prototype:\nvoid osg::PositionAttitudeTransform::setScale(const osg::Vec3d & scale)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* scale_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !scale_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scale in osg::PositionAttitudeTransform::setScale function");
		}
		const osg::Vec3d & scale=*scale_ptr;

		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PositionAttitudeTransform::setScale(const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setScale(scale);

		return 0;
	}

	// const osg::Vec3d & osg::PositionAttitudeTransform::getScale() const
	static int _bind_getScale(lua_State *L) {
		if (!_lg_typecheck_getScale(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3d & osg::PositionAttitudeTransform::getScale() const function, expected prototype:\nconst osg::Vec3d & osg::PositionAttitudeTransform::getScale() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3d & osg::PositionAttitudeTransform::getScale() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3d* lret = &self->getScale();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// void osg::PositionAttitudeTransform::setPivotPoint(const osg::Vec3d & pivot)
	static int _bind_setPivotPoint(lua_State *L) {
		if (!_lg_typecheck_setPivotPoint(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PositionAttitudeTransform::setPivotPoint(const osg::Vec3d & pivot) function, expected prototype:\nvoid osg::PositionAttitudeTransform::setPivotPoint(const osg::Vec3d & pivot)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* pivot_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !pivot_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivot in osg::PositionAttitudeTransform::setPivotPoint function");
		}
		const osg::Vec3d & pivot=*pivot_ptr;

		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PositionAttitudeTransform::setPivotPoint(const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPivotPoint(pivot);

		return 0;
	}

	// const osg::Vec3d & osg::PositionAttitudeTransform::getPivotPoint() const
	static int _bind_getPivotPoint(lua_State *L) {
		if (!_lg_typecheck_getPivotPoint(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3d & osg::PositionAttitudeTransform::getPivotPoint() const function, expected prototype:\nconst osg::Vec3d & osg::PositionAttitudeTransform::getPivotPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3d & osg::PositionAttitudeTransform::getPivotPoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3d* lret = &self->getPivotPoint();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// bool osg::PositionAttitudeTransform::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const
	static int _bind_computeLocalToWorldMatrix(lua_State *L) {
		if (!_lg_typecheck_computeLocalToWorldMatrix(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PositionAttitudeTransform::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const function, expected prototype:\nbool osg::PositionAttitudeTransform::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::PositionAttitudeTransform::computeLocalToWorldMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PositionAttitudeTransform::computeLocalToWorldMatrix(osg::Matrixd &, osg::NodeVisitor *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->computeLocalToWorldMatrix(matrix, nv);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::PositionAttitudeTransform::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const
	static int _bind_computeWorldToLocalMatrix(lua_State *L) {
		if (!_lg_typecheck_computeWorldToLocalMatrix(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PositionAttitudeTransform::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const function, expected prototype:\nbool osg::PositionAttitudeTransform::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::PositionAttitudeTransform::computeWorldToLocalMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PositionAttitudeTransform::computeWorldToLocalMatrix(osg::Matrixd &, osg::NodeVisitor *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->computeWorldToLocalMatrix(matrix, nv);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::PositionAttitudeTransform::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PositionAttitudeTransform::base_setName(const std::string & name) function, expected prototype:\nvoid osg::PositionAttitudeTransform::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PositionAttitudeTransform::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PositionAttitudeTransform::setName(name);

		return 0;
	}

	// void osg::PositionAttitudeTransform::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PositionAttitudeTransform::base_computeDataVariance() function, expected prototype:\nvoid osg::PositionAttitudeTransform::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PositionAttitudeTransform::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PositionAttitudeTransform::computeDataVariance();

		return 0;
	}

	// void osg::PositionAttitudeTransform::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PositionAttitudeTransform::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::PositionAttitudeTransform::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PositionAttitudeTransform::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PositionAttitudeTransform::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::PositionAttitudeTransform::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::PositionAttitudeTransform::base_getUserData() function, expected prototype:\nosg::Referenced * osg::PositionAttitudeTransform::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::PositionAttitudeTransform::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->PositionAttitudeTransform::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::PositionAttitudeTransform::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::PositionAttitudeTransform::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::PositionAttitudeTransform::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::PositionAttitudeTransform::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->PositionAttitudeTransform::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PositionAttitudeTransform::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Camera * osg::PositionAttitudeTransform::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osg::PositionAttitudeTransform::base_asCamera() function, expected prototype:\nosg::Camera * osg::PositionAttitudeTransform::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osg::PositionAttitudeTransform::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->PositionAttitudeTransform::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osg::PositionAttitudeTransform::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osg::PositionAttitudeTransform::base_asCamera() const function, expected prototype:\nconst osg::Camera * osg::PositionAttitudeTransform::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osg::PositionAttitudeTransform::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->PositionAttitudeTransform::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PositionAttitudeTransform::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osg::PositionAttitudeTransform::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osg::PositionAttitudeTransform::base_asSwitch() function, expected prototype:\nosg::Switch * osg::PositionAttitudeTransform::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osg::PositionAttitudeTransform::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->PositionAttitudeTransform::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osg::PositionAttitudeTransform::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osg::PositionAttitudeTransform::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osg::PositionAttitudeTransform::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osg::PositionAttitudeTransform::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->PositionAttitudeTransform::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PositionAttitudeTransform::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osg::PositionAttitudeTransform::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osg::PositionAttitudeTransform::base_asGeode() function, expected prototype:\nosg::Geode * osg::PositionAttitudeTransform::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osg::PositionAttitudeTransform::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->PositionAttitudeTransform::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osg::PositionAttitudeTransform::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osg::PositionAttitudeTransform::base_asGeode() const function, expected prototype:\nconst osg::Geode * osg::PositionAttitudeTransform::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osg::PositionAttitudeTransform::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->PositionAttitudeTransform::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PositionAttitudeTransform::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osg::PositionAttitudeTransform::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PositionAttitudeTransform::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::PositionAttitudeTransform::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::PositionAttitudeTransform::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PositionAttitudeTransform::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PositionAttitudeTransform::ascend(nv);

		return 0;
	}

	// osg::Group * osg::PositionAttitudeTransform::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osg::PositionAttitudeTransform::base_asGroup() function, expected prototype:\nosg::Group * osg::PositionAttitudeTransform::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osg::PositionAttitudeTransform::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->PositionAttitudeTransform::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osg::PositionAttitudeTransform::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osg::PositionAttitudeTransform::base_asGroup() const function, expected prototype:\nconst osg::Group * osg::PositionAttitudeTransform::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osg::PositionAttitudeTransform::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->PositionAttitudeTransform::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PositionAttitudeTransform::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// void osg::PositionAttitudeTransform::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PositionAttitudeTransform::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::PositionAttitudeTransform::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PositionAttitudeTransform::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PositionAttitudeTransform::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PositionAttitudeTransform::traverse(_arg1);

		return 0;
	}

	// bool osg::PositionAttitudeTransform::base_addChild(osg::Node * child)
	static int _bind_base_addChild(lua_State *L) {
		if (!_lg_typecheck_base_addChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PositionAttitudeTransform::base_addChild(osg::Node * child) function, expected prototype:\nbool osg::PositionAttitudeTransform::base_addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PositionAttitudeTransform::base_addChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PositionAttitudeTransform::addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::PositionAttitudeTransform::base_insertChild(unsigned int index, osg::Node * child)
	static int _bind_base_insertChild(lua_State *L) {
		if (!_lg_typecheck_base_insertChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PositionAttitudeTransform::base_insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osg::PositionAttitudeTransform::base_insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PositionAttitudeTransform::base_insertChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PositionAttitudeTransform::insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::PositionAttitudeTransform::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_base_removeChildren(lua_State *L) {
		if (!_lg_typecheck_base_removeChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PositionAttitudeTransform::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osg::PositionAttitudeTransform::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PositionAttitudeTransform::base_removeChildren(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PositionAttitudeTransform::removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::PositionAttitudeTransform::base_replaceChild(osg::Node * origChild, osg::Node * newChild)
	static int _bind_base_replaceChild(lua_State *L) {
		if (!_lg_typecheck_base_replaceChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PositionAttitudeTransform::base_replaceChild(osg::Node * origChild, osg::Node * newChild) function, expected prototype:\nbool osg::PositionAttitudeTransform::base_replaceChild(osg::Node * origChild, osg::Node * newChild)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* origChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::Node* newChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PositionAttitudeTransform::base_replaceChild(osg::Node *, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PositionAttitudeTransform::replaceChild(origChild, newChild);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::PositionAttitudeTransform::base_setChild(unsigned int i, osg::Node * node)
	static int _bind_base_setChild(lua_State *L) {
		if (!_lg_typecheck_base_setChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PositionAttitudeTransform::base_setChild(unsigned int i, osg::Node * node) function, expected prototype:\nbool osg::PositionAttitudeTransform::base_setChild(unsigned int i, osg::Node * node)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PositionAttitudeTransform::base_setChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PositionAttitudeTransform::setChild(i, node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::PositionAttitudeTransform::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PositionAttitudeTransform::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::PositionAttitudeTransform::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PositionAttitudeTransform::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PositionAttitudeTransform::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::PositionAttitudeTransform::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PositionAttitudeTransform::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::PositionAttitudeTransform::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PositionAttitudeTransform::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PositionAttitudeTransform::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Transform * osg::PositionAttitudeTransform::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osg::PositionAttitudeTransform::base_asTransform() function, expected prototype:\nosg::Transform * osg::PositionAttitudeTransform::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osg::PositionAttitudeTransform::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->PositionAttitudeTransform::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osg::PositionAttitudeTransform::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osg::PositionAttitudeTransform::base_asTransform() const function, expected prototype:\nconst osg::Transform * osg::PositionAttitudeTransform::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osg::PositionAttitudeTransform::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->PositionAttitudeTransform::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PositionAttitudeTransform::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::MatrixTransform * osg::PositionAttitudeTransform::base_asMatrixTransform()
	static int _bind_base_asMatrixTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asMatrixTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::MatrixTransform * osg::PositionAttitudeTransform::base_asMatrixTransform() function, expected prototype:\nosg::MatrixTransform * osg::PositionAttitudeTransform::base_asMatrixTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::MatrixTransform * osg::PositionAttitudeTransform::base_asMatrixTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::MatrixTransform * lret = self->PositionAttitudeTransform::asMatrixTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixTransform >::push(L,lret,false);

		return 1;
	}

	// const osg::MatrixTransform * osg::PositionAttitudeTransform::base_asMatrixTransform() const
	static int _bind_base_asMatrixTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asMatrixTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::MatrixTransform * osg::PositionAttitudeTransform::base_asMatrixTransform() const function, expected prototype:\nconst osg::MatrixTransform * osg::PositionAttitudeTransform::base_asMatrixTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::MatrixTransform * osg::PositionAttitudeTransform::base_asMatrixTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::MatrixTransform * lret = self->PositionAttitudeTransform::asMatrixTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PositionAttitudeTransform::base_asMatrixTransform
	static int _bind_base_asMatrixTransform(lua_State *L) {
		if (_lg_typecheck_base_asMatrixTransform_overload_1(L)) return _bind_base_asMatrixTransform_overload_1(L);
		if (_lg_typecheck_base_asMatrixTransform_overload_2(L)) return _bind_base_asMatrixTransform_overload_2(L);

		luaL_error(L, "error in function base_asMatrixTransform, cannot match any of the overloads for function base_asMatrixTransform:\n  base_asMatrixTransform()\n  base_asMatrixTransform()\n");
		return 0;
	}

	// osg::BoundingSphered osg::PositionAttitudeTransform::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::PositionAttitudeTransform::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osg::PositionAttitudeTransform::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::PositionAttitudeTransform::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->PositionAttitudeTransform::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// osg::Object * osg::PositionAttitudeTransform::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PositionAttitudeTransform::base_cloneType() const function, expected prototype:\nosg::Object * osg::PositionAttitudeTransform::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::PositionAttitudeTransform::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->PositionAttitudeTransform::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::PositionAttitudeTransform::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PositionAttitudeTransform::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::PositionAttitudeTransform::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PositionAttitudeTransform::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::PositionAttitudeTransform::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->PositionAttitudeTransform::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::PositionAttitudeTransform::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PositionAttitudeTransform::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::PositionAttitudeTransform::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PositionAttitudeTransform::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PositionAttitudeTransform::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::PositionAttitudeTransform::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::PositionAttitudeTransform::base_className() const function, expected prototype:\nconst char * osg::PositionAttitudeTransform::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::PositionAttitudeTransform::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->PositionAttitudeTransform::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::PositionAttitudeTransform::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::PositionAttitudeTransform::base_libraryName() const function, expected prototype:\nconst char * osg::PositionAttitudeTransform::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::PositionAttitudeTransform::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->PositionAttitudeTransform::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::PositionAttitudeTransform::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PositionAttitudeTransform::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::PositionAttitudeTransform::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::PositionAttitudeTransform::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PositionAttitudeTransform::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PositionAttitudeTransform::accept(nv);

		return 0;
	}

	// osg::PositionAttitudeTransform * osg::PositionAttitudeTransform::base_asPositionAttitudeTransform()
	static int _bind_base_asPositionAttitudeTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asPositionAttitudeTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::PositionAttitudeTransform * osg::PositionAttitudeTransform::base_asPositionAttitudeTransform() function, expected prototype:\nosg::PositionAttitudeTransform * osg::PositionAttitudeTransform::base_asPositionAttitudeTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::PositionAttitudeTransform * osg::PositionAttitudeTransform::base_asPositionAttitudeTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::PositionAttitudeTransform * lret = self->PositionAttitudeTransform::asPositionAttitudeTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PositionAttitudeTransform >::push(L,lret,false);

		return 1;
	}

	// const osg::PositionAttitudeTransform * osg::PositionAttitudeTransform::base_asPositionAttitudeTransform() const
	static int _bind_base_asPositionAttitudeTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asPositionAttitudeTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::PositionAttitudeTransform * osg::PositionAttitudeTransform::base_asPositionAttitudeTransform() const function, expected prototype:\nconst osg::PositionAttitudeTransform * osg::PositionAttitudeTransform::base_asPositionAttitudeTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::PositionAttitudeTransform * osg::PositionAttitudeTransform::base_asPositionAttitudeTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::PositionAttitudeTransform * lret = self->PositionAttitudeTransform::asPositionAttitudeTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PositionAttitudeTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PositionAttitudeTransform::base_asPositionAttitudeTransform
	static int _bind_base_asPositionAttitudeTransform(lua_State *L) {
		if (_lg_typecheck_base_asPositionAttitudeTransform_overload_1(L)) return _bind_base_asPositionAttitudeTransform_overload_1(L);
		if (_lg_typecheck_base_asPositionAttitudeTransform_overload_2(L)) return _bind_base_asPositionAttitudeTransform_overload_2(L);

		luaL_error(L, "error in function base_asPositionAttitudeTransform, cannot match any of the overloads for function base_asPositionAttitudeTransform:\n  base_asPositionAttitudeTransform()\n  base_asPositionAttitudeTransform()\n");
		return 0;
	}

	// bool osg::PositionAttitudeTransform::base_computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const
	static int _bind_base_computeLocalToWorldMatrix(lua_State *L) {
		if (!_lg_typecheck_base_computeLocalToWorldMatrix(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PositionAttitudeTransform::base_computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const function, expected prototype:\nbool osg::PositionAttitudeTransform::base_computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::PositionAttitudeTransform::base_computeLocalToWorldMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PositionAttitudeTransform::base_computeLocalToWorldMatrix(osg::Matrixd &, osg::NodeVisitor *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PositionAttitudeTransform::computeLocalToWorldMatrix(matrix, nv);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::PositionAttitudeTransform::base_computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const
	static int _bind_base_computeWorldToLocalMatrix(lua_State *L) {
		if (!_lg_typecheck_base_computeWorldToLocalMatrix(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PositionAttitudeTransform::base_computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const function, expected prototype:\nbool osg::PositionAttitudeTransform::base_computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::PositionAttitudeTransform::base_computeWorldToLocalMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::PositionAttitudeTransform* self=Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PositionAttitudeTransform::base_computeWorldToLocalMatrix(osg::Matrixd &, osg::NodeVisitor *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PositionAttitudeTransform::computeWorldToLocalMatrix(matrix, nv);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::PositionAttitudeTransform* LunaTraits< osg::PositionAttitudeTransform >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_PositionAttitudeTransform::_bind_ctor(L);
}

void LunaTraits< osg::PositionAttitudeTransform >::_bind_dtor(osg::PositionAttitudeTransform* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::PositionAttitudeTransform >::className[] = "PositionAttitudeTransform";
const char LunaTraits< osg::PositionAttitudeTransform >::fullName[] = "osg::PositionAttitudeTransform";
const char LunaTraits< osg::PositionAttitudeTransform >::moduleName[] = "osg";
const char* LunaTraits< osg::PositionAttitudeTransform >::parents[] = {"osg.Transform", 0};
const int LunaTraits< osg::PositionAttitudeTransform >::hash = 82150324;
const int LunaTraits< osg::PositionAttitudeTransform >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::PositionAttitudeTransform >::methods[] = {
	{"cloneType", &luna_wrapper_osg_PositionAttitudeTransform::_bind_cloneType},
	{"clone", &luna_wrapper_osg_PositionAttitudeTransform::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_PositionAttitudeTransform::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_PositionAttitudeTransform::_bind_className},
	{"libraryName", &luna_wrapper_osg_PositionAttitudeTransform::_bind_libraryName},
	{"accept", &luna_wrapper_osg_PositionAttitudeTransform::_bind_accept},
	{"asPositionAttitudeTransform", &luna_wrapper_osg_PositionAttitudeTransform::_bind_asPositionAttitudeTransform},
	{"setPosition", &luna_wrapper_osg_PositionAttitudeTransform::_bind_setPosition},
	{"getPosition", &luna_wrapper_osg_PositionAttitudeTransform::_bind_getPosition},
	{"setAttitude", &luna_wrapper_osg_PositionAttitudeTransform::_bind_setAttitude},
	{"getAttitude", &luna_wrapper_osg_PositionAttitudeTransform::_bind_getAttitude},
	{"setScale", &luna_wrapper_osg_PositionAttitudeTransform::_bind_setScale},
	{"getScale", &luna_wrapper_osg_PositionAttitudeTransform::_bind_getScale},
	{"setPivotPoint", &luna_wrapper_osg_PositionAttitudeTransform::_bind_setPivotPoint},
	{"getPivotPoint", &luna_wrapper_osg_PositionAttitudeTransform::_bind_getPivotPoint},
	{"computeLocalToWorldMatrix", &luna_wrapper_osg_PositionAttitudeTransform::_bind_computeLocalToWorldMatrix},
	{"computeWorldToLocalMatrix", &luna_wrapper_osg_PositionAttitudeTransform::_bind_computeWorldToLocalMatrix},
	{"base_setName", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_getUserData},
	{"base_asCamera", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_ascend},
	{"base_asGroup", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_asGroup},
	{"base_traverse", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_traverse},
	{"base_addChild", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_addChild},
	{"base_insertChild", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_insertChild},
	{"base_removeChildren", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_removeChildren},
	{"base_replaceChild", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_replaceChild},
	{"base_setChild", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_setChild},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_releaseGLObjects},
	{"base_asTransform", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_asTransform},
	{"base_asMatrixTransform", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_asMatrixTransform},
	{"base_computeBound", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_computeBound},
	{"base_cloneType", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_accept},
	{"base_asPositionAttitudeTransform", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_asPositionAttitudeTransform},
	{"base_computeLocalToWorldMatrix", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_computeLocalToWorldMatrix},
	{"base_computeWorldToLocalMatrix", &luna_wrapper_osg_PositionAttitudeTransform::_bind_base_computeWorldToLocalMatrix},
	{"fromVoid", &luna_wrapper_osg_PositionAttitudeTransform::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_PositionAttitudeTransform::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_PositionAttitudeTransform::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::PositionAttitudeTransform >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_PositionAttitudeTransform::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::PositionAttitudeTransform >::enumValues[] = {
	{0,0}
};


