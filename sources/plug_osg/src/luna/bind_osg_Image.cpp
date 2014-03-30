#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Image.h>

class luna_wrapper_osg_Image {
public:
	typedef Luna< osg::Image > luna_t;

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

		osg::Image* self= (osg::Image*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Image >::push(L,self,false);
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
		//osg::Image* ptr= dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,1));
		osg::Image* ptr= luna_caster< osg::Referenced, osg::Image >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Image >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Image >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_asImage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asImage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDataPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTotalDataSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFileName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFileName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWriteHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWriteHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAllocationMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAllocationMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_allocateImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<9 || luatop>11 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( luatop>9 && (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		if( luatop>10 && (lua_type(L,11)!=LUA_TNUMBER || lua_tointeger(L,11) != lua_tonumber(L,11)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readPixels(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>8 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readImageFromCurrentTexture(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_scaleImage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_scaleImage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_copySubImage(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOrigin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOrigin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_s(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_t(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_r(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRowLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRowLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInternalTextureFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInternalTextureFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPixelFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPixelFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDataType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDataType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPacking(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPacking(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isCompressed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPixelAspectRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPixelAspectRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPixelSizeInBits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRowSizeInBytes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRowStepInBytes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImageSizeInBytes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImageStepInBytes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTotalSizeInBytes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTotalSizeInBytesIncludingMipmaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_valid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_data_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_data_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_data_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_data_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isDataContiguous(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		if( (!(Luna< osg::Vec2f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flipHorizontal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_flipVertical(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_flipDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ensureValidSizeForTexturing(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isMipmap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumMipmapLevels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMipmapLevels(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27834872) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMipmapLevels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMipmapOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMipmapData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMipmapData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_supportsTextureSubloading(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isImageTranslucent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPixelBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPixelBufferObject_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPixelBufferObject_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_requiresUpdateCall(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_sendFocusHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_sendPointerEvent(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_sendKeyEvent(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFrameLastRendered(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addDimensionsChangedCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeDimensionsChangedCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isPackedType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computePixelFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeFormatDataType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeBlockSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeNumComponents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computePixelSizeInBits(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeRowWidthInBytes(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeImageSizeInBytes(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeNearestPowerOfTwo(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeNumberOfMipmapLevels(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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

	inline static bool _lg_typecheck_base_asArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asPrimitiveSet_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asPrimitiveSet_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_asImage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asImage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getDataPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getTotalDataSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_allocateImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<9 || luatop>11 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( luatop>9 && (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		if( luatop>10 && (lua_type(L,11)!=LUA_TNUMBER || lua_tointeger(L,11) != lua_tonumber(L,11)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readPixels(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>8 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readImageFromCurrentTexture(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_scaleImage(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_copySubImage(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isImageTranslucent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_requiresUpdateCall(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_update(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_sendFocusHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_sendPointerEvent(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_sendKeyEvent(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setFrameLastRendered(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Image::Image()
	static osg::Image* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image::Image() function, expected prototype:\nosg::Image::Image()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Image();
	}

	// osg::Image::Image(const osg::Image & image, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Image* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image::Image(const osg::Image & image, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Image::Image(const osg::Image & image, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Image* image_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,1));
		if( !image_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg image in osg::Image::Image function");
		}
		const osg::Image & image=*image_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Image::Image function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::Image(image, copyop);
	}

	// osg::Image::Image(lua_Table * data)
	static osg::Image* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image::Image(lua_Table * data) function, expected prototype:\nosg::Image::Image(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Image(L,NULL);
	}

	// osg::Image::Image(lua_Table * data, const osg::Image & image, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Image* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image::Image(lua_Table * data, const osg::Image & image, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Image::Image(lua_Table * data, const osg::Image & image, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Image* image_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !image_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg image in osg::Image::Image function");
		}
		const osg::Image & image=*image_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Image::Image function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Image(L,NULL, image, copyop);
	}

	// Overload binder for osg::Image::Image
	static osg::Image* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Image, cannot match any of the overloads for function Image:\n  Image()\n  Image(const osg::Image &, const osg::CopyOp &)\n  Image(lua_Table *)\n  Image(lua_Table *, const osg::Image &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Image::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Image::cloneType() const function, expected prototype:\nosg::Object * osg::Image::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Image::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Image::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Image::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Image::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Image::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Image::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Image::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Image::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Image::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Image::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Image::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Image::libraryName() const function, expected prototype:\nconst char * osg::Image::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Image::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Image::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Image::className() const function, expected prototype:\nconst char * osg::Image::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Image::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Image * osg::Image::asImage()
	static int _bind_asImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_asImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osg::Image::asImage() function, expected prototype:\nosg::Image * osg::Image::asImage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osg::Image::asImage(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->asImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::Image::asImage() const
	static int _bind_asImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_asImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::Image::asImage() const function, expected prototype:\nconst osg::Image * osg::Image::asImage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Image * osg::Image::asImage() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Image * lret = self->asImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Image::asImage
	static int _bind_asImage(lua_State *L) {
		if (_lg_typecheck_asImage_overload_1(L)) return _bind_asImage_overload_1(L);
		if (_lg_typecheck_asImage_overload_2(L)) return _bind_asImage_overload_2(L);

		luaL_error(L, "error in function asImage, cannot match any of the overloads for function asImage:\n  asImage()\n  asImage()\n");
		return 0;
	}

	// const void * osg::Image::getDataPointer() const
	static int _bind_getDataPointer(lua_State *L) {
		if (!_lg_typecheck_getDataPointer(L)) {
			luaL_error(L, "luna typecheck failed in const void * osg::Image::getDataPointer() const function, expected prototype:\nconst void * osg::Image::getDataPointer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const void * osg::Image::getDataPointer() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const void * lret = self->getDataPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::Image::getTotalDataSize() const
	static int _bind_getTotalDataSize(lua_State *L) {
		if (!_lg_typecheck_getTotalDataSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Image::getTotalDataSize() const function, expected prototype:\nunsigned int osg::Image::getTotalDataSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Image::getTotalDataSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getTotalDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Image::compare(const osg::Image & rhs) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Image::compare(const osg::Image & rhs) const function, expected prototype:\nint osg::Image::compare(const osg::Image & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Image* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Image::compare function");
		}
		const osg::Image & rhs=*rhs_ptr;

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Image::compare(const osg::Image &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Image::setFileName(const std::string & fileName)
	static int _bind_setFileName(lua_State *L) {
		if (!_lg_typecheck_setFileName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::setFileName(const std::string & fileName) function, expected prototype:\nvoid osg::Image::setFileName(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::setFileName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFileName(fileName);

		return 0;
	}

	// const std::string & osg::Image::getFileName() const
	static int _bind_getFileName(lua_State *L) {
		if (!_lg_typecheck_getFileName(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & osg::Image::getFileName() const function, expected prototype:\nconst std::string & osg::Image::getFileName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & osg::Image::getFileName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->getFileName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::Image::setWriteHint(osg::Image::WriteHint writeHint)
	static int _bind_setWriteHint(lua_State *L) {
		if (!_lg_typecheck_setWriteHint(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::setWriteHint(osg::Image::WriteHint writeHint) function, expected prototype:\nvoid osg::Image::setWriteHint(osg::Image::WriteHint writeHint)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Image::WriteHint writeHint=(osg::Image::WriteHint)lua_tointeger(L,2);

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::setWriteHint(osg::Image::WriteHint). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setWriteHint(writeHint);

		return 0;
	}

	// osg::Image::WriteHint osg::Image::getWriteHint() const
	static int _bind_getWriteHint(lua_State *L) {
		if (!_lg_typecheck_getWriteHint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image::WriteHint osg::Image::getWriteHint() const function, expected prototype:\nosg::Image::WriteHint osg::Image::getWriteHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image::WriteHint osg::Image::getWriteHint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image::WriteHint lret = self->getWriteHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Image::setAllocationMode(osg::Image::AllocationMode mode)
	static int _bind_setAllocationMode(lua_State *L) {
		if (!_lg_typecheck_setAllocationMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::setAllocationMode(osg::Image::AllocationMode mode) function, expected prototype:\nvoid osg::Image::setAllocationMode(osg::Image::AllocationMode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Image::AllocationMode mode=(osg::Image::AllocationMode)lua_tointeger(L,2);

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::setAllocationMode(osg::Image::AllocationMode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAllocationMode(mode);

		return 0;
	}

	// osg::Image::AllocationMode osg::Image::getAllocationMode() const
	static int _bind_getAllocationMode(lua_State *L) {
		if (!_lg_typecheck_getAllocationMode(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image::AllocationMode osg::Image::getAllocationMode() const function, expected prototype:\nosg::Image::AllocationMode osg::Image::getAllocationMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image::AllocationMode osg::Image::getAllocationMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image::AllocationMode lret = self->getAllocationMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Image::allocateImage(int s, int t, int r, unsigned int pixelFormat, unsigned int type, int packing = 1)
	static int _bind_allocateImage(lua_State *L) {
		if (!_lg_typecheck_allocateImage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::allocateImage(int s, int t, int r, unsigned int pixelFormat, unsigned int type, int packing = 1) function, expected prototype:\nvoid osg::Image::allocateImage(int s, int t, int r, unsigned int pixelFormat, unsigned int type, int packing = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int s=(int)lua_tointeger(L,2);
		int t=(int)lua_tointeger(L,3);
		int r=(int)lua_tointeger(L,4);
		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,5);
		unsigned int type=(unsigned int)lua_tointeger(L,6);
		int packing=luatop>6 ? (int)lua_tointeger(L,7) : (int)1;

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::allocateImage(int, int, int, unsigned int, unsigned int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->allocateImage(s, t, r, pixelFormat, type, packing);

		return 0;
	}

	// void osg::Image::setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1, int rowLength = 0)
	static int _bind_setImage(lua_State *L) {
		if (!_lg_typecheck_setImage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1, int rowLength = 0) function, expected prototype:\nvoid osg::Image::setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1, int rowLength = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int s=(int)lua_tointeger(L,2);
		int t=(int)lua_tointeger(L,3);
		int r=(int)lua_tointeger(L,4);
		int internalTextureformat=(int)lua_tointeger(L,5);
		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,6);
		unsigned int type=(unsigned int)lua_tointeger(L,7);
		unsigned char data = (unsigned char)(lua_tointeger(L,8));
		osg::Image::AllocationMode mode=(osg::Image::AllocationMode)lua_tointeger(L,9);
		int packing=luatop>9 ? (int)lua_tointeger(L,10) : (int)1;
		int rowLength=luatop>10 ? (int)lua_tointeger(L,11) : (int)0;

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::setImage(int, int, int, int, unsigned int, unsigned int, unsigned char *, osg::Image::AllocationMode, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setImage(s, t, r, internalTextureformat, pixelFormat, type, &data, mode, packing, rowLength);

		return 0;
	}

	// void osg::Image::readPixels(int x, int y, int width, int height, unsigned int pixelFormat, unsigned int type, int packing = 1)
	static int _bind_readPixels(lua_State *L) {
		if (!_lg_typecheck_readPixels(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::readPixels(int x, int y, int width, int height, unsigned int pixelFormat, unsigned int type, int packing = 1) function, expected prototype:\nvoid osg::Image::readPixels(int x, int y, int width, int height, unsigned int pixelFormat, unsigned int type, int packing = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,6);
		unsigned int type=(unsigned int)lua_tointeger(L,7);
		int packing=luatop>7 ? (int)lua_tointeger(L,8) : (int)1;

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::readPixels(int, int, int, int, unsigned int, unsigned int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readPixels(x, y, width, height, pixelFormat, type, packing);

		return 0;
	}

	// void osg::Image::readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE, unsigned int face = 0)
	static int _bind_readImageFromCurrentTexture(lua_State *L) {
		if (!_lg_typecheck_readImageFromCurrentTexture(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE, unsigned int face = 0) function, expected prototype:\nvoid osg::Image::readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE, unsigned int face = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);
		bool copyMipMapsIfAvailable=(bool)(lua_toboolean(L,3)==1);
		unsigned int type=luatop>3 ? (unsigned int)lua_tointeger(L,4) : (unsigned int)GL_UNSIGNED_BYTE;
		unsigned int face=luatop>4 ? (unsigned int)lua_tointeger(L,5) : (unsigned int)0;

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::readImageFromCurrentTexture(unsigned int, bool, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readImageFromCurrentTexture(contextID, copyMipMapsIfAvailable, type, face);

		return 0;
	}

	// void osg::Image::swap(osg::Image & rhs)
	static int _bind_swap(lua_State *L) {
		if (!_lg_typecheck_swap(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::swap(osg::Image & rhs) function, expected prototype:\nvoid osg::Image::swap(osg::Image & rhs)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Image* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Image::swap function");
		}
		osg::Image & rhs=*rhs_ptr;

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::swap(osg::Image &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->swap(rhs);

		return 0;
	}

	// void osg::Image::scaleImage(int s, int t, int r)
	static int _bind_scaleImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_scaleImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::scaleImage(int s, int t, int r) function, expected prototype:\nvoid osg::Image::scaleImage(int s, int t, int r)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int s=(int)lua_tointeger(L,2);
		int t=(int)lua_tointeger(L,3);
		int r=(int)lua_tointeger(L,4);

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::scaleImage(int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->scaleImage(s, t, r);

		return 0;
	}

	// void osg::Image::scaleImage(int s, int t, int r, unsigned int newDataType)
	static int _bind_scaleImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_scaleImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::scaleImage(int s, int t, int r, unsigned int newDataType) function, expected prototype:\nvoid osg::Image::scaleImage(int s, int t, int r, unsigned int newDataType)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int s=(int)lua_tointeger(L,2);
		int t=(int)lua_tointeger(L,3);
		int r=(int)lua_tointeger(L,4);
		unsigned int newDataType=(unsigned int)lua_tointeger(L,5);

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::scaleImage(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->scaleImage(s, t, r, newDataType);

		return 0;
	}

	// Overload binder for osg::Image::scaleImage
	static int _bind_scaleImage(lua_State *L) {
		if (_lg_typecheck_scaleImage_overload_1(L)) return _bind_scaleImage_overload_1(L);
		if (_lg_typecheck_scaleImage_overload_2(L)) return _bind_scaleImage_overload_2(L);

		luaL_error(L, "error in function scaleImage, cannot match any of the overloads for function scaleImage:\n  scaleImage(int, int, int)\n  scaleImage(int, int, int, unsigned int)\n");
		return 0;
	}

	// void osg::Image::copySubImage(int s_offset, int t_offset, int r_offset, const osg::Image * source)
	static int _bind_copySubImage(lua_State *L) {
		if (!_lg_typecheck_copySubImage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::copySubImage(int s_offset, int t_offset, int r_offset, const osg::Image * source) function, expected prototype:\nvoid osg::Image::copySubImage(int s_offset, int t_offset, int r_offset, const osg::Image * source)\nClass arguments details:\narg 4 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int s_offset=(int)lua_tointeger(L,2);
		int t_offset=(int)lua_tointeger(L,3);
		int r_offset=(int)lua_tointeger(L,4);
		const osg::Image* source=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,5));

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::copySubImage(int, int, int, const osg::Image *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->copySubImage(s_offset, t_offset, r_offset, source);

		return 0;
	}

	// void osg::Image::setOrigin(osg::Image::Origin origin)
	static int _bind_setOrigin(lua_State *L) {
		if (!_lg_typecheck_setOrigin(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::setOrigin(osg::Image::Origin origin) function, expected prototype:\nvoid osg::Image::setOrigin(osg::Image::Origin origin)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Image::Origin origin=(osg::Image::Origin)lua_tointeger(L,2);

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::setOrigin(osg::Image::Origin). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOrigin(origin);

		return 0;
	}

	// osg::Image::Origin osg::Image::getOrigin() const
	static int _bind_getOrigin(lua_State *L) {
		if (!_lg_typecheck_getOrigin(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image::Origin osg::Image::getOrigin() const function, expected prototype:\nosg::Image::Origin osg::Image::getOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image::Origin osg::Image::getOrigin() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image::Origin lret = self->getOrigin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Image::s() const
	static int _bind_s(lua_State *L) {
		if (!_lg_typecheck_s(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Image::s() const function, expected prototype:\nint osg::Image::s() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Image::s() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->s();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Image::t() const
	static int _bind_t(lua_State *L) {
		if (!_lg_typecheck_t(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Image::t() const function, expected prototype:\nint osg::Image::t() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Image::t() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->t();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Image::r() const
	static int _bind_r(lua_State *L) {
		if (!_lg_typecheck_r(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Image::r() const function, expected prototype:\nint osg::Image::r() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Image::r() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->r();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Image::setRowLength(int length)
	static int _bind_setRowLength(lua_State *L) {
		if (!_lg_typecheck_setRowLength(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::setRowLength(int length) function, expected prototype:\nvoid osg::Image::setRowLength(int length)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int length=(int)lua_tointeger(L,2);

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::setRowLength(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRowLength(length);

		return 0;
	}

	// int osg::Image::getRowLength() const
	static int _bind_getRowLength(lua_State *L) {
		if (!_lg_typecheck_getRowLength(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Image::getRowLength() const function, expected prototype:\nint osg::Image::getRowLength() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Image::getRowLength() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getRowLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Image::setInternalTextureFormat(int internalFormat)
	static int _bind_setInternalTextureFormat(lua_State *L) {
		if (!_lg_typecheck_setInternalTextureFormat(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::setInternalTextureFormat(int internalFormat) function, expected prototype:\nvoid osg::Image::setInternalTextureFormat(int internalFormat)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int internalFormat=(int)lua_tointeger(L,2);

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::setInternalTextureFormat(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setInternalTextureFormat(internalFormat);

		return 0;
	}

	// int osg::Image::getInternalTextureFormat() const
	static int _bind_getInternalTextureFormat(lua_State *L) {
		if (!_lg_typecheck_getInternalTextureFormat(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Image::getInternalTextureFormat() const function, expected prototype:\nint osg::Image::getInternalTextureFormat() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Image::getInternalTextureFormat() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getInternalTextureFormat();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Image::setPixelFormat(unsigned int pixelFormat)
	static int _bind_setPixelFormat(lua_State *L) {
		if (!_lg_typecheck_setPixelFormat(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::setPixelFormat(unsigned int pixelFormat) function, expected prototype:\nvoid osg::Image::setPixelFormat(unsigned int pixelFormat)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,2);

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::setPixelFormat(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPixelFormat(pixelFormat);

		return 0;
	}

	// unsigned int osg::Image::getPixelFormat() const
	static int _bind_getPixelFormat(lua_State *L) {
		if (!_lg_typecheck_getPixelFormat(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Image::getPixelFormat() const function, expected prototype:\nunsigned int osg::Image::getPixelFormat() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Image::getPixelFormat() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getPixelFormat();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Image::setDataType(unsigned int dataType)
	static int _bind_setDataType(lua_State *L) {
		if (!_lg_typecheck_setDataType(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::setDataType(unsigned int dataType) function, expected prototype:\nvoid osg::Image::setDataType(unsigned int dataType)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int dataType=(unsigned int)lua_tointeger(L,2);

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::setDataType(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDataType(dataType);

		return 0;
	}

	// unsigned int osg::Image::getDataType() const
	static int _bind_getDataType(lua_State *L) {
		if (!_lg_typecheck_getDataType(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Image::getDataType() const function, expected prototype:\nunsigned int osg::Image::getDataType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Image::getDataType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getDataType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Image::setPacking(unsigned int packing)
	static int _bind_setPacking(lua_State *L) {
		if (!_lg_typecheck_setPacking(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::setPacking(unsigned int packing) function, expected prototype:\nvoid osg::Image::setPacking(unsigned int packing)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int packing=(unsigned int)lua_tointeger(L,2);

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::setPacking(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPacking(packing);

		return 0;
	}

	// unsigned int osg::Image::getPacking() const
	static int _bind_getPacking(lua_State *L) {
		if (!_lg_typecheck_getPacking(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Image::getPacking() const function, expected prototype:\nunsigned int osg::Image::getPacking() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Image::getPacking() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getPacking();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Image::isCompressed() const
	static int _bind_isCompressed(lua_State *L) {
		if (!_lg_typecheck_isCompressed(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Image::isCompressed() const function, expected prototype:\nbool osg::Image::isCompressed() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Image::isCompressed() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isCompressed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Image::setPixelAspectRatio(float pixelAspectRatio)
	static int _bind_setPixelAspectRatio(lua_State *L) {
		if (!_lg_typecheck_setPixelAspectRatio(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::setPixelAspectRatio(float pixelAspectRatio) function, expected prototype:\nvoid osg::Image::setPixelAspectRatio(float pixelAspectRatio)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float pixelAspectRatio=(float)lua_tonumber(L,2);

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::setPixelAspectRatio(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPixelAspectRatio(pixelAspectRatio);

		return 0;
	}

	// float osg::Image::getPixelAspectRatio() const
	static int _bind_getPixelAspectRatio(lua_State *L) {
		if (!_lg_typecheck_getPixelAspectRatio(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Image::getPixelAspectRatio() const function, expected prototype:\nfloat osg::Image::getPixelAspectRatio() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Image::getPixelAspectRatio() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getPixelAspectRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Image::getPixelSizeInBits() const
	static int _bind_getPixelSizeInBits(lua_State *L) {
		if (!_lg_typecheck_getPixelSizeInBits(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Image::getPixelSizeInBits() const function, expected prototype:\nunsigned int osg::Image::getPixelSizeInBits() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Image::getPixelSizeInBits() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getPixelSizeInBits();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Image::getRowSizeInBytes() const
	static int _bind_getRowSizeInBytes(lua_State *L) {
		if (!_lg_typecheck_getRowSizeInBytes(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Image::getRowSizeInBytes() const function, expected prototype:\nunsigned int osg::Image::getRowSizeInBytes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Image::getRowSizeInBytes() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getRowSizeInBytes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Image::getRowStepInBytes() const
	static int _bind_getRowStepInBytes(lua_State *L) {
		if (!_lg_typecheck_getRowStepInBytes(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Image::getRowStepInBytes() const function, expected prototype:\nunsigned int osg::Image::getRowStepInBytes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Image::getRowStepInBytes() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getRowStepInBytes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Image::getImageSizeInBytes() const
	static int _bind_getImageSizeInBytes(lua_State *L) {
		if (!_lg_typecheck_getImageSizeInBytes(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Image::getImageSizeInBytes() const function, expected prototype:\nunsigned int osg::Image::getImageSizeInBytes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Image::getImageSizeInBytes() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getImageSizeInBytes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Image::getImageStepInBytes() const
	static int _bind_getImageStepInBytes(lua_State *L) {
		if (!_lg_typecheck_getImageStepInBytes(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Image::getImageStepInBytes() const function, expected prototype:\nunsigned int osg::Image::getImageStepInBytes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Image::getImageStepInBytes() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getImageStepInBytes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Image::getTotalSizeInBytes() const
	static int _bind_getTotalSizeInBytes(lua_State *L) {
		if (!_lg_typecheck_getTotalSizeInBytes(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Image::getTotalSizeInBytes() const function, expected prototype:\nunsigned int osg::Image::getTotalSizeInBytes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Image::getTotalSizeInBytes() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getTotalSizeInBytes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Image::getTotalSizeInBytesIncludingMipmaps() const
	static int _bind_getTotalSizeInBytesIncludingMipmaps(lua_State *L) {
		if (!_lg_typecheck_getTotalSizeInBytesIncludingMipmaps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Image::getTotalSizeInBytesIncludingMipmaps() const function, expected prototype:\nunsigned int osg::Image::getTotalSizeInBytesIncludingMipmaps() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Image::getTotalSizeInBytesIncludingMipmaps() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getTotalSizeInBytesIncludingMipmaps();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Image::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Image::valid() const function, expected prototype:\nbool osg::Image::valid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Image::valid() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned char * osg::Image::data()
	static int _bind_data_overload_1(lua_State *L) {
		if (!_lg_typecheck_data_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char * osg::Image::data() function, expected prototype:\nunsigned char * osg::Image::data()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char * osg::Image::data(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char * lret = self->data();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// const unsigned char * osg::Image::data() const
	static int _bind_data_overload_2(lua_State *L) {
		if (!_lg_typecheck_data_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const unsigned char * osg::Image::data() const function, expected prototype:\nconst unsigned char * osg::Image::data() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const unsigned char * osg::Image::data() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const unsigned char * lret = self->data();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// unsigned char * osg::Image::data(int column, int row = 0, int image = 0)
	static int _bind_data_overload_3(lua_State *L) {
		if (!_lg_typecheck_data_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char * osg::Image::data(int column, int row = 0, int image = 0) function, expected prototype:\nunsigned char * osg::Image::data(int column, int row = 0, int image = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int column=(int)lua_tointeger(L,2);
		int row=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		int image=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char * osg::Image::data(int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char * lret = self->data(column, row, image);
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// const unsigned char * osg::Image::data(int column, int row = 0, int image = 0) const
	static int _bind_data_overload_4(lua_State *L) {
		if (!_lg_typecheck_data_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in const unsigned char * osg::Image::data(int column, int row = 0, int image = 0) const function, expected prototype:\nconst unsigned char * osg::Image::data(int column, int row = 0, int image = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int column=(int)lua_tointeger(L,2);
		int row=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		int image=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const unsigned char * osg::Image::data(int, int, int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const unsigned char * lret = self->data(column, row, image);
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// Overload binder for osg::Image::data
	static int _bind_data(lua_State *L) {
		if (_lg_typecheck_data_overload_1(L)) return _bind_data_overload_1(L);
		if (_lg_typecheck_data_overload_2(L)) return _bind_data_overload_2(L);
		if (_lg_typecheck_data_overload_3(L)) return _bind_data_overload_3(L);
		if (_lg_typecheck_data_overload_4(L)) return _bind_data_overload_4(L);

		luaL_error(L, "error in function data, cannot match any of the overloads for function data:\n  data()\n  data()\n  data(int, int, int)\n  data(int, int, int)\n");
		return 0;
	}

	// bool osg::Image::isDataContiguous() const
	static int _bind_isDataContiguous(lua_State *L) {
		if (!_lg_typecheck_isDataContiguous(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Image::isDataContiguous() const function, expected prototype:\nbool osg::Image::isDataContiguous() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Image::isDataContiguous() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isDataContiguous();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Vec4f osg::Image::getColor(unsigned int s, unsigned int t = 0, unsigned int r = 0) const
	static int _bind_getColor_overload_1(lua_State *L) {
		if (!_lg_typecheck_getColor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f osg::Image::getColor(unsigned int s, unsigned int t = 0, unsigned int r = 0) const function, expected prototype:\nosg::Vec4f osg::Image::getColor(unsigned int s, unsigned int t = 0, unsigned int r = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int s=(unsigned int)lua_tointeger(L,2);
		unsigned t=luatop>2 ? (unsigned)lua_tointeger(L,3) : (unsigned)0;
		unsigned r=luatop>3 ? (unsigned)lua_tointeger(L,4) : (unsigned)0;

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4f osg::Image::getColor(unsigned int, unsigned int, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4f stack_lret = self->getColor(s, t, r);
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4f osg::Image::getColor(const osg::Vec2f & texcoord) const
	static int _bind_getColor_overload_2(lua_State *L) {
		if (!_lg_typecheck_getColor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f osg::Image::getColor(const osg::Vec2f & texcoord) const function, expected prototype:\nosg::Vec4f osg::Image::getColor(const osg::Vec2f & texcoord) const\nClass arguments details:\narg 1 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2f* texcoord_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !texcoord_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texcoord in osg::Image::getColor function");
		}
		const osg::Vec2f & texcoord=*texcoord_ptr;

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4f osg::Image::getColor(const osg::Vec2f &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4f stack_lret = self->getColor(texcoord);
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4f osg::Image::getColor(const osg::Vec3f & texcoord) const
	static int _bind_getColor_overload_3(lua_State *L) {
		if (!_lg_typecheck_getColor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f osg::Image::getColor(const osg::Vec3f & texcoord) const function, expected prototype:\nosg::Vec4f osg::Image::getColor(const osg::Vec3f & texcoord) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* texcoord_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !texcoord_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texcoord in osg::Image::getColor function");
		}
		const osg::Vec3f & texcoord=*texcoord_ptr;

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4f osg::Image::getColor(const osg::Vec3f &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4f stack_lret = self->getColor(texcoord);
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osg::Image::getColor
	static int _bind_getColor(lua_State *L) {
		if (_lg_typecheck_getColor_overload_1(L)) return _bind_getColor_overload_1(L);
		if (_lg_typecheck_getColor_overload_2(L)) return _bind_getColor_overload_2(L);
		if (_lg_typecheck_getColor_overload_3(L)) return _bind_getColor_overload_3(L);

		luaL_error(L, "error in function getColor, cannot match any of the overloads for function getColor:\n  getColor(unsigned int, unsigned int, unsigned int)\n  getColor(const osg::Vec2f &)\n  getColor(const osg::Vec3f &)\n");
		return 0;
	}

	// void osg::Image::flipHorizontal()
	static int _bind_flipHorizontal(lua_State *L) {
		if (!_lg_typecheck_flipHorizontal(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::flipHorizontal() function, expected prototype:\nvoid osg::Image::flipHorizontal()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::flipHorizontal(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->flipHorizontal();

		return 0;
	}

	// void osg::Image::flipVertical()
	static int _bind_flipVertical(lua_State *L) {
		if (!_lg_typecheck_flipVertical(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::flipVertical() function, expected prototype:\nvoid osg::Image::flipVertical()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::flipVertical(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->flipVertical();

		return 0;
	}

	// void osg::Image::flipDepth()
	static int _bind_flipDepth(lua_State *L) {
		if (!_lg_typecheck_flipDepth(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::flipDepth() function, expected prototype:\nvoid osg::Image::flipDepth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::flipDepth(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->flipDepth();

		return 0;
	}

	// void osg::Image::ensureValidSizeForTexturing(int maxTextureSize)
	static int _bind_ensureValidSizeForTexturing(lua_State *L) {
		if (!_lg_typecheck_ensureValidSizeForTexturing(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::ensureValidSizeForTexturing(int maxTextureSize) function, expected prototype:\nvoid osg::Image::ensureValidSizeForTexturing(int maxTextureSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int maxTextureSize=(int)lua_tointeger(L,2);

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::ensureValidSizeForTexturing(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ensureValidSizeForTexturing(maxTextureSize);

		return 0;
	}

	// bool osg::Image::isMipmap() const
	static int _bind_isMipmap(lua_State *L) {
		if (!_lg_typecheck_isMipmap(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Image::isMipmap() const function, expected prototype:\nbool osg::Image::isMipmap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Image::isMipmap() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isMipmap();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::Image::getNumMipmapLevels() const
	static int _bind_getNumMipmapLevels(lua_State *L) {
		if (!_lg_typecheck_getNumMipmapLevels(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Image::getNumMipmapLevels() const function, expected prototype:\nunsigned int osg::Image::getNumMipmapLevels() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Image::getNumMipmapLevels() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumMipmapLevels();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Image::setMipmapLevels(const osg::Image::MipmapDataType & mipmapDataVector)
	static int _bind_setMipmapLevels(lua_State *L) {
		if (!_lg_typecheck_setMipmapLevels(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::setMipmapLevels(const osg::Image::MipmapDataType & mipmapDataVector) function, expected prototype:\nvoid osg::Image::setMipmapLevels(const osg::Image::MipmapDataType & mipmapDataVector)\nClass arguments details:\narg 1 ID = 63715389\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Image::MipmapDataType* mipmapDataVector_ptr=(Luna< std::vector< unsigned int > >::checkSubType< osg::Image::MipmapDataType >(L,2));
		if( !mipmapDataVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mipmapDataVector in osg::Image::setMipmapLevels function");
		}
		const osg::Image::MipmapDataType & mipmapDataVector=*mipmapDataVector_ptr;

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::setMipmapLevels(const osg::Image::MipmapDataType &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMipmapLevels(mipmapDataVector);

		return 0;
	}

	// const osg::Image::MipmapDataType & osg::Image::getMipmapLevels() const
	static int _bind_getMipmapLevels(lua_State *L) {
		if (!_lg_typecheck_getMipmapLevels(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Image::MipmapDataType & osg::Image::getMipmapLevels() const function, expected prototype:\nconst osg::Image::MipmapDataType & osg::Image::getMipmapLevels() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Image::MipmapDataType & osg::Image::getMipmapLevels() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Image::MipmapDataType* lret = &self->getMipmapLevels();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image::MipmapDataType >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::Image::getMipmapOffset(unsigned int mipmapLevel) const
	static int _bind_getMipmapOffset(lua_State *L) {
		if (!_lg_typecheck_getMipmapOffset(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Image::getMipmapOffset(unsigned int mipmapLevel) const function, expected prototype:\nunsigned int osg::Image::getMipmapOffset(unsigned int mipmapLevel) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mipmapLevel=(unsigned int)lua_tointeger(L,2);

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Image::getMipmapOffset(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getMipmapOffset(mipmapLevel);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned char * osg::Image::getMipmapData(unsigned int mipmapLevel)
	static int _bind_getMipmapData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getMipmapData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char * osg::Image::getMipmapData(unsigned int mipmapLevel) function, expected prototype:\nunsigned char * osg::Image::getMipmapData(unsigned int mipmapLevel)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mipmapLevel=(unsigned int)lua_tointeger(L,2);

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char * osg::Image::getMipmapData(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char * lret = self->getMipmapData(mipmapLevel);
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// const unsigned char * osg::Image::getMipmapData(unsigned int mipmapLevel) const
	static int _bind_getMipmapData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getMipmapData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const unsigned char * osg::Image::getMipmapData(unsigned int mipmapLevel) const function, expected prototype:\nconst unsigned char * osg::Image::getMipmapData(unsigned int mipmapLevel) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mipmapLevel=(unsigned int)lua_tointeger(L,2);

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const unsigned char * osg::Image::getMipmapData(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const unsigned char * lret = self->getMipmapData(mipmapLevel);
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// Overload binder for osg::Image::getMipmapData
	static int _bind_getMipmapData(lua_State *L) {
		if (_lg_typecheck_getMipmapData_overload_1(L)) return _bind_getMipmapData_overload_1(L);
		if (_lg_typecheck_getMipmapData_overload_2(L)) return _bind_getMipmapData_overload_2(L);

		luaL_error(L, "error in function getMipmapData, cannot match any of the overloads for function getMipmapData:\n  getMipmapData(unsigned int)\n  getMipmapData(unsigned int)\n");
		return 0;
	}

	// bool osg::Image::supportsTextureSubloading() const
	static int _bind_supportsTextureSubloading(lua_State *L) {
		if (!_lg_typecheck_supportsTextureSubloading(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Image::supportsTextureSubloading() const function, expected prototype:\nbool osg::Image::supportsTextureSubloading() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Image::supportsTextureSubloading() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->supportsTextureSubloading();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Image::isImageTranslucent() const
	static int _bind_isImageTranslucent(lua_State *L) {
		if (!_lg_typecheck_isImageTranslucent(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Image::isImageTranslucent() const function, expected prototype:\nbool osg::Image::isImageTranslucent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Image::isImageTranslucent() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isImageTranslucent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Image::setPixelBufferObject(osg::PixelBufferObject * buffer)
	static int _bind_setPixelBufferObject(lua_State *L) {
		if (!_lg_typecheck_setPixelBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::setPixelBufferObject(osg::PixelBufferObject * buffer) function, expected prototype:\nvoid osg::Image::setPixelBufferObject(osg::PixelBufferObject * buffer)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::PixelBufferObject* buffer=(Luna< osg::Referenced >::checkSubType< osg::PixelBufferObject >(L,2));

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::setPixelBufferObject(osg::PixelBufferObject *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPixelBufferObject(buffer);

		return 0;
	}

	// osg::PixelBufferObject * osg::Image::getPixelBufferObject()
	static int _bind_getPixelBufferObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_getPixelBufferObject_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::PixelBufferObject * osg::Image::getPixelBufferObject() function, expected prototype:\nosg::PixelBufferObject * osg::Image::getPixelBufferObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::PixelBufferObject * osg::Image::getPixelBufferObject(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::PixelBufferObject * lret = self->getPixelBufferObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PixelBufferObject >::push(L,lret,false);

		return 1;
	}

	// const osg::PixelBufferObject * osg::Image::getPixelBufferObject() const
	static int _bind_getPixelBufferObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_getPixelBufferObject_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::PixelBufferObject * osg::Image::getPixelBufferObject() const function, expected prototype:\nconst osg::PixelBufferObject * osg::Image::getPixelBufferObject() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::PixelBufferObject * osg::Image::getPixelBufferObject() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::PixelBufferObject * lret = self->getPixelBufferObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PixelBufferObject >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Image::getPixelBufferObject
	static int _bind_getPixelBufferObject(lua_State *L) {
		if (_lg_typecheck_getPixelBufferObject_overload_1(L)) return _bind_getPixelBufferObject_overload_1(L);
		if (_lg_typecheck_getPixelBufferObject_overload_2(L)) return _bind_getPixelBufferObject_overload_2(L);

		luaL_error(L, "error in function getPixelBufferObject, cannot match any of the overloads for function getPixelBufferObject:\n  getPixelBufferObject()\n  getPixelBufferObject()\n");
		return 0;
	}

	// bool osg::Image::requiresUpdateCall() const
	static int _bind_requiresUpdateCall(lua_State *L) {
		if (!_lg_typecheck_requiresUpdateCall(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Image::requiresUpdateCall() const function, expected prototype:\nbool osg::Image::requiresUpdateCall() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Image::requiresUpdateCall() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->requiresUpdateCall();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Image::update(osg::NodeVisitor * arg1)
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::update(osg::NodeVisitor * arg1) function, expected prototype:\nvoid osg::Image::update(osg::NodeVisitor * arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::update(osg::NodeVisitor *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->update(_arg1);

		return 0;
	}

	// bool osg::Image::sendFocusHint(bool arg1)
	static int _bind_sendFocusHint(lua_State *L) {
		if (!_lg_typecheck_sendFocusHint(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Image::sendFocusHint(bool arg1) function, expected prototype:\nbool osg::Image::sendFocusHint(bool arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool _arg1=(bool)(lua_toboolean(L,2)==1);

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Image::sendFocusHint(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->sendFocusHint(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Image::sendPointerEvent(int arg1, int arg2, int arg3)
	static int _bind_sendPointerEvent(lua_State *L) {
		if (!_lg_typecheck_sendPointerEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Image::sendPointerEvent(int arg1, int arg2, int arg3) function, expected prototype:\nbool osg::Image::sendPointerEvent(int arg1, int arg2, int arg3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int _arg1=(int)lua_tointeger(L,2);
		int _arg2=(int)lua_tointeger(L,3);
		int _arg3=(int)lua_tointeger(L,4);

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Image::sendPointerEvent(int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->sendPointerEvent(_arg1, _arg2, _arg3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Image::sendKeyEvent(int arg1, bool arg2)
	static int _bind_sendKeyEvent(lua_State *L) {
		if (!_lg_typecheck_sendKeyEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Image::sendKeyEvent(int arg1, bool arg2) function, expected prototype:\nbool osg::Image::sendKeyEvent(int arg1, bool arg2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int _arg1=(int)lua_tointeger(L,2);
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Image::sendKeyEvent(int, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->sendKeyEvent(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Image::setFrameLastRendered(const osg::FrameStamp * arg1)
	static int _bind_setFrameLastRendered(lua_State *L) {
		if (!_lg_typecheck_setFrameLastRendered(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::setFrameLastRendered(const osg::FrameStamp * arg1) function, expected prototype:\nvoid osg::Image::setFrameLastRendered(const osg::FrameStamp * arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::FrameStamp* _arg1=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::setFrameLastRendered(const osg::FrameStamp *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFrameLastRendered(_arg1);

		return 0;
	}

	// void osg::Image::addDimensionsChangedCallback(osg::Image::DimensionsChangedCallback * cb)
	static int _bind_addDimensionsChangedCallback(lua_State *L) {
		if (!_lg_typecheck_addDimensionsChangedCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::addDimensionsChangedCallback(osg::Image::DimensionsChangedCallback * cb) function, expected prototype:\nvoid osg::Image::addDimensionsChangedCallback(osg::Image::DimensionsChangedCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Image::DimensionsChangedCallback* cb=(Luna< osg::Referenced >::checkSubType< osg::Image::DimensionsChangedCallback >(L,2));

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::addDimensionsChangedCallback(osg::Image::DimensionsChangedCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addDimensionsChangedCallback(cb);

		return 0;
	}

	// void osg::Image::removeDimensionsChangedCallback(osg::Image::DimensionsChangedCallback * cb)
	static int _bind_removeDimensionsChangedCallback(lua_State *L) {
		if (!_lg_typecheck_removeDimensionsChangedCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::removeDimensionsChangedCallback(osg::Image::DimensionsChangedCallback * cb) function, expected prototype:\nvoid osg::Image::removeDimensionsChangedCallback(osg::Image::DimensionsChangedCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Image::DimensionsChangedCallback* cb=(Luna< osg::Referenced >::checkSubType< osg::Image::DimensionsChangedCallback >(L,2));

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::removeDimensionsChangedCallback(osg::Image::DimensionsChangedCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeDimensionsChangedCallback(cb);

		return 0;
	}

	// static bool osg::Image::isPackedType(unsigned int type)
	static int _bind_isPackedType(lua_State *L) {
		if (!_lg_typecheck_isPackedType(L)) {
			luaL_error(L, "luna typecheck failed in static bool osg::Image::isPackedType(unsigned int type) function, expected prototype:\nstatic bool osg::Image::isPackedType(unsigned int type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int type=(unsigned int)lua_tointeger(L,1);

		bool lret = osg::Image::isPackedType(type);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static unsigned int osg::Image::computePixelFormat(unsigned int pixelFormat)
	static int _bind_computePixelFormat(lua_State *L) {
		if (!_lg_typecheck_computePixelFormat(L)) {
			luaL_error(L, "luna typecheck failed in static unsigned int osg::Image::computePixelFormat(unsigned int pixelFormat) function, expected prototype:\nstatic unsigned int osg::Image::computePixelFormat(unsigned int pixelFormat)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,1);

		unsigned int lret = osg::Image::computePixelFormat(pixelFormat);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static unsigned int osg::Image::computeFormatDataType(unsigned int pixelFormat)
	static int _bind_computeFormatDataType(lua_State *L) {
		if (!_lg_typecheck_computeFormatDataType(L)) {
			luaL_error(L, "luna typecheck failed in static unsigned int osg::Image::computeFormatDataType(unsigned int pixelFormat) function, expected prototype:\nstatic unsigned int osg::Image::computeFormatDataType(unsigned int pixelFormat)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,1);

		unsigned int lret = osg::Image::computeFormatDataType(pixelFormat);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static unsigned int osg::Image::computeBlockSize(unsigned int pixelFormat, unsigned int packing)
	static int _bind_computeBlockSize(lua_State *L) {
		if (!_lg_typecheck_computeBlockSize(L)) {
			luaL_error(L, "luna typecheck failed in static unsigned int osg::Image::computeBlockSize(unsigned int pixelFormat, unsigned int packing) function, expected prototype:\nstatic unsigned int osg::Image::computeBlockSize(unsigned int pixelFormat, unsigned int packing)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,1);
		unsigned int packing=(unsigned int)lua_tointeger(L,2);

		unsigned int lret = osg::Image::computeBlockSize(pixelFormat, packing);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static unsigned int osg::Image::computeNumComponents(unsigned int pixelFormat)
	static int _bind_computeNumComponents(lua_State *L) {
		if (!_lg_typecheck_computeNumComponents(L)) {
			luaL_error(L, "luna typecheck failed in static unsigned int osg::Image::computeNumComponents(unsigned int pixelFormat) function, expected prototype:\nstatic unsigned int osg::Image::computeNumComponents(unsigned int pixelFormat)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,1);

		unsigned int lret = osg::Image::computeNumComponents(pixelFormat);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static unsigned int osg::Image::computePixelSizeInBits(unsigned int pixelFormat, unsigned int type)
	static int _bind_computePixelSizeInBits(lua_State *L) {
		if (!_lg_typecheck_computePixelSizeInBits(L)) {
			luaL_error(L, "luna typecheck failed in static unsigned int osg::Image::computePixelSizeInBits(unsigned int pixelFormat, unsigned int type) function, expected prototype:\nstatic unsigned int osg::Image::computePixelSizeInBits(unsigned int pixelFormat, unsigned int type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,1);
		unsigned int type=(unsigned int)lua_tointeger(L,2);

		unsigned int lret = osg::Image::computePixelSizeInBits(pixelFormat, type);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static unsigned int osg::Image::computeRowWidthInBytes(int width, unsigned int pixelFormat, unsigned int type, int packing)
	static int _bind_computeRowWidthInBytes(lua_State *L) {
		if (!_lg_typecheck_computeRowWidthInBytes(L)) {
			luaL_error(L, "luna typecheck failed in static unsigned int osg::Image::computeRowWidthInBytes(int width, unsigned int pixelFormat, unsigned int type, int packing) function, expected prototype:\nstatic unsigned int osg::Image::computeRowWidthInBytes(int width, unsigned int pixelFormat, unsigned int type, int packing)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,1);
		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,2);
		unsigned int type=(unsigned int)lua_tointeger(L,3);
		int packing=(int)lua_tointeger(L,4);

		unsigned int lret = osg::Image::computeRowWidthInBytes(width, pixelFormat, type, packing);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static unsigned int osg::Image::computeImageSizeInBytes(int width, int height, int depth, unsigned int pixelFormat, unsigned int type, int packing)
	static int _bind_computeImageSizeInBytes(lua_State *L) {
		if (!_lg_typecheck_computeImageSizeInBytes(L)) {
			luaL_error(L, "luna typecheck failed in static unsigned int osg::Image::computeImageSizeInBytes(int width, int height, int depth, unsigned int pixelFormat, unsigned int type, int packing) function, expected prototype:\nstatic unsigned int osg::Image::computeImageSizeInBytes(int width, int height, int depth, unsigned int pixelFormat, unsigned int type, int packing)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,1);
		int height=(int)lua_tointeger(L,2);
		int depth=(int)lua_tointeger(L,3);
		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,4);
		unsigned int type=(unsigned int)lua_tointeger(L,5);
		int packing=(int)lua_tointeger(L,6);

		unsigned int lret = osg::Image::computeImageSizeInBytes(width, height, depth, pixelFormat, type, packing);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static int osg::Image::computeNearestPowerOfTwo(int s, float bias = 0.5f)
	static int _bind_computeNearestPowerOfTwo(lua_State *L) {
		if (!_lg_typecheck_computeNearestPowerOfTwo(L)) {
			luaL_error(L, "luna typecheck failed in static int osg::Image::computeNearestPowerOfTwo(int s, float bias = 0.5f) function, expected prototype:\nstatic int osg::Image::computeNearestPowerOfTwo(int s, float bias = 0.5f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int s=(int)lua_tointeger(L,1);
		float bias=luatop>1 ? (float)lua_tonumber(L,2) : (float)0.5f;

		int lret = osg::Image::computeNearestPowerOfTwo(s, bias);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static int osg::Image::computeNumberOfMipmapLevels(int s, int t = 1, int r = 1)
	static int _bind_computeNumberOfMipmapLevels(lua_State *L) {
		if (!_lg_typecheck_computeNumberOfMipmapLevels(L)) {
			luaL_error(L, "luna typecheck failed in static int osg::Image::computeNumberOfMipmapLevels(int s, int t = 1, int r = 1) function, expected prototype:\nstatic int osg::Image::computeNumberOfMipmapLevels(int s, int t = 1, int r = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int s=(int)lua_tointeger(L,1);
		int t=luatop>1 ? (int)lua_tointeger(L,2) : (int)1;
		int r=luatop>2 ? (int)lua_tointeger(L,3) : (int)1;

		int lret = osg::Image::computeNumberOfMipmapLevels(s, t, r);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Image::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Image::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Image::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Image::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Image::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Image::setName(name);

		return 0;
	}

	// void osg::Image::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::base_computeDataVariance() function, expected prototype:\nvoid osg::Image::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Image::computeDataVariance();

		return 0;
	}

	// void osg::Image::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Image::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Image::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Image::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Image::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Image::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Image::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Image::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Image::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Image::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Image::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Image::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Image::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Image::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Array * osg::Image::base_asArray()
	static int _bind_base_asArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asArray_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Array * osg::Image::base_asArray() function, expected prototype:\nosg::Array * osg::Image::base_asArray()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Array * osg::Image::base_asArray(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Array * lret = self->Image::asArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// const osg::Array * osg::Image::base_asArray() const
	static int _bind_base_asArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asArray_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Array * osg::Image::base_asArray() const function, expected prototype:\nconst osg::Array * osg::Image::base_asArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Array * osg::Image::base_asArray() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Array * lret = self->Image::asArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Image::base_asArray
	static int _bind_base_asArray(lua_State *L) {
		if (_lg_typecheck_base_asArray_overload_1(L)) return _bind_base_asArray_overload_1(L);
		if (_lg_typecheck_base_asArray_overload_2(L)) return _bind_base_asArray_overload_2(L);

		luaL_error(L, "error in function base_asArray, cannot match any of the overloads for function base_asArray:\n  base_asArray()\n  base_asArray()\n");
		return 0;
	}

	// osg::PrimitiveSet * osg::Image::base_asPrimitiveSet()
	static int _bind_base_asPrimitiveSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asPrimitiveSet_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::PrimitiveSet * osg::Image::base_asPrimitiveSet() function, expected prototype:\nosg::PrimitiveSet * osg::Image::base_asPrimitiveSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::PrimitiveSet * osg::Image::base_asPrimitiveSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::PrimitiveSet * lret = self->Image::asPrimitiveSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PrimitiveSet >::push(L,lret,false);

		return 1;
	}

	// const osg::PrimitiveSet * osg::Image::base_asPrimitiveSet() const
	static int _bind_base_asPrimitiveSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asPrimitiveSet_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::PrimitiveSet * osg::Image::base_asPrimitiveSet() const function, expected prototype:\nconst osg::PrimitiveSet * osg::Image::base_asPrimitiveSet() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::PrimitiveSet * osg::Image::base_asPrimitiveSet() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::PrimitiveSet * lret = self->Image::asPrimitiveSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PrimitiveSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Image::base_asPrimitiveSet
	static int _bind_base_asPrimitiveSet(lua_State *L) {
		if (_lg_typecheck_base_asPrimitiveSet_overload_1(L)) return _bind_base_asPrimitiveSet_overload_1(L);
		if (_lg_typecheck_base_asPrimitiveSet_overload_2(L)) return _bind_base_asPrimitiveSet_overload_2(L);

		luaL_error(L, "error in function base_asPrimitiveSet, cannot match any of the overloads for function base_asPrimitiveSet:\n  base_asPrimitiveSet()\n  base_asPrimitiveSet()\n");
		return 0;
	}

	// void osg::Image::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::Image::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Image::releaseGLObjects(state);

		return 0;
	}

	// osg::Object * osg::Image::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Image::base_cloneType() const function, expected prototype:\nosg::Object * osg::Image::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Image::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Image::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Image::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Image::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Image::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Image::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Image::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Image::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Image::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Image::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Image::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Image::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Image::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Image::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Image::base_libraryName() const function, expected prototype:\nconst char * osg::Image::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Image::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Image::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Image::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Image::base_className() const function, expected prototype:\nconst char * osg::Image::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Image::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Image::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Image * osg::Image::base_asImage()
	static int _bind_base_asImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osg::Image::base_asImage() function, expected prototype:\nosg::Image * osg::Image::base_asImage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osg::Image::base_asImage(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->Image::asImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::Image::base_asImage() const
	static int _bind_base_asImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::Image::base_asImage() const function, expected prototype:\nconst osg::Image * osg::Image::base_asImage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Image * osg::Image::base_asImage() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Image * lret = self->Image::asImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Image::base_asImage
	static int _bind_base_asImage(lua_State *L) {
		if (_lg_typecheck_base_asImage_overload_1(L)) return _bind_base_asImage_overload_1(L);
		if (_lg_typecheck_base_asImage_overload_2(L)) return _bind_base_asImage_overload_2(L);

		luaL_error(L, "error in function base_asImage, cannot match any of the overloads for function base_asImage:\n  base_asImage()\n  base_asImage()\n");
		return 0;
	}

	// const void * osg::Image::base_getDataPointer() const
	static int _bind_base_getDataPointer(lua_State *L) {
		if (!_lg_typecheck_base_getDataPointer(L)) {
			luaL_error(L, "luna typecheck failed in const void * osg::Image::base_getDataPointer() const function, expected prototype:\nconst void * osg::Image::base_getDataPointer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const void * osg::Image::base_getDataPointer() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const void * lret = self->Image::getDataPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::Image::base_getTotalDataSize() const
	static int _bind_base_getTotalDataSize(lua_State *L) {
		if (!_lg_typecheck_base_getTotalDataSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Image::base_getTotalDataSize() const function, expected prototype:\nunsigned int osg::Image::base_getTotalDataSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Image::base_getTotalDataSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Image::getTotalDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Image::base_compare(const osg::Image & rhs) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Image::base_compare(const osg::Image & rhs) const function, expected prototype:\nint osg::Image::base_compare(const osg::Image & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Image* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Image::base_compare function");
		}
		const osg::Image & rhs=*rhs_ptr;

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Image::base_compare(const osg::Image &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Image::compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Image::base_allocateImage(int s, int t, int r, unsigned int pixelFormat, unsigned int type, int packing = 1)
	static int _bind_base_allocateImage(lua_State *L) {
		if (!_lg_typecheck_base_allocateImage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::base_allocateImage(int s, int t, int r, unsigned int pixelFormat, unsigned int type, int packing = 1) function, expected prototype:\nvoid osg::Image::base_allocateImage(int s, int t, int r, unsigned int pixelFormat, unsigned int type, int packing = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int s=(int)lua_tointeger(L,2);
		int t=(int)lua_tointeger(L,3);
		int r=(int)lua_tointeger(L,4);
		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,5);
		unsigned int type=(unsigned int)lua_tointeger(L,6);
		int packing=luatop>6 ? (int)lua_tointeger(L,7) : (int)1;

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::base_allocateImage(int, int, int, unsigned int, unsigned int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Image::allocateImage(s, t, r, pixelFormat, type, packing);

		return 0;
	}

	// void osg::Image::base_setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1, int rowLength = 0)
	static int _bind_base_setImage(lua_State *L) {
		if (!_lg_typecheck_base_setImage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::base_setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1, int rowLength = 0) function, expected prototype:\nvoid osg::Image::base_setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1, int rowLength = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int s=(int)lua_tointeger(L,2);
		int t=(int)lua_tointeger(L,3);
		int r=(int)lua_tointeger(L,4);
		int internalTextureformat=(int)lua_tointeger(L,5);
		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,6);
		unsigned int type=(unsigned int)lua_tointeger(L,7);
		unsigned char data = (unsigned char)(lua_tointeger(L,8));
		osg::Image::AllocationMode mode=(osg::Image::AllocationMode)lua_tointeger(L,9);
		int packing=luatop>9 ? (int)lua_tointeger(L,10) : (int)1;
		int rowLength=luatop>10 ? (int)lua_tointeger(L,11) : (int)0;

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::base_setImage(int, int, int, int, unsigned int, unsigned int, unsigned char *, osg::Image::AllocationMode, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Image::setImage(s, t, r, internalTextureformat, pixelFormat, type, &data, mode, packing, rowLength);

		return 0;
	}

	// void osg::Image::base_readPixels(int x, int y, int width, int height, unsigned int pixelFormat, unsigned int type, int packing = 1)
	static int _bind_base_readPixels(lua_State *L) {
		if (!_lg_typecheck_base_readPixels(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::base_readPixels(int x, int y, int width, int height, unsigned int pixelFormat, unsigned int type, int packing = 1) function, expected prototype:\nvoid osg::Image::base_readPixels(int x, int y, int width, int height, unsigned int pixelFormat, unsigned int type, int packing = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,6);
		unsigned int type=(unsigned int)lua_tointeger(L,7);
		int packing=luatop>7 ? (int)lua_tointeger(L,8) : (int)1;

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::base_readPixels(int, int, int, int, unsigned int, unsigned int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Image::readPixels(x, y, width, height, pixelFormat, type, packing);

		return 0;
	}

	// void osg::Image::base_readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE, unsigned int face = 0)
	static int _bind_base_readImageFromCurrentTexture(lua_State *L) {
		if (!_lg_typecheck_base_readImageFromCurrentTexture(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::base_readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE, unsigned int face = 0) function, expected prototype:\nvoid osg::Image::base_readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE, unsigned int face = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);
		bool copyMipMapsIfAvailable=(bool)(lua_toboolean(L,3)==1);
		unsigned int type=luatop>3 ? (unsigned int)lua_tointeger(L,4) : (unsigned int)GL_UNSIGNED_BYTE;
		unsigned int face=luatop>4 ? (unsigned int)lua_tointeger(L,5) : (unsigned int)0;

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::base_readImageFromCurrentTexture(unsigned int, bool, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Image::readImageFromCurrentTexture(contextID, copyMipMapsIfAvailable, type, face);

		return 0;
	}

	// void osg::Image::base_scaleImage(int s, int t, int r, unsigned int newDataType)
	static int _bind_base_scaleImage(lua_State *L) {
		if (!_lg_typecheck_base_scaleImage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::base_scaleImage(int s, int t, int r, unsigned int newDataType) function, expected prototype:\nvoid osg::Image::base_scaleImage(int s, int t, int r, unsigned int newDataType)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int s=(int)lua_tointeger(L,2);
		int t=(int)lua_tointeger(L,3);
		int r=(int)lua_tointeger(L,4);
		unsigned int newDataType=(unsigned int)lua_tointeger(L,5);

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::base_scaleImage(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Image::scaleImage(s, t, r, newDataType);

		return 0;
	}

	// void osg::Image::base_copySubImage(int s_offset, int t_offset, int r_offset, const osg::Image * source)
	static int _bind_base_copySubImage(lua_State *L) {
		if (!_lg_typecheck_base_copySubImage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::base_copySubImage(int s_offset, int t_offset, int r_offset, const osg::Image * source) function, expected prototype:\nvoid osg::Image::base_copySubImage(int s_offset, int t_offset, int r_offset, const osg::Image * source)\nClass arguments details:\narg 4 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int s_offset=(int)lua_tointeger(L,2);
		int t_offset=(int)lua_tointeger(L,3);
		int r_offset=(int)lua_tointeger(L,4);
		const osg::Image* source=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,5));

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::base_copySubImage(int, int, int, const osg::Image *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Image::copySubImage(s_offset, t_offset, r_offset, source);

		return 0;
	}

	// bool osg::Image::base_isImageTranslucent() const
	static int _bind_base_isImageTranslucent(lua_State *L) {
		if (!_lg_typecheck_base_isImageTranslucent(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Image::base_isImageTranslucent() const function, expected prototype:\nbool osg::Image::base_isImageTranslucent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Image::base_isImageTranslucent() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Image::isImageTranslucent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Image::base_requiresUpdateCall() const
	static int _bind_base_requiresUpdateCall(lua_State *L) {
		if (!_lg_typecheck_base_requiresUpdateCall(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Image::base_requiresUpdateCall() const function, expected prototype:\nbool osg::Image::base_requiresUpdateCall() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Image::base_requiresUpdateCall() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Image::requiresUpdateCall();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Image::base_update(osg::NodeVisitor * arg1)
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::base_update(osg::NodeVisitor * arg1) function, expected prototype:\nvoid osg::Image::base_update(osg::NodeVisitor * arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::base_update(osg::NodeVisitor *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Image::update(_arg1);

		return 0;
	}

	// bool osg::Image::base_sendFocusHint(bool arg1)
	static int _bind_base_sendFocusHint(lua_State *L) {
		if (!_lg_typecheck_base_sendFocusHint(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Image::base_sendFocusHint(bool arg1) function, expected prototype:\nbool osg::Image::base_sendFocusHint(bool arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool _arg1=(bool)(lua_toboolean(L,2)==1);

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Image::base_sendFocusHint(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Image::sendFocusHint(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Image::base_sendPointerEvent(int arg1, int arg2, int arg3)
	static int _bind_base_sendPointerEvent(lua_State *L) {
		if (!_lg_typecheck_base_sendPointerEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Image::base_sendPointerEvent(int arg1, int arg2, int arg3) function, expected prototype:\nbool osg::Image::base_sendPointerEvent(int arg1, int arg2, int arg3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int _arg1=(int)lua_tointeger(L,2);
		int _arg2=(int)lua_tointeger(L,3);
		int _arg3=(int)lua_tointeger(L,4);

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Image::base_sendPointerEvent(int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Image::sendPointerEvent(_arg1, _arg2, _arg3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Image::base_sendKeyEvent(int arg1, bool arg2)
	static int _bind_base_sendKeyEvent(lua_State *L) {
		if (!_lg_typecheck_base_sendKeyEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Image::base_sendKeyEvent(int arg1, bool arg2) function, expected prototype:\nbool osg::Image::base_sendKeyEvent(int arg1, bool arg2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int _arg1=(int)lua_tointeger(L,2);
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Image::base_sendKeyEvent(int, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Image::sendKeyEvent(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Image::base_setFrameLastRendered(const osg::FrameStamp * arg1)
	static int _bind_base_setFrameLastRendered(lua_State *L) {
		if (!_lg_typecheck_base_setFrameLastRendered(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::base_setFrameLastRendered(const osg::FrameStamp * arg1) function, expected prototype:\nvoid osg::Image::base_setFrameLastRendered(const osg::FrameStamp * arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::FrameStamp* _arg1=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));

		osg::Image* self=Luna< osg::Referenced >::checkSubType< osg::Image >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::base_setFrameLastRendered(const osg::FrameStamp *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Image::setFrameLastRendered(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::Image* LunaTraits< osg::Image >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Image::_bind_ctor(L);
}

void LunaTraits< osg::Image >::_bind_dtor(osg::Image* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Image >::className[] = "Image";
const char LunaTraits< osg::Image >::fullName[] = "osg::Image";
const char LunaTraits< osg::Image >::moduleName[] = "osg";
const char* LunaTraits< osg::Image >::parents[] = {"osg.BufferData", 0};
const int LunaTraits< osg::Image >::hash = 80535448;
const int LunaTraits< osg::Image >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Image >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Image::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Image::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Image::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Image::_bind_libraryName},
	{"className", &luna_wrapper_osg_Image::_bind_className},
	{"asImage", &luna_wrapper_osg_Image::_bind_asImage},
	{"getDataPointer", &luna_wrapper_osg_Image::_bind_getDataPointer},
	{"getTotalDataSize", &luna_wrapper_osg_Image::_bind_getTotalDataSize},
	{"compare", &luna_wrapper_osg_Image::_bind_compare},
	{"setFileName", &luna_wrapper_osg_Image::_bind_setFileName},
	{"getFileName", &luna_wrapper_osg_Image::_bind_getFileName},
	{"setWriteHint", &luna_wrapper_osg_Image::_bind_setWriteHint},
	{"getWriteHint", &luna_wrapper_osg_Image::_bind_getWriteHint},
	{"setAllocationMode", &luna_wrapper_osg_Image::_bind_setAllocationMode},
	{"getAllocationMode", &luna_wrapper_osg_Image::_bind_getAllocationMode},
	{"allocateImage", &luna_wrapper_osg_Image::_bind_allocateImage},
	{"setImage", &luna_wrapper_osg_Image::_bind_setImage},
	{"readPixels", &luna_wrapper_osg_Image::_bind_readPixels},
	{"readImageFromCurrentTexture", &luna_wrapper_osg_Image::_bind_readImageFromCurrentTexture},
	{"swap", &luna_wrapper_osg_Image::_bind_swap},
	{"scaleImage", &luna_wrapper_osg_Image::_bind_scaleImage},
	{"copySubImage", &luna_wrapper_osg_Image::_bind_copySubImage},
	{"setOrigin", &luna_wrapper_osg_Image::_bind_setOrigin},
	{"getOrigin", &luna_wrapper_osg_Image::_bind_getOrigin},
	{"s", &luna_wrapper_osg_Image::_bind_s},
	{"t", &luna_wrapper_osg_Image::_bind_t},
	{"r", &luna_wrapper_osg_Image::_bind_r},
	{"setRowLength", &luna_wrapper_osg_Image::_bind_setRowLength},
	{"getRowLength", &luna_wrapper_osg_Image::_bind_getRowLength},
	{"setInternalTextureFormat", &luna_wrapper_osg_Image::_bind_setInternalTextureFormat},
	{"getInternalTextureFormat", &luna_wrapper_osg_Image::_bind_getInternalTextureFormat},
	{"setPixelFormat", &luna_wrapper_osg_Image::_bind_setPixelFormat},
	{"getPixelFormat", &luna_wrapper_osg_Image::_bind_getPixelFormat},
	{"setDataType", &luna_wrapper_osg_Image::_bind_setDataType},
	{"getDataType", &luna_wrapper_osg_Image::_bind_getDataType},
	{"setPacking", &luna_wrapper_osg_Image::_bind_setPacking},
	{"getPacking", &luna_wrapper_osg_Image::_bind_getPacking},
	{"isCompressed", &luna_wrapper_osg_Image::_bind_isCompressed},
	{"setPixelAspectRatio", &luna_wrapper_osg_Image::_bind_setPixelAspectRatio},
	{"getPixelAspectRatio", &luna_wrapper_osg_Image::_bind_getPixelAspectRatio},
	{"getPixelSizeInBits", &luna_wrapper_osg_Image::_bind_getPixelSizeInBits},
	{"getRowSizeInBytes", &luna_wrapper_osg_Image::_bind_getRowSizeInBytes},
	{"getRowStepInBytes", &luna_wrapper_osg_Image::_bind_getRowStepInBytes},
	{"getImageSizeInBytes", &luna_wrapper_osg_Image::_bind_getImageSizeInBytes},
	{"getImageStepInBytes", &luna_wrapper_osg_Image::_bind_getImageStepInBytes},
	{"getTotalSizeInBytes", &luna_wrapper_osg_Image::_bind_getTotalSizeInBytes},
	{"getTotalSizeInBytesIncludingMipmaps", &luna_wrapper_osg_Image::_bind_getTotalSizeInBytesIncludingMipmaps},
	{"valid", &luna_wrapper_osg_Image::_bind_valid},
	{"data", &luna_wrapper_osg_Image::_bind_data},
	{"isDataContiguous", &luna_wrapper_osg_Image::_bind_isDataContiguous},
	{"getColor", &luna_wrapper_osg_Image::_bind_getColor},
	{"flipHorizontal", &luna_wrapper_osg_Image::_bind_flipHorizontal},
	{"flipVertical", &luna_wrapper_osg_Image::_bind_flipVertical},
	{"flipDepth", &luna_wrapper_osg_Image::_bind_flipDepth},
	{"ensureValidSizeForTexturing", &luna_wrapper_osg_Image::_bind_ensureValidSizeForTexturing},
	{"isMipmap", &luna_wrapper_osg_Image::_bind_isMipmap},
	{"getNumMipmapLevels", &luna_wrapper_osg_Image::_bind_getNumMipmapLevels},
	{"setMipmapLevels", &luna_wrapper_osg_Image::_bind_setMipmapLevels},
	{"getMipmapLevels", &luna_wrapper_osg_Image::_bind_getMipmapLevels},
	{"getMipmapOffset", &luna_wrapper_osg_Image::_bind_getMipmapOffset},
	{"getMipmapData", &luna_wrapper_osg_Image::_bind_getMipmapData},
	{"supportsTextureSubloading", &luna_wrapper_osg_Image::_bind_supportsTextureSubloading},
	{"isImageTranslucent", &luna_wrapper_osg_Image::_bind_isImageTranslucent},
	{"setPixelBufferObject", &luna_wrapper_osg_Image::_bind_setPixelBufferObject},
	{"getPixelBufferObject", &luna_wrapper_osg_Image::_bind_getPixelBufferObject},
	{"requiresUpdateCall", &luna_wrapper_osg_Image::_bind_requiresUpdateCall},
	{"update", &luna_wrapper_osg_Image::_bind_update},
	{"sendFocusHint", &luna_wrapper_osg_Image::_bind_sendFocusHint},
	{"sendPointerEvent", &luna_wrapper_osg_Image::_bind_sendPointerEvent},
	{"sendKeyEvent", &luna_wrapper_osg_Image::_bind_sendKeyEvent},
	{"setFrameLastRendered", &luna_wrapper_osg_Image::_bind_setFrameLastRendered},
	{"addDimensionsChangedCallback", &luna_wrapper_osg_Image::_bind_addDimensionsChangedCallback},
	{"removeDimensionsChangedCallback", &luna_wrapper_osg_Image::_bind_removeDimensionsChangedCallback},
	{"isPackedType", &luna_wrapper_osg_Image::_bind_isPackedType},
	{"computePixelFormat", &luna_wrapper_osg_Image::_bind_computePixelFormat},
	{"computeFormatDataType", &luna_wrapper_osg_Image::_bind_computeFormatDataType},
	{"computeBlockSize", &luna_wrapper_osg_Image::_bind_computeBlockSize},
	{"computeNumComponents", &luna_wrapper_osg_Image::_bind_computeNumComponents},
	{"computePixelSizeInBits", &luna_wrapper_osg_Image::_bind_computePixelSizeInBits},
	{"computeRowWidthInBytes", &luna_wrapper_osg_Image::_bind_computeRowWidthInBytes},
	{"computeImageSizeInBytes", &luna_wrapper_osg_Image::_bind_computeImageSizeInBytes},
	{"computeNearestPowerOfTwo", &luna_wrapper_osg_Image::_bind_computeNearestPowerOfTwo},
	{"computeNumberOfMipmapLevels", &luna_wrapper_osg_Image::_bind_computeNumberOfMipmapLevels},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Image::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_Image::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Image::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Image::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Image::_bind_base_getUserData},
	{"base_asArray", &luna_wrapper_osg_Image::_bind_base_asArray},
	{"base_asPrimitiveSet", &luna_wrapper_osg_Image::_bind_base_asPrimitiveSet},
	{"base_releaseGLObjects", &luna_wrapper_osg_Image::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_Image::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Image::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Image::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Image::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Image::_bind_base_className},
	{"base_asImage", &luna_wrapper_osg_Image::_bind_base_asImage},
	{"base_getDataPointer", &luna_wrapper_osg_Image::_bind_base_getDataPointer},
	{"base_getTotalDataSize", &luna_wrapper_osg_Image::_bind_base_getTotalDataSize},
	{"base_compare", &luna_wrapper_osg_Image::_bind_base_compare},
	{"base_allocateImage", &luna_wrapper_osg_Image::_bind_base_allocateImage},
	{"base_setImage", &luna_wrapper_osg_Image::_bind_base_setImage},
	{"base_readPixels", &luna_wrapper_osg_Image::_bind_base_readPixels},
	{"base_readImageFromCurrentTexture", &luna_wrapper_osg_Image::_bind_base_readImageFromCurrentTexture},
	{"base_scaleImage", &luna_wrapper_osg_Image::_bind_base_scaleImage},
	{"base_copySubImage", &luna_wrapper_osg_Image::_bind_base_copySubImage},
	{"base_isImageTranslucent", &luna_wrapper_osg_Image::_bind_base_isImageTranslucent},
	{"base_requiresUpdateCall", &luna_wrapper_osg_Image::_bind_base_requiresUpdateCall},
	{"base_update", &luna_wrapper_osg_Image::_bind_base_update},
	{"base_sendFocusHint", &luna_wrapper_osg_Image::_bind_base_sendFocusHint},
	{"base_sendPointerEvent", &luna_wrapper_osg_Image::_bind_base_sendPointerEvent},
	{"base_sendKeyEvent", &luna_wrapper_osg_Image::_bind_base_sendKeyEvent},
	{"base_setFrameLastRendered", &luna_wrapper_osg_Image::_bind_base_setFrameLastRendered},
	{"fromVoid", &luna_wrapper_osg_Image::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Image::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Image::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Image >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Image::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Image >::enumValues[] = {
	{"NO_PREFERENCE", osg::Image::NO_PREFERENCE},
	{"STORE_INLINE", osg::Image::STORE_INLINE},
	{"EXTERNAL_FILE", osg::Image::EXTERNAL_FILE},
	{"NO_DELETE", osg::Image::NO_DELETE},
	{"USE_NEW_DELETE", osg::Image::USE_NEW_DELETE},
	{"USE_MALLOC_FREE", osg::Image::USE_MALLOC_FREE},
	{"BOTTOM_LEFT", osg::Image::BOTTOM_LEFT},
	{"TOP_LEFT", osg::Image::TOP_LEFT},
	{0,0}
};


