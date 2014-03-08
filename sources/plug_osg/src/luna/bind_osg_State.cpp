#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_State.h>

class luna_wrapper_osg_State {
public:
	typedef Luna< osg::State > luna_t;

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

		osg::State* self= (osg::State*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::State >::push(L,self,false);
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
		//osg::State* ptr= dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,1));
		osg::State* ptr= luna_caster< osg::Referenced, osg::State >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::State >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Observer(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osg::State* ptr= dynamic_cast< osg::State* >(Luna< osg::Observer >::check(L,1));
		osg::State* ptr= luna_caster< osg::Observer, osg::State >::cast(Luna< osg::Observer >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::State >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setGraphicsContext(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGraphicsContext_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGraphicsContext_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setContextID(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getContextID(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setShaderCompositionEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getShaderCompositionEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setShaderComposer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getShaderComposer_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getShaderComposer_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_applyShaderCompositionUniform(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_pushStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_popStateSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_popAllStateSets(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_insertStateSet(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStateSetStackSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_popStateSetStackToSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_captureCurrentState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentViewport(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInitialViewMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInitialViewMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInitialInverseViewMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_applyProjectionMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getProjectionMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_applyModelViewMatrix_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_applyModelViewMatrix_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getModelViewMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseModelViewAndProjectionUniforms(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseModelViewAndProjectionUniforms(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_updateModelViewAndProjectionMatrixUniforms(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_applyModelViewAndProjectionUniformsIfRequired(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getModelViewMatrixUniform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProjectionMatrixUniform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getModelViewProjectionMatrixUniform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNormalMatrixUniform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewFrustum(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseVertexAttributeAliasing(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseVertexAttributeAliasing(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertexAlias(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNormalAlias(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColorAlias(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSecondaryColorAlias(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFogCoordAlias(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_convertVertexShaderSourceToOsgBuiltIns(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_applyShaderComposition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setModeValidity(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getModeValidity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGlobalDefaultModeValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGlobalDefaultModeValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_applyMode(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGlobalDefaultTextureModeValue(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGlobalDefaultTextureModeValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_applyTextureMode(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGlobalDefaultAttribute(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGlobalDefaultAttribute(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_applyAttribute(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGlobalDefaultTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGlobalDefaultTextureAttribute(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_applyTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_haveAppliedMode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_haveAppliedMode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_haveAppliedAttribute_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_haveAppliedAttribute_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLastAppliedMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLastAppliedAttribute(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_haveAppliedTextureMode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_haveAppliedTextureMode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_haveAppliedTextureAttribute_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_haveAppliedTextureAttribute_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLastAppliedTextureMode(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLastAppliedTextureAttribute(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dirtyAllModes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_dirtyAllAttributes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_disableAllVertexArrays(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_dirtyAllVertexArrays(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCurrentVertexBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCurrentVertexBufferObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_bindVertexBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_unbindVertexBufferObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCurrentElementBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCurrentElementBufferObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_bindElementBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_unbindElementBufferObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCurrentPixelBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCurrentPixelBufferObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_bindPixelBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_unbindPixelBufferObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_drawQuads(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glDrawArraysInstanced(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glDrawElementsInstanced(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Vertex(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Color(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Normal(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TexCoord(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MultiTexCoord(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_VerteAttrib(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_lazyDisablingOfVertexAttributes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_applyDisablingOfVertexAttributes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInterleavedArrays(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexPointer_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexPointer_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_disableVertexPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_dirtyVertexPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNormalPointer_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNormalPointer_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_disableNormalPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_dirtyNormalPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setColorPointer_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setColorPointer_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_disableColorPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_dirtyColorPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isSecondaryColorSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSecondaryColorPointer_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSecondaryColorPointer_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_disableSecondaryColorPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_dirtySecondaryColorPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isFogCoordSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFogCoordPointer_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFogCoordPointer_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_disableFogCoordPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_dirtyFogCoordPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTexCoordPointer_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Array >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTexCoordPointer_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_disableTexCoordPointer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dirtyTexCoordPointer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_disableTexCoordPointersAboveAndIncluding(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dirtyTexCoordPointersAboveAndIncluding(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setActiveTextureUnit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getActiveTextureUnit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setClientActiveTextureUnit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClientActiveTextureUnit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVertexAttribPointer_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Array >(L,3)) ) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexAttribPointer_overload_2(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_disableVertexAttribPointer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_disableVertexAttribPointersAboveAndIncluding(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dirtyVertexAttribPointer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dirtyVertexAttribPointersAboveAndIncluding(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isVertexBufferObjectSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLastAppliedProgramObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLastAppliedProgramObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUniformLocation_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformLocation_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAttribLocation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFrameStamp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrameStamp_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrameStamp_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDisplaySettings(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDisplaySettings(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAbortRenderingPtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAbortRendering(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDynamicObjectRenderingCompletedCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDynamicObjectRenderingCompletedCallback(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDynamicObjectCount(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDynamicObjectCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_decrementDynamicObjectCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaxTexturePoolSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxTexturePoolSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaxBufferObjectPoolSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxBufferObjectPoolSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCheckForGLErrors(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCheckForGLErrors(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_checkGLErrors_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_checkGLErrors_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_checkGLErrors_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_print(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2993706) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_initializeExtensionProcs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_objectDeleted(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGLBeginEndAdapter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getArrayDispatchers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGraphicsCostEstimator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGraphicsCostEstimator_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGraphicsCostEstimator_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStartTick(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStartTick(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,32973728) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGpuTick(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGpuTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGpuTimestamp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGpuTimestamp(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,32973728) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTimestampBits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTimestampBits(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_frameCompleted(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_objectDeleted(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_frameCompleted(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::State::State()
	static osg::State* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::State::State() function, expected prototype:\nosg::State::State()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::State();
	}

	// osg::State::State(lua_Table * data)
	static osg::State* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::State::State(lua_Table * data) function, expected prototype:\nosg::State::State(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_State(L,NULL);
	}

	// Overload binder for osg::State::State
	static osg::State* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function State, cannot match any of the overloads for function State:\n  State()\n  State(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::State::setGraphicsContext(osg::GraphicsContext * context)
	static int _bind_setGraphicsContext(lua_State *L) {
		if (!_lg_typecheck_setGraphicsContext(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setGraphicsContext(osg::GraphicsContext * context) function, expected prototype:\nvoid osg::State::setGraphicsContext(osg::GraphicsContext * context)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GraphicsContext* context=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setGraphicsContext(osg::GraphicsContext *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setGraphicsContext(context);

		return 0;
	}

	// osg::GraphicsContext * osg::State::getGraphicsContext()
	static int _bind_getGraphicsContext_overload_1(lua_State *L) {
		if (!_lg_typecheck_getGraphicsContext_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext * osg::State::getGraphicsContext() function, expected prototype:\nosg::GraphicsContext * osg::State::getGraphicsContext()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::GraphicsContext * osg::State::getGraphicsContext(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::GraphicsContext * lret = self->getGraphicsContext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext >::push(L,lret,false);

		return 1;
	}

	// const osg::GraphicsContext * osg::State::getGraphicsContext() const
	static int _bind_getGraphicsContext_overload_2(lua_State *L) {
		if (!_lg_typecheck_getGraphicsContext_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::GraphicsContext * osg::State::getGraphicsContext() const function, expected prototype:\nconst osg::GraphicsContext * osg::State::getGraphicsContext() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::GraphicsContext * osg::State::getGraphicsContext() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::GraphicsContext * lret = self->getGraphicsContext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::State::getGraphicsContext
	static int _bind_getGraphicsContext(lua_State *L) {
		if (_lg_typecheck_getGraphicsContext_overload_1(L)) return _bind_getGraphicsContext_overload_1(L);
		if (_lg_typecheck_getGraphicsContext_overload_2(L)) return _bind_getGraphicsContext_overload_2(L);

		luaL_error(L, "error in function getGraphicsContext, cannot match any of the overloads for function getGraphicsContext:\n  getGraphicsContext()\n  getGraphicsContext()\n");
		return 0;
	}

	// void osg::State::setContextID(unsigned int contextID)
	static int _bind_setContextID(lua_State *L) {
		if (!_lg_typecheck_setContextID(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setContextID(unsigned int contextID) function, expected prototype:\nvoid osg::State::setContextID(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setContextID(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setContextID(contextID);

		return 0;
	}

	// unsigned int osg::State::getContextID() const
	static int _bind_getContextID(lua_State *L) {
		if (!_lg_typecheck_getContextID(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::State::getContextID() const function, expected prototype:\nunsigned int osg::State::getContextID() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::State::getContextID() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getContextID();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::State::setShaderCompositionEnabled(bool flag)
	static int _bind_setShaderCompositionEnabled(lua_State *L) {
		if (!_lg_typecheck_setShaderCompositionEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setShaderCompositionEnabled(bool flag) function, expected prototype:\nvoid osg::State::setShaderCompositionEnabled(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setShaderCompositionEnabled(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setShaderCompositionEnabled(flag);

		return 0;
	}

	// bool osg::State::getShaderCompositionEnabled() const
	static int _bind_getShaderCompositionEnabled(lua_State *L) {
		if (!_lg_typecheck_getShaderCompositionEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::State::getShaderCompositionEnabled() const function, expected prototype:\nbool osg::State::getShaderCompositionEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::State::getShaderCompositionEnabled() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getShaderCompositionEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::State::setShaderComposer(osg::ShaderComposer * sc)
	static int _bind_setShaderComposer(lua_State *L) {
		if (!_lg_typecheck_setShaderComposer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setShaderComposer(osg::ShaderComposer * sc) function, expected prototype:\nvoid osg::State::setShaderComposer(osg::ShaderComposer * sc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ShaderComposer* sc=(Luna< osg::Referenced >::checkSubType< osg::ShaderComposer >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setShaderComposer(osg::ShaderComposer *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setShaderComposer(sc);

		return 0;
	}

	// osg::ShaderComposer * osg::State::getShaderComposer()
	static int _bind_getShaderComposer_overload_1(lua_State *L) {
		if (!_lg_typecheck_getShaderComposer_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ShaderComposer * osg::State::getShaderComposer() function, expected prototype:\nosg::ShaderComposer * osg::State::getShaderComposer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ShaderComposer * osg::State::getShaderComposer(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ShaderComposer * lret = self->getShaderComposer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ShaderComposer >::push(L,lret,false);

		return 1;
	}

	// const osg::ShaderComposer * osg::State::getShaderComposer() const
	static int _bind_getShaderComposer_overload_2(lua_State *L) {
		if (!_lg_typecheck_getShaderComposer_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::ShaderComposer * osg::State::getShaderComposer() const function, expected prototype:\nconst osg::ShaderComposer * osg::State::getShaderComposer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::ShaderComposer * osg::State::getShaderComposer() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ShaderComposer * lret = self->getShaderComposer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ShaderComposer >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::State::getShaderComposer
	static int _bind_getShaderComposer(lua_State *L) {
		if (_lg_typecheck_getShaderComposer_overload_1(L)) return _bind_getShaderComposer_overload_1(L);
		if (_lg_typecheck_getShaderComposer_overload_2(L)) return _bind_getShaderComposer_overload_2(L);

		luaL_error(L, "error in function getShaderComposer, cannot match any of the overloads for function getShaderComposer:\n  getShaderComposer()\n  getShaderComposer()\n");
		return 0;
	}

	// void osg::State::applyShaderCompositionUniform(const osg::Uniform * uniform, unsigned int value = osg::StateAttribute::ON)
	static int _bind_applyShaderCompositionUniform(lua_State *L) {
		if (!_lg_typecheck_applyShaderCompositionUniform(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::applyShaderCompositionUniform(const osg::Uniform * uniform, unsigned int value = osg::StateAttribute::ON) function, expected prototype:\nvoid osg::State::applyShaderCompositionUniform(const osg::Uniform * uniform, unsigned int value = osg::StateAttribute::ON)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Uniform* uniform=(Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,2));
		unsigned int value=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)osg::StateAttribute::ON;

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::applyShaderCompositionUniform(const osg::Uniform *, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->applyShaderCompositionUniform(uniform, value);

		return 0;
	}

	// void osg::State::pushStateSet(const osg::StateSet * dstate)
	static int _bind_pushStateSet(lua_State *L) {
		if (!_lg_typecheck_pushStateSet(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::pushStateSet(const osg::StateSet * dstate) function, expected prototype:\nvoid osg::State::pushStateSet(const osg::StateSet * dstate)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateSet* dstate=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::pushStateSet(const osg::StateSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pushStateSet(dstate);

		return 0;
	}

	// void osg::State::popStateSet()
	static int _bind_popStateSet(lua_State *L) {
		if (!_lg_typecheck_popStateSet(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::popStateSet() function, expected prototype:\nvoid osg::State::popStateSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::popStateSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->popStateSet();

		return 0;
	}

	// void osg::State::popAllStateSets()
	static int _bind_popAllStateSets(lua_State *L) {
		if (!_lg_typecheck_popAllStateSets(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::popAllStateSets() function, expected prototype:\nvoid osg::State::popAllStateSets()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::popAllStateSets(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->popAllStateSets();

		return 0;
	}

	// void osg::State::insertStateSet(unsigned int pos, const osg::StateSet * dstate)
	static int _bind_insertStateSet(lua_State *L) {
		if (!_lg_typecheck_insertStateSet(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::insertStateSet(unsigned int pos, const osg::StateSet * dstate) function, expected prototype:\nvoid osg::State::insertStateSet(unsigned int pos, const osg::StateSet * dstate)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		const osg::StateSet* dstate=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,3));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::insertStateSet(unsigned int, const osg::StateSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->insertStateSet(pos, dstate);

		return 0;
	}

	// void osg::State::removeStateSet(unsigned int pos)
	static int _bind_removeStateSet(lua_State *L) {
		if (!_lg_typecheck_removeStateSet(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::removeStateSet(unsigned int pos) function, expected prototype:\nvoid osg::State::removeStateSet(unsigned int pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::removeStateSet(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeStateSet(pos);

		return 0;
	}

	// unsigned int osg::State::getStateSetStackSize()
	static int _bind_getStateSetStackSize(lua_State *L) {
		if (!_lg_typecheck_getStateSetStackSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::State::getStateSetStackSize() function, expected prototype:\nunsigned int osg::State::getStateSetStackSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::State::getStateSetStackSize(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getStateSetStackSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::State::popStateSetStackToSize(unsigned int size)
	static int _bind_popStateSetStackToSize(lua_State *L) {
		if (!_lg_typecheck_popStateSetStackToSize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::popStateSetStackToSize(unsigned int size) function, expected prototype:\nvoid osg::State::popStateSetStackToSize(unsigned int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::popStateSetStackToSize(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->popStateSetStackToSize(size);

		return 0;
	}

	// void osg::State::captureCurrentState(osg::StateSet & stateset) const
	static int _bind_captureCurrentState(lua_State *L) {
		if (!_lg_typecheck_captureCurrentState(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::captureCurrentState(osg::StateSet & stateset) const function, expected prototype:\nvoid osg::State::captureCurrentState(osg::StateSet & stateset) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* stateset_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));
		if( !stateset_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stateset in osg::State::captureCurrentState function");
		}
		osg::StateSet & stateset=*stateset_ptr;

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::captureCurrentState(osg::StateSet &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->captureCurrentState(stateset);

		return 0;
	}

	// void osg::State::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::reset() function, expected prototype:\nvoid osg::State::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// const osg::Viewport * osg::State::getCurrentViewport() const
	static int _bind_getCurrentViewport(lua_State *L) {
		if (!_lg_typecheck_getCurrentViewport(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Viewport * osg::State::getCurrentViewport() const function, expected prototype:\nconst osg::Viewport * osg::State::getCurrentViewport() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Viewport * osg::State::getCurrentViewport() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Viewport * lret = self->getCurrentViewport();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Viewport >::push(L,lret,false);

		return 1;
	}

	// void osg::State::setInitialViewMatrix(const osg::RefMatrixd * matrix)
	static int _bind_setInitialViewMatrix(lua_State *L) {
		if (!_lg_typecheck_setInitialViewMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setInitialViewMatrix(const osg::RefMatrixd * matrix) function, expected prototype:\nvoid osg::State::setInitialViewMatrix(const osg::RefMatrixd * matrix)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::RefMatrixd* matrix=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setInitialViewMatrix(const osg::RefMatrixd *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setInitialViewMatrix(matrix);

		return 0;
	}

	// const osg::Matrixd & osg::State::getInitialViewMatrix() const
	static int _bind_getInitialViewMatrix(lua_State *L) {
		if (!_lg_typecheck_getInitialViewMatrix(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Matrixd & osg::State::getInitialViewMatrix() const function, expected prototype:\nconst osg::Matrixd & osg::State::getInitialViewMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Matrixd & osg::State::getInitialViewMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Matrixd* lret = &self->getInitialViewMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// const osg::Matrixd & osg::State::getInitialInverseViewMatrix() const
	static int _bind_getInitialInverseViewMatrix(lua_State *L) {
		if (!_lg_typecheck_getInitialInverseViewMatrix(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Matrixd & osg::State::getInitialInverseViewMatrix() const function, expected prototype:\nconst osg::Matrixd & osg::State::getInitialInverseViewMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Matrixd & osg::State::getInitialInverseViewMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Matrixd* lret = &self->getInitialInverseViewMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// void osg::State::applyProjectionMatrix(const osg::RefMatrixd * matrix)
	static int _bind_applyProjectionMatrix(lua_State *L) {
		if (!_lg_typecheck_applyProjectionMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::applyProjectionMatrix(const osg::RefMatrixd * matrix) function, expected prototype:\nvoid osg::State::applyProjectionMatrix(const osg::RefMatrixd * matrix)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::RefMatrixd* matrix=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::applyProjectionMatrix(const osg::RefMatrixd *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->applyProjectionMatrix(matrix);

		return 0;
	}

	// const osg::Matrixd & osg::State::getProjectionMatrix() const
	static int _bind_getProjectionMatrix(lua_State *L) {
		if (!_lg_typecheck_getProjectionMatrix(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Matrixd & osg::State::getProjectionMatrix() const function, expected prototype:\nconst osg::Matrixd & osg::State::getProjectionMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Matrixd & osg::State::getProjectionMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Matrixd* lret = &self->getProjectionMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// void osg::State::applyModelViewMatrix(const osg::RefMatrixd * matrix)
	static int _bind_applyModelViewMatrix_overload_1(lua_State *L) {
		if (!_lg_typecheck_applyModelViewMatrix_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::applyModelViewMatrix(const osg::RefMatrixd * matrix) function, expected prototype:\nvoid osg::State::applyModelViewMatrix(const osg::RefMatrixd * matrix)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::RefMatrixd* matrix=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::applyModelViewMatrix(const osg::RefMatrixd *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->applyModelViewMatrix(matrix);

		return 0;
	}

	// void osg::State::applyModelViewMatrix(const osg::Matrixd & arg1)
	static int _bind_applyModelViewMatrix_overload_2(lua_State *L) {
		if (!_lg_typecheck_applyModelViewMatrix_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::applyModelViewMatrix(const osg::Matrixd & arg1) function, expected prototype:\nvoid osg::State::applyModelViewMatrix(const osg::Matrixd & arg1)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* _arg1_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::State::applyModelViewMatrix function");
		}
		const osg::Matrixd & _arg1=*_arg1_ptr;

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::applyModelViewMatrix(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->applyModelViewMatrix(_arg1);

		return 0;
	}

	// Overload binder for osg::State::applyModelViewMatrix
	static int _bind_applyModelViewMatrix(lua_State *L) {
		if (_lg_typecheck_applyModelViewMatrix_overload_1(L)) return _bind_applyModelViewMatrix_overload_1(L);
		if (_lg_typecheck_applyModelViewMatrix_overload_2(L)) return _bind_applyModelViewMatrix_overload_2(L);

		luaL_error(L, "error in function applyModelViewMatrix, cannot match any of the overloads for function applyModelViewMatrix:\n  applyModelViewMatrix(const osg::RefMatrixd *)\n  applyModelViewMatrix(const osg::Matrixd &)\n");
		return 0;
	}

	// const osg::Matrixd & osg::State::getModelViewMatrix() const
	static int _bind_getModelViewMatrix(lua_State *L) {
		if (!_lg_typecheck_getModelViewMatrix(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Matrixd & osg::State::getModelViewMatrix() const function, expected prototype:\nconst osg::Matrixd & osg::State::getModelViewMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Matrixd & osg::State::getModelViewMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Matrixd* lret = &self->getModelViewMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// void osg::State::setUseModelViewAndProjectionUniforms(bool flag)
	static int _bind_setUseModelViewAndProjectionUniforms(lua_State *L) {
		if (!_lg_typecheck_setUseModelViewAndProjectionUniforms(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setUseModelViewAndProjectionUniforms(bool flag) function, expected prototype:\nvoid osg::State::setUseModelViewAndProjectionUniforms(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setUseModelViewAndProjectionUniforms(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUseModelViewAndProjectionUniforms(flag);

		return 0;
	}

	// bool osg::State::getUseModelViewAndProjectionUniforms() const
	static int _bind_getUseModelViewAndProjectionUniforms(lua_State *L) {
		if (!_lg_typecheck_getUseModelViewAndProjectionUniforms(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::State::getUseModelViewAndProjectionUniforms() const function, expected prototype:\nbool osg::State::getUseModelViewAndProjectionUniforms() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::State::getUseModelViewAndProjectionUniforms() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getUseModelViewAndProjectionUniforms();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::State::updateModelViewAndProjectionMatrixUniforms()
	static int _bind_updateModelViewAndProjectionMatrixUniforms(lua_State *L) {
		if (!_lg_typecheck_updateModelViewAndProjectionMatrixUniforms(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::updateModelViewAndProjectionMatrixUniforms() function, expected prototype:\nvoid osg::State::updateModelViewAndProjectionMatrixUniforms()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::updateModelViewAndProjectionMatrixUniforms(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->updateModelViewAndProjectionMatrixUniforms();

		return 0;
	}

	// void osg::State::applyModelViewAndProjectionUniformsIfRequired()
	static int _bind_applyModelViewAndProjectionUniformsIfRequired(lua_State *L) {
		if (!_lg_typecheck_applyModelViewAndProjectionUniformsIfRequired(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::applyModelViewAndProjectionUniformsIfRequired() function, expected prototype:\nvoid osg::State::applyModelViewAndProjectionUniformsIfRequired()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::applyModelViewAndProjectionUniformsIfRequired(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->applyModelViewAndProjectionUniformsIfRequired();

		return 0;
	}

	// osg::Uniform * osg::State::getModelViewMatrixUniform()
	static int _bind_getModelViewMatrixUniform(lua_State *L) {
		if (!_lg_typecheck_getModelViewMatrixUniform(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform * osg::State::getModelViewMatrixUniform() function, expected prototype:\nosg::Uniform * osg::State::getModelViewMatrixUniform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Uniform * osg::State::getModelViewMatrixUniform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Uniform * lret = self->getModelViewMatrixUniform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Uniform >::push(L,lret,false);

		return 1;
	}

	// osg::Uniform * osg::State::getProjectionMatrixUniform()
	static int _bind_getProjectionMatrixUniform(lua_State *L) {
		if (!_lg_typecheck_getProjectionMatrixUniform(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform * osg::State::getProjectionMatrixUniform() function, expected prototype:\nosg::Uniform * osg::State::getProjectionMatrixUniform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Uniform * osg::State::getProjectionMatrixUniform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Uniform * lret = self->getProjectionMatrixUniform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Uniform >::push(L,lret,false);

		return 1;
	}

	// osg::Uniform * osg::State::getModelViewProjectionMatrixUniform()
	static int _bind_getModelViewProjectionMatrixUniform(lua_State *L) {
		if (!_lg_typecheck_getModelViewProjectionMatrixUniform(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform * osg::State::getModelViewProjectionMatrixUniform() function, expected prototype:\nosg::Uniform * osg::State::getModelViewProjectionMatrixUniform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Uniform * osg::State::getModelViewProjectionMatrixUniform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Uniform * lret = self->getModelViewProjectionMatrixUniform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Uniform >::push(L,lret,false);

		return 1;
	}

	// osg::Uniform * osg::State::getNormalMatrixUniform()
	static int _bind_getNormalMatrixUniform(lua_State *L) {
		if (!_lg_typecheck_getNormalMatrixUniform(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform * osg::State::getNormalMatrixUniform() function, expected prototype:\nosg::Uniform * osg::State::getNormalMatrixUniform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Uniform * osg::State::getNormalMatrixUniform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Uniform * lret = self->getNormalMatrixUniform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Uniform >::push(L,lret,false);

		return 1;
	}

	// osg::Polytope osg::State::getViewFrustum() const
	static int _bind_getViewFrustum(lua_State *L) {
		if (!_lg_typecheck_getViewFrustum(L)) {
			luaL_error(L, "luna typecheck failed in osg::Polytope osg::State::getViewFrustum() const function, expected prototype:\nosg::Polytope osg::State::getViewFrustum() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Polytope osg::State::getViewFrustum() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Polytope stack_lret = self->getViewFrustum();
		osg::Polytope* lret = new osg::Polytope(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Polytope >::push(L,lret,true);

		return 1;
	}

	// void osg::State::setUseVertexAttributeAliasing(bool flag)
	static int _bind_setUseVertexAttributeAliasing(lua_State *L) {
		if (!_lg_typecheck_setUseVertexAttributeAliasing(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setUseVertexAttributeAliasing(bool flag) function, expected prototype:\nvoid osg::State::setUseVertexAttributeAliasing(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setUseVertexAttributeAliasing(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUseVertexAttributeAliasing(flag);

		return 0;
	}

	// bool osg::State::getUseVertexAttributeAliasing() const
	static int _bind_getUseVertexAttributeAliasing(lua_State *L) {
		if (!_lg_typecheck_getUseVertexAttributeAliasing(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::State::getUseVertexAttributeAliasing() const function, expected prototype:\nbool osg::State::getUseVertexAttributeAliasing() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::State::getUseVertexAttributeAliasing() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getUseVertexAttributeAliasing();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const osg::VertexAttribAlias & osg::State::getVertexAlias()
	static int _bind_getVertexAlias(lua_State *L) {
		if (!_lg_typecheck_getVertexAlias(L)) {
			luaL_error(L, "luna typecheck failed in const osg::VertexAttribAlias & osg::State::getVertexAlias() function, expected prototype:\nconst osg::VertexAttribAlias & osg::State::getVertexAlias()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::VertexAttribAlias & osg::State::getVertexAlias(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::VertexAttribAlias* lret = &self->getVertexAlias();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::VertexAttribAlias >::push(L,lret,false);

		return 1;
	}

	// const osg::VertexAttribAlias & osg::State::getNormalAlias()
	static int _bind_getNormalAlias(lua_State *L) {
		if (!_lg_typecheck_getNormalAlias(L)) {
			luaL_error(L, "luna typecheck failed in const osg::VertexAttribAlias & osg::State::getNormalAlias() function, expected prototype:\nconst osg::VertexAttribAlias & osg::State::getNormalAlias()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::VertexAttribAlias & osg::State::getNormalAlias(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::VertexAttribAlias* lret = &self->getNormalAlias();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::VertexAttribAlias >::push(L,lret,false);

		return 1;
	}

	// const osg::VertexAttribAlias & osg::State::getColorAlias()
	static int _bind_getColorAlias(lua_State *L) {
		if (!_lg_typecheck_getColorAlias(L)) {
			luaL_error(L, "luna typecheck failed in const osg::VertexAttribAlias & osg::State::getColorAlias() function, expected prototype:\nconst osg::VertexAttribAlias & osg::State::getColorAlias()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::VertexAttribAlias & osg::State::getColorAlias(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::VertexAttribAlias* lret = &self->getColorAlias();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::VertexAttribAlias >::push(L,lret,false);

		return 1;
	}

	// const osg::VertexAttribAlias & osg::State::getSecondaryColorAlias()
	static int _bind_getSecondaryColorAlias(lua_State *L) {
		if (!_lg_typecheck_getSecondaryColorAlias(L)) {
			luaL_error(L, "luna typecheck failed in const osg::VertexAttribAlias & osg::State::getSecondaryColorAlias() function, expected prototype:\nconst osg::VertexAttribAlias & osg::State::getSecondaryColorAlias()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::VertexAttribAlias & osg::State::getSecondaryColorAlias(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::VertexAttribAlias* lret = &self->getSecondaryColorAlias();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::VertexAttribAlias >::push(L,lret,false);

		return 1;
	}

	// const osg::VertexAttribAlias & osg::State::getFogCoordAlias()
	static int _bind_getFogCoordAlias(lua_State *L) {
		if (!_lg_typecheck_getFogCoordAlias(L)) {
			luaL_error(L, "luna typecheck failed in const osg::VertexAttribAlias & osg::State::getFogCoordAlias() function, expected prototype:\nconst osg::VertexAttribAlias & osg::State::getFogCoordAlias()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::VertexAttribAlias & osg::State::getFogCoordAlias(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::VertexAttribAlias* lret = &self->getFogCoordAlias();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::VertexAttribAlias >::push(L,lret,false);

		return 1;
	}

	// bool osg::State::convertVertexShaderSourceToOsgBuiltIns(std::string & source) const
	static int _bind_convertVertexShaderSourceToOsgBuiltIns(lua_State *L) {
		if (!_lg_typecheck_convertVertexShaderSourceToOsgBuiltIns(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::State::convertVertexShaderSourceToOsgBuiltIns(std::string & source) const function, expected prototype:\nbool osg::State::convertVertexShaderSourceToOsgBuiltIns(std::string & source) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string source(lua_tostring(L,2),lua_objlen(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::State::convertVertexShaderSourceToOsgBuiltIns(std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->convertVertexShaderSourceToOsgBuiltIns(source);
		lua_pushboolean(L,lret?1:0);

		lua_pushlstring(L,source.data(),source.size());
		return 2;
	}

	// void osg::State::apply(const osg::StateSet * dstate)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::apply(const osg::StateSet * dstate) function, expected prototype:\nvoid osg::State::apply(const osg::StateSet * dstate)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateSet* dstate=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::apply(const osg::StateSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(dstate);

		return 0;
	}

	// void osg::State::apply()
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::apply() function, expected prototype:\nvoid osg::State::apply()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::apply(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply();

		return 0;
	}

	// Overload binder for osg::State::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(const osg::StateSet *)\n  apply()\n");
		return 0;
	}

	// void osg::State::applyShaderComposition()
	static int _bind_applyShaderComposition(lua_State *L) {
		if (!_lg_typecheck_applyShaderComposition(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::applyShaderComposition() function, expected prototype:\nvoid osg::State::applyShaderComposition()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::applyShaderComposition(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->applyShaderComposition();

		return 0;
	}

	// void osg::State::setModeValidity(unsigned int mode, bool valid)
	static int _bind_setModeValidity(lua_State *L) {
		if (!_lg_typecheck_setModeValidity(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setModeValidity(unsigned int mode, bool valid) function, expected prototype:\nvoid osg::State::setModeValidity(unsigned int mode, bool valid)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		bool valid=(bool)(lua_toboolean(L,3)==1);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setModeValidity(unsigned int, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setModeValidity(mode, valid);

		return 0;
	}

	// bool osg::State::getModeValidity(unsigned int mode)
	static int _bind_getModeValidity(lua_State *L) {
		if (!_lg_typecheck_getModeValidity(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::State::getModeValidity(unsigned int mode) function, expected prototype:\nbool osg::State::getModeValidity(unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::State::getModeValidity(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getModeValidity(mode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::State::setGlobalDefaultModeValue(unsigned int mode, bool enabled)
	static int _bind_setGlobalDefaultModeValue(lua_State *L) {
		if (!_lg_typecheck_setGlobalDefaultModeValue(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setGlobalDefaultModeValue(unsigned int mode, bool enabled) function, expected prototype:\nvoid osg::State::setGlobalDefaultModeValue(unsigned int mode, bool enabled)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		bool enabled=(bool)(lua_toboolean(L,3)==1);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setGlobalDefaultModeValue(unsigned int, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setGlobalDefaultModeValue(mode, enabled);

		return 0;
	}

	// bool osg::State::getGlobalDefaultModeValue(unsigned int mode)
	static int _bind_getGlobalDefaultModeValue(lua_State *L) {
		if (!_lg_typecheck_getGlobalDefaultModeValue(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::State::getGlobalDefaultModeValue(unsigned int mode) function, expected prototype:\nbool osg::State::getGlobalDefaultModeValue(unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::State::getGlobalDefaultModeValue(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getGlobalDefaultModeValue(mode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::State::applyMode(unsigned int mode, bool enabled)
	static int _bind_applyMode(lua_State *L) {
		if (!_lg_typecheck_applyMode(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::State::applyMode(unsigned int mode, bool enabled) function, expected prototype:\nbool osg::State::applyMode(unsigned int mode, bool enabled)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		bool enabled=(bool)(lua_toboolean(L,3)==1);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::State::applyMode(unsigned int, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->applyMode(mode, enabled);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::State::setGlobalDefaultTextureModeValue(unsigned int unit, unsigned int mode, bool enabled)
	static int _bind_setGlobalDefaultTextureModeValue(lua_State *L) {
		if (!_lg_typecheck_setGlobalDefaultTextureModeValue(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setGlobalDefaultTextureModeValue(unsigned int unit, unsigned int mode, bool enabled) function, expected prototype:\nvoid osg::State::setGlobalDefaultTextureModeValue(unsigned int unit, unsigned int mode, bool enabled)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		unsigned int mode=(unsigned int)lua_tointeger(L,3);
		bool enabled=(bool)(lua_toboolean(L,4)==1);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setGlobalDefaultTextureModeValue(unsigned int, unsigned int, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setGlobalDefaultTextureModeValue(unit, mode, enabled);

		return 0;
	}

	// bool osg::State::getGlobalDefaultTextureModeValue(unsigned int unit, unsigned int mode)
	static int _bind_getGlobalDefaultTextureModeValue(lua_State *L) {
		if (!_lg_typecheck_getGlobalDefaultTextureModeValue(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::State::getGlobalDefaultTextureModeValue(unsigned int unit, unsigned int mode) function, expected prototype:\nbool osg::State::getGlobalDefaultTextureModeValue(unsigned int unit, unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		unsigned int mode=(unsigned int)lua_tointeger(L,3);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::State::getGlobalDefaultTextureModeValue(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getGlobalDefaultTextureModeValue(unit, mode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::State::applyTextureMode(unsigned int unit, unsigned int mode, bool enabled)
	static int _bind_applyTextureMode(lua_State *L) {
		if (!_lg_typecheck_applyTextureMode(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::State::applyTextureMode(unsigned int unit, unsigned int mode, bool enabled) function, expected prototype:\nbool osg::State::applyTextureMode(unsigned int unit, unsigned int mode, bool enabled)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		unsigned int mode=(unsigned int)lua_tointeger(L,3);
		bool enabled=(bool)(lua_toboolean(L,4)==1);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::State::applyTextureMode(unsigned int, unsigned int, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->applyTextureMode(unit, mode, enabled);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::State::setGlobalDefaultAttribute(const osg::StateAttribute * attribute)
	static int _bind_setGlobalDefaultAttribute(lua_State *L) {
		if (!_lg_typecheck_setGlobalDefaultAttribute(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setGlobalDefaultAttribute(const osg::StateAttribute * attribute) function, expected prototype:\nvoid osg::State::setGlobalDefaultAttribute(const osg::StateAttribute * attribute)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* attribute=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setGlobalDefaultAttribute(const osg::StateAttribute *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setGlobalDefaultAttribute(attribute);

		return 0;
	}

	// const osg::StateAttribute * osg::State::getGlobalDefaultAttribute(osg::StateAttribute::Type type, unsigned int member = 0)
	static int _bind_getGlobalDefaultAttribute(lua_State *L) {
		if (!_lg_typecheck_getGlobalDefaultAttribute(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateAttribute * osg::State::getGlobalDefaultAttribute(osg::StateAttribute::Type type, unsigned int member = 0) function, expected prototype:\nconst osg::StateAttribute * osg::State::getGlobalDefaultAttribute(osg::StateAttribute::Type type, unsigned int member = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::StateAttribute::Type type=(osg::StateAttribute::Type)lua_tointeger(L,2);
		unsigned int member=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateAttribute * osg::State::getGlobalDefaultAttribute(osg::StateAttribute::Type, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateAttribute * lret = self->getGlobalDefaultAttribute(type, member);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateAttribute >::push(L,lret,false);

		return 1;
	}

	// bool osg::State::applyAttribute(const osg::StateAttribute * attribute)
	static int _bind_applyAttribute(lua_State *L) {
		if (!_lg_typecheck_applyAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::State::applyAttribute(const osg::StateAttribute * attribute) function, expected prototype:\nbool osg::State::applyAttribute(const osg::StateAttribute * attribute)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* attribute=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::State::applyAttribute(const osg::StateAttribute *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->applyAttribute(attribute);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::State::setGlobalDefaultTextureAttribute(unsigned int unit, const osg::StateAttribute * attribute)
	static int _bind_setGlobalDefaultTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_setGlobalDefaultTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setGlobalDefaultTextureAttribute(unsigned int unit, const osg::StateAttribute * attribute) function, expected prototype:\nvoid osg::State::setGlobalDefaultTextureAttribute(unsigned int unit, const osg::StateAttribute * attribute)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		const osg::StateAttribute* attribute=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,3));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setGlobalDefaultTextureAttribute(unsigned int, const osg::StateAttribute *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setGlobalDefaultTextureAttribute(unit, attribute);

		return 0;
	}

	// const osg::StateAttribute * osg::State::getGlobalDefaultTextureAttribute(unsigned int unit, osg::StateAttribute::Type type, unsigned int member = 0)
	static int _bind_getGlobalDefaultTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_getGlobalDefaultTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateAttribute * osg::State::getGlobalDefaultTextureAttribute(unsigned int unit, osg::StateAttribute::Type type, unsigned int member = 0) function, expected prototype:\nconst osg::StateAttribute * osg::State::getGlobalDefaultTextureAttribute(unsigned int unit, osg::StateAttribute::Type type, unsigned int member = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		osg::StateAttribute::Type type=(osg::StateAttribute::Type)lua_tointeger(L,3);
		unsigned int member=luatop>3 ? (unsigned int)lua_tointeger(L,4) : (unsigned int)0;

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateAttribute * osg::State::getGlobalDefaultTextureAttribute(unsigned int, osg::StateAttribute::Type, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateAttribute * lret = self->getGlobalDefaultTextureAttribute(unit, type, member);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateAttribute >::push(L,lret,false);

		return 1;
	}

	// bool osg::State::applyTextureAttribute(unsigned int unit, const osg::StateAttribute * attribute)
	static int _bind_applyTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_applyTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::State::applyTextureAttribute(unsigned int unit, const osg::StateAttribute * attribute) function, expected prototype:\nbool osg::State::applyTextureAttribute(unsigned int unit, const osg::StateAttribute * attribute)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		const osg::StateAttribute* attribute=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,3));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::State::applyTextureAttribute(unsigned int, const osg::StateAttribute *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->applyTextureAttribute(unit, attribute);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::State::haveAppliedMode(unsigned int mode, unsigned int value)
	static int _bind_haveAppliedMode_overload_1(lua_State *L) {
		if (!_lg_typecheck_haveAppliedMode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::haveAppliedMode(unsigned int mode, unsigned int value) function, expected prototype:\nvoid osg::State::haveAppliedMode(unsigned int mode, unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		unsigned int value=(unsigned int)lua_tointeger(L,3);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::haveAppliedMode(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->haveAppliedMode(mode, value);

		return 0;
	}

	// void osg::State::haveAppliedMode(unsigned int mode)
	static int _bind_haveAppliedMode_overload_2(lua_State *L) {
		if (!_lg_typecheck_haveAppliedMode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::haveAppliedMode(unsigned int mode) function, expected prototype:\nvoid osg::State::haveAppliedMode(unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::haveAppliedMode(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->haveAppliedMode(mode);

		return 0;
	}

	// Overload binder for osg::State::haveAppliedMode
	static int _bind_haveAppliedMode(lua_State *L) {
		if (_lg_typecheck_haveAppliedMode_overload_1(L)) return _bind_haveAppliedMode_overload_1(L);
		if (_lg_typecheck_haveAppliedMode_overload_2(L)) return _bind_haveAppliedMode_overload_2(L);

		luaL_error(L, "error in function haveAppliedMode, cannot match any of the overloads for function haveAppliedMode:\n  haveAppliedMode(unsigned int, unsigned int)\n  haveAppliedMode(unsigned int)\n");
		return 0;
	}

	// void osg::State::haveAppliedAttribute(const osg::StateAttribute * attribute)
	static int _bind_haveAppliedAttribute_overload_1(lua_State *L) {
		if (!_lg_typecheck_haveAppliedAttribute_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::haveAppliedAttribute(const osg::StateAttribute * attribute) function, expected prototype:\nvoid osg::State::haveAppliedAttribute(const osg::StateAttribute * attribute)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* attribute=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::haveAppliedAttribute(const osg::StateAttribute *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->haveAppliedAttribute(attribute);

		return 0;
	}

	// void osg::State::haveAppliedAttribute(osg::StateAttribute::Type type, unsigned int member = 0)
	static int _bind_haveAppliedAttribute_overload_2(lua_State *L) {
		if (!_lg_typecheck_haveAppliedAttribute_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::haveAppliedAttribute(osg::StateAttribute::Type type, unsigned int member = 0) function, expected prototype:\nvoid osg::State::haveAppliedAttribute(osg::StateAttribute::Type type, unsigned int member = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::StateAttribute::Type type=(osg::StateAttribute::Type)lua_tointeger(L,2);
		unsigned int member=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::haveAppliedAttribute(osg::StateAttribute::Type, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->haveAppliedAttribute(type, member);

		return 0;
	}

	// Overload binder for osg::State::haveAppliedAttribute
	static int _bind_haveAppliedAttribute(lua_State *L) {
		if (_lg_typecheck_haveAppliedAttribute_overload_1(L)) return _bind_haveAppliedAttribute_overload_1(L);
		if (_lg_typecheck_haveAppliedAttribute_overload_2(L)) return _bind_haveAppliedAttribute_overload_2(L);

		luaL_error(L, "error in function haveAppliedAttribute, cannot match any of the overloads for function haveAppliedAttribute:\n  haveAppliedAttribute(const osg::StateAttribute *)\n  haveAppliedAttribute(osg::StateAttribute::Type, unsigned int)\n");
		return 0;
	}

	// bool osg::State::getLastAppliedMode(unsigned int mode) const
	static int _bind_getLastAppliedMode(lua_State *L) {
		if (!_lg_typecheck_getLastAppliedMode(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::State::getLastAppliedMode(unsigned int mode) const function, expected prototype:\nbool osg::State::getLastAppliedMode(unsigned int mode) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::State::getLastAppliedMode(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getLastAppliedMode(mode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const osg::StateAttribute * osg::State::getLastAppliedAttribute(osg::StateAttribute::Type type, unsigned int member = 0) const
	static int _bind_getLastAppliedAttribute(lua_State *L) {
		if (!_lg_typecheck_getLastAppliedAttribute(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateAttribute * osg::State::getLastAppliedAttribute(osg::StateAttribute::Type type, unsigned int member = 0) const function, expected prototype:\nconst osg::StateAttribute * osg::State::getLastAppliedAttribute(osg::StateAttribute::Type type, unsigned int member = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::StateAttribute::Type type=(osg::StateAttribute::Type)lua_tointeger(L,2);
		unsigned int member=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateAttribute * osg::State::getLastAppliedAttribute(osg::StateAttribute::Type, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateAttribute * lret = self->getLastAppliedAttribute(type, member);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateAttribute >::push(L,lret,false);

		return 1;
	}

	// void osg::State::haveAppliedTextureMode(unsigned int unit, unsigned int mode, unsigned int value)
	static int _bind_haveAppliedTextureMode_overload_1(lua_State *L) {
		if (!_lg_typecheck_haveAppliedTextureMode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::haveAppliedTextureMode(unsigned int unit, unsigned int mode, unsigned int value) function, expected prototype:\nvoid osg::State::haveAppliedTextureMode(unsigned int unit, unsigned int mode, unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		unsigned int mode=(unsigned int)lua_tointeger(L,3);
		unsigned int value=(unsigned int)lua_tointeger(L,4);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::haveAppliedTextureMode(unsigned int, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->haveAppliedTextureMode(unit, mode, value);

		return 0;
	}

	// void osg::State::haveAppliedTextureMode(unsigned int unit, unsigned int mode)
	static int _bind_haveAppliedTextureMode_overload_2(lua_State *L) {
		if (!_lg_typecheck_haveAppliedTextureMode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::haveAppliedTextureMode(unsigned int unit, unsigned int mode) function, expected prototype:\nvoid osg::State::haveAppliedTextureMode(unsigned int unit, unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		unsigned int mode=(unsigned int)lua_tointeger(L,3);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::haveAppliedTextureMode(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->haveAppliedTextureMode(unit, mode);

		return 0;
	}

	// Overload binder for osg::State::haveAppliedTextureMode
	static int _bind_haveAppliedTextureMode(lua_State *L) {
		if (_lg_typecheck_haveAppliedTextureMode_overload_1(L)) return _bind_haveAppliedTextureMode_overload_1(L);
		if (_lg_typecheck_haveAppliedTextureMode_overload_2(L)) return _bind_haveAppliedTextureMode_overload_2(L);

		luaL_error(L, "error in function haveAppliedTextureMode, cannot match any of the overloads for function haveAppliedTextureMode:\n  haveAppliedTextureMode(unsigned int, unsigned int, unsigned int)\n  haveAppliedTextureMode(unsigned int, unsigned int)\n");
		return 0;
	}

	// void osg::State::haveAppliedTextureAttribute(unsigned int unit, const osg::StateAttribute * attribute)
	static int _bind_haveAppliedTextureAttribute_overload_1(lua_State *L) {
		if (!_lg_typecheck_haveAppliedTextureAttribute_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::haveAppliedTextureAttribute(unsigned int unit, const osg::StateAttribute * attribute) function, expected prototype:\nvoid osg::State::haveAppliedTextureAttribute(unsigned int unit, const osg::StateAttribute * attribute)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		const osg::StateAttribute* attribute=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,3));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::haveAppliedTextureAttribute(unsigned int, const osg::StateAttribute *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->haveAppliedTextureAttribute(unit, attribute);

		return 0;
	}

	// void osg::State::haveAppliedTextureAttribute(unsigned int unit, osg::StateAttribute::Type type, unsigned int member = 0)
	static int _bind_haveAppliedTextureAttribute_overload_2(lua_State *L) {
		if (!_lg_typecheck_haveAppliedTextureAttribute_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::haveAppliedTextureAttribute(unsigned int unit, osg::StateAttribute::Type type, unsigned int member = 0) function, expected prototype:\nvoid osg::State::haveAppliedTextureAttribute(unsigned int unit, osg::StateAttribute::Type type, unsigned int member = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		osg::StateAttribute::Type type=(osg::StateAttribute::Type)lua_tointeger(L,3);
		unsigned int member=luatop>3 ? (unsigned int)lua_tointeger(L,4) : (unsigned int)0;

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::haveAppliedTextureAttribute(unsigned int, osg::StateAttribute::Type, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->haveAppliedTextureAttribute(unit, type, member);

		return 0;
	}

	// Overload binder for osg::State::haveAppliedTextureAttribute
	static int _bind_haveAppliedTextureAttribute(lua_State *L) {
		if (_lg_typecheck_haveAppliedTextureAttribute_overload_1(L)) return _bind_haveAppliedTextureAttribute_overload_1(L);
		if (_lg_typecheck_haveAppliedTextureAttribute_overload_2(L)) return _bind_haveAppliedTextureAttribute_overload_2(L);

		luaL_error(L, "error in function haveAppliedTextureAttribute, cannot match any of the overloads for function haveAppliedTextureAttribute:\n  haveAppliedTextureAttribute(unsigned int, const osg::StateAttribute *)\n  haveAppliedTextureAttribute(unsigned int, osg::StateAttribute::Type, unsigned int)\n");
		return 0;
	}

	// bool osg::State::getLastAppliedTextureMode(unsigned int unit, unsigned int mode) const
	static int _bind_getLastAppliedTextureMode(lua_State *L) {
		if (!_lg_typecheck_getLastAppliedTextureMode(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::State::getLastAppliedTextureMode(unsigned int unit, unsigned int mode) const function, expected prototype:\nbool osg::State::getLastAppliedTextureMode(unsigned int unit, unsigned int mode) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		unsigned int mode=(unsigned int)lua_tointeger(L,3);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::State::getLastAppliedTextureMode(unsigned int, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getLastAppliedTextureMode(unit, mode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const osg::StateAttribute * osg::State::getLastAppliedTextureAttribute(unsigned int unit, osg::StateAttribute::Type type, unsigned int member = 0) const
	static int _bind_getLastAppliedTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_getLastAppliedTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateAttribute * osg::State::getLastAppliedTextureAttribute(unsigned int unit, osg::StateAttribute::Type type, unsigned int member = 0) const function, expected prototype:\nconst osg::StateAttribute * osg::State::getLastAppliedTextureAttribute(unsigned int unit, osg::StateAttribute::Type type, unsigned int member = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		osg::StateAttribute::Type type=(osg::StateAttribute::Type)lua_tointeger(L,3);
		unsigned int member=luatop>3 ? (unsigned int)lua_tointeger(L,4) : (unsigned int)0;

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateAttribute * osg::State::getLastAppliedTextureAttribute(unsigned int, osg::StateAttribute::Type, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateAttribute * lret = self->getLastAppliedTextureAttribute(unit, type, member);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateAttribute >::push(L,lret,false);

		return 1;
	}

	// void osg::State::dirtyAllModes()
	static int _bind_dirtyAllModes(lua_State *L) {
		if (!_lg_typecheck_dirtyAllModes(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::dirtyAllModes() function, expected prototype:\nvoid osg::State::dirtyAllModes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::dirtyAllModes(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dirtyAllModes();

		return 0;
	}

	// void osg::State::dirtyAllAttributes()
	static int _bind_dirtyAllAttributes(lua_State *L) {
		if (!_lg_typecheck_dirtyAllAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::dirtyAllAttributes() function, expected prototype:\nvoid osg::State::dirtyAllAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::dirtyAllAttributes(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dirtyAllAttributes();

		return 0;
	}

	// void osg::State::disableAllVertexArrays()
	static int _bind_disableAllVertexArrays(lua_State *L) {
		if (!_lg_typecheck_disableAllVertexArrays(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::disableAllVertexArrays() function, expected prototype:\nvoid osg::State::disableAllVertexArrays()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::disableAllVertexArrays(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->disableAllVertexArrays();

		return 0;
	}

	// void osg::State::dirtyAllVertexArrays()
	static int _bind_dirtyAllVertexArrays(lua_State *L) {
		if (!_lg_typecheck_dirtyAllVertexArrays(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::dirtyAllVertexArrays() function, expected prototype:\nvoid osg::State::dirtyAllVertexArrays()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::dirtyAllVertexArrays(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dirtyAllVertexArrays();

		return 0;
	}

	// void osg::State::setCurrentVertexBufferObject(osg::GLBufferObject * vbo)
	static int _bind_setCurrentVertexBufferObject(lua_State *L) {
		if (!_lg_typecheck_setCurrentVertexBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setCurrentVertexBufferObject(osg::GLBufferObject * vbo) function, expected prototype:\nvoid osg::State::setCurrentVertexBufferObject(osg::GLBufferObject * vbo)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GLBufferObject* vbo=(Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setCurrentVertexBufferObject(osg::GLBufferObject *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCurrentVertexBufferObject(vbo);

		return 0;
	}

	// const osg::GLBufferObject * osg::State::getCurrentVertexBufferObject()
	static int _bind_getCurrentVertexBufferObject(lua_State *L) {
		if (!_lg_typecheck_getCurrentVertexBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in const osg::GLBufferObject * osg::State::getCurrentVertexBufferObject() function, expected prototype:\nconst osg::GLBufferObject * osg::State::getCurrentVertexBufferObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::GLBufferObject * osg::State::getCurrentVertexBufferObject(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::GLBufferObject * lret = self->getCurrentVertexBufferObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GLBufferObject >::push(L,lret,false);

		return 1;
	}

	// void osg::State::bindVertexBufferObject(osg::GLBufferObject * vbo)
	static int _bind_bindVertexBufferObject(lua_State *L) {
		if (!_lg_typecheck_bindVertexBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::bindVertexBufferObject(osg::GLBufferObject * vbo) function, expected prototype:\nvoid osg::State::bindVertexBufferObject(osg::GLBufferObject * vbo)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GLBufferObject* vbo=(Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::bindVertexBufferObject(osg::GLBufferObject *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->bindVertexBufferObject(vbo);

		return 0;
	}

	// void osg::State::unbindVertexBufferObject()
	static int _bind_unbindVertexBufferObject(lua_State *L) {
		if (!_lg_typecheck_unbindVertexBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::unbindVertexBufferObject() function, expected prototype:\nvoid osg::State::unbindVertexBufferObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::unbindVertexBufferObject(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->unbindVertexBufferObject();

		return 0;
	}

	// void osg::State::setCurrentElementBufferObject(osg::GLBufferObject * ebo)
	static int _bind_setCurrentElementBufferObject(lua_State *L) {
		if (!_lg_typecheck_setCurrentElementBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setCurrentElementBufferObject(osg::GLBufferObject * ebo) function, expected prototype:\nvoid osg::State::setCurrentElementBufferObject(osg::GLBufferObject * ebo)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GLBufferObject* ebo=(Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setCurrentElementBufferObject(osg::GLBufferObject *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCurrentElementBufferObject(ebo);

		return 0;
	}

	// const osg::GLBufferObject * osg::State::getCurrentElementBufferObject()
	static int _bind_getCurrentElementBufferObject(lua_State *L) {
		if (!_lg_typecheck_getCurrentElementBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in const osg::GLBufferObject * osg::State::getCurrentElementBufferObject() function, expected prototype:\nconst osg::GLBufferObject * osg::State::getCurrentElementBufferObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::GLBufferObject * osg::State::getCurrentElementBufferObject(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::GLBufferObject * lret = self->getCurrentElementBufferObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GLBufferObject >::push(L,lret,false);

		return 1;
	}

	// void osg::State::bindElementBufferObject(osg::GLBufferObject * ebo)
	static int _bind_bindElementBufferObject(lua_State *L) {
		if (!_lg_typecheck_bindElementBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::bindElementBufferObject(osg::GLBufferObject * ebo) function, expected prototype:\nvoid osg::State::bindElementBufferObject(osg::GLBufferObject * ebo)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GLBufferObject* ebo=(Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::bindElementBufferObject(osg::GLBufferObject *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->bindElementBufferObject(ebo);

		return 0;
	}

	// void osg::State::unbindElementBufferObject()
	static int _bind_unbindElementBufferObject(lua_State *L) {
		if (!_lg_typecheck_unbindElementBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::unbindElementBufferObject() function, expected prototype:\nvoid osg::State::unbindElementBufferObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::unbindElementBufferObject(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->unbindElementBufferObject();

		return 0;
	}

	// void osg::State::setCurrentPixelBufferObject(osg::GLBufferObject * pbo)
	static int _bind_setCurrentPixelBufferObject(lua_State *L) {
		if (!_lg_typecheck_setCurrentPixelBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setCurrentPixelBufferObject(osg::GLBufferObject * pbo) function, expected prototype:\nvoid osg::State::setCurrentPixelBufferObject(osg::GLBufferObject * pbo)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GLBufferObject* pbo=(Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setCurrentPixelBufferObject(osg::GLBufferObject *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCurrentPixelBufferObject(pbo);

		return 0;
	}

	// const osg::GLBufferObject * osg::State::getCurrentPixelBufferObject()
	static int _bind_getCurrentPixelBufferObject(lua_State *L) {
		if (!_lg_typecheck_getCurrentPixelBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in const osg::GLBufferObject * osg::State::getCurrentPixelBufferObject() function, expected prototype:\nconst osg::GLBufferObject * osg::State::getCurrentPixelBufferObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::GLBufferObject * osg::State::getCurrentPixelBufferObject(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::GLBufferObject * lret = self->getCurrentPixelBufferObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GLBufferObject >::push(L,lret,false);

		return 1;
	}

	// void osg::State::bindPixelBufferObject(osg::GLBufferObject * pbo)
	static int _bind_bindPixelBufferObject(lua_State *L) {
		if (!_lg_typecheck_bindPixelBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::bindPixelBufferObject(osg::GLBufferObject * pbo) function, expected prototype:\nvoid osg::State::bindPixelBufferObject(osg::GLBufferObject * pbo)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GLBufferObject* pbo=(Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::bindPixelBufferObject(osg::GLBufferObject *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->bindPixelBufferObject(pbo);

		return 0;
	}

	// void osg::State::unbindPixelBufferObject()
	static int _bind_unbindPixelBufferObject(lua_State *L) {
		if (!_lg_typecheck_unbindPixelBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::unbindPixelBufferObject() function, expected prototype:\nvoid osg::State::unbindPixelBufferObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::unbindPixelBufferObject(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->unbindPixelBufferObject();

		return 0;
	}

	// void osg::State::drawQuads(int first, int count, int primCount = 0)
	static int _bind_drawQuads(lua_State *L) {
		if (!_lg_typecheck_drawQuads(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::drawQuads(int first, int count, int primCount = 0) function, expected prototype:\nvoid osg::State::drawQuads(int first, int count, int primCount = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int first=(int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		int primCount=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::drawQuads(int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawQuads(first, count, primCount);

		return 0;
	}

	// void osg::State::glDrawArraysInstanced(unsigned int mode, int first, int count, int primcount)
	static int _bind_glDrawArraysInstanced(lua_State *L) {
		if (!_lg_typecheck_glDrawArraysInstanced(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::glDrawArraysInstanced(unsigned int mode, int first, int count, int primcount) function, expected prototype:\nvoid osg::State::glDrawArraysInstanced(unsigned int mode, int first, int count, int primcount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		int first=(int)lua_tointeger(L,3);
		int count=(int)lua_tointeger(L,4);
		int primcount=(int)lua_tointeger(L,5);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::glDrawArraysInstanced(unsigned int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->glDrawArraysInstanced(mode, first, count, primcount);

		return 0;
	}

	// void osg::State::glDrawElementsInstanced(unsigned int mode, int count, unsigned int type, const void * indices, int primcount)
	static int _bind_glDrawElementsInstanced(lua_State *L) {
		if (!_lg_typecheck_glDrawElementsInstanced(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::glDrawElementsInstanced(unsigned int mode, int count, unsigned int type, const void * indices, int primcount) function, expected prototype:\nvoid osg::State::glDrawElementsInstanced(unsigned int mode, int count, unsigned int type, const void * indices, int primcount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		unsigned int type=(unsigned int)lua_tointeger(L,4);
		const void* indices=(Luna< void >::check(L,5));
		int primcount=(int)lua_tointeger(L,6);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::glDrawElementsInstanced(unsigned int, int, unsigned int, const void *, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->glDrawElementsInstanced(mode, count, type, indices, primcount);

		return 0;
	}

	// void osg::State::Vertex(float x, float y, float z, float w = 1.0f)
	static int _bind_Vertex(lua_State *L) {
		if (!_lg_typecheck_Vertex(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::Vertex(float x, float y, float z, float w = 1.0f) function, expected prototype:\nvoid osg::State::Vertex(float x, float y, float z, float w = 1.0f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);
		float w=luatop>4 ? (float)lua_tonumber(L,5) : (float)1.0f;

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::Vertex(float, float, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Vertex(x, y, z, w);

		return 0;
	}

	// void osg::State::Color(float r, float g, float b, float a = 1.0f)
	static int _bind_Color(lua_State *L) {
		if (!_lg_typecheck_Color(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::Color(float r, float g, float b, float a = 1.0f) function, expected prototype:\nvoid osg::State::Color(float r, float g, float b, float a = 1.0f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float r=(float)lua_tonumber(L,2);
		float g=(float)lua_tonumber(L,3);
		float b=(float)lua_tonumber(L,4);
		float a=luatop>4 ? (float)lua_tonumber(L,5) : (float)1.0f;

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::Color(float, float, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Color(r, g, b, a);

		return 0;
	}

	// void osg::State::Normal(float x, float y, float z)
	static int _bind_Normal(lua_State *L) {
		if (!_lg_typecheck_Normal(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::Normal(float x, float y, float z) function, expected prototype:\nvoid osg::State::Normal(float x, float y, float z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::Normal(float, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Normal(x, y, z);

		return 0;
	}

	// void osg::State::TexCoord(float x, float y = 0.0f, float z = 0.0f, float w = 1.0f)
	static int _bind_TexCoord(lua_State *L) {
		if (!_lg_typecheck_TexCoord(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::TexCoord(float x, float y = 0.0f, float z = 0.0f, float w = 1.0f) function, expected prototype:\nvoid osg::State::TexCoord(float x, float y = 0.0f, float z = 0.0f, float w = 1.0f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float x=(float)lua_tonumber(L,2);
		float y=luatop>2 ? (float)lua_tonumber(L,3) : (float)0.0f;
		float z=luatop>3 ? (float)lua_tonumber(L,4) : (float)0.0f;
		float w=luatop>4 ? (float)lua_tonumber(L,5) : (float)1.0f;

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::TexCoord(float, float, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexCoord(x, y, z, w);

		return 0;
	}

	// void osg::State::MultiTexCoord(unsigned int unit, float x, float y = 0.0f, float z = 0.0f, float w = 1.0f)
	static int _bind_MultiTexCoord(lua_State *L) {
		if (!_lg_typecheck_MultiTexCoord(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::MultiTexCoord(unsigned int unit, float x, float y = 0.0f, float z = 0.0f, float w = 1.0f) function, expected prototype:\nvoid osg::State::MultiTexCoord(unsigned int unit, float x, float y = 0.0f, float z = 0.0f, float w = 1.0f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		float x=(float)lua_tonumber(L,3);
		float y=luatop>3 ? (float)lua_tonumber(L,4) : (float)0.0f;
		float z=luatop>4 ? (float)lua_tonumber(L,5) : (float)0.0f;
		float w=luatop>5 ? (float)lua_tonumber(L,6) : (float)1.0f;

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::MultiTexCoord(unsigned int, float, float, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MultiTexCoord(unit, x, y, z, w);

		return 0;
	}

	// void osg::State::VerteAttrib(unsigned int location, float x, float y = 0.0f, float z = 0.0f, float w = 0.0f)
	static int _bind_VerteAttrib(lua_State *L) {
		if (!_lg_typecheck_VerteAttrib(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::VerteAttrib(unsigned int location, float x, float y = 0.0f, float z = 0.0f, float w = 0.0f) function, expected prototype:\nvoid osg::State::VerteAttrib(unsigned int location, float x, float y = 0.0f, float z = 0.0f, float w = 0.0f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int location=(unsigned int)lua_tointeger(L,2);
		float x=(float)lua_tonumber(L,3);
		float y=luatop>3 ? (float)lua_tonumber(L,4) : (float)0.0f;
		float z=luatop>4 ? (float)lua_tonumber(L,5) : (float)0.0f;
		float w=luatop>5 ? (float)lua_tonumber(L,6) : (float)0.0f;

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::VerteAttrib(unsigned int, float, float, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VerteAttrib(location, x, y, z, w);

		return 0;
	}

	// void osg::State::lazyDisablingOfVertexAttributes()
	static int _bind_lazyDisablingOfVertexAttributes(lua_State *L) {
		if (!_lg_typecheck_lazyDisablingOfVertexAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::lazyDisablingOfVertexAttributes() function, expected prototype:\nvoid osg::State::lazyDisablingOfVertexAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::lazyDisablingOfVertexAttributes(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->lazyDisablingOfVertexAttributes();

		return 0;
	}

	// void osg::State::applyDisablingOfVertexAttributes()
	static int _bind_applyDisablingOfVertexAttributes(lua_State *L) {
		if (!_lg_typecheck_applyDisablingOfVertexAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::applyDisablingOfVertexAttributes() function, expected prototype:\nvoid osg::State::applyDisablingOfVertexAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::applyDisablingOfVertexAttributes(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->applyDisablingOfVertexAttributes();

		return 0;
	}

	// void osg::State::setInterleavedArrays(unsigned int format, int stride, const void * pointer)
	static int _bind_setInterleavedArrays(lua_State *L) {
		if (!_lg_typecheck_setInterleavedArrays(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setInterleavedArrays(unsigned int format, int stride, const void * pointer) function, expected prototype:\nvoid osg::State::setInterleavedArrays(unsigned int format, int stride, const void * pointer)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int format=(unsigned int)lua_tointeger(L,2);
		int stride=(int)lua_tointeger(L,3);
		const void* pointer=(Luna< void >::check(L,4));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setInterleavedArrays(unsigned int, int, const void *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setInterleavedArrays(format, stride, pointer);

		return 0;
	}

	// void osg::State::setVertexPointer(const osg::Array * array)
	static int _bind_setVertexPointer_overload_1(lua_State *L) {
		if (!_lg_typecheck_setVertexPointer_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setVertexPointer(const osg::Array * array) function, expected prototype:\nvoid osg::State::setVertexPointer(const osg::Array * array)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setVertexPointer(const osg::Array *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexPointer(array);

		return 0;
	}

	// void osg::State::setVertexPointer(int size, unsigned int type, int stride, const void * ptr)
	static int _bind_setVertexPointer_overload_2(lua_State *L) {
		if (!_lg_typecheck_setVertexPointer_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setVertexPointer(int size, unsigned int type, int stride, const void * ptr) function, expected prototype:\nvoid osg::State::setVertexPointer(int size, unsigned int type, int stride, const void * ptr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int size=(int)lua_tointeger(L,2);
		unsigned int type=(unsigned int)lua_tointeger(L,3);
		int stride=(int)lua_tointeger(L,4);
		const void* ptr=(Luna< void >::check(L,5));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setVertexPointer(int, unsigned int, int, const void *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexPointer(size, type, stride, ptr);

		return 0;
	}

	// Overload binder for osg::State::setVertexPointer
	static int _bind_setVertexPointer(lua_State *L) {
		if (_lg_typecheck_setVertexPointer_overload_1(L)) return _bind_setVertexPointer_overload_1(L);
		if (_lg_typecheck_setVertexPointer_overload_2(L)) return _bind_setVertexPointer_overload_2(L);

		luaL_error(L, "error in function setVertexPointer, cannot match any of the overloads for function setVertexPointer:\n  setVertexPointer(const osg::Array *)\n  setVertexPointer(int, unsigned int, int, const void *)\n");
		return 0;
	}

	// void osg::State::disableVertexPointer()
	static int _bind_disableVertexPointer(lua_State *L) {
		if (!_lg_typecheck_disableVertexPointer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::disableVertexPointer() function, expected prototype:\nvoid osg::State::disableVertexPointer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::disableVertexPointer(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->disableVertexPointer();

		return 0;
	}

	// void osg::State::dirtyVertexPointer()
	static int _bind_dirtyVertexPointer(lua_State *L) {
		if (!_lg_typecheck_dirtyVertexPointer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::dirtyVertexPointer() function, expected prototype:\nvoid osg::State::dirtyVertexPointer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::dirtyVertexPointer(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dirtyVertexPointer();

		return 0;
	}

	// void osg::State::setNormalPointer(const osg::Array * array)
	static int _bind_setNormalPointer_overload_1(lua_State *L) {
		if (!_lg_typecheck_setNormalPointer_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setNormalPointer(const osg::Array * array) function, expected prototype:\nvoid osg::State::setNormalPointer(const osg::Array * array)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setNormalPointer(const osg::Array *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNormalPointer(array);

		return 0;
	}

	// void osg::State::setNormalPointer(unsigned int type, int stride, const void * ptr)
	static int _bind_setNormalPointer_overload_2(lua_State *L) {
		if (!_lg_typecheck_setNormalPointer_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setNormalPointer(unsigned int type, int stride, const void * ptr) function, expected prototype:\nvoid osg::State::setNormalPointer(unsigned int type, int stride, const void * ptr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int type=(unsigned int)lua_tointeger(L,2);
		int stride=(int)lua_tointeger(L,3);
		const void* ptr=(Luna< void >::check(L,4));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setNormalPointer(unsigned int, int, const void *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNormalPointer(type, stride, ptr);

		return 0;
	}

	// Overload binder for osg::State::setNormalPointer
	static int _bind_setNormalPointer(lua_State *L) {
		if (_lg_typecheck_setNormalPointer_overload_1(L)) return _bind_setNormalPointer_overload_1(L);
		if (_lg_typecheck_setNormalPointer_overload_2(L)) return _bind_setNormalPointer_overload_2(L);

		luaL_error(L, "error in function setNormalPointer, cannot match any of the overloads for function setNormalPointer:\n  setNormalPointer(const osg::Array *)\n  setNormalPointer(unsigned int, int, const void *)\n");
		return 0;
	}

	// void osg::State::disableNormalPointer()
	static int _bind_disableNormalPointer(lua_State *L) {
		if (!_lg_typecheck_disableNormalPointer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::disableNormalPointer() function, expected prototype:\nvoid osg::State::disableNormalPointer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::disableNormalPointer(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->disableNormalPointer();

		return 0;
	}

	// void osg::State::dirtyNormalPointer()
	static int _bind_dirtyNormalPointer(lua_State *L) {
		if (!_lg_typecheck_dirtyNormalPointer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::dirtyNormalPointer() function, expected prototype:\nvoid osg::State::dirtyNormalPointer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::dirtyNormalPointer(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dirtyNormalPointer();

		return 0;
	}

	// void osg::State::setColorPointer(const osg::Array * array)
	static int _bind_setColorPointer_overload_1(lua_State *L) {
		if (!_lg_typecheck_setColorPointer_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setColorPointer(const osg::Array * array) function, expected prototype:\nvoid osg::State::setColorPointer(const osg::Array * array)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setColorPointer(const osg::Array *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColorPointer(array);

		return 0;
	}

	// void osg::State::setColorPointer(int size, unsigned int type, int stride, const void * ptr)
	static int _bind_setColorPointer_overload_2(lua_State *L) {
		if (!_lg_typecheck_setColorPointer_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setColorPointer(int size, unsigned int type, int stride, const void * ptr) function, expected prototype:\nvoid osg::State::setColorPointer(int size, unsigned int type, int stride, const void * ptr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int size=(int)lua_tointeger(L,2);
		unsigned int type=(unsigned int)lua_tointeger(L,3);
		int stride=(int)lua_tointeger(L,4);
		const void* ptr=(Luna< void >::check(L,5));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setColorPointer(int, unsigned int, int, const void *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColorPointer(size, type, stride, ptr);

		return 0;
	}

	// Overload binder for osg::State::setColorPointer
	static int _bind_setColorPointer(lua_State *L) {
		if (_lg_typecheck_setColorPointer_overload_1(L)) return _bind_setColorPointer_overload_1(L);
		if (_lg_typecheck_setColorPointer_overload_2(L)) return _bind_setColorPointer_overload_2(L);

		luaL_error(L, "error in function setColorPointer, cannot match any of the overloads for function setColorPointer:\n  setColorPointer(const osg::Array *)\n  setColorPointer(int, unsigned int, int, const void *)\n");
		return 0;
	}

	// void osg::State::disableColorPointer()
	static int _bind_disableColorPointer(lua_State *L) {
		if (!_lg_typecheck_disableColorPointer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::disableColorPointer() function, expected prototype:\nvoid osg::State::disableColorPointer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::disableColorPointer(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->disableColorPointer();

		return 0;
	}

	// void osg::State::dirtyColorPointer()
	static int _bind_dirtyColorPointer(lua_State *L) {
		if (!_lg_typecheck_dirtyColorPointer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::dirtyColorPointer() function, expected prototype:\nvoid osg::State::dirtyColorPointer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::dirtyColorPointer(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dirtyColorPointer();

		return 0;
	}

	// bool osg::State::isSecondaryColorSupported() const
	static int _bind_isSecondaryColorSupported(lua_State *L) {
		if (!_lg_typecheck_isSecondaryColorSupported(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::State::isSecondaryColorSupported() const function, expected prototype:\nbool osg::State::isSecondaryColorSupported() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::State::isSecondaryColorSupported() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSecondaryColorSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::State::setSecondaryColorPointer(const osg::Array * array)
	static int _bind_setSecondaryColorPointer_overload_1(lua_State *L) {
		if (!_lg_typecheck_setSecondaryColorPointer_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setSecondaryColorPointer(const osg::Array * array) function, expected prototype:\nvoid osg::State::setSecondaryColorPointer(const osg::Array * array)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setSecondaryColorPointer(const osg::Array *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSecondaryColorPointer(array);

		return 0;
	}

	// void osg::State::setSecondaryColorPointer(int size, unsigned int type, int stride, const void * ptr)
	static int _bind_setSecondaryColorPointer_overload_2(lua_State *L) {
		if (!_lg_typecheck_setSecondaryColorPointer_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setSecondaryColorPointer(int size, unsigned int type, int stride, const void * ptr) function, expected prototype:\nvoid osg::State::setSecondaryColorPointer(int size, unsigned int type, int stride, const void * ptr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int size=(int)lua_tointeger(L,2);
		unsigned int type=(unsigned int)lua_tointeger(L,3);
		int stride=(int)lua_tointeger(L,4);
		const void* ptr=(Luna< void >::check(L,5));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setSecondaryColorPointer(int, unsigned int, int, const void *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSecondaryColorPointer(size, type, stride, ptr);

		return 0;
	}

	// Overload binder for osg::State::setSecondaryColorPointer
	static int _bind_setSecondaryColorPointer(lua_State *L) {
		if (_lg_typecheck_setSecondaryColorPointer_overload_1(L)) return _bind_setSecondaryColorPointer_overload_1(L);
		if (_lg_typecheck_setSecondaryColorPointer_overload_2(L)) return _bind_setSecondaryColorPointer_overload_2(L);

		luaL_error(L, "error in function setSecondaryColorPointer, cannot match any of the overloads for function setSecondaryColorPointer:\n  setSecondaryColorPointer(const osg::Array *)\n  setSecondaryColorPointer(int, unsigned int, int, const void *)\n");
		return 0;
	}

	// void osg::State::disableSecondaryColorPointer()
	static int _bind_disableSecondaryColorPointer(lua_State *L) {
		if (!_lg_typecheck_disableSecondaryColorPointer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::disableSecondaryColorPointer() function, expected prototype:\nvoid osg::State::disableSecondaryColorPointer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::disableSecondaryColorPointer(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->disableSecondaryColorPointer();

		return 0;
	}

	// void osg::State::dirtySecondaryColorPointer()
	static int _bind_dirtySecondaryColorPointer(lua_State *L) {
		if (!_lg_typecheck_dirtySecondaryColorPointer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::dirtySecondaryColorPointer() function, expected prototype:\nvoid osg::State::dirtySecondaryColorPointer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::dirtySecondaryColorPointer(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dirtySecondaryColorPointer();

		return 0;
	}

	// bool osg::State::isFogCoordSupported() const
	static int _bind_isFogCoordSupported(lua_State *L) {
		if (!_lg_typecheck_isFogCoordSupported(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::State::isFogCoordSupported() const function, expected prototype:\nbool osg::State::isFogCoordSupported() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::State::isFogCoordSupported() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isFogCoordSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::State::setFogCoordPointer(const osg::Array * array)
	static int _bind_setFogCoordPointer_overload_1(lua_State *L) {
		if (!_lg_typecheck_setFogCoordPointer_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setFogCoordPointer(const osg::Array * array) function, expected prototype:\nvoid osg::State::setFogCoordPointer(const osg::Array * array)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setFogCoordPointer(const osg::Array *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFogCoordPointer(array);

		return 0;
	}

	// void osg::State::setFogCoordPointer(unsigned int type, int stride, const void * ptr)
	static int _bind_setFogCoordPointer_overload_2(lua_State *L) {
		if (!_lg_typecheck_setFogCoordPointer_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setFogCoordPointer(unsigned int type, int stride, const void * ptr) function, expected prototype:\nvoid osg::State::setFogCoordPointer(unsigned int type, int stride, const void * ptr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int type=(unsigned int)lua_tointeger(L,2);
		int stride=(int)lua_tointeger(L,3);
		const void* ptr=(Luna< void >::check(L,4));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setFogCoordPointer(unsigned int, int, const void *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFogCoordPointer(type, stride, ptr);

		return 0;
	}

	// Overload binder for osg::State::setFogCoordPointer
	static int _bind_setFogCoordPointer(lua_State *L) {
		if (_lg_typecheck_setFogCoordPointer_overload_1(L)) return _bind_setFogCoordPointer_overload_1(L);
		if (_lg_typecheck_setFogCoordPointer_overload_2(L)) return _bind_setFogCoordPointer_overload_2(L);

		luaL_error(L, "error in function setFogCoordPointer, cannot match any of the overloads for function setFogCoordPointer:\n  setFogCoordPointer(const osg::Array *)\n  setFogCoordPointer(unsigned int, int, const void *)\n");
		return 0;
	}

	// void osg::State::disableFogCoordPointer()
	static int _bind_disableFogCoordPointer(lua_State *L) {
		if (!_lg_typecheck_disableFogCoordPointer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::disableFogCoordPointer() function, expected prototype:\nvoid osg::State::disableFogCoordPointer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::disableFogCoordPointer(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->disableFogCoordPointer();

		return 0;
	}

	// void osg::State::dirtyFogCoordPointer()
	static int _bind_dirtyFogCoordPointer(lua_State *L) {
		if (!_lg_typecheck_dirtyFogCoordPointer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::dirtyFogCoordPointer() function, expected prototype:\nvoid osg::State::dirtyFogCoordPointer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::dirtyFogCoordPointer(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dirtyFogCoordPointer();

		return 0;
	}

	// void osg::State::setTexCoordPointer(unsigned int unit, const osg::Array * array)
	static int _bind_setTexCoordPointer_overload_1(lua_State *L) {
		if (!_lg_typecheck_setTexCoordPointer_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setTexCoordPointer(unsigned int unit, const osg::Array * array) function, expected prototype:\nvoid osg::State::setTexCoordPointer(unsigned int unit, const osg::Array * array)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		const osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,3));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setTexCoordPointer(unsigned int, const osg::Array *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTexCoordPointer(unit, array);

		return 0;
	}

	// void osg::State::setTexCoordPointer(unsigned int unit, int size, unsigned int type, int stride, const void * ptr)
	static int _bind_setTexCoordPointer_overload_2(lua_State *L) {
		if (!_lg_typecheck_setTexCoordPointer_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setTexCoordPointer(unsigned int unit, int size, unsigned int type, int stride, const void * ptr) function, expected prototype:\nvoid osg::State::setTexCoordPointer(unsigned int unit, int size, unsigned int type, int stride, const void * ptr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		unsigned int type=(unsigned int)lua_tointeger(L,4);
		int stride=(int)lua_tointeger(L,5);
		const void* ptr=(Luna< void >::check(L,6));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setTexCoordPointer(unsigned int, int, unsigned int, int, const void *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTexCoordPointer(unit, size, type, stride, ptr);

		return 0;
	}

	// Overload binder for osg::State::setTexCoordPointer
	static int _bind_setTexCoordPointer(lua_State *L) {
		if (_lg_typecheck_setTexCoordPointer_overload_1(L)) return _bind_setTexCoordPointer_overload_1(L);
		if (_lg_typecheck_setTexCoordPointer_overload_2(L)) return _bind_setTexCoordPointer_overload_2(L);

		luaL_error(L, "error in function setTexCoordPointer, cannot match any of the overloads for function setTexCoordPointer:\n  setTexCoordPointer(unsigned int, const osg::Array *)\n  setTexCoordPointer(unsigned int, int, unsigned int, int, const void *)\n");
		return 0;
	}

	// void osg::State::disableTexCoordPointer(unsigned int unit)
	static int _bind_disableTexCoordPointer(lua_State *L) {
		if (!_lg_typecheck_disableTexCoordPointer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::disableTexCoordPointer(unsigned int unit) function, expected prototype:\nvoid osg::State::disableTexCoordPointer(unsigned int unit)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::disableTexCoordPointer(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->disableTexCoordPointer(unit);

		return 0;
	}

	// void osg::State::dirtyTexCoordPointer(unsigned int unit)
	static int _bind_dirtyTexCoordPointer(lua_State *L) {
		if (!_lg_typecheck_dirtyTexCoordPointer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::dirtyTexCoordPointer(unsigned int unit) function, expected prototype:\nvoid osg::State::dirtyTexCoordPointer(unsigned int unit)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::dirtyTexCoordPointer(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dirtyTexCoordPointer(unit);

		return 0;
	}

	// void osg::State::disableTexCoordPointersAboveAndIncluding(unsigned int unit)
	static int _bind_disableTexCoordPointersAboveAndIncluding(lua_State *L) {
		if (!_lg_typecheck_disableTexCoordPointersAboveAndIncluding(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::disableTexCoordPointersAboveAndIncluding(unsigned int unit) function, expected prototype:\nvoid osg::State::disableTexCoordPointersAboveAndIncluding(unsigned int unit)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::disableTexCoordPointersAboveAndIncluding(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->disableTexCoordPointersAboveAndIncluding(unit);

		return 0;
	}

	// void osg::State::dirtyTexCoordPointersAboveAndIncluding(unsigned int unit)
	static int _bind_dirtyTexCoordPointersAboveAndIncluding(lua_State *L) {
		if (!_lg_typecheck_dirtyTexCoordPointersAboveAndIncluding(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::dirtyTexCoordPointersAboveAndIncluding(unsigned int unit) function, expected prototype:\nvoid osg::State::dirtyTexCoordPointersAboveAndIncluding(unsigned int unit)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::dirtyTexCoordPointersAboveAndIncluding(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dirtyTexCoordPointersAboveAndIncluding(unit);

		return 0;
	}

	// bool osg::State::setActiveTextureUnit(unsigned int unit)
	static int _bind_setActiveTextureUnit(lua_State *L) {
		if (!_lg_typecheck_setActiveTextureUnit(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::State::setActiveTextureUnit(unsigned int unit) function, expected prototype:\nbool osg::State::setActiveTextureUnit(unsigned int unit)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::State::setActiveTextureUnit(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setActiveTextureUnit(unit);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::State::getActiveTextureUnit() const
	static int _bind_getActiveTextureUnit(lua_State *L) {
		if (!_lg_typecheck_getActiveTextureUnit(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::State::getActiveTextureUnit() const function, expected prototype:\nunsigned int osg::State::getActiveTextureUnit() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::State::getActiveTextureUnit() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getActiveTextureUnit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::State::setClientActiveTextureUnit(unsigned int unit)
	static int _bind_setClientActiveTextureUnit(lua_State *L) {
		if (!_lg_typecheck_setClientActiveTextureUnit(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::State::setClientActiveTextureUnit(unsigned int unit) function, expected prototype:\nbool osg::State::setClientActiveTextureUnit(unsigned int unit)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::State::setClientActiveTextureUnit(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setClientActiveTextureUnit(unit);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::State::getClientActiveTextureUnit() const
	static int _bind_getClientActiveTextureUnit(lua_State *L) {
		if (!_lg_typecheck_getClientActiveTextureUnit(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::State::getClientActiveTextureUnit() const function, expected prototype:\nunsigned int osg::State::getClientActiveTextureUnit() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::State::getClientActiveTextureUnit() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getClientActiveTextureUnit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::State::setVertexAttribPointer(unsigned int unit, const osg::Array * array, unsigned char normalized)
	static int _bind_setVertexAttribPointer_overload_1(lua_State *L) {
		if (!_lg_typecheck_setVertexAttribPointer_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setVertexAttribPointer(unsigned int unit, const osg::Array * array, unsigned char normalized) function, expected prototype:\nvoid osg::State::setVertexAttribPointer(unsigned int unit, const osg::Array * array, unsigned char normalized)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		const osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,3));
		unsigned char normalized = (unsigned char)(lua_tointeger(L,4));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setVertexAttribPointer(unsigned int, const osg::Array *, unsigned char). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexAttribPointer(unit, array, normalized);

		return 0;
	}

	// void osg::State::setVertexAttribPointer(unsigned int index, int size, unsigned int type, unsigned char normalized, int stride, const void * ptr)
	static int _bind_setVertexAttribPointer_overload_2(lua_State *L) {
		if (!_lg_typecheck_setVertexAttribPointer_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setVertexAttribPointer(unsigned int index, int size, unsigned int type, unsigned char normalized, int stride, const void * ptr) function, expected prototype:\nvoid osg::State::setVertexAttribPointer(unsigned int index, int size, unsigned int type, unsigned char normalized, int stride, const void * ptr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		unsigned int type=(unsigned int)lua_tointeger(L,4);
		unsigned char normalized = (unsigned char)(lua_tointeger(L,5));
		int stride=(int)lua_tointeger(L,6);
		const void* ptr=(Luna< void >::check(L,7));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, const void *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexAttribPointer(index, size, type, normalized, stride, ptr);

		return 0;
	}

	// Overload binder for osg::State::setVertexAttribPointer
	static int _bind_setVertexAttribPointer(lua_State *L) {
		if (_lg_typecheck_setVertexAttribPointer_overload_1(L)) return _bind_setVertexAttribPointer_overload_1(L);
		if (_lg_typecheck_setVertexAttribPointer_overload_2(L)) return _bind_setVertexAttribPointer_overload_2(L);

		luaL_error(L, "error in function setVertexAttribPointer, cannot match any of the overloads for function setVertexAttribPointer:\n  setVertexAttribPointer(unsigned int, const osg::Array *, unsigned char)\n  setVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, const void *)\n");
		return 0;
	}

	// void osg::State::disableVertexAttribPointer(unsigned int index)
	static int _bind_disableVertexAttribPointer(lua_State *L) {
		if (!_lg_typecheck_disableVertexAttribPointer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::disableVertexAttribPointer(unsigned int index) function, expected prototype:\nvoid osg::State::disableVertexAttribPointer(unsigned int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::disableVertexAttribPointer(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->disableVertexAttribPointer(index);

		return 0;
	}

	// void osg::State::disableVertexAttribPointersAboveAndIncluding(unsigned int index)
	static int _bind_disableVertexAttribPointersAboveAndIncluding(lua_State *L) {
		if (!_lg_typecheck_disableVertexAttribPointersAboveAndIncluding(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::disableVertexAttribPointersAboveAndIncluding(unsigned int index) function, expected prototype:\nvoid osg::State::disableVertexAttribPointersAboveAndIncluding(unsigned int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::disableVertexAttribPointersAboveAndIncluding(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->disableVertexAttribPointersAboveAndIncluding(index);

		return 0;
	}

	// void osg::State::dirtyVertexAttribPointer(unsigned int index)
	static int _bind_dirtyVertexAttribPointer(lua_State *L) {
		if (!_lg_typecheck_dirtyVertexAttribPointer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::dirtyVertexAttribPointer(unsigned int index) function, expected prototype:\nvoid osg::State::dirtyVertexAttribPointer(unsigned int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::dirtyVertexAttribPointer(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dirtyVertexAttribPointer(index);

		return 0;
	}

	// void osg::State::dirtyVertexAttribPointersAboveAndIncluding(unsigned int index)
	static int _bind_dirtyVertexAttribPointersAboveAndIncluding(lua_State *L) {
		if (!_lg_typecheck_dirtyVertexAttribPointersAboveAndIncluding(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::dirtyVertexAttribPointersAboveAndIncluding(unsigned int index) function, expected prototype:\nvoid osg::State::dirtyVertexAttribPointersAboveAndIncluding(unsigned int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::dirtyVertexAttribPointersAboveAndIncluding(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dirtyVertexAttribPointersAboveAndIncluding(index);

		return 0;
	}

	// bool osg::State::isVertexBufferObjectSupported() const
	static int _bind_isVertexBufferObjectSupported(lua_State *L) {
		if (!_lg_typecheck_isVertexBufferObjectSupported(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::State::isVertexBufferObjectSupported() const function, expected prototype:\nbool osg::State::isVertexBufferObjectSupported() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::State::isVertexBufferObjectSupported() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isVertexBufferObjectSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::State::setLastAppliedProgramObject(const osg::Program::PerContextProgram * program)
	static int _bind_setLastAppliedProgramObject(lua_State *L) {
		if (!_lg_typecheck_setLastAppliedProgramObject(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setLastAppliedProgramObject(const osg::Program::PerContextProgram * program) function, expected prototype:\nvoid osg::State::setLastAppliedProgramObject(const osg::Program::PerContextProgram * program)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Program::PerContextProgram* program=(Luna< osg::Referenced >::checkSubType< osg::Program::PerContextProgram >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setLastAppliedProgramObject(const osg::Program::PerContextProgram *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLastAppliedProgramObject(program);

		return 0;
	}

	// const osg::Program::PerContextProgram * osg::State::getLastAppliedProgramObject() const
	static int _bind_getLastAppliedProgramObject(lua_State *L) {
		if (!_lg_typecheck_getLastAppliedProgramObject(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Program::PerContextProgram * osg::State::getLastAppliedProgramObject() const function, expected prototype:\nconst osg::Program::PerContextProgram * osg::State::getLastAppliedProgramObject() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Program::PerContextProgram * osg::State::getLastAppliedProgramObject() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Program::PerContextProgram * lret = self->getLastAppliedProgramObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Program::PerContextProgram >::push(L,lret,false);

		return 1;
	}

	// int osg::State::getUniformLocation(unsigned int uniformNameID) const
	static int _bind_getUniformLocation_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUniformLocation_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in int osg::State::getUniformLocation(unsigned int uniformNameID) const function, expected prototype:\nint osg::State::getUniformLocation(unsigned int uniformNameID) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int uniformNameID=(unsigned int)lua_tointeger(L,2);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::State::getUniformLocation(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getUniformLocation(uniformNameID);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::State::getUniformLocation(const std::string & uniformName) const
	static int _bind_getUniformLocation_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUniformLocation_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in int osg::State::getUniformLocation(const std::string & uniformName) const function, expected prototype:\nint osg::State::getUniformLocation(const std::string & uniformName) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string uniformName(lua_tostring(L,2),lua_objlen(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::State::getUniformLocation(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getUniformLocation(uniformName);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::State::getUniformLocation
	static int _bind_getUniformLocation(lua_State *L) {
		if (_lg_typecheck_getUniformLocation_overload_1(L)) return _bind_getUniformLocation_overload_1(L);
		if (_lg_typecheck_getUniformLocation_overload_2(L)) return _bind_getUniformLocation_overload_2(L);

		luaL_error(L, "error in function getUniformLocation, cannot match any of the overloads for function getUniformLocation:\n  getUniformLocation(unsigned int)\n  getUniformLocation(const std::string &)\n");
		return 0;
	}

	// int osg::State::getAttribLocation(const std::string & name) const
	static int _bind_getAttribLocation(lua_State *L) {
		if (!_lg_typecheck_getAttribLocation(L)) {
			luaL_error(L, "luna typecheck failed in int osg::State::getAttribLocation(const std::string & name) const function, expected prototype:\nint osg::State::getAttribLocation(const std::string & name) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::State::getAttribLocation(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getAttribLocation(name);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::State::setFrameStamp(osg::FrameStamp * fs)
	static int _bind_setFrameStamp(lua_State *L) {
		if (!_lg_typecheck_setFrameStamp(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setFrameStamp(osg::FrameStamp * fs) function, expected prototype:\nvoid osg::State::setFrameStamp(osg::FrameStamp * fs)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::FrameStamp* fs=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setFrameStamp(osg::FrameStamp *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFrameStamp(fs);

		return 0;
	}

	// osg::FrameStamp * osg::State::getFrameStamp()
	static int _bind_getFrameStamp_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFrameStamp_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameStamp * osg::State::getFrameStamp() function, expected prototype:\nosg::FrameStamp * osg::State::getFrameStamp()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::FrameStamp * osg::State::getFrameStamp(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::FrameStamp * lret = self->getFrameStamp();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameStamp >::push(L,lret,false);

		return 1;
	}

	// const osg::FrameStamp * osg::State::getFrameStamp() const
	static int _bind_getFrameStamp_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFrameStamp_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::FrameStamp * osg::State::getFrameStamp() const function, expected prototype:\nconst osg::FrameStamp * osg::State::getFrameStamp() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::FrameStamp * osg::State::getFrameStamp() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::FrameStamp * lret = self->getFrameStamp();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameStamp >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::State::getFrameStamp
	static int _bind_getFrameStamp(lua_State *L) {
		if (_lg_typecheck_getFrameStamp_overload_1(L)) return _bind_getFrameStamp_overload_1(L);
		if (_lg_typecheck_getFrameStamp_overload_2(L)) return _bind_getFrameStamp_overload_2(L);

		luaL_error(L, "error in function getFrameStamp, cannot match any of the overloads for function getFrameStamp:\n  getFrameStamp()\n  getFrameStamp()\n");
		return 0;
	}

	// void osg::State::setDisplaySettings(osg::DisplaySettings * vs)
	static int _bind_setDisplaySettings(lua_State *L) {
		if (!_lg_typecheck_setDisplaySettings(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setDisplaySettings(osg::DisplaySettings * vs) function, expected prototype:\nvoid osg::State::setDisplaySettings(osg::DisplaySettings * vs)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::DisplaySettings* vs=(Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setDisplaySettings(osg::DisplaySettings *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDisplaySettings(vs);

		return 0;
	}

	// const osg::DisplaySettings * osg::State::getDisplaySettings() const
	static int _bind_getDisplaySettings(lua_State *L) {
		if (!_lg_typecheck_getDisplaySettings(L)) {
			luaL_error(L, "luna typecheck failed in const osg::DisplaySettings * osg::State::getDisplaySettings() const function, expected prototype:\nconst osg::DisplaySettings * osg::State::getDisplaySettings() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::DisplaySettings * osg::State::getDisplaySettings() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::DisplaySettings * lret = self->getDisplaySettings();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DisplaySettings >::push(L,lret,false);

		return 1;
	}

	// void osg::State::setAbortRenderingPtr(bool * abortPtr)
	static int _bind_setAbortRenderingPtr(lua_State *L) {
		if (!_lg_typecheck_setAbortRenderingPtr(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setAbortRenderingPtr(bool * abortPtr) function, expected prototype:\nvoid osg::State::setAbortRenderingPtr(bool * abortPtr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool* abortPtr=(bool*)(Luna< void >::check(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setAbortRenderingPtr(bool *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAbortRenderingPtr(abortPtr);

		return 0;
	}

	// bool osg::State::getAbortRendering() const
	static int _bind_getAbortRendering(lua_State *L) {
		if (!_lg_typecheck_getAbortRendering(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::State::getAbortRendering() const function, expected prototype:\nbool osg::State::getAbortRendering() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::State::getAbortRendering() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getAbortRendering();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::State::setDynamicObjectRenderingCompletedCallback(osg::State::DynamicObjectRenderingCompletedCallback * cb)
	static int _bind_setDynamicObjectRenderingCompletedCallback(lua_State *L) {
		if (!_lg_typecheck_setDynamicObjectRenderingCompletedCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setDynamicObjectRenderingCompletedCallback(osg::State::DynamicObjectRenderingCompletedCallback * cb) function, expected prototype:\nvoid osg::State::setDynamicObjectRenderingCompletedCallback(osg::State::DynamicObjectRenderingCompletedCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State::DynamicObjectRenderingCompletedCallback* cb=(Luna< osg::Referenced >::checkSubType< osg::State::DynamicObjectRenderingCompletedCallback >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setDynamicObjectRenderingCompletedCallback(osg::State::DynamicObjectRenderingCompletedCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDynamicObjectRenderingCompletedCallback(cb);

		return 0;
	}

	// osg::State::DynamicObjectRenderingCompletedCallback * osg::State::getDynamicObjectRenderingCompletedCallback()
	static int _bind_getDynamicObjectRenderingCompletedCallback(lua_State *L) {
		if (!_lg_typecheck_getDynamicObjectRenderingCompletedCallback(L)) {
			luaL_error(L, "luna typecheck failed in osg::State::DynamicObjectRenderingCompletedCallback * osg::State::getDynamicObjectRenderingCompletedCallback() function, expected prototype:\nosg::State::DynamicObjectRenderingCompletedCallback * osg::State::getDynamicObjectRenderingCompletedCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::State::DynamicObjectRenderingCompletedCallback * osg::State::getDynamicObjectRenderingCompletedCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::State::DynamicObjectRenderingCompletedCallback * lret = self->getDynamicObjectRenderingCompletedCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::State::DynamicObjectRenderingCompletedCallback >::push(L,lret,false);

		return 1;
	}

	// void osg::State::setDynamicObjectCount(unsigned int count, bool callCallbackOnZero = false)
	static int _bind_setDynamicObjectCount(lua_State *L) {
		if (!_lg_typecheck_setDynamicObjectCount(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setDynamicObjectCount(unsigned int count, bool callCallbackOnZero = false) function, expected prototype:\nvoid osg::State::setDynamicObjectCount(unsigned int count, bool callCallbackOnZero = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int count=(unsigned int)lua_tointeger(L,2);
		bool callCallbackOnZero=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setDynamicObjectCount(unsigned int, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDynamicObjectCount(count, callCallbackOnZero);

		return 0;
	}

	// unsigned int osg::State::getDynamicObjectCount() const
	static int _bind_getDynamicObjectCount(lua_State *L) {
		if (!_lg_typecheck_getDynamicObjectCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::State::getDynamicObjectCount() const function, expected prototype:\nunsigned int osg::State::getDynamicObjectCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::State::getDynamicObjectCount() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getDynamicObjectCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::State::decrementDynamicObjectCount()
	static int _bind_decrementDynamicObjectCount(lua_State *L) {
		if (!_lg_typecheck_decrementDynamicObjectCount(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::decrementDynamicObjectCount() function, expected prototype:\nvoid osg::State::decrementDynamicObjectCount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::decrementDynamicObjectCount(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->decrementDynamicObjectCount();

		return 0;
	}

	// void osg::State::setMaxTexturePoolSize(unsigned int size)
	static int _bind_setMaxTexturePoolSize(lua_State *L) {
		if (!_lg_typecheck_setMaxTexturePoolSize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setMaxTexturePoolSize(unsigned int size) function, expected prototype:\nvoid osg::State::setMaxTexturePoolSize(unsigned int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setMaxTexturePoolSize(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMaxTexturePoolSize(size);

		return 0;
	}

	// unsigned int osg::State::getMaxTexturePoolSize() const
	static int _bind_getMaxTexturePoolSize(lua_State *L) {
		if (!_lg_typecheck_getMaxTexturePoolSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::State::getMaxTexturePoolSize() const function, expected prototype:\nunsigned int osg::State::getMaxTexturePoolSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::State::getMaxTexturePoolSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getMaxTexturePoolSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::State::setMaxBufferObjectPoolSize(unsigned int size)
	static int _bind_setMaxBufferObjectPoolSize(lua_State *L) {
		if (!_lg_typecheck_setMaxBufferObjectPoolSize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setMaxBufferObjectPoolSize(unsigned int size) function, expected prototype:\nvoid osg::State::setMaxBufferObjectPoolSize(unsigned int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setMaxBufferObjectPoolSize(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMaxBufferObjectPoolSize(size);

		return 0;
	}

	// unsigned int osg::State::getMaxBufferObjectPoolSize() const
	static int _bind_getMaxBufferObjectPoolSize(lua_State *L) {
		if (!_lg_typecheck_getMaxBufferObjectPoolSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::State::getMaxBufferObjectPoolSize() const function, expected prototype:\nunsigned int osg::State::getMaxBufferObjectPoolSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::State::getMaxBufferObjectPoolSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getMaxBufferObjectPoolSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::State::setCheckForGLErrors(osg::State::CheckForGLErrors check)
	static int _bind_setCheckForGLErrors(lua_State *L) {
		if (!_lg_typecheck_setCheckForGLErrors(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setCheckForGLErrors(osg::State::CheckForGLErrors check) function, expected prototype:\nvoid osg::State::setCheckForGLErrors(osg::State::CheckForGLErrors check)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State::CheckForGLErrors check=(osg::State::CheckForGLErrors)lua_tointeger(L,2);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setCheckForGLErrors(osg::State::CheckForGLErrors). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCheckForGLErrors(check);

		return 0;
	}

	// osg::State::CheckForGLErrors osg::State::getCheckForGLErrors() const
	static int _bind_getCheckForGLErrors(lua_State *L) {
		if (!_lg_typecheck_getCheckForGLErrors(L)) {
			luaL_error(L, "luna typecheck failed in osg::State::CheckForGLErrors osg::State::getCheckForGLErrors() const function, expected prototype:\nosg::State::CheckForGLErrors osg::State::getCheckForGLErrors() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::State::CheckForGLErrors osg::State::getCheckForGLErrors() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::State::CheckForGLErrors lret = self->getCheckForGLErrors();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::State::checkGLErrors(const char * str) const
	static int _bind_checkGLErrors_overload_1(lua_State *L) {
		if (!_lg_typecheck_checkGLErrors_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::State::checkGLErrors(const char * str) const function, expected prototype:\nbool osg::State::checkGLErrors(const char * str) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * str=(const char *)lua_tostring(L,2);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::State::checkGLErrors(const char *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->checkGLErrors(str);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::State::checkGLErrors(unsigned int mode) const
	static int _bind_checkGLErrors_overload_2(lua_State *L) {
		if (!_lg_typecheck_checkGLErrors_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::State::checkGLErrors(unsigned int mode) const function, expected prototype:\nbool osg::State::checkGLErrors(unsigned int mode) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::State::checkGLErrors(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->checkGLErrors(mode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::State::checkGLErrors(const osg::StateAttribute * attribute) const
	static int _bind_checkGLErrors_overload_3(lua_State *L) {
		if (!_lg_typecheck_checkGLErrors_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::State::checkGLErrors(const osg::StateAttribute * attribute) const function, expected prototype:\nbool osg::State::checkGLErrors(const osg::StateAttribute * attribute) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* attribute=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::State::checkGLErrors(const osg::StateAttribute *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->checkGLErrors(attribute);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::State::checkGLErrors
	static int _bind_checkGLErrors(lua_State *L) {
		if (_lg_typecheck_checkGLErrors_overload_1(L)) return _bind_checkGLErrors_overload_1(L);
		if (_lg_typecheck_checkGLErrors_overload_2(L)) return _bind_checkGLErrors_overload_2(L);
		if (_lg_typecheck_checkGLErrors_overload_3(L)) return _bind_checkGLErrors_overload_3(L);

		luaL_error(L, "error in function checkGLErrors, cannot match any of the overloads for function checkGLErrors:\n  checkGLErrors(const char *)\n  checkGLErrors(unsigned int)\n  checkGLErrors(const osg::StateAttribute *)\n");
		return 0;
	}

	// void osg::State::print(std::ostream & fout) const
	static int _bind_print(lua_State *L) {
		if (!_lg_typecheck_print(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::print(std::ostream & fout) const function, expected prototype:\nvoid osg::State::print(std::ostream & fout) const\nClass arguments details:\narg 1 ID = 2993706\n\n%s",luna_dumpStack(L).c_str());
		}

		std::ostream* fout_ptr=(Luna< std::ostream >::check(L,2));
		if( !fout_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fout in osg::State::print function");
		}
		std::ostream & fout=*fout_ptr;

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::print(std::ostream &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->print(fout);

		return 0;
	}

	// void osg::State::initializeExtensionProcs()
	static int _bind_initializeExtensionProcs(lua_State *L) {
		if (!_lg_typecheck_initializeExtensionProcs(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::initializeExtensionProcs() function, expected prototype:\nvoid osg::State::initializeExtensionProcs()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::initializeExtensionProcs(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->initializeExtensionProcs();

		return 0;
	}

	// void osg::State::objectDeleted(void * arg1)
	static int _bind_objectDeleted(lua_State *L) {
		if (!_lg_typecheck_objectDeleted(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::objectDeleted(void * arg1) function, expected prototype:\nvoid osg::State::objectDeleted(void * arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* _arg1=(Luna< void >::check(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::objectDeleted(void *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->objectDeleted(_arg1);

		return 0;
	}

	// osg::GLBeginEndAdapter & osg::State::getGLBeginEndAdapter()
	static int _bind_getGLBeginEndAdapter(lua_State *L) {
		if (!_lg_typecheck_getGLBeginEndAdapter(L)) {
			luaL_error(L, "luna typecheck failed in osg::GLBeginEndAdapter & osg::State::getGLBeginEndAdapter() function, expected prototype:\nosg::GLBeginEndAdapter & osg::State::getGLBeginEndAdapter()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::GLBeginEndAdapter & osg::State::getGLBeginEndAdapter(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::GLBeginEndAdapter* lret = &self->getGLBeginEndAdapter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GLBeginEndAdapter >::push(L,lret,false);

		return 1;
	}

	// osg::ArrayDispatchers & osg::State::getArrayDispatchers()
	static int _bind_getArrayDispatchers(lua_State *L) {
		if (!_lg_typecheck_getArrayDispatchers(L)) {
			luaL_error(L, "luna typecheck failed in osg::ArrayDispatchers & osg::State::getArrayDispatchers() function, expected prototype:\nosg::ArrayDispatchers & osg::State::getArrayDispatchers()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ArrayDispatchers & osg::State::getArrayDispatchers(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ArrayDispatchers* lret = &self->getArrayDispatchers();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ArrayDispatchers >::push(L,lret,false);

		return 1;
	}

	// void osg::State::setGraphicsCostEstimator(osg::GraphicsCostEstimator * gce)
	static int _bind_setGraphicsCostEstimator(lua_State *L) {
		if (!_lg_typecheck_setGraphicsCostEstimator(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setGraphicsCostEstimator(osg::GraphicsCostEstimator * gce) function, expected prototype:\nvoid osg::State::setGraphicsCostEstimator(osg::GraphicsCostEstimator * gce)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GraphicsCostEstimator* gce=(Luna< osg::Referenced >::checkSubType< osg::GraphicsCostEstimator >(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setGraphicsCostEstimator(osg::GraphicsCostEstimator *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setGraphicsCostEstimator(gce);

		return 0;
	}

	// osg::GraphicsCostEstimator * osg::State::getGraphicsCostEstimator()
	static int _bind_getGraphicsCostEstimator_overload_1(lua_State *L) {
		if (!_lg_typecheck_getGraphicsCostEstimator_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::GraphicsCostEstimator * osg::State::getGraphicsCostEstimator() function, expected prototype:\nosg::GraphicsCostEstimator * osg::State::getGraphicsCostEstimator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::GraphicsCostEstimator * osg::State::getGraphicsCostEstimator(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::GraphicsCostEstimator * lret = self->getGraphicsCostEstimator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsCostEstimator >::push(L,lret,false);

		return 1;
	}

	// const osg::GraphicsCostEstimator * osg::State::getGraphicsCostEstimator() const
	static int _bind_getGraphicsCostEstimator_overload_2(lua_State *L) {
		if (!_lg_typecheck_getGraphicsCostEstimator_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::GraphicsCostEstimator * osg::State::getGraphicsCostEstimator() const function, expected prototype:\nconst osg::GraphicsCostEstimator * osg::State::getGraphicsCostEstimator() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::GraphicsCostEstimator * osg::State::getGraphicsCostEstimator() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::GraphicsCostEstimator * lret = self->getGraphicsCostEstimator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsCostEstimator >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::State::getGraphicsCostEstimator
	static int _bind_getGraphicsCostEstimator(lua_State *L) {
		if (_lg_typecheck_getGraphicsCostEstimator_overload_1(L)) return _bind_getGraphicsCostEstimator_overload_1(L);
		if (_lg_typecheck_getGraphicsCostEstimator_overload_2(L)) return _bind_getGraphicsCostEstimator_overload_2(L);

		luaL_error(L, "error in function getGraphicsCostEstimator, cannot match any of the overloads for function getGraphicsCostEstimator:\n  getGraphicsCostEstimator()\n  getGraphicsCostEstimator()\n");
		return 0;
	}

	// __int64 osg::State::getStartTick() const
	static int _bind_getStartTick(lua_State *L) {
		if (!_lg_typecheck_getStartTick(L)) {
			luaL_error(L, "luna typecheck failed in __int64 osg::State::getStartTick() const function, expected prototype:\n__int64 osg::State::getStartTick() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call __int64 osg::State::getStartTick() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		__int64 stack_lret = self->getStartTick();
		__int64* lret = new __int64(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< __int64 >::push(L,lret,true);

		return 1;
	}

	// void osg::State::setStartTick(__int64 tick)
	static int _bind_setStartTick(lua_State *L) {
		if (!_lg_typecheck_setStartTick(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setStartTick(__int64 tick) function, expected prototype:\nvoid osg::State::setStartTick(__int64 tick)\nClass arguments details:\narg 1 ID = 32973728\n\n%s",luna_dumpStack(L).c_str());
		}

		__int64* tick_ptr=(Luna< __int64 >::check(L,2));
		if( !tick_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tick in osg::State::setStartTick function");
		}
		__int64 tick=*tick_ptr;

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setStartTick(__int64). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStartTick(tick);

		return 0;
	}

	// __int64 osg::State::getGpuTick() const
	static int _bind_getGpuTick(lua_State *L) {
		if (!_lg_typecheck_getGpuTick(L)) {
			luaL_error(L, "luna typecheck failed in __int64 osg::State::getGpuTick() const function, expected prototype:\n__int64 osg::State::getGpuTick() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call __int64 osg::State::getGpuTick() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		__int64 stack_lret = self->getGpuTick();
		__int64* lret = new __int64(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< __int64 >::push(L,lret,true);

		return 1;
	}

	// double osg::State::getGpuTime() const
	static int _bind_getGpuTime(lua_State *L) {
		if (!_lg_typecheck_getGpuTime(L)) {
			luaL_error(L, "luna typecheck failed in double osg::State::getGpuTime() const function, expected prototype:\ndouble osg::State::getGpuTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::State::getGpuTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getGpuTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long long int osg::State::getGpuTimestamp() const
	static int _bind_getGpuTimestamp(lua_State *L) {
		if (!_lg_typecheck_getGpuTimestamp(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long long int osg::State::getGpuTimestamp() const function, expected prototype:\nunsigned long long int osg::State::getGpuTimestamp() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long long int osg::State::getGpuTimestamp() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long long int lret = self->getGpuTimestamp();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::State::setGpuTimestamp(__int64 tick, unsigned long long int timestamp)
	static int _bind_setGpuTimestamp(lua_State *L) {
		if (!_lg_typecheck_setGpuTimestamp(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setGpuTimestamp(__int64 tick, unsigned long long int timestamp) function, expected prototype:\nvoid osg::State::setGpuTimestamp(__int64 tick, unsigned long long int timestamp)\nClass arguments details:\narg 1 ID = 32973728\n\n%s",luna_dumpStack(L).c_str());
		}

		__int64* tick_ptr=(Luna< __int64 >::check(L,2));
		if( !tick_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tick in osg::State::setGpuTimestamp function");
		}
		__int64 tick=*tick_ptr;
		unsigned long long int timestamp=(unsigned long long int)lua_tointeger(L,3);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setGpuTimestamp(__int64, unsigned long long int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setGpuTimestamp(tick, timestamp);

		return 0;
	}

	// int osg::State::getTimestampBits() const
	static int _bind_getTimestampBits(lua_State *L) {
		if (!_lg_typecheck_getTimestampBits(L)) {
			luaL_error(L, "luna typecheck failed in int osg::State::getTimestampBits() const function, expected prototype:\nint osg::State::getTimestampBits() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::State::getTimestampBits() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTimestampBits();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::State::setTimestampBits(int bits)
	static int _bind_setTimestampBits(lua_State *L) {
		if (!_lg_typecheck_setTimestampBits(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::setTimestampBits(int bits) function, expected prototype:\nvoid osg::State::setTimestampBits(int bits)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int bits=(int)lua_tointeger(L,2);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::setTimestampBits(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTimestampBits(bits);

		return 0;
	}

	// void osg::State::frameCompleted()
	static int _bind_frameCompleted(lua_State *L) {
		if (!_lg_typecheck_frameCompleted(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::frameCompleted() function, expected prototype:\nvoid osg::State::frameCompleted()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::frameCompleted(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->frameCompleted();

		return 0;
	}

	// void osg::State::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::State::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->State::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::State::base_objectDeleted(void * arg1)
	static int _bind_base_objectDeleted(lua_State *L) {
		if (!_lg_typecheck_base_objectDeleted(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::base_objectDeleted(void * arg1) function, expected prototype:\nvoid osg::State::base_objectDeleted(void * arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* _arg1=(Luna< void >::check(L,2));

		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::base_objectDeleted(void *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->State::objectDeleted(_arg1);

		return 0;
	}

	// void osg::State::base_frameCompleted()
	static int _bind_base_frameCompleted(lua_State *L) {
		if (!_lg_typecheck_base_frameCompleted(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::base_frameCompleted() function, expected prototype:\nvoid osg::State::base_frameCompleted()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::State* self=Luna< osg::Referenced >::checkSubType< osg::State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::base_frameCompleted(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->State::frameCompleted();

		return 0;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_osg_Observer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_osg_Observer(lua_State *L) {
		if (!_lg_typecheck_baseCast_osg_Observer(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_osg_Observer function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		osg::Observer* res = luna_caster<osg::Referenced,osg::Observer>::cast(self); // dynamic_cast<osg::Observer*>(self);
		if(!res)
			return 0;
			
		Luna< osg::Observer >::push(L,res,false);
		return 1;

	}

};

osg::State* LunaTraits< osg::State >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_State::_bind_ctor(L);
}

void LunaTraits< osg::State >::_bind_dtor(osg::State* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::State >::className[] = "State";
const char LunaTraits< osg::State >::fullName[] = "osg::State";
const char LunaTraits< osg::State >::moduleName[] = "osg";
const char* LunaTraits< osg::State >::parents[] = {"osg.Referenced", "osg.Observer", 0};
const int LunaTraits< osg::State >::hash = 89979598;
const int LunaTraits< osg::State >::uniqueIDs[] = {50169651, 58375525,0};

luna_RegType LunaTraits< osg::State >::methods[] = {
	{"setGraphicsContext", &luna_wrapper_osg_State::_bind_setGraphicsContext},
	{"getGraphicsContext", &luna_wrapper_osg_State::_bind_getGraphicsContext},
	{"setContextID", &luna_wrapper_osg_State::_bind_setContextID},
	{"getContextID", &luna_wrapper_osg_State::_bind_getContextID},
	{"setShaderCompositionEnabled", &luna_wrapper_osg_State::_bind_setShaderCompositionEnabled},
	{"getShaderCompositionEnabled", &luna_wrapper_osg_State::_bind_getShaderCompositionEnabled},
	{"setShaderComposer", &luna_wrapper_osg_State::_bind_setShaderComposer},
	{"getShaderComposer", &luna_wrapper_osg_State::_bind_getShaderComposer},
	{"applyShaderCompositionUniform", &luna_wrapper_osg_State::_bind_applyShaderCompositionUniform},
	{"pushStateSet", &luna_wrapper_osg_State::_bind_pushStateSet},
	{"popStateSet", &luna_wrapper_osg_State::_bind_popStateSet},
	{"popAllStateSets", &luna_wrapper_osg_State::_bind_popAllStateSets},
	{"insertStateSet", &luna_wrapper_osg_State::_bind_insertStateSet},
	{"removeStateSet", &luna_wrapper_osg_State::_bind_removeStateSet},
	{"getStateSetStackSize", &luna_wrapper_osg_State::_bind_getStateSetStackSize},
	{"popStateSetStackToSize", &luna_wrapper_osg_State::_bind_popStateSetStackToSize},
	{"captureCurrentState", &luna_wrapper_osg_State::_bind_captureCurrentState},
	{"reset", &luna_wrapper_osg_State::_bind_reset},
	{"getCurrentViewport", &luna_wrapper_osg_State::_bind_getCurrentViewport},
	{"setInitialViewMatrix", &luna_wrapper_osg_State::_bind_setInitialViewMatrix},
	{"getInitialViewMatrix", &luna_wrapper_osg_State::_bind_getInitialViewMatrix},
	{"getInitialInverseViewMatrix", &luna_wrapper_osg_State::_bind_getInitialInverseViewMatrix},
	{"applyProjectionMatrix", &luna_wrapper_osg_State::_bind_applyProjectionMatrix},
	{"getProjectionMatrix", &luna_wrapper_osg_State::_bind_getProjectionMatrix},
	{"applyModelViewMatrix", &luna_wrapper_osg_State::_bind_applyModelViewMatrix},
	{"getModelViewMatrix", &luna_wrapper_osg_State::_bind_getModelViewMatrix},
	{"setUseModelViewAndProjectionUniforms", &luna_wrapper_osg_State::_bind_setUseModelViewAndProjectionUniforms},
	{"getUseModelViewAndProjectionUniforms", &luna_wrapper_osg_State::_bind_getUseModelViewAndProjectionUniforms},
	{"updateModelViewAndProjectionMatrixUniforms", &luna_wrapper_osg_State::_bind_updateModelViewAndProjectionMatrixUniforms},
	{"applyModelViewAndProjectionUniformsIfRequired", &luna_wrapper_osg_State::_bind_applyModelViewAndProjectionUniformsIfRequired},
	{"getModelViewMatrixUniform", &luna_wrapper_osg_State::_bind_getModelViewMatrixUniform},
	{"getProjectionMatrixUniform", &luna_wrapper_osg_State::_bind_getProjectionMatrixUniform},
	{"getModelViewProjectionMatrixUniform", &luna_wrapper_osg_State::_bind_getModelViewProjectionMatrixUniform},
	{"getNormalMatrixUniform", &luna_wrapper_osg_State::_bind_getNormalMatrixUniform},
	{"getViewFrustum", &luna_wrapper_osg_State::_bind_getViewFrustum},
	{"setUseVertexAttributeAliasing", &luna_wrapper_osg_State::_bind_setUseVertexAttributeAliasing},
	{"getUseVertexAttributeAliasing", &luna_wrapper_osg_State::_bind_getUseVertexAttributeAliasing},
	{"getVertexAlias", &luna_wrapper_osg_State::_bind_getVertexAlias},
	{"getNormalAlias", &luna_wrapper_osg_State::_bind_getNormalAlias},
	{"getColorAlias", &luna_wrapper_osg_State::_bind_getColorAlias},
	{"getSecondaryColorAlias", &luna_wrapper_osg_State::_bind_getSecondaryColorAlias},
	{"getFogCoordAlias", &luna_wrapper_osg_State::_bind_getFogCoordAlias},
	{"convertVertexShaderSourceToOsgBuiltIns", &luna_wrapper_osg_State::_bind_convertVertexShaderSourceToOsgBuiltIns},
	{"apply", &luna_wrapper_osg_State::_bind_apply},
	{"applyShaderComposition", &luna_wrapper_osg_State::_bind_applyShaderComposition},
	{"setModeValidity", &luna_wrapper_osg_State::_bind_setModeValidity},
	{"getModeValidity", &luna_wrapper_osg_State::_bind_getModeValidity},
	{"setGlobalDefaultModeValue", &luna_wrapper_osg_State::_bind_setGlobalDefaultModeValue},
	{"getGlobalDefaultModeValue", &luna_wrapper_osg_State::_bind_getGlobalDefaultModeValue},
	{"applyMode", &luna_wrapper_osg_State::_bind_applyMode},
	{"setGlobalDefaultTextureModeValue", &luna_wrapper_osg_State::_bind_setGlobalDefaultTextureModeValue},
	{"getGlobalDefaultTextureModeValue", &luna_wrapper_osg_State::_bind_getGlobalDefaultTextureModeValue},
	{"applyTextureMode", &luna_wrapper_osg_State::_bind_applyTextureMode},
	{"setGlobalDefaultAttribute", &luna_wrapper_osg_State::_bind_setGlobalDefaultAttribute},
	{"getGlobalDefaultAttribute", &luna_wrapper_osg_State::_bind_getGlobalDefaultAttribute},
	{"applyAttribute", &luna_wrapper_osg_State::_bind_applyAttribute},
	{"setGlobalDefaultTextureAttribute", &luna_wrapper_osg_State::_bind_setGlobalDefaultTextureAttribute},
	{"getGlobalDefaultTextureAttribute", &luna_wrapper_osg_State::_bind_getGlobalDefaultTextureAttribute},
	{"applyTextureAttribute", &luna_wrapper_osg_State::_bind_applyTextureAttribute},
	{"haveAppliedMode", &luna_wrapper_osg_State::_bind_haveAppliedMode},
	{"haveAppliedAttribute", &luna_wrapper_osg_State::_bind_haveAppliedAttribute},
	{"getLastAppliedMode", &luna_wrapper_osg_State::_bind_getLastAppliedMode},
	{"getLastAppliedAttribute", &luna_wrapper_osg_State::_bind_getLastAppliedAttribute},
	{"haveAppliedTextureMode", &luna_wrapper_osg_State::_bind_haveAppliedTextureMode},
	{"haveAppliedTextureAttribute", &luna_wrapper_osg_State::_bind_haveAppliedTextureAttribute},
	{"getLastAppliedTextureMode", &luna_wrapper_osg_State::_bind_getLastAppliedTextureMode},
	{"getLastAppliedTextureAttribute", &luna_wrapper_osg_State::_bind_getLastAppliedTextureAttribute},
	{"dirtyAllModes", &luna_wrapper_osg_State::_bind_dirtyAllModes},
	{"dirtyAllAttributes", &luna_wrapper_osg_State::_bind_dirtyAllAttributes},
	{"disableAllVertexArrays", &luna_wrapper_osg_State::_bind_disableAllVertexArrays},
	{"dirtyAllVertexArrays", &luna_wrapper_osg_State::_bind_dirtyAllVertexArrays},
	{"setCurrentVertexBufferObject", &luna_wrapper_osg_State::_bind_setCurrentVertexBufferObject},
	{"getCurrentVertexBufferObject", &luna_wrapper_osg_State::_bind_getCurrentVertexBufferObject},
	{"bindVertexBufferObject", &luna_wrapper_osg_State::_bind_bindVertexBufferObject},
	{"unbindVertexBufferObject", &luna_wrapper_osg_State::_bind_unbindVertexBufferObject},
	{"setCurrentElementBufferObject", &luna_wrapper_osg_State::_bind_setCurrentElementBufferObject},
	{"getCurrentElementBufferObject", &luna_wrapper_osg_State::_bind_getCurrentElementBufferObject},
	{"bindElementBufferObject", &luna_wrapper_osg_State::_bind_bindElementBufferObject},
	{"unbindElementBufferObject", &luna_wrapper_osg_State::_bind_unbindElementBufferObject},
	{"setCurrentPixelBufferObject", &luna_wrapper_osg_State::_bind_setCurrentPixelBufferObject},
	{"getCurrentPixelBufferObject", &luna_wrapper_osg_State::_bind_getCurrentPixelBufferObject},
	{"bindPixelBufferObject", &luna_wrapper_osg_State::_bind_bindPixelBufferObject},
	{"unbindPixelBufferObject", &luna_wrapper_osg_State::_bind_unbindPixelBufferObject},
	{"drawQuads", &luna_wrapper_osg_State::_bind_drawQuads},
	{"glDrawArraysInstanced", &luna_wrapper_osg_State::_bind_glDrawArraysInstanced},
	{"glDrawElementsInstanced", &luna_wrapper_osg_State::_bind_glDrawElementsInstanced},
	{"Vertex", &luna_wrapper_osg_State::_bind_Vertex},
	{"Color", &luna_wrapper_osg_State::_bind_Color},
	{"Normal", &luna_wrapper_osg_State::_bind_Normal},
	{"TexCoord", &luna_wrapper_osg_State::_bind_TexCoord},
	{"MultiTexCoord", &luna_wrapper_osg_State::_bind_MultiTexCoord},
	{"VerteAttrib", &luna_wrapper_osg_State::_bind_VerteAttrib},
	{"lazyDisablingOfVertexAttributes", &luna_wrapper_osg_State::_bind_lazyDisablingOfVertexAttributes},
	{"applyDisablingOfVertexAttributes", &luna_wrapper_osg_State::_bind_applyDisablingOfVertexAttributes},
	{"setInterleavedArrays", &luna_wrapper_osg_State::_bind_setInterleavedArrays},
	{"setVertexPointer", &luna_wrapper_osg_State::_bind_setVertexPointer},
	{"disableVertexPointer", &luna_wrapper_osg_State::_bind_disableVertexPointer},
	{"dirtyVertexPointer", &luna_wrapper_osg_State::_bind_dirtyVertexPointer},
	{"setNormalPointer", &luna_wrapper_osg_State::_bind_setNormalPointer},
	{"disableNormalPointer", &luna_wrapper_osg_State::_bind_disableNormalPointer},
	{"dirtyNormalPointer", &luna_wrapper_osg_State::_bind_dirtyNormalPointer},
	{"setColorPointer", &luna_wrapper_osg_State::_bind_setColorPointer},
	{"disableColorPointer", &luna_wrapper_osg_State::_bind_disableColorPointer},
	{"dirtyColorPointer", &luna_wrapper_osg_State::_bind_dirtyColorPointer},
	{"isSecondaryColorSupported", &luna_wrapper_osg_State::_bind_isSecondaryColorSupported},
	{"setSecondaryColorPointer", &luna_wrapper_osg_State::_bind_setSecondaryColorPointer},
	{"disableSecondaryColorPointer", &luna_wrapper_osg_State::_bind_disableSecondaryColorPointer},
	{"dirtySecondaryColorPointer", &luna_wrapper_osg_State::_bind_dirtySecondaryColorPointer},
	{"isFogCoordSupported", &luna_wrapper_osg_State::_bind_isFogCoordSupported},
	{"setFogCoordPointer", &luna_wrapper_osg_State::_bind_setFogCoordPointer},
	{"disableFogCoordPointer", &luna_wrapper_osg_State::_bind_disableFogCoordPointer},
	{"dirtyFogCoordPointer", &luna_wrapper_osg_State::_bind_dirtyFogCoordPointer},
	{"setTexCoordPointer", &luna_wrapper_osg_State::_bind_setTexCoordPointer},
	{"disableTexCoordPointer", &luna_wrapper_osg_State::_bind_disableTexCoordPointer},
	{"dirtyTexCoordPointer", &luna_wrapper_osg_State::_bind_dirtyTexCoordPointer},
	{"disableTexCoordPointersAboveAndIncluding", &luna_wrapper_osg_State::_bind_disableTexCoordPointersAboveAndIncluding},
	{"dirtyTexCoordPointersAboveAndIncluding", &luna_wrapper_osg_State::_bind_dirtyTexCoordPointersAboveAndIncluding},
	{"setActiveTextureUnit", &luna_wrapper_osg_State::_bind_setActiveTextureUnit},
	{"getActiveTextureUnit", &luna_wrapper_osg_State::_bind_getActiveTextureUnit},
	{"setClientActiveTextureUnit", &luna_wrapper_osg_State::_bind_setClientActiveTextureUnit},
	{"getClientActiveTextureUnit", &luna_wrapper_osg_State::_bind_getClientActiveTextureUnit},
	{"setVertexAttribPointer", &luna_wrapper_osg_State::_bind_setVertexAttribPointer},
	{"disableVertexAttribPointer", &luna_wrapper_osg_State::_bind_disableVertexAttribPointer},
	{"disableVertexAttribPointersAboveAndIncluding", &luna_wrapper_osg_State::_bind_disableVertexAttribPointersAboveAndIncluding},
	{"dirtyVertexAttribPointer", &luna_wrapper_osg_State::_bind_dirtyVertexAttribPointer},
	{"dirtyVertexAttribPointersAboveAndIncluding", &luna_wrapper_osg_State::_bind_dirtyVertexAttribPointersAboveAndIncluding},
	{"isVertexBufferObjectSupported", &luna_wrapper_osg_State::_bind_isVertexBufferObjectSupported},
	{"setLastAppliedProgramObject", &luna_wrapper_osg_State::_bind_setLastAppliedProgramObject},
	{"getLastAppliedProgramObject", &luna_wrapper_osg_State::_bind_getLastAppliedProgramObject},
	{"getUniformLocation", &luna_wrapper_osg_State::_bind_getUniformLocation},
	{"getAttribLocation", &luna_wrapper_osg_State::_bind_getAttribLocation},
	{"setFrameStamp", &luna_wrapper_osg_State::_bind_setFrameStamp},
	{"getFrameStamp", &luna_wrapper_osg_State::_bind_getFrameStamp},
	{"setDisplaySettings", &luna_wrapper_osg_State::_bind_setDisplaySettings},
	{"getDisplaySettings", &luna_wrapper_osg_State::_bind_getDisplaySettings},
	{"setAbortRenderingPtr", &luna_wrapper_osg_State::_bind_setAbortRenderingPtr},
	{"getAbortRendering", &luna_wrapper_osg_State::_bind_getAbortRendering},
	{"setDynamicObjectRenderingCompletedCallback", &luna_wrapper_osg_State::_bind_setDynamicObjectRenderingCompletedCallback},
	{"getDynamicObjectRenderingCompletedCallback", &luna_wrapper_osg_State::_bind_getDynamicObjectRenderingCompletedCallback},
	{"setDynamicObjectCount", &luna_wrapper_osg_State::_bind_setDynamicObjectCount},
	{"getDynamicObjectCount", &luna_wrapper_osg_State::_bind_getDynamicObjectCount},
	{"decrementDynamicObjectCount", &luna_wrapper_osg_State::_bind_decrementDynamicObjectCount},
	{"setMaxTexturePoolSize", &luna_wrapper_osg_State::_bind_setMaxTexturePoolSize},
	{"getMaxTexturePoolSize", &luna_wrapper_osg_State::_bind_getMaxTexturePoolSize},
	{"setMaxBufferObjectPoolSize", &luna_wrapper_osg_State::_bind_setMaxBufferObjectPoolSize},
	{"getMaxBufferObjectPoolSize", &luna_wrapper_osg_State::_bind_getMaxBufferObjectPoolSize},
	{"setCheckForGLErrors", &luna_wrapper_osg_State::_bind_setCheckForGLErrors},
	{"getCheckForGLErrors", &luna_wrapper_osg_State::_bind_getCheckForGLErrors},
	{"checkGLErrors", &luna_wrapper_osg_State::_bind_checkGLErrors},
	{"print", &luna_wrapper_osg_State::_bind_print},
	{"initializeExtensionProcs", &luna_wrapper_osg_State::_bind_initializeExtensionProcs},
	{"objectDeleted", &luna_wrapper_osg_State::_bind_objectDeleted},
	{"getGLBeginEndAdapter", &luna_wrapper_osg_State::_bind_getGLBeginEndAdapter},
	{"getArrayDispatchers", &luna_wrapper_osg_State::_bind_getArrayDispatchers},
	{"setGraphicsCostEstimator", &luna_wrapper_osg_State::_bind_setGraphicsCostEstimator},
	{"getGraphicsCostEstimator", &luna_wrapper_osg_State::_bind_getGraphicsCostEstimator},
	{"getStartTick", &luna_wrapper_osg_State::_bind_getStartTick},
	{"setStartTick", &luna_wrapper_osg_State::_bind_setStartTick},
	{"getGpuTick", &luna_wrapper_osg_State::_bind_getGpuTick},
	{"getGpuTime", &luna_wrapper_osg_State::_bind_getGpuTime},
	{"getGpuTimestamp", &luna_wrapper_osg_State::_bind_getGpuTimestamp},
	{"setGpuTimestamp", &luna_wrapper_osg_State::_bind_setGpuTimestamp},
	{"getTimestampBits", &luna_wrapper_osg_State::_bind_getTimestampBits},
	{"setTimestampBits", &luna_wrapper_osg_State::_bind_setTimestampBits},
	{"frameCompleted", &luna_wrapper_osg_State::_bind_frameCompleted},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_State::_bind_base_setThreadSafeRefUnref},
	{"base_objectDeleted", &luna_wrapper_osg_State::_bind_base_objectDeleted},
	{"base_frameCompleted", &luna_wrapper_osg_State::_bind_base_frameCompleted},
	{"fromVoid", &luna_wrapper_osg_State::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_State::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_State::_bind_getTable},
	{"asObserver", &luna_wrapper_osg_State::_bind_baseCast_osg_Observer},
	{0,0}
};

luna_ConverterType LunaTraits< osg::State >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_State::_cast_from_Referenced},
	{"osg::Observer", &luna_wrapper_osg_State::_cast_from_Observer},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::State >::enumValues[] = {
	{"NEVER_CHECK_GL_ERRORS", osg::State::NEVER_CHECK_GL_ERRORS},
	{"ONCE_PER_FRAME", osg::State::ONCE_PER_FRAME},
	{"ONCE_PER_ATTRIBUTE", osg::State::ONCE_PER_ATTRIBUTE},
	{0,0}
};


