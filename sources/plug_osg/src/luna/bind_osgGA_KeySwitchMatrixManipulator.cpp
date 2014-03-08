#include <plug_common.h>

#include <luna/wrappers/wrapper_osgGA_KeySwitchMatrixManipulator.h>

class luna_wrapper_osgGA_KeySwitchMatrixManipulator {
public:
	typedef Luna< osgGA::KeySwitchMatrixManipulator > luna_t;

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

		osgGA::KeySwitchMatrixManipulator* self= (osgGA::KeySwitchMatrixManipulator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgGA::KeySwitchMatrixManipulator >::push(L,self,false);
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
		//osgGA::KeySwitchMatrixManipulator* ptr= dynamic_cast< osgGA::KeySwitchMatrixManipulator* >(Luna< osg::Referenced >::check(L,1));
		osgGA::KeySwitchMatrixManipulator* ptr= luna_caster< osg::Referenced, osgGA::KeySwitchMatrixManipulator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::KeySwitchMatrixManipulator >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_addMatrixManipulator(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addNumberedMatrixManipulator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumMatrixManipulators(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_selectMatrixManipulator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyManipMap_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getKeyManipMap_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentMatrixManipulator_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentMatrixManipulator_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMatrixManipulatorWithIndex_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMatrixManipulatorWithIndex_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMatrixManipulatorWithKey_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMatrixManipulatorWithKey_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCoordinateFrameCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_setHomePosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAutoComputeHomePosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeHomePosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_home(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_init(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
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

	inline static bool _lg_typecheck_base_updateCamera(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getHomePosition(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setCoordinateFrameCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_setHomePosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setAutoComputeHomePosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeHomePosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_home(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::KeySwitchMatrixManipulator::KeySwitchMatrixManipulator()
	static osgGA::KeySwitchMatrixManipulator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::KeySwitchMatrixManipulator::KeySwitchMatrixManipulator() function, expected prototype:\nosgGA::KeySwitchMatrixManipulator::KeySwitchMatrixManipulator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgGA::KeySwitchMatrixManipulator();
	}

	// osgGA::KeySwitchMatrixManipulator::KeySwitchMatrixManipulator(lua_Table * data)
	static osgGA::KeySwitchMatrixManipulator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::KeySwitchMatrixManipulator::KeySwitchMatrixManipulator(lua_Table * data) function, expected prototype:\nosgGA::KeySwitchMatrixManipulator::KeySwitchMatrixManipulator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgGA_KeySwitchMatrixManipulator(L,NULL);
	}

	// Overload binder for osgGA::KeySwitchMatrixManipulator::KeySwitchMatrixManipulator
	static osgGA::KeySwitchMatrixManipulator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function KeySwitchMatrixManipulator, cannot match any of the overloads for function KeySwitchMatrixManipulator:\n  KeySwitchMatrixManipulator()\n  KeySwitchMatrixManipulator(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgGA::KeySwitchMatrixManipulator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::KeySwitchMatrixManipulator::className() const function, expected prototype:\nconst char * osgGA::KeySwitchMatrixManipulator::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::KeySwitchMatrixManipulator::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::KeySwitchMatrixManipulator::addMatrixManipulator(int key, std::string name, osgGA::CameraManipulator * cm)
	static int _bind_addMatrixManipulator(lua_State *L) {
		if (!_lg_typecheck_addMatrixManipulator(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::addMatrixManipulator(int key, std::string name, osgGA::CameraManipulator * cm) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::addMatrixManipulator(int key, std::string name, osgGA::CameraManipulator * cm)\nClass arguments details:\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int key=(int)lua_tointeger(L,2);
		std::string name(lua_tostring(L,3),lua_objlen(L,3));
		osgGA::CameraManipulator* cm=(Luna< osg::Referenced >::checkSubType< osgGA::CameraManipulator >(L,4));

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::addMatrixManipulator(int, std::string, osgGA::CameraManipulator *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addMatrixManipulator(key, name, cm);

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::addNumberedMatrixManipulator(osgGA::CameraManipulator * cm)
	static int _bind_addNumberedMatrixManipulator(lua_State *L) {
		if (!_lg_typecheck_addNumberedMatrixManipulator(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::addNumberedMatrixManipulator(osgGA::CameraManipulator * cm) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::addNumberedMatrixManipulator(osgGA::CameraManipulator * cm)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::CameraManipulator* cm=(Luna< osg::Referenced >::checkSubType< osgGA::CameraManipulator >(L,2));

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::addNumberedMatrixManipulator(osgGA::CameraManipulator *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addNumberedMatrixManipulator(cm);

		return 0;
	}

	// unsigned int osgGA::KeySwitchMatrixManipulator::getNumMatrixManipulators() const
	static int _bind_getNumMatrixManipulators(lua_State *L) {
		if (!_lg_typecheck_getNumMatrixManipulators(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgGA::KeySwitchMatrixManipulator::getNumMatrixManipulators() const function, expected prototype:\nunsigned int osgGA::KeySwitchMatrixManipulator::getNumMatrixManipulators() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgGA::KeySwitchMatrixManipulator::getNumMatrixManipulators() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumMatrixManipulators();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::KeySwitchMatrixManipulator::selectMatrixManipulator(unsigned int num)
	static int _bind_selectMatrixManipulator(lua_State *L) {
		if (!_lg_typecheck_selectMatrixManipulator(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::selectMatrixManipulator(unsigned int num) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::selectMatrixManipulator(unsigned int num)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::selectMatrixManipulator(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->selectMatrixManipulator(num);

		return 0;
	}

	// osgGA::KeySwitchMatrixManipulator::KeyManipMap & osgGA::KeySwitchMatrixManipulator::getKeyManipMap()
	static int _bind_getKeyManipMap_overload_1(lua_State *L) {
		if (!_lg_typecheck_getKeyManipMap_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::KeySwitchMatrixManipulator::KeyManipMap & osgGA::KeySwitchMatrixManipulator::getKeyManipMap() function, expected prototype:\nosgGA::KeySwitchMatrixManipulator::KeyManipMap & osgGA::KeySwitchMatrixManipulator::getKeyManipMap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::KeySwitchMatrixManipulator::KeyManipMap & osgGA::KeySwitchMatrixManipulator::getKeyManipMap(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgGA::KeySwitchMatrixManipulator::KeyManipMap* lret = &self->getKeyManipMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::KeySwitchMatrixManipulator::KeyManipMap >::push(L,lret,false);

		return 1;
	}

	// const osgGA::KeySwitchMatrixManipulator::KeyManipMap & osgGA::KeySwitchMatrixManipulator::getKeyManipMap() const
	static int _bind_getKeyManipMap_overload_2(lua_State *L) {
		if (!_lg_typecheck_getKeyManipMap_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgGA::KeySwitchMatrixManipulator::KeyManipMap & osgGA::KeySwitchMatrixManipulator::getKeyManipMap() const function, expected prototype:\nconst osgGA::KeySwitchMatrixManipulator::KeyManipMap & osgGA::KeySwitchMatrixManipulator::getKeyManipMap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgGA::KeySwitchMatrixManipulator::KeyManipMap & osgGA::KeySwitchMatrixManipulator::getKeyManipMap() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgGA::KeySwitchMatrixManipulator::KeyManipMap* lret = &self->getKeyManipMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::KeySwitchMatrixManipulator::KeyManipMap >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::KeySwitchMatrixManipulator::getKeyManipMap
	static int _bind_getKeyManipMap(lua_State *L) {
		if (_lg_typecheck_getKeyManipMap_overload_1(L)) return _bind_getKeyManipMap_overload_1(L);
		if (_lg_typecheck_getKeyManipMap_overload_2(L)) return _bind_getKeyManipMap_overload_2(L);

		luaL_error(L, "error in function getKeyManipMap, cannot match any of the overloads for function getKeyManipMap:\n  getKeyManipMap()\n  getKeyManipMap()\n");
		return 0;
	}

	// osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getCurrentMatrixManipulator()
	static int _bind_getCurrentMatrixManipulator_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCurrentMatrixManipulator_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getCurrentMatrixManipulator() function, expected prototype:\nosgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getCurrentMatrixManipulator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getCurrentMatrixManipulator(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgGA::CameraManipulator * lret = self->getCurrentMatrixManipulator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::CameraManipulator >::push(L,lret,false);

		return 1;
	}

	// const osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getCurrentMatrixManipulator() const
	static int _bind_getCurrentMatrixManipulator_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCurrentMatrixManipulator_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getCurrentMatrixManipulator() const function, expected prototype:\nconst osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getCurrentMatrixManipulator() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getCurrentMatrixManipulator() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgGA::CameraManipulator * lret = self->getCurrentMatrixManipulator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::CameraManipulator >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::KeySwitchMatrixManipulator::getCurrentMatrixManipulator
	static int _bind_getCurrentMatrixManipulator(lua_State *L) {
		if (_lg_typecheck_getCurrentMatrixManipulator_overload_1(L)) return _bind_getCurrentMatrixManipulator_overload_1(L);
		if (_lg_typecheck_getCurrentMatrixManipulator_overload_2(L)) return _bind_getCurrentMatrixManipulator_overload_2(L);

		luaL_error(L, "error in function getCurrentMatrixManipulator, cannot match any of the overloads for function getCurrentMatrixManipulator:\n  getCurrentMatrixManipulator()\n  getCurrentMatrixManipulator()\n");
		return 0;
	}

	// osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithIndex(unsigned int key)
	static int _bind_getMatrixManipulatorWithIndex_overload_1(lua_State *L) {
		if (!_lg_typecheck_getMatrixManipulatorWithIndex_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithIndex(unsigned int key) function, expected prototype:\nosgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithIndex(unsigned int key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int key=(unsigned int)lua_tointeger(L,2);

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithIndex(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgGA::CameraManipulator * lret = self->getMatrixManipulatorWithIndex(key);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::CameraManipulator >::push(L,lret,false);

		return 1;
	}

	// const osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithIndex(unsigned int key) const
	static int _bind_getMatrixManipulatorWithIndex_overload_2(lua_State *L) {
		if (!_lg_typecheck_getMatrixManipulatorWithIndex_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithIndex(unsigned int key) const function, expected prototype:\nconst osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithIndex(unsigned int key) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int key=(unsigned int)lua_tointeger(L,2);

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithIndex(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgGA::CameraManipulator * lret = self->getMatrixManipulatorWithIndex(key);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::CameraManipulator >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithIndex
	static int _bind_getMatrixManipulatorWithIndex(lua_State *L) {
		if (_lg_typecheck_getMatrixManipulatorWithIndex_overload_1(L)) return _bind_getMatrixManipulatorWithIndex_overload_1(L);
		if (_lg_typecheck_getMatrixManipulatorWithIndex_overload_2(L)) return _bind_getMatrixManipulatorWithIndex_overload_2(L);

		luaL_error(L, "error in function getMatrixManipulatorWithIndex, cannot match any of the overloads for function getMatrixManipulatorWithIndex:\n  getMatrixManipulatorWithIndex(unsigned int)\n  getMatrixManipulatorWithIndex(unsigned int)\n");
		return 0;
	}

	// osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithKey(unsigned int key)
	static int _bind_getMatrixManipulatorWithKey_overload_1(lua_State *L) {
		if (!_lg_typecheck_getMatrixManipulatorWithKey_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithKey(unsigned int key) function, expected prototype:\nosgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithKey(unsigned int key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int key=(unsigned int)lua_tointeger(L,2);

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithKey(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgGA::CameraManipulator * lret = self->getMatrixManipulatorWithKey(key);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::CameraManipulator >::push(L,lret,false);

		return 1;
	}

	// const osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithKey(unsigned int key) const
	static int _bind_getMatrixManipulatorWithKey_overload_2(lua_State *L) {
		if (!_lg_typecheck_getMatrixManipulatorWithKey_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithKey(unsigned int key) const function, expected prototype:\nconst osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithKey(unsigned int key) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int key=(unsigned int)lua_tointeger(L,2);

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgGA::CameraManipulator * osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithKey(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgGA::CameraManipulator * lret = self->getMatrixManipulatorWithKey(key);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::CameraManipulator >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::KeySwitchMatrixManipulator::getMatrixManipulatorWithKey
	static int _bind_getMatrixManipulatorWithKey(lua_State *L) {
		if (_lg_typecheck_getMatrixManipulatorWithKey_overload_1(L)) return _bind_getMatrixManipulatorWithKey_overload_1(L);
		if (_lg_typecheck_getMatrixManipulatorWithKey_overload_2(L)) return _bind_getMatrixManipulatorWithKey_overload_2(L);

		luaL_error(L, "error in function getMatrixManipulatorWithKey, cannot match any of the overloads for function getMatrixManipulatorWithKey:\n  getMatrixManipulatorWithKey(unsigned int)\n  getMatrixManipulatorWithKey(unsigned int)\n");
		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)
	static int _bind_setCoordinateFrameCallback(lua_State *L) {
		if (!_lg_typecheck_setCoordinateFrameCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::CameraManipulator::CoordinateFrameCallback* cb=(Luna< osg::Referenced >::checkSubType< osgGA::CameraManipulator::CoordinateFrameCallback >(L,2));

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCoordinateFrameCallback(cb);

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::setByMatrix(const osg::Matrixd & matrix)
	static int _bind_setByMatrix(lua_State *L) {
		if (!_lg_typecheck_setByMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::setByMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::setByMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::KeySwitchMatrixManipulator::setByMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::setByMatrix(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setByMatrix(matrix);

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::setByInverseMatrix(const osg::Matrixd & matrix)
	static int _bind_setByInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_setByInverseMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::setByInverseMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::setByInverseMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::KeySwitchMatrixManipulator::setByInverseMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::setByInverseMatrix(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setByInverseMatrix(matrix);

		return 0;
	}

	// osg::Matrixd osgGA::KeySwitchMatrixManipulator::getMatrix() const
	static int _bind_getMatrix(lua_State *L) {
		if (!_lg_typecheck_getMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::KeySwitchMatrixManipulator::getMatrix() const function, expected prototype:\nosg::Matrixd osgGA::KeySwitchMatrixManipulator::getMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::KeySwitchMatrixManipulator::getMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->getMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgGA::KeySwitchMatrixManipulator::getInverseMatrix() const
	static int _bind_getInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_getInverseMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::KeySwitchMatrixManipulator::getInverseMatrix() const function, expected prototype:\nosg::Matrixd osgGA::KeySwitchMatrixManipulator::getInverseMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::KeySwitchMatrixManipulator::getInverseMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->getInverseMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osgUtil::SceneView::FusionDistanceMode osgGA::KeySwitchMatrixManipulator::getFusionDistanceMode() const
	static int _bind_getFusionDistanceMode(lua_State *L) {
		if (!_lg_typecheck_getFusionDistanceMode(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::SceneView::FusionDistanceMode osgGA::KeySwitchMatrixManipulator::getFusionDistanceMode() const function, expected prototype:\nosgUtil::SceneView::FusionDistanceMode osgGA::KeySwitchMatrixManipulator::getFusionDistanceMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::SceneView::FusionDistanceMode osgGA::KeySwitchMatrixManipulator::getFusionDistanceMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::SceneView::FusionDistanceMode lret = self->getFusionDistanceMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgGA::KeySwitchMatrixManipulator::getFusionDistanceValue() const
	static int _bind_getFusionDistanceValue(lua_State *L) {
		if (!_lg_typecheck_getFusionDistanceValue(L)) {
			luaL_error(L, "luna typecheck failed in float osgGA::KeySwitchMatrixManipulator::getFusionDistanceValue() const function, expected prototype:\nfloat osgGA::KeySwitchMatrixManipulator::getFusionDistanceValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgGA::KeySwitchMatrixManipulator::getFusionDistanceValue() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getFusionDistanceValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::KeySwitchMatrixManipulator::setNode(osg::Node * arg1)
	static int _bind_setNode(lua_State *L) {
		if (!_lg_typecheck_setNode(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::setNode(osg::Node * arg1) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::setNode(osg::Node * arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* _arg1=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::setNode(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNode(_arg1);

		return 0;
	}

	// const osg::Node * osgGA::KeySwitchMatrixManipulator::getNode() const
	static int _bind_getNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Node * osgGA::KeySwitchMatrixManipulator::getNode() const function, expected prototype:\nconst osg::Node * osgGA::KeySwitchMatrixManipulator::getNode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Node * osgGA::KeySwitchMatrixManipulator::getNode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Node * lret = self->getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osgGA::KeySwitchMatrixManipulator::getNode()
	static int _bind_getNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node * osgGA::KeySwitchMatrixManipulator::getNode() function, expected prototype:\nosg::Node * osgGA::KeySwitchMatrixManipulator::getNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node * osgGA::KeySwitchMatrixManipulator::getNode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node * lret = self->getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::KeySwitchMatrixManipulator::getNode
	static int _bind_getNode(lua_State *L) {
		if (_lg_typecheck_getNode_overload_1(L)) return _bind_getNode_overload_1(L);
		if (_lg_typecheck_getNode_overload_2(L)) return _bind_getNode_overload_2(L);

		luaL_error(L, "error in function getNode, cannot match any of the overloads for function getNode:\n  getNode()\n  getNode()\n");
		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)
	static int _bind_setHomePosition(lua_State *L) {
		if (!_lg_typecheck_setHomePosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::KeySwitchMatrixManipulator::setHomePosition function");
		}
		const osg::Vec3d & eye=*eye_ptr;
		const osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::KeySwitchMatrixManipulator::setHomePosition function");
		}
		const osg::Vec3d & center=*center_ptr;
		const osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::KeySwitchMatrixManipulator::setHomePosition function");
		}
		const osg::Vec3d & up=*up_ptr;
		bool autoComputeHomePosition=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::setHomePosition(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setHomePosition(eye, center, up, autoComputeHomePosition);

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::setAutoComputeHomePosition(bool flag)
	static int _bind_setAutoComputeHomePosition(lua_State *L) {
		if (!_lg_typecheck_setAutoComputeHomePosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::setAutoComputeHomePosition(bool flag) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::setAutoComputeHomePosition(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::setAutoComputeHomePosition(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAutoComputeHomePosition(flag);

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::computeHomePosition()
	static int _bind_computeHomePosition(lua_State *L) {
		if (!_lg_typecheck_computeHomePosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::computeHomePosition() function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::computeHomePosition()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::computeHomePosition(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->computeHomePosition();

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_home(lua_State *L) {
		if (!_lg_typecheck_home(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::KeySwitchMatrixManipulator::home function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::KeySwitchMatrixManipulator::home function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->home(_arg1, _arg2);

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::KeySwitchMatrixManipulator::init function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::KeySwitchMatrixManipulator::init function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::init(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->init(_arg1, _arg2);

		return 0;
	}

	// bool osgGA::KeySwitchMatrixManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::KeySwitchMatrixManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nbool osgGA::KeySwitchMatrixManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::KeySwitchMatrixManipulator::handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::KeySwitchMatrixManipulator::handle function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::KeySwitchMatrixManipulator::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->handle(ea, us);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::KeySwitchMatrixManipulator::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* usage_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgGA::KeySwitchMatrixManipulator::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getUsage(usage);

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->KeySwitchMatrixManipulator::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::base_setName(const std::string & name) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->KeySwitchMatrixManipulator::setName(name);

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::base_computeDataVariance() function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->KeySwitchMatrixManipulator::computeDataVariance();

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->KeySwitchMatrixManipulator::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgGA::KeySwitchMatrixManipulator::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgGA::KeySwitchMatrixManipulator::base_getUserData() function, expected prototype:\nosg::Referenced * osgGA::KeySwitchMatrixManipulator::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgGA::KeySwitchMatrixManipulator::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->KeySwitchMatrixManipulator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgGA::KeySwitchMatrixManipulator::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgGA::KeySwitchMatrixManipulator::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgGA::KeySwitchMatrixManipulator::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgGA::KeySwitchMatrixManipulator::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->KeySwitchMatrixManipulator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::KeySwitchMatrixManipulator::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->KeySwitchMatrixManipulator::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgGA::KeySwitchMatrixManipulator::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::KeySwitchMatrixManipulator::base_cloneType() const function, expected prototype:\nosg::Object * osgGA::KeySwitchMatrixManipulator::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::KeySwitchMatrixManipulator::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->KeySwitchMatrixManipulator::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgGA::KeySwitchMatrixManipulator::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::KeySwitchMatrixManipulator::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgGA::KeySwitchMatrixManipulator::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::KeySwitchMatrixManipulator::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::KeySwitchMatrixManipulator::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->KeySwitchMatrixManipulator::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::KeySwitchMatrixManipulator::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::KeySwitchMatrixManipulator::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgGA::KeySwitchMatrixManipulator::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::KeySwitchMatrixManipulator::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->KeySwitchMatrixManipulator::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgGA::KeySwitchMatrixManipulator::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::KeySwitchMatrixManipulator::base_libraryName() const function, expected prototype:\nconst char * osgGA::KeySwitchMatrixManipulator::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::KeySwitchMatrixManipulator::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->KeySwitchMatrixManipulator::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::KeySwitchMatrixManipulator::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	static int _bind_base_event(lua_State *L) {
		if (!_lg_typecheck_base_event(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::base_event(osg::NodeVisitor *, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->KeySwitchMatrixManipulator::event(nv, drawable);

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::base_updateCamera(osg::Camera & camera)
	static int _bind_base_updateCamera(lua_State *L) {
		if (!_lg_typecheck_base_updateCamera(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::base_updateCamera(osg::Camera & camera) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::base_updateCamera(osg::Camera & camera)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera* camera_ptr=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));
		if( !camera_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg camera in osgGA::KeySwitchMatrixManipulator::base_updateCamera function");
		}
		osg::Camera & camera=*camera_ptr;

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::base_updateCamera(osg::Camera &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->KeySwitchMatrixManipulator::updateCamera(camera);

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::base_getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const
	static int _bind_base_getHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_getHomePosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::base_getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::base_getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::KeySwitchMatrixManipulator::base_getHomePosition function");
		}
		osg::Vec3d & eye=*eye_ptr;
		osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::KeySwitchMatrixManipulator::base_getHomePosition function");
		}
		osg::Vec3d & center=*center_ptr;
		osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::KeySwitchMatrixManipulator::base_getHomePosition function");
		}
		osg::Vec3d & up=*up_ptr;

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::base_getHomePosition(osg::Vec3d &, osg::Vec3d &, osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->KeySwitchMatrixManipulator::getHomePosition(eye, center, up);

		return 0;
	}

	// const char * osgGA::KeySwitchMatrixManipulator::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::KeySwitchMatrixManipulator::base_className() const function, expected prototype:\nconst char * osgGA::KeySwitchMatrixManipulator::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::KeySwitchMatrixManipulator::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->KeySwitchMatrixManipulator::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::KeySwitchMatrixManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)
	static int _bind_base_setCoordinateFrameCallback(lua_State *L) {
		if (!_lg_typecheck_base_setCoordinateFrameCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::CameraManipulator::CoordinateFrameCallback* cb=(Luna< osg::Referenced >::checkSubType< osgGA::CameraManipulator::CoordinateFrameCallback >(L,2));

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->KeySwitchMatrixManipulator::setCoordinateFrameCallback(cb);

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::base_setByMatrix(const osg::Matrixd & matrix)
	static int _bind_base_setByMatrix(lua_State *L) {
		if (!_lg_typecheck_base_setByMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::base_setByMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::base_setByMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::KeySwitchMatrixManipulator::base_setByMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::base_setByMatrix(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->KeySwitchMatrixManipulator::setByMatrix(matrix);

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::base_setByInverseMatrix(const osg::Matrixd & matrix)
	static int _bind_base_setByInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_base_setByInverseMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::base_setByInverseMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::base_setByInverseMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::KeySwitchMatrixManipulator::base_setByInverseMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::base_setByInverseMatrix(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->KeySwitchMatrixManipulator::setByInverseMatrix(matrix);

		return 0;
	}

	// osg::Matrixd osgGA::KeySwitchMatrixManipulator::base_getMatrix() const
	static int _bind_base_getMatrix(lua_State *L) {
		if (!_lg_typecheck_base_getMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::KeySwitchMatrixManipulator::base_getMatrix() const function, expected prototype:\nosg::Matrixd osgGA::KeySwitchMatrixManipulator::base_getMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::KeySwitchMatrixManipulator::base_getMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->KeySwitchMatrixManipulator::getMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgGA::KeySwitchMatrixManipulator::base_getInverseMatrix() const
	static int _bind_base_getInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_base_getInverseMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::KeySwitchMatrixManipulator::base_getInverseMatrix() const function, expected prototype:\nosg::Matrixd osgGA::KeySwitchMatrixManipulator::base_getInverseMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::KeySwitchMatrixManipulator::base_getInverseMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->KeySwitchMatrixManipulator::getInverseMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osgUtil::SceneView::FusionDistanceMode osgGA::KeySwitchMatrixManipulator::base_getFusionDistanceMode() const
	static int _bind_base_getFusionDistanceMode(lua_State *L) {
		if (!_lg_typecheck_base_getFusionDistanceMode(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::SceneView::FusionDistanceMode osgGA::KeySwitchMatrixManipulator::base_getFusionDistanceMode() const function, expected prototype:\nosgUtil::SceneView::FusionDistanceMode osgGA::KeySwitchMatrixManipulator::base_getFusionDistanceMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::SceneView::FusionDistanceMode osgGA::KeySwitchMatrixManipulator::base_getFusionDistanceMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::SceneView::FusionDistanceMode lret = self->KeySwitchMatrixManipulator::getFusionDistanceMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgGA::KeySwitchMatrixManipulator::base_getFusionDistanceValue() const
	static int _bind_base_getFusionDistanceValue(lua_State *L) {
		if (!_lg_typecheck_base_getFusionDistanceValue(L)) {
			luaL_error(L, "luna typecheck failed in float osgGA::KeySwitchMatrixManipulator::base_getFusionDistanceValue() const function, expected prototype:\nfloat osgGA::KeySwitchMatrixManipulator::base_getFusionDistanceValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgGA::KeySwitchMatrixManipulator::base_getFusionDistanceValue() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->KeySwitchMatrixManipulator::getFusionDistanceValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::KeySwitchMatrixManipulator::base_setNode(osg::Node * arg1)
	static int _bind_base_setNode(lua_State *L) {
		if (!_lg_typecheck_base_setNode(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::base_setNode(osg::Node * arg1) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::base_setNode(osg::Node * arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* _arg1=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::base_setNode(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->KeySwitchMatrixManipulator::setNode(_arg1);

		return 0;
	}

	// const osg::Node * osgGA::KeySwitchMatrixManipulator::base_getNode() const
	static int _bind_base_getNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getNode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Node * osgGA::KeySwitchMatrixManipulator::base_getNode() const function, expected prototype:\nconst osg::Node * osgGA::KeySwitchMatrixManipulator::base_getNode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Node * osgGA::KeySwitchMatrixManipulator::base_getNode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Node * lret = self->KeySwitchMatrixManipulator::getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osgGA::KeySwitchMatrixManipulator::base_getNode()
	static int _bind_base_getNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getNode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node * osgGA::KeySwitchMatrixManipulator::base_getNode() function, expected prototype:\nosg::Node * osgGA::KeySwitchMatrixManipulator::base_getNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node * osgGA::KeySwitchMatrixManipulator::base_getNode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node * lret = self->KeySwitchMatrixManipulator::getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::KeySwitchMatrixManipulator::base_getNode
	static int _bind_base_getNode(lua_State *L) {
		if (_lg_typecheck_base_getNode_overload_1(L)) return _bind_base_getNode_overload_1(L);
		if (_lg_typecheck_base_getNode_overload_2(L)) return _bind_base_getNode_overload_2(L);

		luaL_error(L, "error in function base_getNode, cannot match any of the overloads for function base_getNode:\n  base_getNode()\n  base_getNode()\n");
		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::base_setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)
	static int _bind_base_setHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_setHomePosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::base_setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::base_setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::KeySwitchMatrixManipulator::base_setHomePosition function");
		}
		const osg::Vec3d & eye=*eye_ptr;
		const osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::KeySwitchMatrixManipulator::base_setHomePosition function");
		}
		const osg::Vec3d & center=*center_ptr;
		const osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::KeySwitchMatrixManipulator::base_setHomePosition function");
		}
		const osg::Vec3d & up=*up_ptr;
		bool autoComputeHomePosition=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::base_setHomePosition(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->KeySwitchMatrixManipulator::setHomePosition(eye, center, up, autoComputeHomePosition);

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::base_setAutoComputeHomePosition(bool flag)
	static int _bind_base_setAutoComputeHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_setAutoComputeHomePosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::base_setAutoComputeHomePosition(bool flag) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::base_setAutoComputeHomePosition(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::base_setAutoComputeHomePosition(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->KeySwitchMatrixManipulator::setAutoComputeHomePosition(flag);

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::base_computeHomePosition()
	static int _bind_base_computeHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_computeHomePosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::base_computeHomePosition() function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::base_computeHomePosition()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::base_computeHomePosition(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->KeySwitchMatrixManipulator::computeHomePosition();

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::base_home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_base_home(lua_State *L) {
		if (!_lg_typecheck_base_home(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::base_home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::base_home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::KeySwitchMatrixManipulator::base_home function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::KeySwitchMatrixManipulator::base_home function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::base_home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->KeySwitchMatrixManipulator::home(_arg1, _arg2);

		return 0;
	}

	// void osgGA::KeySwitchMatrixManipulator::base_init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_base_init(lua_State *L) {
		if (!_lg_typecheck_base_init(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::base_init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::base_init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::KeySwitchMatrixManipulator::base_init function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::KeySwitchMatrixManipulator::base_init function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::base_init(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->KeySwitchMatrixManipulator::init(_arg1, _arg2);

		return 0;
	}

	// bool osgGA::KeySwitchMatrixManipulator::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_base_handle(lua_State *L) {
		if (!_lg_typecheck_base_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::KeySwitchMatrixManipulator::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nbool osgGA::KeySwitchMatrixManipulator::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::KeySwitchMatrixManipulator::base_handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::KeySwitchMatrixManipulator::base_handle function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::KeySwitchMatrixManipulator::base_handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->KeySwitchMatrixManipulator::handle(ea, us);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::KeySwitchMatrixManipulator::base_getUsage(osg::ApplicationUsage & usage) const
	static int _bind_base_getUsage(lua_State *L) {
		if (!_lg_typecheck_base_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::KeySwitchMatrixManipulator::base_getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgGA::KeySwitchMatrixManipulator::base_getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* usage_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgGA::KeySwitchMatrixManipulator::base_getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgGA::KeySwitchMatrixManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::KeySwitchMatrixManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::KeySwitchMatrixManipulator::base_getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->KeySwitchMatrixManipulator::getUsage(usage);

		return 0;
	}


	// Operator binds:

};

osgGA::KeySwitchMatrixManipulator* LunaTraits< osgGA::KeySwitchMatrixManipulator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_ctor(L);
}

void LunaTraits< osgGA::KeySwitchMatrixManipulator >::_bind_dtor(osgGA::KeySwitchMatrixManipulator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::KeySwitchMatrixManipulator >::className[] = "KeySwitchMatrixManipulator";
const char LunaTraits< osgGA::KeySwitchMatrixManipulator >::fullName[] = "osgGA::KeySwitchMatrixManipulator";
const char LunaTraits< osgGA::KeySwitchMatrixManipulator >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::KeySwitchMatrixManipulator >::parents[] = {"osgGA.CameraManipulator", 0};
const int LunaTraits< osgGA::KeySwitchMatrixManipulator >::hash = 67207082;
const int LunaTraits< osgGA::KeySwitchMatrixManipulator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::KeySwitchMatrixManipulator >::methods[] = {
	{"className", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_className},
	{"addMatrixManipulator", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_addMatrixManipulator},
	{"addNumberedMatrixManipulator", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_addNumberedMatrixManipulator},
	{"getNumMatrixManipulators", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_getNumMatrixManipulators},
	{"selectMatrixManipulator", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_selectMatrixManipulator},
	{"getKeyManipMap", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_getKeyManipMap},
	{"getCurrentMatrixManipulator", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_getCurrentMatrixManipulator},
	{"getMatrixManipulatorWithIndex", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_getMatrixManipulatorWithIndex},
	{"getMatrixManipulatorWithKey", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_getMatrixManipulatorWithKey},
	{"setCoordinateFrameCallback", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_setCoordinateFrameCallback},
	{"setByMatrix", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_setByMatrix},
	{"setByInverseMatrix", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_setByInverseMatrix},
	{"getMatrix", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_getMatrix},
	{"getInverseMatrix", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_getInverseMatrix},
	{"getFusionDistanceMode", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_getFusionDistanceMode},
	{"getFusionDistanceValue", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_getFusionDistanceValue},
	{"setNode", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_setNode},
	{"getNode", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_getNode},
	{"setHomePosition", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_setHomePosition},
	{"setAutoComputeHomePosition", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_setAutoComputeHomePosition},
	{"computeHomePosition", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_computeHomePosition},
	{"home", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_home},
	{"init", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_init},
	{"handle", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_handle},
	{"getUsage", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_getUsage},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_libraryName},
	{"base_event", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_event},
	{"base_updateCamera", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_updateCamera},
	{"base_getHomePosition", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_getHomePosition},
	{"base_className", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_className},
	{"base_setCoordinateFrameCallback", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_setCoordinateFrameCallback},
	{"base_setByMatrix", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_setByMatrix},
	{"base_setByInverseMatrix", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_setByInverseMatrix},
	{"base_getMatrix", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_getMatrix},
	{"base_getInverseMatrix", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_getInverseMatrix},
	{"base_getFusionDistanceMode", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_getFusionDistanceMode},
	{"base_getFusionDistanceValue", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_getFusionDistanceValue},
	{"base_setNode", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_setNode},
	{"base_getNode", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_getNode},
	{"base_setHomePosition", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_setHomePosition},
	{"base_setAutoComputeHomePosition", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_setAutoComputeHomePosition},
	{"base_computeHomePosition", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_computeHomePosition},
	{"base_home", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_home},
	{"base_init", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_init},
	{"base_handle", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_handle},
	{"base_getUsage", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_base_getUsage},
	{"fromVoid", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_asVoid},
	{"getTable", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::KeySwitchMatrixManipulator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_KeySwitchMatrixManipulator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::KeySwitchMatrixManipulator >::enumValues[] = {
	{0,0}
};


