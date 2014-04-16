#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_GraphListener.h>

class luna_wrapper_proland_GraphListener {
public:
	typedef Luna< proland::GraphListener > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::GraphListener* self=(Luna< proland::GraphListener >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<proland::GraphListener,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23314933) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::GraphListener*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::GraphListener* rhs =(Luna< proland::GraphListener >::check(L,2));
		proland::GraphListener* self=(Luna< proland::GraphListener >::check(L,1));
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

		proland::GraphListener* self= (proland::GraphListener*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::GraphListener >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23314933) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::GraphListener >::check(L,1));
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

		proland::GraphListener* self=(Luna< proland::GraphListener >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::GraphListener");
		
		return luna_dynamicCast(L,converters,"proland::GraphListener",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_graphChanged(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::GraphListener::GraphListener(lua_Table * data)
	static proland::GraphListener* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::GraphListener::GraphListener(lua_Table * data) function, expected prototype:\nproland::GraphListener::GraphListener(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_proland_GraphListener(L,NULL);
	}


	// Function binds:
	// void proland::GraphListener::graphChanged()
	static int _bind_graphChanged(lua_State *L) {
		if (!_lg_typecheck_graphChanged(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GraphListener::graphChanged() function, expected prototype:\nvoid proland::GraphListener::graphChanged()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GraphListener* self=(Luna< proland::GraphListener >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GraphListener::graphChanged(). Got : '%s'\n%s",typeid(Luna< proland::GraphListener >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->graphChanged();

		return 0;
	}


	// Operator binds:

};

proland::GraphListener* LunaTraits< proland::GraphListener >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_GraphListener::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void proland::GraphListener::graphChanged()
}

void LunaTraits< proland::GraphListener >::_bind_dtor(proland::GraphListener* obj) {
	delete obj;
}

const char LunaTraits< proland::GraphListener >::className[] = "GraphListener";
const char LunaTraits< proland::GraphListener >::fullName[] = "proland::GraphListener";
const char LunaTraits< proland::GraphListener >::moduleName[] = "proland";
const char* LunaTraits< proland::GraphListener >::parents[] = {0};
const int LunaTraits< proland::GraphListener >::hash = 23314933;
const int LunaTraits< proland::GraphListener >::uniqueIDs[] = {23314933,0};

luna_RegType LunaTraits< proland::GraphListener >::methods[] = {
	{"graphChanged", &luna_wrapper_proland_GraphListener::_bind_graphChanged},
	{"dynCast", &luna_wrapper_proland_GraphListener::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_GraphListener::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_GraphListener::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_GraphListener::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_GraphListener::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::GraphListener >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::GraphListener >::enumValues[] = {
	{0,0}
};


