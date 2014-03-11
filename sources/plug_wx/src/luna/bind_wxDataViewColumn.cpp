#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataViewColumn.h>

class luna_wrapper_wxDataViewColumn {
public:
	typedef Luna< wxDataViewColumn > luna_t;

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

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDataViewColumn* self= (wxDataViewColumn*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDataViewColumn >::push(L,self,false);
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

	// Derived class converters:
	static int _cast_from_wxHeaderColumn(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxDataViewColumn* ptr= dynamic_cast< wxDataViewColumn* >(Luna< wxHeaderColumn >::check(L,1));
		wxDataViewColumn* ptr= luna_caster< wxHeaderColumn, wxDataViewColumn >::cast(Luna< wxHeaderColumn >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewColumn >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxDataViewRenderer >(L,3)) ) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxDataViewRenderer >(L,3)) ) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetModelColumn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOwner(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRenderer(lua_State *L) {
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

	inline static bool _lg_typecheck_base_SetResizeable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetSortable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetReorderable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetHidden(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDataViewColumn::wxDataViewColumn(lua_Table * data, const wxString & title, wxDataViewRenderer * renderer, unsigned int model_column, int width = 80, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxDATAVIEW_COL_RESIZABLE)
	static wxDataViewColumn* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewColumn::wxDataViewColumn(lua_Table * data, const wxString & title, wxDataViewRenderer * renderer, unsigned int model_column, int width = 80, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn::wxDataViewColumn(lua_Table * data, const wxString & title, wxDataViewRenderer * renderer, unsigned int model_column, int width = 80, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString title(lua_tostring(L,2),lua_objlen(L,2));
		wxDataViewRenderer* renderer=(Luna< wxObject >::checkSubType< wxDataViewRenderer >(L,3));
		unsigned int model_column=(unsigned int)lua_tointeger(L,4);
		int width=luatop>4 ? (int)lua_tointeger(L,5) : (int)80;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : (wxAlignment)::wxALIGN_CENTER;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : (int)::wxDATAVIEW_COL_RESIZABLE;

		return new wrapper_wxDataViewColumn(L,NULL, title, renderer, model_column, width, align, flags);
	}

	// wxDataViewColumn::wxDataViewColumn(lua_Table * data, const wxBitmap & bitmap, wxDataViewRenderer * renderer, unsigned int model_column, int width = 80, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxDATAVIEW_COL_RESIZABLE)
	static wxDataViewColumn* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewColumn::wxDataViewColumn(lua_Table * data, const wxBitmap & bitmap, wxDataViewRenderer * renderer, unsigned int model_column, int width = 80, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn::wxDataViewColumn(lua_Table * data, const wxBitmap & bitmap, wxDataViewRenderer * renderer, unsigned int model_column, int width = 80, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxDataViewColumn::wxDataViewColumn function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		wxDataViewRenderer* renderer=(Luna< wxObject >::checkSubType< wxDataViewRenderer >(L,3));
		unsigned int model_column=(unsigned int)lua_tointeger(L,4);
		int width=luatop>4 ? (int)lua_tointeger(L,5) : (int)80;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : (wxAlignment)::wxALIGN_CENTER;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : (int)::wxDATAVIEW_COL_RESIZABLE;

		return new wrapper_wxDataViewColumn(L,NULL, bitmap, renderer, model_column, width, align, flags);
	}

	// Overload binder for wxDataViewColumn::wxDataViewColumn
	static wxDataViewColumn* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxDataViewColumn, cannot match any of the overloads for function wxDataViewColumn:\n  wxDataViewColumn(lua_Table *, const wxString &, wxDataViewRenderer *, unsigned int, int, wxAlignment, int)\n  wxDataViewColumn(lua_Table *, const wxBitmap &, wxDataViewRenderer *, unsigned int, int, wxAlignment, int)\n");
		return NULL;
	}


	// Function binds:
	// unsigned int wxDataViewColumn::GetModelColumn() const
	static int _bind_GetModelColumn(lua_State *L) {
		if (!_lg_typecheck_GetModelColumn(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxDataViewColumn::GetModelColumn() const function, expected prototype:\nunsigned int wxDataViewColumn::GetModelColumn() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewColumn* self=Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxDataViewColumn::GetModelColumn() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetModelColumn();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewCtrl * wxDataViewColumn::GetOwner() const
	static int _bind_GetOwner(lua_State *L) {
		if (!_lg_typecheck_GetOwner(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewCtrl * wxDataViewColumn::GetOwner() const function, expected prototype:\nwxDataViewCtrl * wxDataViewColumn::GetOwner() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewColumn* self=Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewCtrl * wxDataViewColumn::GetOwner() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewCtrl * lret = self->GetOwner();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewCtrl >::push(L,lret,false);

		return 1;
	}

	// wxDataViewRenderer * wxDataViewColumn::GetRenderer() const
	static int _bind_GetRenderer(lua_State *L) {
		if (!_lg_typecheck_GetRenderer(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewRenderer * wxDataViewColumn::GetRenderer() const function, expected prototype:\nwxDataViewRenderer * wxDataViewColumn::GetRenderer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewColumn* self=Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewRenderer * wxDataViewColumn::GetRenderer() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewRenderer * lret = self->GetRenderer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewRenderer >::push(L,lret,false);

		return 1;
	}

	// bool wxDataViewColumn::base_IsResizeable() const
	static int _bind_base_IsResizeable(lua_State *L) {
		if (!_lg_typecheck_base_IsResizeable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewColumn::base_IsResizeable() const function, expected prototype:\nbool wxDataViewColumn::base_IsResizeable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewColumn* self=Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewColumn::base_IsResizeable() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewColumn::IsResizeable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewColumn::base_IsSortable() const
	static int _bind_base_IsSortable(lua_State *L) {
		if (!_lg_typecheck_base_IsSortable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewColumn::base_IsSortable() const function, expected prototype:\nbool wxDataViewColumn::base_IsSortable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewColumn* self=Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewColumn::base_IsSortable() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewColumn::IsSortable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewColumn::base_IsReorderable() const
	static int _bind_base_IsReorderable(lua_State *L) {
		if (!_lg_typecheck_base_IsReorderable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewColumn::base_IsReorderable() const function, expected prototype:\nbool wxDataViewColumn::base_IsReorderable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewColumn* self=Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewColumn::base_IsReorderable() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewColumn::IsReorderable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewColumn::base_IsHidden() const
	static int _bind_base_IsHidden(lua_State *L) {
		if (!_lg_typecheck_base_IsHidden(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewColumn::base_IsHidden() const function, expected prototype:\nbool wxDataViewColumn::base_IsHidden() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewColumn* self=Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewColumn::base_IsHidden() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewColumn::IsHidden();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewColumn::base_SetResizeable(bool resizable)
	static int _bind_base_SetResizeable(lua_State *L) {
		if (!_lg_typecheck_base_SetResizeable(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewColumn::base_SetResizeable(bool resizable) function, expected prototype:\nvoid wxDataViewColumn::base_SetResizeable(bool resizable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool resizable=(bool)(lua_toboolean(L,2)==1);

		wxDataViewColumn* self=Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewColumn::base_SetResizeable(bool). Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewColumn::SetResizeable(resizable);

		return 0;
	}

	// void wxDataViewColumn::base_SetSortable(bool sortable)
	static int _bind_base_SetSortable(lua_State *L) {
		if (!_lg_typecheck_base_SetSortable(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewColumn::base_SetSortable(bool sortable) function, expected prototype:\nvoid wxDataViewColumn::base_SetSortable(bool sortable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool sortable=(bool)(lua_toboolean(L,2)==1);

		wxDataViewColumn* self=Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewColumn::base_SetSortable(bool). Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewColumn::SetSortable(sortable);

		return 0;
	}

	// void wxDataViewColumn::base_SetReorderable(bool reorderable)
	static int _bind_base_SetReorderable(lua_State *L) {
		if (!_lg_typecheck_base_SetReorderable(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewColumn::base_SetReorderable(bool reorderable) function, expected prototype:\nvoid wxDataViewColumn::base_SetReorderable(bool reorderable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool reorderable=(bool)(lua_toboolean(L,2)==1);

		wxDataViewColumn* self=Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewColumn::base_SetReorderable(bool). Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewColumn::SetReorderable(reorderable);

		return 0;
	}

	// void wxDataViewColumn::base_SetHidden(bool hidden)
	static int _bind_base_SetHidden(lua_State *L) {
		if (!_lg_typecheck_base_SetHidden(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewColumn::base_SetHidden(bool hidden) function, expected prototype:\nvoid wxDataViewColumn::base_SetHidden(bool hidden)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool hidden=(bool)(lua_toboolean(L,2)==1);

		wxDataViewColumn* self=Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewColumn::base_SetHidden(bool). Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewColumn::SetHidden(hidden);

		return 0;
	}


	// Operator binds:

};

wxDataViewColumn* LunaTraits< wxDataViewColumn >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataViewColumn::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxSettableHeaderColumn::SetTitle(const wxString & title)
	// void wxSettableHeaderColumn::SetBitmap(const wxBitmap & bitmap)
	// void wxSettableHeaderColumn::SetWidth(int width)
	// void wxSettableHeaderColumn::SetMinWidth(int minWidth)
	// void wxSettableHeaderColumn::SetAlignment(wxAlignment align)
	// void wxSettableHeaderColumn::SetFlags(int flags)
	// void wxSettableHeaderColumn::SetSortOrder(bool ascending)
	// wxString wxHeaderColumn::GetTitle() const
	// wxBitmap wxHeaderColumn::GetBitmap() const
	// int wxHeaderColumn::GetWidth() const
	// int wxHeaderColumn::GetMinWidth() const
	// wxAlignment wxHeaderColumn::GetAlignment() const
	// int wxHeaderColumn::GetFlags() const
	// bool wxHeaderColumn::IsSortKey() const
	// bool wxHeaderColumn::IsSortOrderAscending() const
}

void LunaTraits< wxDataViewColumn >::_bind_dtor(wxDataViewColumn* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewColumn >::className[] = "wxDataViewColumn";
const char LunaTraits< wxDataViewColumn >::fullName[] = "wxDataViewColumn";
const char LunaTraits< wxDataViewColumn >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewColumn >::parents[] = {"wx.wxSettableHeaderColumn", 0};
const int LunaTraits< wxDataViewColumn >::hash = 76490705;
const int LunaTraits< wxDataViewColumn >::uniqueIDs[] = {185523,0};

luna_RegType LunaTraits< wxDataViewColumn >::methods[] = {
	{"GetModelColumn", &luna_wrapper_wxDataViewColumn::_bind_GetModelColumn},
	{"GetOwner", &luna_wrapper_wxDataViewColumn::_bind_GetOwner},
	{"GetRenderer", &luna_wrapper_wxDataViewColumn::_bind_GetRenderer},
	{"base_IsResizeable", &luna_wrapper_wxDataViewColumn::_bind_base_IsResizeable},
	{"base_IsSortable", &luna_wrapper_wxDataViewColumn::_bind_base_IsSortable},
	{"base_IsReorderable", &luna_wrapper_wxDataViewColumn::_bind_base_IsReorderable},
	{"base_IsHidden", &luna_wrapper_wxDataViewColumn::_bind_base_IsHidden},
	{"base_SetResizeable", &luna_wrapper_wxDataViewColumn::_bind_base_SetResizeable},
	{"base_SetSortable", &luna_wrapper_wxDataViewColumn::_bind_base_SetSortable},
	{"base_SetReorderable", &luna_wrapper_wxDataViewColumn::_bind_base_SetReorderable},
	{"base_SetHidden", &luna_wrapper_wxDataViewColumn::_bind_base_SetHidden},
	{"fromVoid", &luna_wrapper_wxDataViewColumn::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDataViewColumn::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDataViewColumn::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewColumn >::converters[] = {
	{"wxHeaderColumn", &luna_wrapper_wxDataViewColumn::_cast_from_wxHeaderColumn},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewColumn >::enumValues[] = {
	{0,0}
};


