#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_wxPGEditorDialogAdapter {
public:
	typedef Luna< wxPGEditorDialogAdapter > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86435384) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxPGEditorDialogAdapter*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxPGEditorDialogAdapter* rhs =(Luna< wxPGEditorDialogAdapter >::check(L,2));
		wxPGEditorDialogAdapter* self=(Luna< wxPGEditorDialogAdapter >::check(L,1));
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

		wxPGEditorDialogAdapter* self=(Luna< wxPGEditorDialogAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxPGEditorDialogAdapter");
		
		return luna_dynamicCast(L,converters,"wxPGEditorDialogAdapter",name);
	}

};

wxPGEditorDialogAdapter* LunaTraits< wxPGEditorDialogAdapter >::_bind_ctor(lua_State *L) {
	return NULL; //Type destructor explicitly removed.
}

void LunaTraits< wxPGEditorDialogAdapter >::_bind_dtor(wxPGEditorDialogAdapter* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< wxPGEditorDialogAdapter >::className[] = "wxPGEditorDialogAdapter";
const char LunaTraits< wxPGEditorDialogAdapter >::fullName[] = "wxPGEditorDialogAdapter";
const char LunaTraits< wxPGEditorDialogAdapter >::moduleName[] = "wx";
const char* LunaTraits< wxPGEditorDialogAdapter >::parents[] = {0};
const int LunaTraits< wxPGEditorDialogAdapter >::hash = 86435384;
const int LunaTraits< wxPGEditorDialogAdapter >::uniqueIDs[] = {86435384,0};

luna_RegType LunaTraits< wxPGEditorDialogAdapter >::methods[] = {
	{"dynCast", &luna_wrapper_wxPGEditorDialogAdapter::_bind_dynCast},
	{"__eq", &luna_wrapper_wxPGEditorDialogAdapter::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< wxPGEditorDialogAdapter >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPGEditorDialogAdapter >::enumValues[] = {
	{0,0}
};


