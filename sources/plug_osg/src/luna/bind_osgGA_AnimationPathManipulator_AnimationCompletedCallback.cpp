#include <plug_common.h>

#include <luna/wrappers/wrapper_osgGA_AnimationPathManipulator_AnimationCompletedCallback.h>

class luna_wrapper_osgGA_AnimationPathManipulator_AnimationCompletedCallback {
public:
	typedef Luna< osgGA::AnimationPathManipulator::AnimationCompletedCallback > luna_t;

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

		osgGA::AnimationPathManipulator::AnimationCompletedCallback* self= (osgGA::AnimationPathManipulator::AnimationCompletedCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::push(L,self,false);
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
		//osgGA::AnimationPathManipulator::AnimationCompletedCallback* ptr= dynamic_cast< osgGA::AnimationPathManipulator::AnimationCompletedCallback* >(Luna< osg::Referenced >::check(L,1));
		osgGA::AnimationPathManipulator::AnimationCompletedCallback* ptr= luna_caster< osg::Referenced, osgGA::AnimationPathManipulator::AnimationCompletedCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_completed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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
	// osgGA::AnimationPathManipulator::AnimationCompletedCallback::AnimationCompletedCallback(lua_Table * data)
	static osgGA::AnimationPathManipulator::AnimationCompletedCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::AnimationPathManipulator::AnimationCompletedCallback::AnimationCompletedCallback(lua_Table * data) function, expected prototype:\nosgGA::AnimationPathManipulator::AnimationCompletedCallback::AnimationCompletedCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgGA_AnimationPathManipulator_AnimationCompletedCallback(L,NULL);
	}


	// Function binds:
	// void osgGA::AnimationPathManipulator::AnimationCompletedCallback::completed(const osgGA::AnimationPathManipulator * apm)
	static int _bind_completed(lua_State *L) {
		if (!_lg_typecheck_completed(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::AnimationCompletedCallback::completed(const osgGA::AnimationPathManipulator * apm) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::AnimationCompletedCallback::completed(const osgGA::AnimationPathManipulator * apm)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::AnimationPathManipulator* apm=(Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator >(L,2));

		osgGA::AnimationPathManipulator::AnimationCompletedCallback* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator::AnimationCompletedCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::AnimationCompletedCallback::completed(const osgGA::AnimationPathManipulator *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->completed(apm);

		return 0;
	}

	// void osgGA::AnimationPathManipulator::AnimationCompletedCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::AnimationCompletedCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::AnimationCompletedCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgGA::AnimationPathManipulator::AnimationCompletedCallback* self=Luna< osg::Referenced >::checkSubType< osgGA::AnimationPathManipulator::AnimationCompletedCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::AnimationCompletedCallback::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimationCompletedCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osgGA::AnimationPathManipulator::AnimationCompletedCallback* LunaTraits< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_AnimationPathManipulator_AnimationCompletedCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osgGA::AnimationPathManipulator::AnimationCompletedCallback::completed(const osgGA::AnimationPathManipulator * apm)
}

void LunaTraits< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::_bind_dtor(osgGA::AnimationPathManipulator::AnimationCompletedCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::className[] = "AnimationPathManipulator_AnimationCompletedCallback";
const char LunaTraits< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::fullName[] = "osgGA::AnimationPathManipulator::AnimationCompletedCallback";
const char LunaTraits< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::hash = 63965896;
const int LunaTraits< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::methods[] = {
	{"completed", &luna_wrapper_osgGA_AnimationPathManipulator_AnimationCompletedCallback::_bind_completed},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgGA_AnimationPathManipulator_AnimationCompletedCallback::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osgGA_AnimationPathManipulator_AnimationCompletedCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgGA_AnimationPathManipulator_AnimationCompletedCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osgGA_AnimationPathManipulator_AnimationCompletedCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_AnimationPathManipulator_AnimationCompletedCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::enumValues[] = {
	{0,0}
};


