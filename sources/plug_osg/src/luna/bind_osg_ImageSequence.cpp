#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ImageSequence.h>

class luna_wrapper_osg_ImageSequence {
public:
	typedef Luna< osg::ImageSequence > luna_t;

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

		osg::ImageSequence* self= (osg::ImageSequence*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ImageSequence >::push(L,self,false);
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
		//osg::ImageSequence* ptr= dynamic_cast< osg::ImageSequence* >(Luna< osg::Referenced >::check(L,1));
		osg::ImageSequence* ptr= luna_caster< osg::Referenced, osg::ImageSequence >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ImageSequence >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setReferenceTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferenceTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTimeMultiplier(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTimeMultiplier(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_seek(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_play(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_pause(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_rewind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addImageFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setImageFile(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImageFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setImage_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<9 || luatop>10 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( luatop>9 && (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setImage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Image >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumImageData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImageDataList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImageDataList_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_setReadOptions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReadOptions_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getReadOptions_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_quit(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getCreationTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getFrameRate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getCurrentTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setVolume(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getVolume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getAudioBalance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setAudioBalance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_createSuitableTexture(lua_State *L) {
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

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setReferenceTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getReferenceTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setTimeMultiplier(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getTimeMultiplier(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_seek(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_play(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_pause(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_rewind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getLength(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ImageSequence::ImageSequence()
	static osg::ImageSequence* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ImageSequence::ImageSequence() function, expected prototype:\nosg::ImageSequence::ImageSequence()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::ImageSequence();
	}

	// osg::ImageSequence::ImageSequence(const osg::ImageSequence & ImageSequence, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ImageSequence* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ImageSequence::ImageSequence(const osg::ImageSequence & ImageSequence, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ImageSequence::ImageSequence(const osg::ImageSequence & ImageSequence, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::ImageSequence* ImageSequence_ptr=(Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1));
		if( !ImageSequence_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ImageSequence in osg::ImageSequence::ImageSequence function");
		}
		const osg::ImageSequence & ImageSequence=*ImageSequence_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ImageSequence::ImageSequence function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::ImageSequence(ImageSequence, copyop);
	}

	// osg::ImageSequence::ImageSequence(lua_Table * data)
	static osg::ImageSequence* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::ImageSequence::ImageSequence(lua_Table * data) function, expected prototype:\nosg::ImageSequence::ImageSequence(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_ImageSequence(L,NULL);
	}

	// osg::ImageSequence::ImageSequence(lua_Table * data, const osg::ImageSequence & ImageSequence, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ImageSequence* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::ImageSequence::ImageSequence(lua_Table * data, const osg::ImageSequence & ImageSequence, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ImageSequence::ImageSequence(lua_Table * data, const osg::ImageSequence & ImageSequence, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::ImageSequence* ImageSequence_ptr=(Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,2));
		if( !ImageSequence_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ImageSequence in osg::ImageSequence::ImageSequence function");
		}
		const osg::ImageSequence & ImageSequence=*ImageSequence_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ImageSequence::ImageSequence function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_ImageSequence(L,NULL, ImageSequence, copyop);
	}

	// Overload binder for osg::ImageSequence::ImageSequence
	static osg::ImageSequence* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ImageSequence, cannot match any of the overloads for function ImageSequence:\n  ImageSequence()\n  ImageSequence(const osg::ImageSequence &, const osg::CopyOp &)\n  ImageSequence(lua_Table *)\n  ImageSequence(lua_Table *, const osg::ImageSequence &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ImageSequence::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ImageSequence::cloneType() const function, expected prototype:\nosg::Object * osg::ImageSequence::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ImageSequence::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ImageSequence::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ImageSequence::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ImageSequence::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ImageSequence::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ImageSequence::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ImageSequence::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ImageSequence::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ImageSequence::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ImageSequence::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ImageSequence::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ImageSequence::libraryName() const function, expected prototype:\nconst char * osg::ImageSequence::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ImageSequence::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ImageSequence::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ImageSequence::className() const function, expected prototype:\nconst char * osg::ImageSequence::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ImageSequence::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// int osg::ImageSequence::compare(const osg::Image & rhs) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::ImageSequence::compare(const osg::Image & rhs) const function, expected prototype:\nint osg::ImageSequence::compare(const osg::Image & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Image* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::ImageSequence::compare function");
		}
		const osg::Image & rhs=*rhs_ptr;

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::ImageSequence::compare(const osg::Image &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageSequence::setReferenceTime(double t)
	static int _bind_setReferenceTime(lua_State *L) {
		if (!_lg_typecheck_setReferenceTime(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::setReferenceTime(double t) function, expected prototype:\nvoid osg::ImageSequence::setReferenceTime(double t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::setReferenceTime(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setReferenceTime(t);

		return 0;
	}

	// double osg::ImageSequence::getReferenceTime() const
	static int _bind_getReferenceTime(lua_State *L) {
		if (!_lg_typecheck_getReferenceTime(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ImageSequence::getReferenceTime() const function, expected prototype:\ndouble osg::ImageSequence::getReferenceTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ImageSequence::getReferenceTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getReferenceTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageSequence::setTimeMultiplier(double tm)
	static int _bind_setTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_setTimeMultiplier(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::setTimeMultiplier(double tm) function, expected prototype:\nvoid osg::ImageSequence::setTimeMultiplier(double tm)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double tm=(double)lua_tonumber(L,2);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::setTimeMultiplier(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTimeMultiplier(tm);

		return 0;
	}

	// double osg::ImageSequence::getTimeMultiplier() const
	static int _bind_getTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_getTimeMultiplier(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ImageSequence::getTimeMultiplier() const function, expected prototype:\ndouble osg::ImageSequence::getTimeMultiplier() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ImageSequence::getTimeMultiplier() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getTimeMultiplier();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageSequence::seek(double time)
	static int _bind_seek(lua_State *L) {
		if (!_lg_typecheck_seek(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::seek(double time) function, expected prototype:\nvoid osg::ImageSequence::seek(double time)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double time=(double)lua_tonumber(L,2);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::seek(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->seek(time);

		return 0;
	}

	// void osg::ImageSequence::play()
	static int _bind_play(lua_State *L) {
		if (!_lg_typecheck_play(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::play() function, expected prototype:\nvoid osg::ImageSequence::play()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::play(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->play();

		return 0;
	}

	// void osg::ImageSequence::pause()
	static int _bind_pause(lua_State *L) {
		if (!_lg_typecheck_pause(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::pause() function, expected prototype:\nvoid osg::ImageSequence::pause()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::pause(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pause();

		return 0;
	}

	// void osg::ImageSequence::rewind()
	static int _bind_rewind(lua_State *L) {
		if (!_lg_typecheck_rewind(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::rewind() function, expected prototype:\nvoid osg::ImageSequence::rewind()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::rewind(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->rewind();

		return 0;
	}

	// void osg::ImageSequence::setMode(osg::ImageSequence::Mode mode)
	static int _bind_setMode(lua_State *L) {
		if (!_lg_typecheck_setMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::setMode(osg::ImageSequence::Mode mode) function, expected prototype:\nvoid osg::ImageSequence::setMode(osg::ImageSequence::Mode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ImageSequence::Mode mode=(osg::ImageSequence::Mode)lua_tointeger(L,2);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::setMode(osg::ImageSequence::Mode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMode(mode);

		return 0;
	}

	// osg::ImageSequence::Mode osg::ImageSequence::getMode() const
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luaL_error(L, "luna typecheck failed in osg::ImageSequence::Mode osg::ImageSequence::getMode() const function, expected prototype:\nosg::ImageSequence::Mode osg::ImageSequence::getMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ImageSequence::Mode osg::ImageSequence::getMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ImageSequence::Mode lret = self->getMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageSequence::setLength(double length)
	static int _bind_setLength(lua_State *L) {
		if (!_lg_typecheck_setLength(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::setLength(double length) function, expected prototype:\nvoid osg::ImageSequence::setLength(double length)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double length=(double)lua_tonumber(L,2);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::setLength(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLength(length);

		return 0;
	}

	// double osg::ImageSequence::getLength() const
	static int _bind_getLength(lua_State *L) {
		if (!_lg_typecheck_getLength(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ImageSequence::getLength() const function, expected prototype:\ndouble osg::ImageSequence::getLength() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ImageSequence::getLength() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageSequence::addImageFile(const std::string & fileName)
	static int _bind_addImageFile(lua_State *L) {
		if (!_lg_typecheck_addImageFile(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::addImageFile(const std::string & fileName) function, expected prototype:\nvoid osg::ImageSequence::addImageFile(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::addImageFile(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addImageFile(fileName);

		return 0;
	}

	// void osg::ImageSequence::setImageFile(unsigned int pos, const std::string & fileName)
	static int _bind_setImageFile(lua_State *L) {
		if (!_lg_typecheck_setImageFile(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::setImageFile(unsigned int pos, const std::string & fileName) function, expected prototype:\nvoid osg::ImageSequence::setImageFile(unsigned int pos, const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::setImageFile(unsigned int, const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setImageFile(pos, fileName);

		return 0;
	}

	// std::string osg::ImageSequence::getImageFile(unsigned int pos) const
	static int _bind_getImageFile(lua_State *L) {
		if (!_lg_typecheck_getImageFile(L)) {
			luaL_error(L, "luna typecheck failed in std::string osg::ImageSequence::getImageFile(unsigned int pos) const function, expected prototype:\nstd::string osg::ImageSequence::getImageFile(unsigned int pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osg::ImageSequence::getImageFile(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->getImageFile(pos);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::ImageSequence::addImage(osg::Image * image)
	static int _bind_addImage(lua_State *L) {
		if (!_lg_typecheck_addImage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::addImage(osg::Image * image) function, expected prototype:\nvoid osg::ImageSequence::addImage(osg::Image * image)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::addImage(osg::Image *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addImage(image);

		return 0;
	}

	// void osg::ImageSequence::setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1)
	static int _bind_setImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_setImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1) function, expected prototype:\nvoid osg::ImageSequence::setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
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

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::setImage(int, int, int, int, unsigned int, unsigned int, unsigned char *, osg::Image::AllocationMode, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setImage(s, t, r, internalTextureformat, pixelFormat, type, &data, mode, packing);

		return 0;
	}

	// void osg::ImageSequence::setImage(unsigned int pos, osg::Image * image)
	static int _bind_setImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_setImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::setImage(unsigned int pos, osg::Image * image) function, expected prototype:\nvoid osg::ImageSequence::setImage(unsigned int pos, osg::Image * image)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,3));

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::setImage(unsigned int, osg::Image *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setImage(pos, image);

		return 0;
	}

	// Overload binder for osg::ImageSequence::setImage
	static int _bind_setImage(lua_State *L) {
		if (_lg_typecheck_setImage_overload_1(L)) return _bind_setImage_overload_1(L);
		if (_lg_typecheck_setImage_overload_2(L)) return _bind_setImage_overload_2(L);

		luaL_error(L, "error in function setImage, cannot match any of the overloads for function setImage:\n  setImage(int, int, int, int, unsigned int, unsigned int, unsigned char *, osg::Image::AllocationMode, int)\n  setImage(unsigned int, osg::Image *)\n");
		return 0;
	}

	// osg::Image * osg::ImageSequence::getImage(unsigned int pos)
	static int _bind_getImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osg::ImageSequence::getImage(unsigned int pos) function, expected prototype:\nosg::Image * osg::ImageSequence::getImage(unsigned int pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osg::ImageSequence::getImage(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->getImage(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::ImageSequence::getImage(unsigned int pos) const
	static int _bind_getImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::ImageSequence::getImage(unsigned int pos) const function, expected prototype:\nconst osg::Image * osg::ImageSequence::getImage(unsigned int pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Image * osg::ImageSequence::getImage(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Image * lret = self->getImage(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ImageSequence::getImage
	static int _bind_getImage(lua_State *L) {
		if (_lg_typecheck_getImage_overload_1(L)) return _bind_getImage_overload_1(L);
		if (_lg_typecheck_getImage_overload_2(L)) return _bind_getImage_overload_2(L);

		luaL_error(L, "error in function getImage, cannot match any of the overloads for function getImage:\n  getImage(unsigned int)\n  getImage(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::ImageSequence::getNumImageData() const
	static int _bind_getNumImageData(lua_State *L) {
		if (!_lg_typecheck_getNumImageData(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::ImageSequence::getNumImageData() const function, expected prototype:\nunsigned int osg::ImageSequence::getNumImageData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::ImageSequence::getNumImageData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumImageData();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::ImageSequence::ImageDataList & osg::ImageSequence::getImageDataList()
	static int _bind_getImageDataList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImageDataList_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ImageSequence::ImageDataList & osg::ImageSequence::getImageDataList() function, expected prototype:\nosg::ImageSequence::ImageDataList & osg::ImageSequence::getImageDataList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ImageSequence::ImageDataList & osg::ImageSequence::getImageDataList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ImageSequence::ImageDataList* lret = &self->getImageDataList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ImageSequence::ImageDataList >::push(L,lret,false);

		return 1;
	}

	// const osg::ImageSequence::ImageDataList & osg::ImageSequence::getImageDataList() const
	static int _bind_getImageDataList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImageDataList_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::ImageSequence::ImageDataList & osg::ImageSequence::getImageDataList() const function, expected prototype:\nconst osg::ImageSequence::ImageDataList & osg::ImageSequence::getImageDataList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::ImageSequence::ImageDataList & osg::ImageSequence::getImageDataList() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ImageSequence::ImageDataList* lret = &self->getImageDataList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ImageSequence::ImageDataList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ImageSequence::getImageDataList
	static int _bind_getImageDataList(lua_State *L) {
		if (_lg_typecheck_getImageDataList_overload_1(L)) return _bind_getImageDataList_overload_1(L);
		if (_lg_typecheck_getImageDataList_overload_2(L)) return _bind_getImageDataList_overload_2(L);

		luaL_error(L, "error in function getImageDataList, cannot match any of the overloads for function getImageDataList:\n  getImageDataList()\n  getImageDataList()\n");
		return 0;
	}

	// bool osg::ImageSequence::requiresUpdateCall() const
	static int _bind_requiresUpdateCall(lua_State *L) {
		if (!_lg_typecheck_requiresUpdateCall(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ImageSequence::requiresUpdateCall() const function, expected prototype:\nbool osg::ImageSequence::requiresUpdateCall() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ImageSequence::requiresUpdateCall() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->requiresUpdateCall();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ImageSequence::update(osg::NodeVisitor * nv)
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::update(osg::NodeVisitor * nv) function, expected prototype:\nvoid osg::ImageSequence::update(osg::NodeVisitor * nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::update(osg::NodeVisitor *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->update(nv);

		return 0;
	}

	// void osg::ImageSequence::setReadOptions(osg::Referenced * options)
	static int _bind_setReadOptions(lua_State *L) {
		if (!_lg_typecheck_setReadOptions(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::setReadOptions(osg::Referenced * options) function, expected prototype:\nvoid osg::ImageSequence::setReadOptions(osg::Referenced * options)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* options=(Luna< osg::Referenced >::check(L,2));

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::setReadOptions(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setReadOptions(options);

		return 0;
	}

	// osg::Referenced * osg::ImageSequence::getReadOptions()
	static int _bind_getReadOptions_overload_1(lua_State *L) {
		if (!_lg_typecheck_getReadOptions_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::ImageSequence::getReadOptions() function, expected prototype:\nosg::Referenced * osg::ImageSequence::getReadOptions()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::ImageSequence::getReadOptions(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->getReadOptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::ImageSequence::getReadOptions() const
	static int _bind_getReadOptions_overload_2(lua_State *L) {
		if (!_lg_typecheck_getReadOptions_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::ImageSequence::getReadOptions() const function, expected prototype:\nconst osg::Referenced * osg::ImageSequence::getReadOptions() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::ImageSequence::getReadOptions() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->getReadOptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ImageSequence::getReadOptions
	static int _bind_getReadOptions(lua_State *L) {
		if (_lg_typecheck_getReadOptions_overload_1(L)) return _bind_getReadOptions_overload_1(L);
		if (_lg_typecheck_getReadOptions_overload_2(L)) return _bind_getReadOptions_overload_2(L);

		luaL_error(L, "error in function getReadOptions, cannot match any of the overloads for function getReadOptions:\n  getReadOptions()\n  getReadOptions()\n");
		return 0;
	}

	// void osg::ImageSequence::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::ImageSequence::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageSequence::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::ImageSequence::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_setName(const std::string & name) function, expected prototype:\nvoid osg::ImageSequence::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageSequence::setName(name);

		return 0;
	}

	// void osg::ImageSequence::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_computeDataVariance() function, expected prototype:\nvoid osg::ImageSequence::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageSequence::computeDataVariance();

		return 0;
	}

	// void osg::ImageSequence::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::ImageSequence::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageSequence::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::ImageSequence::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::ImageSequence::base_getUserData() function, expected prototype:\nosg::Referenced * osg::ImageSequence::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::ImageSequence::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->ImageSequence::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::ImageSequence::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::ImageSequence::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::ImageSequence::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::ImageSequence::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->ImageSequence::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ImageSequence::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Array * osg::ImageSequence::base_asArray()
	static int _bind_base_asArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asArray_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Array * osg::ImageSequence::base_asArray() function, expected prototype:\nosg::Array * osg::ImageSequence::base_asArray()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Array * osg::ImageSequence::base_asArray(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Array * lret = self->ImageSequence::asArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// const osg::Array * osg::ImageSequence::base_asArray() const
	static int _bind_base_asArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asArray_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Array * osg::ImageSequence::base_asArray() const function, expected prototype:\nconst osg::Array * osg::ImageSequence::base_asArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Array * osg::ImageSequence::base_asArray() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Array * lret = self->ImageSequence::asArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ImageSequence::base_asArray
	static int _bind_base_asArray(lua_State *L) {
		if (_lg_typecheck_base_asArray_overload_1(L)) return _bind_base_asArray_overload_1(L);
		if (_lg_typecheck_base_asArray_overload_2(L)) return _bind_base_asArray_overload_2(L);

		luaL_error(L, "error in function base_asArray, cannot match any of the overloads for function base_asArray:\n  base_asArray()\n  base_asArray()\n");
		return 0;
	}

	// osg::PrimitiveSet * osg::ImageSequence::base_asPrimitiveSet()
	static int _bind_base_asPrimitiveSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asPrimitiveSet_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::PrimitiveSet * osg::ImageSequence::base_asPrimitiveSet() function, expected prototype:\nosg::PrimitiveSet * osg::ImageSequence::base_asPrimitiveSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::PrimitiveSet * osg::ImageSequence::base_asPrimitiveSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::PrimitiveSet * lret = self->ImageSequence::asPrimitiveSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PrimitiveSet >::push(L,lret,false);

		return 1;
	}

	// const osg::PrimitiveSet * osg::ImageSequence::base_asPrimitiveSet() const
	static int _bind_base_asPrimitiveSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asPrimitiveSet_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::PrimitiveSet * osg::ImageSequence::base_asPrimitiveSet() const function, expected prototype:\nconst osg::PrimitiveSet * osg::ImageSequence::base_asPrimitiveSet() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::PrimitiveSet * osg::ImageSequence::base_asPrimitiveSet() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::PrimitiveSet * lret = self->ImageSequence::asPrimitiveSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PrimitiveSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ImageSequence::base_asPrimitiveSet
	static int _bind_base_asPrimitiveSet(lua_State *L) {
		if (_lg_typecheck_base_asPrimitiveSet_overload_1(L)) return _bind_base_asPrimitiveSet_overload_1(L);
		if (_lg_typecheck_base_asPrimitiveSet_overload_2(L)) return _bind_base_asPrimitiveSet_overload_2(L);

		luaL_error(L, "error in function base_asPrimitiveSet, cannot match any of the overloads for function base_asPrimitiveSet:\n  base_asPrimitiveSet()\n  base_asPrimitiveSet()\n");
		return 0;
	}

	// void osg::ImageSequence::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::ImageSequence::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageSequence::releaseGLObjects(state);

		return 0;
	}

	// osg::Image * osg::ImageSequence::base_asImage()
	static int _bind_base_asImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osg::ImageSequence::base_asImage() function, expected prototype:\nosg::Image * osg::ImageSequence::base_asImage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osg::ImageSequence::base_asImage(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->ImageSequence::asImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::ImageSequence::base_asImage() const
	static int _bind_base_asImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::ImageSequence::base_asImage() const function, expected prototype:\nconst osg::Image * osg::ImageSequence::base_asImage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Image * osg::ImageSequence::base_asImage() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Image * lret = self->ImageSequence::asImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ImageSequence::base_asImage
	static int _bind_base_asImage(lua_State *L) {
		if (_lg_typecheck_base_asImage_overload_1(L)) return _bind_base_asImage_overload_1(L);
		if (_lg_typecheck_base_asImage_overload_2(L)) return _bind_base_asImage_overload_2(L);

		luaL_error(L, "error in function base_asImage, cannot match any of the overloads for function base_asImage:\n  base_asImage()\n  base_asImage()\n");
		return 0;
	}

	// const void * osg::ImageSequence::base_getDataPointer() const
	static int _bind_base_getDataPointer(lua_State *L) {
		if (!_lg_typecheck_base_getDataPointer(L)) {
			luaL_error(L, "luna typecheck failed in const void * osg::ImageSequence::base_getDataPointer() const function, expected prototype:\nconst void * osg::ImageSequence::base_getDataPointer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const void * osg::ImageSequence::base_getDataPointer() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const void * lret = self->ImageSequence::getDataPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::ImageSequence::base_getTotalDataSize() const
	static int _bind_base_getTotalDataSize(lua_State *L) {
		if (!_lg_typecheck_base_getTotalDataSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::ImageSequence::base_getTotalDataSize() const function, expected prototype:\nunsigned int osg::ImageSequence::base_getTotalDataSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::ImageSequence::base_getTotalDataSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->ImageSequence::getTotalDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageSequence::base_allocateImage(int s, int t, int r, unsigned int pixelFormat, unsigned int type, int packing = 1)
	static int _bind_base_allocateImage(lua_State *L) {
		if (!_lg_typecheck_base_allocateImage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_allocateImage(int s, int t, int r, unsigned int pixelFormat, unsigned int type, int packing = 1) function, expected prototype:\nvoid osg::ImageSequence::base_allocateImage(int s, int t, int r, unsigned int pixelFormat, unsigned int type, int packing = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int s=(int)lua_tointeger(L,2);
		int t=(int)lua_tointeger(L,3);
		int r=(int)lua_tointeger(L,4);
		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,5);
		unsigned int type=(unsigned int)lua_tointeger(L,6);
		int packing=luatop>6 ? (int)lua_tointeger(L,7) : (int)1;

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_allocateImage(int, int, int, unsigned int, unsigned int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageSequence::allocateImage(s, t, r, pixelFormat, type, packing);

		return 0;
	}

	// void osg::ImageSequence::base_readPixels(int x, int y, int width, int height, unsigned int pixelFormat, unsigned int type, int packing = 1)
	static int _bind_base_readPixels(lua_State *L) {
		if (!_lg_typecheck_base_readPixels(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_readPixels(int x, int y, int width, int height, unsigned int pixelFormat, unsigned int type, int packing = 1) function, expected prototype:\nvoid osg::ImageSequence::base_readPixels(int x, int y, int width, int height, unsigned int pixelFormat, unsigned int type, int packing = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,6);
		unsigned int type=(unsigned int)lua_tointeger(L,7);
		int packing=luatop>7 ? (int)lua_tointeger(L,8) : (int)1;

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_readPixels(int, int, int, int, unsigned int, unsigned int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageSequence::readPixels(x, y, width, height, pixelFormat, type, packing);

		return 0;
	}

	// void osg::ImageSequence::base_readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE, unsigned int face = 0)
	static int _bind_base_readImageFromCurrentTexture(lua_State *L) {
		if (!_lg_typecheck_base_readImageFromCurrentTexture(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE, unsigned int face = 0) function, expected prototype:\nvoid osg::ImageSequence::base_readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE, unsigned int face = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);
		bool copyMipMapsIfAvailable=(bool)(lua_toboolean(L,3)==1);
		unsigned int type=luatop>3 ? (unsigned int)lua_tointeger(L,4) : (unsigned int)GL_UNSIGNED_BYTE;
		unsigned int face=luatop>4 ? (unsigned int)lua_tointeger(L,5) : (unsigned int)0;

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_readImageFromCurrentTexture(unsigned int, bool, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageSequence::readImageFromCurrentTexture(contextID, copyMipMapsIfAvailable, type, face);

		return 0;
	}

	// void osg::ImageSequence::base_scaleImage(int s, int t, int r, unsigned int newDataType)
	static int _bind_base_scaleImage(lua_State *L) {
		if (!_lg_typecheck_base_scaleImage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_scaleImage(int s, int t, int r, unsigned int newDataType) function, expected prototype:\nvoid osg::ImageSequence::base_scaleImage(int s, int t, int r, unsigned int newDataType)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int s=(int)lua_tointeger(L,2);
		int t=(int)lua_tointeger(L,3);
		int r=(int)lua_tointeger(L,4);
		unsigned int newDataType=(unsigned int)lua_tointeger(L,5);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_scaleImage(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageSequence::scaleImage(s, t, r, newDataType);

		return 0;
	}

	// void osg::ImageSequence::base_copySubImage(int s_offset, int t_offset, int r_offset, const osg::Image * source)
	static int _bind_base_copySubImage(lua_State *L) {
		if (!_lg_typecheck_base_copySubImage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_copySubImage(int s_offset, int t_offset, int r_offset, const osg::Image * source) function, expected prototype:\nvoid osg::ImageSequence::base_copySubImage(int s_offset, int t_offset, int r_offset, const osg::Image * source)\nClass arguments details:\narg 4 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int s_offset=(int)lua_tointeger(L,2);
		int t_offset=(int)lua_tointeger(L,3);
		int r_offset=(int)lua_tointeger(L,4);
		const osg::Image* source=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,5));

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_copySubImage(int, int, int, const osg::Image *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageSequence::copySubImage(s_offset, t_offset, r_offset, source);

		return 0;
	}

	// bool osg::ImageSequence::base_isImageTranslucent() const
	static int _bind_base_isImageTranslucent(lua_State *L) {
		if (!_lg_typecheck_base_isImageTranslucent(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ImageSequence::base_isImageTranslucent() const function, expected prototype:\nbool osg::ImageSequence::base_isImageTranslucent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ImageSequence::base_isImageTranslucent() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ImageSequence::isImageTranslucent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ImageSequence::base_sendFocusHint(bool arg1)
	static int _bind_base_sendFocusHint(lua_State *L) {
		if (!_lg_typecheck_base_sendFocusHint(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ImageSequence::base_sendFocusHint(bool arg1) function, expected prototype:\nbool osg::ImageSequence::base_sendFocusHint(bool arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool _arg1=(bool)(lua_toboolean(L,2)==1);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ImageSequence::base_sendFocusHint(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ImageSequence::sendFocusHint(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ImageSequence::base_sendPointerEvent(int arg1, int arg2, int arg3)
	static int _bind_base_sendPointerEvent(lua_State *L) {
		if (!_lg_typecheck_base_sendPointerEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ImageSequence::base_sendPointerEvent(int arg1, int arg2, int arg3) function, expected prototype:\nbool osg::ImageSequence::base_sendPointerEvent(int arg1, int arg2, int arg3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int _arg1=(int)lua_tointeger(L,2);
		int _arg2=(int)lua_tointeger(L,3);
		int _arg3=(int)lua_tointeger(L,4);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ImageSequence::base_sendPointerEvent(int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ImageSequence::sendPointerEvent(_arg1, _arg2, _arg3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ImageSequence::base_sendKeyEvent(int arg1, bool arg2)
	static int _bind_base_sendKeyEvent(lua_State *L) {
		if (!_lg_typecheck_base_sendKeyEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ImageSequence::base_sendKeyEvent(int arg1, bool arg2) function, expected prototype:\nbool osg::ImageSequence::base_sendKeyEvent(int arg1, bool arg2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int _arg1=(int)lua_tointeger(L,2);
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ImageSequence::base_sendKeyEvent(int, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ImageSequence::sendKeyEvent(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ImageSequence::base_setFrameLastRendered(const osg::FrameStamp * arg1)
	static int _bind_base_setFrameLastRendered(lua_State *L) {
		if (!_lg_typecheck_base_setFrameLastRendered(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_setFrameLastRendered(const osg::FrameStamp * arg1) function, expected prototype:\nvoid osg::ImageSequence::base_setFrameLastRendered(const osg::FrameStamp * arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::FrameStamp* _arg1=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_setFrameLastRendered(const osg::FrameStamp *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageSequence::setFrameLastRendered(_arg1);

		return 0;
	}

	// void osg::ImageSequence::base_quit(bool arg1 = true)
	static int _bind_base_quit(lua_State *L) {
		if (!_lg_typecheck_base_quit(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_quit(bool arg1 = true) function, expected prototype:\nvoid osg::ImageSequence::base_quit(bool arg1 = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool _arg1=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_quit(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageSequence::quit(_arg1);

		return 0;
	}

	// double osg::ImageSequence::base_getCreationTime() const
	static int _bind_base_getCreationTime(lua_State *L) {
		if (!_lg_typecheck_base_getCreationTime(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ImageSequence::base_getCreationTime() const function, expected prototype:\ndouble osg::ImageSequence::base_getCreationTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ImageSequence::base_getCreationTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->ImageSequence::getCreationTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::ImageSequence::base_getFrameRate() const
	static int _bind_base_getFrameRate(lua_State *L) {
		if (!_lg_typecheck_base_getFrameRate(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ImageSequence::base_getFrameRate() const function, expected prototype:\ndouble osg::ImageSequence::base_getFrameRate() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ImageSequence::base_getFrameRate() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->ImageSequence::getFrameRate();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::ImageSequence::base_getCurrentTime() const
	static int _bind_base_getCurrentTime(lua_State *L) {
		if (!_lg_typecheck_base_getCurrentTime(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ImageSequence::base_getCurrentTime() const function, expected prototype:\ndouble osg::ImageSequence::base_getCurrentTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ImageSequence::base_getCurrentTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->ImageSequence::getCurrentTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageSequence::base_setVolume(float arg1)
	static int _bind_base_setVolume(lua_State *L) {
		if (!_lg_typecheck_base_setVolume(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_setVolume(float arg1) function, expected prototype:\nvoid osg::ImageSequence::base_setVolume(float arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float _arg1=(float)lua_tonumber(L,2);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_setVolume(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageSequence::setVolume(_arg1);

		return 0;
	}

	// float osg::ImageSequence::base_getVolume() const
	static int _bind_base_getVolume(lua_State *L) {
		if (!_lg_typecheck_base_getVolume(L)) {
			luaL_error(L, "luna typecheck failed in float osg::ImageSequence::base_getVolume() const function, expected prototype:\nfloat osg::ImageSequence::base_getVolume() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::ImageSequence::base_getVolume() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->ImageSequence::getVolume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::ImageSequence::base_getAudioBalance()
	static int _bind_base_getAudioBalance(lua_State *L) {
		if (!_lg_typecheck_base_getAudioBalance(L)) {
			luaL_error(L, "luna typecheck failed in float osg::ImageSequence::base_getAudioBalance() function, expected prototype:\nfloat osg::ImageSequence::base_getAudioBalance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::ImageSequence::base_getAudioBalance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->ImageSequence::getAudioBalance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageSequence::base_setAudioBalance(float b)
	static int _bind_base_setAudioBalance(lua_State *L) {
		if (!_lg_typecheck_base_setAudioBalance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_setAudioBalance(float b) function, expected prototype:\nvoid osg::ImageSequence::base_setAudioBalance(float b)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float b=(float)lua_tonumber(L,2);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_setAudioBalance(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageSequence::setAudioBalance(b);

		return 0;
	}

	// osg::Texture * osg::ImageSequence::base_createSuitableTexture()
	static int _bind_base_createSuitableTexture(lua_State *L) {
		if (!_lg_typecheck_base_createSuitableTexture(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::ImageSequence::base_createSuitableTexture() function, expected prototype:\nosg::Texture * osg::ImageSequence::base_createSuitableTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::ImageSequence::base_createSuitableTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->ImageSequence::createSuitableTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ImageSequence::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ImageSequence::base_cloneType() const function, expected prototype:\nosg::Object * osg::ImageSequence::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ImageSequence::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ImageSequence::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ImageSequence::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ImageSequence::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ImageSequence::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ImageSequence::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ImageSequence::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ImageSequence::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ImageSequence::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ImageSequence::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ImageSequence::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ImageSequence::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ImageSequence::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ImageSequence::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ImageSequence::base_libraryName() const function, expected prototype:\nconst char * osg::ImageSequence::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ImageSequence::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ImageSequence::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ImageSequence::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ImageSequence::base_className() const function, expected prototype:\nconst char * osg::ImageSequence::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ImageSequence::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ImageSequence::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// int osg::ImageSequence::base_compare(const osg::Image & rhs) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::ImageSequence::base_compare(const osg::Image & rhs) const function, expected prototype:\nint osg::ImageSequence::base_compare(const osg::Image & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Image* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::ImageSequence::base_compare function");
		}
		const osg::Image & rhs=*rhs_ptr;

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::ImageSequence::base_compare(const osg::Image &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ImageSequence::compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageSequence::base_setReferenceTime(double t)
	static int _bind_base_setReferenceTime(lua_State *L) {
		if (!_lg_typecheck_base_setReferenceTime(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_setReferenceTime(double t) function, expected prototype:\nvoid osg::ImageSequence::base_setReferenceTime(double t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_setReferenceTime(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageSequence::setReferenceTime(t);

		return 0;
	}

	// double osg::ImageSequence::base_getReferenceTime() const
	static int _bind_base_getReferenceTime(lua_State *L) {
		if (!_lg_typecheck_base_getReferenceTime(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ImageSequence::base_getReferenceTime() const function, expected prototype:\ndouble osg::ImageSequence::base_getReferenceTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ImageSequence::base_getReferenceTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->ImageSequence::getReferenceTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageSequence::base_setTimeMultiplier(double tm)
	static int _bind_base_setTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_base_setTimeMultiplier(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_setTimeMultiplier(double tm) function, expected prototype:\nvoid osg::ImageSequence::base_setTimeMultiplier(double tm)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double tm=(double)lua_tonumber(L,2);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_setTimeMultiplier(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageSequence::setTimeMultiplier(tm);

		return 0;
	}

	// double osg::ImageSequence::base_getTimeMultiplier() const
	static int _bind_base_getTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_base_getTimeMultiplier(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ImageSequence::base_getTimeMultiplier() const function, expected prototype:\ndouble osg::ImageSequence::base_getTimeMultiplier() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ImageSequence::base_getTimeMultiplier() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->ImageSequence::getTimeMultiplier();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageSequence::base_seek(double time)
	static int _bind_base_seek(lua_State *L) {
		if (!_lg_typecheck_base_seek(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_seek(double time) function, expected prototype:\nvoid osg::ImageSequence::base_seek(double time)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double time=(double)lua_tonumber(L,2);

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_seek(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageSequence::seek(time);

		return 0;
	}

	// void osg::ImageSequence::base_play()
	static int _bind_base_play(lua_State *L) {
		if (!_lg_typecheck_base_play(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_play() function, expected prototype:\nvoid osg::ImageSequence::base_play()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_play(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageSequence::play();

		return 0;
	}

	// void osg::ImageSequence::base_pause()
	static int _bind_base_pause(lua_State *L) {
		if (!_lg_typecheck_base_pause(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_pause() function, expected prototype:\nvoid osg::ImageSequence::base_pause()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_pause(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageSequence::pause();

		return 0;
	}

	// void osg::ImageSequence::base_rewind()
	static int _bind_base_rewind(lua_State *L) {
		if (!_lg_typecheck_base_rewind(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_rewind() function, expected prototype:\nvoid osg::ImageSequence::base_rewind()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_rewind(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageSequence::rewind();

		return 0;
	}

	// double osg::ImageSequence::base_getLength() const
	static int _bind_base_getLength(lua_State *L) {
		if (!_lg_typecheck_base_getLength(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ImageSequence::base_getLength() const function, expected prototype:\ndouble osg::ImageSequence::base_getLength() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ImageSequence::base_getLength() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->ImageSequence::getLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::ImageSequence::base_requiresUpdateCall() const
	static int _bind_base_requiresUpdateCall(lua_State *L) {
		if (!_lg_typecheck_base_requiresUpdateCall(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ImageSequence::base_requiresUpdateCall() const function, expected prototype:\nbool osg::ImageSequence::base_requiresUpdateCall() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ImageSequence::base_requiresUpdateCall() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ImageSequence::requiresUpdateCall();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ImageSequence::base_update(osg::NodeVisitor * nv)
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageSequence::base_update(osg::NodeVisitor * nv) function, expected prototype:\nvoid osg::ImageSequence::base_update(osg::NodeVisitor * nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));

		osg::ImageSequence* self=Luna< osg::Referenced >::checkSubType< osg::ImageSequence >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageSequence::base_update(osg::NodeVisitor *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageSequence::update(nv);

		return 0;
	}


	// Operator binds:

};

osg::ImageSequence* LunaTraits< osg::ImageSequence >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ImageSequence::_bind_ctor(L);
}

void LunaTraits< osg::ImageSequence >::_bind_dtor(osg::ImageSequence* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ImageSequence >::className[] = "ImageSequence";
const char LunaTraits< osg::ImageSequence >::fullName[] = "osg::ImageSequence";
const char LunaTraits< osg::ImageSequence >::moduleName[] = "osg";
const char* LunaTraits< osg::ImageSequence >::parents[] = {"osg.ImageStream", 0};
const int LunaTraits< osg::ImageSequence >::hash = 25896036;
const int LunaTraits< osg::ImageSequence >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ImageSequence >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ImageSequence::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ImageSequence::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ImageSequence::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ImageSequence::_bind_libraryName},
	{"className", &luna_wrapper_osg_ImageSequence::_bind_className},
	{"compare", &luna_wrapper_osg_ImageSequence::_bind_compare},
	{"setReferenceTime", &luna_wrapper_osg_ImageSequence::_bind_setReferenceTime},
	{"getReferenceTime", &luna_wrapper_osg_ImageSequence::_bind_getReferenceTime},
	{"setTimeMultiplier", &luna_wrapper_osg_ImageSequence::_bind_setTimeMultiplier},
	{"getTimeMultiplier", &luna_wrapper_osg_ImageSequence::_bind_getTimeMultiplier},
	{"seek", &luna_wrapper_osg_ImageSequence::_bind_seek},
	{"play", &luna_wrapper_osg_ImageSequence::_bind_play},
	{"pause", &luna_wrapper_osg_ImageSequence::_bind_pause},
	{"rewind", &luna_wrapper_osg_ImageSequence::_bind_rewind},
	{"setMode", &luna_wrapper_osg_ImageSequence::_bind_setMode},
	{"getMode", &luna_wrapper_osg_ImageSequence::_bind_getMode},
	{"setLength", &luna_wrapper_osg_ImageSequence::_bind_setLength},
	{"getLength", &luna_wrapper_osg_ImageSequence::_bind_getLength},
	{"addImageFile", &luna_wrapper_osg_ImageSequence::_bind_addImageFile},
	{"setImageFile", &luna_wrapper_osg_ImageSequence::_bind_setImageFile},
	{"getImageFile", &luna_wrapper_osg_ImageSequence::_bind_getImageFile},
	{"addImage", &luna_wrapper_osg_ImageSequence::_bind_addImage},
	{"setImage", &luna_wrapper_osg_ImageSequence::_bind_setImage},
	{"getImage", &luna_wrapper_osg_ImageSequence::_bind_getImage},
	{"getNumImageData", &luna_wrapper_osg_ImageSequence::_bind_getNumImageData},
	{"getImageDataList", &luna_wrapper_osg_ImageSequence::_bind_getImageDataList},
	{"requiresUpdateCall", &luna_wrapper_osg_ImageSequence::_bind_requiresUpdateCall},
	{"update", &luna_wrapper_osg_ImageSequence::_bind_update},
	{"setReadOptions", &luna_wrapper_osg_ImageSequence::_bind_setReadOptions},
	{"getReadOptions", &luna_wrapper_osg_ImageSequence::_bind_getReadOptions},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_ImageSequence::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_ImageSequence::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_ImageSequence::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_ImageSequence::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_ImageSequence::_bind_base_getUserData},
	{"base_asArray", &luna_wrapper_osg_ImageSequence::_bind_base_asArray},
	{"base_asPrimitiveSet", &luna_wrapper_osg_ImageSequence::_bind_base_asPrimitiveSet},
	{"base_releaseGLObjects", &luna_wrapper_osg_ImageSequence::_bind_base_releaseGLObjects},
	{"base_asImage", &luna_wrapper_osg_ImageSequence::_bind_base_asImage},
	{"base_getDataPointer", &luna_wrapper_osg_ImageSequence::_bind_base_getDataPointer},
	{"base_getTotalDataSize", &luna_wrapper_osg_ImageSequence::_bind_base_getTotalDataSize},
	{"base_allocateImage", &luna_wrapper_osg_ImageSequence::_bind_base_allocateImage},
	{"base_readPixels", &luna_wrapper_osg_ImageSequence::_bind_base_readPixels},
	{"base_readImageFromCurrentTexture", &luna_wrapper_osg_ImageSequence::_bind_base_readImageFromCurrentTexture},
	{"base_scaleImage", &luna_wrapper_osg_ImageSequence::_bind_base_scaleImage},
	{"base_copySubImage", &luna_wrapper_osg_ImageSequence::_bind_base_copySubImage},
	{"base_isImageTranslucent", &luna_wrapper_osg_ImageSequence::_bind_base_isImageTranslucent},
	{"base_sendFocusHint", &luna_wrapper_osg_ImageSequence::_bind_base_sendFocusHint},
	{"base_sendPointerEvent", &luna_wrapper_osg_ImageSequence::_bind_base_sendPointerEvent},
	{"base_sendKeyEvent", &luna_wrapper_osg_ImageSequence::_bind_base_sendKeyEvent},
	{"base_setFrameLastRendered", &luna_wrapper_osg_ImageSequence::_bind_base_setFrameLastRendered},
	{"base_quit", &luna_wrapper_osg_ImageSequence::_bind_base_quit},
	{"base_getCreationTime", &luna_wrapper_osg_ImageSequence::_bind_base_getCreationTime},
	{"base_getFrameRate", &luna_wrapper_osg_ImageSequence::_bind_base_getFrameRate},
	{"base_getCurrentTime", &luna_wrapper_osg_ImageSequence::_bind_base_getCurrentTime},
	{"base_setVolume", &luna_wrapper_osg_ImageSequence::_bind_base_setVolume},
	{"base_getVolume", &luna_wrapper_osg_ImageSequence::_bind_base_getVolume},
	{"base_getAudioBalance", &luna_wrapper_osg_ImageSequence::_bind_base_getAudioBalance},
	{"base_setAudioBalance", &luna_wrapper_osg_ImageSequence::_bind_base_setAudioBalance},
	{"base_createSuitableTexture", &luna_wrapper_osg_ImageSequence::_bind_base_createSuitableTexture},
	{"base_cloneType", &luna_wrapper_osg_ImageSequence::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_ImageSequence::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_ImageSequence::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_ImageSequence::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_ImageSequence::_bind_base_className},
	{"base_compare", &luna_wrapper_osg_ImageSequence::_bind_base_compare},
	{"base_setReferenceTime", &luna_wrapper_osg_ImageSequence::_bind_base_setReferenceTime},
	{"base_getReferenceTime", &luna_wrapper_osg_ImageSequence::_bind_base_getReferenceTime},
	{"base_setTimeMultiplier", &luna_wrapper_osg_ImageSequence::_bind_base_setTimeMultiplier},
	{"base_getTimeMultiplier", &luna_wrapper_osg_ImageSequence::_bind_base_getTimeMultiplier},
	{"base_seek", &luna_wrapper_osg_ImageSequence::_bind_base_seek},
	{"base_play", &luna_wrapper_osg_ImageSequence::_bind_base_play},
	{"base_pause", &luna_wrapper_osg_ImageSequence::_bind_base_pause},
	{"base_rewind", &luna_wrapper_osg_ImageSequence::_bind_base_rewind},
	{"base_getLength", &luna_wrapper_osg_ImageSequence::_bind_base_getLength},
	{"base_requiresUpdateCall", &luna_wrapper_osg_ImageSequence::_bind_base_requiresUpdateCall},
	{"base_update", &luna_wrapper_osg_ImageSequence::_bind_base_update},
	{"fromVoid", &luna_wrapper_osg_ImageSequence::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ImageSequence::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_ImageSequence::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ImageSequence >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ImageSequence::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ImageSequence >::enumValues[] = {
	{"PRE_LOAD_ALL_IMAGES", osg::ImageSequence::PRE_LOAD_ALL_IMAGES},
	{"PAGE_AND_RETAIN_IMAGES", osg::ImageSequence::PAGE_AND_RETAIN_IMAGES},
	{"PAGE_AND_DISCARD_USED_IMAGES", osg::ImageSequence::PAGE_AND_DISCARD_USED_IMAGES},
	{"LOAD_AND_RETAIN_IN_UPDATE_TRAVERSAL", osg::ImageSequence::LOAD_AND_RETAIN_IN_UPDATE_TRAVERSAL},
	{"LOAD_AND_DISCARD_IN_UPDATE_TRAVERSAL", osg::ImageSequence::LOAD_AND_DISCARD_IN_UPDATE_TRAVERSAL},
	{0,0}
};


