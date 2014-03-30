#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_StandardNotifyHandler.h>

class luna_wrapper_osg_StandardNotifyHandler {
public:
	typedef Luna< osg::StandardNotifyHandler > luna_t;

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

		osg::StandardNotifyHandler* self= (osg::StandardNotifyHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::StandardNotifyHandler >::push(L,self,false);
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
		//osg::StandardNotifyHandler* ptr= dynamic_cast< osg::StandardNotifyHandler* >(Luna< osg::Referenced >::check(L,1));
		osg::StandardNotifyHandler* ptr= luna_caster< osg::Referenced, osg::StandardNotifyHandler >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::StandardNotifyHandler >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_notify(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_notify(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::StandardNotifyHandler::StandardNotifyHandler()
	static osg::StandardNotifyHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StandardNotifyHandler::StandardNotifyHandler() function, expected prototype:\nosg::StandardNotifyHandler::StandardNotifyHandler()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::StandardNotifyHandler();
	}

	// osg::StandardNotifyHandler::StandardNotifyHandler(lua_Table * data)
	static osg::StandardNotifyHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::StandardNotifyHandler::StandardNotifyHandler(lua_Table * data) function, expected prototype:\nosg::StandardNotifyHandler::StandardNotifyHandler(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_StandardNotifyHandler(L,NULL);
	}

	// Overload binder for osg::StandardNotifyHandler::StandardNotifyHandler
	static osg::StandardNotifyHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function StandardNotifyHandler, cannot match any of the overloads for function StandardNotifyHandler:\n  StandardNotifyHandler()\n  StandardNotifyHandler(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::StandardNotifyHandler::notify(osg::NotifySeverity severity, const char * message)
	static int _bind_notify(lua_State *L) {
		if (!_lg_typecheck_notify(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StandardNotifyHandler::notify(osg::NotifySeverity severity, const char * message) function, expected prototype:\nvoid osg::StandardNotifyHandler::notify(osg::NotifySeverity severity, const char * message)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NotifySeverity severity=(osg::NotifySeverity)lua_tointeger(L,2);
		const char * message=(const char *)lua_tostring(L,3);

		osg::StandardNotifyHandler* self=Luna< osg::Referenced >::checkSubType< osg::StandardNotifyHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StandardNotifyHandler::notify(osg::NotifySeverity, const char *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->notify(severity, message);

		return 0;
	}

	// void osg::StandardNotifyHandler::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StandardNotifyHandler::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::StandardNotifyHandler::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::StandardNotifyHandler* self=Luna< osg::Referenced >::checkSubType< osg::StandardNotifyHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StandardNotifyHandler::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StandardNotifyHandler::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::StandardNotifyHandler::base_notify(osg::NotifySeverity severity, const char * message)
	static int _bind_base_notify(lua_State *L) {
		if (!_lg_typecheck_base_notify(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StandardNotifyHandler::base_notify(osg::NotifySeverity severity, const char * message) function, expected prototype:\nvoid osg::StandardNotifyHandler::base_notify(osg::NotifySeverity severity, const char * message)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NotifySeverity severity=(osg::NotifySeverity)lua_tointeger(L,2);
		const char * message=(const char *)lua_tostring(L,3);

		osg::StandardNotifyHandler* self=Luna< osg::Referenced >::checkSubType< osg::StandardNotifyHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StandardNotifyHandler::base_notify(osg::NotifySeverity, const char *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StandardNotifyHandler::notify(severity, message);

		return 0;
	}


	// Operator binds:

};

osg::StandardNotifyHandler* LunaTraits< osg::StandardNotifyHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_StandardNotifyHandler::_bind_ctor(L);
}

void LunaTraits< osg::StandardNotifyHandler >::_bind_dtor(osg::StandardNotifyHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::StandardNotifyHandler >::className[] = "StandardNotifyHandler";
const char LunaTraits< osg::StandardNotifyHandler >::fullName[] = "osg::StandardNotifyHandler";
const char LunaTraits< osg::StandardNotifyHandler >::moduleName[] = "osg";
const char* LunaTraits< osg::StandardNotifyHandler >::parents[] = {"osg.NotifyHandler", 0};
const int LunaTraits< osg::StandardNotifyHandler >::hash = 14159557;
const int LunaTraits< osg::StandardNotifyHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::StandardNotifyHandler >::methods[] = {
	{"notify", &luna_wrapper_osg_StandardNotifyHandler::_bind_notify},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_StandardNotifyHandler::_bind_base_setThreadSafeRefUnref},
	{"base_notify", &luna_wrapper_osg_StandardNotifyHandler::_bind_base_notify},
	{"fromVoid", &luna_wrapper_osg_StandardNotifyHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_StandardNotifyHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_StandardNotifyHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::StandardNotifyHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_StandardNotifyHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::StandardNotifyHandler >::enumValues[] = {
	{0,0}
};


