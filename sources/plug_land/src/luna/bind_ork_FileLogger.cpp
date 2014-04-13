#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_FileLogger.h>

class luna_wrapper_ork_FileLogger {
public:
	typedef Luna< ork::FileLogger > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Object,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		ork::FileLogger* self= (ork::FileLogger*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::FileLogger >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//ork::FileLogger* ptr= dynamic_cast< ork::FileLogger* >(Luna< ork::Object >::check(L,1));
		ork::FileLogger* ptr= luna_caster< ork::Object, ork::FileLogger >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::FileLogger >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,23966078)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< ork::FileLogger::File >::check(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Logger >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,23966078)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< ork::FileLogger::File >::check(L,3)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Logger >(L,4) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_log(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_log(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::FileLogger::FileLogger(const std::string & type, ork::FileLogger::File * out, ork::ptr< ork::Logger > next = NULL)
	static ork::FileLogger* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::FileLogger::FileLogger(const std::string & type, ork::FileLogger::File * out, ork::ptr< ork::Logger > next = NULL) function, expected prototype:\nork::FileLogger::FileLogger(const std::string & type, ork::FileLogger::File * out, ork::ptr< ork::Logger > next = NULL)\nClass arguments details:\narg 2 ID = 23966078\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string type(lua_tostring(L,1),lua_objlen(L,1));
		ork::FileLogger::File* out=(Luna< ork::FileLogger::File >::check(L,2));
		ork::ptr< ork::Logger > next = Luna< ork::Object >::checkSubType< ork::Logger >(L,3);

		return new ork::FileLogger(type, out, next);
	}

	// ork::FileLogger::FileLogger(lua_Table * data, const std::string & type, ork::FileLogger::File * out, ork::ptr< ork::Logger > next = NULL)
	static ork::FileLogger* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::FileLogger::FileLogger(lua_Table * data, const std::string & type, ork::FileLogger::File * out, ork::ptr< ork::Logger > next = NULL) function, expected prototype:\nork::FileLogger::FileLogger(lua_Table * data, const std::string & type, ork::FileLogger::File * out, ork::ptr< ork::Logger > next = NULL)\nClass arguments details:\narg 3 ID = 23966078\narg 4 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string type(lua_tostring(L,2),lua_objlen(L,2));
		ork::FileLogger::File* out=(Luna< ork::FileLogger::File >::check(L,3));
		ork::ptr< ork::Logger > next = Luna< ork::Object >::checkSubType< ork::Logger >(L,4);

		return new wrapper_ork_FileLogger(L,NULL, type, out, next);
	}

	// Overload binder for ork::FileLogger::FileLogger
	static ork::FileLogger* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function FileLogger, cannot match any of the overloads for function FileLogger:\n  FileLogger(const std::string &, ork::FileLogger::File *, ork::ptr< ork::Logger >)\n  FileLogger(lua_Table *, const std::string &, ork::FileLogger::File *, ork::ptr< ork::Logger >)\n");
		return NULL;
	}


	// Function binds:
	// void ork::FileLogger::log(const std::string & topic, const std::string & msg)
	static int _bind_log(lua_State *L) {
		if (!_lg_typecheck_log(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FileLogger::log(const std::string & topic, const std::string & msg) function, expected prototype:\nvoid ork::FileLogger::log(const std::string & topic, const std::string & msg)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string topic(lua_tostring(L,2),lua_objlen(L,2));
		std::string msg(lua_tostring(L,3),lua_objlen(L,3));

		ork::FileLogger* self=Luna< ork::Object >::checkSubType< ork::FileLogger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FileLogger::log(const std::string &, const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->log(topic, msg);

		return 0;
	}

	// void ork::FileLogger::flush()
	static int _bind_flush(lua_State *L) {
		if (!_lg_typecheck_flush(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FileLogger::flush() function, expected prototype:\nvoid ork::FileLogger::flush()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FileLogger* self=Luna< ork::Object >::checkSubType< ork::FileLogger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FileLogger::flush(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->flush();

		return 0;
	}

	// const char * ork::FileLogger::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::FileLogger::base_toString() function, expected prototype:\nconst char * ork::FileLogger::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FileLogger* self=Luna< ork::Object >::checkSubType< ork::FileLogger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::FileLogger::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->FileLogger::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void ork::FileLogger::base_log(const std::string & topic, const std::string & msg)
	static int _bind_base_log(lua_State *L) {
		if (!_lg_typecheck_base_log(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FileLogger::base_log(const std::string & topic, const std::string & msg) function, expected prototype:\nvoid ork::FileLogger::base_log(const std::string & topic, const std::string & msg)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string topic(lua_tostring(L,2),lua_objlen(L,2));
		std::string msg(lua_tostring(L,3),lua_objlen(L,3));

		ork::FileLogger* self=Luna< ork::Object >::checkSubType< ork::FileLogger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FileLogger::base_log(const std::string &, const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FileLogger::log(topic, msg);

		return 0;
	}

	// void ork::FileLogger::base_flush()
	static int _bind_base_flush(lua_State *L) {
		if (!_lg_typecheck_base_flush(L)) {
			luaL_error(L, "luna typecheck failed in void ork::FileLogger::base_flush() function, expected prototype:\nvoid ork::FileLogger::base_flush()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::FileLogger* self=Luna< ork::Object >::checkSubType< ork::FileLogger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::FileLogger::base_flush(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FileLogger::flush();

		return 0;
	}


	// Operator binds:

};

ork::FileLogger* LunaTraits< ork::FileLogger >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_FileLogger::_bind_ctor(L);
}

void LunaTraits< ork::FileLogger >::_bind_dtor(ork::FileLogger* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::FileLogger >::className[] = "FileLogger";
const char LunaTraits< ork::FileLogger >::fullName[] = "ork::FileLogger";
const char LunaTraits< ork::FileLogger >::moduleName[] = "ork";
const char* LunaTraits< ork::FileLogger >::parents[] = {"ork.Logger", 0};
const int LunaTraits< ork::FileLogger >::hash = 84544135;
const int LunaTraits< ork::FileLogger >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::FileLogger >::methods[] = {
	{"log", &luna_wrapper_ork_FileLogger::_bind_log},
	{"flush", &luna_wrapper_ork_FileLogger::_bind_flush},
	{"base_toString", &luna_wrapper_ork_FileLogger::_bind_base_toString},
	{"base_log", &luna_wrapper_ork_FileLogger::_bind_base_log},
	{"base_flush", &luna_wrapper_ork_FileLogger::_bind_base_flush},
	{"fromVoid", &luna_wrapper_ork_FileLogger::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_FileLogger::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_FileLogger::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::FileLogger >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_FileLogger::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::FileLogger >::enumValues[] = {
	{0,0}
};


