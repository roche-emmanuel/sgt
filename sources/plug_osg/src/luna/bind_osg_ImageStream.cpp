#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ImageStream.h>

class luna_wrapper_osg_ImageStream {
public:
	typedef Luna< osg::ImageStream > luna_t;

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

		osg::ImageStream* self= (osg::ImageStream*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ImageStream >::push(L,self,false);
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
		//osg::ImageStream* ptr= dynamic_cast< osg::ImageStream* >(Luna< osg::Referenced >::check(L,1));
		osg::ImageStream* ptr= luna_caster< osg::Referenced, osg::ImageStream >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ImageStream >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_quit(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStatus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLoopingMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLoopingMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCreationTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrameRate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_setVolume(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVolume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAudioBalance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAudioBalance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAudioStreams(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,64675596) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAudioStreams_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAudioStreams_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_createSuitableTexture(lua_State *L) {
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

	inline static bool _lg_typecheck_base_getLength(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ImageStream::ImageStream()
	static osg::ImageStream* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ImageStream::ImageStream() function, expected prototype:\nosg::ImageStream::ImageStream()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::ImageStream();
	}

	// osg::ImageStream::ImageStream(const osg::ImageStream & image, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ImageStream* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ImageStream::ImageStream(const osg::ImageStream & image, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ImageStream::ImageStream(const osg::ImageStream & image, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::ImageStream* image_ptr=(Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1));
		if( !image_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg image in osg::ImageStream::ImageStream function");
		}
		const osg::ImageStream & image=*image_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ImageStream::ImageStream function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::ImageStream(image, copyop);
	}

	// osg::ImageStream::ImageStream(lua_Table * data)
	static osg::ImageStream* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::ImageStream::ImageStream(lua_Table * data) function, expected prototype:\nosg::ImageStream::ImageStream(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_ImageStream(L,NULL);
	}

	// osg::ImageStream::ImageStream(lua_Table * data, const osg::ImageStream & image, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ImageStream* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::ImageStream::ImageStream(lua_Table * data, const osg::ImageStream & image, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ImageStream::ImageStream(lua_Table * data, const osg::ImageStream & image, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::ImageStream* image_ptr=(Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,2));
		if( !image_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg image in osg::ImageStream::ImageStream function");
		}
		const osg::ImageStream & image=*image_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ImageStream::ImageStream function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_ImageStream(L,NULL, image, copyop);
	}

	// Overload binder for osg::ImageStream::ImageStream
	static osg::ImageStream* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ImageStream, cannot match any of the overloads for function ImageStream:\n  ImageStream()\n  ImageStream(const osg::ImageStream &, const osg::CopyOp &)\n  ImageStream(lua_Table *)\n  ImageStream(lua_Table *, const osg::ImageStream &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ImageStream::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ImageStream::cloneType() const function, expected prototype:\nosg::Object * osg::ImageStream::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ImageStream::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ImageStream::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ImageStream::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ImageStream::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ImageStream::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ImageStream::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ImageStream::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ImageStream::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ImageStream::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ImageStream::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ImageStream::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ImageStream::libraryName() const function, expected prototype:\nconst char * osg::ImageStream::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ImageStream::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ImageStream::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ImageStream::className() const function, expected prototype:\nconst char * osg::ImageStream::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ImageStream::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// int osg::ImageStream::compare(const osg::Image & rhs) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::ImageStream::compare(const osg::Image & rhs) const function, expected prototype:\nint osg::ImageStream::compare(const osg::Image & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Image* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::ImageStream::compare function");
		}
		const osg::Image & rhs=*rhs_ptr;

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::ImageStream::compare(const osg::Image &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::seek(double arg1)
	static int _bind_seek(lua_State *L) {
		if (!_lg_typecheck_seek(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::seek(double arg1) function, expected prototype:\nvoid osg::ImageStream::seek(double arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double _arg1=(double)lua_tonumber(L,2);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::seek(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->seek(_arg1);

		return 0;
	}

	// void osg::ImageStream::play()
	static int _bind_play(lua_State *L) {
		if (!_lg_typecheck_play(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::play() function, expected prototype:\nvoid osg::ImageStream::play()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::play(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->play();

		return 0;
	}

	// void osg::ImageStream::pause()
	static int _bind_pause(lua_State *L) {
		if (!_lg_typecheck_pause(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::pause() function, expected prototype:\nvoid osg::ImageStream::pause()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::pause(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pause();

		return 0;
	}

	// void osg::ImageStream::rewind()
	static int _bind_rewind(lua_State *L) {
		if (!_lg_typecheck_rewind(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::rewind() function, expected prototype:\nvoid osg::ImageStream::rewind()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::rewind(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->rewind();

		return 0;
	}

	// void osg::ImageStream::quit(bool arg1 = true)
	static int _bind_quit(lua_State *L) {
		if (!_lg_typecheck_quit(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::quit(bool arg1 = true) function, expected prototype:\nvoid osg::ImageStream::quit(bool arg1 = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool _arg1=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::quit(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->quit(_arg1);

		return 0;
	}

	// osg::ImageStream::StreamStatus osg::ImageStream::getStatus() const
	static int _bind_getStatus(lua_State *L) {
		if (!_lg_typecheck_getStatus(L)) {
			luaL_error(L, "luna typecheck failed in osg::ImageStream::StreamStatus osg::ImageStream::getStatus() const function, expected prototype:\nosg::ImageStream::StreamStatus osg::ImageStream::getStatus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ImageStream::StreamStatus osg::ImageStream::getStatus() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ImageStream::StreamStatus lret = self->getStatus();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::setLoopingMode(osg::ImageStream::LoopingMode mode)
	static int _bind_setLoopingMode(lua_State *L) {
		if (!_lg_typecheck_setLoopingMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::setLoopingMode(osg::ImageStream::LoopingMode mode) function, expected prototype:\nvoid osg::ImageStream::setLoopingMode(osg::ImageStream::LoopingMode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ImageStream::LoopingMode mode=(osg::ImageStream::LoopingMode)lua_tointeger(L,2);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::setLoopingMode(osg::ImageStream::LoopingMode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLoopingMode(mode);

		return 0;
	}

	// osg::ImageStream::LoopingMode osg::ImageStream::getLoopingMode() const
	static int _bind_getLoopingMode(lua_State *L) {
		if (!_lg_typecheck_getLoopingMode(L)) {
			luaL_error(L, "luna typecheck failed in osg::ImageStream::LoopingMode osg::ImageStream::getLoopingMode() const function, expected prototype:\nosg::ImageStream::LoopingMode osg::ImageStream::getLoopingMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ImageStream::LoopingMode osg::ImageStream::getLoopingMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ImageStream::LoopingMode lret = self->getLoopingMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::ImageStream::getCreationTime() const
	static int _bind_getCreationTime(lua_State *L) {
		if (!_lg_typecheck_getCreationTime(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::getCreationTime() const function, expected prototype:\ndouble osg::ImageStream::getCreationTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ImageStream::getCreationTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getCreationTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::ImageStream::getLength() const
	static int _bind_getLength(lua_State *L) {
		if (!_lg_typecheck_getLength(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::getLength() const function, expected prototype:\ndouble osg::ImageStream::getLength() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ImageStream::getLength() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::ImageStream::getFrameRate() const
	static int _bind_getFrameRate(lua_State *L) {
		if (!_lg_typecheck_getFrameRate(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::getFrameRate() const function, expected prototype:\ndouble osg::ImageStream::getFrameRate() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ImageStream::getFrameRate() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getFrameRate();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::ImageStream::getCurrentTime() const
	static int _bind_getCurrentTime(lua_State *L) {
		if (!_lg_typecheck_getCurrentTime(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::getCurrentTime() const function, expected prototype:\ndouble osg::ImageStream::getCurrentTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ImageStream::getCurrentTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getCurrentTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::setReferenceTime(double arg1)
	static int _bind_setReferenceTime(lua_State *L) {
		if (!_lg_typecheck_setReferenceTime(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::setReferenceTime(double arg1) function, expected prototype:\nvoid osg::ImageStream::setReferenceTime(double arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double _arg1=(double)lua_tonumber(L,2);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::setReferenceTime(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setReferenceTime(_arg1);

		return 0;
	}

	// double osg::ImageStream::getReferenceTime() const
	static int _bind_getReferenceTime(lua_State *L) {
		if (!_lg_typecheck_getReferenceTime(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::getReferenceTime() const function, expected prototype:\ndouble osg::ImageStream::getReferenceTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ImageStream::getReferenceTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getReferenceTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::setTimeMultiplier(double arg1)
	static int _bind_setTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_setTimeMultiplier(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::setTimeMultiplier(double arg1) function, expected prototype:\nvoid osg::ImageStream::setTimeMultiplier(double arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double _arg1=(double)lua_tonumber(L,2);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::setTimeMultiplier(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTimeMultiplier(_arg1);

		return 0;
	}

	// double osg::ImageStream::getTimeMultiplier() const
	static int _bind_getTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_getTimeMultiplier(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::getTimeMultiplier() const function, expected prototype:\ndouble osg::ImageStream::getTimeMultiplier() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ImageStream::getTimeMultiplier() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getTimeMultiplier();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::setVolume(float arg1)
	static int _bind_setVolume(lua_State *L) {
		if (!_lg_typecheck_setVolume(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::setVolume(float arg1) function, expected prototype:\nvoid osg::ImageStream::setVolume(float arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float _arg1=(float)lua_tonumber(L,2);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::setVolume(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVolume(_arg1);

		return 0;
	}

	// float osg::ImageStream::getVolume() const
	static int _bind_getVolume(lua_State *L) {
		if (!_lg_typecheck_getVolume(L)) {
			luaL_error(L, "luna typecheck failed in float osg::ImageStream::getVolume() const function, expected prototype:\nfloat osg::ImageStream::getVolume() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::ImageStream::getVolume() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getVolume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::ImageStream::getAudioBalance()
	static int _bind_getAudioBalance(lua_State *L) {
		if (!_lg_typecheck_getAudioBalance(L)) {
			luaL_error(L, "luna typecheck failed in float osg::ImageStream::getAudioBalance() function, expected prototype:\nfloat osg::ImageStream::getAudioBalance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::ImageStream::getAudioBalance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getAudioBalance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::setAudioBalance(float b)
	static int _bind_setAudioBalance(lua_State *L) {
		if (!_lg_typecheck_setAudioBalance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::setAudioBalance(float b) function, expected prototype:\nvoid osg::ImageStream::setAudioBalance(float b)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float b=(float)lua_tonumber(L,2);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::setAudioBalance(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAudioBalance(b);

		return 0;
	}

	// void osg::ImageStream::setAudioStreams(const osg::ImageStream::AudioStreams & asl)
	static int _bind_setAudioStreams(lua_State *L) {
		if (!_lg_typecheck_setAudioStreams(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::setAudioStreams(const osg::ImageStream::AudioStreams & asl) function, expected prototype:\nvoid osg::ImageStream::setAudioStreams(const osg::ImageStream::AudioStreams & asl)\nClass arguments details:\narg 1 ID = 83757031\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::ImageStream::AudioStreams* asl_ptr=(Luna< std::vector< osg::ref_ptr< osg::AudioStream > > >::checkSubType< osg::ImageStream::AudioStreams >(L,2));
		if( !asl_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg asl in osg::ImageStream::setAudioStreams function");
		}
		const osg::ImageStream::AudioStreams & asl=*asl_ptr;

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::setAudioStreams(const osg::ImageStream::AudioStreams &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAudioStreams(asl);

		return 0;
	}

	// osg::ImageStream::AudioStreams & osg::ImageStream::getAudioStreams()
	static int _bind_getAudioStreams_overload_1(lua_State *L) {
		if (!_lg_typecheck_getAudioStreams_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ImageStream::AudioStreams & osg::ImageStream::getAudioStreams() function, expected prototype:\nosg::ImageStream::AudioStreams & osg::ImageStream::getAudioStreams()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ImageStream::AudioStreams & osg::ImageStream::getAudioStreams(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ImageStream::AudioStreams* lret = &self->getAudioStreams();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ImageStream::AudioStreams >::push(L,lret,false);

		return 1;
	}

	// const osg::ImageStream::AudioStreams & osg::ImageStream::getAudioStreams() const
	static int _bind_getAudioStreams_overload_2(lua_State *L) {
		if (!_lg_typecheck_getAudioStreams_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::ImageStream::AudioStreams & osg::ImageStream::getAudioStreams() const function, expected prototype:\nconst osg::ImageStream::AudioStreams & osg::ImageStream::getAudioStreams() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::ImageStream::AudioStreams & osg::ImageStream::getAudioStreams() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ImageStream::AudioStreams* lret = &self->getAudioStreams();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ImageStream::AudioStreams >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ImageStream::getAudioStreams
	static int _bind_getAudioStreams(lua_State *L) {
		if (_lg_typecheck_getAudioStreams_overload_1(L)) return _bind_getAudioStreams_overload_1(L);
		if (_lg_typecheck_getAudioStreams_overload_2(L)) return _bind_getAudioStreams_overload_2(L);

		luaL_error(L, "error in function getAudioStreams, cannot match any of the overloads for function getAudioStreams:\n  getAudioStreams()\n  getAudioStreams()\n");
		return 0;
	}

	// osg::Texture * osg::ImageStream::createSuitableTexture()
	static int _bind_createSuitableTexture(lua_State *L) {
		if (!_lg_typecheck_createSuitableTexture(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::ImageStream::createSuitableTexture() function, expected prototype:\nosg::Texture * osg::ImageStream::createSuitableTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::ImageStream::createSuitableTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->createSuitableTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// void osg::ImageStream::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::ImageStream::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageStream::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::ImageStream::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_setName(const std::string & name) function, expected prototype:\nvoid osg::ImageStream::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageStream::setName(name);

		return 0;
	}

	// void osg::ImageStream::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_computeDataVariance() function, expected prototype:\nvoid osg::ImageStream::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageStream::computeDataVariance();

		return 0;
	}

	// void osg::ImageStream::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::ImageStream::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageStream::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::ImageStream::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::ImageStream::base_getUserData() function, expected prototype:\nosg::Referenced * osg::ImageStream::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::ImageStream::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->ImageStream::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::ImageStream::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::ImageStream::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::ImageStream::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::ImageStream::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->ImageStream::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ImageStream::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Array * osg::ImageStream::base_asArray()
	static int _bind_base_asArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asArray_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Array * osg::ImageStream::base_asArray() function, expected prototype:\nosg::Array * osg::ImageStream::base_asArray()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Array * osg::ImageStream::base_asArray(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Array * lret = self->ImageStream::asArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// const osg::Array * osg::ImageStream::base_asArray() const
	static int _bind_base_asArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asArray_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Array * osg::ImageStream::base_asArray() const function, expected prototype:\nconst osg::Array * osg::ImageStream::base_asArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Array * osg::ImageStream::base_asArray() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Array * lret = self->ImageStream::asArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ImageStream::base_asArray
	static int _bind_base_asArray(lua_State *L) {
		if (_lg_typecheck_base_asArray_overload_1(L)) return _bind_base_asArray_overload_1(L);
		if (_lg_typecheck_base_asArray_overload_2(L)) return _bind_base_asArray_overload_2(L);

		luaL_error(L, "error in function base_asArray, cannot match any of the overloads for function base_asArray:\n  base_asArray()\n  base_asArray()\n");
		return 0;
	}

	// osg::PrimitiveSet * osg::ImageStream::base_asPrimitiveSet()
	static int _bind_base_asPrimitiveSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asPrimitiveSet_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::PrimitiveSet * osg::ImageStream::base_asPrimitiveSet() function, expected prototype:\nosg::PrimitiveSet * osg::ImageStream::base_asPrimitiveSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::PrimitiveSet * osg::ImageStream::base_asPrimitiveSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::PrimitiveSet * lret = self->ImageStream::asPrimitiveSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PrimitiveSet >::push(L,lret,false);

		return 1;
	}

	// const osg::PrimitiveSet * osg::ImageStream::base_asPrimitiveSet() const
	static int _bind_base_asPrimitiveSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asPrimitiveSet_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::PrimitiveSet * osg::ImageStream::base_asPrimitiveSet() const function, expected prototype:\nconst osg::PrimitiveSet * osg::ImageStream::base_asPrimitiveSet() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::PrimitiveSet * osg::ImageStream::base_asPrimitiveSet() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::PrimitiveSet * lret = self->ImageStream::asPrimitiveSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PrimitiveSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ImageStream::base_asPrimitiveSet
	static int _bind_base_asPrimitiveSet(lua_State *L) {
		if (_lg_typecheck_base_asPrimitiveSet_overload_1(L)) return _bind_base_asPrimitiveSet_overload_1(L);
		if (_lg_typecheck_base_asPrimitiveSet_overload_2(L)) return _bind_base_asPrimitiveSet_overload_2(L);

		luaL_error(L, "error in function base_asPrimitiveSet, cannot match any of the overloads for function base_asPrimitiveSet:\n  base_asPrimitiveSet()\n  base_asPrimitiveSet()\n");
		return 0;
	}

	// void osg::ImageStream::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::ImageStream::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageStream::releaseGLObjects(state);

		return 0;
	}

	// osg::Image * osg::ImageStream::base_asImage()
	static int _bind_base_asImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osg::ImageStream::base_asImage() function, expected prototype:\nosg::Image * osg::ImageStream::base_asImage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osg::ImageStream::base_asImage(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->ImageStream::asImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::ImageStream::base_asImage() const
	static int _bind_base_asImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::ImageStream::base_asImage() const function, expected prototype:\nconst osg::Image * osg::ImageStream::base_asImage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Image * osg::ImageStream::base_asImage() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Image * lret = self->ImageStream::asImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ImageStream::base_asImage
	static int _bind_base_asImage(lua_State *L) {
		if (_lg_typecheck_base_asImage_overload_1(L)) return _bind_base_asImage_overload_1(L);
		if (_lg_typecheck_base_asImage_overload_2(L)) return _bind_base_asImage_overload_2(L);

		luaL_error(L, "error in function base_asImage, cannot match any of the overloads for function base_asImage:\n  base_asImage()\n  base_asImage()\n");
		return 0;
	}

	// const void * osg::ImageStream::base_getDataPointer() const
	static int _bind_base_getDataPointer(lua_State *L) {
		if (!_lg_typecheck_base_getDataPointer(L)) {
			luaL_error(L, "luna typecheck failed in const void * osg::ImageStream::base_getDataPointer() const function, expected prototype:\nconst void * osg::ImageStream::base_getDataPointer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const void * osg::ImageStream::base_getDataPointer() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const void * lret = self->ImageStream::getDataPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::ImageStream::base_getTotalDataSize() const
	static int _bind_base_getTotalDataSize(lua_State *L) {
		if (!_lg_typecheck_base_getTotalDataSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::ImageStream::base_getTotalDataSize() const function, expected prototype:\nunsigned int osg::ImageStream::base_getTotalDataSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::ImageStream::base_getTotalDataSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->ImageStream::getTotalDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::base_allocateImage(int s, int t, int r, unsigned int pixelFormat, unsigned int type, int packing = 1)
	static int _bind_base_allocateImage(lua_State *L) {
		if (!_lg_typecheck_base_allocateImage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_allocateImage(int s, int t, int r, unsigned int pixelFormat, unsigned int type, int packing = 1) function, expected prototype:\nvoid osg::ImageStream::base_allocateImage(int s, int t, int r, unsigned int pixelFormat, unsigned int type, int packing = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int s=(int)lua_tointeger(L,2);
		int t=(int)lua_tointeger(L,3);
		int r=(int)lua_tointeger(L,4);
		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,5);
		unsigned int type=(unsigned int)lua_tointeger(L,6);
		int packing=luatop>6 ? (int)lua_tointeger(L,7) : (int)1;

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_allocateImage(int, int, int, unsigned int, unsigned int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageStream::allocateImage(s, t, r, pixelFormat, type, packing);

		return 0;
	}

	// void osg::ImageStream::base_setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1, int rowLength = 0)
	static int _bind_base_setImage(lua_State *L) {
		if (!_lg_typecheck_base_setImage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1, int rowLength = 0) function, expected prototype:\nvoid osg::ImageStream::base_setImage(int s, int t, int r, int internalTextureformat, unsigned int pixelFormat, unsigned int type, unsigned char * data, osg::Image::AllocationMode mode, int packing = 1, int rowLength = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
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

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_setImage(int, int, int, int, unsigned int, unsigned int, unsigned char *, osg::Image::AllocationMode, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageStream::setImage(s, t, r, internalTextureformat, pixelFormat, type, &data, mode, packing, rowLength);

		return 0;
	}

	// void osg::ImageStream::base_readPixels(int x, int y, int width, int height, unsigned int pixelFormat, unsigned int type, int packing = 1)
	static int _bind_base_readPixels(lua_State *L) {
		if (!_lg_typecheck_base_readPixels(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_readPixels(int x, int y, int width, int height, unsigned int pixelFormat, unsigned int type, int packing = 1) function, expected prototype:\nvoid osg::ImageStream::base_readPixels(int x, int y, int width, int height, unsigned int pixelFormat, unsigned int type, int packing = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		unsigned int pixelFormat=(unsigned int)lua_tointeger(L,6);
		unsigned int type=(unsigned int)lua_tointeger(L,7);
		int packing=luatop>7 ? (int)lua_tointeger(L,8) : (int)1;

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_readPixels(int, int, int, int, unsigned int, unsigned int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageStream::readPixels(x, y, width, height, pixelFormat, type, packing);

		return 0;
	}

	// void osg::ImageStream::base_readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE, unsigned int face = 0)
	static int _bind_base_readImageFromCurrentTexture(lua_State *L) {
		if (!_lg_typecheck_base_readImageFromCurrentTexture(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE, unsigned int face = 0) function, expected prototype:\nvoid osg::ImageStream::base_readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, unsigned int type = GL_UNSIGNED_BYTE, unsigned int face = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);
		bool copyMipMapsIfAvailable=(bool)(lua_toboolean(L,3)==1);
		unsigned int type=luatop>3 ? (unsigned int)lua_tointeger(L,4) : (unsigned int)GL_UNSIGNED_BYTE;
		unsigned int face=luatop>4 ? (unsigned int)lua_tointeger(L,5) : (unsigned int)0;

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_readImageFromCurrentTexture(unsigned int, bool, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageStream::readImageFromCurrentTexture(contextID, copyMipMapsIfAvailable, type, face);

		return 0;
	}

	// void osg::ImageStream::base_scaleImage(int s, int t, int r, unsigned int newDataType)
	static int _bind_base_scaleImage(lua_State *L) {
		if (!_lg_typecheck_base_scaleImage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_scaleImage(int s, int t, int r, unsigned int newDataType) function, expected prototype:\nvoid osg::ImageStream::base_scaleImage(int s, int t, int r, unsigned int newDataType)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int s=(int)lua_tointeger(L,2);
		int t=(int)lua_tointeger(L,3);
		int r=(int)lua_tointeger(L,4);
		unsigned int newDataType=(unsigned int)lua_tointeger(L,5);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_scaleImage(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageStream::scaleImage(s, t, r, newDataType);

		return 0;
	}

	// void osg::ImageStream::base_copySubImage(int s_offset, int t_offset, int r_offset, const osg::Image * source)
	static int _bind_base_copySubImage(lua_State *L) {
		if (!_lg_typecheck_base_copySubImage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_copySubImage(int s_offset, int t_offset, int r_offset, const osg::Image * source) function, expected prototype:\nvoid osg::ImageStream::base_copySubImage(int s_offset, int t_offset, int r_offset, const osg::Image * source)\nClass arguments details:\narg 4 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int s_offset=(int)lua_tointeger(L,2);
		int t_offset=(int)lua_tointeger(L,3);
		int r_offset=(int)lua_tointeger(L,4);
		const osg::Image* source=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,5));

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_copySubImage(int, int, int, const osg::Image *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageStream::copySubImage(s_offset, t_offset, r_offset, source);

		return 0;
	}

	// bool osg::ImageStream::base_isImageTranslucent() const
	static int _bind_base_isImageTranslucent(lua_State *L) {
		if (!_lg_typecheck_base_isImageTranslucent(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ImageStream::base_isImageTranslucent() const function, expected prototype:\nbool osg::ImageStream::base_isImageTranslucent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ImageStream::base_isImageTranslucent() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ImageStream::isImageTranslucent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ImageStream::base_requiresUpdateCall() const
	static int _bind_base_requiresUpdateCall(lua_State *L) {
		if (!_lg_typecheck_base_requiresUpdateCall(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ImageStream::base_requiresUpdateCall() const function, expected prototype:\nbool osg::ImageStream::base_requiresUpdateCall() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ImageStream::base_requiresUpdateCall() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ImageStream::requiresUpdateCall();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ImageStream::base_update(osg::NodeVisitor * arg1)
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_update(osg::NodeVisitor * arg1) function, expected prototype:\nvoid osg::ImageStream::base_update(osg::NodeVisitor * arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_update(osg::NodeVisitor *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageStream::update(_arg1);

		return 0;
	}

	// bool osg::ImageStream::base_sendFocusHint(bool arg1)
	static int _bind_base_sendFocusHint(lua_State *L) {
		if (!_lg_typecheck_base_sendFocusHint(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ImageStream::base_sendFocusHint(bool arg1) function, expected prototype:\nbool osg::ImageStream::base_sendFocusHint(bool arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool _arg1=(bool)(lua_toboolean(L,2)==1);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ImageStream::base_sendFocusHint(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ImageStream::sendFocusHint(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ImageStream::base_sendPointerEvent(int arg1, int arg2, int arg3)
	static int _bind_base_sendPointerEvent(lua_State *L) {
		if (!_lg_typecheck_base_sendPointerEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ImageStream::base_sendPointerEvent(int arg1, int arg2, int arg3) function, expected prototype:\nbool osg::ImageStream::base_sendPointerEvent(int arg1, int arg2, int arg3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int _arg1=(int)lua_tointeger(L,2);
		int _arg2=(int)lua_tointeger(L,3);
		int _arg3=(int)lua_tointeger(L,4);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ImageStream::base_sendPointerEvent(int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ImageStream::sendPointerEvent(_arg1, _arg2, _arg3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ImageStream::base_sendKeyEvent(int arg1, bool arg2)
	static int _bind_base_sendKeyEvent(lua_State *L) {
		if (!_lg_typecheck_base_sendKeyEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ImageStream::base_sendKeyEvent(int arg1, bool arg2) function, expected prototype:\nbool osg::ImageStream::base_sendKeyEvent(int arg1, bool arg2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int _arg1=(int)lua_tointeger(L,2);
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ImageStream::base_sendKeyEvent(int, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ImageStream::sendKeyEvent(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ImageStream::base_setFrameLastRendered(const osg::FrameStamp * arg1)
	static int _bind_base_setFrameLastRendered(lua_State *L) {
		if (!_lg_typecheck_base_setFrameLastRendered(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_setFrameLastRendered(const osg::FrameStamp * arg1) function, expected prototype:\nvoid osg::ImageStream::base_setFrameLastRendered(const osg::FrameStamp * arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::FrameStamp* _arg1=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_setFrameLastRendered(const osg::FrameStamp *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageStream::setFrameLastRendered(_arg1);

		return 0;
	}

	// osg::Object * osg::ImageStream::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ImageStream::base_cloneType() const function, expected prototype:\nosg::Object * osg::ImageStream::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ImageStream::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ImageStream::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ImageStream::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ImageStream::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ImageStream::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ImageStream::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ImageStream::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ImageStream::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ImageStream::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ImageStream::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ImageStream::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ImageStream::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ImageStream::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ImageStream::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ImageStream::base_libraryName() const function, expected prototype:\nconst char * osg::ImageStream::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ImageStream::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ImageStream::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ImageStream::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ImageStream::base_className() const function, expected prototype:\nconst char * osg::ImageStream::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ImageStream::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ImageStream::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// int osg::ImageStream::base_compare(const osg::Image & rhs) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::ImageStream::base_compare(const osg::Image & rhs) const function, expected prototype:\nint osg::ImageStream::base_compare(const osg::Image & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Image* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::ImageStream::base_compare function");
		}
		const osg::Image & rhs=*rhs_ptr;

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::ImageStream::base_compare(const osg::Image &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ImageStream::compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::base_seek(double arg1)
	static int _bind_base_seek(lua_State *L) {
		if (!_lg_typecheck_base_seek(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_seek(double arg1) function, expected prototype:\nvoid osg::ImageStream::base_seek(double arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double _arg1=(double)lua_tonumber(L,2);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_seek(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageStream::seek(_arg1);

		return 0;
	}

	// void osg::ImageStream::base_play()
	static int _bind_base_play(lua_State *L) {
		if (!_lg_typecheck_base_play(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_play() function, expected prototype:\nvoid osg::ImageStream::base_play()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_play(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageStream::play();

		return 0;
	}

	// void osg::ImageStream::base_pause()
	static int _bind_base_pause(lua_State *L) {
		if (!_lg_typecheck_base_pause(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_pause() function, expected prototype:\nvoid osg::ImageStream::base_pause()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_pause(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageStream::pause();

		return 0;
	}

	// void osg::ImageStream::base_rewind()
	static int _bind_base_rewind(lua_State *L) {
		if (!_lg_typecheck_base_rewind(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_rewind() function, expected prototype:\nvoid osg::ImageStream::base_rewind()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_rewind(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageStream::rewind();

		return 0;
	}

	// void osg::ImageStream::base_quit(bool arg1 = true)
	static int _bind_base_quit(lua_State *L) {
		if (!_lg_typecheck_base_quit(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_quit(bool arg1 = true) function, expected prototype:\nvoid osg::ImageStream::base_quit(bool arg1 = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool _arg1=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_quit(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageStream::quit(_arg1);

		return 0;
	}

	// double osg::ImageStream::base_getCreationTime() const
	static int _bind_base_getCreationTime(lua_State *L) {
		if (!_lg_typecheck_base_getCreationTime(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::base_getCreationTime() const function, expected prototype:\ndouble osg::ImageStream::base_getCreationTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ImageStream::base_getCreationTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->ImageStream::getCreationTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::ImageStream::base_getLength() const
	static int _bind_base_getLength(lua_State *L) {
		if (!_lg_typecheck_base_getLength(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::base_getLength() const function, expected prototype:\ndouble osg::ImageStream::base_getLength() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ImageStream::base_getLength() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->ImageStream::getLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::ImageStream::base_getFrameRate() const
	static int _bind_base_getFrameRate(lua_State *L) {
		if (!_lg_typecheck_base_getFrameRate(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::base_getFrameRate() const function, expected prototype:\ndouble osg::ImageStream::base_getFrameRate() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ImageStream::base_getFrameRate() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->ImageStream::getFrameRate();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::ImageStream::base_getCurrentTime() const
	static int _bind_base_getCurrentTime(lua_State *L) {
		if (!_lg_typecheck_base_getCurrentTime(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::base_getCurrentTime() const function, expected prototype:\ndouble osg::ImageStream::base_getCurrentTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ImageStream::base_getCurrentTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->ImageStream::getCurrentTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::base_setReferenceTime(double arg1)
	static int _bind_base_setReferenceTime(lua_State *L) {
		if (!_lg_typecheck_base_setReferenceTime(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_setReferenceTime(double arg1) function, expected prototype:\nvoid osg::ImageStream::base_setReferenceTime(double arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double _arg1=(double)lua_tonumber(L,2);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_setReferenceTime(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageStream::setReferenceTime(_arg1);

		return 0;
	}

	// double osg::ImageStream::base_getReferenceTime() const
	static int _bind_base_getReferenceTime(lua_State *L) {
		if (!_lg_typecheck_base_getReferenceTime(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::base_getReferenceTime() const function, expected prototype:\ndouble osg::ImageStream::base_getReferenceTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ImageStream::base_getReferenceTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->ImageStream::getReferenceTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::base_setTimeMultiplier(double arg1)
	static int _bind_base_setTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_base_setTimeMultiplier(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_setTimeMultiplier(double arg1) function, expected prototype:\nvoid osg::ImageStream::base_setTimeMultiplier(double arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double _arg1=(double)lua_tonumber(L,2);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_setTimeMultiplier(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageStream::setTimeMultiplier(_arg1);

		return 0;
	}

	// double osg::ImageStream::base_getTimeMultiplier() const
	static int _bind_base_getTimeMultiplier(lua_State *L) {
		if (!_lg_typecheck_base_getTimeMultiplier(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ImageStream::base_getTimeMultiplier() const function, expected prototype:\ndouble osg::ImageStream::base_getTimeMultiplier() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ImageStream::base_getTimeMultiplier() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->ImageStream::getTimeMultiplier();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::base_setVolume(float arg1)
	static int _bind_base_setVolume(lua_State *L) {
		if (!_lg_typecheck_base_setVolume(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_setVolume(float arg1) function, expected prototype:\nvoid osg::ImageStream::base_setVolume(float arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float _arg1=(float)lua_tonumber(L,2);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_setVolume(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageStream::setVolume(_arg1);

		return 0;
	}

	// float osg::ImageStream::base_getVolume() const
	static int _bind_base_getVolume(lua_State *L) {
		if (!_lg_typecheck_base_getVolume(L)) {
			luaL_error(L, "luna typecheck failed in float osg::ImageStream::base_getVolume() const function, expected prototype:\nfloat osg::ImageStream::base_getVolume() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::ImageStream::base_getVolume() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->ImageStream::getVolume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::ImageStream::base_getAudioBalance()
	static int _bind_base_getAudioBalance(lua_State *L) {
		if (!_lg_typecheck_base_getAudioBalance(L)) {
			luaL_error(L, "luna typecheck failed in float osg::ImageStream::base_getAudioBalance() function, expected prototype:\nfloat osg::ImageStream::base_getAudioBalance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::ImageStream::base_getAudioBalance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->ImageStream::getAudioBalance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ImageStream::base_setAudioBalance(float b)
	static int _bind_base_setAudioBalance(lua_State *L) {
		if (!_lg_typecheck_base_setAudioBalance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ImageStream::base_setAudioBalance(float b) function, expected prototype:\nvoid osg::ImageStream::base_setAudioBalance(float b)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float b=(float)lua_tonumber(L,2);

		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ImageStream::base_setAudioBalance(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageStream::setAudioBalance(b);

		return 0;
	}

	// osg::Texture * osg::ImageStream::base_createSuitableTexture()
	static int _bind_base_createSuitableTexture(lua_State *L) {
		if (!_lg_typecheck_base_createSuitableTexture(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::ImageStream::base_createSuitableTexture() function, expected prototype:\nosg::Texture * osg::ImageStream::base_createSuitableTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ImageStream* self=Luna< osg::Referenced >::checkSubType< osg::ImageStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::ImageStream::base_createSuitableTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->ImageStream::createSuitableTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osg::ImageStream* LunaTraits< osg::ImageStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ImageStream::_bind_ctor(L);
}

void LunaTraits< osg::ImageStream >::_bind_dtor(osg::ImageStream* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ImageStream >::className[] = "ImageStream";
const char LunaTraits< osg::ImageStream >::fullName[] = "osg::ImageStream";
const char LunaTraits< osg::ImageStream >::moduleName[] = "osg";
const char* LunaTraits< osg::ImageStream >::parents[] = {"osg.Image", 0};
const int LunaTraits< osg::ImageStream >::hash = 46984585;
const int LunaTraits< osg::ImageStream >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ImageStream >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ImageStream::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ImageStream::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ImageStream::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ImageStream::_bind_libraryName},
	{"className", &luna_wrapper_osg_ImageStream::_bind_className},
	{"compare", &luna_wrapper_osg_ImageStream::_bind_compare},
	{"seek", &luna_wrapper_osg_ImageStream::_bind_seek},
	{"play", &luna_wrapper_osg_ImageStream::_bind_play},
	{"pause", &luna_wrapper_osg_ImageStream::_bind_pause},
	{"rewind", &luna_wrapper_osg_ImageStream::_bind_rewind},
	{"quit", &luna_wrapper_osg_ImageStream::_bind_quit},
	{"getStatus", &luna_wrapper_osg_ImageStream::_bind_getStatus},
	{"setLoopingMode", &luna_wrapper_osg_ImageStream::_bind_setLoopingMode},
	{"getLoopingMode", &luna_wrapper_osg_ImageStream::_bind_getLoopingMode},
	{"getCreationTime", &luna_wrapper_osg_ImageStream::_bind_getCreationTime},
	{"getLength", &luna_wrapper_osg_ImageStream::_bind_getLength},
	{"getFrameRate", &luna_wrapper_osg_ImageStream::_bind_getFrameRate},
	{"getCurrentTime", &luna_wrapper_osg_ImageStream::_bind_getCurrentTime},
	{"setReferenceTime", &luna_wrapper_osg_ImageStream::_bind_setReferenceTime},
	{"getReferenceTime", &luna_wrapper_osg_ImageStream::_bind_getReferenceTime},
	{"setTimeMultiplier", &luna_wrapper_osg_ImageStream::_bind_setTimeMultiplier},
	{"getTimeMultiplier", &luna_wrapper_osg_ImageStream::_bind_getTimeMultiplier},
	{"setVolume", &luna_wrapper_osg_ImageStream::_bind_setVolume},
	{"getVolume", &luna_wrapper_osg_ImageStream::_bind_getVolume},
	{"getAudioBalance", &luna_wrapper_osg_ImageStream::_bind_getAudioBalance},
	{"setAudioBalance", &luna_wrapper_osg_ImageStream::_bind_setAudioBalance},
	{"setAudioStreams", &luna_wrapper_osg_ImageStream::_bind_setAudioStreams},
	{"getAudioStreams", &luna_wrapper_osg_ImageStream::_bind_getAudioStreams},
	{"createSuitableTexture", &luna_wrapper_osg_ImageStream::_bind_createSuitableTexture},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_ImageStream::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_ImageStream::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_ImageStream::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_ImageStream::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_ImageStream::_bind_base_getUserData},
	{"base_asArray", &luna_wrapper_osg_ImageStream::_bind_base_asArray},
	{"base_asPrimitiveSet", &luna_wrapper_osg_ImageStream::_bind_base_asPrimitiveSet},
	{"base_releaseGLObjects", &luna_wrapper_osg_ImageStream::_bind_base_releaseGLObjects},
	{"base_asImage", &luna_wrapper_osg_ImageStream::_bind_base_asImage},
	{"base_getDataPointer", &luna_wrapper_osg_ImageStream::_bind_base_getDataPointer},
	{"base_getTotalDataSize", &luna_wrapper_osg_ImageStream::_bind_base_getTotalDataSize},
	{"base_allocateImage", &luna_wrapper_osg_ImageStream::_bind_base_allocateImage},
	{"base_setImage", &luna_wrapper_osg_ImageStream::_bind_base_setImage},
	{"base_readPixels", &luna_wrapper_osg_ImageStream::_bind_base_readPixels},
	{"base_readImageFromCurrentTexture", &luna_wrapper_osg_ImageStream::_bind_base_readImageFromCurrentTexture},
	{"base_scaleImage", &luna_wrapper_osg_ImageStream::_bind_base_scaleImage},
	{"base_copySubImage", &luna_wrapper_osg_ImageStream::_bind_base_copySubImage},
	{"base_isImageTranslucent", &luna_wrapper_osg_ImageStream::_bind_base_isImageTranslucent},
	{"base_requiresUpdateCall", &luna_wrapper_osg_ImageStream::_bind_base_requiresUpdateCall},
	{"base_update", &luna_wrapper_osg_ImageStream::_bind_base_update},
	{"base_sendFocusHint", &luna_wrapper_osg_ImageStream::_bind_base_sendFocusHint},
	{"base_sendPointerEvent", &luna_wrapper_osg_ImageStream::_bind_base_sendPointerEvent},
	{"base_sendKeyEvent", &luna_wrapper_osg_ImageStream::_bind_base_sendKeyEvent},
	{"base_setFrameLastRendered", &luna_wrapper_osg_ImageStream::_bind_base_setFrameLastRendered},
	{"base_cloneType", &luna_wrapper_osg_ImageStream::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_ImageStream::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_ImageStream::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_ImageStream::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_ImageStream::_bind_base_className},
	{"base_compare", &luna_wrapper_osg_ImageStream::_bind_base_compare},
	{"base_seek", &luna_wrapper_osg_ImageStream::_bind_base_seek},
	{"base_play", &luna_wrapper_osg_ImageStream::_bind_base_play},
	{"base_pause", &luna_wrapper_osg_ImageStream::_bind_base_pause},
	{"base_rewind", &luna_wrapper_osg_ImageStream::_bind_base_rewind},
	{"base_quit", &luna_wrapper_osg_ImageStream::_bind_base_quit},
	{"base_getCreationTime", &luna_wrapper_osg_ImageStream::_bind_base_getCreationTime},
	{"base_getLength", &luna_wrapper_osg_ImageStream::_bind_base_getLength},
	{"base_getFrameRate", &luna_wrapper_osg_ImageStream::_bind_base_getFrameRate},
	{"base_getCurrentTime", &luna_wrapper_osg_ImageStream::_bind_base_getCurrentTime},
	{"base_setReferenceTime", &luna_wrapper_osg_ImageStream::_bind_base_setReferenceTime},
	{"base_getReferenceTime", &luna_wrapper_osg_ImageStream::_bind_base_getReferenceTime},
	{"base_setTimeMultiplier", &luna_wrapper_osg_ImageStream::_bind_base_setTimeMultiplier},
	{"base_getTimeMultiplier", &luna_wrapper_osg_ImageStream::_bind_base_getTimeMultiplier},
	{"base_setVolume", &luna_wrapper_osg_ImageStream::_bind_base_setVolume},
	{"base_getVolume", &luna_wrapper_osg_ImageStream::_bind_base_getVolume},
	{"base_getAudioBalance", &luna_wrapper_osg_ImageStream::_bind_base_getAudioBalance},
	{"base_setAudioBalance", &luna_wrapper_osg_ImageStream::_bind_base_setAudioBalance},
	{"base_createSuitableTexture", &luna_wrapper_osg_ImageStream::_bind_base_createSuitableTexture},
	{"fromVoid", &luna_wrapper_osg_ImageStream::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ImageStream::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_ImageStream::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ImageStream >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ImageStream::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ImageStream >::enumValues[] = {
	{"INVALID", osg::ImageStream::INVALID},
	{"PLAYING", osg::ImageStream::PLAYING},
	{"PAUSED", osg::ImageStream::PAUSED},
	{"REWINDING", osg::ImageStream::REWINDING},
	{"NO_LOOPING", osg::ImageStream::NO_LOOPING},
	{"LOOPING", osg::ImageStream::LOOPING},
	{0,0}
};


