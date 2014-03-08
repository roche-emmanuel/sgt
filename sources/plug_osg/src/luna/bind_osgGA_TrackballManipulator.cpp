#include <plug_common.h>

#include <luna/wrappers/wrapper_osgGA_TrackballManipulator.h>

class luna_wrapper_osgGA_TrackballManipulator {
public:
	typedef Luna< osgGA::TrackballManipulator > luna_t;

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

		osgGA::TrackballManipulator* self= (osgGA::TrackballManipulator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgGA::TrackballManipulator >::push(L,self,false);
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
		//osgGA::TrackballManipulator* ptr= dynamic_cast< osgGA::TrackballManipulator* >(Luna< osg::Referenced >::check(L,1));
		osgGA::TrackballManipulator* ptr= luna_caster< osg::Referenced, osgGA::TrackballManipulator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::TrackballManipulator >::push(L,ptr,false);
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

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
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
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_event(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setCoordinateFrameCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_updateCamera(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setHomePosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getHomePosition(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setAutoComputeHomePosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeHomePosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getNode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getNode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setVerticalAxisFixed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setAllowThrow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setAnimationTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_finishAnimation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_home_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		if( (!(Luna< osgGA::GUIActionAdapter >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_home_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_init(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setByMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setByInverseMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getInverseMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setTransformation_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,80263306) ) return false;
		if( (!(Luna< osg::Quat >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setTransformation_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getTransformation_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,80263306) ) return false;
		if( (!(Luna< osg::Quat >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getTransformation_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setCenter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setRotation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setDistance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setTrackballSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setWheelZoomFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setMinimumDistance(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getFusionDistanceMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getFusionDistanceValue(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::TrackballManipulator::TrackballManipulator(int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS)
	static osgGA::TrackballManipulator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::TrackballManipulator::TrackballManipulator(int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS) function, expected prototype:\nosgGA::TrackballManipulator::TrackballManipulator(int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>0 ? (int)lua_tointeger(L,1) : (int)osgGA::StandardManipulator::DEFAULT_SETTINGS;

		return new osgGA::TrackballManipulator(flags);
	}

	// osgGA::TrackballManipulator::TrackballManipulator(const osgGA::TrackballManipulator & tm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY)
	static osgGA::TrackballManipulator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::TrackballManipulator::TrackballManipulator(const osgGA::TrackballManipulator & tm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgGA::TrackballManipulator::TrackballManipulator(const osgGA::TrackballManipulator & tm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgGA::TrackballManipulator* tm_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1));
		if( !tm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tm in osgGA::TrackballManipulator::TrackballManipulator function");
		}
		const osgGA::TrackballManipulator & tm=*tm_ptr;
		const osg::CopyOp* copyOp_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyOp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyOp in osgGA::TrackballManipulator::TrackballManipulator function");
		}
		const osg::CopyOp & copyOp=luatop>1 ? *copyOp_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgGA::TrackballManipulator(tm, copyOp);
	}

	// osgGA::TrackballManipulator::TrackballManipulator(lua_Table * data, int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS)
	static osgGA::TrackballManipulator* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::TrackballManipulator::TrackballManipulator(lua_Table * data, int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS) function, expected prototype:\nosgGA::TrackballManipulator::TrackballManipulator(lua_Table * data, int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)osgGA::StandardManipulator::DEFAULT_SETTINGS;

		return new wrapper_osgGA_TrackballManipulator(L,NULL, flags);
	}

	// osgGA::TrackballManipulator::TrackballManipulator(lua_Table * data, const osgGA::TrackballManipulator & tm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY)
	static osgGA::TrackballManipulator* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::TrackballManipulator::TrackballManipulator(lua_Table * data, const osgGA::TrackballManipulator & tm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgGA::TrackballManipulator::TrackballManipulator(lua_Table * data, const osgGA::TrackballManipulator & tm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgGA::TrackballManipulator* tm_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,2));
		if( !tm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tm in osgGA::TrackballManipulator::TrackballManipulator function");
		}
		const osgGA::TrackballManipulator & tm=*tm_ptr;
		const osg::CopyOp* copyOp_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyOp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyOp in osgGA::TrackballManipulator::TrackballManipulator function");
		}
		const osg::CopyOp & copyOp=luatop>2 ? *copyOp_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgGA_TrackballManipulator(L,NULL, tm, copyOp);
	}

	// Overload binder for osgGA::TrackballManipulator::TrackballManipulator
	static osgGA::TrackballManipulator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function TrackballManipulator, cannot match any of the overloads for function TrackballManipulator:\n  TrackballManipulator(int)\n  TrackballManipulator(const osgGA::TrackballManipulator &, const osg::CopyOp &)\n  TrackballManipulator(lua_Table *, int)\n  TrackballManipulator(lua_Table *, const osgGA::TrackballManipulator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgGA::TrackballManipulator::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::TrackballManipulator::cloneType() const function, expected prototype:\nosg::Object * osgGA::TrackballManipulator::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::TrackballManipulator::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgGA::TrackballManipulator::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::TrackballManipulator::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgGA::TrackballManipulator::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::TrackballManipulator::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::TrackballManipulator::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::TrackballManipulator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::TrackballManipulator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgGA::TrackballManipulator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::TrackballManipulator::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgGA::TrackballManipulator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::TrackballManipulator::libraryName() const function, expected prototype:\nconst char * osgGA::TrackballManipulator::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::TrackballManipulator::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgGA::TrackballManipulator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::TrackballManipulator::className() const function, expected prototype:\nconst char * osgGA::TrackballManipulator::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::TrackballManipulator::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::TrackballManipulator::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgGA::TrackballManipulator::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_setName(const std::string & name) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::setName(name);

		return 0;
	}

	// void osgGA::TrackballManipulator::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_computeDataVariance() function, expected prototype:\nvoid osgGA::TrackballManipulator::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::computeDataVariance();

		return 0;
	}

	// void osgGA::TrackballManipulator::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgGA::TrackballManipulator::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgGA::TrackballManipulator::base_getUserData() function, expected prototype:\nosg::Referenced * osgGA::TrackballManipulator::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgGA::TrackballManipulator::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->TrackballManipulator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgGA::TrackballManipulator::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgGA::TrackballManipulator::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgGA::TrackballManipulator::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgGA::TrackballManipulator::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->TrackballManipulator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::TrackballManipulator::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgGA::TrackballManipulator::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgGA::TrackballManipulator::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::releaseGLObjects(_arg1);

		return 0;
	}

	// void osgGA::TrackballManipulator::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	static int _bind_base_event(lua_State *L) {
		if (!_lg_typecheck_base_event(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_event(osg::NodeVisitor *, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::event(nv, drawable);

		return 0;
	}

	// void osgGA::TrackballManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)
	static int _bind_base_setCoordinateFrameCallback(lua_State *L) {
		if (!_lg_typecheck_base_setCoordinateFrameCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::CameraManipulator::CoordinateFrameCallback* cb=(Luna< osg::Referenced >::checkSubType< osgGA::CameraManipulator::CoordinateFrameCallback >(L,2));

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::setCoordinateFrameCallback(cb);

		return 0;
	}

	// void osgGA::TrackballManipulator::base_updateCamera(osg::Camera & camera)
	static int _bind_base_updateCamera(lua_State *L) {
		if (!_lg_typecheck_base_updateCamera(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_updateCamera(osg::Camera & camera) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_updateCamera(osg::Camera & camera)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera* camera_ptr=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));
		if( !camera_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg camera in osgGA::TrackballManipulator::base_updateCamera function");
		}
		osg::Camera & camera=*camera_ptr;

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_updateCamera(osg::Camera &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::updateCamera(camera);

		return 0;
	}

	// void osgGA::TrackballManipulator::base_setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)
	static int _bind_base_setHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_setHomePosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::TrackballManipulator::base_setHomePosition function");
		}
		const osg::Vec3d & eye=*eye_ptr;
		const osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::TrackballManipulator::base_setHomePosition function");
		}
		const osg::Vec3d & center=*center_ptr;
		const osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::TrackballManipulator::base_setHomePosition function");
		}
		const osg::Vec3d & up=*up_ptr;
		bool autoComputeHomePosition=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_setHomePosition(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::setHomePosition(eye, center, up, autoComputeHomePosition);

		return 0;
	}

	// void osgGA::TrackballManipulator::base_getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const
	static int _bind_base_getHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_getHomePosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const function, expected prototype:\nvoid osgGA::TrackballManipulator::base_getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::TrackballManipulator::base_getHomePosition function");
		}
		osg::Vec3d & eye=*eye_ptr;
		osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::TrackballManipulator::base_getHomePosition function");
		}
		osg::Vec3d & center=*center_ptr;
		osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::TrackballManipulator::base_getHomePosition function");
		}
		osg::Vec3d & up=*up_ptr;

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_getHomePosition(osg::Vec3d &, osg::Vec3d &, osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::getHomePosition(eye, center, up);

		return 0;
	}

	// void osgGA::TrackballManipulator::base_setAutoComputeHomePosition(bool flag)
	static int _bind_base_setAutoComputeHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_setAutoComputeHomePosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_setAutoComputeHomePosition(bool flag) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_setAutoComputeHomePosition(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_setAutoComputeHomePosition(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::setAutoComputeHomePosition(flag);

		return 0;
	}

	// void osgGA::TrackballManipulator::base_computeHomePosition(const osg::Camera * camera = NULL, bool useBoundingBox = false)
	static int _bind_base_computeHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_computeHomePosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_computeHomePosition(const osg::Camera * camera = NULL, bool useBoundingBox = false) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_computeHomePosition(const osg::Camera * camera = NULL, bool useBoundingBox = false)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Camera* camera=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2)) : (const osg::Camera*)((void *) 0);
		bool useBoundingBox=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_computeHomePosition(const osg::Camera *, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::computeHomePosition(camera, useBoundingBox);

		return 0;
	}

	// void osgGA::TrackballManipulator::base_setNode(osg::Node * arg1)
	static int _bind_base_setNode(lua_State *L) {
		if (!_lg_typecheck_base_setNode(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_setNode(osg::Node * arg1) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_setNode(osg::Node * arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* _arg1=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_setNode(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::setNode(_arg1);

		return 0;
	}

	// const osg::Node * osgGA::TrackballManipulator::base_getNode() const
	static int _bind_base_getNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getNode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Node * osgGA::TrackballManipulator::base_getNode() const function, expected prototype:\nconst osg::Node * osgGA::TrackballManipulator::base_getNode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Node * osgGA::TrackballManipulator::base_getNode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Node * lret = self->TrackballManipulator::getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osgGA::TrackballManipulator::base_getNode()
	static int _bind_base_getNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getNode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node * osgGA::TrackballManipulator::base_getNode() function, expected prototype:\nosg::Node * osgGA::TrackballManipulator::base_getNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node * osgGA::TrackballManipulator::base_getNode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node * lret = self->TrackballManipulator::getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::TrackballManipulator::base_getNode
	static int _bind_base_getNode(lua_State *L) {
		if (_lg_typecheck_base_getNode_overload_1(L)) return _bind_base_getNode_overload_1(L);
		if (_lg_typecheck_base_getNode_overload_2(L)) return _bind_base_getNode_overload_2(L);

		luaL_error(L, "error in function base_getNode, cannot match any of the overloads for function base_getNode:\n  base_getNode()\n  base_getNode()\n");
		return 0;
	}

	// void osgGA::TrackballManipulator::base_setVerticalAxisFixed(bool value)
	static int _bind_base_setVerticalAxisFixed(lua_State *L) {
		if (!_lg_typecheck_base_setVerticalAxisFixed(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_setVerticalAxisFixed(bool value) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_setVerticalAxisFixed(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_setVerticalAxisFixed(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::setVerticalAxisFixed(value);

		return 0;
	}

	// void osgGA::TrackballManipulator::base_setAllowThrow(bool allowThrow)
	static int _bind_base_setAllowThrow(lua_State *L) {
		if (!_lg_typecheck_base_setAllowThrow(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_setAllowThrow(bool allowThrow) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_setAllowThrow(bool allowThrow)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool allowThrow=(bool)(lua_toboolean(L,2)==1);

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_setAllowThrow(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::setAllowThrow(allowThrow);

		return 0;
	}

	// void osgGA::TrackballManipulator::base_setAnimationTime(const double t)
	static int _bind_base_setAnimationTime(lua_State *L) {
		if (!_lg_typecheck_base_setAnimationTime(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_setAnimationTime(const double t) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_setAnimationTime(const double t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const double t=(const double)lua_tonumber(L,2);

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_setAnimationTime(const double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::setAnimationTime(t);

		return 0;
	}

	// void osgGA::TrackballManipulator::base_finishAnimation()
	static int _bind_base_finishAnimation(lua_State *L) {
		if (!_lg_typecheck_base_finishAnimation(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_finishAnimation() function, expected prototype:\nvoid osgGA::TrackballManipulator::base_finishAnimation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_finishAnimation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::finishAnimation();

		return 0;
	}

	// void osgGA::TrackballManipulator::base_home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_base_home_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_home_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::TrackballManipulator::base_home function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::TrackballManipulator::base_home function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::home(_arg1, _arg2);

		return 0;
	}

	// void osgGA::TrackballManipulator::base_home(double arg1)
	static int _bind_base_home_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_home_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_home(double arg1) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_home(double arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double _arg1=(double)lua_tonumber(L,2);

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_home(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::home(_arg1);

		return 0;
	}

	// Overload binder for osgGA::TrackballManipulator::base_home
	static int _bind_base_home(lua_State *L) {
		if (_lg_typecheck_base_home_overload_1(L)) return _bind_base_home_overload_1(L);
		if (_lg_typecheck_base_home_overload_2(L)) return _bind_base_home_overload_2(L);

		luaL_error(L, "error in function base_home, cannot match any of the overloads for function base_home:\n  base_home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)\n  base_home(double)\n");
		return 0;
	}

	// void osgGA::TrackballManipulator::base_init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_base_init(lua_State *L) {
		if (!_lg_typecheck_base_init(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::TrackballManipulator::base_init function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::TrackballManipulator::base_init function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_init(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::init(_arg1, _arg2);

		return 0;
	}

	// bool osgGA::TrackballManipulator::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_base_handle(lua_State *L) {
		if (!_lg_typecheck_base_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::TrackballManipulator::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nbool osgGA::TrackballManipulator::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::TrackballManipulator::base_handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::TrackballManipulator::base_handle function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::TrackballManipulator::base_handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TrackballManipulator::handle(ea, us);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::TrackballManipulator::base_getUsage(osg::ApplicationUsage & arg1) const
	static int _bind_base_getUsage(lua_State *L) {
		if (!_lg_typecheck_base_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_getUsage(osg::ApplicationUsage & arg1) const function, expected prototype:\nvoid osgGA::TrackballManipulator::base_getUsage(osg::ApplicationUsage & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::TrackballManipulator::base_getUsage function");
		}
		osg::ApplicationUsage & _arg1=*_arg1_ptr;

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::getUsage(_arg1);

		return 0;
	}

	// void osgGA::TrackballManipulator::base_setByMatrix(const osg::Matrixd & matrix)
	static int _bind_base_setByMatrix(lua_State *L) {
		if (!_lg_typecheck_base_setByMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_setByMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_setByMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::TrackballManipulator::base_setByMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_setByMatrix(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::setByMatrix(matrix);

		return 0;
	}

	// void osgGA::TrackballManipulator::base_setByInverseMatrix(const osg::Matrixd & matrix)
	static int _bind_base_setByInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_base_setByInverseMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_setByInverseMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_setByInverseMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::TrackballManipulator::base_setByInverseMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_setByInverseMatrix(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::setByInverseMatrix(matrix);

		return 0;
	}

	// osg::Matrixd osgGA::TrackballManipulator::base_getMatrix() const
	static int _bind_base_getMatrix(lua_State *L) {
		if (!_lg_typecheck_base_getMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::TrackballManipulator::base_getMatrix() const function, expected prototype:\nosg::Matrixd osgGA::TrackballManipulator::base_getMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::TrackballManipulator::base_getMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->TrackballManipulator::getMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgGA::TrackballManipulator::base_getInverseMatrix() const
	static int _bind_base_getInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_base_getInverseMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::TrackballManipulator::base_getInverseMatrix() const function, expected prototype:\nosg::Matrixd osgGA::TrackballManipulator::base_getInverseMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::TrackballManipulator::base_getInverseMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->TrackballManipulator::getInverseMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// void osgGA::TrackballManipulator::base_setTransformation(const osg::Vec3d & eye, const osg::Quat & rotation)
	static int _bind_base_setTransformation_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_setTransformation_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_setTransformation(const osg::Vec3d & eye, const osg::Quat & rotation) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_setTransformation(const osg::Vec3d & eye, const osg::Quat & rotation)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::TrackballManipulator::base_setTransformation function");
		}
		const osg::Vec3d & eye=*eye_ptr;
		const osg::Quat* rotation_ptr=(Luna< osg::Quat >::check(L,3));
		if( !rotation_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rotation in osgGA::TrackballManipulator::base_setTransformation function");
		}
		const osg::Quat & rotation=*rotation_ptr;

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_setTransformation(const osg::Vec3d &, const osg::Quat &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::setTransformation(eye, rotation);

		return 0;
	}

	// void osgGA::TrackballManipulator::base_setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up)
	static int _bind_base_setTransformation_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_setTransformation_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::TrackballManipulator::base_setTransformation function");
		}
		const osg::Vec3d & eye=*eye_ptr;
		const osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::TrackballManipulator::base_setTransformation function");
		}
		const osg::Vec3d & center=*center_ptr;
		const osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::TrackballManipulator::base_setTransformation function");
		}
		const osg::Vec3d & up=*up_ptr;

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_setTransformation(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::setTransformation(eye, center, up);

		return 0;
	}

	// Overload binder for osgGA::TrackballManipulator::base_setTransformation
	static int _bind_base_setTransformation(lua_State *L) {
		if (_lg_typecheck_base_setTransformation_overload_1(L)) return _bind_base_setTransformation_overload_1(L);
		if (_lg_typecheck_base_setTransformation_overload_2(L)) return _bind_base_setTransformation_overload_2(L);

		luaL_error(L, "error in function base_setTransformation, cannot match any of the overloads for function base_setTransformation:\n  base_setTransformation(const osg::Vec3d &, const osg::Quat &)\n  base_setTransformation(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &)\n");
		return 0;
	}

	// void osgGA::TrackballManipulator::base_getTransformation(osg::Vec3d & eye, osg::Quat & rotation) const
	static int _bind_base_getTransformation_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getTransformation_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_getTransformation(osg::Vec3d & eye, osg::Quat & rotation) const function, expected prototype:\nvoid osgGA::TrackballManipulator::base_getTransformation(osg::Vec3d & eye, osg::Quat & rotation) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::TrackballManipulator::base_getTransformation function");
		}
		osg::Vec3d & eye=*eye_ptr;
		osg::Quat* rotation_ptr=(Luna< osg::Quat >::check(L,3));
		if( !rotation_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rotation in osgGA::TrackballManipulator::base_getTransformation function");
		}
		osg::Quat & rotation=*rotation_ptr;

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_getTransformation(osg::Vec3d &, osg::Quat &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::getTransformation(eye, rotation);

		return 0;
	}

	// void osgGA::TrackballManipulator::base_getTransformation(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const
	static int _bind_base_getTransformation_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getTransformation_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_getTransformation(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const function, expected prototype:\nvoid osgGA::TrackballManipulator::base_getTransformation(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::TrackballManipulator::base_getTransformation function");
		}
		osg::Vec3d & eye=*eye_ptr;
		osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::TrackballManipulator::base_getTransformation function");
		}
		osg::Vec3d & center=*center_ptr;
		osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::TrackballManipulator::base_getTransformation function");
		}
		osg::Vec3d & up=*up_ptr;

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_getTransformation(osg::Vec3d &, osg::Vec3d &, osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::getTransformation(eye, center, up);

		return 0;
	}

	// Overload binder for osgGA::TrackballManipulator::base_getTransformation
	static int _bind_base_getTransformation(lua_State *L) {
		if (_lg_typecheck_base_getTransformation_overload_1(L)) return _bind_base_getTransformation_overload_1(L);
		if (_lg_typecheck_base_getTransformation_overload_2(L)) return _bind_base_getTransformation_overload_2(L);

		luaL_error(L, "error in function base_getTransformation, cannot match any of the overloads for function base_getTransformation:\n  base_getTransformation(osg::Vec3d &, osg::Quat &)\n  base_getTransformation(osg::Vec3d &, osg::Vec3d &, osg::Vec3d &)\n");
		return 0;
	}

	// void osgGA::TrackballManipulator::base_setCenter(const osg::Vec3d & center)
	static int _bind_base_setCenter(lua_State *L) {
		if (!_lg_typecheck_base_setCenter(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_setCenter(const osg::Vec3d & center) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_setCenter(const osg::Vec3d & center)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::TrackballManipulator::base_setCenter function");
		}
		const osg::Vec3d & center=*center_ptr;

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_setCenter(const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::setCenter(center);

		return 0;
	}

	// void osgGA::TrackballManipulator::base_setRotation(const osg::Quat & rotation)
	static int _bind_base_setRotation(lua_State *L) {
		if (!_lg_typecheck_base_setRotation(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_setRotation(const osg::Quat & rotation) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_setRotation(const osg::Quat & rotation)\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* rotation_ptr=(Luna< osg::Quat >::check(L,2));
		if( !rotation_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rotation in osgGA::TrackballManipulator::base_setRotation function");
		}
		const osg::Quat & rotation=*rotation_ptr;

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_setRotation(const osg::Quat &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::setRotation(rotation);

		return 0;
	}

	// void osgGA::TrackballManipulator::base_setDistance(double distance)
	static int _bind_base_setDistance(lua_State *L) {
		if (!_lg_typecheck_base_setDistance(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_setDistance(double distance) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_setDistance(double distance)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double distance=(double)lua_tonumber(L,2);

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_setDistance(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::setDistance(distance);

		return 0;
	}

	// void osgGA::TrackballManipulator::base_setTrackballSize(const double & size)
	static int _bind_base_setTrackballSize(lua_State *L) {
		if (!_lg_typecheck_base_setTrackballSize(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_setTrackballSize(const double & size) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_setTrackballSize(const double & size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const double size=(const double)lua_tonumber(L,2);

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_setTrackballSize(const double &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::setTrackballSize(size);

		return 0;
	}

	// void osgGA::TrackballManipulator::base_setWheelZoomFactor(double wheelZoomFactor)
	static int _bind_base_setWheelZoomFactor(lua_State *L) {
		if (!_lg_typecheck_base_setWheelZoomFactor(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_setWheelZoomFactor(double wheelZoomFactor) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_setWheelZoomFactor(double wheelZoomFactor)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double wheelZoomFactor=(double)lua_tonumber(L,2);

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_setWheelZoomFactor(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::setWheelZoomFactor(wheelZoomFactor);

		return 0;
	}

	// void osgGA::TrackballManipulator::base_setMinimumDistance(const double & minimumDistance, bool relativeToModelSize = false)
	static int _bind_base_setMinimumDistance(lua_State *L) {
		if (!_lg_typecheck_base_setMinimumDistance(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::TrackballManipulator::base_setMinimumDistance(const double & minimumDistance, bool relativeToModelSize = false) function, expected prototype:\nvoid osgGA::TrackballManipulator::base_setMinimumDistance(const double & minimumDistance, bool relativeToModelSize = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const double minimumDistance=(const double)lua_tonumber(L,2);
		bool relativeToModelSize=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::TrackballManipulator::base_setMinimumDistance(const double &, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrackballManipulator::setMinimumDistance(minimumDistance, relativeToModelSize);

		return 0;
	}

	// osgUtil::SceneView::FusionDistanceMode osgGA::TrackballManipulator::base_getFusionDistanceMode() const
	static int _bind_base_getFusionDistanceMode(lua_State *L) {
		if (!_lg_typecheck_base_getFusionDistanceMode(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::SceneView::FusionDistanceMode osgGA::TrackballManipulator::base_getFusionDistanceMode() const function, expected prototype:\nosgUtil::SceneView::FusionDistanceMode osgGA::TrackballManipulator::base_getFusionDistanceMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::SceneView::FusionDistanceMode osgGA::TrackballManipulator::base_getFusionDistanceMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::SceneView::FusionDistanceMode lret = self->TrackballManipulator::getFusionDistanceMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgGA::TrackballManipulator::base_getFusionDistanceValue() const
	static int _bind_base_getFusionDistanceValue(lua_State *L) {
		if (!_lg_typecheck_base_getFusionDistanceValue(L)) {
			luaL_error(L, "luna typecheck failed in float osgGA::TrackballManipulator::base_getFusionDistanceValue() const function, expected prototype:\nfloat osgGA::TrackballManipulator::base_getFusionDistanceValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgGA::TrackballManipulator::base_getFusionDistanceValue() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->TrackballManipulator::getFusionDistanceValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Object * osgGA::TrackballManipulator::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::TrackballManipulator::base_cloneType() const function, expected prototype:\nosg::Object * osgGA::TrackballManipulator::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::TrackballManipulator::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->TrackballManipulator::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgGA::TrackballManipulator::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::TrackballManipulator::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgGA::TrackballManipulator::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::TrackballManipulator::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::TrackballManipulator::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->TrackballManipulator::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::TrackballManipulator::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::TrackballManipulator::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgGA::TrackballManipulator::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::TrackballManipulator::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TrackballManipulator::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgGA::TrackballManipulator::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::TrackballManipulator::base_libraryName() const function, expected prototype:\nconst char * osgGA::TrackballManipulator::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::TrackballManipulator::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TrackballManipulator::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgGA::TrackballManipulator::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::TrackballManipulator::base_className() const function, expected prototype:\nconst char * osgGA::TrackballManipulator::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::TrackballManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::TrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::TrackballManipulator::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TrackballManipulator::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osgGA::TrackballManipulator* LunaTraits< osgGA::TrackballManipulator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_TrackballManipulator::_bind_ctor(L);
}

void LunaTraits< osgGA::TrackballManipulator >::_bind_dtor(osgGA::TrackballManipulator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::TrackballManipulator >::className[] = "TrackballManipulator";
const char LunaTraits< osgGA::TrackballManipulator >::fullName[] = "osgGA::TrackballManipulator";
const char LunaTraits< osgGA::TrackballManipulator >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::TrackballManipulator >::parents[] = {"osgGA.OrbitManipulator", 0};
const int LunaTraits< osgGA::TrackballManipulator >::hash = 71145248;
const int LunaTraits< osgGA::TrackballManipulator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::TrackballManipulator >::methods[] = {
	{"cloneType", &luna_wrapper_osgGA_TrackballManipulator::_bind_cloneType},
	{"clone", &luna_wrapper_osgGA_TrackballManipulator::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgGA_TrackballManipulator::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgGA_TrackballManipulator::_bind_libraryName},
	{"className", &luna_wrapper_osgGA_TrackballManipulator::_bind_className},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_releaseGLObjects},
	{"base_event", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_event},
	{"base_setCoordinateFrameCallback", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_setCoordinateFrameCallback},
	{"base_updateCamera", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_updateCamera},
	{"base_setHomePosition", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_setHomePosition},
	{"base_getHomePosition", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_getHomePosition},
	{"base_setAutoComputeHomePosition", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_setAutoComputeHomePosition},
	{"base_computeHomePosition", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_computeHomePosition},
	{"base_setNode", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_setNode},
	{"base_getNode", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_getNode},
	{"base_setVerticalAxisFixed", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_setVerticalAxisFixed},
	{"base_setAllowThrow", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_setAllowThrow},
	{"base_setAnimationTime", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_setAnimationTime},
	{"base_finishAnimation", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_finishAnimation},
	{"base_home", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_home},
	{"base_init", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_init},
	{"base_handle", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_handle},
	{"base_getUsage", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_getUsage},
	{"base_setByMatrix", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_setByMatrix},
	{"base_setByInverseMatrix", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_setByInverseMatrix},
	{"base_getMatrix", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_getMatrix},
	{"base_getInverseMatrix", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_getInverseMatrix},
	{"base_setTransformation", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_setTransformation},
	{"base_getTransformation", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_getTransformation},
	{"base_setCenter", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_setCenter},
	{"base_setRotation", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_setRotation},
	{"base_setDistance", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_setDistance},
	{"base_setTrackballSize", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_setTrackballSize},
	{"base_setWheelZoomFactor", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_setWheelZoomFactor},
	{"base_setMinimumDistance", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_setMinimumDistance},
	{"base_getFusionDistanceMode", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_getFusionDistanceMode},
	{"base_getFusionDistanceValue", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_getFusionDistanceValue},
	{"base_cloneType", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgGA_TrackballManipulator::_bind_base_className},
	{"fromVoid", &luna_wrapper_osgGA_TrackballManipulator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgGA_TrackballManipulator::_bind_asVoid},
	{"getTable", &luna_wrapper_osgGA_TrackballManipulator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::TrackballManipulator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_TrackballManipulator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::TrackballManipulator >::enumValues[] = {
	{0,0}
};


