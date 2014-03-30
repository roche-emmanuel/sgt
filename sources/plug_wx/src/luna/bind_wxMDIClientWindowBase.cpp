#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_wxMDIClientWindowBase {
public:
	typedef Luna< wxMDIClientWindowBase > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44808876) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxMDIClientWindowBase*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxMDIClientWindowBase* rhs =(Luna< wxMDIClientWindowBase >::check(L,2));
		wxMDIClientWindowBase* self=(Luna< wxMDIClientWindowBase >::check(L,1));
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

		wxMDIClientWindowBase* self=(Luna< wxMDIClientWindowBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxMDIClientWindowBase");
		
		return luna_dynamicCast(L,converters,"wxMDIClientWindowBase",name);
	}

};

wxMDIClientWindowBase* LunaTraits< wxMDIClientWindowBase >::_bind_ctor(lua_State *L) {
	return NULL; //Type destructor explicitly removed.
}

void LunaTraits< wxMDIClientWindowBase >::_bind_dtor(wxMDIClientWindowBase* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< wxMDIClientWindowBase >::className[] = "wxMDIClientWindowBase";
const char LunaTraits< wxMDIClientWindowBase >::fullName[] = "wxMDIClientWindowBase";
const char LunaTraits< wxMDIClientWindowBase >::moduleName[] = "wx";
const char* LunaTraits< wxMDIClientWindowBase >::parents[] = {0};
const int LunaTraits< wxMDIClientWindowBase >::hash = 44808876;
const int LunaTraits< wxMDIClientWindowBase >::uniqueIDs[] = {44808876,0};

luna_RegType LunaTraits< wxMDIClientWindowBase >::methods[] = {
	{"dynCast", &luna_wrapper_wxMDIClientWindowBase::_bind_dynCast},
	{"__eq", &luna_wrapper_wxMDIClientWindowBase::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< wxMDIClientWindowBase >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxMDIClientWindowBase >::enumValues[] = {
	{0,0}
};


