#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Program.h>

class luna_wrapper_osg_Program {
public:
	typedef Luna< osg::Program > luna_t;

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

		osg::Program* self= (osg::Program*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Program >::push(L,self,false);
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
		//osg::Program* ptr= dynamic_cast< osg::Program* >(Luna< osg::Referenced >::check(L,1));
		osg::Program* ptr= luna_caster< osg::Referenced, osg::Program >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Program >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Program >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Program >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_dirtyProgram(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addShader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumShaders(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getShader_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getShader_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeShader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setParameter(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParameter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setParameterfv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParameterfv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setComputeGroups(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getComputeGroups(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addBindAttribLocation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeBindAttribLocation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addBindFragDataLocation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeBindFragDataLocation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addBindUniformBlock(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeBindUniformBlock(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setProgramBinary(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getProgramBinary_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProgramBinary_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAttribBindingList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFragDataBindingList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUniformBlockBindingList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isFixedFunction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGlProgramInfoLog(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getActiveUniforms(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getActiveAttribs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPCP(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_deleteGlProgram(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flushDeletedGlPrograms(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_discardDeletedGlPrograms(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
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

	inline static bool _lg_typecheck_base_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
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

	inline static bool _lg_typecheck_base_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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
	// osg::Program::Program()
	static osg::Program* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Program::Program() function, expected prototype:\nosg::Program::Program()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Program();
	}

	// osg::Program::Program(const osg::Program & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Program* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Program::Program(const osg::Program & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Program::Program(const osg::Program & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Program* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Program >(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Program::Program function");
		}
		const osg::Program & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Program::Program function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::Program(rhs, copyop);
	}

	// osg::Program::Program(lua_Table * data)
	static osg::Program* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Program::Program(lua_Table * data) function, expected prototype:\nosg::Program::Program(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Program(L,NULL);
	}

	// osg::Program::Program(lua_Table * data, const osg::Program & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Program* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Program::Program(lua_Table * data, const osg::Program & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Program::Program(lua_Table * data, const osg::Program & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Program* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Program >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Program::Program function");
		}
		const osg::Program & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Program::Program function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Program(L,NULL, rhs, copyop);
	}

	// Overload binder for osg::Program::Program
	static osg::Program* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Program, cannot match any of the overloads for function Program:\n  Program()\n  Program(const osg::Program &, const osg::CopyOp &)\n  Program(lua_Table *)\n  Program(lua_Table *, const osg::Program &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Program::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Program::cloneType() const function, expected prototype:\nosg::Object * osg::Program::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Program::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Program::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Program::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Program::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Program::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Program::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Program::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Program::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Program::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Program::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Program::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Program::libraryName() const function, expected prototype:\nconst char * osg::Program::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Program::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Program::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Program::className() const function, expected prototype:\nconst char * osg::Program::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Program::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Program::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Program::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Program::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Program::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Program::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Program::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::Program::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::Program::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Program::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Program::apply(osg::State & state) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::apply(osg::State & state) const function, expected prototype:\nvoid osg::Program::apply(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Program::apply function");
		}
		osg::State & state=*state_ptr;

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(state);

		return 0;
	}

	// void osg::Program::setThreadSafeRefUnref(bool threadSafe)
	static int _bind_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Program::setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Program::compileGLObjects(osg::State & state) const
	static int _bind_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::compileGLObjects(osg::State & state) const function, expected prototype:\nvoid osg::Program::compileGLObjects(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Program::compileGLObjects function");
		}
		osg::State & state=*state_ptr;

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->compileGLObjects(state);

		return 0;
	}

	// void osg::Program::releaseGLObjects(osg::State * state = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::Program::releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseGLObjects(state);

		return 0;
	}

	// void osg::Program::dirtyProgram()
	static int _bind_dirtyProgram(lua_State *L) {
		if (!_lg_typecheck_dirtyProgram(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::dirtyProgram() function, expected prototype:\nvoid osg::Program::dirtyProgram()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::dirtyProgram(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dirtyProgram();

		return 0;
	}

	// bool osg::Program::addShader(osg::Shader * shader)
	static int _bind_addShader(lua_State *L) {
		if (!_lg_typecheck_addShader(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Program::addShader(osg::Shader * shader) function, expected prototype:\nbool osg::Program::addShader(osg::Shader * shader)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Shader* shader=(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,2));

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Program::addShader(osg::Shader *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addShader(shader);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::Program::getNumShaders() const
	static int _bind_getNumShaders(lua_State *L) {
		if (!_lg_typecheck_getNumShaders(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Program::getNumShaders() const function, expected prototype:\nunsigned int osg::Program::getNumShaders() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Program::getNumShaders() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumShaders();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Shader * osg::Program::getShader(unsigned int i)
	static int _bind_getShader_overload_1(lua_State *L) {
		if (!_lg_typecheck_getShader_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Shader * osg::Program::getShader(unsigned int i) function, expected prototype:\nosg::Shader * osg::Program::getShader(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Shader * osg::Program::getShader(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Shader * lret = self->getShader(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shader >::push(L,lret,false);

		return 1;
	}

	// const osg::Shader * osg::Program::getShader(unsigned int i) const
	static int _bind_getShader_overload_2(lua_State *L) {
		if (!_lg_typecheck_getShader_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Shader * osg::Program::getShader(unsigned int i) const function, expected prototype:\nconst osg::Shader * osg::Program::getShader(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Shader * osg::Program::getShader(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Shader * lret = self->getShader(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shader >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Program::getShader
	static int _bind_getShader(lua_State *L) {
		if (_lg_typecheck_getShader_overload_1(L)) return _bind_getShader_overload_1(L);
		if (_lg_typecheck_getShader_overload_2(L)) return _bind_getShader_overload_2(L);

		luaL_error(L, "error in function getShader, cannot match any of the overloads for function getShader:\n  getShader(unsigned int)\n  getShader(unsigned int)\n");
		return 0;
	}

	// bool osg::Program::removeShader(osg::Shader * shader)
	static int _bind_removeShader(lua_State *L) {
		if (!_lg_typecheck_removeShader(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Program::removeShader(osg::Shader * shader) function, expected prototype:\nbool osg::Program::removeShader(osg::Shader * shader)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Shader* shader=(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,2));

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Program::removeShader(osg::Shader *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->removeShader(shader);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Program::setParameter(unsigned int pname, int value)
	static int _bind_setParameter(lua_State *L) {
		if (!_lg_typecheck_setParameter(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::setParameter(unsigned int pname, int value) function, expected prototype:\nvoid osg::Program::setParameter(unsigned int pname, int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pname=(unsigned int)lua_tointeger(L,2);
		int value=(int)lua_tointeger(L,3);

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::setParameter(unsigned int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setParameter(pname, value);

		return 0;
	}

	// int osg::Program::getParameter(unsigned int pname) const
	static int _bind_getParameter(lua_State *L) {
		if (!_lg_typecheck_getParameter(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Program::getParameter(unsigned int pname) const function, expected prototype:\nint osg::Program::getParameter(unsigned int pname) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pname=(unsigned int)lua_tointeger(L,2);

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Program::getParameter(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getParameter(pname);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Program::setParameterfv(unsigned int pname, const float * value)
	static int _bind_setParameterfv(lua_State *L) {
		if (!_lg_typecheck_setParameterfv(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::setParameterfv(unsigned int pname, const float * value) function, expected prototype:\nvoid osg::Program::setParameterfv(unsigned int pname, const float * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pname=(unsigned int)lua_tointeger(L,2);
		const float* value=(const float*)Luna< void >::check(L,3);

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::setParameterfv(unsigned int, const float *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setParameterfv(pname, value);

		return 0;
	}

	// const float * osg::Program::getParameterfv(unsigned int pname) const
	static int _bind_getParameterfv(lua_State *L) {
		if (!_lg_typecheck_getParameterfv(L)) {
			luaL_error(L, "luna typecheck failed in const float * osg::Program::getParameterfv(unsigned int pname) const function, expected prototype:\nconst float * osg::Program::getParameterfv(unsigned int pname) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pname=(unsigned int)lua_tointeger(L,2);

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const float * osg::Program::getParameterfv(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const float * lret = self->getParameterfv(pname);
		lua_pushnumber(L,*lret);

		return 1;
	}

	// void osg::Program::setComputeGroups(int numGroupsX, int numGroupsY, int numGroupsZ)
	static int _bind_setComputeGroups(lua_State *L) {
		if (!_lg_typecheck_setComputeGroups(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::setComputeGroups(int numGroupsX, int numGroupsY, int numGroupsZ) function, expected prototype:\nvoid osg::Program::setComputeGroups(int numGroupsX, int numGroupsY, int numGroupsZ)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int numGroupsX=(int)lua_tointeger(L,2);
		int numGroupsY=(int)lua_tointeger(L,3);
		int numGroupsZ=(int)lua_tointeger(L,4);

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::setComputeGroups(int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setComputeGroups(numGroupsX, numGroupsY, numGroupsZ);

		return 0;
	}

	// void osg::Program::getComputeGroups(int & numGroupsX, int & numGroupsY, int & numGroupsZ) const
	static int _bind_getComputeGroups(lua_State *L) {
		if (!_lg_typecheck_getComputeGroups(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::getComputeGroups(int & numGroupsX, int & numGroupsY, int & numGroupsZ) const function, expected prototype:\nvoid osg::Program::getComputeGroups(int & numGroupsX, int & numGroupsY, int & numGroupsZ) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int numGroupsX=(int)lua_tointeger(L,2);
		int numGroupsY=(int)lua_tointeger(L,3);
		int numGroupsZ=(int)lua_tointeger(L,4);

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::getComputeGroups(int &, int &, int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getComputeGroups(numGroupsX, numGroupsY, numGroupsZ);

		lua_pushnumber(L,numGroupsX);
		lua_pushnumber(L,numGroupsY);
		lua_pushnumber(L,numGroupsZ);
		return 3;
	}

	// void osg::Program::addBindAttribLocation(const std::string & name, unsigned int index)
	static int _bind_addBindAttribLocation(lua_State *L) {
		if (!_lg_typecheck_addBindAttribLocation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::addBindAttribLocation(const std::string & name, unsigned int index) function, expected prototype:\nvoid osg::Program::addBindAttribLocation(const std::string & name, unsigned int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int index=(unsigned int)lua_tointeger(L,3);

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::addBindAttribLocation(const std::string &, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addBindAttribLocation(name, index);

		return 0;
	}

	// void osg::Program::removeBindAttribLocation(const std::string & name)
	static int _bind_removeBindAttribLocation(lua_State *L) {
		if (!_lg_typecheck_removeBindAttribLocation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::removeBindAttribLocation(const std::string & name) function, expected prototype:\nvoid osg::Program::removeBindAttribLocation(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::removeBindAttribLocation(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeBindAttribLocation(name);

		return 0;
	}

	// void osg::Program::addBindFragDataLocation(const std::string & name, unsigned int index)
	static int _bind_addBindFragDataLocation(lua_State *L) {
		if (!_lg_typecheck_addBindFragDataLocation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::addBindFragDataLocation(const std::string & name, unsigned int index) function, expected prototype:\nvoid osg::Program::addBindFragDataLocation(const std::string & name, unsigned int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int index=(unsigned int)lua_tointeger(L,3);

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::addBindFragDataLocation(const std::string &, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addBindFragDataLocation(name, index);

		return 0;
	}

	// void osg::Program::removeBindFragDataLocation(const std::string & name)
	static int _bind_removeBindFragDataLocation(lua_State *L) {
		if (!_lg_typecheck_removeBindFragDataLocation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::removeBindFragDataLocation(const std::string & name) function, expected prototype:\nvoid osg::Program::removeBindFragDataLocation(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::removeBindFragDataLocation(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeBindFragDataLocation(name);

		return 0;
	}

	// void osg::Program::addBindUniformBlock(const std::string & name, unsigned int index)
	static int _bind_addBindUniformBlock(lua_State *L) {
		if (!_lg_typecheck_addBindUniformBlock(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::addBindUniformBlock(const std::string & name, unsigned int index) function, expected prototype:\nvoid osg::Program::addBindUniformBlock(const std::string & name, unsigned int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int index=(unsigned int)lua_tointeger(L,3);

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::addBindUniformBlock(const std::string &, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addBindUniformBlock(name, index);

		return 0;
	}

	// void osg::Program::removeBindUniformBlock(const std::string & name)
	static int _bind_removeBindUniformBlock(lua_State *L) {
		if (!_lg_typecheck_removeBindUniformBlock(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::removeBindUniformBlock(const std::string & name) function, expected prototype:\nvoid osg::Program::removeBindUniformBlock(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::removeBindUniformBlock(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeBindUniformBlock(name);

		return 0;
	}

	// void osg::Program::setProgramBinary(osg::Program::ProgramBinary * programBinary)
	static int _bind_setProgramBinary(lua_State *L) {
		if (!_lg_typecheck_setProgramBinary(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::setProgramBinary(osg::Program::ProgramBinary * programBinary) function, expected prototype:\nvoid osg::Program::setProgramBinary(osg::Program::ProgramBinary * programBinary)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Program::ProgramBinary* programBinary=(Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,2));

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::setProgramBinary(osg::Program::ProgramBinary *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setProgramBinary(programBinary);

		return 0;
	}

	// osg::Program::ProgramBinary * osg::Program::getProgramBinary()
	static int _bind_getProgramBinary_overload_1(lua_State *L) {
		if (!_lg_typecheck_getProgramBinary_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Program::ProgramBinary * osg::Program::getProgramBinary() function, expected prototype:\nosg::Program::ProgramBinary * osg::Program::getProgramBinary()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Program::ProgramBinary * osg::Program::getProgramBinary(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Program::ProgramBinary * lret = self->getProgramBinary();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Program::ProgramBinary >::push(L,lret,false);

		return 1;
	}

	// const osg::Program::ProgramBinary * osg::Program::getProgramBinary() const
	static int _bind_getProgramBinary_overload_2(lua_State *L) {
		if (!_lg_typecheck_getProgramBinary_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Program::ProgramBinary * osg::Program::getProgramBinary() const function, expected prototype:\nconst osg::Program::ProgramBinary * osg::Program::getProgramBinary() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Program::ProgramBinary * osg::Program::getProgramBinary() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Program::ProgramBinary * lret = self->getProgramBinary();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Program::ProgramBinary >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Program::getProgramBinary
	static int _bind_getProgramBinary(lua_State *L) {
		if (_lg_typecheck_getProgramBinary_overload_1(L)) return _bind_getProgramBinary_overload_1(L);
		if (_lg_typecheck_getProgramBinary_overload_2(L)) return _bind_getProgramBinary_overload_2(L);

		luaL_error(L, "error in function getProgramBinary, cannot match any of the overloads for function getProgramBinary:\n  getProgramBinary()\n  getProgramBinary()\n");
		return 0;
	}

	// const osg::Program::AttribBindingList & osg::Program::getAttribBindingList() const
	static int _bind_getAttribBindingList(lua_State *L) {
		if (!_lg_typecheck_getAttribBindingList(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Program::AttribBindingList & osg::Program::getAttribBindingList() const function, expected prototype:\nconst osg::Program::AttribBindingList & osg::Program::getAttribBindingList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Program::AttribBindingList & osg::Program::getAttribBindingList() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Program::AttribBindingList* lret = &self->getAttribBindingList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Program::AttribBindingList >::push(L,lret,false);

		return 1;
	}

	// const osg::Program::FragDataBindingList & osg::Program::getFragDataBindingList() const
	static int _bind_getFragDataBindingList(lua_State *L) {
		if (!_lg_typecheck_getFragDataBindingList(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Program::FragDataBindingList & osg::Program::getFragDataBindingList() const function, expected prototype:\nconst osg::Program::FragDataBindingList & osg::Program::getFragDataBindingList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Program::FragDataBindingList & osg::Program::getFragDataBindingList() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Program::FragDataBindingList* lret = &self->getFragDataBindingList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Program::FragDataBindingList >::push(L,lret,false);

		return 1;
	}

	// const osg::Program::UniformBlockBindingList & osg::Program::getUniformBlockBindingList() const
	static int _bind_getUniformBlockBindingList(lua_State *L) {
		if (!_lg_typecheck_getUniformBlockBindingList(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Program::UniformBlockBindingList & osg::Program::getUniformBlockBindingList() const function, expected prototype:\nconst osg::Program::UniformBlockBindingList & osg::Program::getUniformBlockBindingList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Program::UniformBlockBindingList & osg::Program::getUniformBlockBindingList() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Program::UniformBlockBindingList* lret = &self->getUniformBlockBindingList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Program::UniformBlockBindingList >::push(L,lret,false);

		return 1;
	}

	// bool osg::Program::isFixedFunction() const
	static int _bind_isFixedFunction(lua_State *L) {
		if (!_lg_typecheck_isFixedFunction(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Program::isFixedFunction() const function, expected prototype:\nbool osg::Program::isFixedFunction() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Program::isFixedFunction() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isFixedFunction();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Program::getGlProgramInfoLog(unsigned int contextID, std::string & log) const
	static int _bind_getGlProgramInfoLog(lua_State *L) {
		if (!_lg_typecheck_getGlProgramInfoLog(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Program::getGlProgramInfoLog(unsigned int contextID, std::string & log) const function, expected prototype:\nbool osg::Program::getGlProgramInfoLog(unsigned int contextID, std::string & log) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);
		std::string log(lua_tostring(L,3),lua_objlen(L,3));

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Program::getGlProgramInfoLog(unsigned int, std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getGlProgramInfoLog(contextID, log);
		lua_pushboolean(L,lret?1:0);

		lua_pushlstring(L,log.data(),log.size());
		return 2;
	}

	// const osg::Program::ActiveUniformMap & osg::Program::getActiveUniforms(unsigned int contextID) const
	static int _bind_getActiveUniforms(lua_State *L) {
		if (!_lg_typecheck_getActiveUniforms(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Program::ActiveUniformMap & osg::Program::getActiveUniforms(unsigned int contextID) const function, expected prototype:\nconst osg::Program::ActiveUniformMap & osg::Program::getActiveUniforms(unsigned int contextID) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Program::ActiveUniformMap & osg::Program::getActiveUniforms(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Program::ActiveUniformMap* lret = &self->getActiveUniforms(contextID);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Program::ActiveUniformMap >::push(L,lret,false);

		return 1;
	}

	// const osg::Program::ActiveVarInfoMap & osg::Program::getActiveAttribs(unsigned int contextID) const
	static int _bind_getActiveAttribs(lua_State *L) {
		if (!_lg_typecheck_getActiveAttribs(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Program::ActiveVarInfoMap & osg::Program::getActiveAttribs(unsigned int contextID) const function, expected prototype:\nconst osg::Program::ActiveVarInfoMap & osg::Program::getActiveAttribs(unsigned int contextID) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Program::ActiveVarInfoMap & osg::Program::getActiveAttribs(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Program::ActiveVarInfoMap* lret = &self->getActiveAttribs(contextID);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Program::ActiveVarInfoMap >::push(L,lret,false);

		return 1;
	}

	// osg::Program::PerContextProgram * osg::Program::getPCP(unsigned int contextID) const
	static int _bind_getPCP(lua_State *L) {
		if (!_lg_typecheck_getPCP(L)) {
			luaL_error(L, "luna typecheck failed in osg::Program::PerContextProgram * osg::Program::getPCP(unsigned int contextID) const function, expected prototype:\nosg::Program::PerContextProgram * osg::Program::getPCP(unsigned int contextID) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Program::PerContextProgram * osg::Program::getPCP(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Program::PerContextProgram * lret = self->getPCP(contextID);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Program::PerContextProgram >::push(L,lret,false);

		return 1;
	}

	// static void osg::Program::deleteGlProgram(unsigned int contextID, unsigned int program)
	static int _bind_deleteGlProgram(lua_State *L) {
		if (!_lg_typecheck_deleteGlProgram(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::Program::deleteGlProgram(unsigned int contextID, unsigned int program) function, expected prototype:\nstatic void osg::Program::deleteGlProgram(unsigned int contextID, unsigned int program)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		unsigned int program=(unsigned int)lua_tointeger(L,2);

		osg::Program::deleteGlProgram(contextID, program);

		return 0;
	}

	// static void osg::Program::flushDeletedGlPrograms(unsigned int contextID, double currentTime, double & availableTime)
	static int _bind_flushDeletedGlPrograms(lua_State *L) {
		if (!_lg_typecheck_flushDeletedGlPrograms(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::Program::flushDeletedGlPrograms(unsigned int contextID, double currentTime, double & availableTime) function, expected prototype:\nstatic void osg::Program::flushDeletedGlPrograms(unsigned int contextID, double currentTime, double & availableTime)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		double currentTime=(double)lua_tonumber(L,2);
		double availableTime=(double)lua_tonumber(L,3);

		osg::Program::flushDeletedGlPrograms(contextID, currentTime, availableTime);

		lua_pushnumber(L,availableTime);
		return 1;
	}

	// static void osg::Program::discardDeletedGlPrograms(unsigned int contextID)
	static int _bind_discardDeletedGlPrograms(lua_State *L) {
		if (!_lg_typecheck_discardDeletedGlPrograms(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::Program::discardDeletedGlPrograms(unsigned int contextID) function, expected prototype:\nstatic void osg::Program::discardDeletedGlPrograms(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::Program::discardDeletedGlPrograms(contextID);

		return 0;
	}

	// void osg::Program::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Program::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Program::setName(name);

		return 0;
	}

	// void osg::Program::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::base_computeDataVariance() function, expected prototype:\nvoid osg::Program::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Program::computeDataVariance();

		return 0;
	}

	// void osg::Program::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Program::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Program::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Program::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Program::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Program::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Program::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Program::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Program::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Program::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Program::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Program::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Program::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Program::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::Program::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::Program::base_asTexture() function, expected prototype:\nosg::Texture * osg::Program::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::Program::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->Program::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::Program::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::Program::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::Program::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::Program::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->Program::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Program::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::Program::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Program::base_getMember() const function, expected prototype:\nunsigned int osg::Program::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Program::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Program::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Program::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Program::base_isTextureAttribute() const function, expected prototype:\nbool osg::Program::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Program::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Program::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Program::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Program::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::Program::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Program::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Program::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Program::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Program::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Program::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::Program::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Program::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Program::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Program::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Object * osg::Program::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Program::base_cloneType() const function, expected prototype:\nosg::Object * osg::Program::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Program::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Program::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Program::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Program::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Program::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Program::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Program::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Program::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Program::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Program::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Program::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Program::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Program::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Program::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Program::base_libraryName() const function, expected prototype:\nconst char * osg::Program::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Program::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Program::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Program::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Program::base_className() const function, expected prototype:\nconst char * osg::Program::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Program::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Program::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Program::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Program::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Program::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Program::base_getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->Program::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Program::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Program::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::Program::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::Program::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Program::base_compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Program::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Program::base_apply(osg::State & state) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::base_apply(osg::State & state) const function, expected prototype:\nvoid osg::Program::base_apply(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Program::base_apply function");
		}
		osg::State & state=*state_ptr;

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Program::apply(state);

		return 0;
	}

	// void osg::Program::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Program::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Program::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Program::base_compileGLObjects(osg::State & state) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::base_compileGLObjects(osg::State & state) const function, expected prototype:\nvoid osg::Program::base_compileGLObjects(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Program::base_compileGLObjects function");
		}
		osg::State & state=*state_ptr;

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Program::compileGLObjects(state);

		return 0;
	}

	// void osg::Program::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::Program::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Program* self=Luna< osg::Referenced >::checkSubType< osg::Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Program::releaseGLObjects(state);

		return 0;
	}


	// Operator binds:

};

osg::Program* LunaTraits< osg::Program >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Program::_bind_ctor(L);
}

void LunaTraits< osg::Program >::_bind_dtor(osg::Program* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Program >::className[] = "Program";
const char LunaTraits< osg::Program >::fullName[] = "osg::Program";
const char LunaTraits< osg::Program >::moduleName[] = "osg";
const char* LunaTraits< osg::Program >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::Program >::hash = 63172746;
const int LunaTraits< osg::Program >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Program >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Program::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Program::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Program::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Program::_bind_libraryName},
	{"className", &luna_wrapper_osg_Program::_bind_className},
	{"getType", &luna_wrapper_osg_Program::_bind_getType},
	{"compare", &luna_wrapper_osg_Program::_bind_compare},
	{"apply", &luna_wrapper_osg_Program::_bind_apply},
	{"setThreadSafeRefUnref", &luna_wrapper_osg_Program::_bind_setThreadSafeRefUnref},
	{"compileGLObjects", &luna_wrapper_osg_Program::_bind_compileGLObjects},
	{"releaseGLObjects", &luna_wrapper_osg_Program::_bind_releaseGLObjects},
	{"dirtyProgram", &luna_wrapper_osg_Program::_bind_dirtyProgram},
	{"addShader", &luna_wrapper_osg_Program::_bind_addShader},
	{"getNumShaders", &luna_wrapper_osg_Program::_bind_getNumShaders},
	{"getShader", &luna_wrapper_osg_Program::_bind_getShader},
	{"removeShader", &luna_wrapper_osg_Program::_bind_removeShader},
	{"setParameter", &luna_wrapper_osg_Program::_bind_setParameter},
	{"getParameter", &luna_wrapper_osg_Program::_bind_getParameter},
	{"setParameterfv", &luna_wrapper_osg_Program::_bind_setParameterfv},
	{"getParameterfv", &luna_wrapper_osg_Program::_bind_getParameterfv},
	{"setComputeGroups", &luna_wrapper_osg_Program::_bind_setComputeGroups},
	{"getComputeGroups", &luna_wrapper_osg_Program::_bind_getComputeGroups},
	{"addBindAttribLocation", &luna_wrapper_osg_Program::_bind_addBindAttribLocation},
	{"removeBindAttribLocation", &luna_wrapper_osg_Program::_bind_removeBindAttribLocation},
	{"addBindFragDataLocation", &luna_wrapper_osg_Program::_bind_addBindFragDataLocation},
	{"removeBindFragDataLocation", &luna_wrapper_osg_Program::_bind_removeBindFragDataLocation},
	{"addBindUniformBlock", &luna_wrapper_osg_Program::_bind_addBindUniformBlock},
	{"removeBindUniformBlock", &luna_wrapper_osg_Program::_bind_removeBindUniformBlock},
	{"setProgramBinary", &luna_wrapper_osg_Program::_bind_setProgramBinary},
	{"getProgramBinary", &luna_wrapper_osg_Program::_bind_getProgramBinary},
	{"getAttribBindingList", &luna_wrapper_osg_Program::_bind_getAttribBindingList},
	{"getFragDataBindingList", &luna_wrapper_osg_Program::_bind_getFragDataBindingList},
	{"getUniformBlockBindingList", &luna_wrapper_osg_Program::_bind_getUniformBlockBindingList},
	{"isFixedFunction", &luna_wrapper_osg_Program::_bind_isFixedFunction},
	{"getGlProgramInfoLog", &luna_wrapper_osg_Program::_bind_getGlProgramInfoLog},
	{"getActiveUniforms", &luna_wrapper_osg_Program::_bind_getActiveUniforms},
	{"getActiveAttribs", &luna_wrapper_osg_Program::_bind_getActiveAttribs},
	{"getPCP", &luna_wrapper_osg_Program::_bind_getPCP},
	{"deleteGlProgram", &luna_wrapper_osg_Program::_bind_deleteGlProgram},
	{"flushDeletedGlPrograms", &luna_wrapper_osg_Program::_bind_flushDeletedGlPrograms},
	{"discardDeletedGlPrograms", &luna_wrapper_osg_Program::_bind_discardDeletedGlPrograms},
	{"base_setName", &luna_wrapper_osg_Program::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Program::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Program::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Program::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_Program::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_Program::_bind_base_getMember},
	{"base_isTextureAttribute", &luna_wrapper_osg_Program::_bind_base_isTextureAttribute},
	{"base_getModeUsage", &luna_wrapper_osg_Program::_bind_base_getModeUsage},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_Program::_bind_base_checkValidityOfAssociatedModes},
	{"base_cloneType", &luna_wrapper_osg_Program::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Program::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Program::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Program::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Program::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_Program::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_Program::_bind_base_compare},
	{"base_apply", &luna_wrapper_osg_Program::_bind_base_apply},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Program::_bind_base_setThreadSafeRefUnref},
	{"base_compileGLObjects", &luna_wrapper_osg_Program::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_Program::_bind_base_releaseGLObjects},
	{"fromVoid", &luna_wrapper_osg_Program::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Program::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Program::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Program >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Program::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Program >::enumValues[] = {
	{0,0}
};


