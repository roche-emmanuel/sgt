#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGridCornerHeaderRendererDefault.h>

class luna_wrapper_wxGridCornerHeaderRendererDefault {
public:
	typedef Luna< wxGridCornerHeaderRendererDefault > luna_t;

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

		wxGridCornerHeaderRendererDefault* self= (wxGridCornerHeaderRendererDefault*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGridCornerHeaderRendererDefault >::push(L,self,false);
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
		//wxGridCornerHeaderRendererDefault* ptr= dynamic_cast< wxGridCornerHeaderRendererDefault* >(Luna< wxGridCornerHeaderRenderer >::check(L,1));
		wxGridCornerHeaderRendererDefault* ptr= luna_caster< wxGridCornerHeaderRenderer, wxGridCornerHeaderRendererDefault >::cast(Luna< wxGridCornerHeaderRenderer >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridCornerHeaderRendererDefault >::push(L,ptr,false);
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
	// void wxGridCornerHeaderRendererDefault::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const
	static int _bind_DrawBorder(lua_State *L) {
		if (!_lg_typecheck_DrawBorder(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCornerHeaderRendererDefault::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const function, expected prototype:\nvoid wxGridCornerHeaderRendererDefault::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGrid* grid_ptr=(Luna< wxObject >::checkSubType< wxGrid >(L,2));
		if( !grid_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg grid in wxGridCornerHeaderRendererDefault::DrawBorder function");
		}
		const wxGrid & grid=*grid_ptr;
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxGridCornerHeaderRendererDefault::DrawBorder function");
		}
		wxDC & dc=*dc_ptr;
		wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxGridCornerHeaderRendererDefault::DrawBorder function");
		}
		wxRect & rect=*rect_ptr;

		wxGridCornerHeaderRendererDefault* self=Luna< wxGridCornerHeaderRenderer >::checkSubType< wxGridCornerHeaderRendererDefault >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCornerHeaderRendererDefault::DrawBorder(const wxGrid &, wxDC &, wxRect &) const. Got : '%s'\n%s",typeid(Luna< wxGridCornerHeaderRenderer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawBorder(grid, dc, rect);

		return 0;
	}

	// void wxGridCornerHeaderRendererDefault::base_DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const
	static int _bind_base_DrawBorder(lua_State *L) {
		if (!_lg_typecheck_base_DrawBorder(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCornerHeaderRendererDefault::base_DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const function, expected prototype:\nvoid wxGridCornerHeaderRendererDefault::base_DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGrid* grid_ptr=(Luna< wxObject >::checkSubType< wxGrid >(L,2));
		if( !grid_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg grid in wxGridCornerHeaderRendererDefault::base_DrawBorder function");
		}
		const wxGrid & grid=*grid_ptr;
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxGridCornerHeaderRendererDefault::base_DrawBorder function");
		}
		wxDC & dc=*dc_ptr;
		wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxGridCornerHeaderRendererDefault::base_DrawBorder function");
		}
		wxRect & rect=*rect_ptr;

		wxGridCornerHeaderRendererDefault* self=Luna< wxGridCornerHeaderRenderer >::checkSubType< wxGridCornerHeaderRendererDefault >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCornerHeaderRendererDefault::base_DrawBorder(const wxGrid &, wxDC &, wxRect &) const. Got : '%s'\n%s",typeid(Luna< wxGridCornerHeaderRenderer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridCornerHeaderRendererDefault::DrawBorder(grid, dc, rect);

		return 0;
	}


	// Operator binds:

};

wxGridCornerHeaderRendererDefault* LunaTraits< wxGridCornerHeaderRendererDefault >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxGridCornerHeaderRendererDefault >::_bind_dtor(wxGridCornerHeaderRendererDefault* obj) {
	delete obj;
}

const char LunaTraits< wxGridCornerHeaderRendererDefault >::className[] = "wxGridCornerHeaderRendererDefault";
const char LunaTraits< wxGridCornerHeaderRendererDefault >::fullName[] = "wxGridCornerHeaderRendererDefault";
const char LunaTraits< wxGridCornerHeaderRendererDefault >::moduleName[] = "wx";
const char* LunaTraits< wxGridCornerHeaderRendererDefault >::parents[] = {"wx.wxGridCornerHeaderRenderer", 0};
const int LunaTraits< wxGridCornerHeaderRendererDefault >::hash = 54947855;
const int LunaTraits< wxGridCornerHeaderRendererDefault >::uniqueIDs[] = {29503865,0};

luna_RegType LunaTraits< wxGridCornerHeaderRendererDefault >::methods[] = {
	{"DrawBorder", &luna_wrapper_wxGridCornerHeaderRendererDefault::_bind_DrawBorder},
	{"base_DrawBorder", &luna_wrapper_wxGridCornerHeaderRendererDefault::_bind_base_DrawBorder},
	{"fromVoid", &luna_wrapper_wxGridCornerHeaderRendererDefault::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGridCornerHeaderRendererDefault::_bind_asVoid},
	{"getTable", &luna_wrapper_wxGridCornerHeaderRendererDefault::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCornerHeaderRendererDefault >::converters[] = {
	{"wxGridCornerHeaderRenderer", &luna_wrapper_wxGridCornerHeaderRendererDefault::_cast_from_wxGridCornerHeaderRenderer},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCornerHeaderRendererDefault >::enumValues[] = {
	{0,0}
};


