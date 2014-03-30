#include <plug_common.h>

#include <luna/wrappers/wrapper_osgGA_SphericalManipulator.h>

class luna_wrapper_osgGA_SphericalManipulator {
public:
	typedef Luna< osgGA::SphericalManipulator > luna_t;

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

		osgGA::SphericalManipulator* self= (osgGA::SphericalManipulator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgGA::SphericalManipulator >::push(L,self,false);
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
		//osgGA::SphericalManipulator* ptr= dynamic_cast< osgGA::SphericalManipulator* >(Luna< osg::Referenced >::check(L,1));
		osgGA::SphericalManipulator* ptr= luna_caster< osg::Referenced, osgGA::SphericalManipulator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::SphericalManipulator >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_className(lua_State *L) {
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

	inline static bool _lg_typecheck_getFusionDistanceMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFusionDistanceValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_init(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_zoomOn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65870735) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeHomePosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeViewPosition(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65870735) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,5,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCenter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCenter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDistance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDistance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHomeDistance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setHeading(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getHeading(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setElevation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElevtion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMinimumZoomScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMinimumZoomScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScroolWheelZoomDelta(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScroolWheelZoomDelta(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRotationMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRotationMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAllowThrow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAllowThrow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_computeHomePosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// osgGA::SphericalManipulator::SphericalManipulator()
	static osgGA::SphericalManipulator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::SphericalManipulator::SphericalManipulator() function, expected prototype:\nosgGA::SphericalManipulator::SphericalManipulator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgGA::SphericalManipulator();
	}

	// osgGA::SphericalManipulator::SphericalManipulator(lua_Table * data)
	static osgGA::SphericalManipulator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::SphericalManipulator::SphericalManipulator(lua_Table * data) function, expected prototype:\nosgGA::SphericalManipulator::SphericalManipulator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgGA_SphericalManipulator(L,NULL);
	}

	// Overload binder for osgGA::SphericalManipulator::SphericalManipulator
	static osgGA::SphericalManipulator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function SphericalManipulator, cannot match any of the overloads for function SphericalManipulator:\n  SphericalManipulator()\n  SphericalManipulator(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgGA::SphericalManipulator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::SphericalManipulator::className() const function, expected prototype:\nconst char * osgGA::SphericalManipulator::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::SphericalManipulator::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::SphericalManipulator::setByMatrix(const osg::Matrixd & matrix)
	static int _bind_setByMatrix(lua_State *L) {
		if (!_lg_typecheck_setByMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::setByMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::SphericalManipulator::setByMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::SphericalManipulator::setByMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::setByMatrix(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setByMatrix(matrix);

		return 0;
	}

	// void osgGA::SphericalManipulator::setByInverseMatrix(const osg::Matrixd & matrix)
	static int _bind_setByInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_setByInverseMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::setByInverseMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::SphericalManipulator::setByInverseMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::SphericalManipulator::setByInverseMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::setByInverseMatrix(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setByInverseMatrix(matrix);

		return 0;
	}

	// osg::Matrixd osgGA::SphericalManipulator::getMatrix() const
	static int _bind_getMatrix(lua_State *L) {
		if (!_lg_typecheck_getMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::SphericalManipulator::getMatrix() const function, expected prototype:\nosg::Matrixd osgGA::SphericalManipulator::getMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::SphericalManipulator::getMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->getMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgGA::SphericalManipulator::getInverseMatrix() const
	static int _bind_getInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_getInverseMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::SphericalManipulator::getInverseMatrix() const function, expected prototype:\nosg::Matrixd osgGA::SphericalManipulator::getInverseMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::SphericalManipulator::getInverseMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->getInverseMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osgUtil::SceneView::FusionDistanceMode osgGA::SphericalManipulator::getFusionDistanceMode() const
	static int _bind_getFusionDistanceMode(lua_State *L) {
		if (!_lg_typecheck_getFusionDistanceMode(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::SceneView::FusionDistanceMode osgGA::SphericalManipulator::getFusionDistanceMode() const function, expected prototype:\nosgUtil::SceneView::FusionDistanceMode osgGA::SphericalManipulator::getFusionDistanceMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::SceneView::FusionDistanceMode osgGA::SphericalManipulator::getFusionDistanceMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::SceneView::FusionDistanceMode lret = self->getFusionDistanceMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgGA::SphericalManipulator::getFusionDistanceValue() const
	static int _bind_getFusionDistanceValue(lua_State *L) {
		if (!_lg_typecheck_getFusionDistanceValue(L)) {
			luaL_error(L, "luna typecheck failed in float osgGA::SphericalManipulator::getFusionDistanceValue() const function, expected prototype:\nfloat osgGA::SphericalManipulator::getFusionDistanceValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgGA::SphericalManipulator::getFusionDistanceValue() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getFusionDistanceValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::SphericalManipulator::setNode(osg::Node * arg1)
	static int _bind_setNode(lua_State *L) {
		if (!_lg_typecheck_setNode(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::setNode(osg::Node * arg1) function, expected prototype:\nvoid osgGA::SphericalManipulator::setNode(osg::Node * arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* _arg1=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::setNode(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNode(_arg1);

		return 0;
	}

	// const osg::Node * osgGA::SphericalManipulator::getNode() const
	static int _bind_getNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Node * osgGA::SphericalManipulator::getNode() const function, expected prototype:\nconst osg::Node * osgGA::SphericalManipulator::getNode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Node * osgGA::SphericalManipulator::getNode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Node * lret = self->getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osgGA::SphericalManipulator::getNode()
	static int _bind_getNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node * osgGA::SphericalManipulator::getNode() function, expected prototype:\nosg::Node * osgGA::SphericalManipulator::getNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node * osgGA::SphericalManipulator::getNode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node * lret = self->getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::SphericalManipulator::getNode
	static int _bind_getNode(lua_State *L) {
		if (_lg_typecheck_getNode_overload_1(L)) return _bind_getNode_overload_1(L);
		if (_lg_typecheck_getNode_overload_2(L)) return _bind_getNode_overload_2(L);

		luaL_error(L, "error in function getNode, cannot match any of the overloads for function getNode:\n  getNode()\n  getNode()\n");
		return 0;
	}

	// void osgGA::SphericalManipulator::home(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_home_overload_1(lua_State *L) {
		if (!_lg_typecheck_home_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::home(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nvoid osgGA::SphericalManipulator::home(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::SphericalManipulator::home function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::SphericalManipulator::home function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->home(ea, us);

		return 0;
	}

	// void osgGA::SphericalManipulator::home(double arg1)
	static int _bind_home_overload_2(lua_State *L) {
		if (!_lg_typecheck_home_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::home(double arg1) function, expected prototype:\nvoid osgGA::SphericalManipulator::home(double arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double _arg1=(double)lua_tonumber(L,2);

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::home(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->home(_arg1);

		return 0;
	}

	// Overload binder for osgGA::SphericalManipulator::home
	static int _bind_home(lua_State *L) {
		if (_lg_typecheck_home_overload_1(L)) return _bind_home_overload_1(L);
		if (_lg_typecheck_home_overload_2(L)) return _bind_home_overload_2(L);

		luaL_error(L, "error in function home, cannot match any of the overloads for function home:\n  home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)\n  home(double)\n");
		return 0;
	}

	// void osgGA::SphericalManipulator::init(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::init(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nvoid osgGA::SphericalManipulator::init(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::SphericalManipulator::init function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::SphericalManipulator::init function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::init(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->init(ea, us);

		return 0;
	}

	// void osgGA::SphericalManipulator::zoomOn(const osg::BoundingSphered & bound)
	static int _bind_zoomOn(lua_State *L) {
		if (!_lg_typecheck_zoomOn(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::zoomOn(const osg::BoundingSphered & bound) function, expected prototype:\nvoid osgGA::SphericalManipulator::zoomOn(const osg::BoundingSphered & bound)\nClass arguments details:\narg 1 ID = 54337300\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BoundingSphered* bound_ptr=(Luna< osg::BoundingSphereImpl< osg::Vec3d > >::checkSubType< osg::BoundingSphered >(L,2));
		if( !bound_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bound in osgGA::SphericalManipulator::zoomOn function");
		}
		const osg::BoundingSphered & bound=*bound_ptr;

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::zoomOn(const osg::BoundingSphered &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->zoomOn(bound);

		return 0;
	}

	// bool osgGA::SphericalManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::SphericalManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nbool osgGA::SphericalManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::SphericalManipulator::handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::SphericalManipulator::handle function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::SphericalManipulator::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->handle(ea, us);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::SphericalManipulator::computeHomePosition()
	static int _bind_computeHomePosition(lua_State *L) {
		if (!_lg_typecheck_computeHomePosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::computeHomePosition() function, expected prototype:\nvoid osgGA::SphericalManipulator::computeHomePosition()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::computeHomePosition(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->computeHomePosition();

		return 0;
	}

	// void osgGA::SphericalManipulator::computeViewPosition(const osg::BoundingSphered & bound, double & scale, double & distance, osg::Vec3d & center)
	static int _bind_computeViewPosition(lua_State *L) {
		if (!_lg_typecheck_computeViewPosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::computeViewPosition(const osg::BoundingSphered & bound, double & scale, double & distance, osg::Vec3d & center) function, expected prototype:\nvoid osgGA::SphericalManipulator::computeViewPosition(const osg::BoundingSphered & bound, double & scale, double & distance, osg::Vec3d & center)\nClass arguments details:\narg 1 ID = 54337300\narg 4 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BoundingSphered* bound_ptr=(Luna< osg::BoundingSphereImpl< osg::Vec3d > >::checkSubType< osg::BoundingSphered >(L,2));
		if( !bound_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bound in osgGA::SphericalManipulator::computeViewPosition function");
		}
		const osg::BoundingSphered & bound=*bound_ptr;
		double scale=(double)lua_tonumber(L,3);
		double distance=(double)lua_tonumber(L,4);
		osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,5));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::SphericalManipulator::computeViewPosition function");
		}
		osg::Vec3d & center=*center_ptr;

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::computeViewPosition(const osg::BoundingSphered &, double &, double &, osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->computeViewPosition(bound, scale, distance, center);

		lua_pushnumber(L,scale);
		lua_pushnumber(L,distance);
		return 2;
	}

	// void osgGA::SphericalManipulator::setCenter(const osg::Vec3d & center)
	static int _bind_setCenter(lua_State *L) {
		if (!_lg_typecheck_setCenter(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::setCenter(const osg::Vec3d & center) function, expected prototype:\nvoid osgGA::SphericalManipulator::setCenter(const osg::Vec3d & center)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::SphericalManipulator::setCenter function");
		}
		const osg::Vec3d & center=*center_ptr;

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::setCenter(const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCenter(center);

		return 0;
	}

	// const osg::Vec3d & osgGA::SphericalManipulator::getCenter() const
	static int _bind_getCenter(lua_State *L) {
		if (!_lg_typecheck_getCenter(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3d & osgGA::SphericalManipulator::getCenter() const function, expected prototype:\nconst osg::Vec3d & osgGA::SphericalManipulator::getCenter() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3d & osgGA::SphericalManipulator::getCenter() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3d* lret = &self->getCenter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::SphericalManipulator::setDistance(double distance)
	static int _bind_setDistance(lua_State *L) {
		if (!_lg_typecheck_setDistance(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::SphericalManipulator::setDistance(double distance) function, expected prototype:\nbool osgGA::SphericalManipulator::setDistance(double distance)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double distance=(double)lua_tonumber(L,2);

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::SphericalManipulator::setDistance(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setDistance(distance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// double osgGA::SphericalManipulator::getDistance() const
	static int _bind_getDistance(lua_State *L) {
		if (!_lg_typecheck_getDistance(L)) {
			luaL_error(L, "luna typecheck failed in double osgGA::SphericalManipulator::getDistance() const function, expected prototype:\ndouble osgGA::SphericalManipulator::getDistance() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgGA::SphericalManipulator::getDistance() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getDistance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgGA::SphericalManipulator::getHomeDistance() const
	static int _bind_getHomeDistance(lua_State *L) {
		if (!_lg_typecheck_getHomeDistance(L)) {
			luaL_error(L, "luna typecheck failed in double osgGA::SphericalManipulator::getHomeDistance() const function, expected prototype:\ndouble osgGA::SphericalManipulator::getHomeDistance() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgGA::SphericalManipulator::getHomeDistance() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getHomeDistance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::SphericalManipulator::setHeading(double azimuth)
	static int _bind_setHeading(lua_State *L) {
		if (!_lg_typecheck_setHeading(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::setHeading(double azimuth) function, expected prototype:\nvoid osgGA::SphericalManipulator::setHeading(double azimuth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double azimuth=(double)lua_tonumber(L,2);

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::setHeading(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setHeading(azimuth);

		return 0;
	}

	// double osgGA::SphericalManipulator::getHeading() const
	static int _bind_getHeading(lua_State *L) {
		if (!_lg_typecheck_getHeading(L)) {
			luaL_error(L, "luna typecheck failed in double osgGA::SphericalManipulator::getHeading() const function, expected prototype:\ndouble osgGA::SphericalManipulator::getHeading() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgGA::SphericalManipulator::getHeading() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getHeading();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::SphericalManipulator::setElevation(double elevation)
	static int _bind_setElevation(lua_State *L) {
		if (!_lg_typecheck_setElevation(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::setElevation(double elevation) function, expected prototype:\nvoid osgGA::SphericalManipulator::setElevation(double elevation)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double elevation=(double)lua_tonumber(L,2);

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::setElevation(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setElevation(elevation);

		return 0;
	}

	// double osgGA::SphericalManipulator::getElevtion() const
	static int _bind_getElevtion(lua_State *L) {
		if (!_lg_typecheck_getElevtion(L)) {
			luaL_error(L, "luna typecheck failed in double osgGA::SphericalManipulator::getElevtion() const function, expected prototype:\ndouble osgGA::SphericalManipulator::getElevtion() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgGA::SphericalManipulator::getElevtion() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getElevtion();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgGA::SphericalManipulator::getMinimumZoomScale() const
	static int _bind_getMinimumZoomScale(lua_State *L) {
		if (!_lg_typecheck_getMinimumZoomScale(L)) {
			luaL_error(L, "luna typecheck failed in double osgGA::SphericalManipulator::getMinimumZoomScale() const function, expected prototype:\ndouble osgGA::SphericalManipulator::getMinimumZoomScale() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgGA::SphericalManipulator::getMinimumZoomScale() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getMinimumZoomScale();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::SphericalManipulator::setMinimumZoomScale(double minimumZoomScale)
	static int _bind_setMinimumZoomScale(lua_State *L) {
		if (!_lg_typecheck_setMinimumZoomScale(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::setMinimumZoomScale(double minimumZoomScale) function, expected prototype:\nvoid osgGA::SphericalManipulator::setMinimumZoomScale(double minimumZoomScale)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double minimumZoomScale=(double)lua_tonumber(L,2);

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::setMinimumZoomScale(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMinimumZoomScale(minimumZoomScale);

		return 0;
	}

	// void osgGA::SphericalManipulator::setScroolWheelZoomDelta(double zoomDelta)
	static int _bind_setScroolWheelZoomDelta(lua_State *L) {
		if (!_lg_typecheck_setScroolWheelZoomDelta(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::setScroolWheelZoomDelta(double zoomDelta) function, expected prototype:\nvoid osgGA::SphericalManipulator::setScroolWheelZoomDelta(double zoomDelta)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double zoomDelta=(double)lua_tonumber(L,2);

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::setScroolWheelZoomDelta(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setScroolWheelZoomDelta(zoomDelta);

		return 0;
	}

	// double osgGA::SphericalManipulator::getScroolWheelZoomDelta() const
	static int _bind_getScroolWheelZoomDelta(lua_State *L) {
		if (!_lg_typecheck_getScroolWheelZoomDelta(L)) {
			luaL_error(L, "luna typecheck failed in double osgGA::SphericalManipulator::getScroolWheelZoomDelta() const function, expected prototype:\ndouble osgGA::SphericalManipulator::getScroolWheelZoomDelta() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgGA::SphericalManipulator::getScroolWheelZoomDelta() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getScroolWheelZoomDelta();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::SphericalManipulator::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgGA::SphericalManipulator::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* usage_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgGA::SphericalManipulator::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getUsage(usage);

		return 0;
	}

	// osgGA::SphericalManipulator::RotationMode osgGA::SphericalManipulator::getRotationMode() const
	static int _bind_getRotationMode(lua_State *L) {
		if (!_lg_typecheck_getRotationMode(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::SphericalManipulator::RotationMode osgGA::SphericalManipulator::getRotationMode() const function, expected prototype:\nosgGA::SphericalManipulator::RotationMode osgGA::SphericalManipulator::getRotationMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::SphericalManipulator::RotationMode osgGA::SphericalManipulator::getRotationMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgGA::SphericalManipulator::RotationMode lret = self->getRotationMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::SphericalManipulator::setRotationMode(osgGA::SphericalManipulator::RotationMode mode)
	static int _bind_setRotationMode(lua_State *L) {
		if (!_lg_typecheck_setRotationMode(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::setRotationMode(osgGA::SphericalManipulator::RotationMode mode) function, expected prototype:\nvoid osgGA::SphericalManipulator::setRotationMode(osgGA::SphericalManipulator::RotationMode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::SphericalManipulator::RotationMode mode=(osgGA::SphericalManipulator::RotationMode)lua_tointeger(L,2);

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::setRotationMode(osgGA::SphericalManipulator::RotationMode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRotationMode(mode);

		return 0;
	}

	// bool osgGA::SphericalManipulator::getAllowThrow() const
	static int _bind_getAllowThrow(lua_State *L) {
		if (!_lg_typecheck_getAllowThrow(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::SphericalManipulator::getAllowThrow() const function, expected prototype:\nbool osgGA::SphericalManipulator::getAllowThrow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::SphericalManipulator::getAllowThrow() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getAllowThrow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::SphericalManipulator::setAllowThrow(bool allowThrow)
	static int _bind_setAllowThrow(lua_State *L) {
		if (!_lg_typecheck_setAllowThrow(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::setAllowThrow(bool allowThrow) function, expected prototype:\nvoid osgGA::SphericalManipulator::setAllowThrow(bool allowThrow)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool allowThrow=(bool)(lua_toboolean(L,2)==1);

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::setAllowThrow(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAllowThrow(allowThrow);

		return 0;
	}

	// void osgGA::SphericalManipulator::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgGA::SphericalManipulator::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SphericalManipulator::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgGA::SphericalManipulator::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::base_setName(const std::string & name) function, expected prototype:\nvoid osgGA::SphericalManipulator::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SphericalManipulator::setName(name);

		return 0;
	}

	// void osgGA::SphericalManipulator::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::base_computeDataVariance() function, expected prototype:\nvoid osgGA::SphericalManipulator::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SphericalManipulator::computeDataVariance();

		return 0;
	}

	// void osgGA::SphericalManipulator::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgGA::SphericalManipulator::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SphericalManipulator::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgGA::SphericalManipulator::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgGA::SphericalManipulator::base_getUserData() function, expected prototype:\nosg::Referenced * osgGA::SphericalManipulator::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgGA::SphericalManipulator::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->SphericalManipulator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgGA::SphericalManipulator::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgGA::SphericalManipulator::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgGA::SphericalManipulator::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgGA::SphericalManipulator::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->SphericalManipulator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::SphericalManipulator::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgGA::SphericalManipulator::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgGA::SphericalManipulator::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SphericalManipulator::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgGA::SphericalManipulator::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::SphericalManipulator::base_cloneType() const function, expected prototype:\nosg::Object * osgGA::SphericalManipulator::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::SphericalManipulator::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->SphericalManipulator::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgGA::SphericalManipulator::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::SphericalManipulator::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgGA::SphericalManipulator::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::SphericalManipulator::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::SphericalManipulator::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->SphericalManipulator::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::SphericalManipulator::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::SphericalManipulator::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgGA::SphericalManipulator::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::SphericalManipulator::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SphericalManipulator::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgGA::SphericalManipulator::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::SphericalManipulator::base_libraryName() const function, expected prototype:\nconst char * osgGA::SphericalManipulator::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::SphericalManipulator::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->SphericalManipulator::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::SphericalManipulator::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	static int _bind_base_event(lua_State *L) {
		if (!_lg_typecheck_base_event(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable) function, expected prototype:\nvoid osgGA::SphericalManipulator::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::base_event(osg::NodeVisitor *, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SphericalManipulator::event(nv, drawable);

		return 0;
	}

	// void osgGA::SphericalManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)
	static int _bind_base_setCoordinateFrameCallback(lua_State *L) {
		if (!_lg_typecheck_base_setCoordinateFrameCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb) function, expected prototype:\nvoid osgGA::SphericalManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::CameraManipulator::CoordinateFrameCallback* cb=(Luna< osg::Referenced >::checkSubType< osgGA::CameraManipulator::CoordinateFrameCallback >(L,2));

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SphericalManipulator::setCoordinateFrameCallback(cb);

		return 0;
	}

	// void osgGA::SphericalManipulator::base_updateCamera(osg::Camera & camera)
	static int _bind_base_updateCamera(lua_State *L) {
		if (!_lg_typecheck_base_updateCamera(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::base_updateCamera(osg::Camera & camera) function, expected prototype:\nvoid osgGA::SphericalManipulator::base_updateCamera(osg::Camera & camera)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera* camera_ptr=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));
		if( !camera_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg camera in osgGA::SphericalManipulator::base_updateCamera function");
		}
		osg::Camera & camera=*camera_ptr;

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::base_updateCamera(osg::Camera &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SphericalManipulator::updateCamera(camera);

		return 0;
	}

	// void osgGA::SphericalManipulator::base_setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)
	static int _bind_base_setHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_setHomePosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::base_setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false) function, expected prototype:\nvoid osgGA::SphericalManipulator::base_setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::SphericalManipulator::base_setHomePosition function");
		}
		const osg::Vec3d & eye=*eye_ptr;
		const osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::SphericalManipulator::base_setHomePosition function");
		}
		const osg::Vec3d & center=*center_ptr;
		const osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::SphericalManipulator::base_setHomePosition function");
		}
		const osg::Vec3d & up=*up_ptr;
		bool autoComputeHomePosition=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::base_setHomePosition(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SphericalManipulator::setHomePosition(eye, center, up, autoComputeHomePosition);

		return 0;
	}

	// void osgGA::SphericalManipulator::base_getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const
	static int _bind_base_getHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_getHomePosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::base_getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const function, expected prototype:\nvoid osgGA::SphericalManipulator::base_getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::SphericalManipulator::base_getHomePosition function");
		}
		osg::Vec3d & eye=*eye_ptr;
		osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::SphericalManipulator::base_getHomePosition function");
		}
		osg::Vec3d & center=*center_ptr;
		osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::SphericalManipulator::base_getHomePosition function");
		}
		osg::Vec3d & up=*up_ptr;

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::base_getHomePosition(osg::Vec3d &, osg::Vec3d &, osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SphericalManipulator::getHomePosition(eye, center, up);

		return 0;
	}

	// void osgGA::SphericalManipulator::base_setAutoComputeHomePosition(bool flag)
	static int _bind_base_setAutoComputeHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_setAutoComputeHomePosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::base_setAutoComputeHomePosition(bool flag) function, expected prototype:\nvoid osgGA::SphericalManipulator::base_setAutoComputeHomePosition(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::base_setAutoComputeHomePosition(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SphericalManipulator::setAutoComputeHomePosition(flag);

		return 0;
	}

	// const char * osgGA::SphericalManipulator::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::SphericalManipulator::base_className() const function, expected prototype:\nconst char * osgGA::SphericalManipulator::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::SphericalManipulator::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->SphericalManipulator::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::SphericalManipulator::base_setByMatrix(const osg::Matrixd & matrix)
	static int _bind_base_setByMatrix(lua_State *L) {
		if (!_lg_typecheck_base_setByMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::base_setByMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::SphericalManipulator::base_setByMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::SphericalManipulator::base_setByMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::base_setByMatrix(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SphericalManipulator::setByMatrix(matrix);

		return 0;
	}

	// void osgGA::SphericalManipulator::base_setByInverseMatrix(const osg::Matrixd & matrix)
	static int _bind_base_setByInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_base_setByInverseMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::base_setByInverseMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::SphericalManipulator::base_setByInverseMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::SphericalManipulator::base_setByInverseMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::base_setByInverseMatrix(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SphericalManipulator::setByInverseMatrix(matrix);

		return 0;
	}

	// osg::Matrixd osgGA::SphericalManipulator::base_getMatrix() const
	static int _bind_base_getMatrix(lua_State *L) {
		if (!_lg_typecheck_base_getMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::SphericalManipulator::base_getMatrix() const function, expected prototype:\nosg::Matrixd osgGA::SphericalManipulator::base_getMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::SphericalManipulator::base_getMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->SphericalManipulator::getMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgGA::SphericalManipulator::base_getInverseMatrix() const
	static int _bind_base_getInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_base_getInverseMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::SphericalManipulator::base_getInverseMatrix() const function, expected prototype:\nosg::Matrixd osgGA::SphericalManipulator::base_getInverseMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::SphericalManipulator::base_getInverseMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->SphericalManipulator::getInverseMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osgUtil::SceneView::FusionDistanceMode osgGA::SphericalManipulator::base_getFusionDistanceMode() const
	static int _bind_base_getFusionDistanceMode(lua_State *L) {
		if (!_lg_typecheck_base_getFusionDistanceMode(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::SceneView::FusionDistanceMode osgGA::SphericalManipulator::base_getFusionDistanceMode() const function, expected prototype:\nosgUtil::SceneView::FusionDistanceMode osgGA::SphericalManipulator::base_getFusionDistanceMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::SceneView::FusionDistanceMode osgGA::SphericalManipulator::base_getFusionDistanceMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::SceneView::FusionDistanceMode lret = self->SphericalManipulator::getFusionDistanceMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgGA::SphericalManipulator::base_getFusionDistanceValue() const
	static int _bind_base_getFusionDistanceValue(lua_State *L) {
		if (!_lg_typecheck_base_getFusionDistanceValue(L)) {
			luaL_error(L, "luna typecheck failed in float osgGA::SphericalManipulator::base_getFusionDistanceValue() const function, expected prototype:\nfloat osgGA::SphericalManipulator::base_getFusionDistanceValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgGA::SphericalManipulator::base_getFusionDistanceValue() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->SphericalManipulator::getFusionDistanceValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::SphericalManipulator::base_setNode(osg::Node * arg1)
	static int _bind_base_setNode(lua_State *L) {
		if (!_lg_typecheck_base_setNode(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::base_setNode(osg::Node * arg1) function, expected prototype:\nvoid osgGA::SphericalManipulator::base_setNode(osg::Node * arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* _arg1=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::base_setNode(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SphericalManipulator::setNode(_arg1);

		return 0;
	}

	// const osg::Node * osgGA::SphericalManipulator::base_getNode() const
	static int _bind_base_getNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getNode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Node * osgGA::SphericalManipulator::base_getNode() const function, expected prototype:\nconst osg::Node * osgGA::SphericalManipulator::base_getNode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Node * osgGA::SphericalManipulator::base_getNode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Node * lret = self->SphericalManipulator::getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osgGA::SphericalManipulator::base_getNode()
	static int _bind_base_getNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getNode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node * osgGA::SphericalManipulator::base_getNode() function, expected prototype:\nosg::Node * osgGA::SphericalManipulator::base_getNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node * osgGA::SphericalManipulator::base_getNode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node * lret = self->SphericalManipulator::getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::SphericalManipulator::base_getNode
	static int _bind_base_getNode(lua_State *L) {
		if (_lg_typecheck_base_getNode_overload_1(L)) return _bind_base_getNode_overload_1(L);
		if (_lg_typecheck_base_getNode_overload_2(L)) return _bind_base_getNode_overload_2(L);

		luaL_error(L, "error in function base_getNode, cannot match any of the overloads for function base_getNode:\n  base_getNode()\n  base_getNode()\n");
		return 0;
	}

	// void osgGA::SphericalManipulator::base_home(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_base_home_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_home_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::base_home(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nvoid osgGA::SphericalManipulator::base_home(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::SphericalManipulator::base_home function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::SphericalManipulator::base_home function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::base_home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SphericalManipulator::home(ea, us);

		return 0;
	}

	// void osgGA::SphericalManipulator::base_home(double arg1)
	static int _bind_base_home_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_home_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::base_home(double arg1) function, expected prototype:\nvoid osgGA::SphericalManipulator::base_home(double arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double _arg1=(double)lua_tonumber(L,2);

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::base_home(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SphericalManipulator::home(_arg1);

		return 0;
	}

	// Overload binder for osgGA::SphericalManipulator::base_home
	static int _bind_base_home(lua_State *L) {
		if (_lg_typecheck_base_home_overload_1(L)) return _bind_base_home_overload_1(L);
		if (_lg_typecheck_base_home_overload_2(L)) return _bind_base_home_overload_2(L);

		luaL_error(L, "error in function base_home, cannot match any of the overloads for function base_home:\n  base_home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)\n  base_home(double)\n");
		return 0;
	}

	// void osgGA::SphericalManipulator::base_init(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_base_init(lua_State *L) {
		if (!_lg_typecheck_base_init(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::base_init(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nvoid osgGA::SphericalManipulator::base_init(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::SphericalManipulator::base_init function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::SphericalManipulator::base_init function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::base_init(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SphericalManipulator::init(ea, us);

		return 0;
	}

	// bool osgGA::SphericalManipulator::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_base_handle(lua_State *L) {
		if (!_lg_typecheck_base_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::SphericalManipulator::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nbool osgGA::SphericalManipulator::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::SphericalManipulator::base_handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::SphericalManipulator::base_handle function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::SphericalManipulator::base_handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SphericalManipulator::handle(ea, us);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::SphericalManipulator::base_computeHomePosition()
	static int _bind_base_computeHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_computeHomePosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::base_computeHomePosition() function, expected prototype:\nvoid osgGA::SphericalManipulator::base_computeHomePosition()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::base_computeHomePosition(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SphericalManipulator::computeHomePosition();

		return 0;
	}

	// void osgGA::SphericalManipulator::base_getUsage(osg::ApplicationUsage & usage) const
	static int _bind_base_getUsage(lua_State *L) {
		if (!_lg_typecheck_base_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::base_getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgGA::SphericalManipulator::base_getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* usage_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgGA::SphericalManipulator::base_getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgGA::SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::base_getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SphericalManipulator::getUsage(usage);

		return 0;
	}


	// Operator binds:

};

osgGA::SphericalManipulator* LunaTraits< osgGA::SphericalManipulator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_SphericalManipulator::_bind_ctor(L);
}

void LunaTraits< osgGA::SphericalManipulator >::_bind_dtor(osgGA::SphericalManipulator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::SphericalManipulator >::className[] = "SphericalManipulator";
const char LunaTraits< osgGA::SphericalManipulator >::fullName[] = "osgGA::SphericalManipulator";
const char LunaTraits< osgGA::SphericalManipulator >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::SphericalManipulator >::parents[] = {"osgGA.CameraManipulator", 0};
const int LunaTraits< osgGA::SphericalManipulator >::hash = 3795876;
const int LunaTraits< osgGA::SphericalManipulator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::SphericalManipulator >::methods[] = {
	{"className", &luna_wrapper_osgGA_SphericalManipulator::_bind_className},
	{"setByMatrix", &luna_wrapper_osgGA_SphericalManipulator::_bind_setByMatrix},
	{"setByInverseMatrix", &luna_wrapper_osgGA_SphericalManipulator::_bind_setByInverseMatrix},
	{"getMatrix", &luna_wrapper_osgGA_SphericalManipulator::_bind_getMatrix},
	{"getInverseMatrix", &luna_wrapper_osgGA_SphericalManipulator::_bind_getInverseMatrix},
	{"getFusionDistanceMode", &luna_wrapper_osgGA_SphericalManipulator::_bind_getFusionDistanceMode},
	{"getFusionDistanceValue", &luna_wrapper_osgGA_SphericalManipulator::_bind_getFusionDistanceValue},
	{"setNode", &luna_wrapper_osgGA_SphericalManipulator::_bind_setNode},
	{"getNode", &luna_wrapper_osgGA_SphericalManipulator::_bind_getNode},
	{"home", &luna_wrapper_osgGA_SphericalManipulator::_bind_home},
	{"init", &luna_wrapper_osgGA_SphericalManipulator::_bind_init},
	{"zoomOn", &luna_wrapper_osgGA_SphericalManipulator::_bind_zoomOn},
	{"handle", &luna_wrapper_osgGA_SphericalManipulator::_bind_handle},
	{"computeHomePosition", &luna_wrapper_osgGA_SphericalManipulator::_bind_computeHomePosition},
	{"computeViewPosition", &luna_wrapper_osgGA_SphericalManipulator::_bind_computeViewPosition},
	{"setCenter", &luna_wrapper_osgGA_SphericalManipulator::_bind_setCenter},
	{"getCenter", &luna_wrapper_osgGA_SphericalManipulator::_bind_getCenter},
	{"setDistance", &luna_wrapper_osgGA_SphericalManipulator::_bind_setDistance},
	{"getDistance", &luna_wrapper_osgGA_SphericalManipulator::_bind_getDistance},
	{"getHomeDistance", &luna_wrapper_osgGA_SphericalManipulator::_bind_getHomeDistance},
	{"setHeading", &luna_wrapper_osgGA_SphericalManipulator::_bind_setHeading},
	{"getHeading", &luna_wrapper_osgGA_SphericalManipulator::_bind_getHeading},
	{"setElevation", &luna_wrapper_osgGA_SphericalManipulator::_bind_setElevation},
	{"getElevtion", &luna_wrapper_osgGA_SphericalManipulator::_bind_getElevtion},
	{"getMinimumZoomScale", &luna_wrapper_osgGA_SphericalManipulator::_bind_getMinimumZoomScale},
	{"setMinimumZoomScale", &luna_wrapper_osgGA_SphericalManipulator::_bind_setMinimumZoomScale},
	{"setScroolWheelZoomDelta", &luna_wrapper_osgGA_SphericalManipulator::_bind_setScroolWheelZoomDelta},
	{"getScroolWheelZoomDelta", &luna_wrapper_osgGA_SphericalManipulator::_bind_getScroolWheelZoomDelta},
	{"getUsage", &luna_wrapper_osgGA_SphericalManipulator::_bind_getUsage},
	{"getRotationMode", &luna_wrapper_osgGA_SphericalManipulator::_bind_getRotationMode},
	{"setRotationMode", &luna_wrapper_osgGA_SphericalManipulator::_bind_setRotationMode},
	{"getAllowThrow", &luna_wrapper_osgGA_SphericalManipulator::_bind_getAllowThrow},
	{"setAllowThrow", &luna_wrapper_osgGA_SphericalManipulator::_bind_setAllowThrow},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_libraryName},
	{"base_event", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_event},
	{"base_setCoordinateFrameCallback", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_setCoordinateFrameCallback},
	{"base_updateCamera", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_updateCamera},
	{"base_setHomePosition", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_setHomePosition},
	{"base_getHomePosition", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_getHomePosition},
	{"base_setAutoComputeHomePosition", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_setAutoComputeHomePosition},
	{"base_className", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_className},
	{"base_setByMatrix", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_setByMatrix},
	{"base_setByInverseMatrix", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_setByInverseMatrix},
	{"base_getMatrix", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_getMatrix},
	{"base_getInverseMatrix", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_getInverseMatrix},
	{"base_getFusionDistanceMode", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_getFusionDistanceMode},
	{"base_getFusionDistanceValue", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_getFusionDistanceValue},
	{"base_setNode", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_setNode},
	{"base_getNode", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_getNode},
	{"base_home", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_home},
	{"base_init", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_init},
	{"base_handle", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_handle},
	{"base_computeHomePosition", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_computeHomePosition},
	{"base_getUsage", &luna_wrapper_osgGA_SphericalManipulator::_bind_base_getUsage},
	{"fromVoid", &luna_wrapper_osgGA_SphericalManipulator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgGA_SphericalManipulator::_bind_asVoid},
	{"getTable", &luna_wrapper_osgGA_SphericalManipulator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::SphericalManipulator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_SphericalManipulator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::SphericalManipulator >::enumValues[] = {
	{"ELEVATION_HEADING", osgGA::SphericalManipulator::ELEVATION_HEADING},
	{"HEADING", osgGA::SphericalManipulator::HEADING},
	{"ELEVATION", osgGA::SphericalManipulator::ELEVATION},
	{"MAP", osgGA::SphericalManipulator::MAP},
	{0,0}
};


