#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGridRowHeaderRendererDefault.h>

class luna_wrapper_wxGridRowHeaderRendererDefault {
public:
	typedef Luna< wxGridRowHeaderRendererDefault > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxGridCornerHeaderRenderer* self=(Luna< wxGridCornerHeaderRenderer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxGridCornerHeaderRenderer,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
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

		wxGridRowHeaderRendererDefault* self= (wxGridRowHeaderRendererDefault*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGridRowHeaderRendererDefault >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,29503865) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxGridCornerHeaderRenderer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxGridCornerHeaderRenderer(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxGridRowHeaderRendererDefault* ptr= dynamic_cast< wxGridRowHeaderRendererDefault* >(Luna< wxGridCornerHeaderRenderer >::check(L,1));
		wxGridRowHeaderRendererDefault* ptr= luna_caster< wxGridCornerHeaderRenderer, wxGridRowHeaderRendererDefault >::cast(Luna< wxGridCornerHeaderRenderer >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridRowHeaderRendererDefault >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_DrawBorder(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DrawLabel(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20234418) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DrawBorder(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxGridRowHeaderRendererDefault::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const
	static int _bind_DrawBorder(lua_State *L) {
		if (!_lg_typecheck_DrawBorder(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridRowHeaderRendererDefault::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const function, expected prototype:\nvoid wxGridRowHeaderRendererDefault::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGrid* grid_ptr=(Luna< wxObject >::checkSubType< wxGrid >(L,2));
		if( !grid_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg grid in wxGridRowHeaderRendererDefault::DrawBorder function");
		}
		const wxGrid & grid=*grid_ptr;
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxGridRowHeaderRendererDefault::DrawBorder function");
		}
		wxDC & dc=*dc_ptr;
		wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxGridRowHeaderRendererDefault::DrawBorder function");
		}
		wxRect & rect=*rect_ptr;

		wxGridRowHeaderRendererDefault* self=Luna< wxGridCornerHeaderRenderer >::checkSubType< wxGridRowHeaderRendererDefault >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridRowHeaderRendererDefault::DrawBorder(const wxGrid &, wxDC &, wxRect &) const. Got : '%s'\n%s",typeid(Luna< wxGridCornerHeaderRenderer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawBorder(grid, dc, rect);

		return 0;
	}

	// void wxGridRowHeaderRendererDefault::base_DrawLabel(const wxGrid & grid, wxDC & dc, const wxString & value, const wxRect & rect, int horizAlign, int vertAlign, int textOrientation) const
	static int _bind_base_DrawLabel(lua_State *L) {
		if (!_lg_typecheck_base_DrawLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridRowHeaderRendererDefault::base_DrawLabel(const wxGrid & grid, wxDC & dc, const wxString & value, const wxRect & rect, int horizAlign, int vertAlign, int textOrientation) const function, expected prototype:\nvoid wxGridRowHeaderRendererDefault::base_DrawLabel(const wxGrid & grid, wxDC & dc, const wxString & value, const wxRect & rect, int horizAlign, int vertAlign, int textOrientation) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGrid* grid_ptr=(Luna< wxObject >::checkSubType< wxGrid >(L,2));
		if( !grid_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg grid in wxGridRowHeaderRendererDefault::base_DrawLabel function");
		}
		const wxGrid & grid=*grid_ptr;
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxGridRowHeaderRendererDefault::base_DrawLabel function");
		}
		wxDC & dc=*dc_ptr;
		wxString value(lua_tostring(L,4),lua_objlen(L,4));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,5));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxGridRowHeaderRendererDefault::base_DrawLabel function");
		}
		const wxRect & rect=*rect_ptr;
		int horizAlign=(int)lua_tointeger(L,6);
		int vertAlign=(int)lua_tointeger(L,7);
		int textOrientation=(int)lua_tointeger(L,8);

		wxGridRowHeaderRendererDefault* self=Luna< wxGridCornerHeaderRenderer >::checkSubType< wxGridRowHeaderRendererDefault >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridRowHeaderRendererDefault::base_DrawLabel(const wxGrid &, wxDC &, const wxString &, const wxRect &, int, int, int) const. Got : '%s'\n%s",typeid(Luna< wxGridCornerHeaderRenderer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridRowHeaderRendererDefault::DrawLabel(grid, dc, value, rect, horizAlign, vertAlign, textOrientation);

		return 0;
	}

	// void wxGridRowHeaderRendererDefault::base_DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const
	static int _bind_base_DrawBorder(lua_State *L) {
		if (!_lg_typecheck_base_DrawBorder(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridRowHeaderRendererDefault::base_DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const function, expected prototype:\nvoid wxGridRowHeaderRendererDefault::base_DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGrid* grid_ptr=(Luna< wxObject >::checkSubType< wxGrid >(L,2));
		if( !grid_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg grid in wxGridRowHeaderRendererDefault::base_DrawBorder function");
		}
		const wxGrid & grid=*grid_ptr;
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxGridRowHeaderRendererDefault::base_DrawBorder function");
		}
		wxDC & dc=*dc_ptr;
		wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxGridRowHeaderRendererDefault::base_DrawBorder function");
		}
		wxRect & rect=*rect_ptr;

		wxGridRowHeaderRendererDefault* self=Luna< wxGridCornerHeaderRenderer >::checkSubType< wxGridRowHeaderRendererDefault >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridRowHeaderRendererDefault::base_DrawBorder(const wxGrid &, wxDC &, wxRect &) const. Got : '%s'\n%s",typeid(Luna< wxGridCornerHeaderRenderer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridRowHeaderRendererDefault::DrawBorder(grid, dc, rect);

		return 0;
	}


	// Operator binds:

};

wxGridRowHeaderRendererDefault* LunaTraits< wxGridRowHeaderRendererDefault >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxGridRowHeaderRendererDefault >::_bind_dtor(wxGridRowHeaderRendererDefault* obj) {
	delete obj;
}

const char LunaTraits< wxGridRowHeaderRendererDefault >::className[] = "wxGridRowHeaderRendererDefault";
const char LunaTraits< wxGridRowHeaderRendererDefault >::fullName[] = "wxGridRowHeaderRendererDefault";
const char LunaTraits< wxGridRowHeaderRendererDefault >::moduleName[] = "wx";
const char* LunaTraits< wxGridRowHeaderRendererDefault >::parents[] = {"wx.wxGridRowHeaderRenderer", 0};
const int LunaTraits< wxGridRowHeaderRendererDefault >::hash = 80095649;
const int LunaTraits< wxGridRowHeaderRendererDefault >::uniqueIDs[] = {29503865,0};

luna_RegType LunaTraits< wxGridRowHeaderRendererDefault >::methods[] = {
	{"DrawBorder", &luna_wrapper_wxGridRowHeaderRendererDefault::_bind_DrawBorder},
	{"base_DrawLabel", &luna_wrapper_wxGridRowHeaderRendererDefault::_bind_base_DrawLabel},
	{"base_DrawBorder", &luna_wrapper_wxGridRowHeaderRendererDefault::_bind_base_DrawBorder},
	{"fromVoid", &luna_wrapper_wxGridRowHeaderRendererDefault::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGridRowHeaderRendererDefault::_bind_asVoid},
	{"getTable", &luna_wrapper_wxGridRowHeaderRendererDefault::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridRowHeaderRendererDefault >::converters[] = {
	{"wxGridCornerHeaderRenderer", &luna_wrapper_wxGridRowHeaderRendererDefault::_cast_from_wxGridCornerHeaderRenderer},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridRowHeaderRendererDefault >::enumValues[] = {
	{0,0}
};


