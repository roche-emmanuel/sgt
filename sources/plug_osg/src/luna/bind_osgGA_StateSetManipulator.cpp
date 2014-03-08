#include <plug_common.h>

#include <luna/wrappers/wrapper_osgGA_StateSetManipulator.h>

class luna_wrapper_osgGA_StateSetManipulator {
public:
	typedef Luna< osgGA::StateSetManipulator > luna_t;

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

		osgGA::StateSetManipulator* self= (osgGA::StateSetManipulator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgGA::StateSetManipulator >::push(L,self,false);
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
		//osgGA::StateSetManipulator* ptr= dynamic_cast< osgGA::StateSetManipulator* >(Luna< osg::Referenced >::check(L,1));
		osgGA::StateSetManipulator* ptr= luna_caster< osg::Referenced, osgGA::StateSetManipulator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::StateSetManipulator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( luatop>0 && (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStateSet_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStateSet_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_setMaximumNumOfTextureUnits(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaximumNumOfTextureUnits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBackfaceEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBackfaceEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLightingEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLightingEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTextureEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPolygonMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPolygonMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_cyclePolygonMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKeyEventToggleBackfaceCulling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventToggleBackfaceCulling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKeyEventToggleLighting(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventToggleLighting(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKeyEventToggleTexturing(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventToggleTexturing(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKeyEventCyclePolygonMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyEventCyclePolygonMode(lua_State *L) {
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

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getStateSet_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getStateSet_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// osgGA::StateSetManipulator::StateSetManipulator(osg::StateSet * stateset = 0)
	static osgGA::StateSetManipulator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::StateSetManipulator::StateSetManipulator(osg::StateSet * stateset = 0) function, expected prototype:\nosgGA::StateSetManipulator::StateSetManipulator(osg::StateSet * stateset = 0)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::StateSet* stateset=luatop>0 ? (Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1)) : (osg::StateSet*)0;

		return new osgGA::StateSetManipulator(stateset);
	}

	// osgGA::StateSetManipulator::StateSetManipulator(lua_Table * data, osg::StateSet * stateset = 0)
	static osgGA::StateSetManipulator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::StateSetManipulator::StateSetManipulator(lua_Table * data, osg::StateSet * stateset = 0) function, expected prototype:\nosgGA::StateSetManipulator::StateSetManipulator(lua_Table * data, osg::StateSet * stateset = 0)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::StateSet* stateset=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2)) : (osg::StateSet*)0;

		return new wrapper_osgGA_StateSetManipulator(L,NULL, stateset);
	}

	// Overload binder for osgGA::StateSetManipulator::StateSetManipulator
	static osgGA::StateSetManipulator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function StateSetManipulator, cannot match any of the overloads for function StateSetManipulator:\n  StateSetManipulator(osg::StateSet *)\n  StateSetManipulator(lua_Table *, osg::StateSet *)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgGA::StateSetManipulator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::StateSetManipulator::className() const function, expected prototype:\nconst char * osgGA::StateSetManipulator::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::StateSetManipulator::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::StateSetManipulator::setStateSet(osg::StateSet * arg1)
	static int _bind_setStateSet(lua_State *L) {
		if (!_lg_typecheck_setStateSet(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::StateSetManipulator::setStateSet(osg::StateSet * arg1) function, expected prototype:\nvoid osgGA::StateSetManipulator::setStateSet(osg::StateSet * arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* _arg1=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::StateSetManipulator::setStateSet(osg::StateSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStateSet(_arg1);

		return 0;
	}

	// osg::StateSet * osgGA::StateSetManipulator::getStateSet()
	static int _bind_getStateSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_getStateSet_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgGA::StateSetManipulator::getStateSet() function, expected prototype:\nosg::StateSet * osgGA::StateSetManipulator::getStateSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet * osgGA::StateSetManipulator::getStateSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet * lret = self->getStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet * osgGA::StateSetManipulator::getStateSet() const
	static int _bind_getStateSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_getStateSet_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateSet * osgGA::StateSetManipulator::getStateSet() const function, expected prototype:\nconst osg::StateSet * osgGA::StateSetManipulator::getStateSet() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateSet * osgGA::StateSetManipulator::getStateSet() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet * lret = self->getStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::StateSetManipulator::getStateSet
	static int _bind_getStateSet(lua_State *L) {
		if (_lg_typecheck_getStateSet_overload_1(L)) return _bind_getStateSet_overload_1(L);
		if (_lg_typecheck_getStateSet_overload_2(L)) return _bind_getStateSet_overload_2(L);

		luaL_error(L, "error in function getStateSet, cannot match any of the overloads for function getStateSet:\n  getStateSet()\n  getStateSet()\n");
		return 0;
	}

	// bool osgGA::StateSetManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::StateSetManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nbool osgGA::StateSetManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::StateSetManipulator::handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::StateSetManipulator::handle function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::StateSetManipulator::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->handle(ea, us);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::StateSetManipulator::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::StateSetManipulator::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgGA::StateSetManipulator::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* usage_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgGA::StateSetManipulator::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::StateSetManipulator::getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getUsage(usage);

		return 0;
	}

	// void osgGA::StateSetManipulator::setMaximumNumOfTextureUnits(unsigned int i)
	static int _bind_setMaximumNumOfTextureUnits(lua_State *L) {
		if (!_lg_typecheck_setMaximumNumOfTextureUnits(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::StateSetManipulator::setMaximumNumOfTextureUnits(unsigned int i) function, expected prototype:\nvoid osgGA::StateSetManipulator::setMaximumNumOfTextureUnits(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::StateSetManipulator::setMaximumNumOfTextureUnits(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMaximumNumOfTextureUnits(i);

		return 0;
	}

	// unsigned int osgGA::StateSetManipulator::getMaximumNumOfTextureUnits() const
	static int _bind_getMaximumNumOfTextureUnits(lua_State *L) {
		if (!_lg_typecheck_getMaximumNumOfTextureUnits(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgGA::StateSetManipulator::getMaximumNumOfTextureUnits() const function, expected prototype:\nunsigned int osgGA::StateSetManipulator::getMaximumNumOfTextureUnits() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgGA::StateSetManipulator::getMaximumNumOfTextureUnits() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getMaximumNumOfTextureUnits();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::StateSetManipulator::setBackfaceEnabled(bool newbackface)
	static int _bind_setBackfaceEnabled(lua_State *L) {
		if (!_lg_typecheck_setBackfaceEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::StateSetManipulator::setBackfaceEnabled(bool newbackface) function, expected prototype:\nvoid osgGA::StateSetManipulator::setBackfaceEnabled(bool newbackface)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool newbackface=(bool)(lua_toboolean(L,2)==1);

		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::StateSetManipulator::setBackfaceEnabled(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBackfaceEnabled(newbackface);

		return 0;
	}

	// bool osgGA::StateSetManipulator::getBackfaceEnabled() const
	static int _bind_getBackfaceEnabled(lua_State *L) {
		if (!_lg_typecheck_getBackfaceEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::StateSetManipulator::getBackfaceEnabled() const function, expected prototype:\nbool osgGA::StateSetManipulator::getBackfaceEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::StateSetManipulator::getBackfaceEnabled() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getBackfaceEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::StateSetManipulator::setLightingEnabled(bool newlighting)
	static int _bind_setLightingEnabled(lua_State *L) {
		if (!_lg_typecheck_setLightingEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::StateSetManipulator::setLightingEnabled(bool newlighting) function, expected prototype:\nvoid osgGA::StateSetManipulator::setLightingEnabled(bool newlighting)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool newlighting=(bool)(lua_toboolean(L,2)==1);

		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::StateSetManipulator::setLightingEnabled(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLightingEnabled(newlighting);

		return 0;
	}

	// bool osgGA::StateSetManipulator::getLightingEnabled() const
	static int _bind_getLightingEnabled(lua_State *L) {
		if (!_lg_typecheck_getLightingEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::StateSetManipulator::getLightingEnabled() const function, expected prototype:\nbool osgGA::StateSetManipulator::getLightingEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::StateSetManipulator::getLightingEnabled() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getLightingEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::StateSetManipulator::setTextureEnabled(bool newtexture)
	static int _bind_setTextureEnabled(lua_State *L) {
		if (!_lg_typecheck_setTextureEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::StateSetManipulator::setTextureEnabled(bool newtexture) function, expected prototype:\nvoid osgGA::StateSetManipulator::setTextureEnabled(bool newtexture)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool newtexture=(bool)(lua_toboolean(L,2)==1);

		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::StateSetManipulator::setTextureEnabled(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureEnabled(newtexture);

		return 0;
	}

	// bool osgGA::StateSetManipulator::getTextureEnabled() const
	static int _bind_getTextureEnabled(lua_State *L) {
		if (!_lg_typecheck_getTextureEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::StateSetManipulator::getTextureEnabled() const function, expected prototype:\nbool osgGA::StateSetManipulator::getTextureEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::StateSetManipulator::getTextureEnabled() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getTextureEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::StateSetManipulator::setPolygonMode(osg::PolygonMode::Mode newpolygonmode)
	static int _bind_setPolygonMode(lua_State *L) {
		if (!_lg_typecheck_setPolygonMode(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::StateSetManipulator::setPolygonMode(osg::PolygonMode::Mode newpolygonmode) function, expected prototype:\nvoid osgGA::StateSetManipulator::setPolygonMode(osg::PolygonMode::Mode newpolygonmode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::PolygonMode::Mode newpolygonmode=(osg::PolygonMode::Mode)lua_tointeger(L,2);

		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::StateSetManipulator::setPolygonMode(osg::PolygonMode::Mode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPolygonMode(newpolygonmode);

		return 0;
	}

	// osg::PolygonMode::Mode osgGA::StateSetManipulator::getPolygonMode() const
	static int _bind_getPolygonMode(lua_State *L) {
		if (!_lg_typecheck_getPolygonMode(L)) {
			luaL_error(L, "luna typecheck failed in osg::PolygonMode::Mode osgGA::StateSetManipulator::getPolygonMode() const function, expected prototype:\nosg::PolygonMode::Mode osgGA::StateSetManipulator::getPolygonMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::PolygonMode::Mode osgGA::StateSetManipulator::getPolygonMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::PolygonMode::Mode lret = self->getPolygonMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::StateSetManipulator::cyclePolygonMode()
	static int _bind_cyclePolygonMode(lua_State *L) {
		if (!_lg_typecheck_cyclePolygonMode(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::StateSetManipulator::cyclePolygonMode() function, expected prototype:\nvoid osgGA::StateSetManipulator::cyclePolygonMode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::StateSetManipulator::cyclePolygonMode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->cyclePolygonMode();

		return 0;
	}

	// void osgGA::StateSetManipulator::setKeyEventToggleBackfaceCulling(int key)
	static int _bind_setKeyEventToggleBackfaceCulling(lua_State *L) {
		if (!_lg_typecheck_setKeyEventToggleBackfaceCulling(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::StateSetManipulator::setKeyEventToggleBackfaceCulling(int key) function, expected prototype:\nvoid osgGA::StateSetManipulator::setKeyEventToggleBackfaceCulling(int key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int key=(int)lua_tointeger(L,2);

		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::StateSetManipulator::setKeyEventToggleBackfaceCulling(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setKeyEventToggleBackfaceCulling(key);

		return 0;
	}

	// int osgGA::StateSetManipulator::getKeyEventToggleBackfaceCulling() const
	static int _bind_getKeyEventToggleBackfaceCulling(lua_State *L) {
		if (!_lg_typecheck_getKeyEventToggleBackfaceCulling(L)) {
			luaL_error(L, "luna typecheck failed in int osgGA::StateSetManipulator::getKeyEventToggleBackfaceCulling() const function, expected prototype:\nint osgGA::StateSetManipulator::getKeyEventToggleBackfaceCulling() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgGA::StateSetManipulator::getKeyEventToggleBackfaceCulling() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getKeyEventToggleBackfaceCulling();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::StateSetManipulator::setKeyEventToggleLighting(int key)
	static int _bind_setKeyEventToggleLighting(lua_State *L) {
		if (!_lg_typecheck_setKeyEventToggleLighting(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::StateSetManipulator::setKeyEventToggleLighting(int key) function, expected prototype:\nvoid osgGA::StateSetManipulator::setKeyEventToggleLighting(int key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int key=(int)lua_tointeger(L,2);

		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::StateSetManipulator::setKeyEventToggleLighting(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setKeyEventToggleLighting(key);

		return 0;
	}

	// int osgGA::StateSetManipulator::getKeyEventToggleLighting() const
	static int _bind_getKeyEventToggleLighting(lua_State *L) {
		if (!_lg_typecheck_getKeyEventToggleLighting(L)) {
			luaL_error(L, "luna typecheck failed in int osgGA::StateSetManipulator::getKeyEventToggleLighting() const function, expected prototype:\nint osgGA::StateSetManipulator::getKeyEventToggleLighting() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgGA::StateSetManipulator::getKeyEventToggleLighting() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getKeyEventToggleLighting();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::StateSetManipulator::setKeyEventToggleTexturing(int key)
	static int _bind_setKeyEventToggleTexturing(lua_State *L) {
		if (!_lg_typecheck_setKeyEventToggleTexturing(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::StateSetManipulator::setKeyEventToggleTexturing(int key) function, expected prototype:\nvoid osgGA::StateSetManipulator::setKeyEventToggleTexturing(int key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int key=(int)lua_tointeger(L,2);

		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::StateSetManipulator::setKeyEventToggleTexturing(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setKeyEventToggleTexturing(key);

		return 0;
	}

	// int osgGA::StateSetManipulator::getKeyEventToggleTexturing() const
	static int _bind_getKeyEventToggleTexturing(lua_State *L) {
		if (!_lg_typecheck_getKeyEventToggleTexturing(L)) {
			luaL_error(L, "luna typecheck failed in int osgGA::StateSetManipulator::getKeyEventToggleTexturing() const function, expected prototype:\nint osgGA::StateSetManipulator::getKeyEventToggleTexturing() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgGA::StateSetManipulator::getKeyEventToggleTexturing() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getKeyEventToggleTexturing();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::StateSetManipulator::setKeyEventCyclePolygonMode(int key)
	static int _bind_setKeyEventCyclePolygonMode(lua_State *L) {
		if (!_lg_typecheck_setKeyEventCyclePolygonMode(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::StateSetManipulator::setKeyEventCyclePolygonMode(int key) function, expected prototype:\nvoid osgGA::StateSetManipulator::setKeyEventCyclePolygonMode(int key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int key=(int)lua_tointeger(L,2);

		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::StateSetManipulator::setKeyEventCyclePolygonMode(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setKeyEventCyclePolygonMode(key);

		return 0;
	}

	// int osgGA::StateSetManipulator::getKeyEventCyclePolygonMode() const
	static int _bind_getKeyEventCyclePolygonMode(lua_State *L) {
		if (!_lg_typecheck_getKeyEventCyclePolygonMode(L)) {
			luaL_error(L, "luna typecheck failed in int osgGA::StateSetManipulator::getKeyEventCyclePolygonMode() const function, expected prototype:\nint osgGA::StateSetManipulator::getKeyEventCyclePolygonMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgGA::StateSetManipulator::getKeyEventCyclePolygonMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getKeyEventCyclePolygonMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::StateSetManipulator::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::StateSetManipulator::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgGA::StateSetManipulator::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::StateSetManipulator::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateSetManipulator::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgGA::StateSetManipulator::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::StateSetManipulator::base_setName(const std::string & name) function, expected prototype:\nvoid osgGA::StateSetManipulator::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::StateSetManipulator::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateSetManipulator::setName(name);

		return 0;
	}

	// void osgGA::StateSetManipulator::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::StateSetManipulator::base_computeDataVariance() function, expected prototype:\nvoid osgGA::StateSetManipulator::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::StateSetManipulator::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateSetManipulator::computeDataVariance();

		return 0;
	}

	// void osgGA::StateSetManipulator::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::StateSetManipulator::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgGA::StateSetManipulator::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::StateSetManipulator::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateSetManipulator::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgGA::StateSetManipulator::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgGA::StateSetManipulator::base_getUserData() function, expected prototype:\nosg::Referenced * osgGA::StateSetManipulator::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgGA::StateSetManipulator::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->StateSetManipulator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgGA::StateSetManipulator::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgGA::StateSetManipulator::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgGA::StateSetManipulator::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgGA::StateSetManipulator::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->StateSetManipulator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::StateSetManipulator::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgGA::StateSetManipulator::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::StateSetManipulator::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgGA::StateSetManipulator::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::StateSetManipulator::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateSetManipulator::releaseGLObjects(_arg1);

		return 0;
	}

	// bool osgGA::StateSetManipulator::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::StateSetManipulator::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgGA::StateSetManipulator::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::StateSetManipulator::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->StateSetManipulator::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgGA::StateSetManipulator::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::StateSetManipulator::base_libraryName() const function, expected prototype:\nconst char * osgGA::StateSetManipulator::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::StateSetManipulator::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->StateSetManipulator::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::StateSetManipulator::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	static int _bind_base_event(lua_State *L) {
		if (!_lg_typecheck_base_event(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::StateSetManipulator::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable) function, expected prototype:\nvoid osgGA::StateSetManipulator::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::StateSetManipulator::base_event(osg::NodeVisitor *, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateSetManipulator::event(nv, drawable);

		return 0;
	}

	// const char * osgGA::StateSetManipulator::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgGA::StateSetManipulator::base_className() const function, expected prototype:\nconst char * osgGA::StateSetManipulator::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgGA::StateSetManipulator::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->StateSetManipulator::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::StateSetManipulator::base_setStateSet(osg::StateSet * arg1)
	static int _bind_base_setStateSet(lua_State *L) {
		if (!_lg_typecheck_base_setStateSet(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::StateSetManipulator::base_setStateSet(osg::StateSet * arg1) function, expected prototype:\nvoid osgGA::StateSetManipulator::base_setStateSet(osg::StateSet * arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* _arg1=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::StateSetManipulator::base_setStateSet(osg::StateSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateSetManipulator::setStateSet(_arg1);

		return 0;
	}

	// osg::StateSet * osgGA::StateSetManipulator::base_getStateSet()
	static int _bind_base_getStateSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getStateSet_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgGA::StateSetManipulator::base_getStateSet() function, expected prototype:\nosg::StateSet * osgGA::StateSetManipulator::base_getStateSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet * osgGA::StateSetManipulator::base_getStateSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet * lret = self->StateSetManipulator::getStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet * osgGA::StateSetManipulator::base_getStateSet() const
	static int _bind_base_getStateSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getStateSet_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateSet * osgGA::StateSetManipulator::base_getStateSet() const function, expected prototype:\nconst osg::StateSet * osgGA::StateSetManipulator::base_getStateSet() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateSet * osgGA::StateSetManipulator::base_getStateSet() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet * lret = self->StateSetManipulator::getStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::StateSetManipulator::base_getStateSet
	static int _bind_base_getStateSet(lua_State *L) {
		if (_lg_typecheck_base_getStateSet_overload_1(L)) return _bind_base_getStateSet_overload_1(L);
		if (_lg_typecheck_base_getStateSet_overload_2(L)) return _bind_base_getStateSet_overload_2(L);

		luaL_error(L, "error in function base_getStateSet, cannot match any of the overloads for function base_getStateSet:\n  base_getStateSet()\n  base_getStateSet()\n");
		return 0;
	}

	// bool osgGA::StateSetManipulator::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	static int _bind_base_handle(lua_State *L) {
		if (!_lg_typecheck_base_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::StateSetManipulator::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) function, expected prototype:\nbool osgGA::StateSetManipulator::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::StateSetManipulator::base_handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* us_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !us_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg us in osgGA::StateSetManipulator::base_handle function");
		}
		osgGA::GUIActionAdapter & us=*us_ptr;

		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::StateSetManipulator::base_handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->StateSetManipulator::handle(ea, us);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::StateSetManipulator::base_getUsage(osg::ApplicationUsage & usage) const
	static int _bind_base_getUsage(lua_State *L) {
		if (!_lg_typecheck_base_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::StateSetManipulator::base_getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgGA::StateSetManipulator::base_getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* usage_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgGA::StateSetManipulator::base_getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgGA::StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< osgGA::StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::StateSetManipulator::base_getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateSetManipulator::getUsage(usage);

		return 0;
	}


	// Operator binds:

};

osgGA::StateSetManipulator* LunaTraits< osgGA::StateSetManipulator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_StateSetManipulator::_bind_ctor(L);
}

void LunaTraits< osgGA::StateSetManipulator >::_bind_dtor(osgGA::StateSetManipulator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::StateSetManipulator >::className[] = "StateSetManipulator";
const char LunaTraits< osgGA::StateSetManipulator >::fullName[] = "osgGA::StateSetManipulator";
const char LunaTraits< osgGA::StateSetManipulator >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::StateSetManipulator >::parents[] = {"osgGA.GUIEventHandler", 0};
const int LunaTraits< osgGA::StateSetManipulator >::hash = 71865948;
const int LunaTraits< osgGA::StateSetManipulator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::StateSetManipulator >::methods[] = {
	{"className", &luna_wrapper_osgGA_StateSetManipulator::_bind_className},
	{"setStateSet", &luna_wrapper_osgGA_StateSetManipulator::_bind_setStateSet},
	{"getStateSet", &luna_wrapper_osgGA_StateSetManipulator::_bind_getStateSet},
	{"handle", &luna_wrapper_osgGA_StateSetManipulator::_bind_handle},
	{"getUsage", &luna_wrapper_osgGA_StateSetManipulator::_bind_getUsage},
	{"setMaximumNumOfTextureUnits", &luna_wrapper_osgGA_StateSetManipulator::_bind_setMaximumNumOfTextureUnits},
	{"getMaximumNumOfTextureUnits", &luna_wrapper_osgGA_StateSetManipulator::_bind_getMaximumNumOfTextureUnits},
	{"setBackfaceEnabled", &luna_wrapper_osgGA_StateSetManipulator::_bind_setBackfaceEnabled},
	{"getBackfaceEnabled", &luna_wrapper_osgGA_StateSetManipulator::_bind_getBackfaceEnabled},
	{"setLightingEnabled", &luna_wrapper_osgGA_StateSetManipulator::_bind_setLightingEnabled},
	{"getLightingEnabled", &luna_wrapper_osgGA_StateSetManipulator::_bind_getLightingEnabled},
	{"setTextureEnabled", &luna_wrapper_osgGA_StateSetManipulator::_bind_setTextureEnabled},
	{"getTextureEnabled", &luna_wrapper_osgGA_StateSetManipulator::_bind_getTextureEnabled},
	{"setPolygonMode", &luna_wrapper_osgGA_StateSetManipulator::_bind_setPolygonMode},
	{"getPolygonMode", &luna_wrapper_osgGA_StateSetManipulator::_bind_getPolygonMode},
	{"cyclePolygonMode", &luna_wrapper_osgGA_StateSetManipulator::_bind_cyclePolygonMode},
	{"setKeyEventToggleBackfaceCulling", &luna_wrapper_osgGA_StateSetManipulator::_bind_setKeyEventToggleBackfaceCulling},
	{"getKeyEventToggleBackfaceCulling", &luna_wrapper_osgGA_StateSetManipulator::_bind_getKeyEventToggleBackfaceCulling},
	{"setKeyEventToggleLighting", &luna_wrapper_osgGA_StateSetManipulator::_bind_setKeyEventToggleLighting},
	{"getKeyEventToggleLighting", &luna_wrapper_osgGA_StateSetManipulator::_bind_getKeyEventToggleLighting},
	{"setKeyEventToggleTexturing", &luna_wrapper_osgGA_StateSetManipulator::_bind_setKeyEventToggleTexturing},
	{"getKeyEventToggleTexturing", &luna_wrapper_osgGA_StateSetManipulator::_bind_getKeyEventToggleTexturing},
	{"setKeyEventCyclePolygonMode", &luna_wrapper_osgGA_StateSetManipulator::_bind_setKeyEventCyclePolygonMode},
	{"getKeyEventCyclePolygonMode", &luna_wrapper_osgGA_StateSetManipulator::_bind_getKeyEventCyclePolygonMode},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgGA_StateSetManipulator::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgGA_StateSetManipulator::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgGA_StateSetManipulator::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgGA_StateSetManipulator::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgGA_StateSetManipulator::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgGA_StateSetManipulator::_bind_base_releaseGLObjects},
	{"base_isSameKindAs", &luna_wrapper_osgGA_StateSetManipulator::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgGA_StateSetManipulator::_bind_base_libraryName},
	{"base_event", &luna_wrapper_osgGA_StateSetManipulator::_bind_base_event},
	{"base_className", &luna_wrapper_osgGA_StateSetManipulator::_bind_base_className},
	{"base_setStateSet", &luna_wrapper_osgGA_StateSetManipulator::_bind_base_setStateSet},
	{"base_getStateSet", &luna_wrapper_osgGA_StateSetManipulator::_bind_base_getStateSet},
	{"base_handle", &luna_wrapper_osgGA_StateSetManipulator::_bind_base_handle},
	{"base_getUsage", &luna_wrapper_osgGA_StateSetManipulator::_bind_base_getUsage},
	{"fromVoid", &luna_wrapper_osgGA_StateSetManipulator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgGA_StateSetManipulator::_bind_asVoid},
	{"getTable", &luna_wrapper_osgGA_StateSetManipulator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::StateSetManipulator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_StateSetManipulator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::StateSetManipulator >::enumValues[] = {
	{0,0}
};


