#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_wxTimerImpl {
public:
	typedef Luna< wxTimerImpl > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53064125) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTimerImpl*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxTimerImpl* rhs =(Luna< wxTimerImpl >::check(L,2));
		wxTimerImpl* self=(Luna< wxTimerImpl >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		wxTimerImpl* self=(Luna< wxTimerImpl >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTimerImpl");
		
		return luna_dynamicCast(L,converters,"wxTimerImpl",name);
	}

};

wxTimerImpl* LunaTraits< wxTimerImpl >::_bind_ctor(lua_State *L) {
	return NULL; //Type destructor explicitly removed.
}

void LunaTraits< wxTimerImpl >::_bind_dtor(wxTimerImpl* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< wxTimerImpl >::className[] = "wxTimerImpl";
const char LunaTraits< wxTimerImpl >::fullName[] = "wxTimerImpl";
const char LunaTraits< wxTimerImpl >::moduleName[] = "wx";
const char* LunaTraits< wxTimerImpl >::parents[] = {0};
const int LunaTraits< wxTimerImpl >::hash = 53064125;
const int LunaTraits< wxTimerImpl >::uniqueIDs[] = {53064125,0};

luna_RegType LunaTraits< wxTimerImpl >::methods[] = {
	{"dynCast", &luna_wrapper_wxTimerImpl::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTimerImpl::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< wxTimerImpl >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTimerImpl >::enumValues[] = {
	{0,0}
};


