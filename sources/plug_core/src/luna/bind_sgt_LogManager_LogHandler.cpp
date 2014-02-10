#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_LogManager_LogHandler.h>

class luna_wrapper_sgt_LogManager_LogHandler {
public:
	typedef Luna< sgt::LogManager::LogHandler > luna_t;

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

		sgt::LogManager::LogHandler* self= (sgt::LogManager::LogHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::LogManager::LogHandler >::push(L,self,false);
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
		//sgt::LogManager::LogHandler* ptr= dynamic_cast< sgt::LogManager::LogHandler* >(Luna< osg::Referenced >::check(L,1));
		sgt::LogManager::LogHandler* ptr= luna_caster< osg::Referenced, sgt::LogManager::LogHandler >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::LogManager::LogHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_handle(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
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
	// sgt::LogManager::LogHandler::LogHandler(lua_Table * data)
	static sgt::LogManager::LogHandler* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in sgt::LogManager::LogHandler::LogHandler(lua_Table * data) function, expected prototype:\nsgt::LogManager::LogHandler::LogHandler(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_sgt_LogManager_LogHandler(L,NULL);
	}


	// Function binds:
	// void sgt::LogManager::LogHandler::handle(int level, std::string trace, std::string msg)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::LogManager::LogHandler::handle(int level, std::string trace, std::string msg) function, expected prototype:\nvoid sgt::LogManager::LogHandler::handle(int level, std::string trace, std::string msg)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		std::string trace(lua_tostring(L,3),lua_objlen(L,3));
		std::string msg(lua_tostring(L,4),lua_objlen(L,4));

		sgt::LogManager::LogHandler* self=Luna< osg::Referenced >::checkSubType< sgt::LogManager::LogHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::LogManager::LogHandler::handle(int, std::string, std::string). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->handle(level, trace, msg);

		return 0;
	}

	// void sgt::LogManager::LogHandler::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::LogManager::LogHandler::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid sgt::LogManager::LogHandler::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		sgt::LogManager::LogHandler* self=Luna< osg::Referenced >::checkSubType< sgt::LogManager::LogHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::LogManager::LogHandler::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LogHandler::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

sgt::LogManager::LogHandler* LunaTraits< sgt::LogManager::LogHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_LogManager_LogHandler::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void sgt::LogManager::LogHandler::handle(int level, std::string trace, std::string msg)
}

void LunaTraits< sgt::LogManager::LogHandler >::_bind_dtor(sgt::LogManager::LogHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::LogManager::LogHandler >::className[] = "LogManager_LogHandler";
const char LunaTraits< sgt::LogManager::LogHandler >::fullName[] = "sgt::LogManager::LogHandler";
const char LunaTraits< sgt::LogManager::LogHandler >::moduleName[] = "sgt";
const char* LunaTraits< sgt::LogManager::LogHandler >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< sgt::LogManager::LogHandler >::hash = 84005267;
const int LunaTraits< sgt::LogManager::LogHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::LogManager::LogHandler >::methods[] = {
	{"handle", &luna_wrapper_sgt_LogManager_LogHandler::_bind_handle},
	{"base_setThreadSafeRefUnref", &luna_wrapper_sgt_LogManager_LogHandler::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_sgt_LogManager_LogHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_LogManager_LogHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_sgt_LogManager_LogHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::LogManager::LogHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_sgt_LogManager_LogHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::LogManager::LogHandler >::enumValues[] = {
	{0,0}
};


