#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_FrameBuffer.h>

class luna_wrapper_ork_FrameBuffer {
public:
	typedef Luna< ork::FrameBuffer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Object,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		ork::FrameBuffer* self= (ork::FrameBuffer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::FrameBuffer >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//ork::FrameBuffer* ptr= dynamic_cast< ork::FrameBuffer* >(Luna< ork::Object >::check(L,1));
		ork::FrameBuffer* ptr= luna_caster< ork::Object, ork::FrameBuffer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::FrameBuffer >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_getRenderBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRenderBuffer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::RenderBuffer >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureBuffer_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture1D >(L,3) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureBuffer_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture1DArray >(L,3) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureBuffer_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,3) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureBuffer_overload_4(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::TextureRectangle >(L,3) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureBuffer_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2DMultisample >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureBuffer_overload_6(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2DArray >(L,3) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureBuffer_overload_7(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2DMultisampleArray >(L,3) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureBuffer_overload_8(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture3D >(L,3) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureBuffer_overload_9(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::TextureCube >(L,3) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureBuffer_overload_10(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::TextureCubeArray >(L,3) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setReadBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDrawBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDrawBuffers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParameters(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewport_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewport_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDepthRange_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDepthRange_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClipDistances(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getClearColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getClearDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getClearStencil(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPointSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPointFadeThresholdSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPointLowerLeftOrigin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLineWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLineSmooth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrontFaceCW(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPolygonMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPolygonSmooth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPolygonOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPolygonOffsets(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMultiSample(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSampleAlpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSampleCoverage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSampleMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSampleShading(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOcclusionTest(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScissorTest_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScissorTest_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScissorTest_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3943576) ) return false;
		if( (!(Luna< ork::vec4< int > >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScissorTest_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,3943576) ) return false;
		if( (!(Luna< ork::vec4< int > >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStencilTest_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStencilTest_overload_2(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStencilTest_overload_3(lua_State *L) {
		if( lua_gettop(L)!=13 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		if( (lua_type(L,11)!=LUA_TNUMBER || lua_tointeger(L,11) != lua_tonumber(L,11)) ) return false;
		if( (lua_type(L,12)!=LUA_TNUMBER || lua_tointeger(L,12) != lua_tonumber(L,12)) ) return false;
		if( (lua_type(L,13)!=LUA_TNUMBER || lua_tointeger(L,13) != lua_tonumber(L,13)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDepthTest_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDepthTest_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBlend_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBlend_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBlend_overload_3(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBlendColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDither(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLogicOp_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLogicOp_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColorMask(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDepthMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStencilMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setParameters(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72789067) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setViewport_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3943576) ) return false;
		if( (!(Luna< ork::vec4< int > >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setViewport_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67378769) ) return false;
		if( (!(Luna< ork::vec4< float > >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDepthRange_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDepthRange_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setClipDistances(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setClearColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67378769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setClearDepth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setClearStencil(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPointSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPointFadeThresholdSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPointLowerLeftOrigin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLineWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLineSmooth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFrontFaceCW(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPolygonMode(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPolygonSmooth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPolygonOffset_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPolygonOffset_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMultisample(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSampleAlpha(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSampleCoverage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSampleMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSampleShading(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOcclusionTest(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Query >(L,2) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScissorTest_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScissorTest_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScissorTest_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,3943576) ) return false;
		if( (!(Luna< ork::vec4< int > >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScissorTest_overload_4(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,3943576) ) return false;
		if( (!(Luna< ork::vec4< int > >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStencilTest_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStencilTest_overload_2(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStencilTest_overload_3(lua_State *L) {
		if( lua_gettop(L)!=14 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		if( (lua_type(L,11)!=LUA_TNUMBER || lua_tointeger(L,11) != lua_tonumber(L,11)) ) return false;
		if( (lua_type(L,12)!=LUA_TNUMBER || lua_tointeger(L,12) != lua_tonumber(L,12)) ) return false;
		if( (lua_type(L,13)!=LUA_TNUMBER || lua_tointeger(L,13) != lua_tonumber(L,13)) ) return false;
		if( (lua_type(L,14)!=LUA_TNUMBER || lua_tointeger(L,14) != lua_tonumber(L,14)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDepthTest_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDepthTest_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBlend_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBlend_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBlend_overload_3(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBlend_overload_4(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBlend_overload_5(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBlend_overload_6(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBlendColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67378769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDither(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLogicOp_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLogicOp_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setColorMask_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setColorMask_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDepthMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStencilMask(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_draw(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_multiDraw(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawIndirect(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawFeedback(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawQuad(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readPixels(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<9 || luatop>10 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,85004853) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,1381405) ) return false;
		if( luatop>9 && lua_isboolean(L,10)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_copyPixels_overload_1(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,1381405) ) return false;
		if( (!(Luna< ork::Object >::checkSubType< ork::Texture1D >(L,6))) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_copyPixels_overload_2(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,1381405) ) return false;
		if( (!(Luna< ork::Object >::checkSubType< ork::Texture1DArray >(L,8))) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_copyPixels_overload_3(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,1381405) ) return false;
		if( (!(Luna< ork::Object >::checkSubType< ork::Texture2D >(L,8))) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_copyPixels_overload_4(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,1381405) ) return false;
		if( (!(Luna< ork::Object >::checkSubType< ork::Texture2DArray >(L,9))) ) return false;
		if( (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_copyPixels_overload_5(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,1381405) ) return false;
		if( (!(Luna< ork::Object >::checkSubType< ork::Texture3D >(L,9))) ) return false;
		if( (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_copyPixels_overload_6(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,1381405) ) return false;
		if( (!(Luna< ork::Object >::checkSubType< ork::TextureCube >(L,8))) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_copyPixels_overload_7(lua_State *L) {
		if( lua_gettop(L)!=11 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,1381405) ) return false;
		if( (!(Luna< ork::Object >::checkSubType< ork::TextureCubeArray >(L,9))) ) return false;
		if( (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		if( (lua_type(L,11)!=LUA_TNUMBER || lua_tointeger(L,11) != lua_tonumber(L,11)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_copyPixels_overload_8(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,1381405) ) return false;
		if( (!(Luna< ork::Object >::checkSubType< ork::TextureRectangle >(L,8))) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDefault(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMajorVersion(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMinorVersion(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getError(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_resetAllStates(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::FrameBuffer::FrameBuffer()
	static ork::FrameBuffer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::FrameBuffer::FrameBuffer() function, expected prototype:\nork::FrameBuffer::FrameBuffer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::FrameBuffer();
	}

	// ork::FrameBuffer::FrameBuffer(lua_Table * data)
	static ork::FrameBuffer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::FrameBuffer::FrameBuffer(lua_Table * data) function, expected prototype:\nork::FrameBuffer::FrameBuffer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_ork_FrameBuffer(L,NULL);
	}

	// Overload binder for ork::FrameBuffer::FrameBuffer
	static ork::FrameBuffer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function FrameBuffer, cannot match any of the overloads for function FrameBuffer:\n  FrameBuffer()\n  FrameBuffer(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// ork::ptr< ork::RenderBuffer > ork::FrameBuffer::getRenderBuffer(ork::BufferId b)
	static int _bind_getRenderBuffer(lua_State *L) {
		if (!_lg_typecheck_getRenderBuffer(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::RenderBuffer > ork::FrameBuffer::getRenderBuffer(ork::BufferId b) function, expected prototype:\nork::ptr< ork::RenderBuffer > ork::FrameBuffer::getRenderBuffer(ork::BufferId b)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId b=(ork::BufferId)lua_tointeger(L,2);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::RenderBuffer > ork::FrameBuffer::getRenderBuffer(ork::BufferId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::RenderBuffer > lret = self->getRenderBuffer(b);
		Luna< ork::RenderBuffer >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Texture > ork::FrameBuffer::getTextureBuffer(ork::BufferId b)
	static int _bind_getTextureBuffer(lua_State *L) {
		if (!_lg_typecheck_getTextureBuffer(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Texture > ork::FrameBuffer::getTextureBuffer(ork::BufferId b) function, expected prototype:\nork::ptr< ork::Texture > ork::FrameBuffer::getTextureBuffer(ork::BufferId b)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId b=(ork::BufferId)lua_tointeger(L,2);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Texture > ork::FrameBuffer::getTextureBuffer(ork::BufferId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Texture > lret = self->getTextureBuffer(b);
		Luna< ork::Texture >::push(L,lret.get(),false);

		return 1;
	}

	// void ork::FrameBuffer::setRenderBuffer(ork::BufferId b, const ork::ptr< ork::RenderBuffer > t)
	static int _bind_setRenderBuffer(lua_State *L) {
		if (!_lg_typecheck_setRenderBuffer(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setRenderBuffer(ork::BufferId b, const ork::ptr< ork::RenderBuffer > t) function, expected prototype:\nvoid ork::FrameBuffer::setRenderBuffer(ork::BufferId b, const ork::ptr< ork::RenderBuffer > t)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId b=(ork::BufferId)lua_tointeger(L,2);
		ork::ptr< ork::RenderBuffer > t = Luna< ork::Object >::checkSubType< ork::RenderBuffer >(L,3);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setRenderBuffer(ork::BufferId, const ork::ptr< ork::RenderBuffer >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRenderBuffer(b, t);

		return 0;
	}

	// void ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::Texture1D > t, int level)
	static int _bind_setTextureBuffer_overload_1(lua_State *L) {
		if (!_lg_typecheck_setTextureBuffer_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::Texture1D > t, int level) function, expected prototype:\nvoid ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::Texture1D > t, int level)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId b=(ork::BufferId)lua_tointeger(L,2);
		ork::ptr< ork::Texture1D > t = Luna< ork::Object >::checkSubType< ork::Texture1D >(L,3);
		int level=(int)lua_tointeger(L,4);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setTextureBuffer(ork::BufferId, const ork::ptr< ork::Texture1D >, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureBuffer(b, t, level);

		return 0;
	}

	// void ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::Texture1DArray > t, int level, int layer)
	static int _bind_setTextureBuffer_overload_2(lua_State *L) {
		if (!_lg_typecheck_setTextureBuffer_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::Texture1DArray > t, int level, int layer) function, expected prototype:\nvoid ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::Texture1DArray > t, int level, int layer)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId b=(ork::BufferId)lua_tointeger(L,2);
		ork::ptr< ork::Texture1DArray > t = Luna< ork::Object >::checkSubType< ork::Texture1DArray >(L,3);
		int level=(int)lua_tointeger(L,4);
		int layer=(int)lua_tointeger(L,5);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setTextureBuffer(ork::BufferId, const ork::ptr< ork::Texture1DArray >, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureBuffer(b, t, level, layer);

		return 0;
	}

	// void ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::Texture2D > t, int level)
	static int _bind_setTextureBuffer_overload_3(lua_State *L) {
		if (!_lg_typecheck_setTextureBuffer_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::Texture2D > t, int level) function, expected prototype:\nvoid ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::Texture2D > t, int level)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId b=(ork::BufferId)lua_tointeger(L,2);
		ork::ptr< ork::Texture2D > t = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,3);
		int level=(int)lua_tointeger(L,4);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setTextureBuffer(ork::BufferId, const ork::ptr< ork::Texture2D >, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureBuffer(b, t, level);

		return 0;
	}

	// void ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::TextureRectangle > t, int level)
	static int _bind_setTextureBuffer_overload_4(lua_State *L) {
		if (!_lg_typecheck_setTextureBuffer_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::TextureRectangle > t, int level) function, expected prototype:\nvoid ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::TextureRectangle > t, int level)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId b=(ork::BufferId)lua_tointeger(L,2);
		ork::ptr< ork::TextureRectangle > t = Luna< ork::Object >::checkSubType< ork::TextureRectangle >(L,3);
		int level=(int)lua_tointeger(L,4);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setTextureBuffer(ork::BufferId, const ork::ptr< ork::TextureRectangle >, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureBuffer(b, t, level);

		return 0;
	}

	// void ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::Texture2DMultisample > t)
	static int _bind_setTextureBuffer_overload_5(lua_State *L) {
		if (!_lg_typecheck_setTextureBuffer_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::Texture2DMultisample > t) function, expected prototype:\nvoid ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::Texture2DMultisample > t)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId b=(ork::BufferId)lua_tointeger(L,2);
		ork::ptr< ork::Texture2DMultisample > t = Luna< ork::Object >::checkSubType< ork::Texture2DMultisample >(L,3);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setTextureBuffer(ork::BufferId, const ork::ptr< ork::Texture2DMultisample >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureBuffer(b, t);

		return 0;
	}

	// void ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::Texture2DArray > t, int level, int layer)
	static int _bind_setTextureBuffer_overload_6(lua_State *L) {
		if (!_lg_typecheck_setTextureBuffer_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::Texture2DArray > t, int level, int layer) function, expected prototype:\nvoid ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::Texture2DArray > t, int level, int layer)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId b=(ork::BufferId)lua_tointeger(L,2);
		ork::ptr< ork::Texture2DArray > t = Luna< ork::Object >::checkSubType< ork::Texture2DArray >(L,3);
		int level=(int)lua_tointeger(L,4);
		int layer=(int)lua_tointeger(L,5);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setTextureBuffer(ork::BufferId, const ork::ptr< ork::Texture2DArray >, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureBuffer(b, t, level, layer);

		return 0;
	}

	// void ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::Texture2DMultisampleArray > t, int layer)
	static int _bind_setTextureBuffer_overload_7(lua_State *L) {
		if (!_lg_typecheck_setTextureBuffer_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::Texture2DMultisampleArray > t, int layer) function, expected prototype:\nvoid ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::Texture2DMultisampleArray > t, int layer)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId b=(ork::BufferId)lua_tointeger(L,2);
		ork::ptr< ork::Texture2DMultisampleArray > t = Luna< ork::Object >::checkSubType< ork::Texture2DMultisampleArray >(L,3);
		int layer=(int)lua_tointeger(L,4);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setTextureBuffer(ork::BufferId, const ork::ptr< ork::Texture2DMultisampleArray >, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureBuffer(b, t, layer);

		return 0;
	}

	// void ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::Texture3D > t, int level, int layer)
	static int _bind_setTextureBuffer_overload_8(lua_State *L) {
		if (!_lg_typecheck_setTextureBuffer_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::Texture3D > t, int level, int layer) function, expected prototype:\nvoid ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::Texture3D > t, int level, int layer)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId b=(ork::BufferId)lua_tointeger(L,2);
		ork::ptr< ork::Texture3D > t = Luna< ork::Object >::checkSubType< ork::Texture3D >(L,3);
		int level=(int)lua_tointeger(L,4);
		int layer=(int)lua_tointeger(L,5);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setTextureBuffer(ork::BufferId, const ork::ptr< ork::Texture3D >, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureBuffer(b, t, level, layer);

		return 0;
	}

	// void ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::TextureCube > t, int level, ork::CubeFace cf)
	static int _bind_setTextureBuffer_overload_9(lua_State *L) {
		if (!_lg_typecheck_setTextureBuffer_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::TextureCube > t, int level, ork::CubeFace cf) function, expected prototype:\nvoid ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::TextureCube > t, int level, ork::CubeFace cf)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId b=(ork::BufferId)lua_tointeger(L,2);
		ork::ptr< ork::TextureCube > t = Luna< ork::Object >::checkSubType< ork::TextureCube >(L,3);
		int level=(int)lua_tointeger(L,4);
		ork::CubeFace cf=(ork::CubeFace)lua_tointeger(L,5);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setTextureBuffer(ork::BufferId, const ork::ptr< ork::TextureCube >, int, ork::CubeFace). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureBuffer(b, t, level, cf);

		return 0;
	}

	// void ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::TextureCubeArray > t, int level, ork::CubeFace cf)
	static int _bind_setTextureBuffer_overload_10(lua_State *L) {
		if (!_lg_typecheck_setTextureBuffer_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::TextureCubeArray > t, int level, ork::CubeFace cf) function, expected prototype:\nvoid ork::FrameBuffer::setTextureBuffer(ork::BufferId b, const ork::ptr< ork::TextureCubeArray > t, int level, ork::CubeFace cf)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId b=(ork::BufferId)lua_tointeger(L,2);
		ork::ptr< ork::TextureCubeArray > t = Luna< ork::Object >::checkSubType< ork::TextureCubeArray >(L,3);
		int level=(int)lua_tointeger(L,4);
		ork::CubeFace cf=(ork::CubeFace)lua_tointeger(L,5);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setTextureBuffer(ork::BufferId, const ork::ptr< ork::TextureCubeArray >, int, ork::CubeFace). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureBuffer(b, t, level, cf);

		return 0;
	}

	// Overload binder for ork::FrameBuffer::setTextureBuffer
	static int _bind_setTextureBuffer(lua_State *L) {
		if (_lg_typecheck_setTextureBuffer_overload_1(L)) return _bind_setTextureBuffer_overload_1(L);
		if (_lg_typecheck_setTextureBuffer_overload_2(L)) return _bind_setTextureBuffer_overload_2(L);
		if (_lg_typecheck_setTextureBuffer_overload_3(L)) return _bind_setTextureBuffer_overload_3(L);
		if (_lg_typecheck_setTextureBuffer_overload_4(L)) return _bind_setTextureBuffer_overload_4(L);
		if (_lg_typecheck_setTextureBuffer_overload_5(L)) return _bind_setTextureBuffer_overload_5(L);
		if (_lg_typecheck_setTextureBuffer_overload_6(L)) return _bind_setTextureBuffer_overload_6(L);
		if (_lg_typecheck_setTextureBuffer_overload_7(L)) return _bind_setTextureBuffer_overload_7(L);
		if (_lg_typecheck_setTextureBuffer_overload_8(L)) return _bind_setTextureBuffer_overload_8(L);
		if (_lg_typecheck_setTextureBuffer_overload_9(L)) return _bind_setTextureBuffer_overload_9(L);
		if (_lg_typecheck_setTextureBuffer_overload_10(L)) return _bind_setTextureBuffer_overload_10(L);

		luaL_error(L, "error in function setTextureBuffer, cannot match any of the overloads for function setTextureBuffer:\n  setTextureBuffer(ork::BufferId, const ork::ptr< ork::Texture1D >, int)\n  setTextureBuffer(ork::BufferId, const ork::ptr< ork::Texture1DArray >, int, int)\n  setTextureBuffer(ork::BufferId, const ork::ptr< ork::Texture2D >, int)\n  setTextureBuffer(ork::BufferId, const ork::ptr< ork::TextureRectangle >, int)\n  setTextureBuffer(ork::BufferId, const ork::ptr< ork::Texture2DMultisample >)\n  setTextureBuffer(ork::BufferId, const ork::ptr< ork::Texture2DArray >, int, int)\n  setTextureBuffer(ork::BufferId, const ork::ptr< ork::Texture2DMultisampleArray >, int)\n  setTextureBuffer(ork::BufferId, const ork::ptr< ork::Texture3D >, int, int)\n  setTextureBuffer(ork::BufferId, const ork::ptr< ork::TextureCube >, int, ork::CubeFace)\n  setTextureBuffer(ork::BufferId, const ork::ptr< ork::TextureCubeArray >, int, ork::CubeFace)\n");
		return 0;
	}

	// void ork::FrameBuffer::setReadBuffer(ork::BufferId b)
	static int _bind_setReadBuffer(lua_State *L) {
		if (!_lg_typecheck_setReadBuffer(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setReadBuffer(ork::BufferId b) function, expected prototype:\nvoid ork::FrameBuffer::setReadBuffer(ork::BufferId b)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId b=(ork::BufferId)lua_tointeger(L,2);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setReadBuffer(ork::BufferId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setReadBuffer(b);

		return 0;
	}

	// void ork::FrameBuffer::setDrawBuffer(ork::BufferId b)
	static int _bind_setDrawBuffer(lua_State *L) {
		if (!_lg_typecheck_setDrawBuffer(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setDrawBuffer(ork::BufferId b) function, expected prototype:\nvoid ork::FrameBuffer::setDrawBuffer(ork::BufferId b)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId b=(ork::BufferId)lua_tointeger(L,2);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setDrawBuffer(ork::BufferId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDrawBuffer(b);

		return 0;
	}

	// void ork::FrameBuffer::setDrawBuffers(ork::BufferId b)
	static int _bind_setDrawBuffers(lua_State *L) {
		if (!_lg_typecheck_setDrawBuffers(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setDrawBuffers(ork::BufferId b) function, expected prototype:\nvoid ork::FrameBuffer::setDrawBuffers(ork::BufferId b)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId b=(ork::BufferId)lua_tointeger(L,2);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setDrawBuffers(ork::BufferId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDrawBuffers(b);

		return 0;
	}

	// ork::FrameBuffer::Parameters ork::FrameBuffer::getParameters()
	static int _bind_getParameters(lua_State *L) {
		if (!_lg_typecheck_getParameters(L)) {
			luaL_error(L, "luna typecheck failed in ork::FrameBuffer::Parameters ork::FrameBuffer::getParameters() function, expected prototype:\nork::FrameBuffer::Parameters ork::FrameBuffer::getParameters()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::FrameBuffer::Parameters ork::FrameBuffer::getParameters(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::FrameBuffer::Parameters stack_lret = self->getParameters();
		ork::FrameBuffer::Parameters* lret = new ork::FrameBuffer::Parameters(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::FrameBuffer::Parameters >::push(L,lret,true);

		return 1;
	}

	// ork::vec4< int > ork::FrameBuffer::getViewport()
	static int _bind_getViewport_overload_1(lua_State *L) {
		if (!_lg_typecheck_getViewport_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4< int > ork::FrameBuffer::getViewport() function, expected prototype:\nork::vec4< int > ork::FrameBuffer::getViewport()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4< int > ork::FrameBuffer::getViewport(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4< int > stack_lret = self->getViewport();
		ork::vec4< int >* lret = new ork::vec4< int >(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4< int > >::push(L,lret,true);

		return 1;
	}

	// ork::vec4< float > ork::FrameBuffer::getViewport(int index)
	static int _bind_getViewport_overload_2(lua_State *L) {
		if (!_lg_typecheck_getViewport_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4< float > ork::FrameBuffer::getViewport(int index) function, expected prototype:\nork::vec4< float > ork::FrameBuffer::getViewport(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4< float > ork::FrameBuffer::getViewport(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4< float > stack_lret = self->getViewport(index);
		ork::vec4< float >* lret = new ork::vec4< float >(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4< float > >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::FrameBuffer::getViewport
	static int _bind_getViewport(lua_State *L) {
		if (_lg_typecheck_getViewport_overload_1(L)) return _bind_getViewport_overload_1(L);
		if (_lg_typecheck_getViewport_overload_2(L)) return _bind_getViewport_overload_2(L);

		luaL_error(L, "error in function getViewport, cannot match any of the overloads for function getViewport:\n  getViewport()\n  getViewport(int)\n");
		return 0;
	}

	// ork::vec2< float > ork::FrameBuffer::getDepthRange()
	static int _bind_getDepthRange_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDepthRange_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2< float > ork::FrameBuffer::getDepthRange() function, expected prototype:\nork::vec2< float > ork::FrameBuffer::getDepthRange()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2< float > ork::FrameBuffer::getDepthRange(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2< float > stack_lret = self->getDepthRange();
		ork::vec2< float >* lret = new ork::vec2< float >(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2< float > >::push(L,lret,true);

		return 1;
	}

	// ork::vec2< double > ork::FrameBuffer::getDepthRange(int index)
	static int _bind_getDepthRange_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDepthRange_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2< double > ork::FrameBuffer::getDepthRange(int index) function, expected prototype:\nork::vec2< double > ork::FrameBuffer::getDepthRange(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2< double > ork::FrameBuffer::getDepthRange(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2< double > stack_lret = self->getDepthRange(index);
		ork::vec2< double >* lret = new ork::vec2< double >(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2< double > >::push(L,lret,true);

		return 1;
	}

	// Overload binder for ork::FrameBuffer::getDepthRange
	static int _bind_getDepthRange(lua_State *L) {
		if (_lg_typecheck_getDepthRange_overload_1(L)) return _bind_getDepthRange_overload_1(L);
		if (_lg_typecheck_getDepthRange_overload_2(L)) return _bind_getDepthRange_overload_2(L);

		luaL_error(L, "error in function getDepthRange, cannot match any of the overloads for function getDepthRange:\n  getDepthRange()\n  getDepthRange(int)\n");
		return 0;
	}

	// int ork::FrameBuffer::getClipDistances()
	static int _bind_getClipDistances(lua_State *L) {
		if (!_lg_typecheck_getClipDistances(L)) {
			luaL_error(L, "luna typecheck failed in int ork::FrameBuffer::getClipDistances() function, expected prototype:\nint ork::FrameBuffer::getClipDistances()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::FrameBuffer::getClipDistances(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getClipDistances();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::vec4< float > ork::FrameBuffer::getClearColor()
	static int _bind_getClearColor(lua_State *L) {
		if (!_lg_typecheck_getClearColor(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4< float > ork::FrameBuffer::getClearColor() function, expected prototype:\nork::vec4< float > ork::FrameBuffer::getClearColor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4< float > ork::FrameBuffer::getClearColor(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4< float > stack_lret = self->getClearColor();
		ork::vec4< float >* lret = new ork::vec4< float >(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4< float > >::push(L,lret,true);

		return 1;
	}

	// float ork::FrameBuffer::getClearDepth()
	static int _bind_getClearDepth(lua_State *L) {
		if (!_lg_typecheck_getClearDepth(L)) {
			luaL_error(L, "luna typecheck failed in float ork::FrameBuffer::getClearDepth() function, expected prototype:\nfloat ork::FrameBuffer::getClearDepth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::FrameBuffer::getClearDepth(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getClearDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::FrameBuffer::getClearStencil()
	static int _bind_getClearStencil(lua_State *L) {
		if (!_lg_typecheck_getClearStencil(L)) {
			luaL_error(L, "luna typecheck failed in int ork::FrameBuffer::getClearStencil() function, expected prototype:\nint ork::FrameBuffer::getClearStencil()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::FrameBuffer::getClearStencil(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getClearStencil();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::FrameBuffer::getPointSize()
	static int _bind_getPointSize(lua_State *L) {
		if (!_lg_typecheck_getPointSize(L)) {
			luaL_error(L, "luna typecheck failed in float ork::FrameBuffer::getPointSize() function, expected prototype:\nfloat ork::FrameBuffer::getPointSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::FrameBuffer::getPointSize(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getPointSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::FrameBuffer::getPointFadeThresholdSize()
	static int _bind_getPointFadeThresholdSize(lua_State *L) {
		if (!_lg_typecheck_getPointFadeThresholdSize(L)) {
			luaL_error(L, "luna typecheck failed in float ork::FrameBuffer::getPointFadeThresholdSize() function, expected prototype:\nfloat ork::FrameBuffer::getPointFadeThresholdSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::FrameBuffer::getPointFadeThresholdSize(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getPointFadeThresholdSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool ork::FrameBuffer::getPointLowerLeftOrigin()
	static int _bind_getPointLowerLeftOrigin(lua_State *L) {
		if (!_lg_typecheck_getPointLowerLeftOrigin(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::FrameBuffer::getPointLowerLeftOrigin() function, expected prototype:\nbool ork::FrameBuffer::getPointLowerLeftOrigin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::FrameBuffer::getPointLowerLeftOrigin(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getPointLowerLeftOrigin();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float ork::FrameBuffer::getLineWidth()
	static int _bind_getLineWidth(lua_State *L) {
		if (!_lg_typecheck_getLineWidth(L)) {
			luaL_error(L, "luna typecheck failed in float ork::FrameBuffer::getLineWidth() function, expected prototype:\nfloat ork::FrameBuffer::getLineWidth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::FrameBuffer::getLineWidth(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getLineWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool ork::FrameBuffer::getLineSmooth()
	static int _bind_getLineSmooth(lua_State *L) {
		if (!_lg_typecheck_getLineSmooth(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::FrameBuffer::getLineSmooth() function, expected prototype:\nbool ork::FrameBuffer::getLineSmooth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::FrameBuffer::getLineSmooth(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getLineSmooth();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::FrameBuffer::getFrontFaceCW()
	static int _bind_getFrontFaceCW(lua_State *L) {
		if (!_lg_typecheck_getFrontFaceCW(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::FrameBuffer::getFrontFaceCW() function, expected prototype:\nbool ork::FrameBuffer::getFrontFaceCW()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::FrameBuffer::getFrontFaceCW(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getFrontFaceCW();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::vec2< int > ork::FrameBuffer::getPolygonMode()
	static int _bind_getPolygonMode(lua_State *L) {
		if (!_lg_typecheck_getPolygonMode(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2< int > ork::FrameBuffer::getPolygonMode() function, expected prototype:\nork::vec2< int > ork::FrameBuffer::getPolygonMode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2< int > ork::FrameBuffer::getPolygonMode(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2< int > stack_lret = self->getPolygonMode();
		ork::vec2< int >* lret = new ork::vec2< int >(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2< int > >::push(L,lret,true);

		return 1;
	}

	// bool ork::FrameBuffer::getPolygonSmooth()
	static int _bind_getPolygonSmooth(lua_State *L) {
		if (!_lg_typecheck_getPolygonSmooth(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::FrameBuffer::getPolygonSmooth() function, expected prototype:\nbool ork::FrameBuffer::getPolygonSmooth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::FrameBuffer::getPolygonSmooth(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getPolygonSmooth();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::vec2< float > ork::FrameBuffer::getPolygonOffset()
	static int _bind_getPolygonOffset(lua_State *L) {
		if (!_lg_typecheck_getPolygonOffset(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2< float > ork::FrameBuffer::getPolygonOffset() function, expected prototype:\nork::vec2< float > ork::FrameBuffer::getPolygonOffset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2< float > ork::FrameBuffer::getPolygonOffset(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2< float > stack_lret = self->getPolygonOffset();
		ork::vec2< float >* lret = new ork::vec2< float >(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2< float > >::push(L,lret,true);

		return 1;
	}

	// ork::vec3< bool > ork::FrameBuffer::getPolygonOffsets()
	static int _bind_getPolygonOffsets(lua_State *L) {
		if (!_lg_typecheck_getPolygonOffsets(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3< bool > ork::FrameBuffer::getPolygonOffsets() function, expected prototype:\nork::vec3< bool > ork::FrameBuffer::getPolygonOffsets()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3< bool > ork::FrameBuffer::getPolygonOffsets(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3< bool > stack_lret = self->getPolygonOffsets();
		ork::vec3< bool >* lret = new ork::vec3< bool >(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3< bool > >::push(L,lret,true);

		return 1;
	}

	// bool ork::FrameBuffer::getMultiSample()
	static int _bind_getMultiSample(lua_State *L) {
		if (!_lg_typecheck_getMultiSample(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::FrameBuffer::getMultiSample() function, expected prototype:\nbool ork::FrameBuffer::getMultiSample()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::FrameBuffer::getMultiSample(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getMultiSample();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::vec2< bool > ork::FrameBuffer::getSampleAlpha()
	static int _bind_getSampleAlpha(lua_State *L) {
		if (!_lg_typecheck_getSampleAlpha(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2< bool > ork::FrameBuffer::getSampleAlpha() function, expected prototype:\nork::vec2< bool > ork::FrameBuffer::getSampleAlpha()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2< bool > ork::FrameBuffer::getSampleAlpha(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2< bool > stack_lret = self->getSampleAlpha();
		ork::vec2< bool >* lret = new ork::vec2< bool >(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2< bool > >::push(L,lret,true);

		return 1;
	}

	// float ork::FrameBuffer::getSampleCoverage()
	static int _bind_getSampleCoverage(lua_State *L) {
		if (!_lg_typecheck_getSampleCoverage(L)) {
			luaL_error(L, "luna typecheck failed in float ork::FrameBuffer::getSampleCoverage() function, expected prototype:\nfloat ork::FrameBuffer::getSampleCoverage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::FrameBuffer::getSampleCoverage(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getSampleCoverage();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::FrameBuffer::getSampleMask()
	static int _bind_getSampleMask(lua_State *L) {
		if (!_lg_typecheck_getSampleMask(L)) {
			luaL_error(L, "luna typecheck failed in int ork::FrameBuffer::getSampleMask() function, expected prototype:\nint ork::FrameBuffer::getSampleMask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::FrameBuffer::getSampleMask(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getSampleMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool ork::FrameBuffer::getSampleShading(float & minsamples)
	static int _bind_getSampleShading(lua_State *L) {
		if (!_lg_typecheck_getSampleShading(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::FrameBuffer::getSampleShading(float & minsamples) function, expected prototype:\nbool ork::FrameBuffer::getSampleShading(float & minsamples)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float minsamples=(float)lua_tonumber(L,2);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::FrameBuffer::getSampleShading(float &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getSampleShading(minsamples);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,minsamples);
		return 2;
	}

	// ork::ptr< ork::Query > ork::FrameBuffer::getOcclusionTest(ork::QueryMode & occlusionMode)
	static int _bind_getOcclusionTest(lua_State *L) {
		if (!_lg_typecheck_getOcclusionTest(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Query > ork::FrameBuffer::getOcclusionTest(ork::QueryMode & occlusionMode) function, expected prototype:\nork::ptr< ork::Query > ork::FrameBuffer::getOcclusionTest(ork::QueryMode & occlusionMode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::QueryMode occlusionMode=(ork::QueryMode)lua_tointeger(L,2);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Query > ork::FrameBuffer::getOcclusionTest(ork::QueryMode &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Query > lret = self->getOcclusionTest(occlusionMode);
		Luna< ork::Query >::push(L,lret.get(),false);

		lua_pushnumber(L,occlusionMode);
		return 2;
	}

	// bool ork::FrameBuffer::getScissorTest()
	static int _bind_getScissorTest_overload_1(lua_State *L) {
		if (!_lg_typecheck_getScissorTest_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::FrameBuffer::getScissorTest() function, expected prototype:\nbool ork::FrameBuffer::getScissorTest()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::FrameBuffer::getScissorTest(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getScissorTest();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::FrameBuffer::getScissorTest(int index)
	static int _bind_getScissorTest_overload_2(lua_State *L) {
		if (!_lg_typecheck_getScissorTest_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::FrameBuffer::getScissorTest(int index) function, expected prototype:\nbool ork::FrameBuffer::getScissorTest(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::FrameBuffer::getScissorTest(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getScissorTest(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::FrameBuffer::getScissorTest(ork::vec4< int > & scissor)
	static int _bind_getScissorTest_overload_3(lua_State *L) {
		if (!_lg_typecheck_getScissorTest_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::FrameBuffer::getScissorTest(ork::vec4< int > & scissor) function, expected prototype:\nbool ork::FrameBuffer::getScissorTest(ork::vec4< int > & scissor)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec4< int >* scissor_ptr=(Luna< ork::vec4< int > >::check(L,2));
		if( !scissor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scissor in ork::FrameBuffer::getScissorTest function");
		}
		ork::vec4< int > & scissor=*scissor_ptr;

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::FrameBuffer::getScissorTest(ork::vec4< int > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getScissorTest(scissor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::FrameBuffer::getScissorTest(int index, ork::vec4< int > & scissor)
	static int _bind_getScissorTest_overload_4(lua_State *L) {
		if (!_lg_typecheck_getScissorTest_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::FrameBuffer::getScissorTest(int index, ork::vec4< int > & scissor) function, expected prototype:\nbool ork::FrameBuffer::getScissorTest(int index, ork::vec4< int > & scissor)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		ork::vec4< int >* scissor_ptr=(Luna< ork::vec4< int > >::check(L,3));
		if( !scissor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scissor in ork::FrameBuffer::getScissorTest function");
		}
		ork::vec4< int > & scissor=*scissor_ptr;

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::FrameBuffer::getScissorTest(int, ork::vec4< int > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getScissorTest(index, scissor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for ork::FrameBuffer::getScissorTest
	static int _bind_getScissorTest(lua_State *L) {
		if (_lg_typecheck_getScissorTest_overload_1(L)) return _bind_getScissorTest_overload_1(L);
		if (_lg_typecheck_getScissorTest_overload_2(L)) return _bind_getScissorTest_overload_2(L);
		if (_lg_typecheck_getScissorTest_overload_3(L)) return _bind_getScissorTest_overload_3(L);
		if (_lg_typecheck_getScissorTest_overload_4(L)) return _bind_getScissorTest_overload_4(L);

		luaL_error(L, "error in function getScissorTest, cannot match any of the overloads for function getScissorTest:\n  getScissorTest()\n  getScissorTest(int)\n  getScissorTest(ork::vec4< int > &)\n  getScissorTest(int, ork::vec4< int > &)\n");
		return 0;
	}

	// bool ork::FrameBuffer::getStencilTest()
	static int _bind_getStencilTest_overload_1(lua_State *L) {
		if (!_lg_typecheck_getStencilTest_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::FrameBuffer::getStencilTest() function, expected prototype:\nbool ork::FrameBuffer::getStencilTest()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::FrameBuffer::getStencilTest(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getStencilTest();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::FrameBuffer::getStencilTest(ork::Function & ff, int & fref, int & fmask, ork::StencilOperation & ffail, ork::StencilOperation & fdpfail, ork::StencilOperation & fdppass)
	static int _bind_getStencilTest_overload_2(lua_State *L) {
		if (!_lg_typecheck_getStencilTest_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::FrameBuffer::getStencilTest(ork::Function & ff, int & fref, int & fmask, ork::StencilOperation & ffail, ork::StencilOperation & fdpfail, ork::StencilOperation & fdppass) function, expected prototype:\nbool ork::FrameBuffer::getStencilTest(ork::Function & ff, int & fref, int & fmask, ork::StencilOperation & ffail, ork::StencilOperation & fdpfail, ork::StencilOperation & fdppass)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::Function ff=(ork::Function)lua_tointeger(L,2);
		int fref=(int)lua_tointeger(L,3);
		int fmask=(int)lua_tointeger(L,4);
		ork::StencilOperation ffail=(ork::StencilOperation)lua_tointeger(L,5);
		ork::StencilOperation fdpfail=(ork::StencilOperation)lua_tointeger(L,6);
		ork::StencilOperation fdppass=(ork::StencilOperation)lua_tointeger(L,7);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::FrameBuffer::getStencilTest(ork::Function &, int &, int &, ork::StencilOperation &, ork::StencilOperation &, ork::StencilOperation &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getStencilTest(ff, fref, fmask, ffail, fdpfail, fdppass);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,ff);
		lua_pushnumber(L,fref);
		lua_pushnumber(L,fmask);
		lua_pushnumber(L,ffail);
		lua_pushnumber(L,fdpfail);
		lua_pushnumber(L,fdppass);
		return 7;
	}

	// bool ork::FrameBuffer::getStencilTest(ork::Function & ff, int & fref, int & fmask, ork::StencilOperation & ffail, ork::StencilOperation & fdpfail, ork::StencilOperation & fdppass, ork::Function & bf, int & bref, int & bmask, ork::StencilOperation & bfail, ork::StencilOperation & bdpfail, ork::StencilOperation & bdppass)
	static int _bind_getStencilTest_overload_3(lua_State *L) {
		if (!_lg_typecheck_getStencilTest_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::FrameBuffer::getStencilTest(ork::Function & ff, int & fref, int & fmask, ork::StencilOperation & ffail, ork::StencilOperation & fdpfail, ork::StencilOperation & fdppass, ork::Function & bf, int & bref, int & bmask, ork::StencilOperation & bfail, ork::StencilOperation & bdpfail, ork::StencilOperation & bdppass) function, expected prototype:\nbool ork::FrameBuffer::getStencilTest(ork::Function & ff, int & fref, int & fmask, ork::StencilOperation & ffail, ork::StencilOperation & fdpfail, ork::StencilOperation & fdppass, ork::Function & bf, int & bref, int & bmask, ork::StencilOperation & bfail, ork::StencilOperation & bdpfail, ork::StencilOperation & bdppass)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::Function ff=(ork::Function)lua_tointeger(L,2);
		int fref=(int)lua_tointeger(L,3);
		int fmask=(int)lua_tointeger(L,4);
		ork::StencilOperation ffail=(ork::StencilOperation)lua_tointeger(L,5);
		ork::StencilOperation fdpfail=(ork::StencilOperation)lua_tointeger(L,6);
		ork::StencilOperation fdppass=(ork::StencilOperation)lua_tointeger(L,7);
		ork::Function bf=(ork::Function)lua_tointeger(L,8);
		int bref=(int)lua_tointeger(L,9);
		int bmask=(int)lua_tointeger(L,10);
		ork::StencilOperation bfail=(ork::StencilOperation)lua_tointeger(L,11);
		ork::StencilOperation bdpfail=(ork::StencilOperation)lua_tointeger(L,12);
		ork::StencilOperation bdppass=(ork::StencilOperation)lua_tointeger(L,13);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::FrameBuffer::getStencilTest(ork::Function &, int &, int &, ork::StencilOperation &, ork::StencilOperation &, ork::StencilOperation &, ork::Function &, int &, int &, ork::StencilOperation &, ork::StencilOperation &, ork::StencilOperation &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getStencilTest(ff, fref, fmask, ffail, fdpfail, fdppass, bf, bref, bmask, bfail, bdpfail, bdppass);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,ff);
		lua_pushnumber(L,fref);
		lua_pushnumber(L,fmask);
		lua_pushnumber(L,ffail);
		lua_pushnumber(L,fdpfail);
		lua_pushnumber(L,fdppass);
		lua_pushnumber(L,bf);
		lua_pushnumber(L,bref);
		lua_pushnumber(L,bmask);
		lua_pushnumber(L,bfail);
		lua_pushnumber(L,bdpfail);
		lua_pushnumber(L,bdppass);
		return 13;
	}

	// Overload binder for ork::FrameBuffer::getStencilTest
	static int _bind_getStencilTest(lua_State *L) {
		if (_lg_typecheck_getStencilTest_overload_1(L)) return _bind_getStencilTest_overload_1(L);
		if (_lg_typecheck_getStencilTest_overload_2(L)) return _bind_getStencilTest_overload_2(L);
		if (_lg_typecheck_getStencilTest_overload_3(L)) return _bind_getStencilTest_overload_3(L);

		luaL_error(L, "error in function getStencilTest, cannot match any of the overloads for function getStencilTest:\n  getStencilTest()\n  getStencilTest(ork::Function &, int &, int &, ork::StencilOperation &, ork::StencilOperation &, ork::StencilOperation &)\n  getStencilTest(ork::Function &, int &, int &, ork::StencilOperation &, ork::StencilOperation &, ork::StencilOperation &, ork::Function &, int &, int &, ork::StencilOperation &, ork::StencilOperation &, ork::StencilOperation &)\n");
		return 0;
	}

	// bool ork::FrameBuffer::getDepthTest()
	static int _bind_getDepthTest_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDepthTest_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::FrameBuffer::getDepthTest() function, expected prototype:\nbool ork::FrameBuffer::getDepthTest()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::FrameBuffer::getDepthTest(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getDepthTest();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::FrameBuffer::getDepthTest(ork::Function & depth)
	static int _bind_getDepthTest_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDepthTest_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::FrameBuffer::getDepthTest(ork::Function & depth) function, expected prototype:\nbool ork::FrameBuffer::getDepthTest(ork::Function & depth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::Function depth=(ork::Function)lua_tointeger(L,2);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::FrameBuffer::getDepthTest(ork::Function &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getDepthTest(depth);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,depth);
		return 2;
	}

	// Overload binder for ork::FrameBuffer::getDepthTest
	static int _bind_getDepthTest(lua_State *L) {
		if (_lg_typecheck_getDepthTest_overload_1(L)) return _bind_getDepthTest_overload_1(L);
		if (_lg_typecheck_getDepthTest_overload_2(L)) return _bind_getDepthTest_overload_2(L);

		luaL_error(L, "error in function getDepthTest, cannot match any of the overloads for function getDepthTest:\n  getDepthTest()\n  getDepthTest(ork::Function &)\n");
		return 0;
	}

	// bool ork::FrameBuffer::getBlend(ork::BufferId buffer = ork::BufferId (-1))
	static int _bind_getBlend_overload_1(lua_State *L) {
		if (!_lg_typecheck_getBlend_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::FrameBuffer::getBlend(ork::BufferId buffer = ork::BufferId (-1)) function, expected prototype:\nbool ork::FrameBuffer::getBlend(ork::BufferId buffer = ork::BufferId (-1))\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::BufferId buffer=luatop>1 ? (ork::BufferId)lua_tointeger(L,2) : (ork::BufferId)ork::BufferId (-1);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::FrameBuffer::getBlend(ork::BufferId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getBlend(buffer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::FrameBuffer::getBlend(ork::BufferId buffer, ork::BlendEquation & rgb, ork::BlendArgument & srgb, ork::BlendArgument & drgb)
	static int _bind_getBlend_overload_2(lua_State *L) {
		if (!_lg_typecheck_getBlend_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::FrameBuffer::getBlend(ork::BufferId buffer, ork::BlendEquation & rgb, ork::BlendArgument & srgb, ork::BlendArgument & drgb) function, expected prototype:\nbool ork::FrameBuffer::getBlend(ork::BufferId buffer, ork::BlendEquation & rgb, ork::BlendArgument & srgb, ork::BlendArgument & drgb)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId buffer=(ork::BufferId)lua_tointeger(L,2);
		ork::BlendEquation rgb=(ork::BlendEquation)lua_tointeger(L,3);
		ork::BlendArgument srgb=(ork::BlendArgument)lua_tointeger(L,4);
		ork::BlendArgument drgb=(ork::BlendArgument)lua_tointeger(L,5);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::FrameBuffer::getBlend(ork::BufferId, ork::BlendEquation &, ork::BlendArgument &, ork::BlendArgument &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getBlend(buffer, rgb, srgb, drgb);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,rgb);
		lua_pushnumber(L,srgb);
		lua_pushnumber(L,drgb);
		return 4;
	}

	// bool ork::FrameBuffer::getBlend(ork::BufferId buffer, ork::BlendEquation & rgb, ork::BlendArgument & srgb, ork::BlendArgument & drgb, ork::BlendEquation & alpha, ork::BlendArgument & salpha, ork::BlendArgument & dalpha)
	static int _bind_getBlend_overload_3(lua_State *L) {
		if (!_lg_typecheck_getBlend_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::FrameBuffer::getBlend(ork::BufferId buffer, ork::BlendEquation & rgb, ork::BlendArgument & srgb, ork::BlendArgument & drgb, ork::BlendEquation & alpha, ork::BlendArgument & salpha, ork::BlendArgument & dalpha) function, expected prototype:\nbool ork::FrameBuffer::getBlend(ork::BufferId buffer, ork::BlendEquation & rgb, ork::BlendArgument & srgb, ork::BlendArgument & drgb, ork::BlendEquation & alpha, ork::BlendArgument & salpha, ork::BlendArgument & dalpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId buffer=(ork::BufferId)lua_tointeger(L,2);
		ork::BlendEquation rgb=(ork::BlendEquation)lua_tointeger(L,3);
		ork::BlendArgument srgb=(ork::BlendArgument)lua_tointeger(L,4);
		ork::BlendArgument drgb=(ork::BlendArgument)lua_tointeger(L,5);
		ork::BlendEquation alpha=(ork::BlendEquation)lua_tointeger(L,6);
		ork::BlendArgument salpha=(ork::BlendArgument)lua_tointeger(L,7);
		ork::BlendArgument dalpha=(ork::BlendArgument)lua_tointeger(L,8);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::FrameBuffer::getBlend(ork::BufferId, ork::BlendEquation &, ork::BlendArgument &, ork::BlendArgument &, ork::BlendEquation &, ork::BlendArgument &, ork::BlendArgument &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getBlend(buffer, rgb, srgb, drgb, alpha, salpha, dalpha);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,rgb);
		lua_pushnumber(L,srgb);
		lua_pushnumber(L,drgb);
		lua_pushnumber(L,alpha);
		lua_pushnumber(L,salpha);
		lua_pushnumber(L,dalpha);
		return 7;
	}

	// Overload binder for ork::FrameBuffer::getBlend
	static int _bind_getBlend(lua_State *L) {
		if (_lg_typecheck_getBlend_overload_1(L)) return _bind_getBlend_overload_1(L);
		if (_lg_typecheck_getBlend_overload_2(L)) return _bind_getBlend_overload_2(L);
		if (_lg_typecheck_getBlend_overload_3(L)) return _bind_getBlend_overload_3(L);

		luaL_error(L, "error in function getBlend, cannot match any of the overloads for function getBlend:\n  getBlend(ork::BufferId)\n  getBlend(ork::BufferId, ork::BlendEquation &, ork::BlendArgument &, ork::BlendArgument &)\n  getBlend(ork::BufferId, ork::BlendEquation &, ork::BlendArgument &, ork::BlendArgument &, ork::BlendEquation &, ork::BlendArgument &, ork::BlendArgument &)\n");
		return 0;
	}

	// ork::vec4< float > ork::FrameBuffer::getBlendColor()
	static int _bind_getBlendColor(lua_State *L) {
		if (!_lg_typecheck_getBlendColor(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4< float > ork::FrameBuffer::getBlendColor() function, expected prototype:\nork::vec4< float > ork::FrameBuffer::getBlendColor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4< float > ork::FrameBuffer::getBlendColor(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4< float > stack_lret = self->getBlendColor();
		ork::vec4< float >* lret = new ork::vec4< float >(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4< float > >::push(L,lret,true);

		return 1;
	}

	// bool ork::FrameBuffer::getDither()
	static int _bind_getDither(lua_State *L) {
		if (!_lg_typecheck_getDither(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::FrameBuffer::getDither() function, expected prototype:\nbool ork::FrameBuffer::getDither()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::FrameBuffer::getDither(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getDither();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::FrameBuffer::getLogicOp()
	static int _bind_getLogicOp_overload_1(lua_State *L) {
		if (!_lg_typecheck_getLogicOp_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::FrameBuffer::getLogicOp() function, expected prototype:\nbool ork::FrameBuffer::getLogicOp()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::FrameBuffer::getLogicOp(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getLogicOp();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::FrameBuffer::getLogicOp(ork::LogicOperation & logicOp)
	static int _bind_getLogicOp_overload_2(lua_State *L) {
		if (!_lg_typecheck_getLogicOp_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::FrameBuffer::getLogicOp(ork::LogicOperation & logicOp) function, expected prototype:\nbool ork::FrameBuffer::getLogicOp(ork::LogicOperation & logicOp)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::LogicOperation logicOp=(ork::LogicOperation)lua_tointeger(L,2);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::FrameBuffer::getLogicOp(ork::LogicOperation &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getLogicOp(logicOp);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,logicOp);
		return 2;
	}

	// Overload binder for ork::FrameBuffer::getLogicOp
	static int _bind_getLogicOp(lua_State *L) {
		if (_lg_typecheck_getLogicOp_overload_1(L)) return _bind_getLogicOp_overload_1(L);
		if (_lg_typecheck_getLogicOp_overload_2(L)) return _bind_getLogicOp_overload_2(L);

		luaL_error(L, "error in function getLogicOp, cannot match any of the overloads for function getLogicOp:\n  getLogicOp()\n  getLogicOp(ork::LogicOperation &)\n");
		return 0;
	}

	// ork::vec4< bool > ork::FrameBuffer::getColorMask(ork::BufferId buffer = ork::BufferId (-1))
	static int _bind_getColorMask(lua_State *L) {
		if (!_lg_typecheck_getColorMask(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4< bool > ork::FrameBuffer::getColorMask(ork::BufferId buffer = ork::BufferId (-1)) function, expected prototype:\nork::vec4< bool > ork::FrameBuffer::getColorMask(ork::BufferId buffer = ork::BufferId (-1))\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::BufferId buffer=luatop>1 ? (ork::BufferId)lua_tointeger(L,2) : (ork::BufferId)ork::BufferId (-1);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4< bool > ork::FrameBuffer::getColorMask(ork::BufferId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4< bool > stack_lret = self->getColorMask(buffer);
		ork::vec4< bool >* lret = new ork::vec4< bool >(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4< bool > >::push(L,lret,true);

		return 1;
	}

	// bool ork::FrameBuffer::getDepthMask()
	static int _bind_getDepthMask(lua_State *L) {
		if (!_lg_typecheck_getDepthMask(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::FrameBuffer::getDepthMask() function, expected prototype:\nbool ork::FrameBuffer::getDepthMask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::FrameBuffer::getDepthMask(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getDepthMask();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::vec2< int > ork::FrameBuffer::getStencilMask()
	static int _bind_getStencilMask(lua_State *L) {
		if (!_lg_typecheck_getStencilMask(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2< int > ork::FrameBuffer::getStencilMask() function, expected prototype:\nork::vec2< int > ork::FrameBuffer::getStencilMask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2< int > ork::FrameBuffer::getStencilMask(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2< int > stack_lret = self->getStencilMask();
		ork::vec2< int >* lret = new ork::vec2< int >(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2< int > >::push(L,lret,true);

		return 1;
	}

	// void ork::FrameBuffer::setParameters(const ork::FrameBuffer::Parameters & p)
	static int _bind_setParameters(lua_State *L) {
		if (!_lg_typecheck_setParameters(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setParameters(const ork::FrameBuffer::Parameters & p) function, expected prototype:\nvoid ork::FrameBuffer::setParameters(const ork::FrameBuffer::Parameters & p)\nClass arguments details:\narg 1 ID = 72789067\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::FrameBuffer::Parameters* p_ptr=(Luna< ork::FrameBuffer::Parameters >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in ork::FrameBuffer::setParameters function");
		}
		const ork::FrameBuffer::Parameters & p=*p_ptr;

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setParameters(const ork::FrameBuffer::Parameters &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setParameters(p);

		return 0;
	}

	// void ork::FrameBuffer::setViewport(const ork::vec4< int > & viewport)
	static int _bind_setViewport_overload_1(lua_State *L) {
		if (!_lg_typecheck_setViewport_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setViewport(const ork::vec4< int > & viewport) function, expected prototype:\nvoid ork::FrameBuffer::setViewport(const ork::vec4< int > & viewport)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4< int >* viewport_ptr=(Luna< ork::vec4< int > >::check(L,2));
		if( !viewport_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg viewport in ork::FrameBuffer::setViewport function");
		}
		const ork::vec4< int > & viewport=*viewport_ptr;

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setViewport(const ork::vec4< int > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setViewport(viewport);

		return 0;
	}

	// void ork::FrameBuffer::setViewport(int index, const ork::vec4< float > & viewport)
	static int _bind_setViewport_overload_2(lua_State *L) {
		if (!_lg_typecheck_setViewport_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setViewport(int index, const ork::vec4< float > & viewport) function, expected prototype:\nvoid ork::FrameBuffer::setViewport(int index, const ork::vec4< float > & viewport)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		const ork::vec4< float >* viewport_ptr=(Luna< ork::vec4< float > >::check(L,3));
		if( !viewport_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg viewport in ork::FrameBuffer::setViewport function");
		}
		const ork::vec4< float > & viewport=*viewport_ptr;

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setViewport(int, const ork::vec4< float > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setViewport(index, viewport);

		return 0;
	}

	// Overload binder for ork::FrameBuffer::setViewport
	static int _bind_setViewport(lua_State *L) {
		if (_lg_typecheck_setViewport_overload_1(L)) return _bind_setViewport_overload_1(L);
		if (_lg_typecheck_setViewport_overload_2(L)) return _bind_setViewport_overload_2(L);

		luaL_error(L, "error in function setViewport, cannot match any of the overloads for function setViewport:\n  setViewport(const ork::vec4< int > &)\n  setViewport(int, const ork::vec4< float > &)\n");
		return 0;
	}

	// void ork::FrameBuffer::setDepthRange(float n, float f)
	static int _bind_setDepthRange_overload_1(lua_State *L) {
		if (!_lg_typecheck_setDepthRange_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setDepthRange(float n, float f) function, expected prototype:\nvoid ork::FrameBuffer::setDepthRange(float n, float f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float n=(float)lua_tonumber(L,2);
		float f=(float)lua_tonumber(L,3);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setDepthRange(float, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDepthRange(n, f);

		return 0;
	}

	// void ork::FrameBuffer::setDepthRange(int index, double n, double f)
	static int _bind_setDepthRange_overload_2(lua_State *L) {
		if (!_lg_typecheck_setDepthRange_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setDepthRange(int index, double n, double f) function, expected prototype:\nvoid ork::FrameBuffer::setDepthRange(int index, double n, double f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		double n=(double)lua_tonumber(L,3);
		double f=(double)lua_tonumber(L,4);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setDepthRange(int, double, double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDepthRange(index, n, f);

		return 0;
	}

	// Overload binder for ork::FrameBuffer::setDepthRange
	static int _bind_setDepthRange(lua_State *L) {
		if (_lg_typecheck_setDepthRange_overload_1(L)) return _bind_setDepthRange_overload_1(L);
		if (_lg_typecheck_setDepthRange_overload_2(L)) return _bind_setDepthRange_overload_2(L);

		luaL_error(L, "error in function setDepthRange, cannot match any of the overloads for function setDepthRange:\n  setDepthRange(float, float)\n  setDepthRange(int, double, double)\n");
		return 0;
	}

	// void ork::FrameBuffer::setClipDistances(int clipDistances)
	static int _bind_setClipDistances(lua_State *L) {
		if (!_lg_typecheck_setClipDistances(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setClipDistances(int clipDistances) function, expected prototype:\nvoid ork::FrameBuffer::setClipDistances(int clipDistances)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int clipDistances=(int)lua_tointeger(L,2);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setClipDistances(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setClipDistances(clipDistances);

		return 0;
	}

	// void ork::FrameBuffer::setClearColor(const ork::vec4< float > & clearColor)
	static int _bind_setClearColor(lua_State *L) {
		if (!_lg_typecheck_setClearColor(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setClearColor(const ork::vec4< float > & clearColor) function, expected prototype:\nvoid ork::FrameBuffer::setClearColor(const ork::vec4< float > & clearColor)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4< float >* clearColor_ptr=(Luna< ork::vec4< float > >::check(L,2));
		if( !clearColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clearColor in ork::FrameBuffer::setClearColor function");
		}
		const ork::vec4< float > & clearColor=*clearColor_ptr;

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setClearColor(const ork::vec4< float > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setClearColor(clearColor);

		return 0;
	}

	// void ork::FrameBuffer::setClearDepth(float clearDepth)
	static int _bind_setClearDepth(lua_State *L) {
		if (!_lg_typecheck_setClearDepth(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setClearDepth(float clearDepth) function, expected prototype:\nvoid ork::FrameBuffer::setClearDepth(float clearDepth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float clearDepth=(float)lua_tonumber(L,2);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setClearDepth(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setClearDepth(clearDepth);

		return 0;
	}

	// void ork::FrameBuffer::setClearStencil(int clearStencil)
	static int _bind_setClearStencil(lua_State *L) {
		if (!_lg_typecheck_setClearStencil(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setClearStencil(int clearStencil) function, expected prototype:\nvoid ork::FrameBuffer::setClearStencil(int clearStencil)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int clearStencil=(int)lua_tointeger(L,2);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setClearStencil(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setClearStencil(clearStencil);

		return 0;
	}

	// void ork::FrameBuffer::setPointSize(float pointSize)
	static int _bind_setPointSize(lua_State *L) {
		if (!_lg_typecheck_setPointSize(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setPointSize(float pointSize) function, expected prototype:\nvoid ork::FrameBuffer::setPointSize(float pointSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float pointSize=(float)lua_tonumber(L,2);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setPointSize(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPointSize(pointSize);

		return 0;
	}

	// void ork::FrameBuffer::setPointFadeThresholdSize(float pointFadeThresholdSize)
	static int _bind_setPointFadeThresholdSize(lua_State *L) {
		if (!_lg_typecheck_setPointFadeThresholdSize(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setPointFadeThresholdSize(float pointFadeThresholdSize) function, expected prototype:\nvoid ork::FrameBuffer::setPointFadeThresholdSize(float pointFadeThresholdSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float pointFadeThresholdSize=(float)lua_tonumber(L,2);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setPointFadeThresholdSize(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPointFadeThresholdSize(pointFadeThresholdSize);

		return 0;
	}

	// void ork::FrameBuffer::setPointLowerLeftOrigin(bool pointLowerLeftOrigin)
	static int _bind_setPointLowerLeftOrigin(lua_State *L) {
		if (!_lg_typecheck_setPointLowerLeftOrigin(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setPointLowerLeftOrigin(bool pointLowerLeftOrigin) function, expected prototype:\nvoid ork::FrameBuffer::setPointLowerLeftOrigin(bool pointLowerLeftOrigin)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool pointLowerLeftOrigin=(bool)(lua_toboolean(L,2)==1);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setPointLowerLeftOrigin(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPointLowerLeftOrigin(pointLowerLeftOrigin);

		return 0;
	}

	// void ork::FrameBuffer::setLineWidth(float lineWidth)
	static int _bind_setLineWidth(lua_State *L) {
		if (!_lg_typecheck_setLineWidth(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setLineWidth(float lineWidth) function, expected prototype:\nvoid ork::FrameBuffer::setLineWidth(float lineWidth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float lineWidth=(float)lua_tonumber(L,2);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setLineWidth(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLineWidth(lineWidth);

		return 0;
	}

	// void ork::FrameBuffer::setLineSmooth(bool lineSmooth)
	static int _bind_setLineSmooth(lua_State *L) {
		if (!_lg_typecheck_setLineSmooth(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setLineSmooth(bool lineSmooth) function, expected prototype:\nvoid ork::FrameBuffer::setLineSmooth(bool lineSmooth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool lineSmooth=(bool)(lua_toboolean(L,2)==1);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setLineSmooth(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLineSmooth(lineSmooth);

		return 0;
	}

	// void ork::FrameBuffer::setFrontFaceCW(bool frontFaceCW)
	static int _bind_setFrontFaceCW(lua_State *L) {
		if (!_lg_typecheck_setFrontFaceCW(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setFrontFaceCW(bool frontFaceCW) function, expected prototype:\nvoid ork::FrameBuffer::setFrontFaceCW(bool frontFaceCW)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool frontFaceCW=(bool)(lua_toboolean(L,2)==1);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setFrontFaceCW(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFrontFaceCW(frontFaceCW);

		return 0;
	}

	// void ork::FrameBuffer::setPolygonMode(ork::PolygonMode polygonFront, ork::PolygonMode polygonBack)
	static int _bind_setPolygonMode(lua_State *L) {
		if (!_lg_typecheck_setPolygonMode(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setPolygonMode(ork::PolygonMode polygonFront, ork::PolygonMode polygonBack) function, expected prototype:\nvoid ork::FrameBuffer::setPolygonMode(ork::PolygonMode polygonFront, ork::PolygonMode polygonBack)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::PolygonMode polygonFront=(ork::PolygonMode)lua_tointeger(L,2);
		ork::PolygonMode polygonBack=(ork::PolygonMode)lua_tointeger(L,3);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setPolygonMode(ork::PolygonMode, ork::PolygonMode). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPolygonMode(polygonFront, polygonBack);

		return 0;
	}

	// void ork::FrameBuffer::setPolygonSmooth(bool polygonSmooth)
	static int _bind_setPolygonSmooth(lua_State *L) {
		if (!_lg_typecheck_setPolygonSmooth(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setPolygonSmooth(bool polygonSmooth) function, expected prototype:\nvoid ork::FrameBuffer::setPolygonSmooth(bool polygonSmooth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool polygonSmooth=(bool)(lua_toboolean(L,2)==1);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setPolygonSmooth(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPolygonSmooth(polygonSmooth);

		return 0;
	}

	// void ork::FrameBuffer::setPolygonOffset(float factor, float units)
	static int _bind_setPolygonOffset_overload_1(lua_State *L) {
		if (!_lg_typecheck_setPolygonOffset_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setPolygonOffset(float factor, float units) function, expected prototype:\nvoid ork::FrameBuffer::setPolygonOffset(float factor, float units)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float factor=(float)lua_tonumber(L,2);
		float units=(float)lua_tonumber(L,3);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setPolygonOffset(float, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPolygonOffset(factor, units);

		return 0;
	}

	// void ork::FrameBuffer::setPolygonOffset(bool pointOffset, bool lineOffset, bool polygonOffset)
	static int _bind_setPolygonOffset_overload_2(lua_State *L) {
		if (!_lg_typecheck_setPolygonOffset_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setPolygonOffset(bool pointOffset, bool lineOffset, bool polygonOffset) function, expected prototype:\nvoid ork::FrameBuffer::setPolygonOffset(bool pointOffset, bool lineOffset, bool polygonOffset)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool pointOffset=(bool)(lua_toboolean(L,2)==1);
		bool lineOffset=(bool)(lua_toboolean(L,3)==1);
		bool polygonOffset=(bool)(lua_toboolean(L,4)==1);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setPolygonOffset(bool, bool, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPolygonOffset(pointOffset, lineOffset, polygonOffset);

		return 0;
	}

	// Overload binder for ork::FrameBuffer::setPolygonOffset
	static int _bind_setPolygonOffset(lua_State *L) {
		if (_lg_typecheck_setPolygonOffset_overload_1(L)) return _bind_setPolygonOffset_overload_1(L);
		if (_lg_typecheck_setPolygonOffset_overload_2(L)) return _bind_setPolygonOffset_overload_2(L);

		luaL_error(L, "error in function setPolygonOffset, cannot match any of the overloads for function setPolygonOffset:\n  setPolygonOffset(float, float)\n  setPolygonOffset(bool, bool, bool)\n");
		return 0;
	}

	// void ork::FrameBuffer::setMultisample(bool multiSample)
	static int _bind_setMultisample(lua_State *L) {
		if (!_lg_typecheck_setMultisample(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setMultisample(bool multiSample) function, expected prototype:\nvoid ork::FrameBuffer::setMultisample(bool multiSample)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool multiSample=(bool)(lua_toboolean(L,2)==1);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setMultisample(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMultisample(multiSample);

		return 0;
	}

	// void ork::FrameBuffer::setSampleAlpha(bool sampleAlphaToCoverage, bool sampleAlphaToOne)
	static int _bind_setSampleAlpha(lua_State *L) {
		if (!_lg_typecheck_setSampleAlpha(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setSampleAlpha(bool sampleAlphaToCoverage, bool sampleAlphaToOne) function, expected prototype:\nvoid ork::FrameBuffer::setSampleAlpha(bool sampleAlphaToCoverage, bool sampleAlphaToOne)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool sampleAlphaToCoverage=(bool)(lua_toboolean(L,2)==1);
		bool sampleAlphaToOne=(bool)(lua_toboolean(L,3)==1);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setSampleAlpha(bool, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSampleAlpha(sampleAlphaToCoverage, sampleAlphaToOne);

		return 0;
	}

	// void ork::FrameBuffer::setSampleCoverage(float sampleCoverage)
	static int _bind_setSampleCoverage(lua_State *L) {
		if (!_lg_typecheck_setSampleCoverage(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setSampleCoverage(float sampleCoverage) function, expected prototype:\nvoid ork::FrameBuffer::setSampleCoverage(float sampleCoverage)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float sampleCoverage=(float)lua_tonumber(L,2);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setSampleCoverage(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSampleCoverage(sampleCoverage);

		return 0;
	}

	// void ork::FrameBuffer::setSampleMask(unsigned int sampleMask)
	static int _bind_setSampleMask(lua_State *L) {
		if (!_lg_typecheck_setSampleMask(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setSampleMask(unsigned int sampleMask) function, expected prototype:\nvoid ork::FrameBuffer::setSampleMask(unsigned int sampleMask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int sampleMask=(unsigned int)lua_tointeger(L,2);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setSampleMask(unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSampleMask(sampleMask);

		return 0;
	}

	// void ork::FrameBuffer::setSampleShading(bool sampleShading, float minSamples)
	static int _bind_setSampleShading(lua_State *L) {
		if (!_lg_typecheck_setSampleShading(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setSampleShading(bool sampleShading, float minSamples) function, expected prototype:\nvoid ork::FrameBuffer::setSampleShading(bool sampleShading, float minSamples)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool sampleShading=(bool)(lua_toboolean(L,2)==1);
		float minSamples=(float)lua_tonumber(L,3);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setSampleShading(bool, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSampleShading(sampleShading, minSamples);

		return 0;
	}

	// void ork::FrameBuffer::setOcclusionTest(ork::ptr< ork::Query > occlusionQuery, ork::QueryMode occlusionMode)
	static int _bind_setOcclusionTest(lua_State *L) {
		if (!_lg_typecheck_setOcclusionTest(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setOcclusionTest(ork::ptr< ork::Query > occlusionQuery, ork::QueryMode occlusionMode) function, expected prototype:\nvoid ork::FrameBuffer::setOcclusionTest(ork::ptr< ork::Query > occlusionQuery, ork::QueryMode occlusionMode)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Query > occlusionQuery = Luna< ork::Object >::checkSubType< ork::Query >(L,2);
		ork::QueryMode occlusionMode=(ork::QueryMode)lua_tointeger(L,3);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setOcclusionTest(ork::ptr< ork::Query >, ork::QueryMode). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOcclusionTest(occlusionQuery, occlusionMode);

		return 0;
	}

	// void ork::FrameBuffer::setScissorTest(bool enableScissor)
	static int _bind_setScissorTest_overload_1(lua_State *L) {
		if (!_lg_typecheck_setScissorTest_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setScissorTest(bool enableScissor) function, expected prototype:\nvoid ork::FrameBuffer::setScissorTest(bool enableScissor)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enableScissor=(bool)(lua_toboolean(L,2)==1);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setScissorTest(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setScissorTest(enableScissor);

		return 0;
	}

	// void ork::FrameBuffer::setScissorTest(int index, bool enableScissor)
	static int _bind_setScissorTest_overload_2(lua_State *L) {
		if (!_lg_typecheck_setScissorTest_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setScissorTest(int index, bool enableScissor) function, expected prototype:\nvoid ork::FrameBuffer::setScissorTest(int index, bool enableScissor)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		bool enableScissor=(bool)(lua_toboolean(L,3)==1);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setScissorTest(int, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setScissorTest(index, enableScissor);

		return 0;
	}

	// void ork::FrameBuffer::setScissorTest(bool enableScissor, const ork::vec4< int > & scissor)
	static int _bind_setScissorTest_overload_3(lua_State *L) {
		if (!_lg_typecheck_setScissorTest_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setScissorTest(bool enableScissor, const ork::vec4< int > & scissor) function, expected prototype:\nvoid ork::FrameBuffer::setScissorTest(bool enableScissor, const ork::vec4< int > & scissor)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enableScissor=(bool)(lua_toboolean(L,2)==1);
		const ork::vec4< int >* scissor_ptr=(Luna< ork::vec4< int > >::check(L,3));
		if( !scissor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scissor in ork::FrameBuffer::setScissorTest function");
		}
		const ork::vec4< int > & scissor=*scissor_ptr;

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setScissorTest(bool, const ork::vec4< int > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setScissorTest(enableScissor, scissor);

		return 0;
	}

	// void ork::FrameBuffer::setScissorTest(int index, bool enableScissor, const ork::vec4< int > & scissor)
	static int _bind_setScissorTest_overload_4(lua_State *L) {
		if (!_lg_typecheck_setScissorTest_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setScissorTest(int index, bool enableScissor, const ork::vec4< int > & scissor) function, expected prototype:\nvoid ork::FrameBuffer::setScissorTest(int index, bool enableScissor, const ork::vec4< int > & scissor)\nClass arguments details:\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		bool enableScissor=(bool)(lua_toboolean(L,3)==1);
		const ork::vec4< int >* scissor_ptr=(Luna< ork::vec4< int > >::check(L,4));
		if( !scissor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scissor in ork::FrameBuffer::setScissorTest function");
		}
		const ork::vec4< int > & scissor=*scissor_ptr;

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setScissorTest(int, bool, const ork::vec4< int > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setScissorTest(index, enableScissor, scissor);

		return 0;
	}

	// Overload binder for ork::FrameBuffer::setScissorTest
	static int _bind_setScissorTest(lua_State *L) {
		if (_lg_typecheck_setScissorTest_overload_1(L)) return _bind_setScissorTest_overload_1(L);
		if (_lg_typecheck_setScissorTest_overload_2(L)) return _bind_setScissorTest_overload_2(L);
		if (_lg_typecheck_setScissorTest_overload_3(L)) return _bind_setScissorTest_overload_3(L);
		if (_lg_typecheck_setScissorTest_overload_4(L)) return _bind_setScissorTest_overload_4(L);

		luaL_error(L, "error in function setScissorTest, cannot match any of the overloads for function setScissorTest:\n  setScissorTest(bool)\n  setScissorTest(int, bool)\n  setScissorTest(bool, const ork::vec4< int > &)\n  setScissorTest(int, bool, const ork::vec4< int > &)\n");
		return 0;
	}

	// void ork::FrameBuffer::setStencilTest(bool enableStencil)
	static int _bind_setStencilTest_overload_1(lua_State *L) {
		if (!_lg_typecheck_setStencilTest_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setStencilTest(bool enableStencil) function, expected prototype:\nvoid ork::FrameBuffer::setStencilTest(bool enableStencil)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enableStencil=(bool)(lua_toboolean(L,2)==1);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setStencilTest(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStencilTest(enableStencil);

		return 0;
	}

	// void ork::FrameBuffer::setStencilTest(bool enableStencil, ork::Function f, int ref, unsigned int mask, ork::StencilOperation sfail, ork::StencilOperation dpfail, ork::StencilOperation dppass)
	static int _bind_setStencilTest_overload_2(lua_State *L) {
		if (!_lg_typecheck_setStencilTest_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setStencilTest(bool enableStencil, ork::Function f, int ref, unsigned int mask, ork::StencilOperation sfail, ork::StencilOperation dpfail, ork::StencilOperation dppass) function, expected prototype:\nvoid ork::FrameBuffer::setStencilTest(bool enableStencil, ork::Function f, int ref, unsigned int mask, ork::StencilOperation sfail, ork::StencilOperation dpfail, ork::StencilOperation dppass)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enableStencil=(bool)(lua_toboolean(L,2)==1);
		ork::Function f=(ork::Function)lua_tointeger(L,3);
		int ref=(int)lua_tointeger(L,4);
		unsigned int mask=(unsigned int)lua_tointeger(L,5);
		ork::StencilOperation sfail=(ork::StencilOperation)lua_tointeger(L,6);
		ork::StencilOperation dpfail=(ork::StencilOperation)lua_tointeger(L,7);
		ork::StencilOperation dppass=(ork::StencilOperation)lua_tointeger(L,8);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setStencilTest(bool, ork::Function, int, unsigned int, ork::StencilOperation, ork::StencilOperation, ork::StencilOperation). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStencilTest(enableStencil, f, ref, mask, sfail, dpfail, dppass);

		return 0;
	}

	// void ork::FrameBuffer::setStencilTest(bool enableStencil, ork::Function ff, int fref, unsigned int fmask, ork::StencilOperation ffail, ork::StencilOperation fdpfail, ork::StencilOperation fdppass, ork::Function bf, int bref, unsigned int bmask, ork::StencilOperation bfail, ork::StencilOperation bdpfail, ork::StencilOperation bdppass)
	static int _bind_setStencilTest_overload_3(lua_State *L) {
		if (!_lg_typecheck_setStencilTest_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setStencilTest(bool enableStencil, ork::Function ff, int fref, unsigned int fmask, ork::StencilOperation ffail, ork::StencilOperation fdpfail, ork::StencilOperation fdppass, ork::Function bf, int bref, unsigned int bmask, ork::StencilOperation bfail, ork::StencilOperation bdpfail, ork::StencilOperation bdppass) function, expected prototype:\nvoid ork::FrameBuffer::setStencilTest(bool enableStencil, ork::Function ff, int fref, unsigned int fmask, ork::StencilOperation ffail, ork::StencilOperation fdpfail, ork::StencilOperation fdppass, ork::Function bf, int bref, unsigned int bmask, ork::StencilOperation bfail, ork::StencilOperation bdpfail, ork::StencilOperation bdppass)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enableStencil=(bool)(lua_toboolean(L,2)==1);
		ork::Function ff=(ork::Function)lua_tointeger(L,3);
		int fref=(int)lua_tointeger(L,4);
		unsigned int fmask=(unsigned int)lua_tointeger(L,5);
		ork::StencilOperation ffail=(ork::StencilOperation)lua_tointeger(L,6);
		ork::StencilOperation fdpfail=(ork::StencilOperation)lua_tointeger(L,7);
		ork::StencilOperation fdppass=(ork::StencilOperation)lua_tointeger(L,8);
		ork::Function bf=(ork::Function)lua_tointeger(L,9);
		int bref=(int)lua_tointeger(L,10);
		unsigned int bmask=(unsigned int)lua_tointeger(L,11);
		ork::StencilOperation bfail=(ork::StencilOperation)lua_tointeger(L,12);
		ork::StencilOperation bdpfail=(ork::StencilOperation)lua_tointeger(L,13);
		ork::StencilOperation bdppass=(ork::StencilOperation)lua_tointeger(L,14);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setStencilTest(bool, ork::Function, int, unsigned int, ork::StencilOperation, ork::StencilOperation, ork::StencilOperation, ork::Function, int, unsigned int, ork::StencilOperation, ork::StencilOperation, ork::StencilOperation). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStencilTest(enableStencil, ff, fref, fmask, ffail, fdpfail, fdppass, bf, bref, bmask, bfail, bdpfail, bdppass);

		return 0;
	}

	// Overload binder for ork::FrameBuffer::setStencilTest
	static int _bind_setStencilTest(lua_State *L) {
		if (_lg_typecheck_setStencilTest_overload_1(L)) return _bind_setStencilTest_overload_1(L);
		if (_lg_typecheck_setStencilTest_overload_2(L)) return _bind_setStencilTest_overload_2(L);
		if (_lg_typecheck_setStencilTest_overload_3(L)) return _bind_setStencilTest_overload_3(L);

		luaL_error(L, "error in function setStencilTest, cannot match any of the overloads for function setStencilTest:\n  setStencilTest(bool)\n  setStencilTest(bool, ork::Function, int, unsigned int, ork::StencilOperation, ork::StencilOperation, ork::StencilOperation)\n  setStencilTest(bool, ork::Function, int, unsigned int, ork::StencilOperation, ork::StencilOperation, ork::StencilOperation, ork::Function, int, unsigned int, ork::StencilOperation, ork::StencilOperation, ork::StencilOperation)\n");
		return 0;
	}

	// void ork::FrameBuffer::setDepthTest(bool enableDepth)
	static int _bind_setDepthTest_overload_1(lua_State *L) {
		if (!_lg_typecheck_setDepthTest_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setDepthTest(bool enableDepth) function, expected prototype:\nvoid ork::FrameBuffer::setDepthTest(bool enableDepth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enableDepth=(bool)(lua_toboolean(L,2)==1);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setDepthTest(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDepthTest(enableDepth);

		return 0;
	}

	// void ork::FrameBuffer::setDepthTest(bool enableDepth, ork::Function depth)
	static int _bind_setDepthTest_overload_2(lua_State *L) {
		if (!_lg_typecheck_setDepthTest_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setDepthTest(bool enableDepth, ork::Function depth) function, expected prototype:\nvoid ork::FrameBuffer::setDepthTest(bool enableDepth, ork::Function depth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enableDepth=(bool)(lua_toboolean(L,2)==1);
		ork::Function depth=(ork::Function)lua_tointeger(L,3);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setDepthTest(bool, ork::Function). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDepthTest(enableDepth, depth);

		return 0;
	}

	// Overload binder for ork::FrameBuffer::setDepthTest
	static int _bind_setDepthTest(lua_State *L) {
		if (_lg_typecheck_setDepthTest_overload_1(L)) return _bind_setDepthTest_overload_1(L);
		if (_lg_typecheck_setDepthTest_overload_2(L)) return _bind_setDepthTest_overload_2(L);

		luaL_error(L, "error in function setDepthTest, cannot match any of the overloads for function setDepthTest:\n  setDepthTest(bool)\n  setDepthTest(bool, ork::Function)\n");
		return 0;
	}

	// void ork::FrameBuffer::setBlend(bool enableBlend)
	static int _bind_setBlend_overload_1(lua_State *L) {
		if (!_lg_typecheck_setBlend_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setBlend(bool enableBlend) function, expected prototype:\nvoid ork::FrameBuffer::setBlend(bool enableBlend)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enableBlend=(bool)(lua_toboolean(L,2)==1);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setBlend(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBlend(enableBlend);

		return 0;
	}

	// void ork::FrameBuffer::setBlend(ork::BufferId buffer, bool enableBlend)
	static int _bind_setBlend_overload_2(lua_State *L) {
		if (!_lg_typecheck_setBlend_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setBlend(ork::BufferId buffer, bool enableBlend) function, expected prototype:\nvoid ork::FrameBuffer::setBlend(ork::BufferId buffer, bool enableBlend)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId buffer=(ork::BufferId)lua_tointeger(L,2);
		bool enableBlend=(bool)(lua_toboolean(L,3)==1);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setBlend(ork::BufferId, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBlend(buffer, enableBlend);

		return 0;
	}

	// void ork::FrameBuffer::setBlend(bool enableBlend, ork::BlendEquation e, ork::BlendArgument src, ork::BlendArgument dst)
	static int _bind_setBlend_overload_3(lua_State *L) {
		if (!_lg_typecheck_setBlend_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setBlend(bool enableBlend, ork::BlendEquation e, ork::BlendArgument src, ork::BlendArgument dst) function, expected prototype:\nvoid ork::FrameBuffer::setBlend(bool enableBlend, ork::BlendEquation e, ork::BlendArgument src, ork::BlendArgument dst)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enableBlend=(bool)(lua_toboolean(L,2)==1);
		ork::BlendEquation e=(ork::BlendEquation)lua_tointeger(L,3);
		ork::BlendArgument src=(ork::BlendArgument)lua_tointeger(L,4);
		ork::BlendArgument dst=(ork::BlendArgument)lua_tointeger(L,5);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setBlend(bool, ork::BlendEquation, ork::BlendArgument, ork::BlendArgument). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBlend(enableBlend, e, src, dst);

		return 0;
	}

	// void ork::FrameBuffer::setBlend(ork::BufferId buffer, bool enableBlend, ork::BlendEquation e, ork::BlendArgument src, ork::BlendArgument dst)
	static int _bind_setBlend_overload_4(lua_State *L) {
		if (!_lg_typecheck_setBlend_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setBlend(ork::BufferId buffer, bool enableBlend, ork::BlendEquation e, ork::BlendArgument src, ork::BlendArgument dst) function, expected prototype:\nvoid ork::FrameBuffer::setBlend(ork::BufferId buffer, bool enableBlend, ork::BlendEquation e, ork::BlendArgument src, ork::BlendArgument dst)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId buffer=(ork::BufferId)lua_tointeger(L,2);
		bool enableBlend=(bool)(lua_toboolean(L,3)==1);
		ork::BlendEquation e=(ork::BlendEquation)lua_tointeger(L,4);
		ork::BlendArgument src=(ork::BlendArgument)lua_tointeger(L,5);
		ork::BlendArgument dst=(ork::BlendArgument)lua_tointeger(L,6);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setBlend(ork::BufferId, bool, ork::BlendEquation, ork::BlendArgument, ork::BlendArgument). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBlend(buffer, enableBlend, e, src, dst);

		return 0;
	}

	// void ork::FrameBuffer::setBlend(bool enableBlend, ork::BlendEquation rgb, ork::BlendArgument srgb, ork::BlendArgument drgb, ork::BlendEquation alpha, ork::BlendArgument salpha, ork::BlendArgument dalpha)
	static int _bind_setBlend_overload_5(lua_State *L) {
		if (!_lg_typecheck_setBlend_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setBlend(bool enableBlend, ork::BlendEquation rgb, ork::BlendArgument srgb, ork::BlendArgument drgb, ork::BlendEquation alpha, ork::BlendArgument salpha, ork::BlendArgument dalpha) function, expected prototype:\nvoid ork::FrameBuffer::setBlend(bool enableBlend, ork::BlendEquation rgb, ork::BlendArgument srgb, ork::BlendArgument drgb, ork::BlendEquation alpha, ork::BlendArgument salpha, ork::BlendArgument dalpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enableBlend=(bool)(lua_toboolean(L,2)==1);
		ork::BlendEquation rgb=(ork::BlendEquation)lua_tointeger(L,3);
		ork::BlendArgument srgb=(ork::BlendArgument)lua_tointeger(L,4);
		ork::BlendArgument drgb=(ork::BlendArgument)lua_tointeger(L,5);
		ork::BlendEquation alpha=(ork::BlendEquation)lua_tointeger(L,6);
		ork::BlendArgument salpha=(ork::BlendArgument)lua_tointeger(L,7);
		ork::BlendArgument dalpha=(ork::BlendArgument)lua_tointeger(L,8);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setBlend(bool, ork::BlendEquation, ork::BlendArgument, ork::BlendArgument, ork::BlendEquation, ork::BlendArgument, ork::BlendArgument). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBlend(enableBlend, rgb, srgb, drgb, alpha, salpha, dalpha);

		return 0;
	}

	// void ork::FrameBuffer::setBlend(ork::BufferId buffer, bool enableBlend, ork::BlendEquation rgb, ork::BlendArgument srgb, ork::BlendArgument drgb, ork::BlendEquation alpha, ork::BlendArgument salpha, ork::BlendArgument dalpha)
	static int _bind_setBlend_overload_6(lua_State *L) {
		if (!_lg_typecheck_setBlend_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setBlend(ork::BufferId buffer, bool enableBlend, ork::BlendEquation rgb, ork::BlendArgument srgb, ork::BlendArgument drgb, ork::BlendEquation alpha, ork::BlendArgument salpha, ork::BlendArgument dalpha) function, expected prototype:\nvoid ork::FrameBuffer::setBlend(ork::BufferId buffer, bool enableBlend, ork::BlendEquation rgb, ork::BlendArgument srgb, ork::BlendArgument drgb, ork::BlendEquation alpha, ork::BlendArgument salpha, ork::BlendArgument dalpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId buffer=(ork::BufferId)lua_tointeger(L,2);
		bool enableBlend=(bool)(lua_toboolean(L,3)==1);
		ork::BlendEquation rgb=(ork::BlendEquation)lua_tointeger(L,4);
		ork::BlendArgument srgb=(ork::BlendArgument)lua_tointeger(L,5);
		ork::BlendArgument drgb=(ork::BlendArgument)lua_tointeger(L,6);
		ork::BlendEquation alpha=(ork::BlendEquation)lua_tointeger(L,7);
		ork::BlendArgument salpha=(ork::BlendArgument)lua_tointeger(L,8);
		ork::BlendArgument dalpha=(ork::BlendArgument)lua_tointeger(L,9);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setBlend(ork::BufferId, bool, ork::BlendEquation, ork::BlendArgument, ork::BlendArgument, ork::BlendEquation, ork::BlendArgument, ork::BlendArgument). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBlend(buffer, enableBlend, rgb, srgb, drgb, alpha, salpha, dalpha);

		return 0;
	}

	// Overload binder for ork::FrameBuffer::setBlend
	static int _bind_setBlend(lua_State *L) {
		if (_lg_typecheck_setBlend_overload_1(L)) return _bind_setBlend_overload_1(L);
		if (_lg_typecheck_setBlend_overload_2(L)) return _bind_setBlend_overload_2(L);
		if (_lg_typecheck_setBlend_overload_3(L)) return _bind_setBlend_overload_3(L);
		if (_lg_typecheck_setBlend_overload_4(L)) return _bind_setBlend_overload_4(L);
		if (_lg_typecheck_setBlend_overload_5(L)) return _bind_setBlend_overload_5(L);
		if (_lg_typecheck_setBlend_overload_6(L)) return _bind_setBlend_overload_6(L);

		luaL_error(L, "error in function setBlend, cannot match any of the overloads for function setBlend:\n  setBlend(bool)\n  setBlend(ork::BufferId, bool)\n  setBlend(bool, ork::BlendEquation, ork::BlendArgument, ork::BlendArgument)\n  setBlend(ork::BufferId, bool, ork::BlendEquation, ork::BlendArgument, ork::BlendArgument)\n  setBlend(bool, ork::BlendEquation, ork::BlendArgument, ork::BlendArgument, ork::BlendEquation, ork::BlendArgument, ork::BlendArgument)\n  setBlend(ork::BufferId, bool, ork::BlendEquation, ork::BlendArgument, ork::BlendArgument, ork::BlendEquation, ork::BlendArgument, ork::BlendArgument)\n");
		return 0;
	}

	// void ork::FrameBuffer::setBlendColor(const ork::vec4< float > & color)
	static int _bind_setBlendColor(lua_State *L) {
		if (!_lg_typecheck_setBlendColor(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setBlendColor(const ork::vec4< float > & color) function, expected prototype:\nvoid ork::FrameBuffer::setBlendColor(const ork::vec4< float > & color)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4< float >* color_ptr=(Luna< ork::vec4< float > >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in ork::FrameBuffer::setBlendColor function");
		}
		const ork::vec4< float > & color=*color_ptr;

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setBlendColor(const ork::vec4< float > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBlendColor(color);

		return 0;
	}

	// void ork::FrameBuffer::setDither(bool enableDither)
	static int _bind_setDither(lua_State *L) {
		if (!_lg_typecheck_setDither(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setDither(bool enableDither) function, expected prototype:\nvoid ork::FrameBuffer::setDither(bool enableDither)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enableDither=(bool)(lua_toboolean(L,2)==1);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setDither(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDither(enableDither);

		return 0;
	}

	// void ork::FrameBuffer::setLogicOp(bool enableLogic)
	static int _bind_setLogicOp_overload_1(lua_State *L) {
		if (!_lg_typecheck_setLogicOp_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setLogicOp(bool enableLogic) function, expected prototype:\nvoid ork::FrameBuffer::setLogicOp(bool enableLogic)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enableLogic=(bool)(lua_toboolean(L,2)==1);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setLogicOp(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLogicOp(enableLogic);

		return 0;
	}

	// void ork::FrameBuffer::setLogicOp(bool enableLogic, ork::LogicOperation logicOp)
	static int _bind_setLogicOp_overload_2(lua_State *L) {
		if (!_lg_typecheck_setLogicOp_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setLogicOp(bool enableLogic, ork::LogicOperation logicOp) function, expected prototype:\nvoid ork::FrameBuffer::setLogicOp(bool enableLogic, ork::LogicOperation logicOp)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enableLogic=(bool)(lua_toboolean(L,2)==1);
		ork::LogicOperation logicOp=(ork::LogicOperation)lua_tointeger(L,3);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setLogicOp(bool, ork::LogicOperation). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLogicOp(enableLogic, logicOp);

		return 0;
	}

	// Overload binder for ork::FrameBuffer::setLogicOp
	static int _bind_setLogicOp(lua_State *L) {
		if (_lg_typecheck_setLogicOp_overload_1(L)) return _bind_setLogicOp_overload_1(L);
		if (_lg_typecheck_setLogicOp_overload_2(L)) return _bind_setLogicOp_overload_2(L);

		luaL_error(L, "error in function setLogicOp, cannot match any of the overloads for function setLogicOp:\n  setLogicOp(bool)\n  setLogicOp(bool, ork::LogicOperation)\n");
		return 0;
	}

	// void ork::FrameBuffer::setColorMask(bool r, bool g, bool b, bool a)
	static int _bind_setColorMask_overload_1(lua_State *L) {
		if (!_lg_typecheck_setColorMask_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setColorMask(bool r, bool g, bool b, bool a) function, expected prototype:\nvoid ork::FrameBuffer::setColorMask(bool r, bool g, bool b, bool a)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool r=(bool)(lua_toboolean(L,2)==1);
		bool g=(bool)(lua_toboolean(L,3)==1);
		bool b=(bool)(lua_toboolean(L,4)==1);
		bool a=(bool)(lua_toboolean(L,5)==1);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setColorMask(bool, bool, bool, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColorMask(r, g, b, a);

		return 0;
	}

	// void ork::FrameBuffer::setColorMask(ork::BufferId buffer, bool r, bool g, bool b, bool a)
	static int _bind_setColorMask_overload_2(lua_State *L) {
		if (!_lg_typecheck_setColorMask_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setColorMask(ork::BufferId buffer, bool r, bool g, bool b, bool a) function, expected prototype:\nvoid ork::FrameBuffer::setColorMask(ork::BufferId buffer, bool r, bool g, bool b, bool a)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId buffer=(ork::BufferId)lua_tointeger(L,2);
		bool r=(bool)(lua_toboolean(L,3)==1);
		bool g=(bool)(lua_toboolean(L,4)==1);
		bool b=(bool)(lua_toboolean(L,5)==1);
		bool a=(bool)(lua_toboolean(L,6)==1);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setColorMask(ork::BufferId, bool, bool, bool, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColorMask(buffer, r, g, b, a);

		return 0;
	}

	// Overload binder for ork::FrameBuffer::setColorMask
	static int _bind_setColorMask(lua_State *L) {
		if (_lg_typecheck_setColorMask_overload_1(L)) return _bind_setColorMask_overload_1(L);
		if (_lg_typecheck_setColorMask_overload_2(L)) return _bind_setColorMask_overload_2(L);

		luaL_error(L, "error in function setColorMask, cannot match any of the overloads for function setColorMask:\n  setColorMask(bool, bool, bool, bool)\n  setColorMask(ork::BufferId, bool, bool, bool, bool)\n");
		return 0;
	}

	// void ork::FrameBuffer::setDepthMask(bool d)
	static int _bind_setDepthMask(lua_State *L) {
		if (!_lg_typecheck_setDepthMask(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setDepthMask(bool d) function, expected prototype:\nvoid ork::FrameBuffer::setDepthMask(bool d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool d=(bool)(lua_toboolean(L,2)==1);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setDepthMask(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDepthMask(d);

		return 0;
	}

	// void ork::FrameBuffer::setStencilMask(unsigned int frontMask, unsigned int backMask)
	static int _bind_setStencilMask(lua_State *L) {
		if (!_lg_typecheck_setStencilMask(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::setStencilMask(unsigned int frontMask, unsigned int backMask) function, expected prototype:\nvoid ork::FrameBuffer::setStencilMask(unsigned int frontMask, unsigned int backMask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int frontMask=(unsigned int)lua_tointeger(L,2);
		unsigned int backMask=(unsigned int)lua_tointeger(L,3);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::setStencilMask(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStencilMask(frontMask, backMask);

		return 0;
	}

	// void ork::FrameBuffer::clear(bool color, bool stencil, bool depth)
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::clear(bool color, bool stencil, bool depth) function, expected prototype:\nvoid ork::FrameBuffer::clear(bool color, bool stencil, bool depth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool color=(bool)(lua_toboolean(L,2)==1);
		bool stencil=(bool)(lua_toboolean(L,3)==1);
		bool depth=(bool)(lua_toboolean(L,4)==1);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::clear(bool, bool, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear(color, stencil, depth);

		return 0;
	}

	// void ork::FrameBuffer::draw(ork::ptr< ork::Program > p, const ork::MeshBuffers & mesh, ork::MeshMode m, int first, int count, int primCount = 1, int base = 0)
	static int _bind_draw(lua_State *L) {
		if (!_lg_typecheck_draw(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::draw(ork::ptr< ork::Program > p, const ork::MeshBuffers & mesh, ork::MeshMode m, int first, int count, int primCount = 1, int base = 0) function, expected prototype:\nvoid ork::FrameBuffer::draw(ork::ptr< ork::Program > p, const ork::MeshBuffers & mesh, ork::MeshMode m, int first, int count, int primCount = 1, int base = 0)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< ork::Program > p = Luna< ork::Object >::checkSubType< ork::Program >(L,2);
		const ork::MeshBuffers* mesh_ptr=(Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,3));
		if( !mesh_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mesh in ork::FrameBuffer::draw function");
		}
		const ork::MeshBuffers & mesh=*mesh_ptr;
		ork::MeshMode m=(ork::MeshMode)lua_tointeger(L,4);
		int first=(int)lua_tointeger(L,5);
		int count=(int)lua_tointeger(L,6);
		int primCount=luatop>6 ? (int)lua_tointeger(L,7) : (int)1;
		int base=luatop>7 ? (int)lua_tointeger(L,8) : (int)0;

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::draw(ork::ptr< ork::Program >, const ork::MeshBuffers &, ork::MeshMode, int, int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->draw(p, mesh, m, first, count, primCount, base);

		return 0;
	}

	// void ork::FrameBuffer::multiDraw(ork::ptr< ork::Program > p, const ork::MeshBuffers & mesh, ork::MeshMode m, int * firsts, int * counts, int primCount, int * bases = 0)
	static int _bind_multiDraw(lua_State *L) {
		if (!_lg_typecheck_multiDraw(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::multiDraw(ork::ptr< ork::Program > p, const ork::MeshBuffers & mesh, ork::MeshMode m, int * firsts, int * counts, int primCount, int * bases = 0) function, expected prototype:\nvoid ork::FrameBuffer::multiDraw(ork::ptr< ork::Program > p, const ork::MeshBuffers & mesh, ork::MeshMode m, int * firsts, int * counts, int primCount, int * bases = 0)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< ork::Program > p = Luna< ork::Object >::checkSubType< ork::Program >(L,2);
		const ork::MeshBuffers* mesh_ptr=(Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,3));
		if( !mesh_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mesh in ork::FrameBuffer::multiDraw function");
		}
		const ork::MeshBuffers & mesh=*mesh_ptr;
		ork::MeshMode m=(ork::MeshMode)lua_tointeger(L,4);
		int* firsts=(int*)Luna< void >::check(L,5);
		int* counts=(int*)Luna< void >::check(L,6);
		int primCount=(int)lua_tointeger(L,7);
		int* bases=luatop>7 ? (int*)Luna< void >::check(L,8) : (int*)0;

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::multiDraw(ork::ptr< ork::Program >, const ork::MeshBuffers &, ork::MeshMode, int *, int *, int, int *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->multiDraw(p, mesh, m, firsts, counts, primCount, bases);

		return 0;
	}

	// void ork::FrameBuffer::drawIndirect(ork::ptr< ork::Program > p, const ork::MeshBuffers & mesh, ork::MeshMode m, const ork::Buffer & buf)
	static int _bind_drawIndirect(lua_State *L) {
		if (!_lg_typecheck_drawIndirect(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::drawIndirect(ork::ptr< ork::Program > p, const ork::MeshBuffers & mesh, ork::MeshMode m, const ork::Buffer & buf) function, expected prototype:\nvoid ork::FrameBuffer::drawIndirect(ork::ptr< ork::Program > p, const ork::MeshBuffers & mesh, ork::MeshMode m, const ork::Buffer & buf)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = 1381405\narg 4 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Program > p = Luna< ork::Object >::checkSubType< ork::Program >(L,2);
		const ork::MeshBuffers* mesh_ptr=(Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,3));
		if( !mesh_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mesh in ork::FrameBuffer::drawIndirect function");
		}
		const ork::MeshBuffers & mesh=*mesh_ptr;
		ork::MeshMode m=(ork::MeshMode)lua_tointeger(L,4);
		const ork::Buffer* buf_ptr=(Luna< ork::Object >::checkSubType< ork::Buffer >(L,5));
		if( !buf_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg buf in ork::FrameBuffer::drawIndirect function");
		}
		const ork::Buffer & buf=*buf_ptr;

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::drawIndirect(ork::ptr< ork::Program >, const ork::MeshBuffers &, ork::MeshMode, const ork::Buffer &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawIndirect(p, mesh, m, buf);

		return 0;
	}

	// void ork::FrameBuffer::drawFeedback(ork::ptr< ork::Program > p, const ork::MeshBuffers & mesh, ork::MeshMode m, const ork::TransformFeedback & tfb, int stream = 0)
	static int _bind_drawFeedback(lua_State *L) {
		if (!_lg_typecheck_drawFeedback(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::drawFeedback(ork::ptr< ork::Program > p, const ork::MeshBuffers & mesh, ork::MeshMode m, const ork::TransformFeedback & tfb, int stream = 0) function, expected prototype:\nvoid ork::FrameBuffer::drawFeedback(ork::ptr< ork::Program > p, const ork::MeshBuffers & mesh, ork::MeshMode m, const ork::TransformFeedback & tfb, int stream = 0)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = 1381405\narg 4 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< ork::Program > p = Luna< ork::Object >::checkSubType< ork::Program >(L,2);
		const ork::MeshBuffers* mesh_ptr=(Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,3));
		if( !mesh_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mesh in ork::FrameBuffer::drawFeedback function");
		}
		const ork::MeshBuffers & mesh=*mesh_ptr;
		ork::MeshMode m=(ork::MeshMode)lua_tointeger(L,4);
		const ork::TransformFeedback* tfb_ptr=(Luna< ork::Object >::checkSubType< ork::TransformFeedback >(L,5));
		if( !tfb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tfb in ork::FrameBuffer::drawFeedback function");
		}
		const ork::TransformFeedback & tfb=*tfb_ptr;
		int stream=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::drawFeedback(ork::ptr< ork::Program >, const ork::MeshBuffers &, ork::MeshMode, const ork::TransformFeedback &, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawFeedback(p, mesh, m, tfb, stream);

		return 0;
	}

	// void ork::FrameBuffer::drawQuad(ork::ptr< ork::Program > p)
	static int _bind_drawQuad(lua_State *L) {
		if (!_lg_typecheck_drawQuad(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::drawQuad(ork::ptr< ork::Program > p) function, expected prototype:\nvoid ork::FrameBuffer::drawQuad(ork::ptr< ork::Program > p)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Program > p = Luna< ork::Object >::checkSubType< ork::Program >(L,2);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::drawQuad(ork::ptr< ork::Program >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawQuad(p);

		return 0;
	}

	// void ork::FrameBuffer::readPixels(int x, int y, int w, int h, ork::TextureFormat f, ork::PixelType t, const ork::Buffer::Parameters & s, const ork::Buffer & dstBuf, bool clamp = false)
	static int _bind_readPixels(lua_State *L) {
		if (!_lg_typecheck_readPixels(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::readPixels(int x, int y, int w, int h, ork::TextureFormat f, ork::PixelType t, const ork::Buffer::Parameters & s, const ork::Buffer & dstBuf, bool clamp = false) function, expected prototype:\nvoid ork::FrameBuffer::readPixels(int x, int y, int w, int h, ork::TextureFormat f, ork::PixelType t, const ork::Buffer::Parameters & s, const ork::Buffer & dstBuf, bool clamp = false)\nClass arguments details:\narg 7 ID = 85004853\narg 8 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int w=(int)lua_tointeger(L,4);
		int h=(int)lua_tointeger(L,5);
		ork::TextureFormat f=(ork::TextureFormat)lua_tointeger(L,6);
		ork::PixelType t=(ork::PixelType)lua_tointeger(L,7);
		const ork::Buffer::Parameters* s_ptr=(Luna< ork::Buffer::Parameters >::check(L,8));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in ork::FrameBuffer::readPixels function");
		}
		const ork::Buffer::Parameters & s=*s_ptr;
		const ork::Buffer* dstBuf_ptr=(Luna< ork::Object >::checkSubType< ork::Buffer >(L,9));
		if( !dstBuf_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dstBuf in ork::FrameBuffer::readPixels function");
		}
		const ork::Buffer & dstBuf=*dstBuf_ptr;
		bool clamp=luatop>9 ? (bool)(lua_toboolean(L,10)==1) : (bool)false;

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::readPixels(int, int, int, int, ork::TextureFormat, ork::PixelType, const ork::Buffer::Parameters &, const ork::Buffer &, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readPixels(x, y, w, h, f, t, s, dstBuf, clamp);

		return 0;
	}

	// void ork::FrameBuffer::copyPixels(int xoff, int x, int y, int w, const ork::Texture1D & dst, int level)
	static int _bind_copyPixels_overload_1(lua_State *L) {
		if (!_lg_typecheck_copyPixels_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::copyPixels(int xoff, int x, int y, int w, const ork::Texture1D & dst, int level) function, expected prototype:\nvoid ork::FrameBuffer::copyPixels(int xoff, int x, int y, int w, const ork::Texture1D & dst, int level)\nClass arguments details:\narg 5 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int xoff=(int)lua_tointeger(L,2);
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);
		int w=(int)lua_tointeger(L,5);
		const ork::Texture1D* dst_ptr=(Luna< ork::Object >::checkSubType< ork::Texture1D >(L,6));
		if( !dst_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dst in ork::FrameBuffer::copyPixels function");
		}
		const ork::Texture1D & dst=*dst_ptr;
		int level=(int)lua_tointeger(L,7);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::copyPixels(int, int, int, int, const ork::Texture1D &, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->copyPixels(xoff, x, y, w, dst, level);

		return 0;
	}

	// void ork::FrameBuffer::copyPixels(int xoff, int layer, int x, int y, int w, int d, const ork::Texture1DArray & dst, int level)
	static int _bind_copyPixels_overload_2(lua_State *L) {
		if (!_lg_typecheck_copyPixels_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::copyPixels(int xoff, int layer, int x, int y, int w, int d, const ork::Texture1DArray & dst, int level) function, expected prototype:\nvoid ork::FrameBuffer::copyPixels(int xoff, int layer, int x, int y, int w, int d, const ork::Texture1DArray & dst, int level)\nClass arguments details:\narg 7 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int xoff=(int)lua_tointeger(L,2);
		int layer=(int)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		int w=(int)lua_tointeger(L,6);
		int d=(int)lua_tointeger(L,7);
		const ork::Texture1DArray* dst_ptr=(Luna< ork::Object >::checkSubType< ork::Texture1DArray >(L,8));
		if( !dst_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dst in ork::FrameBuffer::copyPixels function");
		}
		const ork::Texture1DArray & dst=*dst_ptr;
		int level=(int)lua_tointeger(L,9);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::copyPixels(int, int, int, int, int, int, const ork::Texture1DArray &, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->copyPixels(xoff, layer, x, y, w, d, dst, level);

		return 0;
	}

	// void ork::FrameBuffer::copyPixels(int xoff, int yoff, int x, int y, int w, int h, const ork::Texture2D & dst, int level)
	static int _bind_copyPixels_overload_3(lua_State *L) {
		if (!_lg_typecheck_copyPixels_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::copyPixels(int xoff, int yoff, int x, int y, int w, int h, const ork::Texture2D & dst, int level) function, expected prototype:\nvoid ork::FrameBuffer::copyPixels(int xoff, int yoff, int x, int y, int w, int h, const ork::Texture2D & dst, int level)\nClass arguments details:\narg 7 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int xoff=(int)lua_tointeger(L,2);
		int yoff=(int)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		int w=(int)lua_tointeger(L,6);
		int h=(int)lua_tointeger(L,7);
		const ork::Texture2D* dst_ptr=(Luna< ork::Object >::checkSubType< ork::Texture2D >(L,8));
		if( !dst_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dst in ork::FrameBuffer::copyPixels function");
		}
		const ork::Texture2D & dst=*dst_ptr;
		int level=(int)lua_tointeger(L,9);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::copyPixels(int, int, int, int, int, int, const ork::Texture2D &, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->copyPixels(xoff, yoff, x, y, w, h, dst, level);

		return 0;
	}

	// void ork::FrameBuffer::copyPixels(int xoff, int yoff, int layer, int x, int y, int w, int h, const ork::Texture2DArray & dst, int level)
	static int _bind_copyPixels_overload_4(lua_State *L) {
		if (!_lg_typecheck_copyPixels_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::copyPixels(int xoff, int yoff, int layer, int x, int y, int w, int h, const ork::Texture2DArray & dst, int level) function, expected prototype:\nvoid ork::FrameBuffer::copyPixels(int xoff, int yoff, int layer, int x, int y, int w, int h, const ork::Texture2DArray & dst, int level)\nClass arguments details:\narg 8 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int xoff=(int)lua_tointeger(L,2);
		int yoff=(int)lua_tointeger(L,3);
		int layer=(int)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);
		int w=(int)lua_tointeger(L,7);
		int h=(int)lua_tointeger(L,8);
		const ork::Texture2DArray* dst_ptr=(Luna< ork::Object >::checkSubType< ork::Texture2DArray >(L,9));
		if( !dst_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dst in ork::FrameBuffer::copyPixels function");
		}
		const ork::Texture2DArray & dst=*dst_ptr;
		int level=(int)lua_tointeger(L,10);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::copyPixels(int, int, int, int, int, int, int, const ork::Texture2DArray &, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->copyPixels(xoff, yoff, layer, x, y, w, h, dst, level);

		return 0;
	}

	// void ork::FrameBuffer::copyPixels(int xoff, int yoff, int zoff, int x, int y, int w, int h, const ork::Texture3D & dst, int level)
	static int _bind_copyPixels_overload_5(lua_State *L) {
		if (!_lg_typecheck_copyPixels_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::copyPixels(int xoff, int yoff, int zoff, int x, int y, int w, int h, const ork::Texture3D & dst, int level) function, expected prototype:\nvoid ork::FrameBuffer::copyPixels(int xoff, int yoff, int zoff, int x, int y, int w, int h, const ork::Texture3D & dst, int level)\nClass arguments details:\narg 8 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int xoff=(int)lua_tointeger(L,2);
		int yoff=(int)lua_tointeger(L,3);
		int zoff=(int)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);
		int w=(int)lua_tointeger(L,7);
		int h=(int)lua_tointeger(L,8);
		const ork::Texture3D* dst_ptr=(Luna< ork::Object >::checkSubType< ork::Texture3D >(L,9));
		if( !dst_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dst in ork::FrameBuffer::copyPixels function");
		}
		const ork::Texture3D & dst=*dst_ptr;
		int level=(int)lua_tointeger(L,10);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::copyPixels(int, int, int, int, int, int, int, const ork::Texture3D &, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->copyPixels(xoff, yoff, zoff, x, y, w, h, dst, level);

		return 0;
	}

	// void ork::FrameBuffer::copyPixels(int xoff, int yoff, int x, int y, int w, int h, const ork::TextureCube & dst, int level, ork::CubeFace cf)
	static int _bind_copyPixels_overload_6(lua_State *L) {
		if (!_lg_typecheck_copyPixels_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::copyPixels(int xoff, int yoff, int x, int y, int w, int h, const ork::TextureCube & dst, int level, ork::CubeFace cf) function, expected prototype:\nvoid ork::FrameBuffer::copyPixels(int xoff, int yoff, int x, int y, int w, int h, const ork::TextureCube & dst, int level, ork::CubeFace cf)\nClass arguments details:\narg 7 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int xoff=(int)lua_tointeger(L,2);
		int yoff=(int)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		int w=(int)lua_tointeger(L,6);
		int h=(int)lua_tointeger(L,7);
		const ork::TextureCube* dst_ptr=(Luna< ork::Object >::checkSubType< ork::TextureCube >(L,8));
		if( !dst_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dst in ork::FrameBuffer::copyPixels function");
		}
		const ork::TextureCube & dst=*dst_ptr;
		int level=(int)lua_tointeger(L,9);
		ork::CubeFace cf=(ork::CubeFace)lua_tointeger(L,10);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::copyPixels(int, int, int, int, int, int, const ork::TextureCube &, int, ork::CubeFace). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->copyPixels(xoff, yoff, x, y, w, h, dst, level, cf);

		return 0;
	}

	// void ork::FrameBuffer::copyPixels(int xoff, int yoff, int layer, int x, int y, int w, int h, const ork::TextureCubeArray & dst, int level, ork::CubeFace cf)
	static int _bind_copyPixels_overload_7(lua_State *L) {
		if (!_lg_typecheck_copyPixels_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::copyPixels(int xoff, int yoff, int layer, int x, int y, int w, int h, const ork::TextureCubeArray & dst, int level, ork::CubeFace cf) function, expected prototype:\nvoid ork::FrameBuffer::copyPixels(int xoff, int yoff, int layer, int x, int y, int w, int h, const ork::TextureCubeArray & dst, int level, ork::CubeFace cf)\nClass arguments details:\narg 8 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int xoff=(int)lua_tointeger(L,2);
		int yoff=(int)lua_tointeger(L,3);
		int layer=(int)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);
		int w=(int)lua_tointeger(L,7);
		int h=(int)lua_tointeger(L,8);
		const ork::TextureCubeArray* dst_ptr=(Luna< ork::Object >::checkSubType< ork::TextureCubeArray >(L,9));
		if( !dst_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dst in ork::FrameBuffer::copyPixels function");
		}
		const ork::TextureCubeArray & dst=*dst_ptr;
		int level=(int)lua_tointeger(L,10);
		ork::CubeFace cf=(ork::CubeFace)lua_tointeger(L,11);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::copyPixels(int, int, int, int, int, int, int, const ork::TextureCubeArray &, int, ork::CubeFace). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->copyPixels(xoff, yoff, layer, x, y, w, h, dst, level, cf);

		return 0;
	}

	// void ork::FrameBuffer::copyPixels(int xoff, int yoff, int x, int y, int w, int h, const ork::TextureRectangle & dst, int level)
	static int _bind_copyPixels_overload_8(lua_State *L) {
		if (!_lg_typecheck_copyPixels_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FrameBuffer::copyPixels(int xoff, int yoff, int x, int y, int w, int h, const ork::TextureRectangle & dst, int level) function, expected prototype:\nvoid ork::FrameBuffer::copyPixels(int xoff, int yoff, int x, int y, int w, int h, const ork::TextureRectangle & dst, int level)\nClass arguments details:\narg 7 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int xoff=(int)lua_tointeger(L,2);
		int yoff=(int)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		int w=(int)lua_tointeger(L,6);
		int h=(int)lua_tointeger(L,7);
		const ork::TextureRectangle* dst_ptr=(Luna< ork::Object >::checkSubType< ork::TextureRectangle >(L,8));
		if( !dst_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dst in ork::FrameBuffer::copyPixels function");
		}
		const ork::TextureRectangle & dst=*dst_ptr;
		int level=(int)lua_tointeger(L,9);

		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FrameBuffer::copyPixels(int, int, int, int, int, int, const ork::TextureRectangle &, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->copyPixels(xoff, yoff, x, y, w, h, dst, level);

		return 0;
	}

	// Overload binder for ork::FrameBuffer::copyPixels
	static int _bind_copyPixels(lua_State *L) {
		if (_lg_typecheck_copyPixels_overload_1(L)) return _bind_copyPixels_overload_1(L);
		if (_lg_typecheck_copyPixels_overload_2(L)) return _bind_copyPixels_overload_2(L);
		if (_lg_typecheck_copyPixels_overload_3(L)) return _bind_copyPixels_overload_3(L);
		if (_lg_typecheck_copyPixels_overload_4(L)) return _bind_copyPixels_overload_4(L);
		if (_lg_typecheck_copyPixels_overload_5(L)) return _bind_copyPixels_overload_5(L);
		if (_lg_typecheck_copyPixels_overload_6(L)) return _bind_copyPixels_overload_6(L);
		if (_lg_typecheck_copyPixels_overload_7(L)) return _bind_copyPixels_overload_7(L);
		if (_lg_typecheck_copyPixels_overload_8(L)) return _bind_copyPixels_overload_8(L);

		luaL_error(L, "error in function copyPixels, cannot match any of the overloads for function copyPixels:\n  copyPixels(int, int, int, int, const ork::Texture1D &, int)\n  copyPixels(int, int, int, int, int, int, const ork::Texture1DArray &, int)\n  copyPixels(int, int, int, int, int, int, const ork::Texture2D &, int)\n  copyPixels(int, int, int, int, int, int, int, const ork::Texture2DArray &, int)\n  copyPixels(int, int, int, int, int, int, int, const ork::Texture3D &, int)\n  copyPixels(int, int, int, int, int, int, const ork::TextureCube &, int, ork::CubeFace)\n  copyPixels(int, int, int, int, int, int, int, const ork::TextureCubeArray &, int, ork::CubeFace)\n  copyPixels(int, int, int, int, int, int, const ork::TextureRectangle &, int)\n");
		return 0;
	}

	// static ork::ptr< ork::FrameBuffer > ork::FrameBuffer::getDefault()
	static int _bind_getDefault(lua_State *L) {
		if (!_lg_typecheck_getDefault(L)) {
			luaL_error(L, "luna typecheck failed in static ork::ptr< ork::FrameBuffer > ork::FrameBuffer::getDefault() function, expected prototype:\nstatic ork::ptr< ork::FrameBuffer > ork::FrameBuffer::getDefault()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ptr< ork::FrameBuffer > lret = ork::FrameBuffer::getDefault();
		Luna< ork::FrameBuffer >::push(L,lret.get(),false);

		return 1;
	}

	// static int ork::FrameBuffer::getMajorVersion()
	static int _bind_getMajorVersion(lua_State *L) {
		if (!_lg_typecheck_getMajorVersion(L)) {
			luaL_error(L, "luna typecheck failed in static int ork::FrameBuffer::getMajorVersion() function, expected prototype:\nstatic int ork::FrameBuffer::getMajorVersion()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		int lret = ork::FrameBuffer::getMajorVersion();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static int ork::FrameBuffer::getMinorVersion()
	static int _bind_getMinorVersion(lua_State *L) {
		if (!_lg_typecheck_getMinorVersion(L)) {
			luaL_error(L, "luna typecheck failed in static int ork::FrameBuffer::getMinorVersion() function, expected prototype:\nstatic int ork::FrameBuffer::getMinorVersion()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		int lret = ork::FrameBuffer::getMinorVersion();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static unsigned int ork::FrameBuffer::getError()
	static int _bind_getError(lua_State *L) {
		if (!_lg_typecheck_getError(L)) {
			luaL_error(L, "luna typecheck failed in static unsigned int ork::FrameBuffer::getError() function, expected prototype:\nstatic unsigned int ork::FrameBuffer::getError()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		unsigned int lret = ork::FrameBuffer::getError();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void ork::FrameBuffer::resetAllStates()
	static int _bind_resetAllStates(lua_State *L) {
		if (!_lg_typecheck_resetAllStates(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::FrameBuffer::resetAllStates() function, expected prototype:\nstatic void ork::FrameBuffer::resetAllStates()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer::resetAllStates();

		return 0;
	}

	// const char * ork::FrameBuffer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::FrameBuffer::base_toString() function, expected prototype:\nconst char * ork::FrameBuffer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FrameBuffer* self=Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::FrameBuffer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->FrameBuffer::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::FrameBuffer* LunaTraits< ork::FrameBuffer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_FrameBuffer::_bind_ctor(L);
}

void LunaTraits< ork::FrameBuffer >::_bind_dtor(ork::FrameBuffer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::FrameBuffer >::className[] = "FrameBuffer";
const char LunaTraits< ork::FrameBuffer >::fullName[] = "ork::FrameBuffer";
const char LunaTraits< ork::FrameBuffer >::moduleName[] = "ork";
const char* LunaTraits< ork::FrameBuffer >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::FrameBuffer >::hash = 5025505;
const int LunaTraits< ork::FrameBuffer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::FrameBuffer >::methods[] = {
	{"getRenderBuffer", &luna_wrapper_ork_FrameBuffer::_bind_getRenderBuffer},
	{"getTextureBuffer", &luna_wrapper_ork_FrameBuffer::_bind_getTextureBuffer},
	{"setRenderBuffer", &luna_wrapper_ork_FrameBuffer::_bind_setRenderBuffer},
	{"setTextureBuffer", &luna_wrapper_ork_FrameBuffer::_bind_setTextureBuffer},
	{"setReadBuffer", &luna_wrapper_ork_FrameBuffer::_bind_setReadBuffer},
	{"setDrawBuffer", &luna_wrapper_ork_FrameBuffer::_bind_setDrawBuffer},
	{"setDrawBuffers", &luna_wrapper_ork_FrameBuffer::_bind_setDrawBuffers},
	{"getParameters", &luna_wrapper_ork_FrameBuffer::_bind_getParameters},
	{"getViewport", &luna_wrapper_ork_FrameBuffer::_bind_getViewport},
	{"getDepthRange", &luna_wrapper_ork_FrameBuffer::_bind_getDepthRange},
	{"getClipDistances", &luna_wrapper_ork_FrameBuffer::_bind_getClipDistances},
	{"getClearColor", &luna_wrapper_ork_FrameBuffer::_bind_getClearColor},
	{"getClearDepth", &luna_wrapper_ork_FrameBuffer::_bind_getClearDepth},
	{"getClearStencil", &luna_wrapper_ork_FrameBuffer::_bind_getClearStencil},
	{"getPointSize", &luna_wrapper_ork_FrameBuffer::_bind_getPointSize},
	{"getPointFadeThresholdSize", &luna_wrapper_ork_FrameBuffer::_bind_getPointFadeThresholdSize},
	{"getPointLowerLeftOrigin", &luna_wrapper_ork_FrameBuffer::_bind_getPointLowerLeftOrigin},
	{"getLineWidth", &luna_wrapper_ork_FrameBuffer::_bind_getLineWidth},
	{"getLineSmooth", &luna_wrapper_ork_FrameBuffer::_bind_getLineSmooth},
	{"getFrontFaceCW", &luna_wrapper_ork_FrameBuffer::_bind_getFrontFaceCW},
	{"getPolygonMode", &luna_wrapper_ork_FrameBuffer::_bind_getPolygonMode},
	{"getPolygonSmooth", &luna_wrapper_ork_FrameBuffer::_bind_getPolygonSmooth},
	{"getPolygonOffset", &luna_wrapper_ork_FrameBuffer::_bind_getPolygonOffset},
	{"getPolygonOffsets", &luna_wrapper_ork_FrameBuffer::_bind_getPolygonOffsets},
	{"getMultiSample", &luna_wrapper_ork_FrameBuffer::_bind_getMultiSample},
	{"getSampleAlpha", &luna_wrapper_ork_FrameBuffer::_bind_getSampleAlpha},
	{"getSampleCoverage", &luna_wrapper_ork_FrameBuffer::_bind_getSampleCoverage},
	{"getSampleMask", &luna_wrapper_ork_FrameBuffer::_bind_getSampleMask},
	{"getSampleShading", &luna_wrapper_ork_FrameBuffer::_bind_getSampleShading},
	{"getOcclusionTest", &luna_wrapper_ork_FrameBuffer::_bind_getOcclusionTest},
	{"getScissorTest", &luna_wrapper_ork_FrameBuffer::_bind_getScissorTest},
	{"getStencilTest", &luna_wrapper_ork_FrameBuffer::_bind_getStencilTest},
	{"getDepthTest", &luna_wrapper_ork_FrameBuffer::_bind_getDepthTest},
	{"getBlend", &luna_wrapper_ork_FrameBuffer::_bind_getBlend},
	{"getBlendColor", &luna_wrapper_ork_FrameBuffer::_bind_getBlendColor},
	{"getDither", &luna_wrapper_ork_FrameBuffer::_bind_getDither},
	{"getLogicOp", &luna_wrapper_ork_FrameBuffer::_bind_getLogicOp},
	{"getColorMask", &luna_wrapper_ork_FrameBuffer::_bind_getColorMask},
	{"getDepthMask", &luna_wrapper_ork_FrameBuffer::_bind_getDepthMask},
	{"getStencilMask", &luna_wrapper_ork_FrameBuffer::_bind_getStencilMask},
	{"setParameters", &luna_wrapper_ork_FrameBuffer::_bind_setParameters},
	{"setViewport", &luna_wrapper_ork_FrameBuffer::_bind_setViewport},
	{"setDepthRange", &luna_wrapper_ork_FrameBuffer::_bind_setDepthRange},
	{"setClipDistances", &luna_wrapper_ork_FrameBuffer::_bind_setClipDistances},
	{"setClearColor", &luna_wrapper_ork_FrameBuffer::_bind_setClearColor},
	{"setClearDepth", &luna_wrapper_ork_FrameBuffer::_bind_setClearDepth},
	{"setClearStencil", &luna_wrapper_ork_FrameBuffer::_bind_setClearStencil},
	{"setPointSize", &luna_wrapper_ork_FrameBuffer::_bind_setPointSize},
	{"setPointFadeThresholdSize", &luna_wrapper_ork_FrameBuffer::_bind_setPointFadeThresholdSize},
	{"setPointLowerLeftOrigin", &luna_wrapper_ork_FrameBuffer::_bind_setPointLowerLeftOrigin},
	{"setLineWidth", &luna_wrapper_ork_FrameBuffer::_bind_setLineWidth},
	{"setLineSmooth", &luna_wrapper_ork_FrameBuffer::_bind_setLineSmooth},
	{"setFrontFaceCW", &luna_wrapper_ork_FrameBuffer::_bind_setFrontFaceCW},
	{"setPolygonMode", &luna_wrapper_ork_FrameBuffer::_bind_setPolygonMode},
	{"setPolygonSmooth", &luna_wrapper_ork_FrameBuffer::_bind_setPolygonSmooth},
	{"setPolygonOffset", &luna_wrapper_ork_FrameBuffer::_bind_setPolygonOffset},
	{"setMultisample", &luna_wrapper_ork_FrameBuffer::_bind_setMultisample},
	{"setSampleAlpha", &luna_wrapper_ork_FrameBuffer::_bind_setSampleAlpha},
	{"setSampleCoverage", &luna_wrapper_ork_FrameBuffer::_bind_setSampleCoverage},
	{"setSampleMask", &luna_wrapper_ork_FrameBuffer::_bind_setSampleMask},
	{"setSampleShading", &luna_wrapper_ork_FrameBuffer::_bind_setSampleShading},
	{"setOcclusionTest", &luna_wrapper_ork_FrameBuffer::_bind_setOcclusionTest},
	{"setScissorTest", &luna_wrapper_ork_FrameBuffer::_bind_setScissorTest},
	{"setStencilTest", &luna_wrapper_ork_FrameBuffer::_bind_setStencilTest},
	{"setDepthTest", &luna_wrapper_ork_FrameBuffer::_bind_setDepthTest},
	{"setBlend", &luna_wrapper_ork_FrameBuffer::_bind_setBlend},
	{"setBlendColor", &luna_wrapper_ork_FrameBuffer::_bind_setBlendColor},
	{"setDither", &luna_wrapper_ork_FrameBuffer::_bind_setDither},
	{"setLogicOp", &luna_wrapper_ork_FrameBuffer::_bind_setLogicOp},
	{"setColorMask", &luna_wrapper_ork_FrameBuffer::_bind_setColorMask},
	{"setDepthMask", &luna_wrapper_ork_FrameBuffer::_bind_setDepthMask},
	{"setStencilMask", &luna_wrapper_ork_FrameBuffer::_bind_setStencilMask},
	{"clear", &luna_wrapper_ork_FrameBuffer::_bind_clear},
	{"draw", &luna_wrapper_ork_FrameBuffer::_bind_draw},
	{"multiDraw", &luna_wrapper_ork_FrameBuffer::_bind_multiDraw},
	{"drawIndirect", &luna_wrapper_ork_FrameBuffer::_bind_drawIndirect},
	{"drawFeedback", &luna_wrapper_ork_FrameBuffer::_bind_drawFeedback},
	{"drawQuad", &luna_wrapper_ork_FrameBuffer::_bind_drawQuad},
	{"readPixels", &luna_wrapper_ork_FrameBuffer::_bind_readPixels},
	{"copyPixels", &luna_wrapper_ork_FrameBuffer::_bind_copyPixels},
	{"getDefault", &luna_wrapper_ork_FrameBuffer::_bind_getDefault},
	{"getMajorVersion", &luna_wrapper_ork_FrameBuffer::_bind_getMajorVersion},
	{"getMinorVersion", &luna_wrapper_ork_FrameBuffer::_bind_getMinorVersion},
	{"getError", &luna_wrapper_ork_FrameBuffer::_bind_getError},
	{"resetAllStates", &luna_wrapper_ork_FrameBuffer::_bind_resetAllStates},
	{"base_toString", &luna_wrapper_ork_FrameBuffer::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_FrameBuffer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_FrameBuffer::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_FrameBuffer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::FrameBuffer >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_FrameBuffer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::FrameBuffer >::enumValues[] = {
	{0,0}
};


