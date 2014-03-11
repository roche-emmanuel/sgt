#include <plug_common.h>

class luna_wrapper_wxGridCellAttr {
public:
	typedef Luna< wxGridCellAttr > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25758569) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxGridCellAttr*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxGridCellAttr* rhs =(Luna< wxGridCellAttr >::check(L,2));
		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
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

		wxGridCellAttr* self= (wxGridCellAttr*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGridCellAttr >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25758569) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxGridCellAttr >::check(L,1));
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

		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxGridCellAttr");
		
		return luna_dynamicCast(L,converters,"wxGridCellAttr",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,25758569)) ) return false;
		if( luatop>0 && (lua_isnil(L,1)==0 && !(Luna< wxGridCellAttr >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxFont >(L,3))) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DecRef(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAlignment(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEditor(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNonDefaultAlignment(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRenderer(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTextColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasEditor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasRenderer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasTextColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IncRef(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsReadOnly(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAlignment(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDefAttr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,25758569)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetEditor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,53399133)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetReadOnly(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRenderer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,96062845)) ) return false;
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
	// wxGridCellAttr::wxGridCellAttr(wxGridCellAttr * attrDefault = NULL)
	static wxGridCellAttr* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellAttr::wxGridCellAttr(wxGridCellAttr * attrDefault = NULL) function, expected prototype:\nwxGridCellAttr::wxGridCellAttr(wxGridCellAttr * attrDefault = NULL)\nClass arguments details:\narg 1 ID = 25758569\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxGridCellAttr* attrDefault=luatop>0 ? (Luna< wxGridCellAttr >::check(L,1)) : (wxGridCellAttr*)NULL;

		return new wxGridCellAttr(attrDefault);
	}

	// wxGridCellAttr::wxGridCellAttr(const wxColour & colText, const wxColour & colBack, const wxFont & font, int hAlign, int vAlign)
	static wxGridCellAttr* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellAttr::wxGridCellAttr(const wxColour & colText, const wxColour & colBack, const wxFont & font, int hAlign, int vAlign) function, expected prototype:\nwxGridCellAttr::wxGridCellAttr(const wxColour & colText, const wxColour & colBack, const wxFont & font, int hAlign, int vAlign)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colText_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,1));
		if( !colText_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colText in wxGridCellAttr::wxGridCellAttr function");
		}
		const wxColour & colText=*colText_ptr;
		const wxColour* colBack_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colBack_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colBack in wxGridCellAttr::wxGridCellAttr function");
		}
		const wxColour & colBack=*colBack_ptr;
		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,3));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxGridCellAttr::wxGridCellAttr function");
		}
		const wxFont & font=*font_ptr;
		int hAlign=(int)lua_tointeger(L,4);
		int vAlign=(int)lua_tointeger(L,5);

		return new wxGridCellAttr(colText, colBack, font, hAlign, vAlign);
	}

	// Overload binder for wxGridCellAttr::wxGridCellAttr
	static wxGridCellAttr* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxGridCellAttr, cannot match any of the overloads for function wxGridCellAttr:\n  wxGridCellAttr(wxGridCellAttr *)\n  wxGridCellAttr(const wxColour &, const wxColour &, const wxFont &, int, int)\n");
		return NULL;
	}


	// Function binds:
	// wxGridCellAttr * wxGridCellAttr::Clone() const
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellAttr * wxGridCellAttr::Clone() const function, expected prototype:\nwxGridCellAttr * wxGridCellAttr::Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellAttr * wxGridCellAttr::Clone() const. Got : '%s'\n%s",typeid(Luna< wxGridCellAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellAttr * lret = self->Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellAttr >::push(L,lret,false);

		return 1;
	}

	// void wxGridCellAttr::DecRef()
	static int _bind_DecRef(lua_State *L) {
		if (!_lg_typecheck_DecRef(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellAttr::DecRef() function, expected prototype:\nvoid wxGridCellAttr::DecRef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellAttr::DecRef(). Got : '%s'\n%s",typeid(Luna< wxGridCellAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DecRef();

		return 0;
	}

	// void wxGridCellAttr::GetAlignment(int * hAlign, int * vAlign) const
	static int _bind_GetAlignment(lua_State *L) {
		if (!_lg_typecheck_GetAlignment(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellAttr::GetAlignment(int * hAlign, int * vAlign) const function, expected prototype:\nvoid wxGridCellAttr::GetAlignment(int * hAlign, int * vAlign) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int* hAlign=(int*)Luna< void >::check(L,2);
		int* vAlign=(int*)Luna< void >::check(L,3);

		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellAttr::GetAlignment(int *, int *) const. Got : '%s'\n%s",typeid(Luna< wxGridCellAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetAlignment(hAlign, vAlign);

		return 0;
	}

	// const wxColour & wxGridCellAttr::GetBackgroundColour() const
	static int _bind_GetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in const wxColour & wxGridCellAttr::GetBackgroundColour() const function, expected prototype:\nconst wxColour & wxGridCellAttr::GetBackgroundColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxColour & wxGridCellAttr::GetBackgroundColour() const. Got : '%s'\n%s",typeid(Luna< wxGridCellAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxColour* lret = &self->GetBackgroundColour();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// wxGridCellEditor * wxGridCellAttr::GetEditor(const wxGrid * grid, int row, int col) const
	static int _bind_GetEditor(lua_State *L) {
		if (!_lg_typecheck_GetEditor(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellEditor * wxGridCellAttr::GetEditor(const wxGrid * grid, int row, int col) const function, expected prototype:\nwxGridCellEditor * wxGridCellAttr::GetEditor(const wxGrid * grid, int row, int col) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGrid* grid=(Luna< wxObject >::checkSubType< wxGrid >(L,2));
		int row=(int)lua_tointeger(L,3);
		int col=(int)lua_tointeger(L,4);

		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellEditor * wxGridCellAttr::GetEditor(const wxGrid *, int, int) const. Got : '%s'\n%s",typeid(Luna< wxGridCellAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellEditor * lret = self->GetEditor(grid, row, col);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellEditor >::push(L,lret,false);

		return 1;
	}

	// const wxFont & wxGridCellAttr::GetFont() const
	static int _bind_GetFont(lua_State *L) {
		if (!_lg_typecheck_GetFont(L)) {
			luaL_error(L, "luna typecheck failed in const wxFont & wxGridCellAttr::GetFont() const function, expected prototype:\nconst wxFont & wxGridCellAttr::GetFont() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxFont & wxGridCellAttr::GetFont() const. Got : '%s'\n%s",typeid(Luna< wxGridCellAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxFont* lret = &self->GetFont();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}

	// void wxGridCellAttr::GetNonDefaultAlignment(int * hAlign, int * vAlign) const
	static int _bind_GetNonDefaultAlignment(lua_State *L) {
		if (!_lg_typecheck_GetNonDefaultAlignment(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellAttr::GetNonDefaultAlignment(int * hAlign, int * vAlign) const function, expected prototype:\nvoid wxGridCellAttr::GetNonDefaultAlignment(int * hAlign, int * vAlign) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int* hAlign=(int*)Luna< void >::check(L,2);
		int* vAlign=(int*)Luna< void >::check(L,3);

		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellAttr::GetNonDefaultAlignment(int *, int *) const. Got : '%s'\n%s",typeid(Luna< wxGridCellAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetNonDefaultAlignment(hAlign, vAlign);

		return 0;
	}

	// wxGridCellRenderer * wxGridCellAttr::GetRenderer(const wxGrid * grid, int row, int col) const
	static int _bind_GetRenderer(lua_State *L) {
		if (!_lg_typecheck_GetRenderer(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellRenderer * wxGridCellAttr::GetRenderer(const wxGrid * grid, int row, int col) const function, expected prototype:\nwxGridCellRenderer * wxGridCellAttr::GetRenderer(const wxGrid * grid, int row, int col) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGrid* grid=(Luna< wxObject >::checkSubType< wxGrid >(L,2));
		int row=(int)lua_tointeger(L,3);
		int col=(int)lua_tointeger(L,4);

		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellRenderer * wxGridCellAttr::GetRenderer(const wxGrid *, int, int) const. Got : '%s'\n%s",typeid(Luna< wxGridCellAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellRenderer * lret = self->GetRenderer(grid, row, col);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellRenderer >::push(L,lret,false);

		return 1;
	}

	// const wxColour & wxGridCellAttr::GetTextColour() const
	static int _bind_GetTextColour(lua_State *L) {
		if (!_lg_typecheck_GetTextColour(L)) {
			luaL_error(L, "luna typecheck failed in const wxColour & wxGridCellAttr::GetTextColour() const function, expected prototype:\nconst wxColour & wxGridCellAttr::GetTextColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxColour & wxGridCellAttr::GetTextColour() const. Got : '%s'\n%s",typeid(Luna< wxGridCellAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxColour* lret = &self->GetTextColour();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// bool wxGridCellAttr::HasAlignment() const
	static int _bind_HasAlignment(lua_State *L) {
		if (!_lg_typecheck_HasAlignment(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridCellAttr::HasAlignment() const function, expected prototype:\nbool wxGridCellAttr::HasAlignment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridCellAttr::HasAlignment() const. Got : '%s'\n%s",typeid(Luna< wxGridCellAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasAlignment();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridCellAttr::HasBackgroundColour() const
	static int _bind_HasBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_HasBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridCellAttr::HasBackgroundColour() const function, expected prototype:\nbool wxGridCellAttr::HasBackgroundColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridCellAttr::HasBackgroundColour() const. Got : '%s'\n%s",typeid(Luna< wxGridCellAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasBackgroundColour();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridCellAttr::HasEditor() const
	static int _bind_HasEditor(lua_State *L) {
		if (!_lg_typecheck_HasEditor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridCellAttr::HasEditor() const function, expected prototype:\nbool wxGridCellAttr::HasEditor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridCellAttr::HasEditor() const. Got : '%s'\n%s",typeid(Luna< wxGridCellAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasEditor();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridCellAttr::HasFont() const
	static int _bind_HasFont(lua_State *L) {
		if (!_lg_typecheck_HasFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridCellAttr::HasFont() const function, expected prototype:\nbool wxGridCellAttr::HasFont() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridCellAttr::HasFont() const. Got : '%s'\n%s",typeid(Luna< wxGridCellAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasFont();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridCellAttr::HasRenderer() const
	static int _bind_HasRenderer(lua_State *L) {
		if (!_lg_typecheck_HasRenderer(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridCellAttr::HasRenderer() const function, expected prototype:\nbool wxGridCellAttr::HasRenderer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridCellAttr::HasRenderer() const. Got : '%s'\n%s",typeid(Luna< wxGridCellAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasRenderer();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridCellAttr::HasTextColour() const
	static int _bind_HasTextColour(lua_State *L) {
		if (!_lg_typecheck_HasTextColour(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridCellAttr::HasTextColour() const function, expected prototype:\nbool wxGridCellAttr::HasTextColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridCellAttr::HasTextColour() const. Got : '%s'\n%s",typeid(Luna< wxGridCellAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasTextColour();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGridCellAttr::IncRef()
	static int _bind_IncRef(lua_State *L) {
		if (!_lg_typecheck_IncRef(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellAttr::IncRef() function, expected prototype:\nvoid wxGridCellAttr::IncRef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellAttr::IncRef(). Got : '%s'\n%s",typeid(Luna< wxGridCellAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IncRef();

		return 0;
	}

	// bool wxGridCellAttr::IsReadOnly() const
	static int _bind_IsReadOnly(lua_State *L) {
		if (!_lg_typecheck_IsReadOnly(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridCellAttr::IsReadOnly() const function, expected prototype:\nbool wxGridCellAttr::IsReadOnly() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridCellAttr::IsReadOnly() const. Got : '%s'\n%s",typeid(Luna< wxGridCellAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsReadOnly();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGridCellAttr::SetAlignment(int hAlign, int vAlign)
	static int _bind_SetAlignment(lua_State *L) {
		if (!_lg_typecheck_SetAlignment(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellAttr::SetAlignment(int hAlign, int vAlign) function, expected prototype:\nvoid wxGridCellAttr::SetAlignment(int hAlign, int vAlign)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hAlign=(int)lua_tointeger(L,2);
		int vAlign=(int)lua_tointeger(L,3);

		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellAttr::SetAlignment(int, int). Got : '%s'\n%s",typeid(Luna< wxGridCellAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAlignment(hAlign, vAlign);

		return 0;
	}

	// void wxGridCellAttr::SetBackgroundColour(const wxColour & colBack)
	static int _bind_SetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellAttr::SetBackgroundColour(const wxColour & colBack) function, expected prototype:\nvoid wxGridCellAttr::SetBackgroundColour(const wxColour & colBack)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colBack_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colBack_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colBack in wxGridCellAttr::SetBackgroundColour function");
		}
		const wxColour & colBack=*colBack_ptr;

		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellAttr::SetBackgroundColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxGridCellAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBackgroundColour(colBack);

		return 0;
	}

	// void wxGridCellAttr::SetDefAttr(wxGridCellAttr * defAttr)
	static int _bind_SetDefAttr(lua_State *L) {
		if (!_lg_typecheck_SetDefAttr(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellAttr::SetDefAttr(wxGridCellAttr * defAttr) function, expected prototype:\nvoid wxGridCellAttr::SetDefAttr(wxGridCellAttr * defAttr)\nClass arguments details:\narg 1 ID = 25758569\n\n%s",luna_dumpStack(L).c_str());
		}

		wxGridCellAttr* defAttr=(Luna< wxGridCellAttr >::check(L,2));

		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellAttr::SetDefAttr(wxGridCellAttr *). Got : '%s'\n%s",typeid(Luna< wxGridCellAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDefAttr(defAttr);

		return 0;
	}

	// void wxGridCellAttr::SetEditor(wxGridCellEditor * editor)
	static int _bind_SetEditor(lua_State *L) {
		if (!_lg_typecheck_SetEditor(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellAttr::SetEditor(wxGridCellEditor * editor) function, expected prototype:\nvoid wxGridCellAttr::SetEditor(wxGridCellEditor * editor)\nClass arguments details:\narg 1 ID = 53399133\n\n%s",luna_dumpStack(L).c_str());
		}

		wxGridCellEditor* editor=(Luna< wxGridCellEditor >::check(L,2));

		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellAttr::SetEditor(wxGridCellEditor *). Got : '%s'\n%s",typeid(Luna< wxGridCellAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetEditor(editor);

		return 0;
	}

	// void wxGridCellAttr::SetFont(const wxFont & font)
	static int _bind_SetFont(lua_State *L) {
		if (!_lg_typecheck_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellAttr::SetFont(const wxFont & font) function, expected prototype:\nvoid wxGridCellAttr::SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxGridCellAttr::SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellAttr::SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxGridCellAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFont(font);

		return 0;
	}

	// void wxGridCellAttr::SetReadOnly(bool isReadOnly = true)
	static int _bind_SetReadOnly(lua_State *L) {
		if (!_lg_typecheck_SetReadOnly(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellAttr::SetReadOnly(bool isReadOnly = true) function, expected prototype:\nvoid wxGridCellAttr::SetReadOnly(bool isReadOnly = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool isReadOnly=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellAttr::SetReadOnly(bool). Got : '%s'\n%s",typeid(Luna< wxGridCellAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetReadOnly(isReadOnly);

		return 0;
	}

	// void wxGridCellAttr::SetRenderer(wxGridCellRenderer * renderer)
	static int _bind_SetRenderer(lua_State *L) {
		if (!_lg_typecheck_SetRenderer(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellAttr::SetRenderer(wxGridCellRenderer * renderer) function, expected prototype:\nvoid wxGridCellAttr::SetRenderer(wxGridCellRenderer * renderer)\nClass arguments details:\narg 1 ID = 96062845\n\n%s",luna_dumpStack(L).c_str());
		}

		wxGridCellRenderer* renderer=(Luna< wxGridCellRenderer >::check(L,2));

		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellAttr::SetRenderer(wxGridCellRenderer *). Got : '%s'\n%s",typeid(Luna< wxGridCellAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRenderer(renderer);

		return 0;
	}

	// void wxGridCellAttr::SetTextColour(const wxColour & colText)
	static int _bind_SetTextColour(lua_State *L) {
		if (!_lg_typecheck_SetTextColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellAttr::SetTextColour(const wxColour & colText) function, expected prototype:\nvoid wxGridCellAttr::SetTextColour(const wxColour & colText)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colText_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colText_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colText in wxGridCellAttr::SetTextColour function");
		}
		const wxColour & colText=*colText_ptr;

		wxGridCellAttr* self=(Luna< wxGridCellAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellAttr::SetTextColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxGridCellAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTextColour(colText);

		return 0;
	}


	// Operator binds:

};

wxGridCellAttr* LunaTraits< wxGridCellAttr >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGridCellAttr::_bind_ctor(L);
}

void LunaTraits< wxGridCellAttr >::_bind_dtor(wxGridCellAttr* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< wxGridCellAttr >::className[] = "wxGridCellAttr";
const char LunaTraits< wxGridCellAttr >::fullName[] = "wxGridCellAttr";
const char LunaTraits< wxGridCellAttr >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellAttr >::parents[] = {0};
const int LunaTraits< wxGridCellAttr >::hash = 25758569;
const int LunaTraits< wxGridCellAttr >::uniqueIDs[] = {25758569,0};

luna_RegType LunaTraits< wxGridCellAttr >::methods[] = {
	{"Clone", &luna_wrapper_wxGridCellAttr::_bind_Clone},
	{"DecRef", &luna_wrapper_wxGridCellAttr::_bind_DecRef},
	{"GetAlignment", &luna_wrapper_wxGridCellAttr::_bind_GetAlignment},
	{"GetBackgroundColour", &luna_wrapper_wxGridCellAttr::_bind_GetBackgroundColour},
	{"GetEditor", &luna_wrapper_wxGridCellAttr::_bind_GetEditor},
	{"GetFont", &luna_wrapper_wxGridCellAttr::_bind_GetFont},
	{"GetNonDefaultAlignment", &luna_wrapper_wxGridCellAttr::_bind_GetNonDefaultAlignment},
	{"GetRenderer", &luna_wrapper_wxGridCellAttr::_bind_GetRenderer},
	{"GetTextColour", &luna_wrapper_wxGridCellAttr::_bind_GetTextColour},
	{"HasAlignment", &luna_wrapper_wxGridCellAttr::_bind_HasAlignment},
	{"HasBackgroundColour", &luna_wrapper_wxGridCellAttr::_bind_HasBackgroundColour},
	{"HasEditor", &luna_wrapper_wxGridCellAttr::_bind_HasEditor},
	{"HasFont", &luna_wrapper_wxGridCellAttr::_bind_HasFont},
	{"HasRenderer", &luna_wrapper_wxGridCellAttr::_bind_HasRenderer},
	{"HasTextColour", &luna_wrapper_wxGridCellAttr::_bind_HasTextColour},
	{"IncRef", &luna_wrapper_wxGridCellAttr::_bind_IncRef},
	{"IsReadOnly", &luna_wrapper_wxGridCellAttr::_bind_IsReadOnly},
	{"SetAlignment", &luna_wrapper_wxGridCellAttr::_bind_SetAlignment},
	{"SetBackgroundColour", &luna_wrapper_wxGridCellAttr::_bind_SetBackgroundColour},
	{"SetDefAttr", &luna_wrapper_wxGridCellAttr::_bind_SetDefAttr},
	{"SetEditor", &luna_wrapper_wxGridCellAttr::_bind_SetEditor},
	{"SetFont", &luna_wrapper_wxGridCellAttr::_bind_SetFont},
	{"SetReadOnly", &luna_wrapper_wxGridCellAttr::_bind_SetReadOnly},
	{"SetRenderer", &luna_wrapper_wxGridCellAttr::_bind_SetRenderer},
	{"SetTextColour", &luna_wrapper_wxGridCellAttr::_bind_SetTextColour},
	{"dynCast", &luna_wrapper_wxGridCellAttr::_bind_dynCast},
	{"__eq", &luna_wrapper_wxGridCellAttr::_bind___eq},
	{"fromVoid", &luna_wrapper_wxGridCellAttr::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGridCellAttr::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellAttr >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellAttr >::enumValues[] = {
	{"Any", wxGridCellAttr::Any},
	{"Cell", wxGridCellAttr::Cell},
	{"Row", wxGridCellAttr::Row},
	{"Col", wxGridCellAttr::Col},
	{0,0}
};


