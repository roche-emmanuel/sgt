#include <plug_common.h>

class luna_wrapper_D3DCAPS9 {
public:
	typedef Luna< D3DCAPS9 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31005348) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(D3DCAPS9*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		D3DCAPS9* rhs =(Luna< D3DCAPS9 >::check(L,2));
		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		D3DCAPS9* self= (D3DCAPS9*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< D3DCAPS9 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31005348) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("D3DCAPS9");
		
		return luna_dynamicCast(L,converters,"D3DCAPS9",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getDeviceType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAdapterOrdinal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCaps2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCaps3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPresentationIntervals(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCursorCaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDevCaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPrimitiveMiscCaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRasterCaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getZCmpCaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSrcBlendCaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDestBlendCaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAlphaCmpCaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getShadeCaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTextureCaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTextureFilterCaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCubeTextureFilterCaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVolumeTextureFilterCaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTextureAddressCaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVolumeTextureAddressCaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLineCaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxTextureWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxTextureHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxVolumeExtent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxTextureRepeat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxTextureAspectRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxAnisotropy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxVertexW(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGuardBandLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGuardBandTop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGuardBandRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGuardBandBottom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getExtentsAdjust(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStencilCaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFVFCaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTextureOpCaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxTextureBlendStages(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxSimultaneousTextures(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertexProcessingCaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxActiveLights(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxUserClipPlanes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxVertexBlendMatrices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxVertexBlendMatrixIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxPointSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxPrimitiveCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxVertexIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxStreams(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxStreamStride(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertexShaderVersion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxVertexShaderConst(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPixelShaderVersion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPixelShader1xMaxValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDevCaps2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxNpatchTessellationLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getReserved5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMasterAdapterOrdinal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAdapterOrdinalInGroup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumberOfAdaptersInGroup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDeclTypes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumSimultaneousRTs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStretchRectFilterCaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVS20Caps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPS20Caps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertexTextureFilterCaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxVShaderInstructionsExecuted(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxPShaderInstructionsExecuted(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxVertexShader30InstructionSlots(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxPixelShader30InstructionSlots(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDeviceType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAdapterOrdinal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCaps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCaps2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCaps3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPresentationIntervals(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCursorCaps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDevCaps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPrimitiveMiscCaps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRasterCaps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZCmpCaps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSrcBlendCaps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDestBlendCaps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAlphaCmpCaps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setShadeCaps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureCaps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureFilterCaps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCubeTextureFilterCaps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVolumeTextureFilterCaps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureAddressCaps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVolumeTextureAddressCaps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLineCaps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxTextureWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxTextureHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxVolumeExtent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxTextureRepeat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxTextureAspectRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxAnisotropy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxVertexW(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGuardBandLeft(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGuardBandTop(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGuardBandRight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGuardBandBottom(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setExtentsAdjust(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStencilCaps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFVFCaps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureOpCaps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxTextureBlendStages(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxSimultaneousTextures(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexProcessingCaps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxActiveLights(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxUserClipPlanes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxVertexBlendMatrices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxVertexBlendMatrixIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxPointSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxPrimitiveCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxVertexIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxStreams(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxStreamStride(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexShaderVersion(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxVertexShaderConst(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPixelShaderVersion(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPixelShader1xMaxValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDevCaps2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxNpatchTessellationLevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setReserved5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMasterAdapterOrdinal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAdapterOrdinalInGroup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumberOfAdaptersInGroup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDeclTypes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumSimultaneousRTs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStretchRectFilterCaps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVS20Caps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,90177932) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPS20Caps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17148442) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexTextureFilterCaps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxVShaderInstructionsExecuted(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxPShaderInstructionsExecuted(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxVertexShader30InstructionSlots(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxPixelShader30InstructionSlots(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// D3DCAPS9::D3DCAPS9()
	static D3DCAPS9* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in D3DCAPS9::D3DCAPS9() function, expected prototype:\nD3DCAPS9::D3DCAPS9()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new D3DCAPS9();
	}


	// Function binds:
	// D3DDEVTYPE D3DCAPS9::DeviceType()
	static int _bind_getDeviceType(lua_State *L) {
		if (!_lg_typecheck_getDeviceType(L)) {
			luaL_error(L, "luna typecheck failed in D3DDEVTYPE D3DCAPS9::DeviceType() function, expected prototype:\nD3DDEVTYPE D3DCAPS9::DeviceType()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DDEVTYPE D3DCAPS9::DeviceType(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		D3DDEVTYPE lret = self->DeviceType;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int D3DCAPS9::AdapterOrdinal()
	static int _bind_getAdapterOrdinal(lua_State *L) {
		if (!_lg_typecheck_getAdapterOrdinal(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int D3DCAPS9::AdapterOrdinal() function, expected prototype:\nunsigned int D3DCAPS9::AdapterOrdinal()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int D3DCAPS9::AdapterOrdinal(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->AdapterOrdinal;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::Caps()
	static int _bind_getCaps(lua_State *L) {
		if (!_lg_typecheck_getCaps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::Caps() function, expected prototype:\nunsigned long D3DCAPS9::Caps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::Caps(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->Caps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::Caps2()
	static int _bind_getCaps2(lua_State *L) {
		if (!_lg_typecheck_getCaps2(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::Caps2() function, expected prototype:\nunsigned long D3DCAPS9::Caps2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::Caps2(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->Caps2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::Caps3()
	static int _bind_getCaps3(lua_State *L) {
		if (!_lg_typecheck_getCaps3(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::Caps3() function, expected prototype:\nunsigned long D3DCAPS9::Caps3()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::Caps3(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->Caps3;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::PresentationIntervals()
	static int _bind_getPresentationIntervals(lua_State *L) {
		if (!_lg_typecheck_getPresentationIntervals(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::PresentationIntervals() function, expected prototype:\nunsigned long D3DCAPS9::PresentationIntervals()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::PresentationIntervals(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->PresentationIntervals;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::CursorCaps()
	static int _bind_getCursorCaps(lua_State *L) {
		if (!_lg_typecheck_getCursorCaps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::CursorCaps() function, expected prototype:\nunsigned long D3DCAPS9::CursorCaps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::CursorCaps(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->CursorCaps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::DevCaps()
	static int _bind_getDevCaps(lua_State *L) {
		if (!_lg_typecheck_getDevCaps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::DevCaps() function, expected prototype:\nunsigned long D3DCAPS9::DevCaps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::DevCaps(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->DevCaps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::PrimitiveMiscCaps()
	static int _bind_getPrimitiveMiscCaps(lua_State *L) {
		if (!_lg_typecheck_getPrimitiveMiscCaps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::PrimitiveMiscCaps() function, expected prototype:\nunsigned long D3DCAPS9::PrimitiveMiscCaps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::PrimitiveMiscCaps(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->PrimitiveMiscCaps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::RasterCaps()
	static int _bind_getRasterCaps(lua_State *L) {
		if (!_lg_typecheck_getRasterCaps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::RasterCaps() function, expected prototype:\nunsigned long D3DCAPS9::RasterCaps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::RasterCaps(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->RasterCaps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::ZCmpCaps()
	static int _bind_getZCmpCaps(lua_State *L) {
		if (!_lg_typecheck_getZCmpCaps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::ZCmpCaps() function, expected prototype:\nunsigned long D3DCAPS9::ZCmpCaps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::ZCmpCaps(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->ZCmpCaps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::SrcBlendCaps()
	static int _bind_getSrcBlendCaps(lua_State *L) {
		if (!_lg_typecheck_getSrcBlendCaps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::SrcBlendCaps() function, expected prototype:\nunsigned long D3DCAPS9::SrcBlendCaps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::SrcBlendCaps(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->SrcBlendCaps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::DestBlendCaps()
	static int _bind_getDestBlendCaps(lua_State *L) {
		if (!_lg_typecheck_getDestBlendCaps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::DestBlendCaps() function, expected prototype:\nunsigned long D3DCAPS9::DestBlendCaps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::DestBlendCaps(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->DestBlendCaps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::AlphaCmpCaps()
	static int _bind_getAlphaCmpCaps(lua_State *L) {
		if (!_lg_typecheck_getAlphaCmpCaps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::AlphaCmpCaps() function, expected prototype:\nunsigned long D3DCAPS9::AlphaCmpCaps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::AlphaCmpCaps(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->AlphaCmpCaps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::ShadeCaps()
	static int _bind_getShadeCaps(lua_State *L) {
		if (!_lg_typecheck_getShadeCaps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::ShadeCaps() function, expected prototype:\nunsigned long D3DCAPS9::ShadeCaps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::ShadeCaps(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->ShadeCaps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::TextureCaps()
	static int _bind_getTextureCaps(lua_State *L) {
		if (!_lg_typecheck_getTextureCaps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::TextureCaps() function, expected prototype:\nunsigned long D3DCAPS9::TextureCaps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::TextureCaps(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->TextureCaps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::TextureFilterCaps()
	static int _bind_getTextureFilterCaps(lua_State *L) {
		if (!_lg_typecheck_getTextureFilterCaps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::TextureFilterCaps() function, expected prototype:\nunsigned long D3DCAPS9::TextureFilterCaps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::TextureFilterCaps(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->TextureFilterCaps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::CubeTextureFilterCaps()
	static int _bind_getCubeTextureFilterCaps(lua_State *L) {
		if (!_lg_typecheck_getCubeTextureFilterCaps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::CubeTextureFilterCaps() function, expected prototype:\nunsigned long D3DCAPS9::CubeTextureFilterCaps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::CubeTextureFilterCaps(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->CubeTextureFilterCaps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::VolumeTextureFilterCaps()
	static int _bind_getVolumeTextureFilterCaps(lua_State *L) {
		if (!_lg_typecheck_getVolumeTextureFilterCaps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::VolumeTextureFilterCaps() function, expected prototype:\nunsigned long D3DCAPS9::VolumeTextureFilterCaps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::VolumeTextureFilterCaps(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->VolumeTextureFilterCaps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::TextureAddressCaps()
	static int _bind_getTextureAddressCaps(lua_State *L) {
		if (!_lg_typecheck_getTextureAddressCaps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::TextureAddressCaps() function, expected prototype:\nunsigned long D3DCAPS9::TextureAddressCaps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::TextureAddressCaps(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->TextureAddressCaps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::VolumeTextureAddressCaps()
	static int _bind_getVolumeTextureAddressCaps(lua_State *L) {
		if (!_lg_typecheck_getVolumeTextureAddressCaps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::VolumeTextureAddressCaps() function, expected prototype:\nunsigned long D3DCAPS9::VolumeTextureAddressCaps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::VolumeTextureAddressCaps(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->VolumeTextureAddressCaps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::LineCaps()
	static int _bind_getLineCaps(lua_State *L) {
		if (!_lg_typecheck_getLineCaps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::LineCaps() function, expected prototype:\nunsigned long D3DCAPS9::LineCaps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::LineCaps(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->LineCaps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::MaxTextureWidth()
	static int _bind_getMaxTextureWidth(lua_State *L) {
		if (!_lg_typecheck_getMaxTextureWidth(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::MaxTextureWidth() function, expected prototype:\nunsigned long D3DCAPS9::MaxTextureWidth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::MaxTextureWidth(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->MaxTextureWidth;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::MaxTextureHeight()
	static int _bind_getMaxTextureHeight(lua_State *L) {
		if (!_lg_typecheck_getMaxTextureHeight(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::MaxTextureHeight() function, expected prototype:\nunsigned long D3DCAPS9::MaxTextureHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::MaxTextureHeight(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->MaxTextureHeight;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::MaxVolumeExtent()
	static int _bind_getMaxVolumeExtent(lua_State *L) {
		if (!_lg_typecheck_getMaxVolumeExtent(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::MaxVolumeExtent() function, expected prototype:\nunsigned long D3DCAPS9::MaxVolumeExtent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::MaxVolumeExtent(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->MaxVolumeExtent;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::MaxTextureRepeat()
	static int _bind_getMaxTextureRepeat(lua_State *L) {
		if (!_lg_typecheck_getMaxTextureRepeat(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::MaxTextureRepeat() function, expected prototype:\nunsigned long D3DCAPS9::MaxTextureRepeat()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::MaxTextureRepeat(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->MaxTextureRepeat;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::MaxTextureAspectRatio()
	static int _bind_getMaxTextureAspectRatio(lua_State *L) {
		if (!_lg_typecheck_getMaxTextureAspectRatio(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::MaxTextureAspectRatio() function, expected prototype:\nunsigned long D3DCAPS9::MaxTextureAspectRatio()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::MaxTextureAspectRatio(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->MaxTextureAspectRatio;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::MaxAnisotropy()
	static int _bind_getMaxAnisotropy(lua_State *L) {
		if (!_lg_typecheck_getMaxAnisotropy(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::MaxAnisotropy() function, expected prototype:\nunsigned long D3DCAPS9::MaxAnisotropy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::MaxAnisotropy(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->MaxAnisotropy;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float D3DCAPS9::MaxVertexW()
	static int _bind_getMaxVertexW(lua_State *L) {
		if (!_lg_typecheck_getMaxVertexW(L)) {
			luaL_error(L, "luna typecheck failed in float D3DCAPS9::MaxVertexW() function, expected prototype:\nfloat D3DCAPS9::MaxVertexW()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DCAPS9::MaxVertexW(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->MaxVertexW;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float D3DCAPS9::GuardBandLeft()
	static int _bind_getGuardBandLeft(lua_State *L) {
		if (!_lg_typecheck_getGuardBandLeft(L)) {
			luaL_error(L, "luna typecheck failed in float D3DCAPS9::GuardBandLeft() function, expected prototype:\nfloat D3DCAPS9::GuardBandLeft()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DCAPS9::GuardBandLeft(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->GuardBandLeft;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float D3DCAPS9::GuardBandTop()
	static int _bind_getGuardBandTop(lua_State *L) {
		if (!_lg_typecheck_getGuardBandTop(L)) {
			luaL_error(L, "luna typecheck failed in float D3DCAPS9::GuardBandTop() function, expected prototype:\nfloat D3DCAPS9::GuardBandTop()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DCAPS9::GuardBandTop(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->GuardBandTop;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float D3DCAPS9::GuardBandRight()
	static int _bind_getGuardBandRight(lua_State *L) {
		if (!_lg_typecheck_getGuardBandRight(L)) {
			luaL_error(L, "luna typecheck failed in float D3DCAPS9::GuardBandRight() function, expected prototype:\nfloat D3DCAPS9::GuardBandRight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DCAPS9::GuardBandRight(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->GuardBandRight;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float D3DCAPS9::GuardBandBottom()
	static int _bind_getGuardBandBottom(lua_State *L) {
		if (!_lg_typecheck_getGuardBandBottom(L)) {
			luaL_error(L, "luna typecheck failed in float D3DCAPS9::GuardBandBottom() function, expected prototype:\nfloat D3DCAPS9::GuardBandBottom()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DCAPS9::GuardBandBottom(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->GuardBandBottom;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float D3DCAPS9::ExtentsAdjust()
	static int _bind_getExtentsAdjust(lua_State *L) {
		if (!_lg_typecheck_getExtentsAdjust(L)) {
			luaL_error(L, "luna typecheck failed in float D3DCAPS9::ExtentsAdjust() function, expected prototype:\nfloat D3DCAPS9::ExtentsAdjust()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DCAPS9::ExtentsAdjust(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->ExtentsAdjust;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::StencilCaps()
	static int _bind_getStencilCaps(lua_State *L) {
		if (!_lg_typecheck_getStencilCaps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::StencilCaps() function, expected prototype:\nunsigned long D3DCAPS9::StencilCaps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::StencilCaps(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->StencilCaps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::FVFCaps()
	static int _bind_getFVFCaps(lua_State *L) {
		if (!_lg_typecheck_getFVFCaps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::FVFCaps() function, expected prototype:\nunsigned long D3DCAPS9::FVFCaps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::FVFCaps(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->FVFCaps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::TextureOpCaps()
	static int _bind_getTextureOpCaps(lua_State *L) {
		if (!_lg_typecheck_getTextureOpCaps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::TextureOpCaps() function, expected prototype:\nunsigned long D3DCAPS9::TextureOpCaps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::TextureOpCaps(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->TextureOpCaps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::MaxTextureBlendStages()
	static int _bind_getMaxTextureBlendStages(lua_State *L) {
		if (!_lg_typecheck_getMaxTextureBlendStages(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::MaxTextureBlendStages() function, expected prototype:\nunsigned long D3DCAPS9::MaxTextureBlendStages()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::MaxTextureBlendStages(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->MaxTextureBlendStages;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::MaxSimultaneousTextures()
	static int _bind_getMaxSimultaneousTextures(lua_State *L) {
		if (!_lg_typecheck_getMaxSimultaneousTextures(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::MaxSimultaneousTextures() function, expected prototype:\nunsigned long D3DCAPS9::MaxSimultaneousTextures()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::MaxSimultaneousTextures(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->MaxSimultaneousTextures;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::VertexProcessingCaps()
	static int _bind_getVertexProcessingCaps(lua_State *L) {
		if (!_lg_typecheck_getVertexProcessingCaps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::VertexProcessingCaps() function, expected prototype:\nunsigned long D3DCAPS9::VertexProcessingCaps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::VertexProcessingCaps(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->VertexProcessingCaps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::MaxActiveLights()
	static int _bind_getMaxActiveLights(lua_State *L) {
		if (!_lg_typecheck_getMaxActiveLights(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::MaxActiveLights() function, expected prototype:\nunsigned long D3DCAPS9::MaxActiveLights()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::MaxActiveLights(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->MaxActiveLights;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::MaxUserClipPlanes()
	static int _bind_getMaxUserClipPlanes(lua_State *L) {
		if (!_lg_typecheck_getMaxUserClipPlanes(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::MaxUserClipPlanes() function, expected prototype:\nunsigned long D3DCAPS9::MaxUserClipPlanes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::MaxUserClipPlanes(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->MaxUserClipPlanes;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::MaxVertexBlendMatrices()
	static int _bind_getMaxVertexBlendMatrices(lua_State *L) {
		if (!_lg_typecheck_getMaxVertexBlendMatrices(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::MaxVertexBlendMatrices() function, expected prototype:\nunsigned long D3DCAPS9::MaxVertexBlendMatrices()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::MaxVertexBlendMatrices(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->MaxVertexBlendMatrices;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::MaxVertexBlendMatrixIndex()
	static int _bind_getMaxVertexBlendMatrixIndex(lua_State *L) {
		if (!_lg_typecheck_getMaxVertexBlendMatrixIndex(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::MaxVertexBlendMatrixIndex() function, expected prototype:\nunsigned long D3DCAPS9::MaxVertexBlendMatrixIndex()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::MaxVertexBlendMatrixIndex(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->MaxVertexBlendMatrixIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float D3DCAPS9::MaxPointSize()
	static int _bind_getMaxPointSize(lua_State *L) {
		if (!_lg_typecheck_getMaxPointSize(L)) {
			luaL_error(L, "luna typecheck failed in float D3DCAPS9::MaxPointSize() function, expected prototype:\nfloat D3DCAPS9::MaxPointSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DCAPS9::MaxPointSize(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->MaxPointSize;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::MaxPrimitiveCount()
	static int _bind_getMaxPrimitiveCount(lua_State *L) {
		if (!_lg_typecheck_getMaxPrimitiveCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::MaxPrimitiveCount() function, expected prototype:\nunsigned long D3DCAPS9::MaxPrimitiveCount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::MaxPrimitiveCount(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->MaxPrimitiveCount;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::MaxVertexIndex()
	static int _bind_getMaxVertexIndex(lua_State *L) {
		if (!_lg_typecheck_getMaxVertexIndex(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::MaxVertexIndex() function, expected prototype:\nunsigned long D3DCAPS9::MaxVertexIndex()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::MaxVertexIndex(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->MaxVertexIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::MaxStreams()
	static int _bind_getMaxStreams(lua_State *L) {
		if (!_lg_typecheck_getMaxStreams(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::MaxStreams() function, expected prototype:\nunsigned long D3DCAPS9::MaxStreams()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::MaxStreams(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->MaxStreams;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::MaxStreamStride()
	static int _bind_getMaxStreamStride(lua_State *L) {
		if (!_lg_typecheck_getMaxStreamStride(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::MaxStreamStride() function, expected prototype:\nunsigned long D3DCAPS9::MaxStreamStride()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::MaxStreamStride(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->MaxStreamStride;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::VertexShaderVersion()
	static int _bind_getVertexShaderVersion(lua_State *L) {
		if (!_lg_typecheck_getVertexShaderVersion(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::VertexShaderVersion() function, expected prototype:\nunsigned long D3DCAPS9::VertexShaderVersion()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::VertexShaderVersion(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->VertexShaderVersion;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::MaxVertexShaderConst()
	static int _bind_getMaxVertexShaderConst(lua_State *L) {
		if (!_lg_typecheck_getMaxVertexShaderConst(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::MaxVertexShaderConst() function, expected prototype:\nunsigned long D3DCAPS9::MaxVertexShaderConst()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::MaxVertexShaderConst(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->MaxVertexShaderConst;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::PixelShaderVersion()
	static int _bind_getPixelShaderVersion(lua_State *L) {
		if (!_lg_typecheck_getPixelShaderVersion(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::PixelShaderVersion() function, expected prototype:\nunsigned long D3DCAPS9::PixelShaderVersion()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::PixelShaderVersion(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->PixelShaderVersion;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float D3DCAPS9::PixelShader1xMaxValue()
	static int _bind_getPixelShader1xMaxValue(lua_State *L) {
		if (!_lg_typecheck_getPixelShader1xMaxValue(L)) {
			luaL_error(L, "luna typecheck failed in float D3DCAPS9::PixelShader1xMaxValue() function, expected prototype:\nfloat D3DCAPS9::PixelShader1xMaxValue()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DCAPS9::PixelShader1xMaxValue(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->PixelShader1xMaxValue;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::DevCaps2()
	static int _bind_getDevCaps2(lua_State *L) {
		if (!_lg_typecheck_getDevCaps2(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::DevCaps2() function, expected prototype:\nunsigned long D3DCAPS9::DevCaps2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::DevCaps2(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->DevCaps2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float D3DCAPS9::MaxNpatchTessellationLevel()
	static int _bind_getMaxNpatchTessellationLevel(lua_State *L) {
		if (!_lg_typecheck_getMaxNpatchTessellationLevel(L)) {
			luaL_error(L, "luna typecheck failed in float D3DCAPS9::MaxNpatchTessellationLevel() function, expected prototype:\nfloat D3DCAPS9::MaxNpatchTessellationLevel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DCAPS9::MaxNpatchTessellationLevel(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->MaxNpatchTessellationLevel;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::Reserved5()
	static int _bind_getReserved5(lua_State *L) {
		if (!_lg_typecheck_getReserved5(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::Reserved5() function, expected prototype:\nunsigned long D3DCAPS9::Reserved5()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::Reserved5(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->Reserved5;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int D3DCAPS9::MasterAdapterOrdinal()
	static int _bind_getMasterAdapterOrdinal(lua_State *L) {
		if (!_lg_typecheck_getMasterAdapterOrdinal(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int D3DCAPS9::MasterAdapterOrdinal() function, expected prototype:\nunsigned int D3DCAPS9::MasterAdapterOrdinal()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int D3DCAPS9::MasterAdapterOrdinal(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->MasterAdapterOrdinal;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int D3DCAPS9::AdapterOrdinalInGroup()
	static int _bind_getAdapterOrdinalInGroup(lua_State *L) {
		if (!_lg_typecheck_getAdapterOrdinalInGroup(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int D3DCAPS9::AdapterOrdinalInGroup() function, expected prototype:\nunsigned int D3DCAPS9::AdapterOrdinalInGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int D3DCAPS9::AdapterOrdinalInGroup(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->AdapterOrdinalInGroup;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int D3DCAPS9::NumberOfAdaptersInGroup()
	static int _bind_getNumberOfAdaptersInGroup(lua_State *L) {
		if (!_lg_typecheck_getNumberOfAdaptersInGroup(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int D3DCAPS9::NumberOfAdaptersInGroup() function, expected prototype:\nunsigned int D3DCAPS9::NumberOfAdaptersInGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int D3DCAPS9::NumberOfAdaptersInGroup(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->NumberOfAdaptersInGroup;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::DeclTypes()
	static int _bind_getDeclTypes(lua_State *L) {
		if (!_lg_typecheck_getDeclTypes(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::DeclTypes() function, expected prototype:\nunsigned long D3DCAPS9::DeclTypes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::DeclTypes(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->DeclTypes;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::NumSimultaneousRTs()
	static int _bind_getNumSimultaneousRTs(lua_State *L) {
		if (!_lg_typecheck_getNumSimultaneousRTs(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::NumSimultaneousRTs() function, expected prototype:\nunsigned long D3DCAPS9::NumSimultaneousRTs()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::NumSimultaneousRTs(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->NumSimultaneousRTs;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::StretchRectFilterCaps()
	static int _bind_getStretchRectFilterCaps(lua_State *L) {
		if (!_lg_typecheck_getStretchRectFilterCaps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::StretchRectFilterCaps() function, expected prototype:\nunsigned long D3DCAPS9::StretchRectFilterCaps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::StretchRectFilterCaps(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->StretchRectFilterCaps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// D3DVSHADERCAPS2_0 D3DCAPS9::VS20Caps()
	static int _bind_getVS20Caps(lua_State *L) {
		if (!_lg_typecheck_getVS20Caps(L)) {
			luaL_error(L, "luna typecheck failed in D3DVSHADERCAPS2_0 D3DCAPS9::VS20Caps() function, expected prototype:\nD3DVSHADERCAPS2_0 D3DCAPS9::VS20Caps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DVSHADERCAPS2_0 D3DCAPS9::VS20Caps(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const D3DVSHADERCAPS2_0* lret = &self->VS20Caps;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< D3DVSHADERCAPS2_0 >::push(L,lret,false);

		return 1;
	}

	// D3DPSHADERCAPS2_0 D3DCAPS9::PS20Caps()
	static int _bind_getPS20Caps(lua_State *L) {
		if (!_lg_typecheck_getPS20Caps(L)) {
			luaL_error(L, "luna typecheck failed in D3DPSHADERCAPS2_0 D3DCAPS9::PS20Caps() function, expected prototype:\nD3DPSHADERCAPS2_0 D3DCAPS9::PS20Caps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DPSHADERCAPS2_0 D3DCAPS9::PS20Caps(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const D3DPSHADERCAPS2_0* lret = &self->PS20Caps;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< D3DPSHADERCAPS2_0 >::push(L,lret,false);

		return 1;
	}

	// unsigned long D3DCAPS9::VertexTextureFilterCaps()
	static int _bind_getVertexTextureFilterCaps(lua_State *L) {
		if (!_lg_typecheck_getVertexTextureFilterCaps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::VertexTextureFilterCaps() function, expected prototype:\nunsigned long D3DCAPS9::VertexTextureFilterCaps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::VertexTextureFilterCaps(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->VertexTextureFilterCaps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::MaxVShaderInstructionsExecuted()
	static int _bind_getMaxVShaderInstructionsExecuted(lua_State *L) {
		if (!_lg_typecheck_getMaxVShaderInstructionsExecuted(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::MaxVShaderInstructionsExecuted() function, expected prototype:\nunsigned long D3DCAPS9::MaxVShaderInstructionsExecuted()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::MaxVShaderInstructionsExecuted(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->MaxVShaderInstructionsExecuted;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::MaxPShaderInstructionsExecuted()
	static int _bind_getMaxPShaderInstructionsExecuted(lua_State *L) {
		if (!_lg_typecheck_getMaxPShaderInstructionsExecuted(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::MaxPShaderInstructionsExecuted() function, expected prototype:\nunsigned long D3DCAPS9::MaxPShaderInstructionsExecuted()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::MaxPShaderInstructionsExecuted(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->MaxPShaderInstructionsExecuted;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::MaxVertexShader30InstructionSlots()
	static int _bind_getMaxVertexShader30InstructionSlots(lua_State *L) {
		if (!_lg_typecheck_getMaxVertexShader30InstructionSlots(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::MaxVertexShader30InstructionSlots() function, expected prototype:\nunsigned long D3DCAPS9::MaxVertexShader30InstructionSlots()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::MaxVertexShader30InstructionSlots(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->MaxVertexShader30InstructionSlots;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCAPS9::MaxPixelShader30InstructionSlots()
	static int _bind_getMaxPixelShader30InstructionSlots(lua_State *L) {
		if (!_lg_typecheck_getMaxPixelShader30InstructionSlots(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCAPS9::MaxPixelShader30InstructionSlots() function, expected prototype:\nunsigned long D3DCAPS9::MaxPixelShader30InstructionSlots()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCAPS9::MaxPixelShader30InstructionSlots(). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->MaxPixelShader30InstructionSlots;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void D3DCAPS9::DeviceType(D3DDEVTYPE value)
	static int _bind_setDeviceType(lua_State *L) {
		if (!_lg_typecheck_setDeviceType(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::DeviceType(D3DDEVTYPE value) function, expected prototype:\nvoid D3DCAPS9::DeviceType(D3DDEVTYPE value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DDEVTYPE value=(D3DDEVTYPE)lua_tointeger(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::DeviceType(D3DDEVTYPE). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeviceType = value;

		return 0;
	}

	// void D3DCAPS9::AdapterOrdinal(unsigned int value)
	static int _bind_setAdapterOrdinal(lua_State *L) {
		if (!_lg_typecheck_setAdapterOrdinal(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::AdapterOrdinal(unsigned int value) function, expected prototype:\nvoid D3DCAPS9::AdapterOrdinal(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::AdapterOrdinal(unsigned int). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AdapterOrdinal = value;

		return 0;
	}

	// void D3DCAPS9::Caps(unsigned long value)
	static int _bind_setCaps(lua_State *L) {
		if (!_lg_typecheck_setCaps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::Caps(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::Caps(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::Caps(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Caps = value;

		return 0;
	}

	// void D3DCAPS9::Caps2(unsigned long value)
	static int _bind_setCaps2(lua_State *L) {
		if (!_lg_typecheck_setCaps2(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::Caps2(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::Caps2(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::Caps2(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Caps2 = value;

		return 0;
	}

	// void D3DCAPS9::Caps3(unsigned long value)
	static int _bind_setCaps3(lua_State *L) {
		if (!_lg_typecheck_setCaps3(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::Caps3(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::Caps3(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::Caps3(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Caps3 = value;

		return 0;
	}

	// void D3DCAPS9::PresentationIntervals(unsigned long value)
	static int _bind_setPresentationIntervals(lua_State *L) {
		if (!_lg_typecheck_setPresentationIntervals(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::PresentationIntervals(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::PresentationIntervals(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::PresentationIntervals(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PresentationIntervals = value;

		return 0;
	}

	// void D3DCAPS9::CursorCaps(unsigned long value)
	static int _bind_setCursorCaps(lua_State *L) {
		if (!_lg_typecheck_setCursorCaps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::CursorCaps(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::CursorCaps(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::CursorCaps(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CursorCaps = value;

		return 0;
	}

	// void D3DCAPS9::DevCaps(unsigned long value)
	static int _bind_setDevCaps(lua_State *L) {
		if (!_lg_typecheck_setDevCaps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::DevCaps(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::DevCaps(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::DevCaps(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DevCaps = value;

		return 0;
	}

	// void D3DCAPS9::PrimitiveMiscCaps(unsigned long value)
	static int _bind_setPrimitiveMiscCaps(lua_State *L) {
		if (!_lg_typecheck_setPrimitiveMiscCaps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::PrimitiveMiscCaps(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::PrimitiveMiscCaps(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::PrimitiveMiscCaps(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PrimitiveMiscCaps = value;

		return 0;
	}

	// void D3DCAPS9::RasterCaps(unsigned long value)
	static int _bind_setRasterCaps(lua_State *L) {
		if (!_lg_typecheck_setRasterCaps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::RasterCaps(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::RasterCaps(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::RasterCaps(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RasterCaps = value;

		return 0;
	}

	// void D3DCAPS9::ZCmpCaps(unsigned long value)
	static int _bind_setZCmpCaps(lua_State *L) {
		if (!_lg_typecheck_setZCmpCaps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::ZCmpCaps(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::ZCmpCaps(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::ZCmpCaps(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ZCmpCaps = value;

		return 0;
	}

	// void D3DCAPS9::SrcBlendCaps(unsigned long value)
	static int _bind_setSrcBlendCaps(lua_State *L) {
		if (!_lg_typecheck_setSrcBlendCaps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::SrcBlendCaps(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::SrcBlendCaps(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::SrcBlendCaps(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SrcBlendCaps = value;

		return 0;
	}

	// void D3DCAPS9::DestBlendCaps(unsigned long value)
	static int _bind_setDestBlendCaps(lua_State *L) {
		if (!_lg_typecheck_setDestBlendCaps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::DestBlendCaps(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::DestBlendCaps(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::DestBlendCaps(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DestBlendCaps = value;

		return 0;
	}

	// void D3DCAPS9::AlphaCmpCaps(unsigned long value)
	static int _bind_setAlphaCmpCaps(lua_State *L) {
		if (!_lg_typecheck_setAlphaCmpCaps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::AlphaCmpCaps(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::AlphaCmpCaps(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::AlphaCmpCaps(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AlphaCmpCaps = value;

		return 0;
	}

	// void D3DCAPS9::ShadeCaps(unsigned long value)
	static int _bind_setShadeCaps(lua_State *L) {
		if (!_lg_typecheck_setShadeCaps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::ShadeCaps(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::ShadeCaps(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::ShadeCaps(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShadeCaps = value;

		return 0;
	}

	// void D3DCAPS9::TextureCaps(unsigned long value)
	static int _bind_setTextureCaps(lua_State *L) {
		if (!_lg_typecheck_setTextureCaps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::TextureCaps(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::TextureCaps(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::TextureCaps(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextureCaps = value;

		return 0;
	}

	// void D3DCAPS9::TextureFilterCaps(unsigned long value)
	static int _bind_setTextureFilterCaps(lua_State *L) {
		if (!_lg_typecheck_setTextureFilterCaps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::TextureFilterCaps(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::TextureFilterCaps(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::TextureFilterCaps(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextureFilterCaps = value;

		return 0;
	}

	// void D3DCAPS9::CubeTextureFilterCaps(unsigned long value)
	static int _bind_setCubeTextureFilterCaps(lua_State *L) {
		if (!_lg_typecheck_setCubeTextureFilterCaps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::CubeTextureFilterCaps(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::CubeTextureFilterCaps(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::CubeTextureFilterCaps(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CubeTextureFilterCaps = value;

		return 0;
	}

	// void D3DCAPS9::VolumeTextureFilterCaps(unsigned long value)
	static int _bind_setVolumeTextureFilterCaps(lua_State *L) {
		if (!_lg_typecheck_setVolumeTextureFilterCaps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::VolumeTextureFilterCaps(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::VolumeTextureFilterCaps(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::VolumeTextureFilterCaps(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VolumeTextureFilterCaps = value;

		return 0;
	}

	// void D3DCAPS9::TextureAddressCaps(unsigned long value)
	static int _bind_setTextureAddressCaps(lua_State *L) {
		if (!_lg_typecheck_setTextureAddressCaps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::TextureAddressCaps(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::TextureAddressCaps(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::TextureAddressCaps(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextureAddressCaps = value;

		return 0;
	}

	// void D3DCAPS9::VolumeTextureAddressCaps(unsigned long value)
	static int _bind_setVolumeTextureAddressCaps(lua_State *L) {
		if (!_lg_typecheck_setVolumeTextureAddressCaps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::VolumeTextureAddressCaps(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::VolumeTextureAddressCaps(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::VolumeTextureAddressCaps(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VolumeTextureAddressCaps = value;

		return 0;
	}

	// void D3DCAPS9::LineCaps(unsigned long value)
	static int _bind_setLineCaps(lua_State *L) {
		if (!_lg_typecheck_setLineCaps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::LineCaps(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::LineCaps(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::LineCaps(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LineCaps = value;

		return 0;
	}

	// void D3DCAPS9::MaxTextureWidth(unsigned long value)
	static int _bind_setMaxTextureWidth(lua_State *L) {
		if (!_lg_typecheck_setMaxTextureWidth(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::MaxTextureWidth(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::MaxTextureWidth(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::MaxTextureWidth(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaxTextureWidth = value;

		return 0;
	}

	// void D3DCAPS9::MaxTextureHeight(unsigned long value)
	static int _bind_setMaxTextureHeight(lua_State *L) {
		if (!_lg_typecheck_setMaxTextureHeight(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::MaxTextureHeight(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::MaxTextureHeight(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::MaxTextureHeight(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaxTextureHeight = value;

		return 0;
	}

	// void D3DCAPS9::MaxVolumeExtent(unsigned long value)
	static int _bind_setMaxVolumeExtent(lua_State *L) {
		if (!_lg_typecheck_setMaxVolumeExtent(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::MaxVolumeExtent(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::MaxVolumeExtent(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::MaxVolumeExtent(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaxVolumeExtent = value;

		return 0;
	}

	// void D3DCAPS9::MaxTextureRepeat(unsigned long value)
	static int _bind_setMaxTextureRepeat(lua_State *L) {
		if (!_lg_typecheck_setMaxTextureRepeat(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::MaxTextureRepeat(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::MaxTextureRepeat(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::MaxTextureRepeat(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaxTextureRepeat = value;

		return 0;
	}

	// void D3DCAPS9::MaxTextureAspectRatio(unsigned long value)
	static int _bind_setMaxTextureAspectRatio(lua_State *L) {
		if (!_lg_typecheck_setMaxTextureAspectRatio(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::MaxTextureAspectRatio(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::MaxTextureAspectRatio(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::MaxTextureAspectRatio(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaxTextureAspectRatio = value;

		return 0;
	}

	// void D3DCAPS9::MaxAnisotropy(unsigned long value)
	static int _bind_setMaxAnisotropy(lua_State *L) {
		if (!_lg_typecheck_setMaxAnisotropy(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::MaxAnisotropy(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::MaxAnisotropy(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::MaxAnisotropy(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaxAnisotropy = value;

		return 0;
	}

	// void D3DCAPS9::MaxVertexW(float value)
	static int _bind_setMaxVertexW(lua_State *L) {
		if (!_lg_typecheck_setMaxVertexW(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::MaxVertexW(float value) function, expected prototype:\nvoid D3DCAPS9::MaxVertexW(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::MaxVertexW(float). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaxVertexW = value;

		return 0;
	}

	// void D3DCAPS9::GuardBandLeft(float value)
	static int _bind_setGuardBandLeft(lua_State *L) {
		if (!_lg_typecheck_setGuardBandLeft(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::GuardBandLeft(float value) function, expected prototype:\nvoid D3DCAPS9::GuardBandLeft(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::GuardBandLeft(float). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GuardBandLeft = value;

		return 0;
	}

	// void D3DCAPS9::GuardBandTop(float value)
	static int _bind_setGuardBandTop(lua_State *L) {
		if (!_lg_typecheck_setGuardBandTop(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::GuardBandTop(float value) function, expected prototype:\nvoid D3DCAPS9::GuardBandTop(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::GuardBandTop(float). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GuardBandTop = value;

		return 0;
	}

	// void D3DCAPS9::GuardBandRight(float value)
	static int _bind_setGuardBandRight(lua_State *L) {
		if (!_lg_typecheck_setGuardBandRight(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::GuardBandRight(float value) function, expected prototype:\nvoid D3DCAPS9::GuardBandRight(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::GuardBandRight(float). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GuardBandRight = value;

		return 0;
	}

	// void D3DCAPS9::GuardBandBottom(float value)
	static int _bind_setGuardBandBottom(lua_State *L) {
		if (!_lg_typecheck_setGuardBandBottom(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::GuardBandBottom(float value) function, expected prototype:\nvoid D3DCAPS9::GuardBandBottom(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::GuardBandBottom(float). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GuardBandBottom = value;

		return 0;
	}

	// void D3DCAPS9::ExtentsAdjust(float value)
	static int _bind_setExtentsAdjust(lua_State *L) {
		if (!_lg_typecheck_setExtentsAdjust(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::ExtentsAdjust(float value) function, expected prototype:\nvoid D3DCAPS9::ExtentsAdjust(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::ExtentsAdjust(float). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ExtentsAdjust = value;

		return 0;
	}

	// void D3DCAPS9::StencilCaps(unsigned long value)
	static int _bind_setStencilCaps(lua_State *L) {
		if (!_lg_typecheck_setStencilCaps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::StencilCaps(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::StencilCaps(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::StencilCaps(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StencilCaps = value;

		return 0;
	}

	// void D3DCAPS9::FVFCaps(unsigned long value)
	static int _bind_setFVFCaps(lua_State *L) {
		if (!_lg_typecheck_setFVFCaps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::FVFCaps(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::FVFCaps(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::FVFCaps(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FVFCaps = value;

		return 0;
	}

	// void D3DCAPS9::TextureOpCaps(unsigned long value)
	static int _bind_setTextureOpCaps(lua_State *L) {
		if (!_lg_typecheck_setTextureOpCaps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::TextureOpCaps(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::TextureOpCaps(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::TextureOpCaps(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextureOpCaps = value;

		return 0;
	}

	// void D3DCAPS9::MaxTextureBlendStages(unsigned long value)
	static int _bind_setMaxTextureBlendStages(lua_State *L) {
		if (!_lg_typecheck_setMaxTextureBlendStages(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::MaxTextureBlendStages(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::MaxTextureBlendStages(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::MaxTextureBlendStages(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaxTextureBlendStages = value;

		return 0;
	}

	// void D3DCAPS9::MaxSimultaneousTextures(unsigned long value)
	static int _bind_setMaxSimultaneousTextures(lua_State *L) {
		if (!_lg_typecheck_setMaxSimultaneousTextures(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::MaxSimultaneousTextures(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::MaxSimultaneousTextures(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::MaxSimultaneousTextures(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaxSimultaneousTextures = value;

		return 0;
	}

	// void D3DCAPS9::VertexProcessingCaps(unsigned long value)
	static int _bind_setVertexProcessingCaps(lua_State *L) {
		if (!_lg_typecheck_setVertexProcessingCaps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::VertexProcessingCaps(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::VertexProcessingCaps(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::VertexProcessingCaps(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VertexProcessingCaps = value;

		return 0;
	}

	// void D3DCAPS9::MaxActiveLights(unsigned long value)
	static int _bind_setMaxActiveLights(lua_State *L) {
		if (!_lg_typecheck_setMaxActiveLights(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::MaxActiveLights(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::MaxActiveLights(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::MaxActiveLights(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaxActiveLights = value;

		return 0;
	}

	// void D3DCAPS9::MaxUserClipPlanes(unsigned long value)
	static int _bind_setMaxUserClipPlanes(lua_State *L) {
		if (!_lg_typecheck_setMaxUserClipPlanes(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::MaxUserClipPlanes(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::MaxUserClipPlanes(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::MaxUserClipPlanes(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaxUserClipPlanes = value;

		return 0;
	}

	// void D3DCAPS9::MaxVertexBlendMatrices(unsigned long value)
	static int _bind_setMaxVertexBlendMatrices(lua_State *L) {
		if (!_lg_typecheck_setMaxVertexBlendMatrices(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::MaxVertexBlendMatrices(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::MaxVertexBlendMatrices(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::MaxVertexBlendMatrices(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaxVertexBlendMatrices = value;

		return 0;
	}

	// void D3DCAPS9::MaxVertexBlendMatrixIndex(unsigned long value)
	static int _bind_setMaxVertexBlendMatrixIndex(lua_State *L) {
		if (!_lg_typecheck_setMaxVertexBlendMatrixIndex(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::MaxVertexBlendMatrixIndex(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::MaxVertexBlendMatrixIndex(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::MaxVertexBlendMatrixIndex(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaxVertexBlendMatrixIndex = value;

		return 0;
	}

	// void D3DCAPS9::MaxPointSize(float value)
	static int _bind_setMaxPointSize(lua_State *L) {
		if (!_lg_typecheck_setMaxPointSize(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::MaxPointSize(float value) function, expected prototype:\nvoid D3DCAPS9::MaxPointSize(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::MaxPointSize(float). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaxPointSize = value;

		return 0;
	}

	// void D3DCAPS9::MaxPrimitiveCount(unsigned long value)
	static int _bind_setMaxPrimitiveCount(lua_State *L) {
		if (!_lg_typecheck_setMaxPrimitiveCount(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::MaxPrimitiveCount(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::MaxPrimitiveCount(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::MaxPrimitiveCount(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaxPrimitiveCount = value;

		return 0;
	}

	// void D3DCAPS9::MaxVertexIndex(unsigned long value)
	static int _bind_setMaxVertexIndex(lua_State *L) {
		if (!_lg_typecheck_setMaxVertexIndex(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::MaxVertexIndex(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::MaxVertexIndex(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::MaxVertexIndex(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaxVertexIndex = value;

		return 0;
	}

	// void D3DCAPS9::MaxStreams(unsigned long value)
	static int _bind_setMaxStreams(lua_State *L) {
		if (!_lg_typecheck_setMaxStreams(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::MaxStreams(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::MaxStreams(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::MaxStreams(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaxStreams = value;

		return 0;
	}

	// void D3DCAPS9::MaxStreamStride(unsigned long value)
	static int _bind_setMaxStreamStride(lua_State *L) {
		if (!_lg_typecheck_setMaxStreamStride(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::MaxStreamStride(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::MaxStreamStride(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::MaxStreamStride(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaxStreamStride = value;

		return 0;
	}

	// void D3DCAPS9::VertexShaderVersion(unsigned long value)
	static int _bind_setVertexShaderVersion(lua_State *L) {
		if (!_lg_typecheck_setVertexShaderVersion(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::VertexShaderVersion(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::VertexShaderVersion(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::VertexShaderVersion(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VertexShaderVersion = value;

		return 0;
	}

	// void D3DCAPS9::MaxVertexShaderConst(unsigned long value)
	static int _bind_setMaxVertexShaderConst(lua_State *L) {
		if (!_lg_typecheck_setMaxVertexShaderConst(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::MaxVertexShaderConst(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::MaxVertexShaderConst(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::MaxVertexShaderConst(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaxVertexShaderConst = value;

		return 0;
	}

	// void D3DCAPS9::PixelShaderVersion(unsigned long value)
	static int _bind_setPixelShaderVersion(lua_State *L) {
		if (!_lg_typecheck_setPixelShaderVersion(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::PixelShaderVersion(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::PixelShaderVersion(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::PixelShaderVersion(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PixelShaderVersion = value;

		return 0;
	}

	// void D3DCAPS9::PixelShader1xMaxValue(float value)
	static int _bind_setPixelShader1xMaxValue(lua_State *L) {
		if (!_lg_typecheck_setPixelShader1xMaxValue(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::PixelShader1xMaxValue(float value) function, expected prototype:\nvoid D3DCAPS9::PixelShader1xMaxValue(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::PixelShader1xMaxValue(float). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PixelShader1xMaxValue = value;

		return 0;
	}

	// void D3DCAPS9::DevCaps2(unsigned long value)
	static int _bind_setDevCaps2(lua_State *L) {
		if (!_lg_typecheck_setDevCaps2(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::DevCaps2(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::DevCaps2(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::DevCaps2(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DevCaps2 = value;

		return 0;
	}

	// void D3DCAPS9::MaxNpatchTessellationLevel(float value)
	static int _bind_setMaxNpatchTessellationLevel(lua_State *L) {
		if (!_lg_typecheck_setMaxNpatchTessellationLevel(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::MaxNpatchTessellationLevel(float value) function, expected prototype:\nvoid D3DCAPS9::MaxNpatchTessellationLevel(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::MaxNpatchTessellationLevel(float). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaxNpatchTessellationLevel = value;

		return 0;
	}

	// void D3DCAPS9::Reserved5(unsigned long value)
	static int _bind_setReserved5(lua_State *L) {
		if (!_lg_typecheck_setReserved5(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::Reserved5(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::Reserved5(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::Reserved5(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Reserved5 = value;

		return 0;
	}

	// void D3DCAPS9::MasterAdapterOrdinal(unsigned int value)
	static int _bind_setMasterAdapterOrdinal(lua_State *L) {
		if (!_lg_typecheck_setMasterAdapterOrdinal(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::MasterAdapterOrdinal(unsigned int value) function, expected prototype:\nvoid D3DCAPS9::MasterAdapterOrdinal(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::MasterAdapterOrdinal(unsigned int). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MasterAdapterOrdinal = value;

		return 0;
	}

	// void D3DCAPS9::AdapterOrdinalInGroup(unsigned int value)
	static int _bind_setAdapterOrdinalInGroup(lua_State *L) {
		if (!_lg_typecheck_setAdapterOrdinalInGroup(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::AdapterOrdinalInGroup(unsigned int value) function, expected prototype:\nvoid D3DCAPS9::AdapterOrdinalInGroup(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::AdapterOrdinalInGroup(unsigned int). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AdapterOrdinalInGroup = value;

		return 0;
	}

	// void D3DCAPS9::NumberOfAdaptersInGroup(unsigned int value)
	static int _bind_setNumberOfAdaptersInGroup(lua_State *L) {
		if (!_lg_typecheck_setNumberOfAdaptersInGroup(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::NumberOfAdaptersInGroup(unsigned int value) function, expected prototype:\nvoid D3DCAPS9::NumberOfAdaptersInGroup(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::NumberOfAdaptersInGroup(unsigned int). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NumberOfAdaptersInGroup = value;

		return 0;
	}

	// void D3DCAPS9::DeclTypes(unsigned long value)
	static int _bind_setDeclTypes(lua_State *L) {
		if (!_lg_typecheck_setDeclTypes(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::DeclTypes(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::DeclTypes(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::DeclTypes(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeclTypes = value;

		return 0;
	}

	// void D3DCAPS9::NumSimultaneousRTs(unsigned long value)
	static int _bind_setNumSimultaneousRTs(lua_State *L) {
		if (!_lg_typecheck_setNumSimultaneousRTs(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::NumSimultaneousRTs(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::NumSimultaneousRTs(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::NumSimultaneousRTs(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NumSimultaneousRTs = value;

		return 0;
	}

	// void D3DCAPS9::StretchRectFilterCaps(unsigned long value)
	static int _bind_setStretchRectFilterCaps(lua_State *L) {
		if (!_lg_typecheck_setStretchRectFilterCaps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::StretchRectFilterCaps(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::StretchRectFilterCaps(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::StretchRectFilterCaps(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StretchRectFilterCaps = value;

		return 0;
	}

	// void D3DCAPS9::VS20Caps(D3DVSHADERCAPS2_0 value)
	static int _bind_setVS20Caps(lua_State *L) {
		if (!_lg_typecheck_setVS20Caps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::VS20Caps(D3DVSHADERCAPS2_0 value) function, expected prototype:\nvoid D3DCAPS9::VS20Caps(D3DVSHADERCAPS2_0 value)\nClass arguments details:\narg 1 ID = 90177932\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DVSHADERCAPS2_0* value_ptr=(Luna< D3DVSHADERCAPS2_0 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in D3DCAPS9::VS20Caps function");
		}
		D3DVSHADERCAPS2_0 value=*value_ptr;

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::VS20Caps(D3DVSHADERCAPS2_0). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VS20Caps = value;

		return 0;
	}

	// void D3DCAPS9::PS20Caps(D3DPSHADERCAPS2_0 value)
	static int _bind_setPS20Caps(lua_State *L) {
		if (!_lg_typecheck_setPS20Caps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::PS20Caps(D3DPSHADERCAPS2_0 value) function, expected prototype:\nvoid D3DCAPS9::PS20Caps(D3DPSHADERCAPS2_0 value)\nClass arguments details:\narg 1 ID = 17148442\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DPSHADERCAPS2_0* value_ptr=(Luna< D3DPSHADERCAPS2_0 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in D3DCAPS9::PS20Caps function");
		}
		D3DPSHADERCAPS2_0 value=*value_ptr;

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::PS20Caps(D3DPSHADERCAPS2_0). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PS20Caps = value;

		return 0;
	}

	// void D3DCAPS9::VertexTextureFilterCaps(unsigned long value)
	static int _bind_setVertexTextureFilterCaps(lua_State *L) {
		if (!_lg_typecheck_setVertexTextureFilterCaps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::VertexTextureFilterCaps(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::VertexTextureFilterCaps(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::VertexTextureFilterCaps(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VertexTextureFilterCaps = value;

		return 0;
	}

	// void D3DCAPS9::MaxVShaderInstructionsExecuted(unsigned long value)
	static int _bind_setMaxVShaderInstructionsExecuted(lua_State *L) {
		if (!_lg_typecheck_setMaxVShaderInstructionsExecuted(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::MaxVShaderInstructionsExecuted(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::MaxVShaderInstructionsExecuted(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::MaxVShaderInstructionsExecuted(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaxVShaderInstructionsExecuted = value;

		return 0;
	}

	// void D3DCAPS9::MaxPShaderInstructionsExecuted(unsigned long value)
	static int _bind_setMaxPShaderInstructionsExecuted(lua_State *L) {
		if (!_lg_typecheck_setMaxPShaderInstructionsExecuted(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::MaxPShaderInstructionsExecuted(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::MaxPShaderInstructionsExecuted(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::MaxPShaderInstructionsExecuted(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaxPShaderInstructionsExecuted = value;

		return 0;
	}

	// void D3DCAPS9::MaxVertexShader30InstructionSlots(unsigned long value)
	static int _bind_setMaxVertexShader30InstructionSlots(lua_State *L) {
		if (!_lg_typecheck_setMaxVertexShader30InstructionSlots(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::MaxVertexShader30InstructionSlots(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::MaxVertexShader30InstructionSlots(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::MaxVertexShader30InstructionSlots(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaxVertexShader30InstructionSlots = value;

		return 0;
	}

	// void D3DCAPS9::MaxPixelShader30InstructionSlots(unsigned long value)
	static int _bind_setMaxPixelShader30InstructionSlots(lua_State *L) {
		if (!_lg_typecheck_setMaxPixelShader30InstructionSlots(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCAPS9::MaxPixelShader30InstructionSlots(unsigned long value) function, expected prototype:\nvoid D3DCAPS9::MaxPixelShader30InstructionSlots(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCAPS9* self=(Luna< D3DCAPS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCAPS9::MaxPixelShader30InstructionSlots(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCAPS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaxPixelShader30InstructionSlots = value;

		return 0;
	}


	// Operator binds:

};

D3DCAPS9* LunaTraits< D3DCAPS9 >::_bind_ctor(lua_State *L) {
	return luna_wrapper_D3DCAPS9::_bind_ctor(L);
}

void LunaTraits< D3DCAPS9 >::_bind_dtor(D3DCAPS9* obj) {
	delete obj;
}

const char LunaTraits< D3DCAPS9 >::className[] = "D3DCAPS9";
const char LunaTraits< D3DCAPS9 >::fullName[] = "D3DCAPS9";
const char LunaTraits< D3DCAPS9 >::moduleName[] = "dx9";
const char* LunaTraits< D3DCAPS9 >::parents[] = {0};
const int LunaTraits< D3DCAPS9 >::hash = 31005348;
const int LunaTraits< D3DCAPS9 >::uniqueIDs[] = {31005348,0};

luna_RegType LunaTraits< D3DCAPS9 >::methods[] = {
	{"getDeviceType", &luna_wrapper_D3DCAPS9::_bind_getDeviceType},
	{"getAdapterOrdinal", &luna_wrapper_D3DCAPS9::_bind_getAdapterOrdinal},
	{"getCaps", &luna_wrapper_D3DCAPS9::_bind_getCaps},
	{"getCaps2", &luna_wrapper_D3DCAPS9::_bind_getCaps2},
	{"getCaps3", &luna_wrapper_D3DCAPS9::_bind_getCaps3},
	{"getPresentationIntervals", &luna_wrapper_D3DCAPS9::_bind_getPresentationIntervals},
	{"getCursorCaps", &luna_wrapper_D3DCAPS9::_bind_getCursorCaps},
	{"getDevCaps", &luna_wrapper_D3DCAPS9::_bind_getDevCaps},
	{"getPrimitiveMiscCaps", &luna_wrapper_D3DCAPS9::_bind_getPrimitiveMiscCaps},
	{"getRasterCaps", &luna_wrapper_D3DCAPS9::_bind_getRasterCaps},
	{"getZCmpCaps", &luna_wrapper_D3DCAPS9::_bind_getZCmpCaps},
	{"getSrcBlendCaps", &luna_wrapper_D3DCAPS9::_bind_getSrcBlendCaps},
	{"getDestBlendCaps", &luna_wrapper_D3DCAPS9::_bind_getDestBlendCaps},
	{"getAlphaCmpCaps", &luna_wrapper_D3DCAPS9::_bind_getAlphaCmpCaps},
	{"getShadeCaps", &luna_wrapper_D3DCAPS9::_bind_getShadeCaps},
	{"getTextureCaps", &luna_wrapper_D3DCAPS9::_bind_getTextureCaps},
	{"getTextureFilterCaps", &luna_wrapper_D3DCAPS9::_bind_getTextureFilterCaps},
	{"getCubeTextureFilterCaps", &luna_wrapper_D3DCAPS9::_bind_getCubeTextureFilterCaps},
	{"getVolumeTextureFilterCaps", &luna_wrapper_D3DCAPS9::_bind_getVolumeTextureFilterCaps},
	{"getTextureAddressCaps", &luna_wrapper_D3DCAPS9::_bind_getTextureAddressCaps},
	{"getVolumeTextureAddressCaps", &luna_wrapper_D3DCAPS9::_bind_getVolumeTextureAddressCaps},
	{"getLineCaps", &luna_wrapper_D3DCAPS9::_bind_getLineCaps},
	{"getMaxTextureWidth", &luna_wrapper_D3DCAPS9::_bind_getMaxTextureWidth},
	{"getMaxTextureHeight", &luna_wrapper_D3DCAPS9::_bind_getMaxTextureHeight},
	{"getMaxVolumeExtent", &luna_wrapper_D3DCAPS9::_bind_getMaxVolumeExtent},
	{"getMaxTextureRepeat", &luna_wrapper_D3DCAPS9::_bind_getMaxTextureRepeat},
	{"getMaxTextureAspectRatio", &luna_wrapper_D3DCAPS9::_bind_getMaxTextureAspectRatio},
	{"getMaxAnisotropy", &luna_wrapper_D3DCAPS9::_bind_getMaxAnisotropy},
	{"getMaxVertexW", &luna_wrapper_D3DCAPS9::_bind_getMaxVertexW},
	{"getGuardBandLeft", &luna_wrapper_D3DCAPS9::_bind_getGuardBandLeft},
	{"getGuardBandTop", &luna_wrapper_D3DCAPS9::_bind_getGuardBandTop},
	{"getGuardBandRight", &luna_wrapper_D3DCAPS9::_bind_getGuardBandRight},
	{"getGuardBandBottom", &luna_wrapper_D3DCAPS9::_bind_getGuardBandBottom},
	{"getExtentsAdjust", &luna_wrapper_D3DCAPS9::_bind_getExtentsAdjust},
	{"getStencilCaps", &luna_wrapper_D3DCAPS9::_bind_getStencilCaps},
	{"getFVFCaps", &luna_wrapper_D3DCAPS9::_bind_getFVFCaps},
	{"getTextureOpCaps", &luna_wrapper_D3DCAPS9::_bind_getTextureOpCaps},
	{"getMaxTextureBlendStages", &luna_wrapper_D3DCAPS9::_bind_getMaxTextureBlendStages},
	{"getMaxSimultaneousTextures", &luna_wrapper_D3DCAPS9::_bind_getMaxSimultaneousTextures},
	{"getVertexProcessingCaps", &luna_wrapper_D3DCAPS9::_bind_getVertexProcessingCaps},
	{"getMaxActiveLights", &luna_wrapper_D3DCAPS9::_bind_getMaxActiveLights},
	{"getMaxUserClipPlanes", &luna_wrapper_D3DCAPS9::_bind_getMaxUserClipPlanes},
	{"getMaxVertexBlendMatrices", &luna_wrapper_D3DCAPS9::_bind_getMaxVertexBlendMatrices},
	{"getMaxVertexBlendMatrixIndex", &luna_wrapper_D3DCAPS9::_bind_getMaxVertexBlendMatrixIndex},
	{"getMaxPointSize", &luna_wrapper_D3DCAPS9::_bind_getMaxPointSize},
	{"getMaxPrimitiveCount", &luna_wrapper_D3DCAPS9::_bind_getMaxPrimitiveCount},
	{"getMaxVertexIndex", &luna_wrapper_D3DCAPS9::_bind_getMaxVertexIndex},
	{"getMaxStreams", &luna_wrapper_D3DCAPS9::_bind_getMaxStreams},
	{"getMaxStreamStride", &luna_wrapper_D3DCAPS9::_bind_getMaxStreamStride},
	{"getVertexShaderVersion", &luna_wrapper_D3DCAPS9::_bind_getVertexShaderVersion},
	{"getMaxVertexShaderConst", &luna_wrapper_D3DCAPS9::_bind_getMaxVertexShaderConst},
	{"getPixelShaderVersion", &luna_wrapper_D3DCAPS9::_bind_getPixelShaderVersion},
	{"getPixelShader1xMaxValue", &luna_wrapper_D3DCAPS9::_bind_getPixelShader1xMaxValue},
	{"getDevCaps2", &luna_wrapper_D3DCAPS9::_bind_getDevCaps2},
	{"getMaxNpatchTessellationLevel", &luna_wrapper_D3DCAPS9::_bind_getMaxNpatchTessellationLevel},
	{"getReserved5", &luna_wrapper_D3DCAPS9::_bind_getReserved5},
	{"getMasterAdapterOrdinal", &luna_wrapper_D3DCAPS9::_bind_getMasterAdapterOrdinal},
	{"getAdapterOrdinalInGroup", &luna_wrapper_D3DCAPS9::_bind_getAdapterOrdinalInGroup},
	{"getNumberOfAdaptersInGroup", &luna_wrapper_D3DCAPS9::_bind_getNumberOfAdaptersInGroup},
	{"getDeclTypes", &luna_wrapper_D3DCAPS9::_bind_getDeclTypes},
	{"getNumSimultaneousRTs", &luna_wrapper_D3DCAPS9::_bind_getNumSimultaneousRTs},
	{"getStretchRectFilterCaps", &luna_wrapper_D3DCAPS9::_bind_getStretchRectFilterCaps},
	{"getVS20Caps", &luna_wrapper_D3DCAPS9::_bind_getVS20Caps},
	{"getPS20Caps", &luna_wrapper_D3DCAPS9::_bind_getPS20Caps},
	{"getVertexTextureFilterCaps", &luna_wrapper_D3DCAPS9::_bind_getVertexTextureFilterCaps},
	{"getMaxVShaderInstructionsExecuted", &luna_wrapper_D3DCAPS9::_bind_getMaxVShaderInstructionsExecuted},
	{"getMaxPShaderInstructionsExecuted", &luna_wrapper_D3DCAPS9::_bind_getMaxPShaderInstructionsExecuted},
	{"getMaxVertexShader30InstructionSlots", &luna_wrapper_D3DCAPS9::_bind_getMaxVertexShader30InstructionSlots},
	{"getMaxPixelShader30InstructionSlots", &luna_wrapper_D3DCAPS9::_bind_getMaxPixelShader30InstructionSlots},
	{"setDeviceType", &luna_wrapper_D3DCAPS9::_bind_setDeviceType},
	{"setAdapterOrdinal", &luna_wrapper_D3DCAPS9::_bind_setAdapterOrdinal},
	{"setCaps", &luna_wrapper_D3DCAPS9::_bind_setCaps},
	{"setCaps2", &luna_wrapper_D3DCAPS9::_bind_setCaps2},
	{"setCaps3", &luna_wrapper_D3DCAPS9::_bind_setCaps3},
	{"setPresentationIntervals", &luna_wrapper_D3DCAPS9::_bind_setPresentationIntervals},
	{"setCursorCaps", &luna_wrapper_D3DCAPS9::_bind_setCursorCaps},
	{"setDevCaps", &luna_wrapper_D3DCAPS9::_bind_setDevCaps},
	{"setPrimitiveMiscCaps", &luna_wrapper_D3DCAPS9::_bind_setPrimitiveMiscCaps},
	{"setRasterCaps", &luna_wrapper_D3DCAPS9::_bind_setRasterCaps},
	{"setZCmpCaps", &luna_wrapper_D3DCAPS9::_bind_setZCmpCaps},
	{"setSrcBlendCaps", &luna_wrapper_D3DCAPS9::_bind_setSrcBlendCaps},
	{"setDestBlendCaps", &luna_wrapper_D3DCAPS9::_bind_setDestBlendCaps},
	{"setAlphaCmpCaps", &luna_wrapper_D3DCAPS9::_bind_setAlphaCmpCaps},
	{"setShadeCaps", &luna_wrapper_D3DCAPS9::_bind_setShadeCaps},
	{"setTextureCaps", &luna_wrapper_D3DCAPS9::_bind_setTextureCaps},
	{"setTextureFilterCaps", &luna_wrapper_D3DCAPS9::_bind_setTextureFilterCaps},
	{"setCubeTextureFilterCaps", &luna_wrapper_D3DCAPS9::_bind_setCubeTextureFilterCaps},
	{"setVolumeTextureFilterCaps", &luna_wrapper_D3DCAPS9::_bind_setVolumeTextureFilterCaps},
	{"setTextureAddressCaps", &luna_wrapper_D3DCAPS9::_bind_setTextureAddressCaps},
	{"setVolumeTextureAddressCaps", &luna_wrapper_D3DCAPS9::_bind_setVolumeTextureAddressCaps},
	{"setLineCaps", &luna_wrapper_D3DCAPS9::_bind_setLineCaps},
	{"setMaxTextureWidth", &luna_wrapper_D3DCAPS9::_bind_setMaxTextureWidth},
	{"setMaxTextureHeight", &luna_wrapper_D3DCAPS9::_bind_setMaxTextureHeight},
	{"setMaxVolumeExtent", &luna_wrapper_D3DCAPS9::_bind_setMaxVolumeExtent},
	{"setMaxTextureRepeat", &luna_wrapper_D3DCAPS9::_bind_setMaxTextureRepeat},
	{"setMaxTextureAspectRatio", &luna_wrapper_D3DCAPS9::_bind_setMaxTextureAspectRatio},
	{"setMaxAnisotropy", &luna_wrapper_D3DCAPS9::_bind_setMaxAnisotropy},
	{"setMaxVertexW", &luna_wrapper_D3DCAPS9::_bind_setMaxVertexW},
	{"setGuardBandLeft", &luna_wrapper_D3DCAPS9::_bind_setGuardBandLeft},
	{"setGuardBandTop", &luna_wrapper_D3DCAPS9::_bind_setGuardBandTop},
	{"setGuardBandRight", &luna_wrapper_D3DCAPS9::_bind_setGuardBandRight},
	{"setGuardBandBottom", &luna_wrapper_D3DCAPS9::_bind_setGuardBandBottom},
	{"setExtentsAdjust", &luna_wrapper_D3DCAPS9::_bind_setExtentsAdjust},
	{"setStencilCaps", &luna_wrapper_D3DCAPS9::_bind_setStencilCaps},
	{"setFVFCaps", &luna_wrapper_D3DCAPS9::_bind_setFVFCaps},
	{"setTextureOpCaps", &luna_wrapper_D3DCAPS9::_bind_setTextureOpCaps},
	{"setMaxTextureBlendStages", &luna_wrapper_D3DCAPS9::_bind_setMaxTextureBlendStages},
	{"setMaxSimultaneousTextures", &luna_wrapper_D3DCAPS9::_bind_setMaxSimultaneousTextures},
	{"setVertexProcessingCaps", &luna_wrapper_D3DCAPS9::_bind_setVertexProcessingCaps},
	{"setMaxActiveLights", &luna_wrapper_D3DCAPS9::_bind_setMaxActiveLights},
	{"setMaxUserClipPlanes", &luna_wrapper_D3DCAPS9::_bind_setMaxUserClipPlanes},
	{"setMaxVertexBlendMatrices", &luna_wrapper_D3DCAPS9::_bind_setMaxVertexBlendMatrices},
	{"setMaxVertexBlendMatrixIndex", &luna_wrapper_D3DCAPS9::_bind_setMaxVertexBlendMatrixIndex},
	{"setMaxPointSize", &luna_wrapper_D3DCAPS9::_bind_setMaxPointSize},
	{"setMaxPrimitiveCount", &luna_wrapper_D3DCAPS9::_bind_setMaxPrimitiveCount},
	{"setMaxVertexIndex", &luna_wrapper_D3DCAPS9::_bind_setMaxVertexIndex},
	{"setMaxStreams", &luna_wrapper_D3DCAPS9::_bind_setMaxStreams},
	{"setMaxStreamStride", &luna_wrapper_D3DCAPS9::_bind_setMaxStreamStride},
	{"setVertexShaderVersion", &luna_wrapper_D3DCAPS9::_bind_setVertexShaderVersion},
	{"setMaxVertexShaderConst", &luna_wrapper_D3DCAPS9::_bind_setMaxVertexShaderConst},
	{"setPixelShaderVersion", &luna_wrapper_D3DCAPS9::_bind_setPixelShaderVersion},
	{"setPixelShader1xMaxValue", &luna_wrapper_D3DCAPS9::_bind_setPixelShader1xMaxValue},
	{"setDevCaps2", &luna_wrapper_D3DCAPS9::_bind_setDevCaps2},
	{"setMaxNpatchTessellationLevel", &luna_wrapper_D3DCAPS9::_bind_setMaxNpatchTessellationLevel},
	{"setReserved5", &luna_wrapper_D3DCAPS9::_bind_setReserved5},
	{"setMasterAdapterOrdinal", &luna_wrapper_D3DCAPS9::_bind_setMasterAdapterOrdinal},
	{"setAdapterOrdinalInGroup", &luna_wrapper_D3DCAPS9::_bind_setAdapterOrdinalInGroup},
	{"setNumberOfAdaptersInGroup", &luna_wrapper_D3DCAPS9::_bind_setNumberOfAdaptersInGroup},
	{"setDeclTypes", &luna_wrapper_D3DCAPS9::_bind_setDeclTypes},
	{"setNumSimultaneousRTs", &luna_wrapper_D3DCAPS9::_bind_setNumSimultaneousRTs},
	{"setStretchRectFilterCaps", &luna_wrapper_D3DCAPS9::_bind_setStretchRectFilterCaps},
	{"setVS20Caps", &luna_wrapper_D3DCAPS9::_bind_setVS20Caps},
	{"setPS20Caps", &luna_wrapper_D3DCAPS9::_bind_setPS20Caps},
	{"setVertexTextureFilterCaps", &luna_wrapper_D3DCAPS9::_bind_setVertexTextureFilterCaps},
	{"setMaxVShaderInstructionsExecuted", &luna_wrapper_D3DCAPS9::_bind_setMaxVShaderInstructionsExecuted},
	{"setMaxPShaderInstructionsExecuted", &luna_wrapper_D3DCAPS9::_bind_setMaxPShaderInstructionsExecuted},
	{"setMaxVertexShader30InstructionSlots", &luna_wrapper_D3DCAPS9::_bind_setMaxVertexShader30InstructionSlots},
	{"setMaxPixelShader30InstructionSlots", &luna_wrapper_D3DCAPS9::_bind_setMaxPixelShader30InstructionSlots},
	{"dynCast", &luna_wrapper_D3DCAPS9::_bind_dynCast},
	{"__eq", &luna_wrapper_D3DCAPS9::_bind___eq},
	{"fromVoid", &luna_wrapper_D3DCAPS9::_bind_fromVoid},
	{"asVoid", &luna_wrapper_D3DCAPS9::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< D3DCAPS9 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< D3DCAPS9 >::enumValues[] = {
	{0,0}
};


