#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_Query.h>

class luna_wrapper_ork_Query {
public:
	typedef Luna< ork::Query > luna_t;

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

		ork::Query* self= (ork::Query*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::Query >::push(L,self,false);
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
		//ork::Query* ptr= dynamic_cast< ork::Query* >(Luna< ork::Object >::check(L,1));
		ork::Query* ptr= luna_caster< ork::Object, ork::Query >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::Query >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_begin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_end(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_available(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getResult(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::Query::Query(ork::QueryType type)
	static ork::Query* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::Query::Query(ork::QueryType type) function, expected prototype:\nork::Query::Query(ork::QueryType type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::QueryType type=(ork::QueryType)lua_tointeger(L,1);

		return new ork::Query(type);
	}

	// ork::Query::Query(lua_Table * data, ork::QueryType type)
	static ork::Query* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Query::Query(lua_Table * data, ork::QueryType type) function, expected prototype:\nork::Query::Query(lua_Table * data, ork::QueryType type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::QueryType type=(ork::QueryType)lua_tointeger(L,2);

		return new wrapper_ork_Query(L,NULL, type);
	}

	// Overload binder for ork::Query::Query
	static ork::Query* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Query, cannot match any of the overloads for function Query:\n  Query(ork::QueryType)\n  Query(lua_Table *, ork::QueryType)\n");
		return NULL;
	}


	// Function binds:
	// ork::QueryType ork::Query::getType()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in ork::QueryType ork::Query::getType() function, expected prototype:\nork::QueryType ork::Query::getType()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Query* self=Luna< ork::Object >::checkSubType< ork::Query >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::QueryType ork::Query::getType(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::QueryType lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int ork::Query::getId()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int ork::Query::getId() function, expected prototype:\nunsigned int ork::Query::getId()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Query* self=Luna< ork::Object >::checkSubType< ork::Query >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int ork::Query::getId(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::Query::begin()
	static int _bind_begin(lua_State *L) {
		if (!_lg_typecheck_begin(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Query::begin() function, expected prototype:\nvoid ork::Query::begin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Query* self=Luna< ork::Object >::checkSubType< ork::Query >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Query::begin(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->begin();

		return 0;
	}

	// void ork::Query::end()
	static int _bind_end(lua_State *L) {
		if (!_lg_typecheck_end(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Query::end() function, expected prototype:\nvoid ork::Query::end()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Query* self=Luna< ork::Object >::checkSubType< ork::Query >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Query::end(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->end();

		return 0;
	}

	// bool ork::Query::available()
	static int _bind_available(lua_State *L) {
		if (!_lg_typecheck_available(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::Query::available() function, expected prototype:\nbool ork::Query::available()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Query* self=Luna< ork::Object >::checkSubType< ork::Query >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::Query::available(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->available();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// uint64_t ork::Query::getResult()
	static int _bind_getResult(lua_State *L) {
		if (!_lg_typecheck_getResult(L)) {
			luaL_error(L, "luna typecheck failed in uint64_t ork::Query::getResult() function, expected prototype:\nuint64_t ork::Query::getResult()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Query* self=Luna< ork::Object >::checkSubType< ork::Query >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call uint64_t ork::Query::getResult(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		uint64_t stack_lret = self->getResult();
		uint64_t* lret = new uint64_t(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< uint64_t >::push(L,lret,true);

		return 1;
	}

	// const char * ork::Query::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::Query::base_toString() function, expected prototype:\nconst char * ork::Query::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Query* self=Luna< ork::Object >::checkSubType< ork::Query >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::Query::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Query::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::Query* LunaTraits< ork::Query >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_Query::_bind_ctor(L);
}

void LunaTraits< ork::Query >::_bind_dtor(ork::Query* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::Query >::className[] = "Query";
const char LunaTraits< ork::Query >::fullName[] = "ork::Query";
const char LunaTraits< ork::Query >::moduleName[] = "ork";
const char* LunaTraits< ork::Query >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::Query >::hash = 47614544;
const int LunaTraits< ork::Query >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::Query >::methods[] = {
	{"getType", &luna_wrapper_ork_Query::_bind_getType},
	{"getId", &luna_wrapper_ork_Query::_bind_getId},
	{"begin", &luna_wrapper_ork_Query::_bind_begin},
	{"end", &luna_wrapper_ork_Query::_bind_end},
	{"available", &luna_wrapper_ork_Query::_bind_available},
	{"getResult", &luna_wrapper_ork_Query::_bind_getResult},
	{"base_toString", &luna_wrapper_ork_Query::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_Query::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_Query::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_Query::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::Query >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_Query::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Query >::enumValues[] = {
	{0,0}
};


