#include <plug_common.h>

class luna_wrapper_wxHeaderButtonParams {
public:
	typedef Luna< wxHeaderButtonParams > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67488995) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxHeaderButtonParams*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxHeaderButtonParams* rhs =(Luna< wxHeaderButtonParams >::check(L,2));
		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
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

		wxHeaderButtonParams* self= (wxHeaderButtonParams*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxHeaderButtonParams >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67488995) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxHeaderButtonParams >::check(L,1));
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

		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxHeaderButtonParams");
		
		return luna_dynamicCast(L,converters,"wxHeaderButtonParams",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getArrowColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSelectionColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLabelText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLabelFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLabelColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLabelBitmap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLabelAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setArrowColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSelectionColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLabelText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLabelFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLabelColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLabelBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLabelAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHeaderButtonParams::wxHeaderButtonParams()
	static wxHeaderButtonParams* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxHeaderButtonParams::wxHeaderButtonParams() function, expected prototype:\nwxHeaderButtonParams::wxHeaderButtonParams()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxHeaderButtonParams();
	}


	// Function binds:
	// wxColour wxHeaderButtonParams::m_arrowColour()
	static int _bind_getArrowColour(lua_State *L) {
		if (!_lg_typecheck_getArrowColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxHeaderButtonParams::m_arrowColour() function, expected prototype:\nwxColour wxHeaderButtonParams::m_arrowColour()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxHeaderButtonParams::m_arrowColour(). Got : '%s'\n%s",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxColour* lret = &self->m_arrowColour;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// wxColour wxHeaderButtonParams::m_selectionColour()
	static int _bind_getSelectionColour(lua_State *L) {
		if (!_lg_typecheck_getSelectionColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxHeaderButtonParams::m_selectionColour() function, expected prototype:\nwxColour wxHeaderButtonParams::m_selectionColour()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxHeaderButtonParams::m_selectionColour(). Got : '%s'\n%s",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxColour* lret = &self->m_selectionColour;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// wxString wxHeaderButtonParams::m_labelText()
	static int _bind_getLabelText(lua_State *L) {
		if (!_lg_typecheck_getLabelText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxHeaderButtonParams::m_labelText() function, expected prototype:\nwxString wxHeaderButtonParams::m_labelText()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxHeaderButtonParams::m_labelText(). Got : '%s'\n%s",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->m_labelText;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxFont wxHeaderButtonParams::m_labelFont()
	static int _bind_getLabelFont(lua_State *L) {
		if (!_lg_typecheck_getLabelFont(L)) {
			luaL_error(L, "luna typecheck failed in wxFont wxHeaderButtonParams::m_labelFont() function, expected prototype:\nwxFont wxHeaderButtonParams::m_labelFont()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont wxHeaderButtonParams::m_labelFont(). Got : '%s'\n%s",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxFont* lret = &self->m_labelFont;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}

	// wxColour wxHeaderButtonParams::m_labelColour()
	static int _bind_getLabelColour(lua_State *L) {
		if (!_lg_typecheck_getLabelColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxHeaderButtonParams::m_labelColour() function, expected prototype:\nwxColour wxHeaderButtonParams::m_labelColour()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxHeaderButtonParams::m_labelColour(). Got : '%s'\n%s",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxColour* lret = &self->m_labelColour;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// wxBitmap wxHeaderButtonParams::m_labelBitmap()
	static int _bind_getLabelBitmap(lua_State *L) {
		if (!_lg_typecheck_getLabelBitmap(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmap wxHeaderButtonParams::m_labelBitmap() function, expected prototype:\nwxBitmap wxHeaderButtonParams::m_labelBitmap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmap wxHeaderButtonParams::m_labelBitmap(). Got : '%s'\n%s",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxBitmap* lret = &self->m_labelBitmap;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// int wxHeaderButtonParams::m_labelAlignment()
	static int _bind_getLabelAlignment(lua_State *L) {
		if (!_lg_typecheck_getLabelAlignment(L)) {
			luaL_error(L, "luna typecheck failed in int wxHeaderButtonParams::m_labelAlignment() function, expected prototype:\nint wxHeaderButtonParams::m_labelAlignment()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHeaderButtonParams::m_labelAlignment(). Got : '%s'\n%s",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_labelAlignment;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxHeaderButtonParams::m_arrowColour(wxColour value)
	static int _bind_setArrowColour(lua_State *L) {
		if (!_lg_typecheck_setArrowColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxHeaderButtonParams::m_arrowColour(wxColour value) function, expected prototype:\nvoid wxHeaderButtonParams::m_arrowColour(wxColour value)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxColour* value_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxHeaderButtonParams::m_arrowColour function");
		}
		wxColour value=*value_ptr;

		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHeaderButtonParams::m_arrowColour(wxColour). Got : '%s'\n%s",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_arrowColour = value;

		return 0;
	}

	// void wxHeaderButtonParams::m_selectionColour(wxColour value)
	static int _bind_setSelectionColour(lua_State *L) {
		if (!_lg_typecheck_setSelectionColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxHeaderButtonParams::m_selectionColour(wxColour value) function, expected prototype:\nvoid wxHeaderButtonParams::m_selectionColour(wxColour value)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxColour* value_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxHeaderButtonParams::m_selectionColour function");
		}
		wxColour value=*value_ptr;

		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHeaderButtonParams::m_selectionColour(wxColour). Got : '%s'\n%s",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_selectionColour = value;

		return 0;
	}

	// void wxHeaderButtonParams::m_labelText(wxString value)
	static int _bind_setLabelText(lua_State *L) {
		if (!_lg_typecheck_setLabelText(L)) {
			luaL_error(L, "luna typecheck failed in void wxHeaderButtonParams::m_labelText(wxString value) function, expected prototype:\nvoid wxHeaderButtonParams::m_labelText(wxString value)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHeaderButtonParams::m_labelText(wxString). Got : '%s'\n%s",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_labelText = value;

		return 0;
	}

	// void wxHeaderButtonParams::m_labelFont(wxFont value)
	static int _bind_setLabelFont(lua_State *L) {
		if (!_lg_typecheck_setLabelFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxHeaderButtonParams::m_labelFont(wxFont value) function, expected prototype:\nvoid wxHeaderButtonParams::m_labelFont(wxFont value)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFont* value_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxHeaderButtonParams::m_labelFont function");
		}
		wxFont value=*value_ptr;

		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHeaderButtonParams::m_labelFont(wxFont). Got : '%s'\n%s",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_labelFont = value;

		return 0;
	}

	// void wxHeaderButtonParams::m_labelColour(wxColour value)
	static int _bind_setLabelColour(lua_State *L) {
		if (!_lg_typecheck_setLabelColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxHeaderButtonParams::m_labelColour(wxColour value) function, expected prototype:\nvoid wxHeaderButtonParams::m_labelColour(wxColour value)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxColour* value_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxHeaderButtonParams::m_labelColour function");
		}
		wxColour value=*value_ptr;

		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHeaderButtonParams::m_labelColour(wxColour). Got : '%s'\n%s",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_labelColour = value;

		return 0;
	}

	// void wxHeaderButtonParams::m_labelBitmap(wxBitmap value)
	static int _bind_setLabelBitmap(lua_State *L) {
		if (!_lg_typecheck_setLabelBitmap(L)) {
			luaL_error(L, "luna typecheck failed in void wxHeaderButtonParams::m_labelBitmap(wxBitmap value) function, expected prototype:\nvoid wxHeaderButtonParams::m_labelBitmap(wxBitmap value)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBitmap* value_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxHeaderButtonParams::m_labelBitmap function");
		}
		wxBitmap value=*value_ptr;

		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHeaderButtonParams::m_labelBitmap(wxBitmap). Got : '%s'\n%s",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_labelBitmap = value;

		return 0;
	}

	// void wxHeaderButtonParams::m_labelAlignment(int value)
	static int _bind_setLabelAlignment(lua_State *L) {
		if (!_lg_typecheck_setLabelAlignment(L)) {
			luaL_error(L, "luna typecheck failed in void wxHeaderButtonParams::m_labelAlignment(int value) function, expected prototype:\nvoid wxHeaderButtonParams::m_labelAlignment(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHeaderButtonParams::m_labelAlignment(int). Got : '%s'\n%s",typeid(Luna< wxHeaderButtonParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_labelAlignment = value;

		return 0;
	}


	// Operator binds:

};

wxHeaderButtonParams* LunaTraits< wxHeaderButtonParams >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHeaderButtonParams::_bind_ctor(L);
}

void LunaTraits< wxHeaderButtonParams >::_bind_dtor(wxHeaderButtonParams* obj) {
	delete obj;
}

const char LunaTraits< wxHeaderButtonParams >::className[] = "wxHeaderButtonParams";
const char LunaTraits< wxHeaderButtonParams >::fullName[] = "wxHeaderButtonParams";
const char LunaTraits< wxHeaderButtonParams >::moduleName[] = "wx";
const char* LunaTraits< wxHeaderButtonParams >::parents[] = {0};
const int LunaTraits< wxHeaderButtonParams >::hash = 67488995;
const int LunaTraits< wxHeaderButtonParams >::uniqueIDs[] = {67488995,0};

luna_RegType LunaTraits< wxHeaderButtonParams >::methods[] = {
	{"getArrowColour", &luna_wrapper_wxHeaderButtonParams::_bind_getArrowColour},
	{"getSelectionColour", &luna_wrapper_wxHeaderButtonParams::_bind_getSelectionColour},
	{"getLabelText", &luna_wrapper_wxHeaderButtonParams::_bind_getLabelText},
	{"getLabelFont", &luna_wrapper_wxHeaderButtonParams::_bind_getLabelFont},
	{"getLabelColour", &luna_wrapper_wxHeaderButtonParams::_bind_getLabelColour},
	{"getLabelBitmap", &luna_wrapper_wxHeaderButtonParams::_bind_getLabelBitmap},
	{"getLabelAlignment", &luna_wrapper_wxHeaderButtonParams::_bind_getLabelAlignment},
	{"setArrowColour", &luna_wrapper_wxHeaderButtonParams::_bind_setArrowColour},
	{"setSelectionColour", &luna_wrapper_wxHeaderButtonParams::_bind_setSelectionColour},
	{"setLabelText", &luna_wrapper_wxHeaderButtonParams::_bind_setLabelText},
	{"setLabelFont", &luna_wrapper_wxHeaderButtonParams::_bind_setLabelFont},
	{"setLabelColour", &luna_wrapper_wxHeaderButtonParams::_bind_setLabelColour},
	{"setLabelBitmap", &luna_wrapper_wxHeaderButtonParams::_bind_setLabelBitmap},
	{"setLabelAlignment", &luna_wrapper_wxHeaderButtonParams::_bind_setLabelAlignment},
	{"dynCast", &luna_wrapper_wxHeaderButtonParams::_bind_dynCast},
	{"__eq", &luna_wrapper_wxHeaderButtonParams::_bind___eq},
	{"fromVoid", &luna_wrapper_wxHeaderButtonParams::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxHeaderButtonParams::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxHeaderButtonParams >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxHeaderButtonParams >::enumValues[] = {
	{0,0}
};


