#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGridCellStringRenderer.h>

class luna_wrapper_wxGridCellStringRenderer {
public:
	typedef Luna< wxGridCellStringRenderer > luna_t;

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

		wxGridCellStringRenderer* self= (wxGridCellStringRenderer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGridCellStringRenderer >::push(L,self,false);
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
		//wxGridCellStringRenderer* ptr= dynamic_cast< wxGridCellStringRenderer* >(Luna< wxGridCellRenderer >::check(L,1));
		wxGridCellStringRenderer* ptr= luna_caster< wxGridCellRenderer, wxGridCellStringRenderer >::cast(Luna< wxGridCellRenderer >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridCellStringRenderer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGridCellStringRenderer::wxGridCellStringRenderer(lua_Table * data)
	static wxGridCellStringRenderer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellStringRenderer::wxGridCellStringRenderer(lua_Table * data) function, expected prototype:\nwxGridCellStringRenderer::wxGridCellStringRenderer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxGridCellStringRenderer(L,NULL);
	}


	// Function binds:

	// Operator binds:

};

wxGridCellStringRenderer* LunaTraits< wxGridCellStringRenderer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGridCellStringRenderer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxGridCellRenderer * wxGridCellRenderer::Clone() const
	// void wxGridCellRenderer::Draw(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, const wxRect & rect, int row, int col, bool isSelected)
	// wxSize wxGridCellRenderer::GetBestSize(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, int row, int col)
}

void LunaTraits< wxGridCellStringRenderer >::_bind_dtor(wxGridCellStringRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxGridCellStringRenderer >::className[] = "wxGridCellStringRenderer";
const char LunaTraits< wxGridCellStringRenderer >::fullName[] = "wxGridCellStringRenderer";
const char LunaTraits< wxGridCellStringRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellStringRenderer >::parents[] = {"wx.wxGridCellRenderer", 0};
const int LunaTraits< wxGridCellStringRenderer >::hash = 24780461;
const int LunaTraits< wxGridCellStringRenderer >::uniqueIDs[] = {96062845,0};

luna_RegType LunaTraits< wxGridCellStringRenderer >::methods[] = {
	{"fromVoid", &luna_wrapper_wxGridCellStringRenderer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGridCellStringRenderer::_bind_asVoid},
	{"getTable", &luna_wrapper_wxGridCellStringRenderer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellStringRenderer >::converters[] = {
	{"wxGridCellRenderer", &luna_wrapper_wxGridCellStringRenderer::_cast_from_wxGridCellRenderer},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellStringRenderer >::enumValues[] = {
	{0,0}
};


