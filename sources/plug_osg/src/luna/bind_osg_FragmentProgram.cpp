#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_FragmentProgram.h>

class luna_wrapper_osg_FragmentProgram {
public:
	typedef Luna< osg::FragmentProgram > luna_t;

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

		osg::FragmentProgram* self= (osg::FragmentProgram*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::FragmentProgram >::push(L,self,false);
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
		//osg::FragmentProgram* ptr= dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		osg::FragmentProgram* ptr= luna_caster< osg::Referenced, osg::FragmentProgram >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::FragmentProgram >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFragmentProgramID(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFragmentProgram_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFragmentProgram_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFragmentProgram(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setProgramLocalParameter(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalParameters(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,83621066) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLocalParameters_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalParameters_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMatrix(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMatrices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,60758143) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMatrices_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMatrices_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_dirtyFragmentProgramObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_compileGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_deleteFragmentProgramObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flushDeletedFragmentProgramObjects(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_discardDeletedFragmentProgramObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
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

	inline static bool _lg_typecheck_base_asTexture_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asTexture_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getMember(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_isTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_checkValidityOfAssociatedModes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_compileGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::FragmentProgram::FragmentProgram()
	static osg::FragmentProgram* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::FragmentProgram::FragmentProgram() function, expected prototype:\nosg::FragmentProgram::FragmentProgram()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::FragmentProgram();
	}

	// osg::FragmentProgram::FragmentProgram(const osg::FragmentProgram & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::FragmentProgram* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::FragmentProgram::FragmentProgram(const osg::FragmentProgram & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::FragmentProgram::FragmentProgram(const osg::FragmentProgram & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::FragmentProgram* vp_ptr=(Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1));
		if( !vp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vp in osg::FragmentProgram::FragmentProgram function");
		}
		const osg::FragmentProgram & vp=*vp_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::FragmentProgram::FragmentProgram function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::FragmentProgram(vp, copyop);
	}

	// osg::FragmentProgram::FragmentProgram(lua_Table * data)
	static osg::FragmentProgram* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::FragmentProgram::FragmentProgram(lua_Table * data) function, expected prototype:\nosg::FragmentProgram::FragmentProgram(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_FragmentProgram(L,NULL);
	}

	// osg::FragmentProgram::FragmentProgram(lua_Table * data, const osg::FragmentProgram & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::FragmentProgram* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::FragmentProgram::FragmentProgram(lua_Table * data, const osg::FragmentProgram & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::FragmentProgram::FragmentProgram(lua_Table * data, const osg::FragmentProgram & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::FragmentProgram* vp_ptr=(Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,2));
		if( !vp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vp in osg::FragmentProgram::FragmentProgram function");
		}
		const osg::FragmentProgram & vp=*vp_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::FragmentProgram::FragmentProgram function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_FragmentProgram(L,NULL, vp, copyop);
	}

	// Overload binder for osg::FragmentProgram::FragmentProgram
	static osg::FragmentProgram* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function FragmentProgram, cannot match any of the overloads for function FragmentProgram:\n  FragmentProgram()\n  FragmentProgram(const osg::FragmentProgram &, const osg::CopyOp &)\n  FragmentProgram(lua_Table *)\n  FragmentProgram(lua_Table *, const osg::FragmentProgram &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::FragmentProgram::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::FragmentProgram::cloneType() const function, expected prototype:\nosg::Object * osg::FragmentProgram::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::FragmentProgram::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::FragmentProgram::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::FragmentProgram::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::FragmentProgram::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FragmentProgram::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::FragmentProgram::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::FragmentProgram::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::FragmentProgram::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::FragmentProgram::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::FragmentProgram::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::FragmentProgram::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::FragmentProgram::libraryName() const function, expected prototype:\nconst char * osg::FragmentProgram::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::FragmentProgram::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::FragmentProgram::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::FragmentProgram::className() const function, expected prototype:\nconst char * osg::FragmentProgram::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::FragmentProgram::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::FragmentProgram::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::FragmentProgram::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::FragmentProgram::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::FragmentProgram::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::FragmentProgram::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::FragmentProgram::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::FragmentProgram::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::FragmentProgram::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::FragmentProgram::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::FragmentProgram::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::FragmentProgram::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::FragmentProgram::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FragmentProgram::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::FragmentProgram::getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int & osg::FragmentProgram::getFragmentProgramID(unsigned int contextID) const
	static int _bind_getFragmentProgramID(lua_State *L) {
		if (!_lg_typecheck_getFragmentProgramID(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int & osg::FragmentProgram::getFragmentProgramID(unsigned int contextID) const function, expected prototype:\nunsigned int & osg::FragmentProgram::getFragmentProgramID(unsigned int contextID) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int & osg::FragmentProgram::getFragmentProgramID(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int & lret = self->getFragmentProgramID(contextID);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::FragmentProgram::setFragmentProgram(const char * program)
	static int _bind_setFragmentProgram_overload_1(lua_State *L) {
		if (!_lg_typecheck_setFragmentProgram_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::setFragmentProgram(const char * program) function, expected prototype:\nvoid osg::FragmentProgram::setFragmentProgram(const char * program)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * program=(const char *)lua_tostring(L,2);

		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::setFragmentProgram(const char *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFragmentProgram(program);

		return 0;
	}

	// void osg::FragmentProgram::setFragmentProgram(const std::string & program)
	static int _bind_setFragmentProgram_overload_2(lua_State *L) {
		if (!_lg_typecheck_setFragmentProgram_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::setFragmentProgram(const std::string & program) function, expected prototype:\nvoid osg::FragmentProgram::setFragmentProgram(const std::string & program)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string program(lua_tostring(L,2),lua_objlen(L,2));

		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::setFragmentProgram(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFragmentProgram(program);

		return 0;
	}

	// Overload binder for osg::FragmentProgram::setFragmentProgram
	static int _bind_setFragmentProgram(lua_State *L) {
		if (_lg_typecheck_setFragmentProgram_overload_1(L)) return _bind_setFragmentProgram_overload_1(L);
		if (_lg_typecheck_setFragmentProgram_overload_2(L)) return _bind_setFragmentProgram_overload_2(L);

		luaL_error(L, "error in function setFragmentProgram, cannot match any of the overloads for function setFragmentProgram:\n  setFragmentProgram(const char *)\n  setFragmentProgram(const std::string &)\n");
		return 0;
	}

	// const std::string & osg::FragmentProgram::getFragmentProgram() const
	static int _bind_getFragmentProgram(lua_State *L) {
		if (!_lg_typecheck_getFragmentProgram(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & osg::FragmentProgram::getFragmentProgram() const function, expected prototype:\nconst std::string & osg::FragmentProgram::getFragmentProgram() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & osg::FragmentProgram::getFragmentProgram() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->getFragmentProgram();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::FragmentProgram::setProgramLocalParameter(const unsigned int index, const osg::Vec4f & p)
	static int _bind_setProgramLocalParameter(lua_State *L) {
		if (!_lg_typecheck_setProgramLocalParameter(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::setProgramLocalParameter(const unsigned int index, const osg::Vec4f & p) function, expected prototype:\nvoid osg::FragmentProgram::setProgramLocalParameter(const unsigned int index, const osg::Vec4f & p)\nClass arguments details:\narg 2 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const unsigned int index=(const unsigned int)lua_tointeger(L,2);
		const osg::Vec4f* p_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in osg::FragmentProgram::setProgramLocalParameter function");
		}
		const osg::Vec4f & p=*p_ptr;

		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::setProgramLocalParameter(const unsigned int, const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setProgramLocalParameter(index, p);

		return 0;
	}

	// void osg::FragmentProgram::setLocalParameters(const osg::FragmentProgram::LocalParamList & lpl)
	static int _bind_setLocalParameters(lua_State *L) {
		if (!_lg_typecheck_setLocalParameters(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::setLocalParameters(const osg::FragmentProgram::LocalParamList & lpl) function, expected prototype:\nvoid osg::FragmentProgram::setLocalParameters(const osg::FragmentProgram::LocalParamList & lpl)\nClass arguments details:\narg 1 ID = 13846292\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::FragmentProgram::LocalParamList* lpl_ptr=(Luna< std::map< unsigned int, osg::Vec4f > >::checkSubType< osg::FragmentProgram::LocalParamList >(L,2));
		if( !lpl_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lpl in osg::FragmentProgram::setLocalParameters function");
		}
		const osg::FragmentProgram::LocalParamList & lpl=*lpl_ptr;

		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::setLocalParameters(const osg::FragmentProgram::LocalParamList &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLocalParameters(lpl);

		return 0;
	}

	// osg::FragmentProgram::LocalParamList & osg::FragmentProgram::getLocalParameters()
	static int _bind_getLocalParameters_overload_1(lua_State *L) {
		if (!_lg_typecheck_getLocalParameters_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::FragmentProgram::LocalParamList & osg::FragmentProgram::getLocalParameters() function, expected prototype:\nosg::FragmentProgram::LocalParamList & osg::FragmentProgram::getLocalParameters()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::FragmentProgram::LocalParamList & osg::FragmentProgram::getLocalParameters(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::FragmentProgram::LocalParamList* lret = &self->getLocalParameters();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FragmentProgram::LocalParamList >::push(L,lret,false);

		return 1;
	}

	// const osg::FragmentProgram::LocalParamList & osg::FragmentProgram::getLocalParameters() const
	static int _bind_getLocalParameters_overload_2(lua_State *L) {
		if (!_lg_typecheck_getLocalParameters_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::FragmentProgram::LocalParamList & osg::FragmentProgram::getLocalParameters() const function, expected prototype:\nconst osg::FragmentProgram::LocalParamList & osg::FragmentProgram::getLocalParameters() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::FragmentProgram::LocalParamList & osg::FragmentProgram::getLocalParameters() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::FragmentProgram::LocalParamList* lret = &self->getLocalParameters();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FragmentProgram::LocalParamList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::FragmentProgram::getLocalParameters
	static int _bind_getLocalParameters(lua_State *L) {
		if (_lg_typecheck_getLocalParameters_overload_1(L)) return _bind_getLocalParameters_overload_1(L);
		if (_lg_typecheck_getLocalParameters_overload_2(L)) return _bind_getLocalParameters_overload_2(L);

		luaL_error(L, "error in function getLocalParameters, cannot match any of the overloads for function getLocalParameters:\n  getLocalParameters()\n  getLocalParameters()\n");
		return 0;
	}

	// void osg::FragmentProgram::setMatrix(const unsigned int mode, const osg::Matrixd & matrix)
	static int _bind_setMatrix(lua_State *L) {
		if (!_lg_typecheck_setMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::setMatrix(const unsigned int mode, const osg::Matrixd & matrix) function, expected prototype:\nvoid osg::FragmentProgram::setMatrix(const unsigned int mode, const osg::Matrixd & matrix)\nClass arguments details:\narg 2 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const unsigned int mode=(const unsigned int)lua_tointeger(L,2);
		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::FragmentProgram::setMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::setMatrix(const unsigned int, const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMatrix(mode, matrix);

		return 0;
	}

	// void osg::FragmentProgram::setMatrices(const osg::FragmentProgram::MatrixList & matrices)
	static int _bind_setMatrices(lua_State *L) {
		if (!_lg_typecheck_setMatrices(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::setMatrices(const osg::FragmentProgram::MatrixList & matrices) function, expected prototype:\nvoid osg::FragmentProgram::setMatrices(const osg::FragmentProgram::MatrixList & matrices)\nClass arguments details:\narg 1 ID = 4745759\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::FragmentProgram::MatrixList* matrices_ptr=(Luna< std::map< unsigned int, osg::Matrixd > >::checkSubType< osg::FragmentProgram::MatrixList >(L,2));
		if( !matrices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrices in osg::FragmentProgram::setMatrices function");
		}
		const osg::FragmentProgram::MatrixList & matrices=*matrices_ptr;

		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::setMatrices(const osg::FragmentProgram::MatrixList &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMatrices(matrices);

		return 0;
	}

	// osg::FragmentProgram::MatrixList & osg::FragmentProgram::getMatrices()
	static int _bind_getMatrices_overload_1(lua_State *L) {
		if (!_lg_typecheck_getMatrices_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::FragmentProgram::MatrixList & osg::FragmentProgram::getMatrices() function, expected prototype:\nosg::FragmentProgram::MatrixList & osg::FragmentProgram::getMatrices()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::FragmentProgram::MatrixList & osg::FragmentProgram::getMatrices(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::FragmentProgram::MatrixList* lret = &self->getMatrices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FragmentProgram::MatrixList >::push(L,lret,false);

		return 1;
	}

	// const osg::FragmentProgram::MatrixList & osg::FragmentProgram::getMatrices() const
	static int _bind_getMatrices_overload_2(lua_State *L) {
		if (!_lg_typecheck_getMatrices_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::FragmentProgram::MatrixList & osg::FragmentProgram::getMatrices() const function, expected prototype:\nconst osg::FragmentProgram::MatrixList & osg::FragmentProgram::getMatrices() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::FragmentProgram::MatrixList & osg::FragmentProgram::getMatrices() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::FragmentProgram::MatrixList* lret = &self->getMatrices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FragmentProgram::MatrixList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::FragmentProgram::getMatrices
	static int _bind_getMatrices(lua_State *L) {
		if (_lg_typecheck_getMatrices_overload_1(L)) return _bind_getMatrices_overload_1(L);
		if (_lg_typecheck_getMatrices_overload_2(L)) return _bind_getMatrices_overload_2(L);

		luaL_error(L, "error in function getMatrices, cannot match any of the overloads for function getMatrices:\n  getMatrices()\n  getMatrices()\n");
		return 0;
	}

	// void osg::FragmentProgram::dirtyFragmentProgramObject()
	static int _bind_dirtyFragmentProgramObject(lua_State *L) {
		if (!_lg_typecheck_dirtyFragmentProgramObject(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::dirtyFragmentProgramObject() function, expected prototype:\nvoid osg::FragmentProgram::dirtyFragmentProgramObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::dirtyFragmentProgramObject(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dirtyFragmentProgramObject();

		return 0;
	}

	// void osg::FragmentProgram::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::FragmentProgram::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FragmentProgram::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::FragmentProgram::compileGLObjects(osg::State & arg1) const
	static int _bind_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::FragmentProgram::compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FragmentProgram::compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->compileGLObjects(_arg1);

		return 0;
	}

	// void osg::FragmentProgram::releaseGLObjects(osg::State * state = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::FragmentProgram::releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseGLObjects(state);

		return 0;
	}

	// static void osg::FragmentProgram::deleteFragmentProgramObject(unsigned int contextID, unsigned int handle)
	static int _bind_deleteFragmentProgramObject(lua_State *L) {
		if (!_lg_typecheck_deleteFragmentProgramObject(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::FragmentProgram::deleteFragmentProgramObject(unsigned int contextID, unsigned int handle) function, expected prototype:\nstatic void osg::FragmentProgram::deleteFragmentProgramObject(unsigned int contextID, unsigned int handle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		unsigned int handle=(unsigned int)lua_tointeger(L,2);

		osg::FragmentProgram::deleteFragmentProgramObject(contextID, handle);

		return 0;
	}

	// static void osg::FragmentProgram::flushDeletedFragmentProgramObjects(unsigned int contextID, double currentTime, double & availableTime)
	static int _bind_flushDeletedFragmentProgramObjects(lua_State *L) {
		if (!_lg_typecheck_flushDeletedFragmentProgramObjects(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::FragmentProgram::flushDeletedFragmentProgramObjects(unsigned int contextID, double currentTime, double & availableTime) function, expected prototype:\nstatic void osg::FragmentProgram::flushDeletedFragmentProgramObjects(unsigned int contextID, double currentTime, double & availableTime)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		double currentTime=(double)lua_tonumber(L,2);
		double availableTime=(double)lua_tonumber(L,3);

		osg::FragmentProgram::flushDeletedFragmentProgramObjects(contextID, currentTime, availableTime);

		lua_pushnumber(L,availableTime);
		return 1;
	}

	// static void osg::FragmentProgram::discardDeletedFragmentProgramObjects(unsigned int contextID)
	static int _bind_discardDeletedFragmentProgramObjects(lua_State *L) {
		if (!_lg_typecheck_discardDeletedFragmentProgramObjects(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::FragmentProgram::discardDeletedFragmentProgramObjects(unsigned int contextID) function, expected prototype:\nstatic void osg::FragmentProgram::discardDeletedFragmentProgramObjects(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::FragmentProgram::discardDeletedFragmentProgramObjects(contextID);

		return 0;
	}

	// static osg::FragmentProgram::Extensions * osg::FragmentProgram::getExtensions(unsigned int contextID, bool createIfNotInitalized)
	static int _bind_getExtensions(lua_State *L) {
		if (!_lg_typecheck_getExtensions(L)) {
			luaL_error(L, "luna typecheck failed in static osg::FragmentProgram::Extensions * osg::FragmentProgram::getExtensions(unsigned int contextID, bool createIfNotInitalized) function, expected prototype:\nstatic osg::FragmentProgram::Extensions * osg::FragmentProgram::getExtensions(unsigned int contextID, bool createIfNotInitalized)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		bool createIfNotInitalized=(bool)(lua_toboolean(L,2)==1);

		osg::FragmentProgram::Extensions * lret = osg::FragmentProgram::getExtensions(contextID, createIfNotInitalized);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FragmentProgram::Extensions >::push(L,lret,false);

		return 1;
	}

	// static void osg::FragmentProgram::setExtensions(unsigned int contextID, osg::FragmentProgram::Extensions * extensions)
	static int _bind_setExtensions(lua_State *L) {
		if (!_lg_typecheck_setExtensions(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::FragmentProgram::setExtensions(unsigned int contextID, osg::FragmentProgram::Extensions * extensions) function, expected prototype:\nstatic void osg::FragmentProgram::setExtensions(unsigned int contextID, osg::FragmentProgram::Extensions * extensions)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		osg::FragmentProgram::Extensions* extensions=(Luna< osg::Referenced >::checkSubType< osg::FragmentProgram::Extensions >(L,2));

		osg::FragmentProgram::setExtensions(contextID, extensions);

		return 0;
	}

	// void osg::FragmentProgram::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::FragmentProgram::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FragmentProgram::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::FragmentProgram::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::base_setName(const std::string & name) function, expected prototype:\nvoid osg::FragmentProgram::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FragmentProgram::setName(name);

		return 0;
	}

	// void osg::FragmentProgram::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::base_computeDataVariance() function, expected prototype:\nvoid osg::FragmentProgram::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FragmentProgram::computeDataVariance();

		return 0;
	}

	// void osg::FragmentProgram::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::FragmentProgram::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FragmentProgram::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::FragmentProgram::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::FragmentProgram::base_getUserData() function, expected prototype:\nosg::Referenced * osg::FragmentProgram::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::FragmentProgram::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->FragmentProgram::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::FragmentProgram::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::FragmentProgram::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::FragmentProgram::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::FragmentProgram::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->FragmentProgram::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::FragmentProgram::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::FragmentProgram::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::FragmentProgram::base_asTexture() function, expected prototype:\nosg::Texture * osg::FragmentProgram::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::FragmentProgram::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->FragmentProgram::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::FragmentProgram::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::FragmentProgram::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::FragmentProgram::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::FragmentProgram::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->FragmentProgram::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::FragmentProgram::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::FragmentProgram::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::FragmentProgram::base_getMember() const function, expected prototype:\nunsigned int osg::FragmentProgram::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::FragmentProgram::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->FragmentProgram::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::FragmentProgram::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::FragmentProgram::base_isTextureAttribute() const function, expected prototype:\nbool osg::FragmentProgram::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::FragmentProgram::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FragmentProgram::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::FragmentProgram::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::FragmentProgram::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::FragmentProgram::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FragmentProgram::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::FragmentProgram::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FragmentProgram::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Object * osg::FragmentProgram::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::FragmentProgram::base_cloneType() const function, expected prototype:\nosg::Object * osg::FragmentProgram::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::FragmentProgram::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->FragmentProgram::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::FragmentProgram::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::FragmentProgram::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::FragmentProgram::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FragmentProgram::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::FragmentProgram::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->FragmentProgram::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::FragmentProgram::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::FragmentProgram::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::FragmentProgram::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::FragmentProgram::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FragmentProgram::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::FragmentProgram::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::FragmentProgram::base_libraryName() const function, expected prototype:\nconst char * osg::FragmentProgram::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::FragmentProgram::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->FragmentProgram::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::FragmentProgram::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::FragmentProgram::base_className() const function, expected prototype:\nconst char * osg::FragmentProgram::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::FragmentProgram::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->FragmentProgram::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::FragmentProgram::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::FragmentProgram::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::FragmentProgram::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::FragmentProgram::base_getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->FragmentProgram::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::FragmentProgram::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::FragmentProgram::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::FragmentProgram::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::FragmentProgram::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::FragmentProgram::base_compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->FragmentProgram::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::FragmentProgram::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::FragmentProgram::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::FragmentProgram::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FragmentProgram::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::FragmentProgram::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FragmentProgram::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::FragmentProgram::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::FragmentProgram::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FragmentProgram::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FragmentProgram::apply(_arg1);

		return 0;
	}

	// void osg::FragmentProgram::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::FragmentProgram::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FragmentProgram::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FragmentProgram::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::FragmentProgram::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::FragmentProgram::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::FragmentProgram* self=Luna< osg::Referenced >::checkSubType< osg::FragmentProgram >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FragmentProgram::releaseGLObjects(state);

		return 0;
	}


	// Operator binds:

};

osg::FragmentProgram* LunaTraits< osg::FragmentProgram >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_FragmentProgram::_bind_ctor(L);
}

void LunaTraits< osg::FragmentProgram >::_bind_dtor(osg::FragmentProgram* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::FragmentProgram >::className[] = "FragmentProgram";
const char LunaTraits< osg::FragmentProgram >::fullName[] = "osg::FragmentProgram";
const char LunaTraits< osg::FragmentProgram >::moduleName[] = "osg";
const char* LunaTraits< osg::FragmentProgram >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::FragmentProgram >::hash = 34007291;
const int LunaTraits< osg::FragmentProgram >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::FragmentProgram >::methods[] = {
	{"cloneType", &luna_wrapper_osg_FragmentProgram::_bind_cloneType},
	{"clone", &luna_wrapper_osg_FragmentProgram::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_FragmentProgram::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_FragmentProgram::_bind_libraryName},
	{"className", &luna_wrapper_osg_FragmentProgram::_bind_className},
	{"getType", &luna_wrapper_osg_FragmentProgram::_bind_getType},
	{"compare", &luna_wrapper_osg_FragmentProgram::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_FragmentProgram::_bind_getModeUsage},
	{"getFragmentProgramID", &luna_wrapper_osg_FragmentProgram::_bind_getFragmentProgramID},
	{"setFragmentProgram", &luna_wrapper_osg_FragmentProgram::_bind_setFragmentProgram},
	{"getFragmentProgram", &luna_wrapper_osg_FragmentProgram::_bind_getFragmentProgram},
	{"setProgramLocalParameter", &luna_wrapper_osg_FragmentProgram::_bind_setProgramLocalParameter},
	{"setLocalParameters", &luna_wrapper_osg_FragmentProgram::_bind_setLocalParameters},
	{"getLocalParameters", &luna_wrapper_osg_FragmentProgram::_bind_getLocalParameters},
	{"setMatrix", &luna_wrapper_osg_FragmentProgram::_bind_setMatrix},
	{"setMatrices", &luna_wrapper_osg_FragmentProgram::_bind_setMatrices},
	{"getMatrices", &luna_wrapper_osg_FragmentProgram::_bind_getMatrices},
	{"dirtyFragmentProgramObject", &luna_wrapper_osg_FragmentProgram::_bind_dirtyFragmentProgramObject},
	{"apply", &luna_wrapper_osg_FragmentProgram::_bind_apply},
	{"compileGLObjects", &luna_wrapper_osg_FragmentProgram::_bind_compileGLObjects},
	{"releaseGLObjects", &luna_wrapper_osg_FragmentProgram::_bind_releaseGLObjects},
	{"deleteFragmentProgramObject", &luna_wrapper_osg_FragmentProgram::_bind_deleteFragmentProgramObject},
	{"flushDeletedFragmentProgramObjects", &luna_wrapper_osg_FragmentProgram::_bind_flushDeletedFragmentProgramObjects},
	{"discardDeletedFragmentProgramObjects", &luna_wrapper_osg_FragmentProgram::_bind_discardDeletedFragmentProgramObjects},
	{"getExtensions", &luna_wrapper_osg_FragmentProgram::_bind_getExtensions},
	{"setExtensions", &luna_wrapper_osg_FragmentProgram::_bind_setExtensions},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_FragmentProgram::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_FragmentProgram::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_FragmentProgram::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_FragmentProgram::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_FragmentProgram::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_FragmentProgram::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_FragmentProgram::_bind_base_getMember},
	{"base_isTextureAttribute", &luna_wrapper_osg_FragmentProgram::_bind_base_isTextureAttribute},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_FragmentProgram::_bind_base_checkValidityOfAssociatedModes},
	{"base_cloneType", &luna_wrapper_osg_FragmentProgram::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_FragmentProgram::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_FragmentProgram::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_FragmentProgram::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_FragmentProgram::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_FragmentProgram::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_FragmentProgram::_bind_base_compare},
	{"base_getModeUsage", &luna_wrapper_osg_FragmentProgram::_bind_base_getModeUsage},
	{"base_apply", &luna_wrapper_osg_FragmentProgram::_bind_base_apply},
	{"base_compileGLObjects", &luna_wrapper_osg_FragmentProgram::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_FragmentProgram::_bind_base_releaseGLObjects},
	{"fromVoid", &luna_wrapper_osg_FragmentProgram::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_FragmentProgram::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_FragmentProgram::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::FragmentProgram >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_FragmentProgram::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::FragmentProgram >::enumValues[] = {
	{0,0}
};


