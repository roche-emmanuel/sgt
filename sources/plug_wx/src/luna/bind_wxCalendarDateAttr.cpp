#include <plug_common.h>

class luna_wrapper_wxCalendarDateAttr {
public:
	typedef Luna< wxCalendarDateAttr > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,34465170) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxCalendarDateAttr*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxCalendarDateAttr* rhs =(Luna< wxCalendarDateAttr >::check(L,2));
		wxCalendarDateAttr* self=(Luna< wxCalendarDateAttr >::check(L,1));
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

		wxCalendarDateAttr* self= (wxCalendarDateAttr*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxCalendarDateAttr >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,34465170) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxCalendarDateAttr >::check(L,1));
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

		wxCalendarDateAttr* self=(Luna< wxCalendarDateAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxCalendarDateAttr");
		
		return luna_dynamicCast(L,converters,"wxCalendarDateAttr",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>5 ) return false;

		if( luatop>0 && !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( luatop>0 && (!(Luna< wxObject >::checkSubType< wxColour >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>1 && (!(Luna< wxObject >::checkSubType< wxColour >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>2 && (!(Luna< wxObject >::checkSubType< wxColour >(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>3 && (!(Luna< wxObject >::checkSubType< wxFont >(L,4))) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>1 && (!(Luna< wxObject >::checkSubType< wxColour >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBorder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBorderColour(lua_State *L) {
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

	inline static bool _lg_typecheck_HasBorder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasBorderColour(lua_State *L) {
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

	inline static bool _lg_typecheck_IsHoliday(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBorder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBorderColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHoliday(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTextColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMark(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMark(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,34465170) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxCalendarDateAttr::wxCalendarDateAttr(const wxColour & colText = wxNullColour, const wxColour & colBack = wxNullColour, const wxColour & colBorder = wxNullColour, const wxFont & font = wxNullFont, wxCalendarDateBorder border = ::wxCAL_BORDER_NONE)
	static wxCalendarDateAttr* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxCalendarDateAttr::wxCalendarDateAttr(const wxColour & colText = wxNullColour, const wxColour & colBack = wxNullColour, const wxColour & colBorder = wxNullColour, const wxFont & font = wxNullFont, wxCalendarDateBorder border = ::wxCAL_BORDER_NONE) function, expected prototype:\nwxCalendarDateAttr::wxCalendarDateAttr(const wxColour & colText = wxNullColour, const wxColour & colBack = wxNullColour, const wxColour & colBorder = wxNullColour, const wxFont & font = wxNullFont, wxCalendarDateBorder border = ::wxCAL_BORDER_NONE)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxColour* colText_ptr=luatop>0 ? (Luna< wxObject >::checkSubType< wxColour >(L,1)) : NULL;
		if( luatop>0 && !colText_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colText in wxCalendarDateAttr::wxCalendarDateAttr function");
		}
		const wxColour & colText=luatop>0 ? *colText_ptr : (const wxColour&)wxNullColour;
		const wxColour* colBack_ptr=luatop>1 ? (Luna< wxObject >::checkSubType< wxColour >(L,2)) : NULL;
		if( luatop>1 && !colBack_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colBack in wxCalendarDateAttr::wxCalendarDateAttr function");
		}
		const wxColour & colBack=luatop>1 ? *colBack_ptr : (const wxColour&)wxNullColour;
		const wxColour* colBorder_ptr=luatop>2 ? (Luna< wxObject >::checkSubType< wxColour >(L,3)) : NULL;
		if( luatop>2 && !colBorder_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colBorder in wxCalendarDateAttr::wxCalendarDateAttr function");
		}
		const wxColour & colBorder=luatop>2 ? *colBorder_ptr : (const wxColour&)wxNullColour;
		const wxFont* font_ptr=luatop>3 ? (Luna< wxObject >::checkSubType< wxFont >(L,4)) : NULL;
		if( luatop>3 && !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxCalendarDateAttr::wxCalendarDateAttr function");
		}
		const wxFont & font=luatop>3 ? *font_ptr : (const wxFont&)wxNullFont;
		wxCalendarDateBorder border=luatop>4 ? (wxCalendarDateBorder)lua_tointeger(L,5) : (wxCalendarDateBorder)::wxCAL_BORDER_NONE;

		return new wxCalendarDateAttr(colText, colBack, colBorder, font, border);
	}

	// wxCalendarDateAttr::wxCalendarDateAttr(wxCalendarDateBorder border, const wxColour & colBorder = wxNullColour)
	static wxCalendarDateAttr* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxCalendarDateAttr::wxCalendarDateAttr(wxCalendarDateBorder border, const wxColour & colBorder = wxNullColour) function, expected prototype:\nwxCalendarDateAttr::wxCalendarDateAttr(wxCalendarDateBorder border, const wxColour & colBorder = wxNullColour)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxCalendarDateBorder border=(wxCalendarDateBorder)lua_tointeger(L,1);
		const wxColour* colBorder_ptr=luatop>1 ? (Luna< wxObject >::checkSubType< wxColour >(L,2)) : NULL;
		if( luatop>1 && !colBorder_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colBorder in wxCalendarDateAttr::wxCalendarDateAttr function");
		}
		const wxColour & colBorder=luatop>1 ? *colBorder_ptr : (const wxColour&)wxNullColour;

		return new wxCalendarDateAttr(border, colBorder);
	}

	// Overload binder for wxCalendarDateAttr::wxCalendarDateAttr
	static wxCalendarDateAttr* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxCalendarDateAttr, cannot match any of the overloads for function wxCalendarDateAttr:\n  wxCalendarDateAttr(const wxColour &, const wxColour &, const wxColour &, const wxFont &, wxCalendarDateBorder)\n  wxCalendarDateAttr(wxCalendarDateBorder, const wxColour &)\n");
		return NULL;
	}


	// Function binds:
	// const wxColour & wxCalendarDateAttr::GetBackgroundColour() const
	static int _bind_GetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in const wxColour & wxCalendarDateAttr::GetBackgroundColour() const function, expected prototype:\nconst wxColour & wxCalendarDateAttr::GetBackgroundColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCalendarDateAttr* self=(Luna< wxCalendarDateAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxColour & wxCalendarDateAttr::GetBackgroundColour() const. Got : '%s'\n%s",typeid(Luna< wxCalendarDateAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxColour* lret = &self->GetBackgroundColour();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// wxCalendarDateBorder wxCalendarDateAttr::GetBorder() const
	static int _bind_GetBorder(lua_State *L) {
		if (!_lg_typecheck_GetBorder(L)) {
			luaL_error(L, "luna typecheck failed in wxCalendarDateBorder wxCalendarDateAttr::GetBorder() const function, expected prototype:\nwxCalendarDateBorder wxCalendarDateAttr::GetBorder() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCalendarDateAttr* self=(Luna< wxCalendarDateAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxCalendarDateBorder wxCalendarDateAttr::GetBorder() const. Got : '%s'\n%s",typeid(Luna< wxCalendarDateAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxCalendarDateBorder lret = self->GetBorder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxColour & wxCalendarDateAttr::GetBorderColour() const
	static int _bind_GetBorderColour(lua_State *L) {
		if (!_lg_typecheck_GetBorderColour(L)) {
			luaL_error(L, "luna typecheck failed in const wxColour & wxCalendarDateAttr::GetBorderColour() const function, expected prototype:\nconst wxColour & wxCalendarDateAttr::GetBorderColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCalendarDateAttr* self=(Luna< wxCalendarDateAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxColour & wxCalendarDateAttr::GetBorderColour() const. Got : '%s'\n%s",typeid(Luna< wxCalendarDateAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxColour* lret = &self->GetBorderColour();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// const wxFont & wxCalendarDateAttr::GetFont() const
	static int _bind_GetFont(lua_State *L) {
		if (!_lg_typecheck_GetFont(L)) {
			luaL_error(L, "luna typecheck failed in const wxFont & wxCalendarDateAttr::GetFont() const function, expected prototype:\nconst wxFont & wxCalendarDateAttr::GetFont() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCalendarDateAttr* self=(Luna< wxCalendarDateAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxFont & wxCalendarDateAttr::GetFont() const. Got : '%s'\n%s",typeid(Luna< wxCalendarDateAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxFont* lret = &self->GetFont();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}

	// const wxColour & wxCalendarDateAttr::GetTextColour() const
	static int _bind_GetTextColour(lua_State *L) {
		if (!_lg_typecheck_GetTextColour(L)) {
			luaL_error(L, "luna typecheck failed in const wxColour & wxCalendarDateAttr::GetTextColour() const function, expected prototype:\nconst wxColour & wxCalendarDateAttr::GetTextColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCalendarDateAttr* self=(Luna< wxCalendarDateAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxColour & wxCalendarDateAttr::GetTextColour() const. Got : '%s'\n%s",typeid(Luna< wxCalendarDateAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxColour* lret = &self->GetTextColour();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// bool wxCalendarDateAttr::HasBackgroundColour() const
	static int _bind_HasBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_HasBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in bool wxCalendarDateAttr::HasBackgroundColour() const function, expected prototype:\nbool wxCalendarDateAttr::HasBackgroundColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCalendarDateAttr* self=(Luna< wxCalendarDateAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxCalendarDateAttr::HasBackgroundColour() const. Got : '%s'\n%s",typeid(Luna< wxCalendarDateAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasBackgroundColour();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxCalendarDateAttr::HasBorder() const
	static int _bind_HasBorder(lua_State *L) {
		if (!_lg_typecheck_HasBorder(L)) {
			luaL_error(L, "luna typecheck failed in bool wxCalendarDateAttr::HasBorder() const function, expected prototype:\nbool wxCalendarDateAttr::HasBorder() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCalendarDateAttr* self=(Luna< wxCalendarDateAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxCalendarDateAttr::HasBorder() const. Got : '%s'\n%s",typeid(Luna< wxCalendarDateAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasBorder();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxCalendarDateAttr::HasBorderColour() const
	static int _bind_HasBorderColour(lua_State *L) {
		if (!_lg_typecheck_HasBorderColour(L)) {
			luaL_error(L, "luna typecheck failed in bool wxCalendarDateAttr::HasBorderColour() const function, expected prototype:\nbool wxCalendarDateAttr::HasBorderColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCalendarDateAttr* self=(Luna< wxCalendarDateAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxCalendarDateAttr::HasBorderColour() const. Got : '%s'\n%s",typeid(Luna< wxCalendarDateAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasBorderColour();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxCalendarDateAttr::HasFont() const
	static int _bind_HasFont(lua_State *L) {
		if (!_lg_typecheck_HasFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxCalendarDateAttr::HasFont() const function, expected prototype:\nbool wxCalendarDateAttr::HasFont() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCalendarDateAttr* self=(Luna< wxCalendarDateAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxCalendarDateAttr::HasFont() const. Got : '%s'\n%s",typeid(Luna< wxCalendarDateAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasFont();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxCalendarDateAttr::HasTextColour() const
	static int _bind_HasTextColour(lua_State *L) {
		if (!_lg_typecheck_HasTextColour(L)) {
			luaL_error(L, "luna typecheck failed in bool wxCalendarDateAttr::HasTextColour() const function, expected prototype:\nbool wxCalendarDateAttr::HasTextColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCalendarDateAttr* self=(Luna< wxCalendarDateAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxCalendarDateAttr::HasTextColour() const. Got : '%s'\n%s",typeid(Luna< wxCalendarDateAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasTextColour();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxCalendarDateAttr::IsHoliday() const
	static int _bind_IsHoliday(lua_State *L) {
		if (!_lg_typecheck_IsHoliday(L)) {
			luaL_error(L, "luna typecheck failed in bool wxCalendarDateAttr::IsHoliday() const function, expected prototype:\nbool wxCalendarDateAttr::IsHoliday() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCalendarDateAttr* self=(Luna< wxCalendarDateAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxCalendarDateAttr::IsHoliday() const. Got : '%s'\n%s",typeid(Luna< wxCalendarDateAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsHoliday();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxCalendarDateAttr::SetBackgroundColour(const wxColour & colBack)
	static int _bind_SetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxCalendarDateAttr::SetBackgroundColour(const wxColour & colBack) function, expected prototype:\nvoid wxCalendarDateAttr::SetBackgroundColour(const wxColour & colBack)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colBack_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colBack_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colBack in wxCalendarDateAttr::SetBackgroundColour function");
		}
		const wxColour & colBack=*colBack_ptr;

		wxCalendarDateAttr* self=(Luna< wxCalendarDateAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCalendarDateAttr::SetBackgroundColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxCalendarDateAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBackgroundColour(colBack);

		return 0;
	}

	// void wxCalendarDateAttr::SetBorder(wxCalendarDateBorder border)
	static int _bind_SetBorder(lua_State *L) {
		if (!_lg_typecheck_SetBorder(L)) {
			luaL_error(L, "luna typecheck failed in void wxCalendarDateAttr::SetBorder(wxCalendarDateBorder border) function, expected prototype:\nvoid wxCalendarDateAttr::SetBorder(wxCalendarDateBorder border)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCalendarDateBorder border=(wxCalendarDateBorder)lua_tointeger(L,2);

		wxCalendarDateAttr* self=(Luna< wxCalendarDateAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCalendarDateAttr::SetBorder(wxCalendarDateBorder). Got : '%s'\n%s",typeid(Luna< wxCalendarDateAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBorder(border);

		return 0;
	}

	// void wxCalendarDateAttr::SetBorderColour(const wxColour & col)
	static int _bind_SetBorderColour(lua_State *L) {
		if (!_lg_typecheck_SetBorderColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxCalendarDateAttr::SetBorderColour(const wxColour & col) function, expected prototype:\nvoid wxCalendarDateAttr::SetBorderColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* col_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxCalendarDateAttr::SetBorderColour function");
		}
		const wxColour & col=*col_ptr;

		wxCalendarDateAttr* self=(Luna< wxCalendarDateAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCalendarDateAttr::SetBorderColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxCalendarDateAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBorderColour(col);

		return 0;
	}

	// void wxCalendarDateAttr::SetFont(const wxFont & font)
	static int _bind_SetFont(lua_State *L) {
		if (!_lg_typecheck_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxCalendarDateAttr::SetFont(const wxFont & font) function, expected prototype:\nvoid wxCalendarDateAttr::SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxCalendarDateAttr::SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxCalendarDateAttr* self=(Luna< wxCalendarDateAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCalendarDateAttr::SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxCalendarDateAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFont(font);

		return 0;
	}

	// void wxCalendarDateAttr::SetHoliday(bool holiday)
	static int _bind_SetHoliday(lua_State *L) {
		if (!_lg_typecheck_SetHoliday(L)) {
			luaL_error(L, "luna typecheck failed in void wxCalendarDateAttr::SetHoliday(bool holiday) function, expected prototype:\nvoid wxCalendarDateAttr::SetHoliday(bool holiday)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool holiday=(bool)(lua_toboolean(L,2)==1);

		wxCalendarDateAttr* self=(Luna< wxCalendarDateAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCalendarDateAttr::SetHoliday(bool). Got : '%s'\n%s",typeid(Luna< wxCalendarDateAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetHoliday(holiday);

		return 0;
	}

	// void wxCalendarDateAttr::SetTextColour(const wxColour & colText)
	static int _bind_SetTextColour(lua_State *L) {
		if (!_lg_typecheck_SetTextColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxCalendarDateAttr::SetTextColour(const wxColour & colText) function, expected prototype:\nvoid wxCalendarDateAttr::SetTextColour(const wxColour & colText)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colText_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colText_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colText in wxCalendarDateAttr::SetTextColour function");
		}
		const wxColour & colText=*colText_ptr;

		wxCalendarDateAttr* self=(Luna< wxCalendarDateAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCalendarDateAttr::SetTextColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxCalendarDateAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTextColour(colText);

		return 0;
	}

	// static const wxCalendarDateAttr & wxCalendarDateAttr::GetMark()
	static int _bind_GetMark(lua_State *L) {
		if (!_lg_typecheck_GetMark(L)) {
			luaL_error(L, "luna typecheck failed in static const wxCalendarDateAttr & wxCalendarDateAttr::GetMark() function, expected prototype:\nstatic const wxCalendarDateAttr & wxCalendarDateAttr::GetMark()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		const wxCalendarDateAttr* lret = &wxCalendarDateAttr::GetMark();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxCalendarDateAttr >::push(L,lret,false);

		return 1;
	}

	// static void wxCalendarDateAttr::SetMark(wxCalendarDateAttr const & m)
	static int _bind_SetMark(lua_State *L) {
		if (!_lg_typecheck_SetMark(L)) {
			luaL_error(L, "luna typecheck failed in static void wxCalendarDateAttr::SetMark(wxCalendarDateAttr const & m) function, expected prototype:\nstatic void wxCalendarDateAttr::SetMark(wxCalendarDateAttr const & m)\nClass arguments details:\narg 1 ID = 34465170\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCalendarDateAttr* m_ptr=(Luna< wxCalendarDateAttr >::check(L,1));
		if( !m_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m in wxCalendarDateAttr::SetMark function");
		}
		wxCalendarDateAttr const & m=*m_ptr;

		wxCalendarDateAttr::SetMark(m);

		return 0;
	}


	// Operator binds:

};

wxCalendarDateAttr* LunaTraits< wxCalendarDateAttr >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxCalendarDateAttr::_bind_ctor(L);
}

void LunaTraits< wxCalendarDateAttr >::_bind_dtor(wxCalendarDateAttr* obj) {
	delete obj;
}

const char LunaTraits< wxCalendarDateAttr >::className[] = "wxCalendarDateAttr";
const char LunaTraits< wxCalendarDateAttr >::fullName[] = "wxCalendarDateAttr";
const char LunaTraits< wxCalendarDateAttr >::moduleName[] = "wx";
const char* LunaTraits< wxCalendarDateAttr >::parents[] = {0};
const int LunaTraits< wxCalendarDateAttr >::hash = 34465170;
const int LunaTraits< wxCalendarDateAttr >::uniqueIDs[] = {34465170,0};

luna_RegType LunaTraits< wxCalendarDateAttr >::methods[] = {
	{"GetBackgroundColour", &luna_wrapper_wxCalendarDateAttr::_bind_GetBackgroundColour},
	{"GetBorder", &luna_wrapper_wxCalendarDateAttr::_bind_GetBorder},
	{"GetBorderColour", &luna_wrapper_wxCalendarDateAttr::_bind_GetBorderColour},
	{"GetFont", &luna_wrapper_wxCalendarDateAttr::_bind_GetFont},
	{"GetTextColour", &luna_wrapper_wxCalendarDateAttr::_bind_GetTextColour},
	{"HasBackgroundColour", &luna_wrapper_wxCalendarDateAttr::_bind_HasBackgroundColour},
	{"HasBorder", &luna_wrapper_wxCalendarDateAttr::_bind_HasBorder},
	{"HasBorderColour", &luna_wrapper_wxCalendarDateAttr::_bind_HasBorderColour},
	{"HasFont", &luna_wrapper_wxCalendarDateAttr::_bind_HasFont},
	{"HasTextColour", &luna_wrapper_wxCalendarDateAttr::_bind_HasTextColour},
	{"IsHoliday", &luna_wrapper_wxCalendarDateAttr::_bind_IsHoliday},
	{"SetBackgroundColour", &luna_wrapper_wxCalendarDateAttr::_bind_SetBackgroundColour},
	{"SetBorder", &luna_wrapper_wxCalendarDateAttr::_bind_SetBorder},
	{"SetBorderColour", &luna_wrapper_wxCalendarDateAttr::_bind_SetBorderColour},
	{"SetFont", &luna_wrapper_wxCalendarDateAttr::_bind_SetFont},
	{"SetHoliday", &luna_wrapper_wxCalendarDateAttr::_bind_SetHoliday},
	{"SetTextColour", &luna_wrapper_wxCalendarDateAttr::_bind_SetTextColour},
	{"GetMark", &luna_wrapper_wxCalendarDateAttr::_bind_GetMark},
	{"SetMark", &luna_wrapper_wxCalendarDateAttr::_bind_SetMark},
	{"dynCast", &luna_wrapper_wxCalendarDateAttr::_bind_dynCast},
	{"__eq", &luna_wrapper_wxCalendarDateAttr::_bind___eq},
	{"fromVoid", &luna_wrapper_wxCalendarDateAttr::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxCalendarDateAttr::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxCalendarDateAttr >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxCalendarDateAttr >::enumValues[] = {
	{0,0}
};


