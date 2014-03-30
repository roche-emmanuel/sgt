#include <plug_common.h>

#include <luna/wrappers/wrapper_osgViewer_ScreenCaptureHandler_CaptureOperation.h>

class luna_wrapper_osgViewer_ScreenCaptureHandler_CaptureOperation {
public:
	typedef Luna< osgViewer::ScreenCaptureHandler::CaptureOperation > luna_t;

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

		osgViewer::ScreenCaptureHandler::CaptureOperation* self= (osgViewer::ScreenCaptureHandler::CaptureOperation*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgViewer::ScreenCaptureHandler::CaptureOperation >::push(L,self,false);
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
		//osgViewer::ScreenCaptureHandler::CaptureOperation* ptr= dynamic_cast< osgViewer::ScreenCaptureHandler::CaptureOperation* >(Luna< osg::Referenced >::check(L,1));
		osgViewer::ScreenCaptureHandler::CaptureOperation* ptr= luna_caster< osg::Referenced, osgViewer::ScreenCaptureHandler::CaptureOperation >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::ScreenCaptureHandler::CaptureOperation >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Constructor binds:
	// osgViewer::ScreenCaptureHandler::CaptureOperation::CaptureOperation(lua_Table * data)
	static osgViewer::ScreenCaptureHandler::CaptureOperation* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::ScreenCaptureHandler::CaptureOperation::CaptureOperation(lua_Table * data) function, expected prototype:\nosgViewer::ScreenCaptureHandler::CaptureOperation::CaptureOperation(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgViewer_ScreenCaptureHandler_CaptureOperation(L,NULL);
	}


	// Function binds:
	// void osgViewer::ScreenCaptureHandler::CaptureOperation::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::CaptureOperation::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::CaptureOperation::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgViewer::ScreenCaptureHandler::CaptureOperation* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler::CaptureOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::CaptureOperation::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CaptureOperation::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:
	// void osgViewer::ScreenCaptureHandler::CaptureOperation::operator()(const osg::Image & image, const unsigned int context_id)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::CaptureOperation::operator()(const osg::Image & image, const unsigned int context_id) function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::CaptureOperation::operator()(const osg::Image & image, const unsigned int context_id)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Image* image_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !image_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg image in osgViewer::ScreenCaptureHandler::CaptureOperation::operator() function");
		}
		const osg::Image & image=*image_ptr;
		const unsigned int context_id=(const unsigned int)lua_tointeger(L,3);

		osgViewer::ScreenCaptureHandler::CaptureOperation* self=Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler::CaptureOperation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::CaptureOperation::operator()(const osg::Image &, const unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator()(image, context_id);

		return 0;
	}


};

osgViewer::ScreenCaptureHandler::CaptureOperation* LunaTraits< osgViewer::ScreenCaptureHandler::CaptureOperation >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_ScreenCaptureHandler_CaptureOperation::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osgViewer::ScreenCaptureHandler::CaptureOperation::operator()(const osg::Image & image, const unsigned int context_id)
}

void LunaTraits< osgViewer::ScreenCaptureHandler::CaptureOperation >::_bind_dtor(osgViewer::ScreenCaptureHandler::CaptureOperation* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::ScreenCaptureHandler::CaptureOperation >::className[] = "ScreenCaptureHandler_CaptureOperation";
const char LunaTraits< osgViewer::ScreenCaptureHandler::CaptureOperation >::fullName[] = "osgViewer::ScreenCaptureHandler::CaptureOperation";
const char LunaTraits< osgViewer::ScreenCaptureHandler::CaptureOperation >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::ScreenCaptureHandler::CaptureOperation >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgViewer::ScreenCaptureHandler::CaptureOperation >::hash = 72677450;
const int LunaTraits< osgViewer::ScreenCaptureHandler::CaptureOperation >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::ScreenCaptureHandler::CaptureOperation >::methods[] = {
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgViewer_ScreenCaptureHandler_CaptureOperation::_bind_base_setThreadSafeRefUnref},
	{"op_call", &luna_wrapper_osgViewer_ScreenCaptureHandler_CaptureOperation::_bind_op_call},
	{"fromVoid", &luna_wrapper_osgViewer_ScreenCaptureHandler_CaptureOperation::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgViewer_ScreenCaptureHandler_CaptureOperation::_bind_asVoid},
	{"getTable", &luna_wrapper_osgViewer_ScreenCaptureHandler_CaptureOperation::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::ScreenCaptureHandler::CaptureOperation >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_ScreenCaptureHandler_CaptureOperation::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::ScreenCaptureHandler::CaptureOperation >::enumValues[] = {
	{0,0}
};


