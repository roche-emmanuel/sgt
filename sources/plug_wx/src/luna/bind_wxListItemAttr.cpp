#include <plug_common.h>

class luna_wrapper_wxListItemAttr {
public:
	typedef Luna< wxListItemAttr > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87674876) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxListItemAttr*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxListItemAttr* rhs =(Luna< wxListItemAttr >::check(L,2));
		wxListItemAttr* self=(Luna< wxListItemAttr >::check(L,1));
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

		wxListItemAttr* self= (wxListItemAttr*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxListItemAttr >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87674876) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxListItemAttr >::check(L,1));
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

		wxListItemAttr* self=(Luna< wxListItemAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxListItemAttr");
		
		return luna_dynamicCast(L,converters,"wxListItemAttr",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxFont >(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTextColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasTextColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTextColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxListItemAttr::wxListItemAttr()
	static wxListItemAttr* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxListItemAttr::wxListItemAttr() function, expected prototype:\nwxListItemAttr::wxListItemAttr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxListItemAttr();
	}

	// wxListItemAttr::wxListItemAttr(const wxColour & colText, const wxColour & colBack, const wxFont & font)
	static wxListItemAttr* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxListItemAttr::wxListItemAttr(const wxColour & colText, const wxColour & colBack, const wxFont & font) function, expected prototype:\nwxListItemAttr::wxListItemAttr(const wxColour & colText, const wxColour & colBack, const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colText_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,1));
		if( !colText_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colText in wxListItemAttr::wxListItemAttr function");
		}
		const wxColour & colText=*colText_ptr;
		const wxColour* colBack_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colBack_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colBack in wxListItemAttr::wxListItemAttr function");
		}
		const wxColour & colBack=*colBack_ptr;
		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,3));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxListItemAttr::wxListItemAttr function");
		}
		const wxFont & font=*font_ptr;

		return new wxListItemAttr(colText, colBack, font);
	}

	// Overload binder for wxListItemAttr::wxListItemAttr
	static wxListItemAttr* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxListItemAttr, cannot match any of the overloads for function wxListItemAttr:\n  wxListItemAttr()\n  wxListItemAttr(const wxColour &, const wxColour &, const wxFont &)\n");
		return NULL;
	}


	// Function binds:
	// const wxColour & wxListItemAttr::GetBackgroundColour() const
	static int _bind_GetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in const wxColour & wxListItemAttr::GetBackgroundColour() const function, expected prototype:\nconst wxColour & wxListItemAttr::GetBackgroundColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListItemAttr* self=(Luna< wxListItemAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxColour & wxListItemAttr::GetBackgroundColour() const. Got : '%s'\n%s",typeid(Luna< wxListItemAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxColour* lret = &self->GetBackgroundColour();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// const wxFont & wxListItemAttr::GetFont() const
	static int _bind_GetFont(lua_State *L) {
		if (!_lg_typecheck_GetFont(L)) {
			luaL_error(L, "luna typecheck failed in const wxFont & wxListItemAttr::GetFont() const function, expected prototype:\nconst wxFont & wxListItemAttr::GetFont() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListItemAttr* self=(Luna< wxListItemAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxFont & wxListItemAttr::GetFont() const. Got : '%s'\n%s",typeid(Luna< wxListItemAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxFont* lret = &self->GetFont();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}

	// const wxColour & wxListItemAttr::GetTextColour() const
	static int _bind_GetTextColour(lua_State *L) {
		if (!_lg_typecheck_GetTextColour(L)) {
			luaL_error(L, "luna typecheck failed in const wxColour & wxListItemAttr::GetTextColour() const function, expected prototype:\nconst wxColour & wxListItemAttr::GetTextColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListItemAttr* self=(Luna< wxListItemAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxColour & wxListItemAttr::GetTextColour() const. Got : '%s'\n%s",typeid(Luna< wxListItemAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxColour* lret = &self->GetTextColour();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// bool wxListItemAttr::HasBackgroundColour() const
	static int _bind_HasBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_HasBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListItemAttr::HasBackgroundColour() const function, expected prototype:\nbool wxListItemAttr::HasBackgroundColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListItemAttr* self=(Luna< wxListItemAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListItemAttr::HasBackgroundColour() const. Got : '%s'\n%s",typeid(Luna< wxListItemAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasBackgroundColour();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListItemAttr::HasFont() const
	static int _bind_HasFont(lua_State *L) {
		if (!_lg_typecheck_HasFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListItemAttr::HasFont() const function, expected prototype:\nbool wxListItemAttr::HasFont() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListItemAttr* self=(Luna< wxListItemAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListItemAttr::HasFont() const. Got : '%s'\n%s",typeid(Luna< wxListItemAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasFont();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListItemAttr::HasTextColour() const
	static int _bind_HasTextColour(lua_State *L) {
		if (!_lg_typecheck_HasTextColour(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListItemAttr::HasTextColour() const function, expected prototype:\nbool wxListItemAttr::HasTextColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListItemAttr* self=(Luna< wxListItemAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListItemAttr::HasTextColour() const. Got : '%s'\n%s",typeid(Luna< wxListItemAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasTextColour();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListItemAttr::SetBackgroundColour(const wxColour & colour)
	static int _bind_SetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxListItemAttr::SetBackgroundColour(const wxColour & colour) function, expected prototype:\nvoid wxListItemAttr::SetBackgroundColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxListItemAttr::SetBackgroundColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxListItemAttr* self=(Luna< wxListItemAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListItemAttr::SetBackgroundColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxListItemAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBackgroundColour(colour);

		return 0;
	}

	// void wxListItemAttr::SetFont(const wxFont & font)
	static int _bind_SetFont(lua_State *L) {
		if (!_lg_typecheck_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxListItemAttr::SetFont(const wxFont & font) function, expected prototype:\nvoid wxListItemAttr::SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxListItemAttr::SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxListItemAttr* self=(Luna< wxListItemAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListItemAttr::SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxListItemAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFont(font);

		return 0;
	}

	// void wxListItemAttr::SetTextColour(const wxColour & colour)
	static int _bind_SetTextColour(lua_State *L) {
		if (!_lg_typecheck_SetTextColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxListItemAttr::SetTextColour(const wxColour & colour) function, expected prototype:\nvoid wxListItemAttr::SetTextColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxListItemAttr::SetTextColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxListItemAttr* self=(Luna< wxListItemAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListItemAttr::SetTextColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxListItemAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTextColour(colour);

		return 0;
	}


	// Operator binds:

};

wxListItemAttr* LunaTraits< wxListItemAttr >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxListItemAttr::_bind_ctor(L);
}

void LunaTraits< wxListItemAttr >::_bind_dtor(wxListItemAttr* obj) {
	delete obj;
}

const char LunaTraits< wxListItemAttr >::className[] = "wxListItemAttr";
const char LunaTraits< wxListItemAttr >::fullName[] = "wxListItemAttr";
const char LunaTraits< wxListItemAttr >::moduleName[] = "wx";
const char* LunaTraits< wxListItemAttr >::parents[] = {0};
const int LunaTraits< wxListItemAttr >::hash = 87674876;
const int LunaTraits< wxListItemAttr >::uniqueIDs[] = {87674876,0};

luna_RegType LunaTraits< wxListItemAttr >::methods[] = {
	{"GetBackgroundColour", &luna_wrapper_wxListItemAttr::_bind_GetBackgroundColour},
	{"GetFont", &luna_wrapper_wxListItemAttr::_bind_GetFont},
	{"GetTextColour", &luna_wrapper_wxListItemAttr::_bind_GetTextColour},
	{"HasBackgroundColour", &luna_wrapper_wxListItemAttr::_bind_HasBackgroundColour},
	{"HasFont", &luna_wrapper_wxListItemAttr::_bind_HasFont},
	{"HasTextColour", &luna_wrapper_wxListItemAttr::_bind_HasTextColour},
	{"SetBackgroundColour", &luna_wrapper_wxListItemAttr::_bind_SetBackgroundColour},
	{"SetFont", &luna_wrapper_wxListItemAttr::_bind_SetFont},
	{"SetTextColour", &luna_wrapper_wxListItemAttr::_bind_SetTextColour},
	{"dynCast", &luna_wrapper_wxListItemAttr::_bind_dynCast},
	{"__eq", &luna_wrapper_wxListItemAttr::_bind___eq},
	{"fromVoid", &luna_wrapper_wxListItemAttr::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxListItemAttr::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxListItemAttr >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxListItemAttr >::enumValues[] = {
	{0,0}
};


