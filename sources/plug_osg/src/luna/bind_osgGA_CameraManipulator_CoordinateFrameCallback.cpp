#include <plug_common.h>

#include <luna/wrappers/wrapper_osgGA_CameraManipulator_CoordinateFrameCallback.h>

class luna_wrapper_osgGA_CameraManipulator_CoordinateFrameCallback {
public:
	typedef Luna< osgGA::CameraManipulator::CoordinateFrameCallback > luna_t;

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

		osgGA::CameraManipulator::CoordinateFrameCallback* self= (osgGA::CameraManipulator::CoordinateFrameCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgGA::CameraManipulator::CoordinateFrameCallback >::push(L,self,false);
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
		//osgGA::CameraManipulator::CoordinateFrameCallback* ptr= dynamic_cast< osgGA::CameraManipulator::CoordinateFrameCallback* >(Luna< osg::Referenced >::check(L,1));
		osgGA::CameraManipulator::CoordinateFrameCallback* ptr= luna_caster< osg::Referenced, osgGA::CameraManipulator::CoordinateFrameCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::CameraManipulator::CoordinateFrameCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getCoordinateFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::CameraManipulator::CoordinateFrameCallback::CoordinateFrameCallback(lua_Table * data)
	static osgGA::CameraManipulator::CoordinateFrameCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::CameraManipulator::CoordinateFrameCallback::CoordinateFrameCallback(lua_Table * data) function, expected prototype:\nosgGA::CameraManipulator::CoordinateFrameCallback::CoordinateFrameCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgGA_CameraManipulator_CoordinateFrameCallback(L,NULL);
	}


	// Function binds:
	// osg::Matrixd osgGA::CameraManipulator::CoordinateFrameCallback::getCoordinateFrame(const osg::Vec3d & position) const
	static int _bind_getCoordinateFrame(lua_State *L) {
		if (!_lg_typecheck_getCoordinateFrame(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::CameraManipulator::CoordinateFrameCallback::getCoordinateFrame(const osg::Vec3d & position) const function, expected prototype:\nosg::Matrixd osgGA::CameraManipulator::CoordinateFrameCallback::getCoordinateFrame(const osg::Vec3d & position) const\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* position_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osgGA::CameraManipulator::CoordinateFrameCallback::getCoordinateFrame function");
		}
		const osg::Vec3d & position=*position_ptr;

		osgGA::CameraManipulator::CoordinateFrameCallback* self=Luna< osg::Referenced >::checkSubType< osgGA::CameraManipulator::CoordinateFrameCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::CameraManipulator::CoordinateFrameCallback::getCoordinateFrame(const osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->getCoordinateFrame(position);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// void osgGA::CameraManipulator::CoordinateFrameCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::CameraManipulator::CoordinateFrameCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgGA::CameraManipulator::CoordinateFrameCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgGA::CameraManipulator::CoordinateFrameCallback* self=Luna< osg::Referenced >::checkSubType< osgGA::CameraManipulator::CoordinateFrameCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::CameraManipulator::CoordinateFrameCallback::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CoordinateFrameCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osgGA::CameraManipulator::CoordinateFrameCallback* LunaTraits< osgGA::CameraManipulator::CoordinateFrameCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_CameraManipulator_CoordinateFrameCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// osg::Matrixd osgGA::CameraManipulator::CoordinateFrameCallback::getCoordinateFrame(const osg::Vec3d & position) const
}

void LunaTraits< osgGA::CameraManipulator::CoordinateFrameCallback >::_bind_dtor(osgGA::CameraManipulator::CoordinateFrameCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::CameraManipulator::CoordinateFrameCallback >::className[] = "CameraManipulator_CoordinateFrameCallback";
const char LunaTraits< osgGA::CameraManipulator::CoordinateFrameCallback >::fullName[] = "osgGA::CameraManipulator::CoordinateFrameCallback";
const char LunaTraits< osgGA::CameraManipulator::CoordinateFrameCallback >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::CameraManipulator::CoordinateFrameCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgGA::CameraManipulator::CoordinateFrameCallback >::hash = 51007007;
const int LunaTraits< osgGA::CameraManipulator::CoordinateFrameCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::CameraManipulator::CoordinateFrameCallback >::methods[] = {
	{"getCoordinateFrame", &luna_wrapper_osgGA_CameraManipulator_CoordinateFrameCallback::_bind_getCoordinateFrame},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgGA_CameraManipulator_CoordinateFrameCallback::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osgGA_CameraManipulator_CoordinateFrameCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgGA_CameraManipulator_CoordinateFrameCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osgGA_CameraManipulator_CoordinateFrameCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::CameraManipulator::CoordinateFrameCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_CameraManipulator_CoordinateFrameCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::CameraManipulator::CoordinateFrameCallback >::enumValues[] = {
	{0,0}
};


