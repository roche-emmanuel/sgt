#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHeaderColumn.h>

class luna_wrapper_wxHeaderColumn {
public:
	typedef Luna< wxHeaderColumn > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxHeaderColumn* self=(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxHeaderColumn,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,185523) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxHeaderColumn*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxHeaderColumn* rhs =(Luna< wxHeaderColumn >::check(L,2));
		wxHeaderColumn* self=(Luna< wxHeaderColumn >::check(L,1));
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

		wxHeaderColumn* self= (wxHeaderColumn*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxHeaderColumn >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,185523) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxHeaderColumn >::check(L,1));
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

		wxHeaderColumn* self=(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxHeaderColumn");
		
		return luna_dynamicCast(L,converters,"wxHeaderColumn",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetTitle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBitmap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMinWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsResizeable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsSortable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsReorderable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsHidden(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsShown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsSortKey(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsSortOrderAscending(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsResizeable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsSortable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsReorderable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsHidden(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// wxString wxHeaderColumn::GetTitle() const
	static int _bind_GetTitle(lua_State *L) {
		if (!_lg_typecheck_GetTitle(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxHeaderColumn::GetTitle() const function, expected prototype:\nwxString wxHeaderColumn::GetTitle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumn* self=(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxHeaderColumn::GetTitle() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetTitle();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxBitmap wxHeaderColumn::GetBitmap() const
	static int _bind_GetBitmap(lua_State *L) {
		if (!_lg_typecheck_GetBitmap(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmap wxHeaderColumn::GetBitmap() const function, expected prototype:\nwxBitmap wxHeaderColumn::GetBitmap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumn* self=(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmap wxHeaderColumn::GetBitmap() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBitmap stack_lret = self->GetBitmap();
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// int wxHeaderColumn::GetWidth() const
	static int _bind_GetWidth(lua_State *L) {
		if (!_lg_typecheck_GetWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxHeaderColumn::GetWidth() const function, expected prototype:\nint wxHeaderColumn::GetWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumn* self=(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHeaderColumn::GetWidth() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHeaderColumn::GetMinWidth() const
	static int _bind_GetMinWidth(lua_State *L) {
		if (!_lg_typecheck_GetMinWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxHeaderColumn::GetMinWidth() const function, expected prototype:\nint wxHeaderColumn::GetMinWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumn* self=(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHeaderColumn::GetMinWidth() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetMinWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxAlignment wxHeaderColumn::GetAlignment() const
	static int _bind_GetAlignment(lua_State *L) {
		if (!_lg_typecheck_GetAlignment(L)) {
			luaL_error(L, "luna typecheck failed in wxAlignment wxHeaderColumn::GetAlignment() const function, expected prototype:\nwxAlignment wxHeaderColumn::GetAlignment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumn* self=(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAlignment wxHeaderColumn::GetAlignment() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxAlignment lret = self->GetAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHeaderColumn::GetFlags() const
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luaL_error(L, "luna typecheck failed in int wxHeaderColumn::GetFlags() const function, expected prototype:\nint wxHeaderColumn::GetFlags() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumn* self=(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHeaderColumn::GetFlags() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxHeaderColumn::HasFlag(int flag) const
	static int _bind_HasFlag(lua_State *L) {
		if (!_lg_typecheck_HasFlag(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHeaderColumn::HasFlag(int flag) const function, expected prototype:\nbool wxHeaderColumn::HasFlag(int flag) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int flag=(int)lua_tointeger(L,2);

		wxHeaderColumn* self=(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHeaderColumn::HasFlag(int) const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasFlag(flag);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderColumn::IsResizeable() const
	static int _bind_IsResizeable(lua_State *L) {
		if (!_lg_typecheck_IsResizeable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHeaderColumn::IsResizeable() const function, expected prototype:\nbool wxHeaderColumn::IsResizeable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumn* self=(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHeaderColumn::IsResizeable() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsResizeable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderColumn::IsSortable() const
	static int _bind_IsSortable(lua_State *L) {
		if (!_lg_typecheck_IsSortable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHeaderColumn::IsSortable() const function, expected prototype:\nbool wxHeaderColumn::IsSortable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumn* self=(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHeaderColumn::IsSortable() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsSortable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderColumn::IsReorderable() const
	static int _bind_IsReorderable(lua_State *L) {
		if (!_lg_typecheck_IsReorderable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHeaderColumn::IsReorderable() const function, expected prototype:\nbool wxHeaderColumn::IsReorderable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumn* self=(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHeaderColumn::IsReorderable() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsReorderable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderColumn::IsHidden() const
	static int _bind_IsHidden(lua_State *L) {
		if (!_lg_typecheck_IsHidden(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHeaderColumn::IsHidden() const function, expected prototype:\nbool wxHeaderColumn::IsHidden() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumn* self=(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHeaderColumn::IsHidden() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsHidden();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderColumn::IsShown() const
	static int _bind_IsShown(lua_State *L) {
		if (!_lg_typecheck_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHeaderColumn::IsShown() const function, expected prototype:\nbool wxHeaderColumn::IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumn* self=(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHeaderColumn::IsShown() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderColumn::IsSortKey() const
	static int _bind_IsSortKey(lua_State *L) {
		if (!_lg_typecheck_IsSortKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHeaderColumn::IsSortKey() const function, expected prototype:\nbool wxHeaderColumn::IsSortKey() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumn* self=(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHeaderColumn::IsSortKey() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsSortKey();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderColumn::IsSortOrderAscending() const
	static int _bind_IsSortOrderAscending(lua_State *L) {
		if (!_lg_typecheck_IsSortOrderAscending(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHeaderColumn::IsSortOrderAscending() const function, expected prototype:\nbool wxHeaderColumn::IsSortOrderAscending() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumn* self=(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHeaderColumn::IsSortOrderAscending() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsSortOrderAscending();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderColumn::base_IsResizeable() const
	static int _bind_base_IsResizeable(lua_State *L) {
		if (!_lg_typecheck_base_IsResizeable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHeaderColumn::base_IsResizeable() const function, expected prototype:\nbool wxHeaderColumn::base_IsResizeable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumn* self=(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHeaderColumn::base_IsResizeable() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHeaderColumn::IsResizeable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderColumn::base_IsSortable() const
	static int _bind_base_IsSortable(lua_State *L) {
		if (!_lg_typecheck_base_IsSortable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHeaderColumn::base_IsSortable() const function, expected prototype:\nbool wxHeaderColumn::base_IsSortable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumn* self=(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHeaderColumn::base_IsSortable() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHeaderColumn::IsSortable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderColumn::base_IsReorderable() const
	static int _bind_base_IsReorderable(lua_State *L) {
		if (!_lg_typecheck_base_IsReorderable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHeaderColumn::base_IsReorderable() const function, expected prototype:\nbool wxHeaderColumn::base_IsReorderable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumn* self=(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHeaderColumn::base_IsReorderable() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHeaderColumn::IsReorderable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderColumn::base_IsHidden() const
	static int _bind_base_IsHidden(lua_State *L) {
		if (!_lg_typecheck_base_IsHidden(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHeaderColumn::base_IsHidden() const function, expected prototype:\nbool wxHeaderColumn::base_IsHidden() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumn* self=(Luna< wxHeaderColumn >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHeaderColumn::base_IsHidden() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHeaderColumn::IsHidden();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxHeaderColumn* LunaTraits< wxHeaderColumn >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxString wxHeaderColumn::GetTitle() const
	// wxBitmap wxHeaderColumn::GetBitmap() const
	// int wxHeaderColumn::GetWidth() const
	// int wxHeaderColumn::GetMinWidth() const
	// wxAlignment wxHeaderColumn::GetAlignment() const
	// int wxHeaderColumn::GetFlags() const
	// bool wxHeaderColumn::IsSortKey() const
	// bool wxHeaderColumn::IsSortOrderAscending() const
}

void LunaTraits< wxHeaderColumn >::_bind_dtor(wxHeaderColumn* obj) {
	delete obj;
}

const char LunaTraits< wxHeaderColumn >::className[] = "wxHeaderColumn";
const char LunaTraits< wxHeaderColumn >::fullName[] = "wxHeaderColumn";
const char LunaTraits< wxHeaderColumn >::moduleName[] = "wx";
const char* LunaTraits< wxHeaderColumn >::parents[] = {0};
const int LunaTraits< wxHeaderColumn >::hash = 185523;
const int LunaTraits< wxHeaderColumn >::uniqueIDs[] = {185523,0};

luna_RegType LunaTraits< wxHeaderColumn >::methods[] = {
	{"GetTitle", &luna_wrapper_wxHeaderColumn::_bind_GetTitle},
	{"GetBitmap", &luna_wrapper_wxHeaderColumn::_bind_GetBitmap},
	{"GetWidth", &luna_wrapper_wxHeaderColumn::_bind_GetWidth},
	{"GetMinWidth", &luna_wrapper_wxHeaderColumn::_bind_GetMinWidth},
	{"GetAlignment", &luna_wrapper_wxHeaderColumn::_bind_GetAlignment},
	{"GetFlags", &luna_wrapper_wxHeaderColumn::_bind_GetFlags},
	{"HasFlag", &luna_wrapper_wxHeaderColumn::_bind_HasFlag},
	{"IsResizeable", &luna_wrapper_wxHeaderColumn::_bind_IsResizeable},
	{"IsSortable", &luna_wrapper_wxHeaderColumn::_bind_IsSortable},
	{"IsReorderable", &luna_wrapper_wxHeaderColumn::_bind_IsReorderable},
	{"IsHidden", &luna_wrapper_wxHeaderColumn::_bind_IsHidden},
	{"IsShown", &luna_wrapper_wxHeaderColumn::_bind_IsShown},
	{"IsSortKey", &luna_wrapper_wxHeaderColumn::_bind_IsSortKey},
	{"IsSortOrderAscending", &luna_wrapper_wxHeaderColumn::_bind_IsSortOrderAscending},
	{"base_IsResizeable", &luna_wrapper_wxHeaderColumn::_bind_base_IsResizeable},
	{"base_IsSortable", &luna_wrapper_wxHeaderColumn::_bind_base_IsSortable},
	{"base_IsReorderable", &luna_wrapper_wxHeaderColumn::_bind_base_IsReorderable},
	{"base_IsHidden", &luna_wrapper_wxHeaderColumn::_bind_base_IsHidden},
	{"dynCast", &luna_wrapper_wxHeaderColumn::_bind_dynCast},
	{"__eq", &luna_wrapper_wxHeaderColumn::_bind___eq},
	{"fromVoid", &luna_wrapper_wxHeaderColumn::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxHeaderColumn::_bind_asVoid},
	{"getTable", &luna_wrapper_wxHeaderColumn::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHeaderColumn >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxHeaderColumn >::enumValues[] = {
	{0,0}
};


