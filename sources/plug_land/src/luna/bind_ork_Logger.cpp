#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_Logger.h>

class luna_wrapper_ork_Logger {
public:
	typedef Luna< ork::Logger > luna_t;

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

		ork::Logger* self= (ork::Logger*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::Logger >::push(L,self,false);
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
		//ork::Logger* ptr= dynamic_cast< ork::Logger* >(Luna< ork::Object >::check(L,1));
		ork::Logger* ptr= luna_caster< ork::Object, ork::Logger >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::Logger >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_addTopic(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_hasTopic(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

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

	inline static bool _lg_typecheck_get_DEBUG_LOGGER(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_INFO_LOGGER(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_WARNING_LOGGER(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_ERROR_LOGGER(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_DEBUG_LOGGER(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30439254) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_INFO_LOGGER(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30439254) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_WARNING_LOGGER(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30439254) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_ERROR_LOGGER(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30439254) ) return false;
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
	// ork::Logger::Logger(const std::string & type)
	static ork::Logger* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::Logger::Logger(const std::string & type) function, expected prototype:\nork::Logger::Logger(const std::string & type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string type(lua_tostring(L,1),lua_objlen(L,1));

		return new ork::Logger(type);
	}

	// ork::Logger::Logger(lua_Table * data, const std::string & type)
	static ork::Logger* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Logger::Logger(lua_Table * data, const std::string & type) function, expected prototype:\nork::Logger::Logger(lua_Table * data, const std::string & type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string type(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_ork_Logger(L,NULL, type);
	}

	// Overload binder for ork::Logger::Logger
	static ork::Logger* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Logger, cannot match any of the overloads for function Logger:\n  Logger(const std::string &)\n  Logger(lua_Table *, const std::string &)\n");
		return NULL;
	}


	// Function binds:
	// void ork::Logger::addTopic(const std::string & topic)
	static int _bind_addTopic(lua_State *L) {
		if (!_lg_typecheck_addTopic(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Logger::addTopic(const std::string & topic) function, expected prototype:\nvoid ork::Logger::addTopic(const std::string & topic)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string topic(lua_tostring(L,2),lua_objlen(L,2));

		ork::Logger* self=Luna< ork::Object >::checkSubType< ork::Logger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Logger::addTopic(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addTopic(topic);

		return 0;
	}

	// bool ork::Logger::hasTopic(const std::string & topic)
	static int _bind_hasTopic(lua_State *L) {
		if (!_lg_typecheck_hasTopic(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::Logger::hasTopic(const std::string & topic) function, expected prototype:\nbool ork::Logger::hasTopic(const std::string & topic)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string topic(lua_tostring(L,2),lua_objlen(L,2));

		ork::Logger* self=Luna< ork::Object >::checkSubType< ork::Logger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::Logger::hasTopic(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->hasTopic(topic);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void ork::Logger::log(const std::string & topic, const std::string & msg)
	static int _bind_log(lua_State *L) {
		if (!_lg_typecheck_log(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Logger::log(const std::string & topic, const std::string & msg) function, expected prototype:\nvoid ork::Logger::log(const std::string & topic, const std::string & msg)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string topic(lua_tostring(L,2),lua_objlen(L,2));
		std::string msg(lua_tostring(L,3),lua_objlen(L,3));

		ork::Logger* self=Luna< ork::Object >::checkSubType< ork::Logger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Logger::log(const std::string &, const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->log(topic, msg);

		return 0;
	}

	// void ork::Logger::flush()
	static int _bind_flush(lua_State *L) {
		if (!_lg_typecheck_flush(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Logger::flush() function, expected prototype:\nvoid ork::Logger::flush()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Logger* self=Luna< ork::Object >::checkSubType< ork::Logger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Logger::flush(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->flush();

		return 0;
	}

	// ork::static_ptr< ork::Logger > ork::Logger::DEBUG_LOGGER()
	static int _bind_get_DEBUG_LOGGER(lua_State *L) {
		if (!_lg_typecheck_get_DEBUG_LOGGER(L)) {
			luaL_error(L, "luna typecheck failed in ork::static_ptr< ork::Logger > ork::Logger::DEBUG_LOGGER() function, expected prototype:\nork::static_ptr< ork::Logger > ork::Logger::DEBUG_LOGGER()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Logger* self=Luna< ork::Object >::checkSubType< ork::Logger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::static_ptr< ork::Logger > ork::Logger::DEBUG_LOGGER(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::static_ptr< ork::Logger >* lret = &self->DEBUG_LOGGER;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::static_ptr< ork::Logger > >::push(L,lret,false);

		return 1;
	}

	// ork::static_ptr< ork::Logger > ork::Logger::INFO_LOGGER()
	static int _bind_get_INFO_LOGGER(lua_State *L) {
		if (!_lg_typecheck_get_INFO_LOGGER(L)) {
			luaL_error(L, "luna typecheck failed in ork::static_ptr< ork::Logger > ork::Logger::INFO_LOGGER() function, expected prototype:\nork::static_ptr< ork::Logger > ork::Logger::INFO_LOGGER()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Logger* self=Luna< ork::Object >::checkSubType< ork::Logger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::static_ptr< ork::Logger > ork::Logger::INFO_LOGGER(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::static_ptr< ork::Logger >* lret = &self->INFO_LOGGER;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::static_ptr< ork::Logger > >::push(L,lret,false);

		return 1;
	}

	// ork::static_ptr< ork::Logger > ork::Logger::WARNING_LOGGER()
	static int _bind_get_WARNING_LOGGER(lua_State *L) {
		if (!_lg_typecheck_get_WARNING_LOGGER(L)) {
			luaL_error(L, "luna typecheck failed in ork::static_ptr< ork::Logger > ork::Logger::WARNING_LOGGER() function, expected prototype:\nork::static_ptr< ork::Logger > ork::Logger::WARNING_LOGGER()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Logger* self=Luna< ork::Object >::checkSubType< ork::Logger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::static_ptr< ork::Logger > ork::Logger::WARNING_LOGGER(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::static_ptr< ork::Logger >* lret = &self->WARNING_LOGGER;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::static_ptr< ork::Logger > >::push(L,lret,false);

		return 1;
	}

	// ork::static_ptr< ork::Logger > ork::Logger::ERROR_LOGGER()
	static int _bind_get_ERROR_LOGGER(lua_State *L) {
		if (!_lg_typecheck_get_ERROR_LOGGER(L)) {
			luaL_error(L, "luna typecheck failed in ork::static_ptr< ork::Logger > ork::Logger::ERROR_LOGGER() function, expected prototype:\nork::static_ptr< ork::Logger > ork::Logger::ERROR_LOGGER()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Logger* self=Luna< ork::Object >::checkSubType< ork::Logger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::static_ptr< ork::Logger > ork::Logger::ERROR_LOGGER(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::static_ptr< ork::Logger >* lret = &self->ERROR_LOGGER;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::static_ptr< ork::Logger > >::push(L,lret,false);

		return 1;
	}

	// void ork::Logger::DEBUG_LOGGER(ork::static_ptr< ork::Logger > value)
	static int _bind_set_DEBUG_LOGGER(lua_State *L) {
		if (!_lg_typecheck_set_DEBUG_LOGGER(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Logger::DEBUG_LOGGER(ork::static_ptr< ork::Logger > value) function, expected prototype:\nvoid ork::Logger::DEBUG_LOGGER(ork::static_ptr< ork::Logger > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::static_ptr< ork::Logger >* value_ptr=(Luna< ork::static_ptr< ork::Logger > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in ork::Logger::DEBUG_LOGGER function");
		}
		ork::static_ptr< ork::Logger > value=*value_ptr;

		ork::Logger* self=Luna< ork::Object >::checkSubType< ork::Logger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Logger::DEBUG_LOGGER(ork::static_ptr< ork::Logger >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DEBUG_LOGGER = value;

		return 0;
	}

	// void ork::Logger::INFO_LOGGER(ork::static_ptr< ork::Logger > value)
	static int _bind_set_INFO_LOGGER(lua_State *L) {
		if (!_lg_typecheck_set_INFO_LOGGER(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Logger::INFO_LOGGER(ork::static_ptr< ork::Logger > value) function, expected prototype:\nvoid ork::Logger::INFO_LOGGER(ork::static_ptr< ork::Logger > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::static_ptr< ork::Logger >* value_ptr=(Luna< ork::static_ptr< ork::Logger > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in ork::Logger::INFO_LOGGER function");
		}
		ork::static_ptr< ork::Logger > value=*value_ptr;

		ork::Logger* self=Luna< ork::Object >::checkSubType< ork::Logger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Logger::INFO_LOGGER(ork::static_ptr< ork::Logger >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->INFO_LOGGER = value;

		return 0;
	}

	// void ork::Logger::WARNING_LOGGER(ork::static_ptr< ork::Logger > value)
	static int _bind_set_WARNING_LOGGER(lua_State *L) {
		if (!_lg_typecheck_set_WARNING_LOGGER(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Logger::WARNING_LOGGER(ork::static_ptr< ork::Logger > value) function, expected prototype:\nvoid ork::Logger::WARNING_LOGGER(ork::static_ptr< ork::Logger > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::static_ptr< ork::Logger >* value_ptr=(Luna< ork::static_ptr< ork::Logger > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in ork::Logger::WARNING_LOGGER function");
		}
		ork::static_ptr< ork::Logger > value=*value_ptr;

		ork::Logger* self=Luna< ork::Object >::checkSubType< ork::Logger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Logger::WARNING_LOGGER(ork::static_ptr< ork::Logger >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WARNING_LOGGER = value;

		return 0;
	}

	// void ork::Logger::ERROR_LOGGER(ork::static_ptr< ork::Logger > value)
	static int _bind_set_ERROR_LOGGER(lua_State *L) {
		if (!_lg_typecheck_set_ERROR_LOGGER(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Logger::ERROR_LOGGER(ork::static_ptr< ork::Logger > value) function, expected prototype:\nvoid ork::Logger::ERROR_LOGGER(ork::static_ptr< ork::Logger > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::static_ptr< ork::Logger >* value_ptr=(Luna< ork::static_ptr< ork::Logger > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in ork::Logger::ERROR_LOGGER function");
		}
		ork::static_ptr< ork::Logger > value=*value_ptr;

		ork::Logger* self=Luna< ork::Object >::checkSubType< ork::Logger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Logger::ERROR_LOGGER(ork::static_ptr< ork::Logger >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ERROR_LOGGER = value;

		return 0;
	}

	// const char * ork::Logger::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::Logger::base_toString() function, expected prototype:\nconst char * ork::Logger::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Logger* self=Luna< ork::Object >::checkSubType< ork::Logger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::Logger::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Logger::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void ork::Logger::base_log(const std::string & topic, const std::string & msg)
	static int _bind_base_log(lua_State *L) {
		if (!_lg_typecheck_base_log(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Logger::base_log(const std::string & topic, const std::string & msg) function, expected prototype:\nvoid ork::Logger::base_log(const std::string & topic, const std::string & msg)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string topic(lua_tostring(L,2),lua_objlen(L,2));
		std::string msg(lua_tostring(L,3),lua_objlen(L,3));

		ork::Logger* self=Luna< ork::Object >::checkSubType< ork::Logger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Logger::base_log(const std::string &, const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Logger::log(topic, msg);

		return 0;
	}

	// void ork::Logger::base_flush()
	static int _bind_base_flush(lua_State *L) {
		if (!_lg_typecheck_base_flush(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Logger::base_flush() function, expected prototype:\nvoid ork::Logger::base_flush()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Logger* self=Luna< ork::Object >::checkSubType< ork::Logger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Logger::base_flush(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Logger::flush();

		return 0;
	}


	// Operator binds:

};

ork::Logger* LunaTraits< ork::Logger >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_Logger::_bind_ctor(L);
}

void LunaTraits< ork::Logger >::_bind_dtor(ork::Logger* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::Logger >::className[] = "Logger";
const char LunaTraits< ork::Logger >::fullName[] = "ork::Logger";
const char LunaTraits< ork::Logger >::moduleName[] = "ork";
const char* LunaTraits< ork::Logger >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::Logger >::hash = 27412345;
const int LunaTraits< ork::Logger >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::Logger >::methods[] = {
	{"addTopic", &luna_wrapper_ork_Logger::_bind_addTopic},
	{"hasTopic", &luna_wrapper_ork_Logger::_bind_hasTopic},
	{"log", &luna_wrapper_ork_Logger::_bind_log},
	{"flush", &luna_wrapper_ork_Logger::_bind_flush},
	{"get_DEBUG_LOGGER", &luna_wrapper_ork_Logger::_bind_get_DEBUG_LOGGER},
	{"get_INFO_LOGGER", &luna_wrapper_ork_Logger::_bind_get_INFO_LOGGER},
	{"get_WARNING_LOGGER", &luna_wrapper_ork_Logger::_bind_get_WARNING_LOGGER},
	{"get_ERROR_LOGGER", &luna_wrapper_ork_Logger::_bind_get_ERROR_LOGGER},
	{"set_DEBUG_LOGGER", &luna_wrapper_ork_Logger::_bind_set_DEBUG_LOGGER},
	{"set_INFO_LOGGER", &luna_wrapper_ork_Logger::_bind_set_INFO_LOGGER},
	{"set_WARNING_LOGGER", &luna_wrapper_ork_Logger::_bind_set_WARNING_LOGGER},
	{"set_ERROR_LOGGER", &luna_wrapper_ork_Logger::_bind_set_ERROR_LOGGER},
	{"base_toString", &luna_wrapper_ork_Logger::_bind_base_toString},
	{"base_log", &luna_wrapper_ork_Logger::_bind_base_log},
	{"base_flush", &luna_wrapper_ork_Logger::_bind_base_flush},
	{"fromVoid", &luna_wrapper_ork_Logger::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_Logger::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_Logger::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::Logger >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_Logger::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Logger >::enumValues[] = {
	{0,0}
};


