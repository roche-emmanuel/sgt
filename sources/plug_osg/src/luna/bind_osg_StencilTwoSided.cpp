#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_StencilTwoSided.h>

class luna_wrapper_osg_StencilTwoSided {
public:
	typedef Luna< osg::StencilTwoSided > luna_t;

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

		osg::StencilTwoSided* self= (osg::StencilTwoSided*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::StencilTwoSided >::push(L,self,false);
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
		//osg::StencilTwoSided* ptr= dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		osg::StencilTwoSided* ptr= luna_caster< osg::Referenced, osg::StencilTwoSided >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::StencilTwoSided >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setFunction_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFunction_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFunction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFunctionRef(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFunctionRef(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFunctionMask(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFunctionMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOperation(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStencilFailOperation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStencilFailOperation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStencilPassAndDepthFailOperation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStencilPassAndDepthFailOperation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStencilPassAndDepthPassOperation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStencilPassAndDepthPassOperation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWriteMask(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWriteMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::StencilTwoSided::StencilTwoSided()
	static osg::StencilTwoSided* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StencilTwoSided::StencilTwoSided() function, expected prototype:\nosg::StencilTwoSided::StencilTwoSided()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::StencilTwoSided();
	}

	// osg::StencilTwoSided::StencilTwoSided(const osg::StencilTwoSided & stencil, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::StencilTwoSided* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::StencilTwoSided::StencilTwoSided(const osg::StencilTwoSided & stencil, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::StencilTwoSided::StencilTwoSided(const osg::StencilTwoSided & stencil, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::StencilTwoSided* stencil_ptr=(Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1));
		if( !stencil_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stencil in osg::StencilTwoSided::StencilTwoSided function");
		}
		const osg::StencilTwoSided & stencil=*stencil_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::StencilTwoSided::StencilTwoSided function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::StencilTwoSided(stencil, copyop);
	}

	// osg::StencilTwoSided::StencilTwoSided(lua_Table * data)
	static osg::StencilTwoSided* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::StencilTwoSided::StencilTwoSided(lua_Table * data) function, expected prototype:\nosg::StencilTwoSided::StencilTwoSided(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_StencilTwoSided(L,NULL);
	}

	// osg::StencilTwoSided::StencilTwoSided(lua_Table * data, const osg::StencilTwoSided & stencil, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::StencilTwoSided* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::StencilTwoSided::StencilTwoSided(lua_Table * data, const osg::StencilTwoSided & stencil, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::StencilTwoSided::StencilTwoSided(lua_Table * data, const osg::StencilTwoSided & stencil, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::StencilTwoSided* stencil_ptr=(Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,2));
		if( !stencil_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stencil in osg::StencilTwoSided::StencilTwoSided function");
		}
		const osg::StencilTwoSided & stencil=*stencil_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::StencilTwoSided::StencilTwoSided function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_StencilTwoSided(L,NULL, stencil, copyop);
	}

	// Overload binder for osg::StencilTwoSided::StencilTwoSided
	static osg::StencilTwoSided* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function StencilTwoSided, cannot match any of the overloads for function StencilTwoSided:\n  StencilTwoSided()\n  StencilTwoSided(const osg::StencilTwoSided &, const osg::CopyOp &)\n  StencilTwoSided(lua_Table *)\n  StencilTwoSided(lua_Table *, const osg::StencilTwoSided &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::StencilTwoSided::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::StencilTwoSided::cloneType() const function, expected prototype:\nosg::Object * osg::StencilTwoSided::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::StencilTwoSided::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::StencilTwoSided::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::StencilTwoSided::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::StencilTwoSided::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StencilTwoSided::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::StencilTwoSided::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::StencilTwoSided::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StencilTwoSided::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::StencilTwoSided::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StencilTwoSided::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::StencilTwoSided::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::StencilTwoSided::libraryName() const function, expected prototype:\nconst char * osg::StencilTwoSided::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::StencilTwoSided::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::StencilTwoSided::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::StencilTwoSided::className() const function, expected prototype:\nconst char * osg::StencilTwoSided::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::StencilTwoSided::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::StencilTwoSided::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::StencilTwoSided::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::StencilTwoSided::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::StencilTwoSided::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::StencilTwoSided::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::StencilTwoSided::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::StencilTwoSided::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::StencilTwoSided::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::StencilTwoSided::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::StencilTwoSided::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StencilTwoSided::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::StencilTwoSided::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StencilTwoSided::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StencilTwoSided::getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::StencilTwoSided::setFunction(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Function func, int ref, unsigned int mask)
	static int _bind_setFunction_overload_1(lua_State *L) {
		if (!_lg_typecheck_setFunction_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::setFunction(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Function func, int ref, unsigned int mask) function, expected prototype:\nvoid osg::StencilTwoSided::setFunction(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Function func, int ref, unsigned int mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);
		osg::StencilTwoSided::Function func=(osg::StencilTwoSided::Function)lua_tointeger(L,3);
		int ref=(int)lua_tointeger(L,4);
		unsigned int mask=(unsigned int)lua_tointeger(L,5);

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::setFunction(osg::StencilTwoSided::Face, osg::StencilTwoSided::Function, int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFunction(face, func, ref, mask);

		return 0;
	}

	// void osg::StencilTwoSided::setFunction(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Function func)
	static int _bind_setFunction_overload_2(lua_State *L) {
		if (!_lg_typecheck_setFunction_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::setFunction(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Function func) function, expected prototype:\nvoid osg::StencilTwoSided::setFunction(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Function func)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);
		osg::StencilTwoSided::Function func=(osg::StencilTwoSided::Function)lua_tointeger(L,3);

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::setFunction(osg::StencilTwoSided::Face, osg::StencilTwoSided::Function). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFunction(face, func);

		return 0;
	}

	// Overload binder for osg::StencilTwoSided::setFunction
	static int _bind_setFunction(lua_State *L) {
		if (_lg_typecheck_setFunction_overload_1(L)) return _bind_setFunction_overload_1(L);
		if (_lg_typecheck_setFunction_overload_2(L)) return _bind_setFunction_overload_2(L);

		luaL_error(L, "error in function setFunction, cannot match any of the overloads for function setFunction:\n  setFunction(osg::StencilTwoSided::Face, osg::StencilTwoSided::Function, int, unsigned int)\n  setFunction(osg::StencilTwoSided::Face, osg::StencilTwoSided::Function)\n");
		return 0;
	}

	// osg::StencilTwoSided::Function osg::StencilTwoSided::getFunction(osg::StencilTwoSided::Face face) const
	static int _bind_getFunction(lua_State *L) {
		if (!_lg_typecheck_getFunction(L)) {
			luaL_error(L, "luna typecheck failed in osg::StencilTwoSided::Function osg::StencilTwoSided::getFunction(osg::StencilTwoSided::Face face) const function, expected prototype:\nosg::StencilTwoSided::Function osg::StencilTwoSided::getFunction(osg::StencilTwoSided::Face face) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StencilTwoSided::Function osg::StencilTwoSided::getFunction(osg::StencilTwoSided::Face) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StencilTwoSided::Function lret = self->getFunction(face);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StencilTwoSided::setFunctionRef(osg::StencilTwoSided::Face face, int ref)
	static int _bind_setFunctionRef(lua_State *L) {
		if (!_lg_typecheck_setFunctionRef(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::setFunctionRef(osg::StencilTwoSided::Face face, int ref) function, expected prototype:\nvoid osg::StencilTwoSided::setFunctionRef(osg::StencilTwoSided::Face face, int ref)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);
		int ref=(int)lua_tointeger(L,3);

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::setFunctionRef(osg::StencilTwoSided::Face, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFunctionRef(face, ref);

		return 0;
	}

	// int osg::StencilTwoSided::getFunctionRef(osg::StencilTwoSided::Face face) const
	static int _bind_getFunctionRef(lua_State *L) {
		if (!_lg_typecheck_getFunctionRef(L)) {
			luaL_error(L, "luna typecheck failed in int osg::StencilTwoSided::getFunctionRef(osg::StencilTwoSided::Face face) const function, expected prototype:\nint osg::StencilTwoSided::getFunctionRef(osg::StencilTwoSided::Face face) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::StencilTwoSided::getFunctionRef(osg::StencilTwoSided::Face) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getFunctionRef(face);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StencilTwoSided::setFunctionMask(osg::StencilTwoSided::Face face, unsigned int mask)
	static int _bind_setFunctionMask(lua_State *L) {
		if (!_lg_typecheck_setFunctionMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::setFunctionMask(osg::StencilTwoSided::Face face, unsigned int mask) function, expected prototype:\nvoid osg::StencilTwoSided::setFunctionMask(osg::StencilTwoSided::Face face, unsigned int mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);
		unsigned int mask=(unsigned int)lua_tointeger(L,3);

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::setFunctionMask(osg::StencilTwoSided::Face, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFunctionMask(face, mask);

		return 0;
	}

	// unsigned int osg::StencilTwoSided::getFunctionMask(osg::StencilTwoSided::Face face) const
	static int _bind_getFunctionMask(lua_State *L) {
		if (!_lg_typecheck_getFunctionMask(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::StencilTwoSided::getFunctionMask(osg::StencilTwoSided::Face face) const function, expected prototype:\nunsigned int osg::StencilTwoSided::getFunctionMask(osg::StencilTwoSided::Face face) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::StencilTwoSided::getFunctionMask(osg::StencilTwoSided::Face) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getFunctionMask(face);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StencilTwoSided::setOperation(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Operation sfail, osg::StencilTwoSided::Operation zfail, osg::StencilTwoSided::Operation zpass)
	static int _bind_setOperation(lua_State *L) {
		if (!_lg_typecheck_setOperation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::setOperation(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Operation sfail, osg::StencilTwoSided::Operation zfail, osg::StencilTwoSided::Operation zpass) function, expected prototype:\nvoid osg::StencilTwoSided::setOperation(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Operation sfail, osg::StencilTwoSided::Operation zfail, osg::StencilTwoSided::Operation zpass)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);
		osg::StencilTwoSided::Operation sfail=(osg::StencilTwoSided::Operation)lua_tointeger(L,3);
		osg::StencilTwoSided::Operation zfail=(osg::StencilTwoSided::Operation)lua_tointeger(L,4);
		osg::StencilTwoSided::Operation zpass=(osg::StencilTwoSided::Operation)lua_tointeger(L,5);

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::setOperation(osg::StencilTwoSided::Face, osg::StencilTwoSided::Operation, osg::StencilTwoSided::Operation, osg::StencilTwoSided::Operation). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOperation(face, sfail, zfail, zpass);

		return 0;
	}

	// void osg::StencilTwoSided::setStencilFailOperation(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Operation sfail)
	static int _bind_setStencilFailOperation(lua_State *L) {
		if (!_lg_typecheck_setStencilFailOperation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::setStencilFailOperation(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Operation sfail) function, expected prototype:\nvoid osg::StencilTwoSided::setStencilFailOperation(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Operation sfail)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);
		osg::StencilTwoSided::Operation sfail=(osg::StencilTwoSided::Operation)lua_tointeger(L,3);

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::setStencilFailOperation(osg::StencilTwoSided::Face, osg::StencilTwoSided::Operation). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStencilFailOperation(face, sfail);

		return 0;
	}

	// osg::StencilTwoSided::Operation osg::StencilTwoSided::getStencilFailOperation(osg::StencilTwoSided::Face face) const
	static int _bind_getStencilFailOperation(lua_State *L) {
		if (!_lg_typecheck_getStencilFailOperation(L)) {
			luaL_error(L, "luna typecheck failed in osg::StencilTwoSided::Operation osg::StencilTwoSided::getStencilFailOperation(osg::StencilTwoSided::Face face) const function, expected prototype:\nosg::StencilTwoSided::Operation osg::StencilTwoSided::getStencilFailOperation(osg::StencilTwoSided::Face face) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StencilTwoSided::Operation osg::StencilTwoSided::getStencilFailOperation(osg::StencilTwoSided::Face) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StencilTwoSided::Operation lret = self->getStencilFailOperation(face);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StencilTwoSided::setStencilPassAndDepthFailOperation(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Operation zfail)
	static int _bind_setStencilPassAndDepthFailOperation(lua_State *L) {
		if (!_lg_typecheck_setStencilPassAndDepthFailOperation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::setStencilPassAndDepthFailOperation(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Operation zfail) function, expected prototype:\nvoid osg::StencilTwoSided::setStencilPassAndDepthFailOperation(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Operation zfail)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);
		osg::StencilTwoSided::Operation zfail=(osg::StencilTwoSided::Operation)lua_tointeger(L,3);

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::setStencilPassAndDepthFailOperation(osg::StencilTwoSided::Face, osg::StencilTwoSided::Operation). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStencilPassAndDepthFailOperation(face, zfail);

		return 0;
	}

	// osg::StencilTwoSided::Operation osg::StencilTwoSided::getStencilPassAndDepthFailOperation(osg::StencilTwoSided::Face face) const
	static int _bind_getStencilPassAndDepthFailOperation(lua_State *L) {
		if (!_lg_typecheck_getStencilPassAndDepthFailOperation(L)) {
			luaL_error(L, "luna typecheck failed in osg::StencilTwoSided::Operation osg::StencilTwoSided::getStencilPassAndDepthFailOperation(osg::StencilTwoSided::Face face) const function, expected prototype:\nosg::StencilTwoSided::Operation osg::StencilTwoSided::getStencilPassAndDepthFailOperation(osg::StencilTwoSided::Face face) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StencilTwoSided::Operation osg::StencilTwoSided::getStencilPassAndDepthFailOperation(osg::StencilTwoSided::Face) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StencilTwoSided::Operation lret = self->getStencilPassAndDepthFailOperation(face);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StencilTwoSided::setStencilPassAndDepthPassOperation(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Operation zpass)
	static int _bind_setStencilPassAndDepthPassOperation(lua_State *L) {
		if (!_lg_typecheck_setStencilPassAndDepthPassOperation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::setStencilPassAndDepthPassOperation(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Operation zpass) function, expected prototype:\nvoid osg::StencilTwoSided::setStencilPassAndDepthPassOperation(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Operation zpass)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);
		osg::StencilTwoSided::Operation zpass=(osg::StencilTwoSided::Operation)lua_tointeger(L,3);

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::setStencilPassAndDepthPassOperation(osg::StencilTwoSided::Face, osg::StencilTwoSided::Operation). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStencilPassAndDepthPassOperation(face, zpass);

		return 0;
	}

	// osg::StencilTwoSided::Operation osg::StencilTwoSided::getStencilPassAndDepthPassOperation(osg::StencilTwoSided::Face face) const
	static int _bind_getStencilPassAndDepthPassOperation(lua_State *L) {
		if (!_lg_typecheck_getStencilPassAndDepthPassOperation(L)) {
			luaL_error(L, "luna typecheck failed in osg::StencilTwoSided::Operation osg::StencilTwoSided::getStencilPassAndDepthPassOperation(osg::StencilTwoSided::Face face) const function, expected prototype:\nosg::StencilTwoSided::Operation osg::StencilTwoSided::getStencilPassAndDepthPassOperation(osg::StencilTwoSided::Face face) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StencilTwoSided::Operation osg::StencilTwoSided::getStencilPassAndDepthPassOperation(osg::StencilTwoSided::Face) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StencilTwoSided::Operation lret = self->getStencilPassAndDepthPassOperation(face);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StencilTwoSided::setWriteMask(osg::StencilTwoSided::Face face, unsigned int mask)
	static int _bind_setWriteMask(lua_State *L) {
		if (!_lg_typecheck_setWriteMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::setWriteMask(osg::StencilTwoSided::Face face, unsigned int mask) function, expected prototype:\nvoid osg::StencilTwoSided::setWriteMask(osg::StencilTwoSided::Face face, unsigned int mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);
		unsigned int mask=(unsigned int)lua_tointeger(L,3);

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::setWriteMask(osg::StencilTwoSided::Face, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setWriteMask(face, mask);

		return 0;
	}

	// unsigned int osg::StencilTwoSided::getWriteMask(osg::StencilTwoSided::Face face) const
	static int _bind_getWriteMask(lua_State *L) {
		if (!_lg_typecheck_getWriteMask(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::StencilTwoSided::getWriteMask(osg::StencilTwoSided::Face face) const function, expected prototype:\nunsigned int osg::StencilTwoSided::getWriteMask(osg::StencilTwoSided::Face face) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::StencilTwoSided::getWriteMask(osg::StencilTwoSided::Face) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getWriteMask(face);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StencilTwoSided::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::StencilTwoSided::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StencilTwoSided::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// static osg::StencilTwoSided::Extensions * osg::StencilTwoSided::getExtensions(unsigned int contextID, bool createIfNotInitalized)
	static int _bind_getExtensions(lua_State *L) {
		if (!_lg_typecheck_getExtensions(L)) {
			luaL_error(L, "luna typecheck failed in static osg::StencilTwoSided::Extensions * osg::StencilTwoSided::getExtensions(unsigned int contextID, bool createIfNotInitalized) function, expected prototype:\nstatic osg::StencilTwoSided::Extensions * osg::StencilTwoSided::getExtensions(unsigned int contextID, bool createIfNotInitalized)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		bool createIfNotInitalized=(bool)(lua_toboolean(L,2)==1);

		osg::StencilTwoSided::Extensions * lret = osg::StencilTwoSided::getExtensions(contextID, createIfNotInitalized);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StencilTwoSided::Extensions >::push(L,lret,false);

		return 1;
	}

	// static void osg::StencilTwoSided::setExtensions(unsigned int contextID, osg::StencilTwoSided::Extensions * extensions)
	static int _bind_setExtensions(lua_State *L) {
		if (!_lg_typecheck_setExtensions(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::StencilTwoSided::setExtensions(unsigned int contextID, osg::StencilTwoSided::Extensions * extensions) function, expected prototype:\nstatic void osg::StencilTwoSided::setExtensions(unsigned int contextID, osg::StencilTwoSided::Extensions * extensions)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		osg::StencilTwoSided::Extensions* extensions=(Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided::Extensions >(L,2));

		osg::StencilTwoSided::setExtensions(contextID, extensions);

		return 0;
	}

	// void osg::StencilTwoSided::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::StencilTwoSided::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StencilTwoSided::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::StencilTwoSided::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::base_setName(const std::string & name) function, expected prototype:\nvoid osg::StencilTwoSided::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StencilTwoSided::setName(name);

		return 0;
	}

	// void osg::StencilTwoSided::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::base_computeDataVariance() function, expected prototype:\nvoid osg::StencilTwoSided::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StencilTwoSided::computeDataVariance();

		return 0;
	}

	// void osg::StencilTwoSided::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::StencilTwoSided::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StencilTwoSided::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::StencilTwoSided::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::StencilTwoSided::base_getUserData() function, expected prototype:\nosg::Referenced * osg::StencilTwoSided::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::StencilTwoSided::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->StencilTwoSided::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::StencilTwoSided::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::StencilTwoSided::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::StencilTwoSided::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::StencilTwoSided::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->StencilTwoSided::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::StencilTwoSided::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::StencilTwoSided::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::StencilTwoSided::base_asTexture() function, expected prototype:\nosg::Texture * osg::StencilTwoSided::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::StencilTwoSided::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->StencilTwoSided::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::StencilTwoSided::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::StencilTwoSided::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::StencilTwoSided::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::StencilTwoSided::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->StencilTwoSided::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::StencilTwoSided::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::StencilTwoSided::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::StencilTwoSided::base_getMember() const function, expected prototype:\nunsigned int osg::StencilTwoSided::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::StencilTwoSided::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->StencilTwoSided::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::StencilTwoSided::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StencilTwoSided::base_isTextureAttribute() const function, expected prototype:\nbool osg::StencilTwoSided::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StencilTwoSided::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->StencilTwoSided::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::StencilTwoSided::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StencilTwoSided::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::StencilTwoSided::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StencilTwoSided::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StencilTwoSided::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->StencilTwoSided::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::StencilTwoSided::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::StencilTwoSided::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StencilTwoSided::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StencilTwoSided::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::StencilTwoSided::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::StencilTwoSided::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StencilTwoSided::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::StencilTwoSided::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::StencilTwoSided::base_cloneType() const function, expected prototype:\nosg::Object * osg::StencilTwoSided::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::StencilTwoSided::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->StencilTwoSided::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::StencilTwoSided::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::StencilTwoSided::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::StencilTwoSided::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StencilTwoSided::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::StencilTwoSided::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->StencilTwoSided::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::StencilTwoSided::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StencilTwoSided::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::StencilTwoSided::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StencilTwoSided::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->StencilTwoSided::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::StencilTwoSided::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::StencilTwoSided::base_libraryName() const function, expected prototype:\nconst char * osg::StencilTwoSided::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::StencilTwoSided::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->StencilTwoSided::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::StencilTwoSided::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::StencilTwoSided::base_className() const function, expected prototype:\nconst char * osg::StencilTwoSided::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::StencilTwoSided::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->StencilTwoSided::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::StencilTwoSided::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::StencilTwoSided::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::StencilTwoSided::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::StencilTwoSided::base_getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->StencilTwoSided::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::StencilTwoSided::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::StencilTwoSided::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::StencilTwoSided::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::StencilTwoSided::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::StencilTwoSided::base_compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->StencilTwoSided::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::StencilTwoSided::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StencilTwoSided::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::StencilTwoSided::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StencilTwoSided::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StencilTwoSided::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->StencilTwoSided::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::StencilTwoSided::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::StencilTwoSided::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StencilTwoSided::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::StencilTwoSided* self=Luna< osg::Referenced >::checkSubType< osg::StencilTwoSided >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StencilTwoSided::apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::StencilTwoSided* LunaTraits< osg::StencilTwoSided >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_StencilTwoSided::_bind_ctor(L);
}

void LunaTraits< osg::StencilTwoSided >::_bind_dtor(osg::StencilTwoSided* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::StencilTwoSided >::className[] = "StencilTwoSided";
const char LunaTraits< osg::StencilTwoSided >::fullName[] = "osg::StencilTwoSided";
const char LunaTraits< osg::StencilTwoSided >::moduleName[] = "osg";
const char* LunaTraits< osg::StencilTwoSided >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::StencilTwoSided >::hash = 87137523;
const int LunaTraits< osg::StencilTwoSided >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::StencilTwoSided >::methods[] = {
	{"cloneType", &luna_wrapper_osg_StencilTwoSided::_bind_cloneType},
	{"clone", &luna_wrapper_osg_StencilTwoSided::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_StencilTwoSided::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_StencilTwoSided::_bind_libraryName},
	{"className", &luna_wrapper_osg_StencilTwoSided::_bind_className},
	{"getType", &luna_wrapper_osg_StencilTwoSided::_bind_getType},
	{"compare", &luna_wrapper_osg_StencilTwoSided::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_StencilTwoSided::_bind_getModeUsage},
	{"setFunction", &luna_wrapper_osg_StencilTwoSided::_bind_setFunction},
	{"getFunction", &luna_wrapper_osg_StencilTwoSided::_bind_getFunction},
	{"setFunctionRef", &luna_wrapper_osg_StencilTwoSided::_bind_setFunctionRef},
	{"getFunctionRef", &luna_wrapper_osg_StencilTwoSided::_bind_getFunctionRef},
	{"setFunctionMask", &luna_wrapper_osg_StencilTwoSided::_bind_setFunctionMask},
	{"getFunctionMask", &luna_wrapper_osg_StencilTwoSided::_bind_getFunctionMask},
	{"setOperation", &luna_wrapper_osg_StencilTwoSided::_bind_setOperation},
	{"setStencilFailOperation", &luna_wrapper_osg_StencilTwoSided::_bind_setStencilFailOperation},
	{"getStencilFailOperation", &luna_wrapper_osg_StencilTwoSided::_bind_getStencilFailOperation},
	{"setStencilPassAndDepthFailOperation", &luna_wrapper_osg_StencilTwoSided::_bind_setStencilPassAndDepthFailOperation},
	{"getStencilPassAndDepthFailOperation", &luna_wrapper_osg_StencilTwoSided::_bind_getStencilPassAndDepthFailOperation},
	{"setStencilPassAndDepthPassOperation", &luna_wrapper_osg_StencilTwoSided::_bind_setStencilPassAndDepthPassOperation},
	{"getStencilPassAndDepthPassOperation", &luna_wrapper_osg_StencilTwoSided::_bind_getStencilPassAndDepthPassOperation},
	{"setWriteMask", &luna_wrapper_osg_StencilTwoSided::_bind_setWriteMask},
	{"getWriteMask", &luna_wrapper_osg_StencilTwoSided::_bind_getWriteMask},
	{"apply", &luna_wrapper_osg_StencilTwoSided::_bind_apply},
	{"getExtensions", &luna_wrapper_osg_StencilTwoSided::_bind_getExtensions},
	{"setExtensions", &luna_wrapper_osg_StencilTwoSided::_bind_setExtensions},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_StencilTwoSided::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_StencilTwoSided::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_StencilTwoSided::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_StencilTwoSided::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_StencilTwoSided::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_StencilTwoSided::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_StencilTwoSided::_bind_base_getMember},
	{"base_isTextureAttribute", &luna_wrapper_osg_StencilTwoSided::_bind_base_isTextureAttribute},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_StencilTwoSided::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_StencilTwoSided::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_StencilTwoSided::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_StencilTwoSided::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_StencilTwoSided::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_StencilTwoSided::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_StencilTwoSided::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_StencilTwoSided::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_StencilTwoSided::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_StencilTwoSided::_bind_base_compare},
	{"base_getModeUsage", &luna_wrapper_osg_StencilTwoSided::_bind_base_getModeUsage},
	{"base_apply", &luna_wrapper_osg_StencilTwoSided::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osg_StencilTwoSided::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_StencilTwoSided::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_StencilTwoSided::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::StencilTwoSided >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_StencilTwoSided::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::StencilTwoSided >::enumValues[] = {
	{"FRONT", osg::StencilTwoSided::FRONT},
	{"BACK", osg::StencilTwoSided::BACK},
	{"NEVER", osg::StencilTwoSided::NEVER},
	{"LESS", osg::StencilTwoSided::LESS},
	{"EQUAL", osg::StencilTwoSided::EQUAL},
	{"LEQUAL", osg::StencilTwoSided::LEQUAL},
	{"GREATER", osg::StencilTwoSided::GREATER},
	{"NOTEQUAL", osg::StencilTwoSided::NOTEQUAL},
	{"GEQUAL", osg::StencilTwoSided::GEQUAL},
	{"ALWAYS", osg::StencilTwoSided::ALWAYS},
	{"KEEP", osg::StencilTwoSided::KEEP},
	{"ZERO", osg::StencilTwoSided::ZERO},
	{"REPLACE", osg::StencilTwoSided::REPLACE},
	{"INCR", osg::StencilTwoSided::INCR},
	{"DECR", osg::StencilTwoSided::DECR},
	{"INVERT", osg::StencilTwoSided::INVERT},
	{"INCR_WRAP", osg::StencilTwoSided::INCR_WRAP},
	{"DECR_WRAP", osg::StencilTwoSided::DECR_WRAP},
	{0,0}
};


