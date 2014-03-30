#include <plug_common.h>

class luna_wrapper_wxCondition {
public:
	typedef Luna< wxCondition > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,34092478) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxCondition*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxCondition* rhs =(Luna< wxCondition >::check(L,2));
		wxCondition* self=(Luna< wxCondition >::check(L,1));
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

		wxCondition* self= (wxCondition*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxCondition >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,34092478) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxCondition >::check(L,1));
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

		wxCondition* self=(Luna< wxCondition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxCondition");
		
		return luna_dynamicCast(L,converters,"wxCondition",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxCondition* LunaTraits< wxCondition >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxCondition >::_bind_dtor(wxCondition* obj) {
	delete obj;
}

const char LunaTraits< wxCondition >::className[] = "wxCondition";
const char LunaTraits< wxCondition >::fullName[] = "wxCondition";
const char LunaTraits< wxCondition >::moduleName[] = "wx";
const char* LunaTraits< wxCondition >::parents[] = {0};
const int LunaTraits< wxCondition >::hash = 34092478;
const int LunaTraits< wxCondition >::uniqueIDs[] = {34092478,0};

luna_RegType LunaTraits< wxCondition >::methods[] = {
	{"dynCast", &luna_wrapper_wxCondition::_bind_dynCast},
	{"__eq", &luna_wrapper_wxCondition::_bind___eq},
	{"fromVoid", &luna_wrapper_wxCondition::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxCondition::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxCondition >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxCondition >::enumValues[] = {
	{0,0}
};


