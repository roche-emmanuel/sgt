#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGridCellEnumRenderer.h>

class luna_wrapper_wxGridCellEnumRenderer {
public:
	typedef Luna< wxGridCellEnumRenderer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxGridCellRenderer* self=(Luna< wxGridCellRenderer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxGridCellRenderer,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		wxGridCellEnumRenderer* self= (wxGridCellEnumRenderer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGridCellEnumRenderer >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,96062845) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxGridCellRenderer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxGridCellRenderer(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxGridCellEnumRenderer* ptr= dynamic_cast< wxGridCellEnumRenderer* >(Luna< wxGridCellRenderer >::check(L,1));
		wxGridCellEnumRenderer* ptr= luna_caster< wxGridCellRenderer, wxGridCellEnumRenderer >::cast(Luna< wxGridCellRenderer >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridCellEnumRenderer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetParameters(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetParameters(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGridCellEnumRenderer::wxGridCellEnumRenderer(lua_Table * data, const wxString & choices = wxEmptyString)
	static wxGridCellEnumRenderer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellEnumRenderer::wxGridCellEnumRenderer(lua_Table * data, const wxString & choices = wxEmptyString) function, expected prototype:\nwxGridCellEnumRenderer::wxGridCellEnumRenderer(lua_Table * data, const wxString & choices = wxEmptyString)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString choices(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_wxGridCellEnumRenderer(L,NULL, choices);
	}


	// Function binds:
	// void wxGridCellEnumRenderer::SetParameters(const wxString & params)
	static int _bind_SetParameters(lua_State *L) {
		if (!_lg_typecheck_SetParameters(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellEnumRenderer::SetParameters(const wxString & params) function, expected prototype:\nvoid wxGridCellEnumRenderer::SetParameters(const wxString & params)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString params(lua_tostring(L,2),lua_objlen(L,2));

		wxGridCellEnumRenderer* self=Luna< wxGridCellRenderer >::checkSubType< wxGridCellEnumRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellEnumRenderer::SetParameters(const wxString &). Got : '%s'\n%s",typeid(Luna< wxGridCellRenderer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetParameters(params);

		return 0;
	}

	// void wxGridCellEnumRenderer::base_SetParameters(const wxString & params)
	static int _bind_base_SetParameters(lua_State *L) {
		if (!_lg_typecheck_base_SetParameters(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellEnumRenderer::base_SetParameters(const wxString & params) function, expected prototype:\nvoid wxGridCellEnumRenderer::base_SetParameters(const wxString & params)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString params(lua_tostring(L,2),lua_objlen(L,2));

		wxGridCellEnumRenderer* self=Luna< wxGridCellRenderer >::checkSubType< wxGridCellEnumRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellEnumRenderer::base_SetParameters(const wxString &). Got : '%s'\n%s",typeid(Luna< wxGridCellRenderer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridCellEnumRenderer::SetParameters(params);

		return 0;
	}


	// Operator binds:

};

wxGridCellEnumRenderer* LunaTraits< wxGridCellEnumRenderer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGridCellEnumRenderer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxGridCellRenderer * wxGridCellRenderer::Clone() const
	// void wxGridCellRenderer::Draw(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, const wxRect & rect, int row, int col, bool isSelected)
	// wxSize wxGridCellRenderer::GetBestSize(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, int row, int col)
}

void LunaTraits< wxGridCellEnumRenderer >::_bind_dtor(wxGridCellEnumRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxGridCellEnumRenderer >::className[] = "wxGridCellEnumRenderer";
const char LunaTraits< wxGridCellEnumRenderer >::fullName[] = "wxGridCellEnumRenderer";
const char LunaTraits< wxGridCellEnumRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellEnumRenderer >::parents[] = {"wx.wxGridCellStringRenderer", 0};
const int LunaTraits< wxGridCellEnumRenderer >::hash = 21418363;
const int LunaTraits< wxGridCellEnumRenderer >::uniqueIDs[] = {96062845,0};

luna_RegType LunaTraits< wxGridCellEnumRenderer >::methods[] = {
	{"SetParameters", &luna_wrapper_wxGridCellEnumRenderer::_bind_SetParameters},
	{"base_SetParameters", &luna_wrapper_wxGridCellEnumRenderer::_bind_base_SetParameters},
	{"fromVoid", &luna_wrapper_wxGridCellEnumRenderer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGridCellEnumRenderer::_bind_asVoid},
	{"getTable", &luna_wrapper_wxGridCellEnumRenderer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellEnumRenderer >::converters[] = {
	{"wxGridCellRenderer", &luna_wrapper_wxGridCellEnumRenderer::_cast_from_wxGridCellRenderer},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellEnumRenderer >::enumValues[] = {
	{0,0}
};


