#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_Recordable.h>

class luna_wrapper_proland_Recordable {
public:
	typedef Luna< proland::Recordable > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::Recordable* self=(Luna< proland::Recordable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<proland::Recordable,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61540425) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::Recordable*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::Recordable* rhs =(Luna< proland::Recordable >::check(L,2));
		proland::Recordable* self=(Luna< proland::Recordable >::check(L,1));
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

		proland::Recordable* self= (proland::Recordable*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::Recordable >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61540425) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::Recordable >::check(L,1));
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

		proland::Recordable* self=(Luna< proland::Recordable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::Recordable");
		
		return luna_dynamicCast(L,converters,"proland::Recordable",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_saveState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_restoreState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::Recordable::Recordable(lua_Table * data)
	static proland::Recordable* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::Recordable::Recordable(lua_Table * data) function, expected prototype:\nproland::Recordable::Recordable(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_proland_Recordable(L,NULL);
	}


	// Function binds:
	// void proland::Recordable::saveState()
	static int _bind_saveState(lua_State *L) {
		if (!_lg_typecheck_saveState(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Recordable::saveState() function, expected prototype:\nvoid proland::Recordable::saveState()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Recordable* self=(Luna< proland::Recordable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Recordable::saveState(). Got : '%s'\n%s",typeid(Luna< proland::Recordable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->saveState();

		return 0;
	}

	// void proland::Recordable::restoreState()
	static int _bind_restoreState(lua_State *L) {
		if (!_lg_typecheck_restoreState(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Recordable::restoreState() function, expected prototype:\nvoid proland::Recordable::restoreState()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Recordable* self=(Luna< proland::Recordable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Recordable::restoreState(). Got : '%s'\n%s",typeid(Luna< proland::Recordable >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->restoreState();

		return 0;
	}


	// Operator binds:

};

proland::Recordable* LunaTraits< proland::Recordable >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_Recordable::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void proland::Recordable::saveState()
	// void proland::Recordable::restoreState()
}

void LunaTraits< proland::Recordable >::_bind_dtor(proland::Recordable* obj) {
	delete obj;
}

const char LunaTraits< proland::Recordable >::className[] = "Recordable";
const char LunaTraits< proland::Recordable >::fullName[] = "proland::Recordable";
const char LunaTraits< proland::Recordable >::moduleName[] = "proland";
const char* LunaTraits< proland::Recordable >::parents[] = {0};
const int LunaTraits< proland::Recordable >::hash = 61540425;
const int LunaTraits< proland::Recordable >::uniqueIDs[] = {61540425,0};

luna_RegType LunaTraits< proland::Recordable >::methods[] = {
	{"saveState", &luna_wrapper_proland_Recordable::_bind_saveState},
	{"restoreState", &luna_wrapper_proland_Recordable::_bind_restoreState},
	{"dynCast", &luna_wrapper_proland_Recordable::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_Recordable::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_Recordable::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_Recordable::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_Recordable::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::Recordable >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::Recordable >::enumValues[] = {
	{0,0}
};


