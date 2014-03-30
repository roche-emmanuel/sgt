#include <plug_common.h>

#include <luna/wrappers/wrapper_wxAuiDockArt.h>

class luna_wrapper_wxAuiDockArt {
public:
	typedef Luna< wxAuiDockArt > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxAuiDockArt* self=(Luna< wxAuiDockArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxAuiDockArt,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,55065598) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxAuiDockArt*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxAuiDockArt* rhs =(Luna< wxAuiDockArt >::check(L,2));
		wxAuiDockArt* self=(Luna< wxAuiDockArt >::check(L,1));
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

		wxAuiDockArt* self= (wxAuiDockArt*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxAuiDockArt >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,55065598) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxAuiDockArt >::check(L,1));
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

		wxAuiDockArt* self=(Luna< wxAuiDockArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxAuiDockArt");
		
		return luna_dynamicCast(L,converters,"wxAuiDockArt",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_DrawBackground(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawBorder(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,42930508) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawCaption(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20234418) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,42930508) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawGripper(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,42930508) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawPaneButton(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,20234418) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,42930508) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawSash(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMetric(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColour(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFont(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMetric(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxAuiDockArt::wxAuiDockArt(lua_Table * data)
	static wxAuiDockArt* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiDockArt::wxAuiDockArt(lua_Table * data) function, expected prototype:\nwxAuiDockArt::wxAuiDockArt(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxAuiDockArt(L,NULL);
	}


	// Function binds:
	// void wxAuiDockArt::DrawBackground(wxDC & dc, wxWindow * window, int orientation, const wxRect & rect)
	static int _bind_DrawBackground(lua_State *L) {
		if (!_lg_typecheck_DrawBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDockArt::DrawBackground(wxDC & dc, wxWindow * window, int orientation, const wxRect & rect) function, expected prototype:\nvoid wxAuiDockArt::DrawBackground(wxDC & dc, wxWindow * window, int orientation, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 4 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDockArt::DrawBackground function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		int orientation=(int)lua_tointeger(L,4);
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,5));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDockArt::DrawBackground function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiDockArt* self=(Luna< wxAuiDockArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDockArt::DrawBackground(wxDC &, wxWindow *, int, const wxRect &). Got : '%s'\n%s",typeid(Luna< wxAuiDockArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawBackground(dc, window, orientation, rect);

		return 0;
	}

	// void wxAuiDockArt::DrawBorder(wxDC & dc, wxWindow * window, const wxRect & rect, wxAuiPaneInfo & pane)
	static int _bind_DrawBorder(lua_State *L) {
		if (!_lg_typecheck_DrawBorder(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDockArt::DrawBorder(wxDC & dc, wxWindow * window, const wxRect & rect, wxAuiPaneInfo & pane) function, expected prototype:\nvoid wxAuiDockArt::DrawBorder(wxDC & dc, wxWindow * window, const wxRect & rect, wxAuiPaneInfo & pane)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\narg 4 ID = 42930508\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDockArt::DrawBorder function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDockArt::DrawBorder function");
		}
		const wxRect & rect=*rect_ptr;
		wxAuiPaneInfo* pane_ptr=(Luna< wxAuiPaneInfo >::check(L,5));
		if( !pane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pane in wxAuiDockArt::DrawBorder function");
		}
		wxAuiPaneInfo & pane=*pane_ptr;

		wxAuiDockArt* self=(Luna< wxAuiDockArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDockArt::DrawBorder(wxDC &, wxWindow *, const wxRect &, wxAuiPaneInfo &). Got : '%s'\n%s",typeid(Luna< wxAuiDockArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawBorder(dc, window, rect, pane);

		return 0;
	}

	// void wxAuiDockArt::DrawCaption(wxDC & dc, wxWindow * window, const wxString & text, const wxRect & rect, wxAuiPaneInfo & pane)
	static int _bind_DrawCaption(lua_State *L) {
		if (!_lg_typecheck_DrawCaption(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDockArt::DrawCaption(wxDC & dc, wxWindow * window, const wxString & text, const wxRect & rect, wxAuiPaneInfo & pane) function, expected prototype:\nvoid wxAuiDockArt::DrawCaption(wxDC & dc, wxWindow * window, const wxString & text, const wxRect & rect, wxAuiPaneInfo & pane)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 20234418\narg 5 ID = 42930508\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDockArt::DrawCaption function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		wxString text(lua_tostring(L,4),lua_objlen(L,4));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,5));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDockArt::DrawCaption function");
		}
		const wxRect & rect=*rect_ptr;
		wxAuiPaneInfo* pane_ptr=(Luna< wxAuiPaneInfo >::check(L,6));
		if( !pane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pane in wxAuiDockArt::DrawCaption function");
		}
		wxAuiPaneInfo & pane=*pane_ptr;

		wxAuiDockArt* self=(Luna< wxAuiDockArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDockArt::DrawCaption(wxDC &, wxWindow *, const wxString &, const wxRect &, wxAuiPaneInfo &). Got : '%s'\n%s",typeid(Luna< wxAuiDockArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawCaption(dc, window, text, rect, pane);

		return 0;
	}

	// void wxAuiDockArt::DrawGripper(wxDC & dc, wxWindow * window, const wxRect & rect, wxAuiPaneInfo & pane)
	static int _bind_DrawGripper(lua_State *L) {
		if (!_lg_typecheck_DrawGripper(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDockArt::DrawGripper(wxDC & dc, wxWindow * window, const wxRect & rect, wxAuiPaneInfo & pane) function, expected prototype:\nvoid wxAuiDockArt::DrawGripper(wxDC & dc, wxWindow * window, const wxRect & rect, wxAuiPaneInfo & pane)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\narg 4 ID = 42930508\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDockArt::DrawGripper function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDockArt::DrawGripper function");
		}
		const wxRect & rect=*rect_ptr;
		wxAuiPaneInfo* pane_ptr=(Luna< wxAuiPaneInfo >::check(L,5));
		if( !pane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pane in wxAuiDockArt::DrawGripper function");
		}
		wxAuiPaneInfo & pane=*pane_ptr;

		wxAuiDockArt* self=(Luna< wxAuiDockArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDockArt::DrawGripper(wxDC &, wxWindow *, const wxRect &, wxAuiPaneInfo &). Got : '%s'\n%s",typeid(Luna< wxAuiDockArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawGripper(dc, window, rect, pane);

		return 0;
	}

	// void wxAuiDockArt::DrawPaneButton(wxDC & dc, wxWindow * window, int button, int button_state, const wxRect & rect, wxAuiPaneInfo & pane)
	static int _bind_DrawPaneButton(lua_State *L) {
		if (!_lg_typecheck_DrawPaneButton(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDockArt::DrawPaneButton(wxDC & dc, wxWindow * window, int button, int button_state, const wxRect & rect, wxAuiPaneInfo & pane) function, expected prototype:\nvoid wxAuiDockArt::DrawPaneButton(wxDC & dc, wxWindow * window, int button, int button_state, const wxRect & rect, wxAuiPaneInfo & pane)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 5 ID = 20234418\narg 6 ID = 42930508\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDockArt::DrawPaneButton function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		int button=(int)lua_tointeger(L,4);
		int button_state=(int)lua_tointeger(L,5);
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,6));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDockArt::DrawPaneButton function");
		}
		const wxRect & rect=*rect_ptr;
		wxAuiPaneInfo* pane_ptr=(Luna< wxAuiPaneInfo >::check(L,7));
		if( !pane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pane in wxAuiDockArt::DrawPaneButton function");
		}
		wxAuiPaneInfo & pane=*pane_ptr;

		wxAuiDockArt* self=(Luna< wxAuiDockArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDockArt::DrawPaneButton(wxDC &, wxWindow *, int, int, const wxRect &, wxAuiPaneInfo &). Got : '%s'\n%s",typeid(Luna< wxAuiDockArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawPaneButton(dc, window, button, button_state, rect, pane);

		return 0;
	}

	// void wxAuiDockArt::DrawSash(wxDC & dc, wxWindow * window, int orientation, const wxRect & rect)
	static int _bind_DrawSash(lua_State *L) {
		if (!_lg_typecheck_DrawSash(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDockArt::DrawSash(wxDC & dc, wxWindow * window, int orientation, const wxRect & rect) function, expected prototype:\nvoid wxAuiDockArt::DrawSash(wxDC & dc, wxWindow * window, int orientation, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 4 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDockArt::DrawSash function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		int orientation=(int)lua_tointeger(L,4);
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,5));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDockArt::DrawSash function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiDockArt* self=(Luna< wxAuiDockArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDockArt::DrawSash(wxDC &, wxWindow *, int, const wxRect &). Got : '%s'\n%s",typeid(Luna< wxAuiDockArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawSash(dc, window, orientation, rect);

		return 0;
	}

	// wxColour wxAuiDockArt::GetColour(int id)
	static int _bind_GetColour(lua_State *L) {
		if (!_lg_typecheck_GetColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxAuiDockArt::GetColour(int id) function, expected prototype:\nwxColour wxAuiDockArt::GetColour(int id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxAuiDockArt* self=(Luna< wxAuiDockArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxAuiDockArt::GetColour(int). Got : '%s'\n%s",typeid(Luna< wxAuiDockArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetColour(id);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxFont wxAuiDockArt::GetFont(int id)
	static int _bind_GetFont(lua_State *L) {
		if (!_lg_typecheck_GetFont(L)) {
			luaL_error(L, "luna typecheck failed in wxFont wxAuiDockArt::GetFont(int id) function, expected prototype:\nwxFont wxAuiDockArt::GetFont(int id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxAuiDockArt* self=(Luna< wxAuiDockArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont wxAuiDockArt::GetFont(int). Got : '%s'\n%s",typeid(Luna< wxAuiDockArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFont stack_lret = self->GetFont(id);
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// int wxAuiDockArt::GetMetric(int id)
	static int _bind_GetMetric(lua_State *L) {
		if (!_lg_typecheck_GetMetric(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiDockArt::GetMetric(int id) function, expected prototype:\nint wxAuiDockArt::GetMetric(int id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxAuiDockArt* self=(Luna< wxAuiDockArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiDockArt::GetMetric(int). Got : '%s'\n%s",typeid(Luna< wxAuiDockArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetMetric(id);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiDockArt::SetColour(int id, const wxColour & colour)
	static int _bind_SetColour(lua_State *L) {
		if (!_lg_typecheck_SetColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDockArt::SetColour(int id, const wxColour & colour) function, expected prototype:\nvoid wxAuiDockArt::SetColour(int id, const wxColour & colour)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,3));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxAuiDockArt::SetColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxAuiDockArt* self=(Luna< wxAuiDockArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDockArt::SetColour(int, const wxColour &). Got : '%s'\n%s",typeid(Luna< wxAuiDockArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColour(id, colour);

		return 0;
	}

	// void wxAuiDockArt::SetFont(int id, const wxFont & font)
	static int _bind_SetFont(lua_State *L) {
		if (!_lg_typecheck_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDockArt::SetFont(int id, const wxFont & font) function, expected prototype:\nvoid wxAuiDockArt::SetFont(int id, const wxFont & font)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,3));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxAuiDockArt::SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxAuiDockArt* self=(Luna< wxAuiDockArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDockArt::SetFont(int, const wxFont &). Got : '%s'\n%s",typeid(Luna< wxAuiDockArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFont(id, font);

		return 0;
	}

	// void wxAuiDockArt::SetMetric(int id, int new_val)
	static int _bind_SetMetric(lua_State *L) {
		if (!_lg_typecheck_SetMetric(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDockArt::SetMetric(int id, int new_val) function, expected prototype:\nvoid wxAuiDockArt::SetMetric(int id, int new_val)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		int new_val=(int)lua_tointeger(L,3);

		wxAuiDockArt* self=(Luna< wxAuiDockArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDockArt::SetMetric(int, int). Got : '%s'\n%s",typeid(Luna< wxAuiDockArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMetric(id, new_val);

		return 0;
	}


	// Operator binds:

};

wxAuiDockArt* LunaTraits< wxAuiDockArt >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxAuiDockArt::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxAuiDockArt::DrawBackground(wxDC & dc, wxWindow * window, int orientation, const wxRect & rect)
	// void wxAuiDockArt::DrawBorder(wxDC & dc, wxWindow * window, const wxRect & rect, wxAuiPaneInfo & pane)
	// void wxAuiDockArt::DrawCaption(wxDC & dc, wxWindow * window, const wxString & text, const wxRect & rect, wxAuiPaneInfo & pane)
	// void wxAuiDockArt::DrawGripper(wxDC & dc, wxWindow * window, const wxRect & rect, wxAuiPaneInfo & pane)
	// void wxAuiDockArt::DrawPaneButton(wxDC & dc, wxWindow * window, int button, int button_state, const wxRect & rect, wxAuiPaneInfo & pane)
	// void wxAuiDockArt::DrawSash(wxDC & dc, wxWindow * window, int orientation, const wxRect & rect)
	// wxColour wxAuiDockArt::GetColour(int id)
	// wxFont wxAuiDockArt::GetFont(int id)
	// int wxAuiDockArt::GetMetric(int id)
	// void wxAuiDockArt::SetColour(int id, const wxColour & colour)
	// void wxAuiDockArt::SetFont(int id, const wxFont & font)
	// void wxAuiDockArt::SetMetric(int id, int new_val)
}

void LunaTraits< wxAuiDockArt >::_bind_dtor(wxAuiDockArt* obj) {
	delete obj;
}

const char LunaTraits< wxAuiDockArt >::className[] = "wxAuiDockArt";
const char LunaTraits< wxAuiDockArt >::fullName[] = "wxAuiDockArt";
const char LunaTraits< wxAuiDockArt >::moduleName[] = "wx";
const char* LunaTraits< wxAuiDockArt >::parents[] = {0};
const int LunaTraits< wxAuiDockArt >::hash = 55065598;
const int LunaTraits< wxAuiDockArt >::uniqueIDs[] = {55065598,0};

luna_RegType LunaTraits< wxAuiDockArt >::methods[] = {
	{"DrawBackground", &luna_wrapper_wxAuiDockArt::_bind_DrawBackground},
	{"DrawBorder", &luna_wrapper_wxAuiDockArt::_bind_DrawBorder},
	{"DrawCaption", &luna_wrapper_wxAuiDockArt::_bind_DrawCaption},
	{"DrawGripper", &luna_wrapper_wxAuiDockArt::_bind_DrawGripper},
	{"DrawPaneButton", &luna_wrapper_wxAuiDockArt::_bind_DrawPaneButton},
	{"DrawSash", &luna_wrapper_wxAuiDockArt::_bind_DrawSash},
	{"GetColour", &luna_wrapper_wxAuiDockArt::_bind_GetColour},
	{"GetFont", &luna_wrapper_wxAuiDockArt::_bind_GetFont},
	{"GetMetric", &luna_wrapper_wxAuiDockArt::_bind_GetMetric},
	{"SetColour", &luna_wrapper_wxAuiDockArt::_bind_SetColour},
	{"SetFont", &luna_wrapper_wxAuiDockArt::_bind_SetFont},
	{"SetMetric", &luna_wrapper_wxAuiDockArt::_bind_SetMetric},
	{"dynCast", &luna_wrapper_wxAuiDockArt::_bind_dynCast},
	{"__eq", &luna_wrapper_wxAuiDockArt::_bind___eq},
	{"fromVoid", &luna_wrapper_wxAuiDockArt::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxAuiDockArt::_bind_asVoid},
	{"getTable", &luna_wrapper_wxAuiDockArt::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxAuiDockArt >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxAuiDockArt >::enumValues[] = {
	{0,0}
};


