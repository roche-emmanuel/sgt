#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_NodeVisitor.h>

class luna_wrapper_osg_NodeVisitor {
public:
	typedef Luna< osg::NodeVisitor > luna_t;

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

		osg::NodeVisitor* self= (osg::NodeVisitor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::NodeVisitor >::push(L,self,false);
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
		//osg::NodeVisitor* ptr= dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		osg::NodeVisitor* ptr= luna_caster< osg::Referenced, osg::NodeVisitor >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::NodeVisitor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVisitorType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVisitorType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTraversalNumber(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTraversalNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFrameStamp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrameStamp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTraversalMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTraversalMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNodeMaskOverride(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNodeMaskOverride(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_validNodeMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTraversalMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTraversalMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_pushOntoNodePath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_popFromNodePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNodePath_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNodePath_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEyePoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDistanceToEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDistanceFromEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDistanceToViewPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Projection >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_13(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_14(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_15(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Switch >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_16(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_17(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::LOD >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_18(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_19(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ClearNode >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_20(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_21(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDatabaseRequestHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDatabaseRequestHandler_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDatabaseRequestHandler_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setImageRequestHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImageRequestHandler_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImageRequestHandler_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getEyePoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getViewPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceToEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceFromEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceToViewPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Projection >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_13(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_14(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_15(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Switch >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_16(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_17(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::LOD >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_18(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_19(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ClearNode >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_20(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_21(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::NodeVisitor::NodeVisitor(osg::NodeVisitor::TraversalMode tm = osg::NodeVisitor::TRAVERSE_NONE)
	static osg::NodeVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodeVisitor::NodeVisitor(osg::NodeVisitor::TraversalMode tm = osg::NodeVisitor::TRAVERSE_NONE) function, expected prototype:\nosg::NodeVisitor::NodeVisitor(osg::NodeVisitor::TraversalMode tm = osg::NodeVisitor::TRAVERSE_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::NodeVisitor::TraversalMode tm=luatop>0 ? (osg::NodeVisitor::TraversalMode)lua_tointeger(L,1) : (osg::NodeVisitor::TraversalMode)osg::NodeVisitor::TRAVERSE_NONE;

		return new osg::NodeVisitor(tm);
	}

	// osg::NodeVisitor::NodeVisitor(osg::NodeVisitor::VisitorType type, osg::NodeVisitor::TraversalMode tm = osg::NodeVisitor::TRAVERSE_NONE)
	static osg::NodeVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodeVisitor::NodeVisitor(osg::NodeVisitor::VisitorType type, osg::NodeVisitor::TraversalMode tm = osg::NodeVisitor::TRAVERSE_NONE) function, expected prototype:\nosg::NodeVisitor::NodeVisitor(osg::NodeVisitor::VisitorType type, osg::NodeVisitor::TraversalMode tm = osg::NodeVisitor::TRAVERSE_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::NodeVisitor::VisitorType type=(osg::NodeVisitor::VisitorType)lua_tointeger(L,1);
		osg::NodeVisitor::TraversalMode tm=luatop>1 ? (osg::NodeVisitor::TraversalMode)lua_tointeger(L,2) : (osg::NodeVisitor::TraversalMode)osg::NodeVisitor::TRAVERSE_NONE;

		return new osg::NodeVisitor(type, tm);
	}

	// osg::NodeVisitor::NodeVisitor(lua_Table * data, osg::NodeVisitor::TraversalMode tm = osg::NodeVisitor::TRAVERSE_NONE)
	static osg::NodeVisitor* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodeVisitor::NodeVisitor(lua_Table * data, osg::NodeVisitor::TraversalMode tm = osg::NodeVisitor::TRAVERSE_NONE) function, expected prototype:\nosg::NodeVisitor::NodeVisitor(lua_Table * data, osg::NodeVisitor::TraversalMode tm = osg::NodeVisitor::TRAVERSE_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::NodeVisitor::TraversalMode tm=luatop>1 ? (osg::NodeVisitor::TraversalMode)lua_tointeger(L,2) : (osg::NodeVisitor::TraversalMode)osg::NodeVisitor::TRAVERSE_NONE;

		return new wrapper_osg_NodeVisitor(L,NULL, tm);
	}

	// osg::NodeVisitor::NodeVisitor(lua_Table * data, osg::NodeVisitor::VisitorType type, osg::NodeVisitor::TraversalMode tm = osg::NodeVisitor::TRAVERSE_NONE)
	static osg::NodeVisitor* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodeVisitor::NodeVisitor(lua_Table * data, osg::NodeVisitor::VisitorType type, osg::NodeVisitor::TraversalMode tm = osg::NodeVisitor::TRAVERSE_NONE) function, expected prototype:\nosg::NodeVisitor::NodeVisitor(lua_Table * data, osg::NodeVisitor::VisitorType type, osg::NodeVisitor::TraversalMode tm = osg::NodeVisitor::TRAVERSE_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::NodeVisitor::VisitorType type=(osg::NodeVisitor::VisitorType)lua_tointeger(L,2);
		osg::NodeVisitor::TraversalMode tm=luatop>2 ? (osg::NodeVisitor::TraversalMode)lua_tointeger(L,3) : (osg::NodeVisitor::TraversalMode)osg::NodeVisitor::TRAVERSE_NONE;

		return new wrapper_osg_NodeVisitor(L,NULL, type, tm);
	}

	// Overload binder for osg::NodeVisitor::NodeVisitor
	static osg::NodeVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function NodeVisitor, cannot match any of the overloads for function NodeVisitor:\n  NodeVisitor(osg::NodeVisitor::TraversalMode)\n  NodeVisitor(osg::NodeVisitor::VisitorType, osg::NodeVisitor::TraversalMode)\n  NodeVisitor(lua_Table *, osg::NodeVisitor::TraversalMode)\n  NodeVisitor(lua_Table *, osg::NodeVisitor::VisitorType, osg::NodeVisitor::TraversalMode)\n");
		return NULL;
	}


	// Function binds:
	// const char * osg::NodeVisitor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::NodeVisitor::libraryName() const function, expected prototype:\nconst char * osg::NodeVisitor::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::NodeVisitor::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::NodeVisitor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::NodeVisitor::className() const function, expected prototype:\nconst char * osg::NodeVisitor::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::NodeVisitor::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::NodeVisitor::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::reset() function, expected prototype:\nvoid osg::NodeVisitor::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// void osg::NodeVisitor::setVisitorType(osg::NodeVisitor::VisitorType type)
	static int _bind_setVisitorType(lua_State *L) {
		if (!_lg_typecheck_setVisitorType(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::setVisitorType(osg::NodeVisitor::VisitorType type) function, expected prototype:\nvoid osg::NodeVisitor::setVisitorType(osg::NodeVisitor::VisitorType type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor::VisitorType type=(osg::NodeVisitor::VisitorType)lua_tointeger(L,2);

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::setVisitorType(osg::NodeVisitor::VisitorType). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVisitorType(type);

		return 0;
	}

	// osg::NodeVisitor::VisitorType osg::NodeVisitor::getVisitorType() const
	static int _bind_getVisitorType(lua_State *L) {
		if (!_lg_typecheck_getVisitorType(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodeVisitor::VisitorType osg::NodeVisitor::getVisitorType() const function, expected prototype:\nosg::NodeVisitor::VisitorType osg::NodeVisitor::getVisitorType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::NodeVisitor::VisitorType osg::NodeVisitor::getVisitorType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::NodeVisitor::VisitorType lret = self->getVisitorType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::NodeVisitor::setTraversalNumber(unsigned int fn)
	static int _bind_setTraversalNumber(lua_State *L) {
		if (!_lg_typecheck_setTraversalNumber(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::setTraversalNumber(unsigned int fn) function, expected prototype:\nvoid osg::NodeVisitor::setTraversalNumber(unsigned int fn)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int fn=(unsigned int)lua_tointeger(L,2);

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::setTraversalNumber(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTraversalNumber(fn);

		return 0;
	}

	// unsigned int osg::NodeVisitor::getTraversalNumber() const
	static int _bind_getTraversalNumber(lua_State *L) {
		if (!_lg_typecheck_getTraversalNumber(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::NodeVisitor::getTraversalNumber() const function, expected prototype:\nunsigned int osg::NodeVisitor::getTraversalNumber() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::NodeVisitor::getTraversalNumber() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getTraversalNumber();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::NodeVisitor::setFrameStamp(osg::FrameStamp * fs)
	static int _bind_setFrameStamp(lua_State *L) {
		if (!_lg_typecheck_setFrameStamp(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::setFrameStamp(osg::FrameStamp * fs) function, expected prototype:\nvoid osg::NodeVisitor::setFrameStamp(osg::FrameStamp * fs)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::FrameStamp* fs=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::setFrameStamp(osg::FrameStamp *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFrameStamp(fs);

		return 0;
	}

	// const osg::FrameStamp * osg::NodeVisitor::getFrameStamp() const
	static int _bind_getFrameStamp(lua_State *L) {
		if (!_lg_typecheck_getFrameStamp(L)) {
			luaL_error(L, "luna typecheck failed in const osg::FrameStamp * osg::NodeVisitor::getFrameStamp() const function, expected prototype:\nconst osg::FrameStamp * osg::NodeVisitor::getFrameStamp() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::FrameStamp * osg::NodeVisitor::getFrameStamp() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::FrameStamp * lret = self->getFrameStamp();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameStamp >::push(L,lret,false);

		return 1;
	}

	// void osg::NodeVisitor::setTraversalMask(unsigned int mask)
	static int _bind_setTraversalMask(lua_State *L) {
		if (!_lg_typecheck_setTraversalMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::setTraversalMask(unsigned int mask) function, expected prototype:\nvoid osg::NodeVisitor::setTraversalMask(unsigned int mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mask=(unsigned int)lua_tointeger(L,2);

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::setTraversalMask(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTraversalMask(mask);

		return 0;
	}

	// unsigned int osg::NodeVisitor::getTraversalMask() const
	static int _bind_getTraversalMask(lua_State *L) {
		if (!_lg_typecheck_getTraversalMask(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::NodeVisitor::getTraversalMask() const function, expected prototype:\nunsigned int osg::NodeVisitor::getTraversalMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::NodeVisitor::getTraversalMask() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getTraversalMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::NodeVisitor::setNodeMaskOverride(unsigned int mask)
	static int _bind_setNodeMaskOverride(lua_State *L) {
		if (!_lg_typecheck_setNodeMaskOverride(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::setNodeMaskOverride(unsigned int mask) function, expected prototype:\nvoid osg::NodeVisitor::setNodeMaskOverride(unsigned int mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mask=(unsigned int)lua_tointeger(L,2);

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::setNodeMaskOverride(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNodeMaskOverride(mask);

		return 0;
	}

	// unsigned int osg::NodeVisitor::getNodeMaskOverride() const
	static int _bind_getNodeMaskOverride(lua_State *L) {
		if (!_lg_typecheck_getNodeMaskOverride(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::NodeVisitor::getNodeMaskOverride() const function, expected prototype:\nunsigned int osg::NodeVisitor::getNodeMaskOverride() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::NodeVisitor::getNodeMaskOverride() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNodeMaskOverride();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::NodeVisitor::validNodeMask(const osg::Node & node) const
	static int _bind_validNodeMask(lua_State *L) {
		if (!_lg_typecheck_validNodeMask(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::NodeVisitor::validNodeMask(const osg::Node & node) const function, expected prototype:\nbool osg::NodeVisitor::validNodeMask(const osg::Node & node) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::validNodeMask function");
		}
		const osg::Node & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::NodeVisitor::validNodeMask(const osg::Node &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->validNodeMask(node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::NodeVisitor::setTraversalMode(osg::NodeVisitor::TraversalMode mode)
	static int _bind_setTraversalMode(lua_State *L) {
		if (!_lg_typecheck_setTraversalMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::setTraversalMode(osg::NodeVisitor::TraversalMode mode) function, expected prototype:\nvoid osg::NodeVisitor::setTraversalMode(osg::NodeVisitor::TraversalMode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor::TraversalMode mode=(osg::NodeVisitor::TraversalMode)lua_tointeger(L,2);

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::setTraversalMode(osg::NodeVisitor::TraversalMode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTraversalMode(mode);

		return 0;
	}

	// osg::NodeVisitor::TraversalMode osg::NodeVisitor::getTraversalMode() const
	static int _bind_getTraversalMode(lua_State *L) {
		if (!_lg_typecheck_getTraversalMode(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodeVisitor::TraversalMode osg::NodeVisitor::getTraversalMode() const function, expected prototype:\nosg::NodeVisitor::TraversalMode osg::NodeVisitor::getTraversalMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::NodeVisitor::TraversalMode osg::NodeVisitor::getTraversalMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::NodeVisitor::TraversalMode lret = self->getTraversalMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::NodeVisitor::setUserData(osg::Referenced * obj)
	static int _bind_setUserData(lua_State *L) {
		if (!_lg_typecheck_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::NodeVisitor::setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::NodeVisitor::getUserData()
	static int _bind_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::NodeVisitor::getUserData() function, expected prototype:\nosg::Referenced * osg::NodeVisitor::getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::NodeVisitor::getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::NodeVisitor::getUserData() const
	static int _bind_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::NodeVisitor::getUserData() const function, expected prototype:\nconst osg::Referenced * osg::NodeVisitor::getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::NodeVisitor::getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::NodeVisitor::getUserData
	static int _bind_getUserData(lua_State *L) {
		if (_lg_typecheck_getUserData_overload_1(L)) return _bind_getUserData_overload_1(L);
		if (_lg_typecheck_getUserData_overload_2(L)) return _bind_getUserData_overload_2(L);

		luaL_error(L, "error in function getUserData, cannot match any of the overloads for function getUserData:\n  getUserData()\n  getUserData()\n");
		return 0;
	}

	// void osg::NodeVisitor::traverse(osg::Node & node)
	static int _bind_traverse(lua_State *L) {
		if (!_lg_typecheck_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::traverse(osg::Node & node) function, expected prototype:\nvoid osg::NodeVisitor::traverse(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::traverse function");
		}
		osg::Node & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::traverse(osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->traverse(node);

		return 0;
	}

	// void osg::NodeVisitor::pushOntoNodePath(osg::Node * node)
	static int _bind_pushOntoNodePath(lua_State *L) {
		if (!_lg_typecheck_pushOntoNodePath(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::pushOntoNodePath(osg::Node * node) function, expected prototype:\nvoid osg::NodeVisitor::pushOntoNodePath(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::pushOntoNodePath(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pushOntoNodePath(node);

		return 0;
	}

	// void osg::NodeVisitor::popFromNodePath()
	static int _bind_popFromNodePath(lua_State *L) {
		if (!_lg_typecheck_popFromNodePath(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::popFromNodePath() function, expected prototype:\nvoid osg::NodeVisitor::popFromNodePath()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::popFromNodePath(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->popFromNodePath();

		return 0;
	}

	// osg::NodePath & osg::NodeVisitor::getNodePath()
	static int _bind_getNodePath_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNodePath_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodePath & osg::NodeVisitor::getNodePath() function, expected prototype:\nosg::NodePath & osg::NodeVisitor::getNodePath()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::NodePath & osg::NodeVisitor::getNodePath(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::NodePath* lret = &self->getNodePath();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodePath >::push(L,lret,false);

		return 1;
	}

	// const osg::NodePath & osg::NodeVisitor::getNodePath() const
	static int _bind_getNodePath_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNodePath_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::NodePath & osg::NodeVisitor::getNodePath() const function, expected prototype:\nconst osg::NodePath & osg::NodeVisitor::getNodePath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::NodePath & osg::NodeVisitor::getNodePath() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::NodePath* lret = &self->getNodePath();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodePath >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::NodeVisitor::getNodePath
	static int _bind_getNodePath(lua_State *L) {
		if (_lg_typecheck_getNodePath_overload_1(L)) return _bind_getNodePath_overload_1(L);
		if (_lg_typecheck_getNodePath_overload_2(L)) return _bind_getNodePath_overload_2(L);

		luaL_error(L, "error in function getNodePath, cannot match any of the overloads for function getNodePath:\n  getNodePath()\n  getNodePath()\n");
		return 0;
	}

	// osg::Vec3f osg::NodeVisitor::getEyePoint() const
	static int _bind_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_getEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osg::NodeVisitor::getEyePoint() const function, expected prototype:\nosg::Vec3f osg::NodeVisitor::getEyePoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osg::NodeVisitor::getEyePoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osg::NodeVisitor::getViewPoint() const
	static int _bind_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_getViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osg::NodeVisitor::getViewPoint() const function, expected prototype:\nosg::Vec3f osg::NodeVisitor::getViewPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osg::NodeVisitor::getViewPoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osg::NodeVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_getDistanceToEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osg::NodeVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osg::NodeVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::NodeVisitor::getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::NodeVisitor::getDistanceToEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_getDistanceFromEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::NodeVisitor::getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_getDistanceToViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::NodeVisitor::getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::NodeVisitor::apply(osg::Node & node)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::Node & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::Node & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::Geode & node)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::Geode & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::Geode & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::Geode & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::Billboard & node)
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::Billboard & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::Billboard & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Billboard* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::Billboard & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::Billboard &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::Group & node)
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::Group & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::Group & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Group* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::Group & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::Group &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::Projection & node)
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::Projection & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::Projection & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Projection* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Projection >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::Projection & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::Projection &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::CoordinateSystemNode & node)
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::CoordinateSystemNode & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::CoordinateSystemNode & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::CoordinateSystemNode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::CoordinateSystemNode & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::CoordinateSystemNode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::ClipNode & node)
	static int _bind_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_apply_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::ClipNode & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::ClipNode & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ClipNode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::ClipNode & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::ClipNode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::TexGenNode & node)
	static int _bind_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_apply_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::TexGenNode & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::TexGenNode & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::TexGenNode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::TexGenNode & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::TexGenNode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::LightSource & node)
	static int _bind_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_apply_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::LightSource & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::LightSource & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::LightSource* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::LightSource & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::LightSource &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::Transform & node)
	static int _bind_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_apply_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::Transform & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::Transform & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Transform* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::Transform & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::Transform &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::Camera & node)
	static int _bind_apply_overload_11(lua_State *L) {
		if (!_lg_typecheck_apply_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::Camera & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::Camera & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::Camera & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::Camera &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::CameraView & node)
	static int _bind_apply_overload_12(lua_State *L) {
		if (!_lg_typecheck_apply_overload_12(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::CameraView & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::CameraView & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::CameraView* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::CameraView & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::CameraView &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::MatrixTransform & node)
	static int _bind_apply_overload_13(lua_State *L) {
		if (!_lg_typecheck_apply_overload_13(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::MatrixTransform & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::MatrixTransform & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::MatrixTransform* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::MatrixTransform & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::MatrixTransform &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::PositionAttitudeTransform & node)
	static int _bind_apply_overload_14(lua_State *L) {
		if (!_lg_typecheck_apply_overload_14(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::PositionAttitudeTransform & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::PositionAttitudeTransform & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::PositionAttitudeTransform* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::PositionAttitudeTransform & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::PositionAttitudeTransform &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::Switch & node)
	static int _bind_apply_overload_15(lua_State *L) {
		if (!_lg_typecheck_apply_overload_15(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::Switch & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::Switch & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Switch* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Switch >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::Switch & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::Switch &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::Sequence & node)
	static int _bind_apply_overload_16(lua_State *L) {
		if (!_lg_typecheck_apply_overload_16(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::Sequence & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::Sequence & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Sequence* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::Sequence & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::Sequence &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::LOD & node)
	static int _bind_apply_overload_17(lua_State *L) {
		if (!_lg_typecheck_apply_overload_17(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::LOD & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::LOD & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::LOD* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::LOD >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::LOD & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::LOD &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::PagedLOD & node)
	static int _bind_apply_overload_18(lua_State *L) {
		if (!_lg_typecheck_apply_overload_18(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::PagedLOD & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::PagedLOD & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::PagedLOD* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::PagedLOD & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::PagedLOD &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::ClearNode & node)
	static int _bind_apply_overload_19(lua_State *L) {
		if (!_lg_typecheck_apply_overload_19(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::ClearNode & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::ClearNode & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ClearNode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::ClearNode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::ClearNode & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::ClearNode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::OccluderNode & node)
	static int _bind_apply_overload_20(lua_State *L) {
		if (!_lg_typecheck_apply_overload_20(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::OccluderNode & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::OccluderNode & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::OccluderNode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::OccluderNode & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::OccluderNode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osg::NodeVisitor::apply(osg::OcclusionQueryNode & node)
	static int _bind_apply_overload_21(lua_State *L) {
		if (!_lg_typecheck_apply_overload_21(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::apply(osg::OcclusionQueryNode & node) function, expected prototype:\nvoid osg::NodeVisitor::apply(osg::OcclusionQueryNode & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::OcclusionQueryNode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::apply function");
		}
		osg::OcclusionQueryNode & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::apply(osg::OcclusionQueryNode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// Overload binder for osg::NodeVisitor::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);
		if (_lg_typecheck_apply_overload_3(L)) return _bind_apply_overload_3(L);
		if (_lg_typecheck_apply_overload_4(L)) return _bind_apply_overload_4(L);
		if (_lg_typecheck_apply_overload_5(L)) return _bind_apply_overload_5(L);
		if (_lg_typecheck_apply_overload_6(L)) return _bind_apply_overload_6(L);
		if (_lg_typecheck_apply_overload_7(L)) return _bind_apply_overload_7(L);
		if (_lg_typecheck_apply_overload_8(L)) return _bind_apply_overload_8(L);
		if (_lg_typecheck_apply_overload_9(L)) return _bind_apply_overload_9(L);
		if (_lg_typecheck_apply_overload_10(L)) return _bind_apply_overload_10(L);
		if (_lg_typecheck_apply_overload_11(L)) return _bind_apply_overload_11(L);
		if (_lg_typecheck_apply_overload_12(L)) return _bind_apply_overload_12(L);
		if (_lg_typecheck_apply_overload_13(L)) return _bind_apply_overload_13(L);
		if (_lg_typecheck_apply_overload_14(L)) return _bind_apply_overload_14(L);
		if (_lg_typecheck_apply_overload_15(L)) return _bind_apply_overload_15(L);
		if (_lg_typecheck_apply_overload_16(L)) return _bind_apply_overload_16(L);
		if (_lg_typecheck_apply_overload_17(L)) return _bind_apply_overload_17(L);
		if (_lg_typecheck_apply_overload_18(L)) return _bind_apply_overload_18(L);
		if (_lg_typecheck_apply_overload_19(L)) return _bind_apply_overload_19(L);
		if (_lg_typecheck_apply_overload_20(L)) return _bind_apply_overload_20(L);
		if (_lg_typecheck_apply_overload_21(L)) return _bind_apply_overload_21(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Node &)\n  apply(osg::Geode &)\n  apply(osg::Billboard &)\n  apply(osg::Group &)\n  apply(osg::Projection &)\n  apply(osg::CoordinateSystemNode &)\n  apply(osg::ClipNode &)\n  apply(osg::TexGenNode &)\n  apply(osg::LightSource &)\n  apply(osg::Transform &)\n  apply(osg::Camera &)\n  apply(osg::CameraView &)\n  apply(osg::MatrixTransform &)\n  apply(osg::PositionAttitudeTransform &)\n  apply(osg::Switch &)\n  apply(osg::Sequence &)\n  apply(osg::LOD &)\n  apply(osg::PagedLOD &)\n  apply(osg::ClearNode &)\n  apply(osg::OccluderNode &)\n  apply(osg::OcclusionQueryNode &)\n");
		return 0;
	}

	// void osg::NodeVisitor::setDatabaseRequestHandler(osg::NodeVisitor::DatabaseRequestHandler * handler)
	static int _bind_setDatabaseRequestHandler(lua_State *L) {
		if (!_lg_typecheck_setDatabaseRequestHandler(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::setDatabaseRequestHandler(osg::NodeVisitor::DatabaseRequestHandler * handler) function, expected prototype:\nvoid osg::NodeVisitor::setDatabaseRequestHandler(osg::NodeVisitor::DatabaseRequestHandler * handler)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor::DatabaseRequestHandler* handler=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor::DatabaseRequestHandler >(L,2));

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::setDatabaseRequestHandler(osg::NodeVisitor::DatabaseRequestHandler *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDatabaseRequestHandler(handler);

		return 0;
	}

	// osg::NodeVisitor::DatabaseRequestHandler * osg::NodeVisitor::getDatabaseRequestHandler()
	static int _bind_getDatabaseRequestHandler_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDatabaseRequestHandler_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodeVisitor::DatabaseRequestHandler * osg::NodeVisitor::getDatabaseRequestHandler() function, expected prototype:\nosg::NodeVisitor::DatabaseRequestHandler * osg::NodeVisitor::getDatabaseRequestHandler()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::NodeVisitor::DatabaseRequestHandler * osg::NodeVisitor::getDatabaseRequestHandler(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::NodeVisitor::DatabaseRequestHandler * lret = self->getDatabaseRequestHandler();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodeVisitor::DatabaseRequestHandler >::push(L,lret,false);

		return 1;
	}

	// const osg::NodeVisitor::DatabaseRequestHandler * osg::NodeVisitor::getDatabaseRequestHandler() const
	static int _bind_getDatabaseRequestHandler_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDatabaseRequestHandler_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::NodeVisitor::DatabaseRequestHandler * osg::NodeVisitor::getDatabaseRequestHandler() const function, expected prototype:\nconst osg::NodeVisitor::DatabaseRequestHandler * osg::NodeVisitor::getDatabaseRequestHandler() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::NodeVisitor::DatabaseRequestHandler * osg::NodeVisitor::getDatabaseRequestHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::NodeVisitor::DatabaseRequestHandler * lret = self->getDatabaseRequestHandler();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodeVisitor::DatabaseRequestHandler >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::NodeVisitor::getDatabaseRequestHandler
	static int _bind_getDatabaseRequestHandler(lua_State *L) {
		if (_lg_typecheck_getDatabaseRequestHandler_overload_1(L)) return _bind_getDatabaseRequestHandler_overload_1(L);
		if (_lg_typecheck_getDatabaseRequestHandler_overload_2(L)) return _bind_getDatabaseRequestHandler_overload_2(L);

		luaL_error(L, "error in function getDatabaseRequestHandler, cannot match any of the overloads for function getDatabaseRequestHandler:\n  getDatabaseRequestHandler()\n  getDatabaseRequestHandler()\n");
		return 0;
	}

	// void osg::NodeVisitor::setImageRequestHandler(osg::NodeVisitor::ImageRequestHandler * handler)
	static int _bind_setImageRequestHandler(lua_State *L) {
		if (!_lg_typecheck_setImageRequestHandler(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::setImageRequestHandler(osg::NodeVisitor::ImageRequestHandler * handler) function, expected prototype:\nvoid osg::NodeVisitor::setImageRequestHandler(osg::NodeVisitor::ImageRequestHandler * handler)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor::ImageRequestHandler* handler=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor::ImageRequestHandler >(L,2));

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::setImageRequestHandler(osg::NodeVisitor::ImageRequestHandler *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setImageRequestHandler(handler);

		return 0;
	}

	// osg::NodeVisitor::ImageRequestHandler * osg::NodeVisitor::getImageRequestHandler()
	static int _bind_getImageRequestHandler_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImageRequestHandler_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodeVisitor::ImageRequestHandler * osg::NodeVisitor::getImageRequestHandler() function, expected prototype:\nosg::NodeVisitor::ImageRequestHandler * osg::NodeVisitor::getImageRequestHandler()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::NodeVisitor::ImageRequestHandler * osg::NodeVisitor::getImageRequestHandler(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::NodeVisitor::ImageRequestHandler * lret = self->getImageRequestHandler();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodeVisitor::ImageRequestHandler >::push(L,lret,false);

		return 1;
	}

	// const osg::NodeVisitor::ImageRequestHandler * osg::NodeVisitor::getImageRequestHandler() const
	static int _bind_getImageRequestHandler_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImageRequestHandler_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::NodeVisitor::ImageRequestHandler * osg::NodeVisitor::getImageRequestHandler() const function, expected prototype:\nconst osg::NodeVisitor::ImageRequestHandler * osg::NodeVisitor::getImageRequestHandler() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::NodeVisitor::ImageRequestHandler * osg::NodeVisitor::getImageRequestHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::NodeVisitor::ImageRequestHandler * lret = self->getImageRequestHandler();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodeVisitor::ImageRequestHandler >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::NodeVisitor::getImageRequestHandler
	static int _bind_getImageRequestHandler(lua_State *L) {
		if (_lg_typecheck_getImageRequestHandler_overload_1(L)) return _bind_getImageRequestHandler_overload_1(L);
		if (_lg_typecheck_getImageRequestHandler_overload_2(L)) return _bind_getImageRequestHandler_overload_2(L);

		luaL_error(L, "error in function getImageRequestHandler, cannot match any of the overloads for function getImageRequestHandler:\n  getImageRequestHandler()\n  getImageRequestHandler()\n");
		return 0;
	}

	// void osg::NodeVisitor::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::NodeVisitor::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeVisitor::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// const char * osg::NodeVisitor::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::NodeVisitor::base_libraryName() const function, expected prototype:\nconst char * osg::NodeVisitor::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::NodeVisitor::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->NodeVisitor::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::NodeVisitor::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::NodeVisitor::base_className() const function, expected prototype:\nconst char * osg::NodeVisitor::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::NodeVisitor::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->NodeVisitor::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::NodeVisitor::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::base_reset() function, expected prototype:\nvoid osg::NodeVisitor::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::base_reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeVisitor::reset();

		return 0;
	}

	// osg::Vec3f osg::NodeVisitor::base_getEyePoint() const
	static int _bind_base_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osg::NodeVisitor::base_getEyePoint() const function, expected prototype:\nosg::Vec3f osg::NodeVisitor::base_getEyePoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osg::NodeVisitor::base_getEyePoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->NodeVisitor::getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osg::NodeVisitor::base_getViewPoint() const
	static int _bind_base_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osg::NodeVisitor::base_getViewPoint() const function, expected prototype:\nosg::Vec3f osg::NodeVisitor::base_getViewPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osg::NodeVisitor::base_getViewPoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->NodeVisitor::getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osg::NodeVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osg::NodeVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osg::NodeVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::NodeVisitor::base_getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::NodeVisitor::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->NodeVisitor::getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::NodeVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceFromEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osg::NodeVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osg::NodeVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::NodeVisitor::base_getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::NodeVisitor::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->NodeVisitor::getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::NodeVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in float osg::NodeVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osg::NodeVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::NodeVisitor::base_getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::NodeVisitor::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->NodeVisitor::getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::NodeVisitor::base_apply(osg::Node & node)
	static int _bind_base_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::base_apply(osg::Node & node) function, expected prototype:\nvoid osg::NodeVisitor::base_apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::base_apply function");
		}
		osg::Node & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::base_apply(osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeVisitor::apply(node);

		return 0;
	}

	// void osg::NodeVisitor::base_apply(osg::Geode & node)
	static int _bind_base_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::base_apply(osg::Geode & node) function, expected prototype:\nvoid osg::NodeVisitor::base_apply(osg::Geode & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::base_apply function");
		}
		osg::Geode & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::base_apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeVisitor::apply(node);

		return 0;
	}

	// void osg::NodeVisitor::base_apply(osg::Billboard & node)
	static int _bind_base_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::base_apply(osg::Billboard & node) function, expected prototype:\nvoid osg::NodeVisitor::base_apply(osg::Billboard & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Billboard* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::base_apply function");
		}
		osg::Billboard & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::base_apply(osg::Billboard &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeVisitor::apply(node);

		return 0;
	}

	// void osg::NodeVisitor::base_apply(osg::Group & node)
	static int _bind_base_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::base_apply(osg::Group & node) function, expected prototype:\nvoid osg::NodeVisitor::base_apply(osg::Group & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Group* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::base_apply function");
		}
		osg::Group & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::base_apply(osg::Group &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeVisitor::apply(node);

		return 0;
	}

	// void osg::NodeVisitor::base_apply(osg::Projection & node)
	static int _bind_base_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::base_apply(osg::Projection & node) function, expected prototype:\nvoid osg::NodeVisitor::base_apply(osg::Projection & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Projection* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Projection >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::base_apply function");
		}
		osg::Projection & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::base_apply(osg::Projection &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeVisitor::apply(node);

		return 0;
	}

	// void osg::NodeVisitor::base_apply(osg::CoordinateSystemNode & node)
	static int _bind_base_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::base_apply(osg::CoordinateSystemNode & node) function, expected prototype:\nvoid osg::NodeVisitor::base_apply(osg::CoordinateSystemNode & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::CoordinateSystemNode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::CoordinateSystemNode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::base_apply function");
		}
		osg::CoordinateSystemNode & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::base_apply(osg::CoordinateSystemNode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeVisitor::apply(node);

		return 0;
	}

	// void osg::NodeVisitor::base_apply(osg::ClipNode & node)
	static int _bind_base_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::base_apply(osg::ClipNode & node) function, expected prototype:\nvoid osg::NodeVisitor::base_apply(osg::ClipNode & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ClipNode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::ClipNode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::base_apply function");
		}
		osg::ClipNode & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::base_apply(osg::ClipNode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeVisitor::apply(node);

		return 0;
	}

	// void osg::NodeVisitor::base_apply(osg::TexGenNode & node)
	static int _bind_base_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::base_apply(osg::TexGenNode & node) function, expected prototype:\nvoid osg::NodeVisitor::base_apply(osg::TexGenNode & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::TexGenNode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::TexGenNode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::base_apply function");
		}
		osg::TexGenNode & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::base_apply(osg::TexGenNode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeVisitor::apply(node);

		return 0;
	}

	// void osg::NodeVisitor::base_apply(osg::LightSource & node)
	static int _bind_base_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::base_apply(osg::LightSource & node) function, expected prototype:\nvoid osg::NodeVisitor::base_apply(osg::LightSource & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::LightSource* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::base_apply function");
		}
		osg::LightSource & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::base_apply(osg::LightSource &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeVisitor::apply(node);

		return 0;
	}

	// void osg::NodeVisitor::base_apply(osg::Transform & node)
	static int _bind_base_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::base_apply(osg::Transform & node) function, expected prototype:\nvoid osg::NodeVisitor::base_apply(osg::Transform & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Transform* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::base_apply function");
		}
		osg::Transform & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::base_apply(osg::Transform &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeVisitor::apply(node);

		return 0;
	}

	// void osg::NodeVisitor::base_apply(osg::Camera & node)
	static int _bind_base_apply_overload_11(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::base_apply(osg::Camera & node) function, expected prototype:\nvoid osg::NodeVisitor::base_apply(osg::Camera & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::base_apply function");
		}
		osg::Camera & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::base_apply(osg::Camera &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeVisitor::apply(node);

		return 0;
	}

	// void osg::NodeVisitor::base_apply(osg::CameraView & node)
	static int _bind_base_apply_overload_12(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_12(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::base_apply(osg::CameraView & node) function, expected prototype:\nvoid osg::NodeVisitor::base_apply(osg::CameraView & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::CameraView* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::CameraView >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::base_apply function");
		}
		osg::CameraView & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::base_apply(osg::CameraView &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeVisitor::apply(node);

		return 0;
	}

	// void osg::NodeVisitor::base_apply(osg::MatrixTransform & node)
	static int _bind_base_apply_overload_13(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_13(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::base_apply(osg::MatrixTransform & node) function, expected prototype:\nvoid osg::NodeVisitor::base_apply(osg::MatrixTransform & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::MatrixTransform* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::MatrixTransform >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::base_apply function");
		}
		osg::MatrixTransform & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::base_apply(osg::MatrixTransform &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeVisitor::apply(node);

		return 0;
	}

	// void osg::NodeVisitor::base_apply(osg::PositionAttitudeTransform & node)
	static int _bind_base_apply_overload_14(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_14(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::base_apply(osg::PositionAttitudeTransform & node) function, expected prototype:\nvoid osg::NodeVisitor::base_apply(osg::PositionAttitudeTransform & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::PositionAttitudeTransform* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::PositionAttitudeTransform >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::base_apply function");
		}
		osg::PositionAttitudeTransform & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::base_apply(osg::PositionAttitudeTransform &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeVisitor::apply(node);

		return 0;
	}

	// void osg::NodeVisitor::base_apply(osg::Switch & node)
	static int _bind_base_apply_overload_15(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_15(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::base_apply(osg::Switch & node) function, expected prototype:\nvoid osg::NodeVisitor::base_apply(osg::Switch & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Switch* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Switch >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::base_apply function");
		}
		osg::Switch & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::base_apply(osg::Switch &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeVisitor::apply(node);

		return 0;
	}

	// void osg::NodeVisitor::base_apply(osg::Sequence & node)
	static int _bind_base_apply_overload_16(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_16(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::base_apply(osg::Sequence & node) function, expected prototype:\nvoid osg::NodeVisitor::base_apply(osg::Sequence & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Sequence* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Sequence >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::base_apply function");
		}
		osg::Sequence & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::base_apply(osg::Sequence &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeVisitor::apply(node);

		return 0;
	}

	// void osg::NodeVisitor::base_apply(osg::LOD & node)
	static int _bind_base_apply_overload_17(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_17(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::base_apply(osg::LOD & node) function, expected prototype:\nvoid osg::NodeVisitor::base_apply(osg::LOD & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::LOD* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::LOD >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::base_apply function");
		}
		osg::LOD & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::base_apply(osg::LOD &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeVisitor::apply(node);

		return 0;
	}

	// void osg::NodeVisitor::base_apply(osg::PagedLOD & node)
	static int _bind_base_apply_overload_18(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_18(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::base_apply(osg::PagedLOD & node) function, expected prototype:\nvoid osg::NodeVisitor::base_apply(osg::PagedLOD & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::PagedLOD* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::base_apply function");
		}
		osg::PagedLOD & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::base_apply(osg::PagedLOD &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeVisitor::apply(node);

		return 0;
	}

	// void osg::NodeVisitor::base_apply(osg::ClearNode & node)
	static int _bind_base_apply_overload_19(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_19(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::base_apply(osg::ClearNode & node) function, expected prototype:\nvoid osg::NodeVisitor::base_apply(osg::ClearNode & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ClearNode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::ClearNode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::base_apply function");
		}
		osg::ClearNode & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::base_apply(osg::ClearNode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeVisitor::apply(node);

		return 0;
	}

	// void osg::NodeVisitor::base_apply(osg::OccluderNode & node)
	static int _bind_base_apply_overload_20(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_20(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::base_apply(osg::OccluderNode & node) function, expected prototype:\nvoid osg::NodeVisitor::base_apply(osg::OccluderNode & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::OccluderNode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::OccluderNode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::base_apply function");
		}
		osg::OccluderNode & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::base_apply(osg::OccluderNode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeVisitor::apply(node);

		return 0;
	}

	// void osg::NodeVisitor::base_apply(osg::OcclusionQueryNode & node)
	static int _bind_base_apply_overload_21(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_21(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::base_apply(osg::OcclusionQueryNode & node) function, expected prototype:\nvoid osg::NodeVisitor::base_apply(osg::OcclusionQueryNode & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::OcclusionQueryNode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::OcclusionQueryNode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeVisitor::base_apply function");
		}
		osg::OcclusionQueryNode & node=*node_ptr;

		osg::NodeVisitor* self=Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::base_apply(osg::OcclusionQueryNode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeVisitor::apply(node);

		return 0;
	}

	// Overload binder for osg::NodeVisitor::base_apply
	static int _bind_base_apply(lua_State *L) {
		if (_lg_typecheck_base_apply_overload_1(L)) return _bind_base_apply_overload_1(L);
		if (_lg_typecheck_base_apply_overload_2(L)) return _bind_base_apply_overload_2(L);
		if (_lg_typecheck_base_apply_overload_3(L)) return _bind_base_apply_overload_3(L);
		if (_lg_typecheck_base_apply_overload_4(L)) return _bind_base_apply_overload_4(L);
		if (_lg_typecheck_base_apply_overload_5(L)) return _bind_base_apply_overload_5(L);
		if (_lg_typecheck_base_apply_overload_6(L)) return _bind_base_apply_overload_6(L);
		if (_lg_typecheck_base_apply_overload_7(L)) return _bind_base_apply_overload_7(L);
		if (_lg_typecheck_base_apply_overload_8(L)) return _bind_base_apply_overload_8(L);
		if (_lg_typecheck_base_apply_overload_9(L)) return _bind_base_apply_overload_9(L);
		if (_lg_typecheck_base_apply_overload_10(L)) return _bind_base_apply_overload_10(L);
		if (_lg_typecheck_base_apply_overload_11(L)) return _bind_base_apply_overload_11(L);
		if (_lg_typecheck_base_apply_overload_12(L)) return _bind_base_apply_overload_12(L);
		if (_lg_typecheck_base_apply_overload_13(L)) return _bind_base_apply_overload_13(L);
		if (_lg_typecheck_base_apply_overload_14(L)) return _bind_base_apply_overload_14(L);
		if (_lg_typecheck_base_apply_overload_15(L)) return _bind_base_apply_overload_15(L);
		if (_lg_typecheck_base_apply_overload_16(L)) return _bind_base_apply_overload_16(L);
		if (_lg_typecheck_base_apply_overload_17(L)) return _bind_base_apply_overload_17(L);
		if (_lg_typecheck_base_apply_overload_18(L)) return _bind_base_apply_overload_18(L);
		if (_lg_typecheck_base_apply_overload_19(L)) return _bind_base_apply_overload_19(L);
		if (_lg_typecheck_base_apply_overload_20(L)) return _bind_base_apply_overload_20(L);
		if (_lg_typecheck_base_apply_overload_21(L)) return _bind_base_apply_overload_21(L);

		luaL_error(L, "error in function base_apply, cannot match any of the overloads for function base_apply:\n  base_apply(osg::Node &)\n  base_apply(osg::Geode &)\n  base_apply(osg::Billboard &)\n  base_apply(osg::Group &)\n  base_apply(osg::Projection &)\n  base_apply(osg::CoordinateSystemNode &)\n  base_apply(osg::ClipNode &)\n  base_apply(osg::TexGenNode &)\n  base_apply(osg::LightSource &)\n  base_apply(osg::Transform &)\n  base_apply(osg::Camera &)\n  base_apply(osg::CameraView &)\n  base_apply(osg::MatrixTransform &)\n  base_apply(osg::PositionAttitudeTransform &)\n  base_apply(osg::Switch &)\n  base_apply(osg::Sequence &)\n  base_apply(osg::LOD &)\n  base_apply(osg::PagedLOD &)\n  base_apply(osg::ClearNode &)\n  base_apply(osg::OccluderNode &)\n  base_apply(osg::OcclusionQueryNode &)\n");
		return 0;
	}


	// Operator binds:

};

osg::NodeVisitor* LunaTraits< osg::NodeVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_NodeVisitor::_bind_ctor(L);
}

void LunaTraits< osg::NodeVisitor >::_bind_dtor(osg::NodeVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::NodeVisitor >::className[] = "NodeVisitor";
const char LunaTraits< osg::NodeVisitor >::fullName[] = "osg::NodeVisitor";
const char LunaTraits< osg::NodeVisitor >::moduleName[] = "osg";
const char* LunaTraits< osg::NodeVisitor >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::NodeVisitor >::hash = 49057446;
const int LunaTraits< osg::NodeVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::NodeVisitor >::methods[] = {
	{"libraryName", &luna_wrapper_osg_NodeVisitor::_bind_libraryName},
	{"className", &luna_wrapper_osg_NodeVisitor::_bind_className},
	{"reset", &luna_wrapper_osg_NodeVisitor::_bind_reset},
	{"setVisitorType", &luna_wrapper_osg_NodeVisitor::_bind_setVisitorType},
	{"getVisitorType", &luna_wrapper_osg_NodeVisitor::_bind_getVisitorType},
	{"setTraversalNumber", &luna_wrapper_osg_NodeVisitor::_bind_setTraversalNumber},
	{"getTraversalNumber", &luna_wrapper_osg_NodeVisitor::_bind_getTraversalNumber},
	{"setFrameStamp", &luna_wrapper_osg_NodeVisitor::_bind_setFrameStamp},
	{"getFrameStamp", &luna_wrapper_osg_NodeVisitor::_bind_getFrameStamp},
	{"setTraversalMask", &luna_wrapper_osg_NodeVisitor::_bind_setTraversalMask},
	{"getTraversalMask", &luna_wrapper_osg_NodeVisitor::_bind_getTraversalMask},
	{"setNodeMaskOverride", &luna_wrapper_osg_NodeVisitor::_bind_setNodeMaskOverride},
	{"getNodeMaskOverride", &luna_wrapper_osg_NodeVisitor::_bind_getNodeMaskOverride},
	{"validNodeMask", &luna_wrapper_osg_NodeVisitor::_bind_validNodeMask},
	{"setTraversalMode", &luna_wrapper_osg_NodeVisitor::_bind_setTraversalMode},
	{"getTraversalMode", &luna_wrapper_osg_NodeVisitor::_bind_getTraversalMode},
	{"setUserData", &luna_wrapper_osg_NodeVisitor::_bind_setUserData},
	{"getUserData", &luna_wrapper_osg_NodeVisitor::_bind_getUserData},
	{"traverse", &luna_wrapper_osg_NodeVisitor::_bind_traverse},
	{"pushOntoNodePath", &luna_wrapper_osg_NodeVisitor::_bind_pushOntoNodePath},
	{"popFromNodePath", &luna_wrapper_osg_NodeVisitor::_bind_popFromNodePath},
	{"getNodePath", &luna_wrapper_osg_NodeVisitor::_bind_getNodePath},
	{"getEyePoint", &luna_wrapper_osg_NodeVisitor::_bind_getEyePoint},
	{"getViewPoint", &luna_wrapper_osg_NodeVisitor::_bind_getViewPoint},
	{"getDistanceToEyePoint", &luna_wrapper_osg_NodeVisitor::_bind_getDistanceToEyePoint},
	{"getDistanceFromEyePoint", &luna_wrapper_osg_NodeVisitor::_bind_getDistanceFromEyePoint},
	{"getDistanceToViewPoint", &luna_wrapper_osg_NodeVisitor::_bind_getDistanceToViewPoint},
	{"apply", &luna_wrapper_osg_NodeVisitor::_bind_apply},
	{"setDatabaseRequestHandler", &luna_wrapper_osg_NodeVisitor::_bind_setDatabaseRequestHandler},
	{"getDatabaseRequestHandler", &luna_wrapper_osg_NodeVisitor::_bind_getDatabaseRequestHandler},
	{"setImageRequestHandler", &luna_wrapper_osg_NodeVisitor::_bind_setImageRequestHandler},
	{"getImageRequestHandler", &luna_wrapper_osg_NodeVisitor::_bind_getImageRequestHandler},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_NodeVisitor::_bind_base_setThreadSafeRefUnref},
	{"base_libraryName", &luna_wrapper_osg_NodeVisitor::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_NodeVisitor::_bind_base_className},
	{"base_reset", &luna_wrapper_osg_NodeVisitor::_bind_base_reset},
	{"base_getEyePoint", &luna_wrapper_osg_NodeVisitor::_bind_base_getEyePoint},
	{"base_getViewPoint", &luna_wrapper_osg_NodeVisitor::_bind_base_getViewPoint},
	{"base_getDistanceToEyePoint", &luna_wrapper_osg_NodeVisitor::_bind_base_getDistanceToEyePoint},
	{"base_getDistanceFromEyePoint", &luna_wrapper_osg_NodeVisitor::_bind_base_getDistanceFromEyePoint},
	{"base_getDistanceToViewPoint", &luna_wrapper_osg_NodeVisitor::_bind_base_getDistanceToViewPoint},
	{"base_apply", &luna_wrapper_osg_NodeVisitor::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osg_NodeVisitor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_NodeVisitor::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_NodeVisitor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::NodeVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_NodeVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::NodeVisitor >::enumValues[] = {
	{"TRAVERSE_NONE", osg::NodeVisitor::TRAVERSE_NONE},
	{"TRAVERSE_PARENTS", osg::NodeVisitor::TRAVERSE_PARENTS},
	{"TRAVERSE_ALL_CHILDREN", osg::NodeVisitor::TRAVERSE_ALL_CHILDREN},
	{"TRAVERSE_ACTIVE_CHILDREN", osg::NodeVisitor::TRAVERSE_ACTIVE_CHILDREN},
	{"NODE_VISITOR", osg::NodeVisitor::NODE_VISITOR},
	{"UPDATE_VISITOR", osg::NodeVisitor::UPDATE_VISITOR},
	{"EVENT_VISITOR", osg::NodeVisitor::EVENT_VISITOR},
	{"COLLECT_OCCLUDER_VISITOR", osg::NodeVisitor::COLLECT_OCCLUDER_VISITOR},
	{"CULL_VISITOR", osg::NodeVisitor::CULL_VISITOR},
	{0,0}
};


