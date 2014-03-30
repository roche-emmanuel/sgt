#include <plug_common.h>

#include <luna/wrappers/wrapper_OpenThreads_Condition.h>

class luna_wrapper_OpenThreads_Condition {
public:
	typedef Luna< OpenThreads::Condition > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		OpenThreads::Condition* self=(Luna< OpenThreads::Condition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<OpenThreads::Condition,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25792444) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(OpenThreads::Condition*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		OpenThreads::Condition* rhs =(Luna< OpenThreads::Condition >::check(L,2));
		OpenThreads::Condition* self=(Luna< OpenThreads::Condition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		OpenThreads::Condition* self= (OpenThreads::Condition*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< OpenThreads::Condition >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25792444) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< OpenThreads::Condition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		OpenThreads::Condition* self=(Luna< OpenThreads::Condition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("OpenThreads::Condition");
		
		return luna_dynamicCast(L,converters,"OpenThreads::Condition",name);
	}


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
	inline static bool _lg_typecheck_signal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_broadcast(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_signal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_broadcast(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// OpenThreads::Condition::Condition()
	static OpenThreads::Condition* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in OpenThreads::Condition::Condition() function, expected prototype:\nOpenThreads::Condition::Condition()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new OpenThreads::Condition();
	}

	// OpenThreads::Condition::Condition(lua_Table * data)
	static OpenThreads::Condition* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in OpenThreads::Condition::Condition(lua_Table * data) function, expected prototype:\nOpenThreads::Condition::Condition(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_OpenThreads_Condition(L,NULL);
	}

	// Overload binder for OpenThreads::Condition::Condition
	static OpenThreads::Condition* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Condition, cannot match any of the overloads for function Condition:\n  Condition()\n  Condition(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// int OpenThreads::Condition::signal()
	static int _bind_signal(lua_State *L) {
		if (!_lg_typecheck_signal(L)) {
			luaL_error(L, "luna typecheck failed in int OpenThreads::Condition::signal() function, expected prototype:\nint OpenThreads::Condition::signal()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Condition* self=(Luna< OpenThreads::Condition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int OpenThreads::Condition::signal(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Condition >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->signal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int OpenThreads::Condition::broadcast()
	static int _bind_broadcast(lua_State *L) {
		if (!_lg_typecheck_broadcast(L)) {
			luaL_error(L, "luna typecheck failed in int OpenThreads::Condition::broadcast() function, expected prototype:\nint OpenThreads::Condition::broadcast()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Condition* self=(Luna< OpenThreads::Condition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int OpenThreads::Condition::broadcast(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Condition >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->broadcast();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int OpenThreads::Condition::base_signal()
	static int _bind_base_signal(lua_State *L) {
		if (!_lg_typecheck_base_signal(L)) {
			luaL_error(L, "luna typecheck failed in int OpenThreads::Condition::base_signal() function, expected prototype:\nint OpenThreads::Condition::base_signal()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Condition* self=(Luna< OpenThreads::Condition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int OpenThreads::Condition::base_signal(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Condition >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Condition::signal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int OpenThreads::Condition::base_broadcast()
	static int _bind_base_broadcast(lua_State *L) {
		if (!_lg_typecheck_base_broadcast(L)) {
			luaL_error(L, "luna typecheck failed in int OpenThreads::Condition::base_broadcast() function, expected prototype:\nint OpenThreads::Condition::base_broadcast()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Condition* self=(Luna< OpenThreads::Condition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int OpenThreads::Condition::base_broadcast(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Condition >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Condition::broadcast();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

OpenThreads::Condition* LunaTraits< OpenThreads::Condition >::_bind_ctor(lua_State *L) {
	return luna_wrapper_OpenThreads_Condition::_bind_ctor(L);
}

void LunaTraits< OpenThreads::Condition >::_bind_dtor(OpenThreads::Condition* obj) {
	delete obj;
}

const char LunaTraits< OpenThreads::Condition >::className[] = "Condition";
const char LunaTraits< OpenThreads::Condition >::fullName[] = "OpenThreads::Condition";
const char LunaTraits< OpenThreads::Condition >::moduleName[] = "OpenThreads";
const char* LunaTraits< OpenThreads::Condition >::parents[] = {0};
const int LunaTraits< OpenThreads::Condition >::hash = 25792444;
const int LunaTraits< OpenThreads::Condition >::uniqueIDs[] = {25792444,0};

luna_RegType LunaTraits< OpenThreads::Condition >::methods[] = {
	{"signal", &luna_wrapper_OpenThreads_Condition::_bind_signal},
	{"broadcast", &luna_wrapper_OpenThreads_Condition::_bind_broadcast},
	{"base_signal", &luna_wrapper_OpenThreads_Condition::_bind_base_signal},
	{"base_broadcast", &luna_wrapper_OpenThreads_Condition::_bind_base_broadcast},
	{"dynCast", &luna_wrapper_OpenThreads_Condition::_bind_dynCast},
	{"__eq", &luna_wrapper_OpenThreads_Condition::_bind___eq},
	{"fromVoid", &luna_wrapper_OpenThreads_Condition::_bind_fromVoid},
	{"asVoid", &luna_wrapper_OpenThreads_Condition::_bind_asVoid},
	{"getTable", &luna_wrapper_OpenThreads_Condition::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< OpenThreads::Condition >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< OpenThreads::Condition >::enumValues[] = {
	{0,0}
};


