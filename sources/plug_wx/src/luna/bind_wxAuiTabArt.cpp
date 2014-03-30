#include <plug_common.h>

#include <luna/wrappers/wrapper_wxAuiTabArt.h>

class luna_wrapper_wxAuiTabArt {
public:
	typedef Luna< wxAuiTabArt > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxAuiTabArt* self=(Luna< wxAuiTabArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxAuiTabArt,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,24264105) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxAuiTabArt*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxAuiTabArt* rhs =(Luna< wxAuiTabArt >::check(L,2));
		wxAuiTabArt* self=(Luna< wxAuiTabArt >::check(L,1));
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

		wxAuiTabArt* self= (wxAuiTabArt*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxAuiTabArt >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,24264105) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxAuiTabArt >::check(L,1));
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

		wxAuiTabArt* self=(Luna< wxAuiTabArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxAuiTabArt");
		
		return luna_dynamicCast(L,converters,"wxAuiTabArt",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DrawBackground(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawButton(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,20234418)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawTab(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,43006525) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20234418) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,20234418)) ) return false;
		if( (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,20234418)) ) return false;
		if( (lua_isnil(L,9)==0 && !Luna<void>::has_uniqueid(L,9,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBestTabCtrlSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,39809356) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetIndentSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTabSize(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMeasuringFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNormalFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelectedFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetActiveColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSizingInfo(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowDropDown(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,39809356) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxAuiTabArt::wxAuiTabArt(lua_Table * data)
	static wxAuiTabArt* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiTabArt::wxAuiTabArt(lua_Table * data) function, expected prototype:\nwxAuiTabArt::wxAuiTabArt(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxAuiTabArt(L,NULL);
	}


	// Function binds:
	// wxAuiTabArt * wxAuiTabArt::Clone()
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiTabArt * wxAuiTabArt::Clone() function, expected prototype:\nwxAuiTabArt * wxAuiTabArt::Clone()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiTabArt* self=(Luna< wxAuiTabArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiTabArt * wxAuiTabArt::Clone(). Got : '%s'\n%s",typeid(Luna< wxAuiTabArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxAuiTabArt * lret = self->Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiTabArt >::push(L,lret,false);

		return 1;
	}

	// void wxAuiTabArt::DrawBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	static int _bind_DrawBackground(lua_State *L) {
		if (!_lg_typecheck_DrawBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiTabArt::DrawBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect) function, expected prototype:\nvoid wxAuiTabArt::DrawBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiTabArt::DrawBackground function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiTabArt::DrawBackground function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiTabArt* self=(Luna< wxAuiTabArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiTabArt::DrawBackground(wxDC &, wxWindow *, const wxRect &). Got : '%s'\n%s",typeid(Luna< wxAuiTabArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawBackground(dc, wnd, rect);

		return 0;
	}

	// void wxAuiTabArt::DrawButton(wxDC & dc, wxWindow * wnd, const wxRect & in_rect, int bitmap_id, int button_state, int orientation, wxRect * out_rect)
	static int _bind_DrawButton(lua_State *L) {
		if (!_lg_typecheck_DrawButton(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiTabArt::DrawButton(wxDC & dc, wxWindow * wnd, const wxRect & in_rect, int bitmap_id, int button_state, int orientation, wxRect * out_rect) function, expected prototype:\nvoid wxAuiTabArt::DrawButton(wxDC & dc, wxWindow * wnd, const wxRect & in_rect, int bitmap_id, int button_state, int orientation, wxRect * out_rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\narg 7 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiTabArt::DrawButton function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxRect* in_rect_ptr=(Luna< wxRect >::check(L,4));
		if( !in_rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg in_rect in wxAuiTabArt::DrawButton function");
		}
		const wxRect & in_rect=*in_rect_ptr;
		int bitmap_id=(int)lua_tointeger(L,5);
		int button_state=(int)lua_tointeger(L,6);
		int orientation=(int)lua_tointeger(L,7);
		wxRect* out_rect=(Luna< wxRect >::check(L,8));

		wxAuiTabArt* self=(Luna< wxAuiTabArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiTabArt::DrawButton(wxDC &, wxWindow *, const wxRect &, int, int, int, wxRect *). Got : '%s'\n%s",typeid(Luna< wxAuiTabArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawButton(dc, wnd, in_rect, bitmap_id, button_state, orientation, out_rect);

		return 0;
	}

	// void wxAuiTabArt::DrawTab(wxDC & dc, wxWindow * wnd, const wxAuiNotebookPage & page, const wxRect & rect, int close_button_state, wxRect * out_tab_rect, wxRect * out_button_rect, int * x_extent)
	static int _bind_DrawTab(lua_State *L) {
		if (!_lg_typecheck_DrawTab(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiTabArt::DrawTab(wxDC & dc, wxWindow * wnd, const wxAuiNotebookPage & page, const wxRect & rect, int close_button_state, wxRect * out_tab_rect, wxRect * out_button_rect, int * x_extent) function, expected prototype:\nvoid wxAuiTabArt::DrawTab(wxDC & dc, wxWindow * wnd, const wxAuiNotebookPage & page, const wxRect & rect, int close_button_state, wxRect * out_tab_rect, wxRect * out_button_rect, int * x_extent)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 43006525\narg 4 ID = 20234418\narg 6 ID = 20234418\narg 7 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiTabArt::DrawTab function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxAuiNotebookPage* page_ptr=(Luna< wxAuiNotebookPage >::check(L,4));
		if( !page_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg page in wxAuiTabArt::DrawTab function");
		}
		const wxAuiNotebookPage & page=*page_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,5));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiTabArt::DrawTab function");
		}
		const wxRect & rect=*rect_ptr;
		int close_button_state=(int)lua_tointeger(L,6);
		wxRect* out_tab_rect=(Luna< wxRect >::check(L,7));
		wxRect* out_button_rect=(Luna< wxRect >::check(L,8));
		int* x_extent=(int*)Luna< void >::check(L,9);

		wxAuiTabArt* self=(Luna< wxAuiTabArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiTabArt::DrawTab(wxDC &, wxWindow *, const wxAuiNotebookPage &, const wxRect &, int, wxRect *, wxRect *, int *). Got : '%s'\n%s",typeid(Luna< wxAuiTabArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawTab(dc, wnd, page, rect, close_button_state, out_tab_rect, out_button_rect, x_extent);

		return 0;
	}

	// int wxAuiTabArt::GetBestTabCtrlSize(wxWindow * arg1, const wxAuiNotebookPageArray & arg2, const wxSize & arg3)
	static int _bind_GetBestTabCtrlSize(lua_State *L) {
		if (!_lg_typecheck_GetBestTabCtrlSize(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiTabArt::GetBestTabCtrlSize(wxWindow * arg1, const wxAuiNotebookPageArray & arg2, const wxSize & arg3) function, expected prototype:\nint wxAuiTabArt::GetBestTabCtrlSize(wxWindow * arg1, const wxAuiNotebookPageArray & arg2, const wxSize & arg3)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 39809356\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* _arg1=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		const wxAuiNotebookPageArray* _arg2_ptr=(Luna< wxAuiNotebookPageArray >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in wxAuiTabArt::GetBestTabCtrlSize function");
		}
		const wxAuiNotebookPageArray & _arg2=*_arg2_ptr;
		const wxSize* _arg3_ptr=(Luna< wxSize >::check(L,4));
		if( !_arg3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg3 in wxAuiTabArt::GetBestTabCtrlSize function");
		}
		const wxSize & _arg3=*_arg3_ptr;

		wxAuiTabArt* self=(Luna< wxAuiTabArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiTabArt::GetBestTabCtrlSize(wxWindow *, const wxAuiNotebookPageArray &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxAuiTabArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetBestTabCtrlSize(_arg1, _arg2, _arg3);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxAuiTabArt::GetIndentSize()
	static int _bind_GetIndentSize(lua_State *L) {
		if (!_lg_typecheck_GetIndentSize(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiTabArt::GetIndentSize() function, expected prototype:\nint wxAuiTabArt::GetIndentSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiTabArt* self=(Luna< wxAuiTabArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiTabArt::GetIndentSize(). Got : '%s'\n%s",typeid(Luna< wxAuiTabArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetIndentSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSize wxAuiTabArt::GetTabSize(wxDC & dc, wxWindow * wnd, const wxString & caption, const wxBitmap & bitmap, bool active, int close_button_state, int * x_extent)
	static int _bind_GetTabSize(lua_State *L) {
		if (!_lg_typecheck_GetTabSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAuiTabArt::GetTabSize(wxDC & dc, wxWindow * wnd, const wxString & caption, const wxBitmap & bitmap, bool active, int close_button_state, int * x_extent) function, expected prototype:\nwxSize wxAuiTabArt::GetTabSize(wxDC & dc, wxWindow * wnd, const wxString & caption, const wxBitmap & bitmap, bool active, int close_button_state, int * x_extent)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiTabArt::GetTabSize function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		wxString caption(lua_tostring(L,4),lua_objlen(L,4));
		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,5));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAuiTabArt::GetTabSize function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		bool active=(bool)(lua_toboolean(L,6)==1);
		int close_button_state=(int)lua_tointeger(L,7);
		int* x_extent=(int*)Luna< void >::check(L,8);

		wxAuiTabArt* self=(Luna< wxAuiTabArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAuiTabArt::GetTabSize(wxDC &, wxWindow *, const wxString &, const wxBitmap &, bool, int, int *). Got : '%s'\n%s",typeid(Luna< wxAuiTabArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetTabSize(dc, wnd, caption, bitmap, active, close_button_state, x_extent);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxAuiTabArt::SetFlags(unsigned int flags)
	static int _bind_SetFlags(lua_State *L) {
		if (!_lg_typecheck_SetFlags(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiTabArt::SetFlags(unsigned int flags) function, expected prototype:\nvoid wxAuiTabArt::SetFlags(unsigned int flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int flags=(unsigned int)lua_tointeger(L,2);

		wxAuiTabArt* self=(Luna< wxAuiTabArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiTabArt::SetFlags(unsigned int). Got : '%s'\n%s",typeid(Luna< wxAuiTabArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFlags(flags);

		return 0;
	}

	// void wxAuiTabArt::SetMeasuringFont(const wxFont & font)
	static int _bind_SetMeasuringFont(lua_State *L) {
		if (!_lg_typecheck_SetMeasuringFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiTabArt::SetMeasuringFont(const wxFont & font) function, expected prototype:\nvoid wxAuiTabArt::SetMeasuringFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxAuiTabArt::SetMeasuringFont function");
		}
		const wxFont & font=*font_ptr;

		wxAuiTabArt* self=(Luna< wxAuiTabArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiTabArt::SetMeasuringFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxAuiTabArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMeasuringFont(font);

		return 0;
	}

	// void wxAuiTabArt::SetNormalFont(const wxFont & font)
	static int _bind_SetNormalFont(lua_State *L) {
		if (!_lg_typecheck_SetNormalFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiTabArt::SetNormalFont(const wxFont & font) function, expected prototype:\nvoid wxAuiTabArt::SetNormalFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxAuiTabArt::SetNormalFont function");
		}
		const wxFont & font=*font_ptr;

		wxAuiTabArt* self=(Luna< wxAuiTabArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiTabArt::SetNormalFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxAuiTabArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetNormalFont(font);

		return 0;
	}

	// void wxAuiTabArt::SetSelectedFont(const wxFont & font)
	static int _bind_SetSelectedFont(lua_State *L) {
		if (!_lg_typecheck_SetSelectedFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiTabArt::SetSelectedFont(const wxFont & font) function, expected prototype:\nvoid wxAuiTabArt::SetSelectedFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxAuiTabArt::SetSelectedFont function");
		}
		const wxFont & font=*font_ptr;

		wxAuiTabArt* self=(Luna< wxAuiTabArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiTabArt::SetSelectedFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxAuiTabArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSelectedFont(font);

		return 0;
	}

	// void wxAuiTabArt::SetColour(const wxColour & colour)
	static int _bind_SetColour(lua_State *L) {
		if (!_lg_typecheck_SetColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiTabArt::SetColour(const wxColour & colour) function, expected prototype:\nvoid wxAuiTabArt::SetColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxAuiTabArt::SetColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxAuiTabArt* self=(Luna< wxAuiTabArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiTabArt::SetColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxAuiTabArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColour(colour);

		return 0;
	}

	// void wxAuiTabArt::SetActiveColour(const wxColour & colour)
	static int _bind_SetActiveColour(lua_State *L) {
		if (!_lg_typecheck_SetActiveColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiTabArt::SetActiveColour(const wxColour & colour) function, expected prototype:\nvoid wxAuiTabArt::SetActiveColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxAuiTabArt::SetActiveColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxAuiTabArt* self=(Luna< wxAuiTabArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiTabArt::SetActiveColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxAuiTabArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetActiveColour(colour);

		return 0;
	}

	// void wxAuiTabArt::SetSizingInfo(const wxSize & tab_ctrl_size, size_t tab_count)
	static int _bind_SetSizingInfo(lua_State *L) {
		if (!_lg_typecheck_SetSizingInfo(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiTabArt::SetSizingInfo(const wxSize & tab_ctrl_size, size_t tab_count) function, expected prototype:\nvoid wxAuiTabArt::SetSizingInfo(const wxSize & tab_ctrl_size, size_t tab_count)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* tab_ctrl_size_ptr=(Luna< wxSize >::check(L,2));
		if( !tab_ctrl_size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tab_ctrl_size in wxAuiTabArt::SetSizingInfo function");
		}
		const wxSize & tab_ctrl_size=*tab_ctrl_size_ptr;
		size_t tab_count=(size_t)lua_tointeger(L,3);

		wxAuiTabArt* self=(Luna< wxAuiTabArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiTabArt::SetSizingInfo(const wxSize &, size_t). Got : '%s'\n%s",typeid(Luna< wxAuiTabArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSizingInfo(tab_ctrl_size, tab_count);

		return 0;
	}

	// int wxAuiTabArt::ShowDropDown(wxWindow * arg1, const wxAuiNotebookPageArray & arg2, int arg3)
	static int _bind_ShowDropDown(lua_State *L) {
		if (!_lg_typecheck_ShowDropDown(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiTabArt::ShowDropDown(wxWindow * arg1, const wxAuiNotebookPageArray & arg2, int arg3) function, expected prototype:\nint wxAuiTabArt::ShowDropDown(wxWindow * arg1, const wxAuiNotebookPageArray & arg2, int arg3)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 39809356\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* _arg1=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		const wxAuiNotebookPageArray* _arg2_ptr=(Luna< wxAuiNotebookPageArray >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in wxAuiTabArt::ShowDropDown function");
		}
		const wxAuiNotebookPageArray & _arg2=*_arg2_ptr;
		int _arg3=(int)lua_tointeger(L,4);

		wxAuiTabArt* self=(Luna< wxAuiTabArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiTabArt::ShowDropDown(wxWindow *, const wxAuiNotebookPageArray &, int). Got : '%s'\n%s",typeid(Luna< wxAuiTabArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ShowDropDown(_arg1, _arg2, _arg3);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxAuiTabArt* LunaTraits< wxAuiTabArt >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxAuiTabArt::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxAuiTabArt * wxAuiTabArt::Clone()
	// void wxAuiTabArt::DrawBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	// void wxAuiTabArt::DrawButton(wxDC & dc, wxWindow * wnd, const wxRect & in_rect, int bitmap_id, int button_state, int orientation, wxRect * out_rect)
	// void wxAuiTabArt::DrawTab(wxDC & dc, wxWindow * wnd, const wxAuiNotebookPage & page, const wxRect & rect, int close_button_state, wxRect * out_tab_rect, wxRect * out_button_rect, int * x_extent)
	// int wxAuiTabArt::GetBestTabCtrlSize(wxWindow * arg1, const wxAuiNotebookPageArray & arg2, const wxSize & arg3)
	// int wxAuiTabArt::GetIndentSize()
	// wxSize wxAuiTabArt::GetTabSize(wxDC & dc, wxWindow * wnd, const wxString & caption, const wxBitmap & bitmap, bool active, int close_button_state, int * x_extent)
	// void wxAuiTabArt::SetFlags(unsigned int flags)
	// void wxAuiTabArt::SetMeasuringFont(const wxFont & font)
	// void wxAuiTabArt::SetNormalFont(const wxFont & font)
	// void wxAuiTabArt::SetSelectedFont(const wxFont & font)
	// void wxAuiTabArt::SetColour(const wxColour & colour)
	// void wxAuiTabArt::SetActiveColour(const wxColour & colour)
	// void wxAuiTabArt::SetSizingInfo(const wxSize & tab_ctrl_size, size_t tab_count)
	// int wxAuiTabArt::ShowDropDown(wxWindow * arg1, const wxAuiNotebookPageArray & arg2, int arg3)
}

void LunaTraits< wxAuiTabArt >::_bind_dtor(wxAuiTabArt* obj) {
	delete obj;
}

const char LunaTraits< wxAuiTabArt >::className[] = "wxAuiTabArt";
const char LunaTraits< wxAuiTabArt >::fullName[] = "wxAuiTabArt";
const char LunaTraits< wxAuiTabArt >::moduleName[] = "wx";
const char* LunaTraits< wxAuiTabArt >::parents[] = {0};
const int LunaTraits< wxAuiTabArt >::hash = 24264105;
const int LunaTraits< wxAuiTabArt >::uniqueIDs[] = {24264105,0};

luna_RegType LunaTraits< wxAuiTabArt >::methods[] = {
	{"Clone", &luna_wrapper_wxAuiTabArt::_bind_Clone},
	{"DrawBackground", &luna_wrapper_wxAuiTabArt::_bind_DrawBackground},
	{"DrawButton", &luna_wrapper_wxAuiTabArt::_bind_DrawButton},
	{"DrawTab", &luna_wrapper_wxAuiTabArt::_bind_DrawTab},
	{"GetBestTabCtrlSize", &luna_wrapper_wxAuiTabArt::_bind_GetBestTabCtrlSize},
	{"GetIndentSize", &luna_wrapper_wxAuiTabArt::_bind_GetIndentSize},
	{"GetTabSize", &luna_wrapper_wxAuiTabArt::_bind_GetTabSize},
	{"SetFlags", &luna_wrapper_wxAuiTabArt::_bind_SetFlags},
	{"SetMeasuringFont", &luna_wrapper_wxAuiTabArt::_bind_SetMeasuringFont},
	{"SetNormalFont", &luna_wrapper_wxAuiTabArt::_bind_SetNormalFont},
	{"SetSelectedFont", &luna_wrapper_wxAuiTabArt::_bind_SetSelectedFont},
	{"SetColour", &luna_wrapper_wxAuiTabArt::_bind_SetColour},
	{"SetActiveColour", &luna_wrapper_wxAuiTabArt::_bind_SetActiveColour},
	{"SetSizingInfo", &luna_wrapper_wxAuiTabArt::_bind_SetSizingInfo},
	{"ShowDropDown", &luna_wrapper_wxAuiTabArt::_bind_ShowDropDown},
	{"dynCast", &luna_wrapper_wxAuiTabArt::_bind_dynCast},
	{"__eq", &luna_wrapper_wxAuiTabArt::_bind___eq},
	{"fromVoid", &luna_wrapper_wxAuiTabArt::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxAuiTabArt::_bind_asVoid},
	{"getTable", &luna_wrapper_wxAuiTabArt::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxAuiTabArt >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxAuiTabArt >::enumValues[] = {
	{0,0}
};


