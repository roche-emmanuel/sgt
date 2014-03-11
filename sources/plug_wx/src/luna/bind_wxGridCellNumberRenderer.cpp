#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGridCellNumberRenderer.h>

class luna_wrapper_wxGridCellNumberRenderer {
public:
	typedef Luna< wxGridCellNumberRenderer > luna_t;

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

		wxGridCellNumberRenderer* self= (wxGridCellNumberRenderer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGridCellNumberRenderer >::push(L,self,false);
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
		//wxGridCellNumberRenderer* ptr= dynamic_cast< wxGridCellNumberRenderer* >(Luna< wxGridCellRenderer >::check(L,1));
		wxGridCellNumberRenderer* ptr= luna_caster< wxGridCellRenderer, wxGridCellNumberRenderer >::cast(Luna< wxGridCellRenderer >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridCellNumberRenderer >::push(L,ptr,false);
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
	// wxGridCellNumberRenderer::wxGridCellNumberRenderer(lua_Table * data)
	static wxGridCellNumberRenderer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellNumberRenderer::wxGridCellNumberRenderer(lua_Table * data) function, expected prototype:\nwxGridCellNumberRenderer::wxGridCellNumberRenderer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxGridCellNumberRenderer(L,NULL);
	}


	// Function binds:

	// Operator binds:

};

wxGridCellNumberRenderer* LunaTraits< wxGridCellNumberRenderer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGridCellNumberRenderer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxGridCellRenderer * wxGridCellRenderer::Clone() const
	// void wxGridCellRenderer::Draw(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, const wxRect & rect, int row, int col, bool isSelected)
	// wxSize wxGridCellRenderer::GetBestSize(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, int row, int col)
}

void LunaTraits< wxGridCellNumberRenderer >::_bind_dtor(wxGridCellNumberRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxGridCellNumberRenderer >::className[] = "wxGridCellNumberRenderer";
const char LunaTraits< wxGridCellNumberRenderer >::fullName[] = "wxGridCellNumberRenderer";
const char LunaTraits< wxGridCellNumberRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellNumberRenderer >::parents[] = {"wx.wxGridCellStringRenderer", 0};
const int LunaTraits< wxGridCellNumberRenderer >::hash = 25671042;
const int LunaTraits< wxGridCellNumberRenderer >::uniqueIDs[] = {96062845,0};

luna_RegType LunaTraits< wxGridCellNumberRenderer >::methods[] = {
	{"fromVoid", &luna_wrapper_wxGridCellNumberRenderer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGridCellNumberRenderer::_bind_asVoid},
	{"getTable", &luna_wrapper_wxGridCellNumberRenderer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellNumberRenderer >::converters[] = {
	{"wxGridCellRenderer", &luna_wrapper_wxGridCellNumberRenderer::_cast_from_wxGridCellRenderer},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellNumberRenderer >::enumValues[] = {
	{0,0}
};


