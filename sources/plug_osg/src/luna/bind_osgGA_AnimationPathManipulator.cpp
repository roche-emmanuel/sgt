#include <plug_common.h>

#include <luna/wrappers/wrapper_osgGA_AnimationPathManipulator.h>

class luna_wrapper_osgGA_AnimationPathManipulator {
public:
	typedef Luna< osgGA::AnimationPathManipulator > luna_t;

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

		osgGA::AnimationPathManipulator* self= (osgGA::AnimationPathManipulator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgGA::AnimationPathManipulator >::push(L,self,false);
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
		//osgGA::AnimationPathManipulator* ptr= dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,1));
		osgGA::AnimationPathManipulator* ptr= luna_caster< osg::Referenced, osgGA::AnimationPathManipulator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::AnimationPathManipulator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( luatop>0 && (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTimeScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTimeScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTimeOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTimeOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAnimationCompletedCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAnimationCompletedCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAnimationCompletedCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPrintOutTimingInfo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPrintOutTimingInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setByMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setByInverseMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInverseMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAnimationPath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAnimationPath_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAnimationPath_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_valid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_init(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_home_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		if( (!(Luna< osgGA::GUIActionAdapter >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_home_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUsage(lua_State *L) {
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

	inline static bool _lg_typecheck_base_getFusionDistanceMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getFusionDistanceValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_init(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::AnimationPathManipulator::AnimationPathManipulator(osg::AnimationPath * animationPath = 0)
	static osgGA::AnimationPathManipulator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::AnimationPathManipulator::AnimationPathManipulator(osg::AnimationPath * animationPath = 0) function, expected prototype:\nosgGA::AnimationPathManipulator::AnimationPathManipulator(osg::AnimationPath * animationPath = 0)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::AnimationPath* animationPath=luatop>0 ? (Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1)) : (osg::AnimationPath*)0;

		return new osgGA::AnimationPathManipulator(animationPath);
	}

	// osgGA::AnimationPathManipulator::AnimationPathManipulator(const std::string & filename)
	static osgGA::AnimationPathManipulator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::AnimationPathManipulator::AnimationPathManipulator(const std::string & filename) function, expected prototype:\nosgGA::AnimationPathManipulator::AnimationPathManipulator(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,1),lua_objlen(L,1));

		return new osgGA::AnimationPathManipulator(filename);
	}

	// osgGA::AnimationPathManipulator::AnimationPathManipulator(lua_Table * data, osg::AnimationPath * animationPath = 0)
	static osgGA::AnimationPathManipulator* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::AnimationPathManipulator::AnimationPathManipulator(lua_Table * data, osg::AnimationPath * animationPath = 0) function, expected prototype:\nosgGA::AnimationPathManipulator::AnimationPathManipulator(lua_Table * data, osg::AnimationPath * animationPath = 0)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::AnimationPath* animationPath=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,2)) : (osg::AnimationPath*)0;

		return new wrapper_osgGA_AnimationPathManipulator(L,NULL, animationPath);
	}

	// osgGA::AnimationPathManipulator::AnimationPathManipulator(lua_Table * data, const std::string & filename)
	static osgGA::AnimationPathManipulator* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::AnimationPathManipulator::AnimationPathManipulator(lua_Table * data, const std::string & filename) function, expected prototype:\nosgGA::AnimationPathManipulator::AnimationPathManipulator(lua_Table * data, const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_osgGA_AnimationPathManipulator(L,NULL, filename);
	}

	// Overload binder for osgGA::AnimationPathManipulator::AnimationPathManipulator
	static osgGA::AnimationPathManipulator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function AnimationPathManipulator, cannot match any of the overloads for function AnimationPathManipulator:\n  AnimationPathManipulator(osg::AnimationPath *)\n  AnimationPathManipulator(const std::string &)\n  AnimationPathManipulator(lua_Table *, osg::AnimationPath *)\n  AnimationPathManipulator(lua_Table *, const std::string &)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgGA::AnimationPathManipulator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::AnimationPathManipulator::className() const function, expected prototype:\nconst char * osgGA::AnimationPathManipulator::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::AnimationPathManipulator::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::AnimationPathManipulator::setTimeScale(double s)
	static int _bind_setTimeScale(lua_State *L) {
		if (!_lg_typecheck_setTimeScale(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::setTimeScale(double s) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::setTimeScale(double s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double s=(double)lua_tonumber(L,2);

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::setTimeScale(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTimeScale(s);

		return 0;
	}

	// double osgGA::AnimationPathManipulator::getTimeScale() const
	static int _bind_getTimeScale(lua_State *L) {
		if (!_lg_typecheck_getTimeScale(L)) {
			luaL_error(L, "luna typecheck failed in double osgGA::AnimationPathManipulator::getTimeScale() const function, expected prototype:\ndouble osgGA::AnimationPathManipulator::getTimeScale() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgGA::AnimationPathManipulator::getTimeScale() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getTimeScale();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::AnimationPathManipulator::setTimeOffset(double o)
	static int _bind_setTimeOffset(lua_State *L) {
		if (!_lg_typecheck_setTimeOffset(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::setTimeOffset(double o) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::setTimeOffset(double o)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double o=(double)lua_tonumber(L,2);

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::setTimeOffset(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTimeOffset(o);

		return 0;
	}

	// double osgGA::AnimationPathManipulator::getTimeOffset() const
	static int _bind_getTimeOffset(lua_State *L) {
		if (!_lg_typecheck_getTimeOffset(L)) {
			luaL_error(L, "luna typecheck failed in double osgGA::AnimationPathManipulator::getTimeOffset() const function, expected prototype:\ndouble osgGA::AnimationPathManipulator::getTimeOffset() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgGA::AnimationPathManipulator::getTimeOffset() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getTimeOffset();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::AnimationPathManipulator::setAnimationCompletedCallback(osgGA::AnimationPathManipulator::AnimationCompletedCallback * acc)
	static int _bind_setAnimationCompletedCallback(lua_State *L) {
		if (!_lg_typecheck_setAnimationCompletedCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::setAnimationCompletedCallback(osgGA::AnimationPathManipulator::AnimationCompletedCallback * acc) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::setAnimationCompletedCallback(osgGA::AnimationPathManipulator::AnimationCompletedCallback * acc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::AnimationPathManipulator::AnimationCompletedCallback* acc=(Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator::AnimationCompletedCallback >(L,2));

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::setAnimationCompletedCallback(osgGA::AnimationPathManipulator::AnimationCompletedCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAnimationCompletedCallback(acc);

		return 0;
	}

	// osgGA::AnimationPathManipulator::AnimationCompletedCallback * osgGA::AnimationPathManipulator::getAnimationCompletedCallback()
	static int _bind_getAnimationCompletedCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getAnimationCompletedCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::AnimationPathManipulator::AnimationCompletedCallback * osgGA::AnimationPathManipulator::getAnimationCompletedCallback() function, expected prototype:\nosgGA::AnimationPathManipulator::AnimationCompletedCallback * osgGA::AnimationPathManipulator::getAnimationCompletedCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::AnimationPathManipulator::AnimationCompletedCallback * osgGA::AnimationPathManipulator::getAnimationCompletedCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgGA::AnimationPathManipulator::AnimationCompletedCallback * lret = self->getAnimationCompletedCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::push(L,lret,false);

		return 1;
	}

	// const osgGA::AnimationPathManipulator::AnimationCompletedCallback * osgGA::AnimationPathManipulator::getAnimationCompletedCallback() const
	static int _bind_getAnimationCompletedCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getAnimationCompletedCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgGA::AnimationPathManipulator::AnimationCompletedCallback * osgGA::AnimationPathManipulator::getAnimationCompletedCallback() const function, expected prototype:\nconst osgGA::AnimationPathManipulator::AnimationCompletedCallback * osgGA::AnimationPathManipulator::getAnimationCompletedCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgGA::AnimationPathManipulator::AnimationCompletedCallback * osgGA::AnimationPathManipulator::getAnimationCompletedCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgGA::AnimationPathManipulator::AnimationCompletedCallback * lret = self->getAnimationCompletedCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::AnimationPathManipulator::getAnimationCompletedCallback
	static int _bind_getAnimationCompletedCallback(lua_State *L) {
		if (_lg_typecheck_getAnimationCompletedCallback_overload_1(L)) return _bind_getAnimationCompletedCallback_overload_1(L);
		if (_lg_typecheck_getAnimationCompletedCallback_overload_2(L)) return _bind_getAnimationCompletedCallback_overload_2(L);

		luaL_error(L, "error in function getAnimationCompletedCallback, cannot match any of the overloads for function getAnimationCompletedCallback:\n  getAnimationCompletedCallback()\n  getAnimationCompletedCallback()\n");
		return 0;
	}

	// void osgGA::AnimationPathManipulator::setPrintOutTimingInfo(bool printOutTimingInfo)
	static int _bind_setPrintOutTimingInfo(lua_State *L) {
		if (!_lg_typecheck_setPrintOutTimingInfo(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::setPrintOutTimingInfo(bool printOutTimingInfo) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::setPrintOutTimingInfo(bool printOutTimingInfo)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool printOutTimingInfo=(bool)(lua_toboolean(L,2)==1);

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::setPrintOutTimingInfo(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPrintOutTimingInfo(printOutTimingInfo);

		return 0;
	}

	// bool osgGA::AnimationPathManipulator::getPrintOutTimingInfo() const
	static int _bind_getPrintOutTimingInfo(lua_State *L) {
		if (!_lg_typecheck_getPrintOutTimingInfo(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::AnimationPathManipulator::getPrintOutTimingInfo() const function, expected prototype:\nbool osgGA::AnimationPathManipulator::getPrintOutTimingInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::AnimationPathManipulator::getPrintOutTimingInfo() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getPrintOutTimingInfo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::AnimationPathManipulator::setByMatrix(const osg::Matrixd & matrix)
	static int _bind_setByMatrix(lua_State *L) {
		if (!_lg_typecheck_setByMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::setByMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::setByMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::AnimationPathManipulator::setByMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::setByMatrix(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setByMatrix(matrix);

		return 0;
	}

	// void osgGA::AnimationPathManipulator::setByInverseMatrix(const osg::Matrixd & matrix)
	static int _bind_setByInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_setByInverseMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::setByInverseMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::setByInverseMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::AnimationPathManipulator::setByInverseMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::setByInverseMatrix(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setByInverseMatrix(matrix);

		return 0;
	}

	// osg::Matrixd osgGA::AnimationPathManipulator::getMatrix() const
	static int _bind_getMatrix(lua_State *L) {
		if (!_lg_typecheck_getMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::AnimationPathManipulator::getMatrix() const function, expected prototype:\nosg::Matrixd osgGA::AnimationPathManipulator::getMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::AnimationPathManipulator::getMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->getMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgGA::AnimationPathManipulator::getInverseMatrix() const
	static int _bind_getInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_getInverseMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::AnimationPathManipulator::getInverseMatrix() const function, expected prototype:\nosg::Matrixd osgGA::AnimationPathManipulator::getInverseMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::AnimationPathManipulator::getInverseMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->getInverseMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// void osgGA::AnimationPathManipulator::setAnimationPath(osg::AnimationPath * animationPath)
	static int _bind_setAnimationPath(lua_State *L) {
		if (!_lg_typecheck_setAnimationPath(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::setAnimationPath(osg::AnimationPath * animationPath) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::setAnimationPath(osg::AnimationPath * animationPath)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::AnimationPath* animationPath=(Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,2));

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::setAnimationPath(osg::AnimationPath *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAnimationPath(animationPath);

		return 0;
	}

	// osg::AnimationPath * osgGA::AnimationPathManipulator::getAnimationPath()
	static int _bind_getAnimationPath_overload_1(lua_State *L) {
		if (!_lg_typecheck_getAnimationPath_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::AnimationPath * osgGA::AnimationPathManipulator::getAnimationPath() function, expected prototype:\nosg::AnimationPath * osgGA::AnimationPathManipulator::getAnimationPath()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::AnimationPath * osgGA::AnimationPathManipulator::getAnimationPath(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::AnimationPath * lret = self->getAnimationPath();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::AnimationPath >::push(L,lret,false);

		return 1;
	}

	// const osg::AnimationPath * osgGA::AnimationPathManipulator::getAnimationPath() const
	static int _bind_getAnimationPath_overload_2(lua_State *L) {
		if (!_lg_typecheck_getAnimationPath_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::AnimationPath * osgGA::AnimationPathManipulator::getAnimationPath() const function, expected prototype:\nconst osg::AnimationPath * osgGA::AnimationPathManipulator::getAnimationPath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::AnimationPath * osgGA::AnimationPathManipulator::getAnimationPath() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::AnimationPath * lret = self->getAnimationPath();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::AnimationPath >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::AnimationPathManipulator::getAnimationPath
	static int _bind_getAnimationPath(lua_State *L) {
		if (_lg_typecheck_getAnimationPath_overload_1(L)) return _bind_getAnimationPath_overload_1(L);
		if (_lg_typecheck_getAnimationPath_overload_2(L)) return _bind_getAnimationPath_overload_2(L);

		luaL_error(L, "error in function getAnimationPath, cannot match any of the overloads for function getAnimationPath:\n  getAnimationPath()\n  getAnimationPath()\n");
		return 0;
	}

	// bool osgGA::AnimationPathManipulator::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::AnimationPathManipulator::valid() const function, expected prototype:\nbool osgGA::AnimationPathManipulator::valid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::AnimationPathManipulator::valid() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::AnimationPathManipulator::init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::AnimationPathManipulator::init function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::AnimationPathManipulator::init function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::init(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->init(_arg1, _arg2);

		return 0;
	}

	// void osgGA::AnimationPathManipulator::home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_home_overload_1(lua_State *L) {
		if (!_lg_typecheck_home_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::AnimationPathManipulator::home function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::AnimationPathManipulator::home function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->home(_arg1, _arg2);

		return 0;
	}

	// void osgGA::AnimationPathManipulator::home(double arg1)
	static int _bind_home_overload_2(lua_State *L) {
		if (!_lg_typecheck_home_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::home(double arg1) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::home(double arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double _arg1=(double)lua_tonumber(L,2);

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::home(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->home(_arg1);

		return 0;
	}

	// Overload binder for osgGA::AnimationPathManipulator::home
	static int _bind_home(lua_State *L) {
		if (_lg_typecheck_home_overload_1(L)) return _bind_home_overload_1(L);
		if (_lg_typecheck_home_overload_2(L)) return _bind_home_overload_2(L);

		luaL_error(L, "error in function home, cannot match any of the overloads for function home:\n  home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)\n  home(double)\n");
		return 0;
	}

	// bool osgGA::AnimationPathManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::AnimationPathManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nbool osgGA::AnimationPathManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::AnimationPathManipulator::handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::AnimationPathManipulator::handle function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::AnimationPathManipulator::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->handle(ea, us);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::AnimationPathManipulator::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgGA::AnimationPathManipulator::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* usage_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgGA::AnimationPathManipulator::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getUsage(usage);

		return 0;
	}

	// void osgGA::AnimationPathManipulator::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimationPathManipulator::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgGA::AnimationPathManipulator::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::base_setName(const std::string & name) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimationPathManipulator::setName(name);

		return 0;
	}

	// void osgGA::AnimationPathManipulator::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::base_computeDataVariance() function, expected prototype:\nvoid osgGA::AnimationPathManipulator::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimationPathManipulator::computeDataVariance();

		return 0;
	}

	// void osgGA::AnimationPathManipulator::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimationPathManipulator::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgGA::AnimationPathManipulator::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgGA::AnimationPathManipulator::base_getUserData() function, expected prototype:\nosg::Referenced * osgGA::AnimationPathManipulator::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgGA::AnimationPathManipulator::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->AnimationPathManipulator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgGA::AnimationPathManipulator::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgGA::AnimationPathManipulator::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgGA::AnimationPathManipulator::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgGA::AnimationPathManipulator::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->AnimationPathManipulator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::AnimationPathManipulator::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgGA::AnimationPathManipulator::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgGA::AnimationPathManipulator::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimationPathManipulator::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgGA::AnimationPathManipulator::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::AnimationPathManipulator::base_cloneType() const function, expected prototype:\nosg::Object * osgGA::AnimationPathManipulator::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::AnimationPathManipulator::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->AnimationPathManipulator::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgGA::AnimationPathManipulator::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::AnimationPathManipulator::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgGA::AnimationPathManipulator::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::AnimationPathManipulator::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::AnimationPathManipulator::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->AnimationPathManipulator::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::AnimationPathManipulator::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::AnimationPathManipulator::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgGA::AnimationPathManipulator::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::AnimationPathManipulator::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AnimationPathManipulator::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgGA::AnimationPathManipulator::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::AnimationPathManipulator::base_libraryName() const function, expected prototype:\nconst char * osgGA::AnimationPathManipulator::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::AnimationPathManipulator::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->AnimationPathManipulator::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::AnimationPathManipulator::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	static int _bind_base_event(lua_State *L) {
		if (!_lg_typecheck_base_event(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::base_event(osg::NodeVisitor *, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimationPathManipulator::event(nv, drawable);

		return 0;
	}

	// void osgGA::AnimationPathManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)
	static int _bind_base_setCoordinateFrameCallback(lua_State *L) {
		if (!_lg_typecheck_base_setCoordinateFrameCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::CameraManipulator::CoordinateFrameCallback* cb=(Luna< osg::Referenced >::checkSubType< osgGA::CameraManipulator::CoordinateFrameCallback >(L,2));

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimationPathManipulator::setCoordinateFrameCallback(cb);

		return 0;
	}

	// void osgGA::AnimationPathManipulator::base_updateCamera(osg::Camera & camera)
	static int _bind_base_updateCamera(lua_State *L) {
		if (!_lg_typecheck_base_updateCamera(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::base_updateCamera(osg::Camera & camera) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::base_updateCamera(osg::Camera & camera)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera* camera_ptr=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));
		if( !camera_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg camera in osgGA::AnimationPathManipulator::base_updateCamera function");
		}
		osg::Camera & camera=*camera_ptr;

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::base_updateCamera(osg::Camera &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimationPathManipulator::updateCamera(camera);

		return 0;
	}

	// osgUtil::SceneView::FusionDistanceMode osgGA::AnimationPathManipulator::base_getFusionDistanceMode() const
	static int _bind_base_getFusionDistanceMode(lua_State *L) {
		if (!_lg_typecheck_base_getFusionDistanceMode(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::SceneView::FusionDistanceMode osgGA::AnimationPathManipulator::base_getFusionDistanceMode() const function, expected prototype:\nosgUtil::SceneView::FusionDistanceMode osgGA::AnimationPathManipulator::base_getFusionDistanceMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::SceneView::FusionDistanceMode osgGA::AnimationPathManipulator::base_getFusionDistanceMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::SceneView::FusionDistanceMode lret = self->AnimationPathManipulator::getFusionDistanceMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgGA::AnimationPathManipulator::base_getFusionDistanceValue() const
	static int _bind_base_getFusionDistanceValue(lua_State *L) {
		if (!_lg_typecheck_base_getFusionDistanceValue(L)) {
			luaL_error(L, "luna typecheck failed in float osgGA::AnimationPathManipulator::base_getFusionDistanceValue() const function, expected prototype:\nfloat osgGA::AnimationPathManipulator::base_getFusionDistanceValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgGA::AnimationPathManipulator::base_getFusionDistanceValue() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->AnimationPathManipulator::getFusionDistanceValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::AnimationPathManipulator::base_setNode(osg::Node * arg1)
	static int _bind_base_setNode(lua_State *L) {
		if (!_lg_typecheck_base_setNode(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::base_setNode(osg::Node * arg1) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::base_setNode(osg::Node * arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* _arg1=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::base_setNode(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimationPathManipulator::setNode(_arg1);

		return 0;
	}

	// const osg::Node * osgGA::AnimationPathManipulator::base_getNode() const
	static int _bind_base_getNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getNode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Node * osgGA::AnimationPathManipulator::base_getNode() const function, expected prototype:\nconst osg::Node * osgGA::AnimationPathManipulator::base_getNode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Node * osgGA::AnimationPathManipulator::base_getNode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Node * lret = self->AnimationPathManipulator::getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osgGA::AnimationPathManipulator::base_getNode()
	static int _bind_base_getNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getNode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node * osgGA::AnimationPathManipulator::base_getNode() function, expected prototype:\nosg::Node * osgGA::AnimationPathManipulator::base_getNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node * osgGA::AnimationPathManipulator::base_getNode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node * lret = self->AnimationPathManipulator::getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::AnimationPathManipulator::base_getNode
	static int _bind_base_getNode(lua_State *L) {
		if (_lg_typecheck_base_getNode_overload_1(L)) return _bind_base_getNode_overload_1(L);
		if (_lg_typecheck_base_getNode_overload_2(L)) return _bind_base_getNode_overload_2(L);

		luaL_error(L, "error in function base_getNode, cannot match any of the overloads for function base_getNode:\n  base_getNode()\n  base_getNode()\n");
		return 0;
	}

	// void osgGA::AnimationPathManipulator::base_setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)
	static int _bind_base_setHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_setHomePosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::base_setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::base_setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::AnimationPathManipulator::base_setHomePosition function");
		}
		const osg::Vec3d & eye=*eye_ptr;
		const osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::AnimationPathManipulator::base_setHomePosition function");
		}
		const osg::Vec3d & center=*center_ptr;
		const osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::AnimationPathManipulator::base_setHomePosition function");
		}
		const osg::Vec3d & up=*up_ptr;
		bool autoComputeHomePosition=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::base_setHomePosition(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimationPathManipulator::setHomePosition(eye, center, up, autoComputeHomePosition);

		return 0;
	}

	// void osgGA::AnimationPathManipulator::base_getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const
	static int _bind_base_getHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_getHomePosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::base_getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const function, expected prototype:\nvoid osgGA::AnimationPathManipulator::base_getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::AnimationPathManipulator::base_getHomePosition function");
		}
		osg::Vec3d & eye=*eye_ptr;
		osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::AnimationPathManipulator::base_getHomePosition function");
		}
		osg::Vec3d & center=*center_ptr;
		osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::AnimationPathManipulator::base_getHomePosition function");
		}
		osg::Vec3d & up=*up_ptr;

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::base_getHomePosition(osg::Vec3d &, osg::Vec3d &, osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimationPathManipulator::getHomePosition(eye, center, up);

		return 0;
	}

	// void osgGA::AnimationPathManipulator::base_setAutoComputeHomePosition(bool flag)
	static int _bind_base_setAutoComputeHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_setAutoComputeHomePosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::base_setAutoComputeHomePosition(bool flag) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::base_setAutoComputeHomePosition(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::base_setAutoComputeHomePosition(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimationPathManipulator::setAutoComputeHomePosition(flag);

		return 0;
	}

	// void osgGA::AnimationPathManipulator::base_computeHomePosition(const osg::Camera * camera = NULL, bool useBoundingBox = false)
	static int _bind_base_computeHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_computeHomePosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::base_computeHomePosition(const osg::Camera * camera = NULL, bool useBoundingBox = false) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::base_computeHomePosition(const osg::Camera * camera = NULL, bool useBoundingBox = false)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Camera* camera=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2)) : (const osg::Camera*)((void *) 0);
		bool useBoundingBox=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::base_computeHomePosition(const osg::Camera *, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimationPathManipulator::computeHomePosition(camera, useBoundingBox);

		return 0;
	}

	// const char * osgGA::AnimationPathManipulator::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::AnimationPathManipulator::base_className() const function, expected prototype:\nconst char * osgGA::AnimationPathManipulator::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::AnimationPathManipulator::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->AnimationPathManipulator::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::AnimationPathManipulator::base_setByMatrix(const osg::Matrixd & matrix)
	static int _bind_base_setByMatrix(lua_State *L) {
		if (!_lg_typecheck_base_setByMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::base_setByMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::base_setByMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::AnimationPathManipulator::base_setByMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::base_setByMatrix(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimationPathManipulator::setByMatrix(matrix);

		return 0;
	}

	// void osgGA::AnimationPathManipulator::base_setByInverseMatrix(const osg::Matrixd & matrix)
	static int _bind_base_setByInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_base_setByInverseMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::base_setByInverseMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::base_setByInverseMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::AnimationPathManipulator::base_setByInverseMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::base_setByInverseMatrix(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimationPathManipulator::setByInverseMatrix(matrix);

		return 0;
	}

	// osg::Matrixd osgGA::AnimationPathManipulator::base_getMatrix() const
	static int _bind_base_getMatrix(lua_State *L) {
		if (!_lg_typecheck_base_getMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::AnimationPathManipulator::base_getMatrix() const function, expected prototype:\nosg::Matrixd osgGA::AnimationPathManipulator::base_getMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::AnimationPathManipulator::base_getMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->AnimationPathManipulator::getMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgGA::AnimationPathManipulator::base_getInverseMatrix() const
	static int _bind_base_getInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_base_getInverseMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::AnimationPathManipulator::base_getInverseMatrix() const function, expected prototype:\nosg::Matrixd osgGA::AnimationPathManipulator::base_getInverseMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::AnimationPathManipulator::base_getInverseMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->AnimationPathManipulator::getInverseMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// void osgGA::AnimationPathManipulator::base_init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_base_init(lua_State *L) {
		if (!_lg_typecheck_base_init(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::base_init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::base_init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::AnimationPathManipulator::base_init function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::AnimationPathManipulator::base_init function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::base_init(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimationPathManipulator::init(_arg1, _arg2);

		return 0;
	}

	// void osgGA::AnimationPathManipulator::base_home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_base_home_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_home_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::base_home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::base_home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::AnimationPathManipulator::base_home function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::AnimationPathManipulator::base_home function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::base_home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimationPathManipulator::home(_arg1, _arg2);

		return 0;
	}

	// void osgGA::AnimationPathManipulator::base_home(double arg1)
	static int _bind_base_home_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_home_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::base_home(double arg1) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::base_home(double arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double _arg1=(double)lua_tonumber(L,2);

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::base_home(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimationPathManipulator::home(_arg1);

		return 0;
	}

	// Overload binder for osgGA::AnimationPathManipulator::base_home
	static int _bind_base_home(lua_State *L) {
		if (_lg_typecheck_base_home_overload_1(L)) return _bind_base_home_overload_1(L);
		if (_lg_typecheck_base_home_overload_2(L)) return _bind_base_home_overload_2(L);

		luaL_error(L, "error in function base_home, cannot match any of the overloads for function base_home:\n  base_home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)\n  base_home(double)\n");
		return 0;
	}

	// bool osgGA::AnimationPathManipulator::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_base_handle(lua_State *L) {
		if (!_lg_typecheck_base_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::AnimationPathManipulator::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nbool osgGA::AnimationPathManipulator::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::AnimationPathManipulator::base_handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::AnimationPathManipulator::base_handle function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::AnimationPathManipulator::base_handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AnimationPathManipulator::handle(ea, us);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::AnimationPathManipulator::base_getUsage(osg::ApplicationUsage & usage) const
	static int _bind_base_getUsage(lua_State *L) {
		if (!_lg_typecheck_base_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::base_getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgGA::AnimationPathManipulator::base_getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* usage_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgGA::AnimationPathManipulator::base_getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgGA::AnimationPathManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::base_getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimationPathManipulator::getUsage(usage);

		return 0;
	}


	// Operator binds:

};

osgGA::AnimationPathManipulator* LunaTraits< osgGA::AnimationPathManipulator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_AnimationPathManipulator::_bind_ctor(L);
}

void LunaTraits< osgGA::AnimationPathManipulator >::_bind_dtor(osgGA::AnimationPathManipulator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::AnimationPathManipulator >::className[] = "AnimationPathManipulator";
const char LunaTraits< osgGA::AnimationPathManipulator >::fullName[] = "osgGA::AnimationPathManipulator";
const char LunaTraits< osgGA::AnimationPathManipulator >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::AnimationPathManipulator >::parents[] = {"osgGA.CameraManipulator", 0};
const int LunaTraits< osgGA::AnimationPathManipulator >::hash = 5735478;
const int LunaTraits< osgGA::AnimationPathManipulator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::AnimationPathManipulator >::methods[] = {
	{"className", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_className},
	{"setTimeScale", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_setTimeScale},
	{"getTimeScale", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_getTimeScale},
	{"setTimeOffset", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_setTimeOffset},
	{"getTimeOffset", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_getTimeOffset},
	{"setAnimationCompletedCallback", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_setAnimationCompletedCallback},
	{"getAnimationCompletedCallback", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_getAnimationCompletedCallback},
	{"setPrintOutTimingInfo", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_setPrintOutTimingInfo},
	{"getPrintOutTimingInfo", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_getPrintOutTimingInfo},
	{"setByMatrix", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_setByMatrix},
	{"setByInverseMatrix", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_setByInverseMatrix},
	{"getMatrix", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_getMatrix},
	{"getInverseMatrix", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_getInverseMatrix},
	{"setAnimationPath", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_setAnimationPath},
	{"getAnimationPath", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_getAnimationPath},
	{"valid", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_valid},
	{"init", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_init},
	{"home", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_home},
	{"handle", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_handle},
	{"getUsage", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_getUsage},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_libraryName},
	{"base_event", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_event},
	{"base_setCoordinateFrameCallback", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_setCoordinateFrameCallback},
	{"base_updateCamera", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_updateCamera},
	{"base_getFusionDistanceMode", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_getFusionDistanceMode},
	{"base_getFusionDistanceValue", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_getFusionDistanceValue},
	{"base_setNode", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_setNode},
	{"base_getNode", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_getNode},
	{"base_setHomePosition", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_setHomePosition},
	{"base_getHomePosition", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_getHomePosition},
	{"base_setAutoComputeHomePosition", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_setAutoComputeHomePosition},
	{"base_computeHomePosition", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_computeHomePosition},
	{"base_className", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_className},
	{"base_setByMatrix", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_setByMatrix},
	{"base_setByInverseMatrix", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_setByInverseMatrix},
	{"base_getMatrix", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_getMatrix},
	{"base_getInverseMatrix", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_getInverseMatrix},
	{"base_init", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_init},
	{"base_home", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_home},
	{"base_handle", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_handle},
	{"base_getUsage", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_base_getUsage},
	{"fromVoid", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_asVoid},
	{"getTable", &luna_wrapper_osgGA_AnimationPathManipulator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::AnimationPathManipulator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_AnimationPathManipulator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::AnimationPathManipulator >::enumValues[] = {
	{0,0}
};


