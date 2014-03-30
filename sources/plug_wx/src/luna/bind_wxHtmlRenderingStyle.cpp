#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlRenderingStyle.h>

class luna_wrapper_wxHtmlRenderingStyle {
public:
	typedef Luna< wxHtmlRenderingStyle > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxHtmlRenderingStyle* self=(Luna< wxHtmlRenderingStyle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxHtmlRenderingStyle,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,41010643) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxHtmlRenderingStyle*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxHtmlRenderingStyle* rhs =(Luna< wxHtmlRenderingStyle >::check(L,2));
		wxHtmlRenderingStyle* self=(Luna< wxHtmlRenderingStyle >::check(L,1));
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

		wxHtmlRenderingStyle* self= (wxHtmlRenderingStyle*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxHtmlRenderingStyle >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,41010643) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxHtmlRenderingStyle >::check(L,1));
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

		wxHtmlRenderingStyle* self=(Luna< wxHtmlRenderingStyle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxHtmlRenderingStyle");
		
		return luna_dynamicCast(L,converters,"wxHtmlRenderingStyle",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetSelectedTextColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelectedTextBgColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// wxColour wxHtmlRenderingStyle::GetSelectedTextColour(const wxColour & clr)
	static int _bind_GetSelectedTextColour(lua_State *L) {
		if (!_lg_typecheck_GetSelectedTextColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxHtmlRenderingStyle::GetSelectedTextColour(const wxColour & clr) function, expected prototype:\nwxColour wxHtmlRenderingStyle::GetSelectedTextColour(const wxColour & clr)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* clr_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !clr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clr in wxHtmlRenderingStyle::GetSelectedTextColour function");
		}
		const wxColour & clr=*clr_ptr;

		wxHtmlRenderingStyle* self=(Luna< wxHtmlRenderingStyle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxHtmlRenderingStyle::GetSelectedTextColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxHtmlRenderingStyle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetSelectedTextColour(clr);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxColour wxHtmlRenderingStyle::GetSelectedTextBgColour(const wxColour & clr)
	static int _bind_GetSelectedTextBgColour(lua_State *L) {
		if (!_lg_typecheck_GetSelectedTextBgColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxHtmlRenderingStyle::GetSelectedTextBgColour(const wxColour & clr) function, expected prototype:\nwxColour wxHtmlRenderingStyle::GetSelectedTextBgColour(const wxColour & clr)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* clr_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !clr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clr in wxHtmlRenderingStyle::GetSelectedTextBgColour function");
		}
		const wxColour & clr=*clr_ptr;

		wxHtmlRenderingStyle* self=(Luna< wxHtmlRenderingStyle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxHtmlRenderingStyle::GetSelectedTextBgColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxHtmlRenderingStyle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetSelectedTextBgColour(clr);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

wxHtmlRenderingStyle* LunaTraits< wxHtmlRenderingStyle >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxColour wxHtmlRenderingStyle::GetSelectedTextColour(const wxColour & clr)
	// wxColour wxHtmlRenderingStyle::GetSelectedTextBgColour(const wxColour & clr)
}

void LunaTraits< wxHtmlRenderingStyle >::_bind_dtor(wxHtmlRenderingStyle* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlRenderingStyle >::className[] = "wxHtmlRenderingStyle";
const char LunaTraits< wxHtmlRenderingStyle >::fullName[] = "wxHtmlRenderingStyle";
const char LunaTraits< wxHtmlRenderingStyle >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlRenderingStyle >::parents[] = {0};
const int LunaTraits< wxHtmlRenderingStyle >::hash = 41010643;
const int LunaTraits< wxHtmlRenderingStyle >::uniqueIDs[] = {41010643,0};

luna_RegType LunaTraits< wxHtmlRenderingStyle >::methods[] = {
	{"GetSelectedTextColour", &luna_wrapper_wxHtmlRenderingStyle::_bind_GetSelectedTextColour},
	{"GetSelectedTextBgColour", &luna_wrapper_wxHtmlRenderingStyle::_bind_GetSelectedTextBgColour},
	{"dynCast", &luna_wrapper_wxHtmlRenderingStyle::_bind_dynCast},
	{"__eq", &luna_wrapper_wxHtmlRenderingStyle::_bind___eq},
	{"fromVoid", &luna_wrapper_wxHtmlRenderingStyle::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxHtmlRenderingStyle::_bind_asVoid},
	{"getTable", &luna_wrapper_wxHtmlRenderingStyle::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlRenderingStyle >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlRenderingStyle >::enumValues[] = {
	{0,0}
};


