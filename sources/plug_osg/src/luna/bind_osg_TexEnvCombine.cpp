#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_TexEnvCombine.h>

class luna_wrapper_osg_TexEnvCombine {
public:
	typedef Luna< osg::TexEnvCombine > luna_t;

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

		osg::TexEnvCombine* self= (osg::TexEnvCombine*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::TexEnvCombine >::push(L,self,false);
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
		//osg::TexEnvCombine* ptr= dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		osg::TexEnvCombine* ptr= luna_caster< osg::Referenced, osg::TexEnvCombine >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TexEnvCombine >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_isTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCombine_RGB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCombine_Alpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCombine_RGB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCombine_Alpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSource0_RGB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSource1_RGB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSource2_RGB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSource0_Alpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSource1_Alpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSource2_Alpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSource0_RGB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSource1_RGB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSource2_RGB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSource0_Alpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSource1_Alpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSource2_Alpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOperand0_RGB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOperand1_RGB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOperand2_RGB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOperand0_Alpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOperand1_Alpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOperand2_Alpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOperand0_RGB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOperand1_RGB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOperand2_RGB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOperand0_Alpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOperand1_Alpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOperand2_Alpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setScale_RGB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScale_Alpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScale_RGB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScale_Alpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setConstantColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getConstantColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setConstantColorAsLightDirection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getConstantColorAsLightDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_isTextureAttribute(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::TexEnvCombine::TexEnvCombine()
	static osg::TexEnvCombine* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::TexEnvCombine::TexEnvCombine() function, expected prototype:\nosg::TexEnvCombine::TexEnvCombine()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::TexEnvCombine();
	}

	// osg::TexEnvCombine::TexEnvCombine(const osg::TexEnvCombine & texenv, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TexEnvCombine* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::TexEnvCombine::TexEnvCombine(const osg::TexEnvCombine & texenv, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TexEnvCombine::TexEnvCombine(const osg::TexEnvCombine & texenv, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::TexEnvCombine* texenv_ptr=(Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1));
		if( !texenv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texenv in osg::TexEnvCombine::TexEnvCombine function");
		}
		const osg::TexEnvCombine & texenv=*texenv_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TexEnvCombine::TexEnvCombine function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::TexEnvCombine(texenv, copyop);
	}

	// osg::TexEnvCombine::TexEnvCombine(lua_Table * data)
	static osg::TexEnvCombine* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::TexEnvCombine::TexEnvCombine(lua_Table * data) function, expected prototype:\nosg::TexEnvCombine::TexEnvCombine(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_TexEnvCombine(L,NULL);
	}

	// osg::TexEnvCombine::TexEnvCombine(lua_Table * data, const osg::TexEnvCombine & texenv, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TexEnvCombine* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::TexEnvCombine::TexEnvCombine(lua_Table * data, const osg::TexEnvCombine & texenv, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TexEnvCombine::TexEnvCombine(lua_Table * data, const osg::TexEnvCombine & texenv, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::TexEnvCombine* texenv_ptr=(Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,2));
		if( !texenv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texenv in osg::TexEnvCombine::TexEnvCombine function");
		}
		const osg::TexEnvCombine & texenv=*texenv_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TexEnvCombine::TexEnvCombine function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_TexEnvCombine(L,NULL, texenv, copyop);
	}

	// Overload binder for osg::TexEnvCombine::TexEnvCombine
	static osg::TexEnvCombine* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function TexEnvCombine, cannot match any of the overloads for function TexEnvCombine:\n  TexEnvCombine()\n  TexEnvCombine(const osg::TexEnvCombine &, const osg::CopyOp &)\n  TexEnvCombine(lua_Table *)\n  TexEnvCombine(lua_Table *, const osg::TexEnvCombine &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::TexEnvCombine::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TexEnvCombine::cloneType() const function, expected prototype:\nosg::Object * osg::TexEnvCombine::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TexEnvCombine::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TexEnvCombine::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TexEnvCombine::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::TexEnvCombine::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TexEnvCombine::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TexEnvCombine::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TexEnvCombine::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TexEnvCombine::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TexEnvCombine::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TexEnvCombine::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TexEnvCombine::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TexEnvCombine::libraryName() const function, expected prototype:\nconst char * osg::TexEnvCombine::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TexEnvCombine::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TexEnvCombine::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TexEnvCombine::className() const function, expected prototype:\nconst char * osg::TexEnvCombine::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TexEnvCombine::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::TexEnvCombine::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::TexEnvCombine::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::TexEnvCombine::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::TexEnvCombine::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::TexEnvCombine::isTextureAttribute() const
	static int _bind_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TexEnvCombine::isTextureAttribute() const function, expected prototype:\nbool osg::TexEnvCombine::isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TexEnvCombine::isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int osg::TexEnvCombine::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::TexEnvCombine::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::TexEnvCombine::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TexEnvCombine::setCombine_RGB(int cm)
	static int _bind_setCombine_RGB(lua_State *L) {
		if (!_lg_typecheck_setCombine_RGB(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setCombine_RGB(int cm) function, expected prototype:\nvoid osg::TexEnvCombine::setCombine_RGB(int cm)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int cm=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setCombine_RGB(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCombine_RGB(cm);

		return 0;
	}

	// void osg::TexEnvCombine::setCombine_Alpha(int cm)
	static int _bind_setCombine_Alpha(lua_State *L) {
		if (!_lg_typecheck_setCombine_Alpha(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setCombine_Alpha(int cm) function, expected prototype:\nvoid osg::TexEnvCombine::setCombine_Alpha(int cm)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int cm=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setCombine_Alpha(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCombine_Alpha(cm);

		return 0;
	}

	// int osg::TexEnvCombine::getCombine_RGB() const
	static int _bind_getCombine_RGB(lua_State *L) {
		if (!_lg_typecheck_getCombine_RGB(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getCombine_RGB() const function, expected prototype:\nint osg::TexEnvCombine::getCombine_RGB() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getCombine_RGB() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getCombine_RGB();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TexEnvCombine::getCombine_Alpha() const
	static int _bind_getCombine_Alpha(lua_State *L) {
		if (!_lg_typecheck_getCombine_Alpha(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getCombine_Alpha() const function, expected prototype:\nint osg::TexEnvCombine::getCombine_Alpha() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getCombine_Alpha() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getCombine_Alpha();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TexEnvCombine::setSource0_RGB(int sp)
	static int _bind_setSource0_RGB(lua_State *L) {
		if (!_lg_typecheck_setSource0_RGB(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setSource0_RGB(int sp) function, expected prototype:\nvoid osg::TexEnvCombine::setSource0_RGB(int sp)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int sp=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setSource0_RGB(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSource0_RGB(sp);

		return 0;
	}

	// void osg::TexEnvCombine::setSource1_RGB(int sp)
	static int _bind_setSource1_RGB(lua_State *L) {
		if (!_lg_typecheck_setSource1_RGB(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setSource1_RGB(int sp) function, expected prototype:\nvoid osg::TexEnvCombine::setSource1_RGB(int sp)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int sp=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setSource1_RGB(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSource1_RGB(sp);

		return 0;
	}

	// void osg::TexEnvCombine::setSource2_RGB(int sp)
	static int _bind_setSource2_RGB(lua_State *L) {
		if (!_lg_typecheck_setSource2_RGB(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setSource2_RGB(int sp) function, expected prototype:\nvoid osg::TexEnvCombine::setSource2_RGB(int sp)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int sp=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setSource2_RGB(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSource2_RGB(sp);

		return 0;
	}

	// void osg::TexEnvCombine::setSource0_Alpha(int sp)
	static int _bind_setSource0_Alpha(lua_State *L) {
		if (!_lg_typecheck_setSource0_Alpha(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setSource0_Alpha(int sp) function, expected prototype:\nvoid osg::TexEnvCombine::setSource0_Alpha(int sp)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int sp=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setSource0_Alpha(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSource0_Alpha(sp);

		return 0;
	}

	// void osg::TexEnvCombine::setSource1_Alpha(int sp)
	static int _bind_setSource1_Alpha(lua_State *L) {
		if (!_lg_typecheck_setSource1_Alpha(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setSource1_Alpha(int sp) function, expected prototype:\nvoid osg::TexEnvCombine::setSource1_Alpha(int sp)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int sp=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setSource1_Alpha(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSource1_Alpha(sp);

		return 0;
	}

	// void osg::TexEnvCombine::setSource2_Alpha(int sp)
	static int _bind_setSource2_Alpha(lua_State *L) {
		if (!_lg_typecheck_setSource2_Alpha(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setSource2_Alpha(int sp) function, expected prototype:\nvoid osg::TexEnvCombine::setSource2_Alpha(int sp)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int sp=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setSource2_Alpha(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSource2_Alpha(sp);

		return 0;
	}

	// int osg::TexEnvCombine::getSource0_RGB() const
	static int _bind_getSource0_RGB(lua_State *L) {
		if (!_lg_typecheck_getSource0_RGB(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getSource0_RGB() const function, expected prototype:\nint osg::TexEnvCombine::getSource0_RGB() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getSource0_RGB() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getSource0_RGB();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TexEnvCombine::getSource1_RGB() const
	static int _bind_getSource1_RGB(lua_State *L) {
		if (!_lg_typecheck_getSource1_RGB(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getSource1_RGB() const function, expected prototype:\nint osg::TexEnvCombine::getSource1_RGB() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getSource1_RGB() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getSource1_RGB();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TexEnvCombine::getSource2_RGB() const
	static int _bind_getSource2_RGB(lua_State *L) {
		if (!_lg_typecheck_getSource2_RGB(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getSource2_RGB() const function, expected prototype:\nint osg::TexEnvCombine::getSource2_RGB() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getSource2_RGB() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getSource2_RGB();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TexEnvCombine::getSource0_Alpha() const
	static int _bind_getSource0_Alpha(lua_State *L) {
		if (!_lg_typecheck_getSource0_Alpha(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getSource0_Alpha() const function, expected prototype:\nint osg::TexEnvCombine::getSource0_Alpha() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getSource0_Alpha() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getSource0_Alpha();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TexEnvCombine::getSource1_Alpha() const
	static int _bind_getSource1_Alpha(lua_State *L) {
		if (!_lg_typecheck_getSource1_Alpha(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getSource1_Alpha() const function, expected prototype:\nint osg::TexEnvCombine::getSource1_Alpha() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getSource1_Alpha() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getSource1_Alpha();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TexEnvCombine::getSource2_Alpha() const
	static int _bind_getSource2_Alpha(lua_State *L) {
		if (!_lg_typecheck_getSource2_Alpha(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getSource2_Alpha() const function, expected prototype:\nint osg::TexEnvCombine::getSource2_Alpha() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getSource2_Alpha() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getSource2_Alpha();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TexEnvCombine::setOperand0_RGB(int op)
	static int _bind_setOperand0_RGB(lua_State *L) {
		if (!_lg_typecheck_setOperand0_RGB(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setOperand0_RGB(int op) function, expected prototype:\nvoid osg::TexEnvCombine::setOperand0_RGB(int op)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int op=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setOperand0_RGB(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOperand0_RGB(op);

		return 0;
	}

	// void osg::TexEnvCombine::setOperand1_RGB(int op)
	static int _bind_setOperand1_RGB(lua_State *L) {
		if (!_lg_typecheck_setOperand1_RGB(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setOperand1_RGB(int op) function, expected prototype:\nvoid osg::TexEnvCombine::setOperand1_RGB(int op)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int op=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setOperand1_RGB(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOperand1_RGB(op);

		return 0;
	}

	// void osg::TexEnvCombine::setOperand2_RGB(int op)
	static int _bind_setOperand2_RGB(lua_State *L) {
		if (!_lg_typecheck_setOperand2_RGB(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setOperand2_RGB(int op) function, expected prototype:\nvoid osg::TexEnvCombine::setOperand2_RGB(int op)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int op=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setOperand2_RGB(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOperand2_RGB(op);

		return 0;
	}

	// void osg::TexEnvCombine::setOperand0_Alpha(int op)
	static int _bind_setOperand0_Alpha(lua_State *L) {
		if (!_lg_typecheck_setOperand0_Alpha(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setOperand0_Alpha(int op) function, expected prototype:\nvoid osg::TexEnvCombine::setOperand0_Alpha(int op)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int op=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setOperand0_Alpha(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOperand0_Alpha(op);

		return 0;
	}

	// void osg::TexEnvCombine::setOperand1_Alpha(int op)
	static int _bind_setOperand1_Alpha(lua_State *L) {
		if (!_lg_typecheck_setOperand1_Alpha(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setOperand1_Alpha(int op) function, expected prototype:\nvoid osg::TexEnvCombine::setOperand1_Alpha(int op)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int op=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setOperand1_Alpha(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOperand1_Alpha(op);

		return 0;
	}

	// void osg::TexEnvCombine::setOperand2_Alpha(int op)
	static int _bind_setOperand2_Alpha(lua_State *L) {
		if (!_lg_typecheck_setOperand2_Alpha(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setOperand2_Alpha(int op) function, expected prototype:\nvoid osg::TexEnvCombine::setOperand2_Alpha(int op)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int op=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setOperand2_Alpha(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOperand2_Alpha(op);

		return 0;
	}

	// int osg::TexEnvCombine::getOperand0_RGB() const
	static int _bind_getOperand0_RGB(lua_State *L) {
		if (!_lg_typecheck_getOperand0_RGB(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getOperand0_RGB() const function, expected prototype:\nint osg::TexEnvCombine::getOperand0_RGB() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getOperand0_RGB() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getOperand0_RGB();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TexEnvCombine::getOperand1_RGB() const
	static int _bind_getOperand1_RGB(lua_State *L) {
		if (!_lg_typecheck_getOperand1_RGB(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getOperand1_RGB() const function, expected prototype:\nint osg::TexEnvCombine::getOperand1_RGB() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getOperand1_RGB() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getOperand1_RGB();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TexEnvCombine::getOperand2_RGB() const
	static int _bind_getOperand2_RGB(lua_State *L) {
		if (!_lg_typecheck_getOperand2_RGB(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getOperand2_RGB() const function, expected prototype:\nint osg::TexEnvCombine::getOperand2_RGB() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getOperand2_RGB() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getOperand2_RGB();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TexEnvCombine::getOperand0_Alpha() const
	static int _bind_getOperand0_Alpha(lua_State *L) {
		if (!_lg_typecheck_getOperand0_Alpha(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getOperand0_Alpha() const function, expected prototype:\nint osg::TexEnvCombine::getOperand0_Alpha() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getOperand0_Alpha() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getOperand0_Alpha();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TexEnvCombine::getOperand1_Alpha() const
	static int _bind_getOperand1_Alpha(lua_State *L) {
		if (!_lg_typecheck_getOperand1_Alpha(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getOperand1_Alpha() const function, expected prototype:\nint osg::TexEnvCombine::getOperand1_Alpha() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getOperand1_Alpha() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getOperand1_Alpha();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TexEnvCombine::getOperand2_Alpha() const
	static int _bind_getOperand2_Alpha(lua_State *L) {
		if (!_lg_typecheck_getOperand2_Alpha(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getOperand2_Alpha() const function, expected prototype:\nint osg::TexEnvCombine::getOperand2_Alpha() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getOperand2_Alpha() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getOperand2_Alpha();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TexEnvCombine::setScale_RGB(float scale)
	static int _bind_setScale_RGB(lua_State *L) {
		if (!_lg_typecheck_setScale_RGB(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setScale_RGB(float scale) function, expected prototype:\nvoid osg::TexEnvCombine::setScale_RGB(float scale)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float scale=(float)lua_tonumber(L,2);

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setScale_RGB(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setScale_RGB(scale);

		return 0;
	}

	// void osg::TexEnvCombine::setScale_Alpha(float scale)
	static int _bind_setScale_Alpha(lua_State *L) {
		if (!_lg_typecheck_setScale_Alpha(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setScale_Alpha(float scale) function, expected prototype:\nvoid osg::TexEnvCombine::setScale_Alpha(float scale)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float scale=(float)lua_tonumber(L,2);

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setScale_Alpha(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setScale_Alpha(scale);

		return 0;
	}

	// float osg::TexEnvCombine::getScale_RGB() const
	static int _bind_getScale_RGB(lua_State *L) {
		if (!_lg_typecheck_getScale_RGB(L)) {
			luaL_error(L, "luna typecheck failed in float osg::TexEnvCombine::getScale_RGB() const function, expected prototype:\nfloat osg::TexEnvCombine::getScale_RGB() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::TexEnvCombine::getScale_RGB() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getScale_RGB();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::TexEnvCombine::getScale_Alpha() const
	static int _bind_getScale_Alpha(lua_State *L) {
		if (!_lg_typecheck_getScale_Alpha(L)) {
			luaL_error(L, "luna typecheck failed in float osg::TexEnvCombine::getScale_Alpha() const function, expected prototype:\nfloat osg::TexEnvCombine::getScale_Alpha() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::TexEnvCombine::getScale_Alpha() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getScale_Alpha();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TexEnvCombine::setConstantColor(const osg::Vec4f & color)
	static int _bind_setConstantColor(lua_State *L) {
		if (!_lg_typecheck_setConstantColor(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setConstantColor(const osg::Vec4f & color) function, expected prototype:\nvoid osg::TexEnvCombine::setConstantColor(const osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osg::TexEnvCombine::setConstantColor function");
		}
		const osg::Vec4f & color=*color_ptr;

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setConstantColor(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setConstantColor(color);

		return 0;
	}

	// const osg::Vec4f & osg::TexEnvCombine::getConstantColor() const
	static int _bind_getConstantColor(lua_State *L) {
		if (!_lg_typecheck_getConstantColor(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::TexEnvCombine::getConstantColor() const function, expected prototype:\nconst osg::Vec4f & osg::TexEnvCombine::getConstantColor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::TexEnvCombine::getConstantColor() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getConstantColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osg::TexEnvCombine::setConstantColorAsLightDirection(const osg::Vec3f & direction)
	static int _bind_setConstantColorAsLightDirection(lua_State *L) {
		if (!_lg_typecheck_setConstantColorAsLightDirection(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setConstantColorAsLightDirection(const osg::Vec3f & direction) function, expected prototype:\nvoid osg::TexEnvCombine::setConstantColorAsLightDirection(const osg::Vec3f & direction)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* direction_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !direction_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg direction in osg::TexEnvCombine::setConstantColorAsLightDirection function");
		}
		const osg::Vec3f & direction=*direction_ptr;

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setConstantColorAsLightDirection(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setConstantColorAsLightDirection(direction);

		return 0;
	}

	// osg::Vec3f osg::TexEnvCombine::getConstantColorAsLightDirection() const
	static int _bind_getConstantColorAsLightDirection(lua_State *L) {
		if (!_lg_typecheck_getConstantColorAsLightDirection(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osg::TexEnvCombine::getConstantColorAsLightDirection() const function, expected prototype:\nosg::Vec3f osg::TexEnvCombine::getConstantColorAsLightDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osg::TexEnvCombine::getConstantColorAsLightDirection() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->getConstantColorAsLightDirection();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// void osg::TexEnvCombine::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::TexEnvCombine::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TexEnvCombine::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::TexEnvCombine::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::TexEnvCombine::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexEnvCombine::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::TexEnvCombine::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::base_setName(const std::string & name) function, expected prototype:\nvoid osg::TexEnvCombine::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexEnvCombine::setName(name);

		return 0;
	}

	// void osg::TexEnvCombine::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::base_computeDataVariance() function, expected prototype:\nvoid osg::TexEnvCombine::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexEnvCombine::computeDataVariance();

		return 0;
	}

	// void osg::TexEnvCombine::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::TexEnvCombine::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexEnvCombine::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::TexEnvCombine::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::TexEnvCombine::base_getUserData() function, expected prototype:\nosg::Referenced * osg::TexEnvCombine::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::TexEnvCombine::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->TexEnvCombine::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::TexEnvCombine::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::TexEnvCombine::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::TexEnvCombine::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::TexEnvCombine::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->TexEnvCombine::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TexEnvCombine::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::TexEnvCombine::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::TexEnvCombine::base_asTexture() function, expected prototype:\nosg::Texture * osg::TexEnvCombine::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::TexEnvCombine::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->TexEnvCombine::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::TexEnvCombine::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::TexEnvCombine::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::TexEnvCombine::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::TexEnvCombine::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->TexEnvCombine::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TexEnvCombine::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::TexEnvCombine::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::TexEnvCombine::base_getMember() const function, expected prototype:\nunsigned int osg::TexEnvCombine::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::TexEnvCombine::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->TexEnvCombine::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::TexEnvCombine::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TexEnvCombine::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::TexEnvCombine::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TexEnvCombine::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TexEnvCombine::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TexEnvCombine::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::TexEnvCombine::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TexEnvCombine::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::TexEnvCombine::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TexEnvCombine::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TexEnvCombine::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TexEnvCombine::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::TexEnvCombine::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::TexEnvCombine::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TexEnvCombine::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexEnvCombine::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::TexEnvCombine::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::TexEnvCombine::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexEnvCombine::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::TexEnvCombine::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TexEnvCombine::base_cloneType() const function, expected prototype:\nosg::Object * osg::TexEnvCombine::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TexEnvCombine::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->TexEnvCombine::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TexEnvCombine::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TexEnvCombine::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::TexEnvCombine::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TexEnvCombine::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TexEnvCombine::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->TexEnvCombine::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TexEnvCombine::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TexEnvCombine::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TexEnvCombine::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TexEnvCombine::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TexEnvCombine::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TexEnvCombine::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TexEnvCombine::base_libraryName() const function, expected prototype:\nconst char * osg::TexEnvCombine::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TexEnvCombine::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TexEnvCombine::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TexEnvCombine::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TexEnvCombine::base_className() const function, expected prototype:\nconst char * osg::TexEnvCombine::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TexEnvCombine::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TexEnvCombine::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::TexEnvCombine::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::TexEnvCombine::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::TexEnvCombine::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::TexEnvCombine::base_getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->TexEnvCombine::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::TexEnvCombine::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TexEnvCombine::base_isTextureAttribute() const function, expected prototype:\nbool osg::TexEnvCombine::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TexEnvCombine::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TexEnvCombine::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int osg::TexEnvCombine::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::TexEnvCombine::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::TexEnvCombine::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::base_compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->TexEnvCombine::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TexEnvCombine::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::TexEnvCombine::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TexEnvCombine::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< osg::TexEnvCombine >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexEnvCombine::apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::TexEnvCombine* LunaTraits< osg::TexEnvCombine >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_TexEnvCombine::_bind_ctor(L);
}

void LunaTraits< osg::TexEnvCombine >::_bind_dtor(osg::TexEnvCombine* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TexEnvCombine >::className[] = "TexEnvCombine";
const char LunaTraits< osg::TexEnvCombine >::fullName[] = "osg::TexEnvCombine";
const char LunaTraits< osg::TexEnvCombine >::moduleName[] = "osg";
const char* LunaTraits< osg::TexEnvCombine >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::TexEnvCombine >::hash = 61352714;
const int LunaTraits< osg::TexEnvCombine >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TexEnvCombine >::methods[] = {
	{"cloneType", &luna_wrapper_osg_TexEnvCombine::_bind_cloneType},
	{"clone", &luna_wrapper_osg_TexEnvCombine::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_TexEnvCombine::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_TexEnvCombine::_bind_libraryName},
	{"className", &luna_wrapper_osg_TexEnvCombine::_bind_className},
	{"getType", &luna_wrapper_osg_TexEnvCombine::_bind_getType},
	{"isTextureAttribute", &luna_wrapper_osg_TexEnvCombine::_bind_isTextureAttribute},
	{"compare", &luna_wrapper_osg_TexEnvCombine::_bind_compare},
	{"setCombine_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_setCombine_RGB},
	{"setCombine_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_setCombine_Alpha},
	{"getCombine_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_getCombine_RGB},
	{"getCombine_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_getCombine_Alpha},
	{"setSource0_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_setSource0_RGB},
	{"setSource1_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_setSource1_RGB},
	{"setSource2_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_setSource2_RGB},
	{"setSource0_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_setSource0_Alpha},
	{"setSource1_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_setSource1_Alpha},
	{"setSource2_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_setSource2_Alpha},
	{"getSource0_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_getSource0_RGB},
	{"getSource1_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_getSource1_RGB},
	{"getSource2_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_getSource2_RGB},
	{"getSource0_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_getSource0_Alpha},
	{"getSource1_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_getSource1_Alpha},
	{"getSource2_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_getSource2_Alpha},
	{"setOperand0_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_setOperand0_RGB},
	{"setOperand1_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_setOperand1_RGB},
	{"setOperand2_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_setOperand2_RGB},
	{"setOperand0_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_setOperand0_Alpha},
	{"setOperand1_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_setOperand1_Alpha},
	{"setOperand2_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_setOperand2_Alpha},
	{"getOperand0_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_getOperand0_RGB},
	{"getOperand1_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_getOperand1_RGB},
	{"getOperand2_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_getOperand2_RGB},
	{"getOperand0_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_getOperand0_Alpha},
	{"getOperand1_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_getOperand1_Alpha},
	{"getOperand2_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_getOperand2_Alpha},
	{"setScale_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_setScale_RGB},
	{"setScale_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_setScale_Alpha},
	{"getScale_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_getScale_RGB},
	{"getScale_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_getScale_Alpha},
	{"setConstantColor", &luna_wrapper_osg_TexEnvCombine::_bind_setConstantColor},
	{"getConstantColor", &luna_wrapper_osg_TexEnvCombine::_bind_getConstantColor},
	{"setConstantColorAsLightDirection", &luna_wrapper_osg_TexEnvCombine::_bind_setConstantColorAsLightDirection},
	{"getConstantColorAsLightDirection", &luna_wrapper_osg_TexEnvCombine::_bind_getConstantColorAsLightDirection},
	{"apply", &luna_wrapper_osg_TexEnvCombine::_bind_apply},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_TexEnvCombine::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_TexEnvCombine::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_TexEnvCombine::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_TexEnvCombine::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_TexEnvCombine::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_TexEnvCombine::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_TexEnvCombine::_bind_base_getMember},
	{"base_getModeUsage", &luna_wrapper_osg_TexEnvCombine::_bind_base_getModeUsage},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_TexEnvCombine::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_TexEnvCombine::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_TexEnvCombine::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_TexEnvCombine::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_TexEnvCombine::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_TexEnvCombine::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_TexEnvCombine::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_TexEnvCombine::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_TexEnvCombine::_bind_base_getType},
	{"base_isTextureAttribute", &luna_wrapper_osg_TexEnvCombine::_bind_base_isTextureAttribute},
	{"base_compare", &luna_wrapper_osg_TexEnvCombine::_bind_base_compare},
	{"base_apply", &luna_wrapper_osg_TexEnvCombine::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osg_TexEnvCombine::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_TexEnvCombine::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_TexEnvCombine::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TexEnvCombine >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TexEnvCombine::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TexEnvCombine >::enumValues[] = {
	{"REPLACE", osg::TexEnvCombine::REPLACE},
	{"MODULATE", osg::TexEnvCombine::MODULATE},
	{"ADD", osg::TexEnvCombine::ADD},
	{"ADD_SIGNED", osg::TexEnvCombine::ADD_SIGNED},
	{"INTERPOLATE", osg::TexEnvCombine::INTERPOLATE},
	{"SUBTRACT", osg::TexEnvCombine::SUBTRACT},
	{"DOT3_RGB", osg::TexEnvCombine::DOT3_RGB},
	{"DOT3_RGBA", osg::TexEnvCombine::DOT3_RGBA},
	{"CONSTANT", osg::TexEnvCombine::CONSTANT},
	{"PRIMARY_COLOR", osg::TexEnvCombine::PRIMARY_COLOR},
	{"PREVIOUS", osg::TexEnvCombine::PREVIOUS},
	{"TEXTURE", osg::TexEnvCombine::TEXTURE},
	{"TEXTURE0", osg::TexEnvCombine::TEXTURE0},
	{"TEXTURE1", osg::TexEnvCombine::TEXTURE1},
	{"TEXTURE2", osg::TexEnvCombine::TEXTURE2},
	{"TEXTURE3", osg::TexEnvCombine::TEXTURE3},
	{"TEXTURE4", osg::TexEnvCombine::TEXTURE4},
	{"TEXTURE5", osg::TexEnvCombine::TEXTURE5},
	{"TEXTURE6", osg::TexEnvCombine::TEXTURE6},
	{"TEXTURE7", osg::TexEnvCombine::TEXTURE7},
	{"SRC_COLOR", osg::TexEnvCombine::SRC_COLOR},
	{"ONE_MINUS_SRC_COLOR", osg::TexEnvCombine::ONE_MINUS_SRC_COLOR},
	{"SRC_ALPHA", osg::TexEnvCombine::SRC_ALPHA},
	{"ONE_MINUS_SRC_ALPHA", osg::TexEnvCombine::ONE_MINUS_SRC_ALPHA},
	{0,0}
};


