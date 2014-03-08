#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_GraphicsContext_WindowingSystemInterface.h>

class luna_wrapper_osg_GraphicsContext_WindowingSystemInterface {
public:
	typedef Luna< osg::GraphicsContext::WindowingSystemInterface > luna_t;

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

		osg::GraphicsContext::WindowingSystemInterface* self= (osg::GraphicsContext::WindowingSystemInterface*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::GraphicsContext::WindowingSystemInterface >::push(L,self,false);
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
		//osg::GraphicsContext::WindowingSystemInterface* ptr= dynamic_cast< osg::GraphicsContext::WindowingSystemInterface* >(Luna< osg::Referenced >::check(L,1));
		osg::GraphicsContext::WindowingSystemInterface* ptr= luna_caster< osg::Referenced, osg::GraphicsContext::WindowingSystemInterface >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GraphicsContext::WindowingSystemInterface >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_createGraphicsContext(lua_State *L) {
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
	// osg::GraphicsContext::WindowingSystemInterface::WindowingSystemInterface(lua_Table * data)
	static osg::GraphicsContext::WindowingSystemInterface* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext::WindowingSystemInterface::WindowingSystemInterface(lua_Table * data) function, expected prototype:\nosg::GraphicsContext::WindowingSystemInterface::WindowingSystemInterface(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_GraphicsContext_WindowingSystemInterface(L,NULL);
	}


	// Function binds:
	// osg::GraphicsContext * osg::GraphicsContext::WindowingSystemInterface::createGraphicsContext(osg::GraphicsContext::Traits * traits)
	static int _bind_createGraphicsContext(lua_State *L) {
		if (!_lg_typecheck_createGraphicsContext(L)) {
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext * osg::GraphicsContext::WindowingSystemInterface::createGraphicsContext(osg::GraphicsContext::Traits * traits) function, expected prototype:\nosg::GraphicsContext * osg::GraphicsContext::WindowingSystemInterface::createGraphicsContext(osg::GraphicsContext::Traits * traits)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GraphicsContext::Traits* traits=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,2));

		osg::GraphicsContext::WindowingSystemInterface* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::WindowingSystemInterface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::GraphicsContext * osg::GraphicsContext::WindowingSystemInterface::createGraphicsContext(osg::GraphicsContext::Traits *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::GraphicsContext * lret = self->createGraphicsContext(traits);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GraphicsContext >::push(L,lret,false);

		return 1;
	}

	// void osg::GraphicsContext::WindowingSystemInterface::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::WindowingSystemInterface::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::GraphicsContext::WindowingSystemInterface::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::GraphicsContext::WindowingSystemInterface* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::WindowingSystemInterface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::WindowingSystemInterface::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WindowingSystemInterface::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::GraphicsContext::WindowingSystemInterface* LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_GraphicsContext_WindowingSystemInterface::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// unsigned int osg::GraphicsContext::WindowingSystemInterface::getNumScreens(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier = osg::GraphicsContext::ScreenIdentifier ())
	// void osg::GraphicsContext::WindowingSystemInterface::getScreenSettings(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier, osg::GraphicsContext::ScreenSettings & resolution)
	// void osg::GraphicsContext::WindowingSystemInterface::enumerateScreenSettings(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier, osg::GraphicsContext::ScreenSettingsList & resolutionList)
	// osg::GraphicsContext * osg::GraphicsContext::WindowingSystemInterface::createGraphicsContext(osg::GraphicsContext::Traits * traits)
}

void LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::_bind_dtor(osg::GraphicsContext::WindowingSystemInterface* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::className[] = "GraphicsContext_WindowingSystemInterface";
const char LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::fullName[] = "osg::GraphicsContext::WindowingSystemInterface";
const char LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::hash = 67801403;
const int LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::methods[] = {
	{"createGraphicsContext", &luna_wrapper_osg_GraphicsContext_WindowingSystemInterface::_bind_createGraphicsContext},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_GraphicsContext_WindowingSystemInterface::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_GraphicsContext_WindowingSystemInterface::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_GraphicsContext_WindowingSystemInterface::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_GraphicsContext_WindowingSystemInterface::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_GraphicsContext_WindowingSystemInterface::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GraphicsContext::WindowingSystemInterface >::enumValues[] = {
	{0,0}
};


