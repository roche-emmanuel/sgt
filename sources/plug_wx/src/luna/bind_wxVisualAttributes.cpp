#include <plug_common.h>

class luna_wrapper_wxVisualAttributes {
public:
	typedef Luna< wxVisualAttributes > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,97172082) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxVisualAttributes*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxVisualAttributes* rhs =(Luna< wxVisualAttributes >::check(L,2));
		wxVisualAttributes* self=(Luna< wxVisualAttributes >::check(L,1));
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

		wxVisualAttributes* self= (wxVisualAttributes*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxVisualAttributes >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,97172082) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxVisualAttributes >::check(L,1));
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

		wxVisualAttributes* self=(Luna< wxVisualAttributes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxVisualAttributes");
		
		return luna_dynamicCast(L,converters,"wxVisualAttributes",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColFg(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColBg(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setColFg(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setColBg(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// wxFont wxVisualAttributes::font()
	static int _bind_getFont(lua_State *L) {
		if (!_lg_typecheck_getFont(L)) {
			luaL_error(L, "luna typecheck failed in wxFont wxVisualAttributes::font() function, expected prototype:\nwxFont wxVisualAttributes::font()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxVisualAttributes* self=(Luna< wxVisualAttributes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont wxVisualAttributes::font(). Got : '%s'\n%s",typeid(Luna< wxVisualAttributes >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxFont* lret = &self->font;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}

	// wxColour wxVisualAttributes::colFg()
	static int _bind_getColFg(lua_State *L) {
		if (!_lg_typecheck_getColFg(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxVisualAttributes::colFg() function, expected prototype:\nwxColour wxVisualAttributes::colFg()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxVisualAttributes* self=(Luna< wxVisualAttributes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxVisualAttributes::colFg(). Got : '%s'\n%s",typeid(Luna< wxVisualAttributes >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxColour* lret = &self->colFg;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// wxColour wxVisualAttributes::colBg()
	static int _bind_getColBg(lua_State *L) {
		if (!_lg_typecheck_getColBg(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxVisualAttributes::colBg() function, expected prototype:\nwxColour wxVisualAttributes::colBg()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxVisualAttributes* self=(Luna< wxVisualAttributes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxVisualAttributes::colBg(). Got : '%s'\n%s",typeid(Luna< wxVisualAttributes >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxColour* lret = &self->colBg;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// void wxVisualAttributes::font(wxFont value)
	static int _bind_setFont(lua_State *L) {
		if (!_lg_typecheck_setFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxVisualAttributes::font(wxFont value) function, expected prototype:\nvoid wxVisualAttributes::font(wxFont value)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFont* value_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxVisualAttributes::font function");
		}
		wxFont value=*value_ptr;

		wxVisualAttributes* self=(Luna< wxVisualAttributes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxVisualAttributes::font(wxFont). Got : '%s'\n%s",typeid(Luna< wxVisualAttributes >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->font = value;

		return 0;
	}

	// void wxVisualAttributes::colFg(wxColour value)
	static int _bind_setColFg(lua_State *L) {
		if (!_lg_typecheck_setColFg(L)) {
			luaL_error(L, "luna typecheck failed in void wxVisualAttributes::colFg(wxColour value) function, expected prototype:\nvoid wxVisualAttributes::colFg(wxColour value)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxColour* value_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxVisualAttributes::colFg function");
		}
		wxColour value=*value_ptr;

		wxVisualAttributes* self=(Luna< wxVisualAttributes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxVisualAttributes::colFg(wxColour). Got : '%s'\n%s",typeid(Luna< wxVisualAttributes >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->colFg = value;

		return 0;
	}

	// void wxVisualAttributes::colBg(wxColour value)
	static int _bind_setColBg(lua_State *L) {
		if (!_lg_typecheck_setColBg(L)) {
			luaL_error(L, "luna typecheck failed in void wxVisualAttributes::colBg(wxColour value) function, expected prototype:\nvoid wxVisualAttributes::colBg(wxColour value)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxColour* value_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxVisualAttributes::colBg function");
		}
		wxColour value=*value_ptr;

		wxVisualAttributes* self=(Luna< wxVisualAttributes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxVisualAttributes::colBg(wxColour). Got : '%s'\n%s",typeid(Luna< wxVisualAttributes >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->colBg = value;

		return 0;
	}


	// Operator binds:

};

wxVisualAttributes* LunaTraits< wxVisualAttributes >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxVisualAttributes >::_bind_dtor(wxVisualAttributes* obj) {
	delete obj;
}

const char LunaTraits< wxVisualAttributes >::className[] = "wxVisualAttributes";
const char LunaTraits< wxVisualAttributes >::fullName[] = "wxVisualAttributes";
const char LunaTraits< wxVisualAttributes >::moduleName[] = "wx";
const char* LunaTraits< wxVisualAttributes >::parents[] = {0};
const int LunaTraits< wxVisualAttributes >::hash = 97172082;
const int LunaTraits< wxVisualAttributes >::uniqueIDs[] = {97172082,0};

luna_RegType LunaTraits< wxVisualAttributes >::methods[] = {
	{"getFont", &luna_wrapper_wxVisualAttributes::_bind_getFont},
	{"getColFg", &luna_wrapper_wxVisualAttributes::_bind_getColFg},
	{"getColBg", &luna_wrapper_wxVisualAttributes::_bind_getColBg},
	{"setFont", &luna_wrapper_wxVisualAttributes::_bind_setFont},
	{"setColFg", &luna_wrapper_wxVisualAttributes::_bind_setColFg},
	{"setColBg", &luna_wrapper_wxVisualAttributes::_bind_setColBg},
	{"dynCast", &luna_wrapper_wxVisualAttributes::_bind_dynCast},
	{"__eq", &luna_wrapper_wxVisualAttributes::_bind___eq},
	{"fromVoid", &luna_wrapper_wxVisualAttributes::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxVisualAttributes::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxVisualAttributes >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxVisualAttributes >::enumValues[] = {
	{0,0}
};


