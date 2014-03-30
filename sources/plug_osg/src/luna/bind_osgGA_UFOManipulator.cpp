#include <plug_common.h>

#include <luna/wrappers/wrapper_osgGA_UFOManipulator.h>

class luna_wrapper_osgGA_UFOManipulator {
public:
	typedef Luna< osgGA::UFOManipulator > luna_t;

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

		osgGA::UFOManipulator* self= (osgGA::UFOManipulator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgGA::UFOManipulator >::push(L,self,false);
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
		//osgGA::UFOManipulator* ptr= dynamic_cast< osgGA::UFOManipulator* >(Luna< osg::Referenced >::check(L,1));
		osgGA::UFOManipulator* ptr= luna_caster< osg::Referenced, osgGA::UFOManipulator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::UFOManipulator >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_computeHomePosition(lua_State *L) {
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

	inline static bool _lg_typecheck_getCurrentPositionAsLookAt(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMinHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMinHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMinDistance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMinDistance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setForwardSpeed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getForwardSpeed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSideSpeed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSideSpeed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRotationSpeed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRotationSpeed(lua_State *L) {
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

	inline static bool _lg_typecheck_base_computeHomePosition(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::UFOManipulator::UFOManipulator()
	static osgGA::UFOManipulator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::UFOManipulator::UFOManipulator() function, expected prototype:\nosgGA::UFOManipulator::UFOManipulator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgGA::UFOManipulator();
	}

	// osgGA::UFOManipulator::UFOManipulator(lua_Table * data)
	static osgGA::UFOManipulator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::UFOManipulator::UFOManipulator(lua_Table * data) function, expected prototype:\nosgGA::UFOManipulator::UFOManipulator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgGA_UFOManipulator(L,NULL);
	}

	// Overload binder for osgGA::UFOManipulator::UFOManipulator
	static osgGA::UFOManipulator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function UFOManipulator, cannot match any of the overloads for function UFOManipulator:\n  UFOManipulator()\n  UFOManipulator(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgGA::UFOManipulator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::UFOManipulator::className() const function, expected prototype:\nconst char * osgGA::UFOManipulator::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::UFOManipulator::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::UFOManipulator::setByMatrix(const osg::Matrixd & matrix)
	static int _bind_setByMatrix(lua_State *L) {
		if (!_lg_typecheck_setByMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::setByMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::UFOManipulator::setByMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::UFOManipulator::setByMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::setByMatrix(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setByMatrix(matrix);

		return 0;
	}

	// void osgGA::UFOManipulator::setByInverseMatrix(const osg::Matrixd & invmat)
	static int _bind_setByInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_setByInverseMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::setByInverseMatrix(const osg::Matrixd & invmat) function, expected prototype:\nvoid osgGA::UFOManipulator::setByInverseMatrix(const osg::Matrixd & invmat)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* invmat_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !invmat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg invmat in osgGA::UFOManipulator::setByInverseMatrix function");
		}
		const osg::Matrixd & invmat=*invmat_ptr;

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::setByInverseMatrix(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setByInverseMatrix(invmat);

		return 0;
	}

	// osg::Matrixd osgGA::UFOManipulator::getMatrix() const
	static int _bind_getMatrix(lua_State *L) {
		if (!_lg_typecheck_getMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::UFOManipulator::getMatrix() const function, expected prototype:\nosg::Matrixd osgGA::UFOManipulator::getMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::UFOManipulator::getMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->getMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgGA::UFOManipulator::getInverseMatrix() const
	static int _bind_getInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_getInverseMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::UFOManipulator::getInverseMatrix() const function, expected prototype:\nosg::Matrixd osgGA::UFOManipulator::getInverseMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::UFOManipulator::getInverseMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->getInverseMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// void osgGA::UFOManipulator::setNode(osg::Node * node)
	static int _bind_setNode(lua_State *L) {
		if (!_lg_typecheck_setNode(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::setNode(osg::Node * node) function, expected prototype:\nvoid osgGA::UFOManipulator::setNode(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::setNode(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNode(node);

		return 0;
	}

	// const osg::Node * osgGA::UFOManipulator::getNode() const
	static int _bind_getNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Node * osgGA::UFOManipulator::getNode() const function, expected prototype:\nconst osg::Node * osgGA::UFOManipulator::getNode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Node * osgGA::UFOManipulator::getNode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Node * lret = self->getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osgGA::UFOManipulator::getNode()
	static int _bind_getNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node * osgGA::UFOManipulator::getNode() function, expected prototype:\nosg::Node * osgGA::UFOManipulator::getNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node * osgGA::UFOManipulator::getNode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node * lret = self->getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::UFOManipulator::getNode
	static int _bind_getNode(lua_State *L) {
		if (_lg_typecheck_getNode_overload_1(L)) return _bind_getNode_overload_1(L);
		if (_lg_typecheck_getNode_overload_2(L)) return _bind_getNode_overload_2(L);

		luaL_error(L, "error in function getNode, cannot match any of the overloads for function getNode:\n  getNode()\n  getNode()\n");
		return 0;
	}

	// void osgGA::UFOManipulator::computeHomePosition()
	static int _bind_computeHomePosition(lua_State *L) {
		if (!_lg_typecheck_computeHomePosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::computeHomePosition() function, expected prototype:\nvoid osgGA::UFOManipulator::computeHomePosition()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::computeHomePosition(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->computeHomePosition();

		return 0;
	}

	// void osgGA::UFOManipulator::home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_home_overload_1(lua_State *L) {
		if (!_lg_typecheck_home_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nvoid osgGA::UFOManipulator::home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::UFOManipulator::home function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::UFOManipulator::home function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->home(_arg1, _arg2);

		return 0;
	}

	// void osgGA::UFOManipulator::home(double arg1)
	static int _bind_home_overload_2(lua_State *L) {
		if (!_lg_typecheck_home_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::home(double arg1) function, expected prototype:\nvoid osgGA::UFOManipulator::home(double arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double _arg1=(double)lua_tonumber(L,2);

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::home(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->home(_arg1);

		return 0;
	}

	// Overload binder for osgGA::UFOManipulator::home
	static int _bind_home(lua_State *L) {
		if (_lg_typecheck_home_overload_1(L)) return _bind_home_overload_1(L);
		if (_lg_typecheck_home_overload_2(L)) return _bind_home_overload_2(L);

		luaL_error(L, "error in function home, cannot match any of the overloads for function home:\n  home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)\n  home(double)\n");
		return 0;
	}

	// void osgGA::UFOManipulator::init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nvoid osgGA::UFOManipulator::init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::UFOManipulator::init function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::UFOManipulator::init function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::init(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->init(_arg1, _arg2);

		return 0;
	}

	// bool osgGA::UFOManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::UFOManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa) function, expected prototype:\nbool osgGA::UFOManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::UFOManipulator::handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* aa_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !aa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aa in osgGA::UFOManipulator::handle function");
		}
		osgGA::GUIActionAdapter & aa=*aa_ptr;

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::UFOManipulator::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->handle(ea, aa);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::UFOManipulator::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgGA::UFOManipulator::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* usage_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgGA::UFOManipulator::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getUsage(usage);

		return 0;
	}

	// void osgGA::UFOManipulator::getCurrentPositionAsLookAt(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up)
	static int _bind_getCurrentPositionAsLookAt(lua_State *L) {
		if (!_lg_typecheck_getCurrentPositionAsLookAt(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::getCurrentPositionAsLookAt(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) function, expected prototype:\nvoid osgGA::UFOManipulator::getCurrentPositionAsLookAt(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::UFOManipulator::getCurrentPositionAsLookAt function");
		}
		osg::Vec3d & eye=*eye_ptr;
		osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::UFOManipulator::getCurrentPositionAsLookAt function");
		}
		osg::Vec3d & center=*center_ptr;
		osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::UFOManipulator::getCurrentPositionAsLookAt function");
		}
		osg::Vec3d & up=*up_ptr;

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::getCurrentPositionAsLookAt(osg::Vec3d &, osg::Vec3d &, osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getCurrentPositionAsLookAt(eye, center, up);

		return 0;
	}

	// void osgGA::UFOManipulator::setMinHeight(double in_min_height)
	static int _bind_setMinHeight(lua_State *L) {
		if (!_lg_typecheck_setMinHeight(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::setMinHeight(double in_min_height) function, expected prototype:\nvoid osgGA::UFOManipulator::setMinHeight(double in_min_height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double in_min_height=(double)lua_tonumber(L,2);

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::setMinHeight(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMinHeight(in_min_height);

		return 0;
	}

	// double osgGA::UFOManipulator::getMinHeight() const
	static int _bind_getMinHeight(lua_State *L) {
		if (!_lg_typecheck_getMinHeight(L)) {
			luaL_error(L, "luna typecheck failed in double osgGA::UFOManipulator::getMinHeight() const function, expected prototype:\ndouble osgGA::UFOManipulator::getMinHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgGA::UFOManipulator::getMinHeight() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getMinHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::UFOManipulator::setMinDistance(double in_min_dist)
	static int _bind_setMinDistance(lua_State *L) {
		if (!_lg_typecheck_setMinDistance(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::setMinDistance(double in_min_dist) function, expected prototype:\nvoid osgGA::UFOManipulator::setMinDistance(double in_min_dist)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double in_min_dist=(double)lua_tonumber(L,2);

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::setMinDistance(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMinDistance(in_min_dist);

		return 0;
	}

	// double osgGA::UFOManipulator::getMinDistance() const
	static int _bind_getMinDistance(lua_State *L) {
		if (!_lg_typecheck_getMinDistance(L)) {
			luaL_error(L, "luna typecheck failed in double osgGA::UFOManipulator::getMinDistance() const function, expected prototype:\ndouble osgGA::UFOManipulator::getMinDistance() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgGA::UFOManipulator::getMinDistance() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getMinDistance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::UFOManipulator::setForwardSpeed(double in_fs)
	static int _bind_setForwardSpeed(lua_State *L) {
		if (!_lg_typecheck_setForwardSpeed(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::setForwardSpeed(double in_fs) function, expected prototype:\nvoid osgGA::UFOManipulator::setForwardSpeed(double in_fs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double in_fs=(double)lua_tonumber(L,2);

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::setForwardSpeed(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setForwardSpeed(in_fs);

		return 0;
	}

	// double osgGA::UFOManipulator::getForwardSpeed() const
	static int _bind_getForwardSpeed(lua_State *L) {
		if (!_lg_typecheck_getForwardSpeed(L)) {
			luaL_error(L, "luna typecheck failed in double osgGA::UFOManipulator::getForwardSpeed() const function, expected prototype:\ndouble osgGA::UFOManipulator::getForwardSpeed() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgGA::UFOManipulator::getForwardSpeed() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getForwardSpeed();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::UFOManipulator::setSideSpeed(double in_ss)
	static int _bind_setSideSpeed(lua_State *L) {
		if (!_lg_typecheck_setSideSpeed(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::setSideSpeed(double in_ss) function, expected prototype:\nvoid osgGA::UFOManipulator::setSideSpeed(double in_ss)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double in_ss=(double)lua_tonumber(L,2);

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::setSideSpeed(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSideSpeed(in_ss);

		return 0;
	}

	// double osgGA::UFOManipulator::getSideSpeed() const
	static int _bind_getSideSpeed(lua_State *L) {
		if (!_lg_typecheck_getSideSpeed(L)) {
			luaL_error(L, "luna typecheck failed in double osgGA::UFOManipulator::getSideSpeed() const function, expected prototype:\ndouble osgGA::UFOManipulator::getSideSpeed() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgGA::UFOManipulator::getSideSpeed() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getSideSpeed();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::UFOManipulator::setRotationSpeed(double in_rot_speed)
	static int _bind_setRotationSpeed(lua_State *L) {
		if (!_lg_typecheck_setRotationSpeed(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::setRotationSpeed(double in_rot_speed) function, expected prototype:\nvoid osgGA::UFOManipulator::setRotationSpeed(double in_rot_speed)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double in_rot_speed=(double)lua_tonumber(L,2);

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::setRotationSpeed(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRotationSpeed(in_rot_speed);

		return 0;
	}

	// double osgGA::UFOManipulator::getRotationSpeed() const
	static int _bind_getRotationSpeed(lua_State *L) {
		if (!_lg_typecheck_getRotationSpeed(L)) {
			luaL_error(L, "luna typecheck failed in double osgGA::UFOManipulator::getRotationSpeed() const function, expected prototype:\ndouble osgGA::UFOManipulator::getRotationSpeed() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgGA::UFOManipulator::getRotationSpeed() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getRotationSpeed();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::UFOManipulator::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgGA::UFOManipulator::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UFOManipulator::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgGA::UFOManipulator::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::base_setName(const std::string & name) function, expected prototype:\nvoid osgGA::UFOManipulator::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UFOManipulator::setName(name);

		return 0;
	}

	// void osgGA::UFOManipulator::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::base_computeDataVariance() function, expected prototype:\nvoid osgGA::UFOManipulator::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UFOManipulator::computeDataVariance();

		return 0;
	}

	// void osgGA::UFOManipulator::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgGA::UFOManipulator::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UFOManipulator::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgGA::UFOManipulator::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgGA::UFOManipulator::base_getUserData() function, expected prototype:\nosg::Referenced * osgGA::UFOManipulator::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgGA::UFOManipulator::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->UFOManipulator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgGA::UFOManipulator::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgGA::UFOManipulator::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgGA::UFOManipulator::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgGA::UFOManipulator::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->UFOManipulator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::UFOManipulator::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgGA::UFOManipulator::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgGA::UFOManipulator::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UFOManipulator::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgGA::UFOManipulator::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::UFOManipulator::base_cloneType() const function, expected prototype:\nosg::Object * osgGA::UFOManipulator::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::UFOManipulator::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->UFOManipulator::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgGA::UFOManipulator::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::UFOManipulator::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgGA::UFOManipulator::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::UFOManipulator::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::UFOManipulator::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->UFOManipulator::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::UFOManipulator::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::UFOManipulator::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgGA::UFOManipulator::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::UFOManipulator::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->UFOManipulator::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgGA::UFOManipulator::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::UFOManipulator::base_libraryName() const function, expected prototype:\nconst char * osgGA::UFOManipulator::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::UFOManipulator::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->UFOManipulator::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::UFOManipulator::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	static int _bind_base_event(lua_State *L) {
		if (!_lg_typecheck_base_event(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable) function, expected prototype:\nvoid osgGA::UFOManipulator::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::base_event(osg::NodeVisitor *, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UFOManipulator::event(nv, drawable);

		return 0;
	}

	// void osgGA::UFOManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)
	static int _bind_base_setCoordinateFrameCallback(lua_State *L) {
		if (!_lg_typecheck_base_setCoordinateFrameCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb) function, expected prototype:\nvoid osgGA::UFOManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::CameraManipulator::CoordinateFrameCallback* cb=(Luna< osg::Referenced >::checkSubType< osgGA::CameraManipulator::CoordinateFrameCallback >(L,2));

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::base_setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UFOManipulator::setCoordinateFrameCallback(cb);

		return 0;
	}

	// void osgGA::UFOManipulator::base_updateCamera(osg::Camera & camera)
	static int _bind_base_updateCamera(lua_State *L) {
		if (!_lg_typecheck_base_updateCamera(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::base_updateCamera(osg::Camera & camera) function, expected prototype:\nvoid osgGA::UFOManipulator::base_updateCamera(osg::Camera & camera)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera* camera_ptr=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));
		if( !camera_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg camera in osgGA::UFOManipulator::base_updateCamera function");
		}
		osg::Camera & camera=*camera_ptr;

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::base_updateCamera(osg::Camera &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UFOManipulator::updateCamera(camera);

		return 0;
	}

	// osgUtil::SceneView::FusionDistanceMode osgGA::UFOManipulator::base_getFusionDistanceMode() const
	static int _bind_base_getFusionDistanceMode(lua_State *L) {
		if (!_lg_typecheck_base_getFusionDistanceMode(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::SceneView::FusionDistanceMode osgGA::UFOManipulator::base_getFusionDistanceMode() const function, expected prototype:\nosgUtil::SceneView::FusionDistanceMode osgGA::UFOManipulator::base_getFusionDistanceMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::SceneView::FusionDistanceMode osgGA::UFOManipulator::base_getFusionDistanceMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::SceneView::FusionDistanceMode lret = self->UFOManipulator::getFusionDistanceMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgGA::UFOManipulator::base_getFusionDistanceValue() const
	static int _bind_base_getFusionDistanceValue(lua_State *L) {
		if (!_lg_typecheck_base_getFusionDistanceValue(L)) {
			luaL_error(L, "luna typecheck failed in float osgGA::UFOManipulator::base_getFusionDistanceValue() const function, expected prototype:\nfloat osgGA::UFOManipulator::base_getFusionDistanceValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgGA::UFOManipulator::base_getFusionDistanceValue() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->UFOManipulator::getFusionDistanceValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::UFOManipulator::base_setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)
	static int _bind_base_setHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_setHomePosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::base_setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false) function, expected prototype:\nvoid osgGA::UFOManipulator::base_setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::UFOManipulator::base_setHomePosition function");
		}
		const osg::Vec3d & eye=*eye_ptr;
		const osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::UFOManipulator::base_setHomePosition function");
		}
		const osg::Vec3d & center=*center_ptr;
		const osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::UFOManipulator::base_setHomePosition function");
		}
		const osg::Vec3d & up=*up_ptr;
		bool autoComputeHomePosition=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::base_setHomePosition(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UFOManipulator::setHomePosition(eye, center, up, autoComputeHomePosition);

		return 0;
	}

	// void osgGA::UFOManipulator::base_getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const
	static int _bind_base_getHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_getHomePosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::base_getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const function, expected prototype:\nvoid osgGA::UFOManipulator::base_getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::UFOManipulator::base_getHomePosition function");
		}
		osg::Vec3d & eye=*eye_ptr;
		osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::UFOManipulator::base_getHomePosition function");
		}
		osg::Vec3d & center=*center_ptr;
		osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::UFOManipulator::base_getHomePosition function");
		}
		osg::Vec3d & up=*up_ptr;

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::base_getHomePosition(osg::Vec3d &, osg::Vec3d &, osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UFOManipulator::getHomePosition(eye, center, up);

		return 0;
	}

	// void osgGA::UFOManipulator::base_setAutoComputeHomePosition(bool flag)
	static int _bind_base_setAutoComputeHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_setAutoComputeHomePosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::base_setAutoComputeHomePosition(bool flag) function, expected prototype:\nvoid osgGA::UFOManipulator::base_setAutoComputeHomePosition(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::base_setAutoComputeHomePosition(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UFOManipulator::setAutoComputeHomePosition(flag);

		return 0;
	}

	// const char * osgGA::UFOManipulator::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::UFOManipulator::base_className() const function, expected prototype:\nconst char * osgGA::UFOManipulator::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::UFOManipulator::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->UFOManipulator::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::UFOManipulator::base_setByMatrix(const osg::Matrixd & matrix)
	static int _bind_base_setByMatrix(lua_State *L) {
		if (!_lg_typecheck_base_setByMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::base_setByMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::UFOManipulator::base_setByMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::UFOManipulator::base_setByMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::base_setByMatrix(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UFOManipulator::setByMatrix(matrix);

		return 0;
	}

	// void osgGA::UFOManipulator::base_setByInverseMatrix(const osg::Matrixd & invmat)
	static int _bind_base_setByInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_base_setByInverseMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::base_setByInverseMatrix(const osg::Matrixd & invmat) function, expected prototype:\nvoid osgGA::UFOManipulator::base_setByInverseMatrix(const osg::Matrixd & invmat)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* invmat_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !invmat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg invmat in osgGA::UFOManipulator::base_setByInverseMatrix function");
		}
		const osg::Matrixd & invmat=*invmat_ptr;

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::base_setByInverseMatrix(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UFOManipulator::setByInverseMatrix(invmat);

		return 0;
	}

	// osg::Matrixd osgGA::UFOManipulator::base_getMatrix() const
	static int _bind_base_getMatrix(lua_State *L) {
		if (!_lg_typecheck_base_getMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::UFOManipulator::base_getMatrix() const function, expected prototype:\nosg::Matrixd osgGA::UFOManipulator::base_getMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::UFOManipulator::base_getMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->UFOManipulator::getMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgGA::UFOManipulator::base_getInverseMatrix() const
	static int _bind_base_getInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_base_getInverseMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::UFOManipulator::base_getInverseMatrix() const function, expected prototype:\nosg::Matrixd osgGA::UFOManipulator::base_getInverseMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::UFOManipulator::base_getInverseMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->UFOManipulator::getInverseMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// void osgGA::UFOManipulator::base_setNode(osg::Node * node)
	static int _bind_base_setNode(lua_State *L) {
		if (!_lg_typecheck_base_setNode(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::base_setNode(osg::Node * node) function, expected prototype:\nvoid osgGA::UFOManipulator::base_setNode(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::base_setNode(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UFOManipulator::setNode(node);

		return 0;
	}

	// const osg::Node * osgGA::UFOManipulator::base_getNode() const
	static int _bind_base_getNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getNode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Node * osgGA::UFOManipulator::base_getNode() const function, expected prototype:\nconst osg::Node * osgGA::UFOManipulator::base_getNode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Node * osgGA::UFOManipulator::base_getNode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Node * lret = self->UFOManipulator::getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osgGA::UFOManipulator::base_getNode()
	static int _bind_base_getNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getNode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node * osgGA::UFOManipulator::base_getNode() function, expected prototype:\nosg::Node * osgGA::UFOManipulator::base_getNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node * osgGA::UFOManipulator::base_getNode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node * lret = self->UFOManipulator::getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::UFOManipulator::base_getNode
	static int _bind_base_getNode(lua_State *L) {
		if (_lg_typecheck_base_getNode_overload_1(L)) return _bind_base_getNode_overload_1(L);
		if (_lg_typecheck_base_getNode_overload_2(L)) return _bind_base_getNode_overload_2(L);

		luaL_error(L, "error in function base_getNode, cannot match any of the overloads for function base_getNode:\n  base_getNode()\n  base_getNode()\n");
		return 0;
	}

	// void osgGA::UFOManipulator::base_computeHomePosition()
	static int _bind_base_computeHomePosition(lua_State *L) {
		if (!_lg_typecheck_base_computeHomePosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::base_computeHomePosition() function, expected prototype:\nvoid osgGA::UFOManipulator::base_computeHomePosition()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::base_computeHomePosition(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UFOManipulator::computeHomePosition();

		return 0;
	}

	// void osgGA::UFOManipulator::base_home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_base_home_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_home_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::base_home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nvoid osgGA::UFOManipulator::base_home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::UFOManipulator::base_home function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::UFOManipulator::base_home function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::base_home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UFOManipulator::home(_arg1, _arg2);

		return 0;
	}

	// void osgGA::UFOManipulator::base_home(double arg1)
	static int _bind_base_home_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_home_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::base_home(double arg1) function, expected prototype:\nvoid osgGA::UFOManipulator::base_home(double arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double _arg1=(double)lua_tonumber(L,2);

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::base_home(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UFOManipulator::home(_arg1);

		return 0;
	}

	// Overload binder for osgGA::UFOManipulator::base_home
	static int _bind_base_home(lua_State *L) {
		if (_lg_typecheck_base_home_overload_1(L)) return _bind_base_home_overload_1(L);
		if (_lg_typecheck_base_home_overload_2(L)) return _bind_base_home_overload_2(L);

		luaL_error(L, "error in function base_home, cannot match any of the overloads for function base_home:\n  base_home(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)\n  base_home(double)\n");
		return 0;
	}

	// void osgGA::UFOManipulator::base_init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	static int _bind_base_init(lua_State *L) {
		if (!_lg_typecheck_base_init(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::base_init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nvoid osgGA::UFOManipulator::base_init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::UFOManipulator::base_init function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::UFOManipulator::base_init function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::base_init(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UFOManipulator::init(_arg1, _arg2);

		return 0;
	}

	// bool osgGA::UFOManipulator::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)
	static int _bind_base_handle(lua_State *L) {
		if (!_lg_typecheck_base_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::UFOManipulator::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa) function, expected prototype:\nbool osgGA::UFOManipulator::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::UFOManipulator::base_handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* aa_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !aa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aa in osgGA::UFOManipulator::base_handle function");
		}
		osgGA::GUIActionAdapter & aa=*aa_ptr;

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::UFOManipulator::base_handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->UFOManipulator::handle(ea, aa);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::UFOManipulator::base_getUsage(osg::ApplicationUsage & usage) const
	static int _bind_base_getUsage(lua_State *L) {
		if (!_lg_typecheck_base_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::base_getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgGA::UFOManipulator::base_getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* usage_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgGA::UFOManipulator::base_getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgGA::UFOManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::base_getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UFOManipulator::getUsage(usage);

		return 0;
	}


	// Operator binds:

};

osgGA::UFOManipulator* LunaTraits< osgGA::UFOManipulator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_UFOManipulator::_bind_ctor(L);
}

void LunaTraits< osgGA::UFOManipulator >::_bind_dtor(osgGA::UFOManipulator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::UFOManipulator >::className[] = "UFOManipulator";
const char LunaTraits< osgGA::UFOManipulator >::fullName[] = "osgGA::UFOManipulator";
const char LunaTraits< osgGA::UFOManipulator >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::UFOManipulator >::parents[] = {"osgGA.CameraManipulator", 0};
const int LunaTraits< osgGA::UFOManipulator >::hash = 93233893;
const int LunaTraits< osgGA::UFOManipulator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::UFOManipulator >::methods[] = {
	{"className", &luna_wrapper_osgGA_UFOManipulator::_bind_className},
	{"setByMatrix", &luna_wrapper_osgGA_UFOManipulator::_bind_setByMatrix},
	{"setByInverseMatrix", &luna_wrapper_osgGA_UFOManipulator::_bind_setByInverseMatrix},
	{"getMatrix", &luna_wrapper_osgGA_UFOManipulator::_bind_getMatrix},
	{"getInverseMatrix", &luna_wrapper_osgGA_UFOManipulator::_bind_getInverseMatrix},
	{"setNode", &luna_wrapper_osgGA_UFOManipulator::_bind_setNode},
	{"getNode", &luna_wrapper_osgGA_UFOManipulator::_bind_getNode},
	{"computeHomePosition", &luna_wrapper_osgGA_UFOManipulator::_bind_computeHomePosition},
	{"home", &luna_wrapper_osgGA_UFOManipulator::_bind_home},
	{"init", &luna_wrapper_osgGA_UFOManipulator::_bind_init},
	{"handle", &luna_wrapper_osgGA_UFOManipulator::_bind_handle},
	{"getUsage", &luna_wrapper_osgGA_UFOManipulator::_bind_getUsage},
	{"getCurrentPositionAsLookAt", &luna_wrapper_osgGA_UFOManipulator::_bind_getCurrentPositionAsLookAt},
	{"setMinHeight", &luna_wrapper_osgGA_UFOManipulator::_bind_setMinHeight},
	{"getMinHeight", &luna_wrapper_osgGA_UFOManipulator::_bind_getMinHeight},
	{"setMinDistance", &luna_wrapper_osgGA_UFOManipulator::_bind_setMinDistance},
	{"getMinDistance", &luna_wrapper_osgGA_UFOManipulator::_bind_getMinDistance},
	{"setForwardSpeed", &luna_wrapper_osgGA_UFOManipulator::_bind_setForwardSpeed},
	{"getForwardSpeed", &luna_wrapper_osgGA_UFOManipulator::_bind_getForwardSpeed},
	{"setSideSpeed", &luna_wrapper_osgGA_UFOManipulator::_bind_setSideSpeed},
	{"getSideSpeed", &luna_wrapper_osgGA_UFOManipulator::_bind_getSideSpeed},
	{"setRotationSpeed", &luna_wrapper_osgGA_UFOManipulator::_bind_setRotationSpeed},
	{"getRotationSpeed", &luna_wrapper_osgGA_UFOManipulator::_bind_getRotationSpeed},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgGA_UFOManipulator::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgGA_UFOManipulator::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgGA_UFOManipulator::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgGA_UFOManipulator::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgGA_UFOManipulator::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgGA_UFOManipulator::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgGA_UFOManipulator::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgGA_UFOManipulator::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgGA_UFOManipulator::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgGA_UFOManipulator::_bind_base_libraryName},
	{"base_event", &luna_wrapper_osgGA_UFOManipulator::_bind_base_event},
	{"base_setCoordinateFrameCallback", &luna_wrapper_osgGA_UFOManipulator::_bind_base_setCoordinateFrameCallback},
	{"base_updateCamera", &luna_wrapper_osgGA_UFOManipulator::_bind_base_updateCamera},
	{"base_getFusionDistanceMode", &luna_wrapper_osgGA_UFOManipulator::_bind_base_getFusionDistanceMode},
	{"base_getFusionDistanceValue", &luna_wrapper_osgGA_UFOManipulator::_bind_base_getFusionDistanceValue},
	{"base_setHomePosition", &luna_wrapper_osgGA_UFOManipulator::_bind_base_setHomePosition},
	{"base_getHomePosition", &luna_wrapper_osgGA_UFOManipulator::_bind_base_getHomePosition},
	{"base_setAutoComputeHomePosition", &luna_wrapper_osgGA_UFOManipulator::_bind_base_setAutoComputeHomePosition},
	{"base_className", &luna_wrapper_osgGA_UFOManipulator::_bind_base_className},
	{"base_setByMatrix", &luna_wrapper_osgGA_UFOManipulator::_bind_base_setByMatrix},
	{"base_setByInverseMatrix", &luna_wrapper_osgGA_UFOManipulator::_bind_base_setByInverseMatrix},
	{"base_getMatrix", &luna_wrapper_osgGA_UFOManipulator::_bind_base_getMatrix},
	{"base_getInverseMatrix", &luna_wrapper_osgGA_UFOManipulator::_bind_base_getInverseMatrix},
	{"base_setNode", &luna_wrapper_osgGA_UFOManipulator::_bind_base_setNode},
	{"base_getNode", &luna_wrapper_osgGA_UFOManipulator::_bind_base_getNode},
	{"base_computeHomePosition", &luna_wrapper_osgGA_UFOManipulator::_bind_base_computeHomePosition},
	{"base_home", &luna_wrapper_osgGA_UFOManipulator::_bind_base_home},
	{"base_init", &luna_wrapper_osgGA_UFOManipulator::_bind_base_init},
	{"base_handle", &luna_wrapper_osgGA_UFOManipulator::_bind_base_handle},
	{"base_getUsage", &luna_wrapper_osgGA_UFOManipulator::_bind_base_getUsage},
	{"fromVoid", &luna_wrapper_osgGA_UFOManipulator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgGA_UFOManipulator::_bind_asVoid},
	{"getTable", &luna_wrapper_osgGA_UFOManipulator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::UFOManipulator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_UFOManipulator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::UFOManipulator >::enumValues[] = {
	{0,0}
};


