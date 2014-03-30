#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHeaderColumnSimple.h>

class luna_wrapper_wxHeaderColumnSimple {
public:
	typedef Luna< wxHeaderColumnSimple > luna_t;

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

		wxHeaderColumnSimple* self= (wxHeaderColumnSimple*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxHeaderColumnSimple >::push(L,self,false);
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
		//wxHeaderColumnSimple* ptr= dynamic_cast< wxHeaderColumnSimple* >(Luna< wxHeaderColumn >::check(L,1));
		wxHeaderColumnSimple* ptr= luna_caster< wxHeaderColumn, wxHeaderColumnSimple >::cast(Luna< wxHeaderColumn >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHeaderColumnSimple >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,1))) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetTitle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTitle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBitmap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMinWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMinWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsSortKey(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSortOrder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_SetTitle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetTitle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetBitmap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetMinWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetMinWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsSortKey(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetSortOrder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsSortOrderAscending(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHeaderColumnSimple::wxHeaderColumnSimple(const wxString & title, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxCOL_DEFAULT_FLAGS)
	static wxHeaderColumnSimple* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxHeaderColumnSimple::wxHeaderColumnSimple(const wxString & title, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxCOL_DEFAULT_FLAGS) function, expected prototype:\nwxHeaderColumnSimple::wxHeaderColumnSimple(const wxString & title, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxCOL_DEFAULT_FLAGS)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString title(lua_tostring(L,1),lua_objlen(L,1));
		int width=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxCOL_WIDTH_DEFAULT;
		wxAlignment align=luatop>2 ? (wxAlignment)lua_tointeger(L,3) : (wxAlignment)::wxALIGN_NOT;
		int flags=luatop>3 ? (int)lua_tointeger(L,4) : (int)::wxCOL_DEFAULT_FLAGS;

		return new wxHeaderColumnSimple(title, width, align, flags);
	}

	// wxHeaderColumnSimple::wxHeaderColumnSimple(const wxBitmap & bitmap, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxCOL_DEFAULT_FLAGS)
	static wxHeaderColumnSimple* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxHeaderColumnSimple::wxHeaderColumnSimple(const wxBitmap & bitmap, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxCOL_DEFAULT_FLAGS) function, expected prototype:\nwxHeaderColumnSimple::wxHeaderColumnSimple(const wxBitmap & bitmap, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxCOL_DEFAULT_FLAGS)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,1));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxHeaderColumnSimple::wxHeaderColumnSimple function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		int width=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxCOL_WIDTH_DEFAULT;
		wxAlignment align=luatop>2 ? (wxAlignment)lua_tointeger(L,3) : (wxAlignment)::wxALIGN_CENTER;
		int flags=luatop>3 ? (int)lua_tointeger(L,4) : (int)::wxCOL_DEFAULT_FLAGS;

		return new wxHeaderColumnSimple(bitmap, width, align, flags);
	}

	// wxHeaderColumnSimple::wxHeaderColumnSimple(lua_Table * data, const wxString & title, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxCOL_DEFAULT_FLAGS)
	static wxHeaderColumnSimple* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxHeaderColumnSimple::wxHeaderColumnSimple(lua_Table * data, const wxString & title, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxCOL_DEFAULT_FLAGS) function, expected prototype:\nwxHeaderColumnSimple::wxHeaderColumnSimple(lua_Table * data, const wxString & title, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxCOL_DEFAULT_FLAGS)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString title(lua_tostring(L,2),lua_objlen(L,2));
		int width=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxCOL_WIDTH_DEFAULT;
		wxAlignment align=luatop>3 ? (wxAlignment)lua_tointeger(L,4) : (wxAlignment)::wxALIGN_NOT;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : (int)::wxCOL_DEFAULT_FLAGS;

		return new wrapper_wxHeaderColumnSimple(L,NULL, title, width, align, flags);
	}

	// wxHeaderColumnSimple::wxHeaderColumnSimple(lua_Table * data, const wxBitmap & bitmap, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxCOL_DEFAULT_FLAGS)
	static wxHeaderColumnSimple* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxHeaderColumnSimple::wxHeaderColumnSimple(lua_Table * data, const wxBitmap & bitmap, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxCOL_DEFAULT_FLAGS) function, expected prototype:\nwxHeaderColumnSimple::wxHeaderColumnSimple(lua_Table * data, const wxBitmap & bitmap, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxCOL_DEFAULT_FLAGS)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxHeaderColumnSimple::wxHeaderColumnSimple function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		int width=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxCOL_WIDTH_DEFAULT;
		wxAlignment align=luatop>3 ? (wxAlignment)lua_tointeger(L,4) : (wxAlignment)::wxALIGN_CENTER;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : (int)::wxCOL_DEFAULT_FLAGS;

		return new wrapper_wxHeaderColumnSimple(L,NULL, bitmap, width, align, flags);
	}

	// Overload binder for wxHeaderColumnSimple::wxHeaderColumnSimple
	static wxHeaderColumnSimple* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxHeaderColumnSimple, cannot match any of the overloads for function wxHeaderColumnSimple:\n  wxHeaderColumnSimple(const wxString &, int, wxAlignment, int)\n  wxHeaderColumnSimple(const wxBitmap &, int, wxAlignment, int)\n  wxHeaderColumnSimple(lua_Table *, const wxString &, int, wxAlignment, int)\n  wxHeaderColumnSimple(lua_Table *, const wxBitmap &, int, wxAlignment, int)\n");
		return NULL;
	}


	// Function binds:
	// void wxHeaderColumnSimple::SetTitle(const wxString & title)
	static int _bind_SetTitle(lua_State *L) {
		if (!_lg_typecheck_SetTitle(L)) {
			luaL_error(L, "luna typecheck failed in void wxHeaderColumnSimple::SetTitle(const wxString & title) function, expected prototype:\nvoid wxHeaderColumnSimple::SetTitle(const wxString & title)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString title(lua_tostring(L,2),lua_objlen(L,2));

		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHeaderColumnSimple::SetTitle(const wxString &). Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTitle(title);

		return 0;
	}

	// wxString wxHeaderColumnSimple::GetTitle() const
	static int _bind_GetTitle(lua_State *L) {
		if (!_lg_typecheck_GetTitle(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxHeaderColumnSimple::GetTitle() const function, expected prototype:\nwxString wxHeaderColumnSimple::GetTitle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxHeaderColumnSimple::GetTitle() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetTitle();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxHeaderColumnSimple::SetBitmap(const wxBitmap & bitmap)
	static int _bind_SetBitmap(lua_State *L) {
		if (!_lg_typecheck_SetBitmap(L)) {
			luaL_error(L, "luna typecheck failed in void wxHeaderColumnSimple::SetBitmap(const wxBitmap & bitmap) function, expected prototype:\nvoid wxHeaderColumnSimple::SetBitmap(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxHeaderColumnSimple::SetBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHeaderColumnSimple::SetBitmap(const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBitmap(bitmap);

		return 0;
	}

	// wxBitmap wxHeaderColumnSimple::GetBitmap() const
	static int _bind_GetBitmap(lua_State *L) {
		if (!_lg_typecheck_GetBitmap(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmap wxHeaderColumnSimple::GetBitmap() const function, expected prototype:\nwxBitmap wxHeaderColumnSimple::GetBitmap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmap wxHeaderColumnSimple::GetBitmap() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBitmap stack_lret = self->GetBitmap();
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// void wxHeaderColumnSimple::SetWidth(int width)
	static int _bind_SetWidth(lua_State *L) {
		if (!_lg_typecheck_SetWidth(L)) {
			luaL_error(L, "luna typecheck failed in void wxHeaderColumnSimple::SetWidth(int width) function, expected prototype:\nvoid wxHeaderColumnSimple::SetWidth(int width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);

		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHeaderColumnSimple::SetWidth(int). Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWidth(width);

		return 0;
	}

	// int wxHeaderColumnSimple::GetWidth() const
	static int _bind_GetWidth(lua_State *L) {
		if (!_lg_typecheck_GetWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxHeaderColumnSimple::GetWidth() const function, expected prototype:\nint wxHeaderColumnSimple::GetWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHeaderColumnSimple::GetWidth() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxHeaderColumnSimple::SetMinWidth(int minWidth)
	static int _bind_SetMinWidth(lua_State *L) {
		if (!_lg_typecheck_SetMinWidth(L)) {
			luaL_error(L, "luna typecheck failed in void wxHeaderColumnSimple::SetMinWidth(int minWidth) function, expected prototype:\nvoid wxHeaderColumnSimple::SetMinWidth(int minWidth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int minWidth=(int)lua_tointeger(L,2);

		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHeaderColumnSimple::SetMinWidth(int). Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMinWidth(minWidth);

		return 0;
	}

	// int wxHeaderColumnSimple::GetMinWidth() const
	static int _bind_GetMinWidth(lua_State *L) {
		if (!_lg_typecheck_GetMinWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxHeaderColumnSimple::GetMinWidth() const function, expected prototype:\nint wxHeaderColumnSimple::GetMinWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHeaderColumnSimple::GetMinWidth() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetMinWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxHeaderColumnSimple::SetAlignment(wxAlignment align)
	static int _bind_SetAlignment(lua_State *L) {
		if (!_lg_typecheck_SetAlignment(L)) {
			luaL_error(L, "luna typecheck failed in void wxHeaderColumnSimple::SetAlignment(wxAlignment align) function, expected prototype:\nvoid wxHeaderColumnSimple::SetAlignment(wxAlignment align)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxAlignment align=(wxAlignment)lua_tointeger(L,2);

		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHeaderColumnSimple::SetAlignment(wxAlignment). Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAlignment(align);

		return 0;
	}

	// wxAlignment wxHeaderColumnSimple::GetAlignment() const
	static int _bind_GetAlignment(lua_State *L) {
		if (!_lg_typecheck_GetAlignment(L)) {
			luaL_error(L, "luna typecheck failed in wxAlignment wxHeaderColumnSimple::GetAlignment() const function, expected prototype:\nwxAlignment wxHeaderColumnSimple::GetAlignment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAlignment wxHeaderColumnSimple::GetAlignment() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxAlignment lret = self->GetAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxHeaderColumnSimple::SetFlags(int flags)
	static int _bind_SetFlags(lua_State *L) {
		if (!_lg_typecheck_SetFlags(L)) {
			luaL_error(L, "luna typecheck failed in void wxHeaderColumnSimple::SetFlags(int flags) function, expected prototype:\nvoid wxHeaderColumnSimple::SetFlags(int flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int flags=(int)lua_tointeger(L,2);

		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHeaderColumnSimple::SetFlags(int). Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFlags(flags);

		return 0;
	}

	// int wxHeaderColumnSimple::GetFlags() const
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luaL_error(L, "luna typecheck failed in int wxHeaderColumnSimple::GetFlags() const function, expected prototype:\nint wxHeaderColumnSimple::GetFlags() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHeaderColumnSimple::GetFlags() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxHeaderColumnSimple::IsSortKey() const
	static int _bind_IsSortKey(lua_State *L) {
		if (!_lg_typecheck_IsSortKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHeaderColumnSimple::IsSortKey() const function, expected prototype:\nbool wxHeaderColumnSimple::IsSortKey() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHeaderColumnSimple::IsSortKey() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsSortKey();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHeaderColumnSimple::SetSortOrder(bool ascending)
	static int _bind_SetSortOrder(lua_State *L) {
		if (!_lg_typecheck_SetSortOrder(L)) {
			luaL_error(L, "luna typecheck failed in void wxHeaderColumnSimple::SetSortOrder(bool ascending) function, expected prototype:\nvoid wxHeaderColumnSimple::SetSortOrder(bool ascending)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool ascending=(bool)(lua_toboolean(L,2)==1);

		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHeaderColumnSimple::SetSortOrder(bool). Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSortOrder(ascending);

		return 0;
	}

	// bool wxHeaderColumnSimple::IsSortOrderAscending() const
	static int _bind_IsSortOrderAscending(lua_State *L) {
		if (!_lg_typecheck_IsSortOrderAscending(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHeaderColumnSimple::IsSortOrderAscending() const function, expected prototype:\nbool wxHeaderColumnSimple::IsSortOrderAscending() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHeaderColumnSimple::IsSortOrderAscending() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsSortOrderAscending();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderColumnSimple::base_IsResizeable() const
	static int _bind_base_IsResizeable(lua_State *L) {
		if (!_lg_typecheck_base_IsResizeable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHeaderColumnSimple::base_IsResizeable() const function, expected prototype:\nbool wxHeaderColumnSimple::base_IsResizeable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHeaderColumnSimple::base_IsResizeable() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHeaderColumnSimple::IsResizeable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderColumnSimple::base_IsSortable() const
	static int _bind_base_IsSortable(lua_State *L) {
		if (!_lg_typecheck_base_IsSortable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHeaderColumnSimple::base_IsSortable() const function, expected prototype:\nbool wxHeaderColumnSimple::base_IsSortable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHeaderColumnSimple::base_IsSortable() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHeaderColumnSimple::IsSortable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderColumnSimple::base_IsReorderable() const
	static int _bind_base_IsReorderable(lua_State *L) {
		if (!_lg_typecheck_base_IsReorderable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHeaderColumnSimple::base_IsReorderable() const function, expected prototype:\nbool wxHeaderColumnSimple::base_IsReorderable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHeaderColumnSimple::base_IsReorderable() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHeaderColumnSimple::IsReorderable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHeaderColumnSimple::base_IsHidden() const
	static int _bind_base_IsHidden(lua_State *L) {
		if (!_lg_typecheck_base_IsHidden(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHeaderColumnSimple::base_IsHidden() const function, expected prototype:\nbool wxHeaderColumnSimple::base_IsHidden() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHeaderColumnSimple::base_IsHidden() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHeaderColumnSimple::IsHidden();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHeaderColumnSimple::base_SetResizeable(bool resizable)
	static int _bind_base_SetResizeable(lua_State *L) {
		if (!_lg_typecheck_base_SetResizeable(L)) {
			luaL_error(L, "luna typecheck failed in void wxHeaderColumnSimple::base_SetResizeable(bool resizable) function, expected prototype:\nvoid wxHeaderColumnSimple::base_SetResizeable(bool resizable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool resizable=(bool)(lua_toboolean(L,2)==1);

		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHeaderColumnSimple::base_SetResizeable(bool). Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHeaderColumnSimple::SetResizeable(resizable);

		return 0;
	}

	// void wxHeaderColumnSimple::base_SetSortable(bool sortable)
	static int _bind_base_SetSortable(lua_State *L) {
		if (!_lg_typecheck_base_SetSortable(L)) {
			luaL_error(L, "luna typecheck failed in void wxHeaderColumnSimple::base_SetSortable(bool sortable) function, expected prototype:\nvoid wxHeaderColumnSimple::base_SetSortable(bool sortable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool sortable=(bool)(lua_toboolean(L,2)==1);

		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHeaderColumnSimple::base_SetSortable(bool). Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHeaderColumnSimple::SetSortable(sortable);

		return 0;
	}

	// void wxHeaderColumnSimple::base_SetReorderable(bool reorderable)
	static int _bind_base_SetReorderable(lua_State *L) {
		if (!_lg_typecheck_base_SetReorderable(L)) {
			luaL_error(L, "luna typecheck failed in void wxHeaderColumnSimple::base_SetReorderable(bool reorderable) function, expected prototype:\nvoid wxHeaderColumnSimple::base_SetReorderable(bool reorderable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool reorderable=(bool)(lua_toboolean(L,2)==1);

		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHeaderColumnSimple::base_SetReorderable(bool). Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHeaderColumnSimple::SetReorderable(reorderable);

		return 0;
	}

	// void wxHeaderColumnSimple::base_SetHidden(bool hidden)
	static int _bind_base_SetHidden(lua_State *L) {
		if (!_lg_typecheck_base_SetHidden(L)) {
			luaL_error(L, "luna typecheck failed in void wxHeaderColumnSimple::base_SetHidden(bool hidden) function, expected prototype:\nvoid wxHeaderColumnSimple::base_SetHidden(bool hidden)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool hidden=(bool)(lua_toboolean(L,2)==1);

		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHeaderColumnSimple::base_SetHidden(bool). Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHeaderColumnSimple::SetHidden(hidden);

		return 0;
	}

	// void wxHeaderColumnSimple::base_SetTitle(const wxString & title)
	static int _bind_base_SetTitle(lua_State *L) {
		if (!_lg_typecheck_base_SetTitle(L)) {
			luaL_error(L, "luna typecheck failed in void wxHeaderColumnSimple::base_SetTitle(const wxString & title) function, expected prototype:\nvoid wxHeaderColumnSimple::base_SetTitle(const wxString & title)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString title(lua_tostring(L,2),lua_objlen(L,2));

		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHeaderColumnSimple::base_SetTitle(const wxString &). Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHeaderColumnSimple::SetTitle(title);

		return 0;
	}

	// wxString wxHeaderColumnSimple::base_GetTitle() const
	static int _bind_base_GetTitle(lua_State *L) {
		if (!_lg_typecheck_base_GetTitle(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxHeaderColumnSimple::base_GetTitle() const function, expected prototype:\nwxString wxHeaderColumnSimple::base_GetTitle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxHeaderColumnSimple::base_GetTitle() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxHeaderColumnSimple::GetTitle();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxHeaderColumnSimple::base_SetBitmap(const wxBitmap & bitmap)
	static int _bind_base_SetBitmap(lua_State *L) {
		if (!_lg_typecheck_base_SetBitmap(L)) {
			luaL_error(L, "luna typecheck failed in void wxHeaderColumnSimple::base_SetBitmap(const wxBitmap & bitmap) function, expected prototype:\nvoid wxHeaderColumnSimple::base_SetBitmap(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxHeaderColumnSimple::base_SetBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHeaderColumnSimple::base_SetBitmap(const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHeaderColumnSimple::SetBitmap(bitmap);

		return 0;
	}

	// wxBitmap wxHeaderColumnSimple::base_GetBitmap() const
	static int _bind_base_GetBitmap(lua_State *L) {
		if (!_lg_typecheck_base_GetBitmap(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmap wxHeaderColumnSimple::base_GetBitmap() const function, expected prototype:\nwxBitmap wxHeaderColumnSimple::base_GetBitmap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmap wxHeaderColumnSimple::base_GetBitmap() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBitmap stack_lret = self->wxHeaderColumnSimple::GetBitmap();
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// void wxHeaderColumnSimple::base_SetWidth(int width)
	static int _bind_base_SetWidth(lua_State *L) {
		if (!_lg_typecheck_base_SetWidth(L)) {
			luaL_error(L, "luna typecheck failed in void wxHeaderColumnSimple::base_SetWidth(int width) function, expected prototype:\nvoid wxHeaderColumnSimple::base_SetWidth(int width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);

		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHeaderColumnSimple::base_SetWidth(int). Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHeaderColumnSimple::SetWidth(width);

		return 0;
	}

	// int wxHeaderColumnSimple::base_GetWidth() const
	static int _bind_base_GetWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxHeaderColumnSimple::base_GetWidth() const function, expected prototype:\nint wxHeaderColumnSimple::base_GetWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHeaderColumnSimple::base_GetWidth() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxHeaderColumnSimple::GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxHeaderColumnSimple::base_SetMinWidth(int minWidth)
	static int _bind_base_SetMinWidth(lua_State *L) {
		if (!_lg_typecheck_base_SetMinWidth(L)) {
			luaL_error(L, "luna typecheck failed in void wxHeaderColumnSimple::base_SetMinWidth(int minWidth) function, expected prototype:\nvoid wxHeaderColumnSimple::base_SetMinWidth(int minWidth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int minWidth=(int)lua_tointeger(L,2);

		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHeaderColumnSimple::base_SetMinWidth(int). Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHeaderColumnSimple::SetMinWidth(minWidth);

		return 0;
	}

	// int wxHeaderColumnSimple::base_GetMinWidth() const
	static int _bind_base_GetMinWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetMinWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxHeaderColumnSimple::base_GetMinWidth() const function, expected prototype:\nint wxHeaderColumnSimple::base_GetMinWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHeaderColumnSimple::base_GetMinWidth() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxHeaderColumnSimple::GetMinWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxHeaderColumnSimple::base_SetAlignment(wxAlignment align)
	static int _bind_base_SetAlignment(lua_State *L) {
		if (!_lg_typecheck_base_SetAlignment(L)) {
			luaL_error(L, "luna typecheck failed in void wxHeaderColumnSimple::base_SetAlignment(wxAlignment align) function, expected prototype:\nvoid wxHeaderColumnSimple::base_SetAlignment(wxAlignment align)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxAlignment align=(wxAlignment)lua_tointeger(L,2);

		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHeaderColumnSimple::base_SetAlignment(wxAlignment). Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHeaderColumnSimple::SetAlignment(align);

		return 0;
	}

	// wxAlignment wxHeaderColumnSimple::base_GetAlignment() const
	static int _bind_base_GetAlignment(lua_State *L) {
		if (!_lg_typecheck_base_GetAlignment(L)) {
			luaL_error(L, "luna typecheck failed in wxAlignment wxHeaderColumnSimple::base_GetAlignment() const function, expected prototype:\nwxAlignment wxHeaderColumnSimple::base_GetAlignment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAlignment wxHeaderColumnSimple::base_GetAlignment() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxAlignment lret = self->wxHeaderColumnSimple::GetAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxHeaderColumnSimple::base_SetFlags(int flags)
	static int _bind_base_SetFlags(lua_State *L) {
		if (!_lg_typecheck_base_SetFlags(L)) {
			luaL_error(L, "luna typecheck failed in void wxHeaderColumnSimple::base_SetFlags(int flags) function, expected prototype:\nvoid wxHeaderColumnSimple::base_SetFlags(int flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int flags=(int)lua_tointeger(L,2);

		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHeaderColumnSimple::base_SetFlags(int). Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHeaderColumnSimple::SetFlags(flags);

		return 0;
	}

	// int wxHeaderColumnSimple::base_GetFlags() const
	static int _bind_base_GetFlags(lua_State *L) {
		if (!_lg_typecheck_base_GetFlags(L)) {
			luaL_error(L, "luna typecheck failed in int wxHeaderColumnSimple::base_GetFlags() const function, expected prototype:\nint wxHeaderColumnSimple::base_GetFlags() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHeaderColumnSimple::base_GetFlags() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxHeaderColumnSimple::GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxHeaderColumnSimple::base_IsSortKey() const
	static int _bind_base_IsSortKey(lua_State *L) {
		if (!_lg_typecheck_base_IsSortKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHeaderColumnSimple::base_IsSortKey() const function, expected prototype:\nbool wxHeaderColumnSimple::base_IsSortKey() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHeaderColumnSimple::base_IsSortKey() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHeaderColumnSimple::IsSortKey();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHeaderColumnSimple::base_SetSortOrder(bool ascending)
	static int _bind_base_SetSortOrder(lua_State *L) {
		if (!_lg_typecheck_base_SetSortOrder(L)) {
			luaL_error(L, "luna typecheck failed in void wxHeaderColumnSimple::base_SetSortOrder(bool ascending) function, expected prototype:\nvoid wxHeaderColumnSimple::base_SetSortOrder(bool ascending)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool ascending=(bool)(lua_toboolean(L,2)==1);

		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHeaderColumnSimple::base_SetSortOrder(bool). Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHeaderColumnSimple::SetSortOrder(ascending);

		return 0;
	}

	// bool wxHeaderColumnSimple::base_IsSortOrderAscending() const
	static int _bind_base_IsSortOrderAscending(lua_State *L) {
		if (!_lg_typecheck_base_IsSortOrderAscending(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHeaderColumnSimple::base_IsSortOrderAscending() const function, expected prototype:\nbool wxHeaderColumnSimple::base_IsSortOrderAscending() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHeaderColumnSimple* self=Luna< wxHeaderColumn >::checkSubType< wxHeaderColumnSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHeaderColumnSimple::base_IsSortOrderAscending() const. Got : '%s'\n%s",typeid(Luna< wxHeaderColumn >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHeaderColumnSimple::IsSortOrderAscending();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxHeaderColumnSimple* LunaTraits< wxHeaderColumnSimple >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHeaderColumnSimple::_bind_ctor(L);
}

void LunaTraits< wxHeaderColumnSimple >::_bind_dtor(wxHeaderColumnSimple* obj) {
	delete obj;
}

const char LunaTraits< wxHeaderColumnSimple >::className[] = "wxHeaderColumnSimple";
const char LunaTraits< wxHeaderColumnSimple >::fullName[] = "wxHeaderColumnSimple";
const char LunaTraits< wxHeaderColumnSimple >::moduleName[] = "wx";
const char* LunaTraits< wxHeaderColumnSimple >::parents[] = {"wx.wxSettableHeaderColumn", 0};
const int LunaTraits< wxHeaderColumnSimple >::hash = 94881514;
const int LunaTraits< wxHeaderColumnSimple >::uniqueIDs[] = {185523,0};

luna_RegType LunaTraits< wxHeaderColumnSimple >::methods[] = {
	{"SetTitle", &luna_wrapper_wxHeaderColumnSimple::_bind_SetTitle},
	{"GetTitle", &luna_wrapper_wxHeaderColumnSimple::_bind_GetTitle},
	{"SetBitmap", &luna_wrapper_wxHeaderColumnSimple::_bind_SetBitmap},
	{"GetBitmap", &luna_wrapper_wxHeaderColumnSimple::_bind_GetBitmap},
	{"SetWidth", &luna_wrapper_wxHeaderColumnSimple::_bind_SetWidth},
	{"GetWidth", &luna_wrapper_wxHeaderColumnSimple::_bind_GetWidth},
	{"SetMinWidth", &luna_wrapper_wxHeaderColumnSimple::_bind_SetMinWidth},
	{"GetMinWidth", &luna_wrapper_wxHeaderColumnSimple::_bind_GetMinWidth},
	{"SetAlignment", &luna_wrapper_wxHeaderColumnSimple::_bind_SetAlignment},
	{"GetAlignment", &luna_wrapper_wxHeaderColumnSimple::_bind_GetAlignment},
	{"SetFlags", &luna_wrapper_wxHeaderColumnSimple::_bind_SetFlags},
	{"GetFlags", &luna_wrapper_wxHeaderColumnSimple::_bind_GetFlags},
	{"IsSortKey", &luna_wrapper_wxHeaderColumnSimple::_bind_IsSortKey},
	{"SetSortOrder", &luna_wrapper_wxHeaderColumnSimple::_bind_SetSortOrder},
	{"IsSortOrderAscending", &luna_wrapper_wxHeaderColumnSimple::_bind_IsSortOrderAscending},
	{"base_IsResizeable", &luna_wrapper_wxHeaderColumnSimple::_bind_base_IsResizeable},
	{"base_IsSortable", &luna_wrapper_wxHeaderColumnSimple::_bind_base_IsSortable},
	{"base_IsReorderable", &luna_wrapper_wxHeaderColumnSimple::_bind_base_IsReorderable},
	{"base_IsHidden", &luna_wrapper_wxHeaderColumnSimple::_bind_base_IsHidden},
	{"base_SetResizeable", &luna_wrapper_wxHeaderColumnSimple::_bind_base_SetResizeable},
	{"base_SetSortable", &luna_wrapper_wxHeaderColumnSimple::_bind_base_SetSortable},
	{"base_SetReorderable", &luna_wrapper_wxHeaderColumnSimple::_bind_base_SetReorderable},
	{"base_SetHidden", &luna_wrapper_wxHeaderColumnSimple::_bind_base_SetHidden},
	{"base_SetTitle", &luna_wrapper_wxHeaderColumnSimple::_bind_base_SetTitle},
	{"base_GetTitle", &luna_wrapper_wxHeaderColumnSimple::_bind_base_GetTitle},
	{"base_SetBitmap", &luna_wrapper_wxHeaderColumnSimple::_bind_base_SetBitmap},
	{"base_GetBitmap", &luna_wrapper_wxHeaderColumnSimple::_bind_base_GetBitmap},
	{"base_SetWidth", &luna_wrapper_wxHeaderColumnSimple::_bind_base_SetWidth},
	{"base_GetWidth", &luna_wrapper_wxHeaderColumnSimple::_bind_base_GetWidth},
	{"base_SetMinWidth", &luna_wrapper_wxHeaderColumnSimple::_bind_base_SetMinWidth},
	{"base_GetMinWidth", &luna_wrapper_wxHeaderColumnSimple::_bind_base_GetMinWidth},
	{"base_SetAlignment", &luna_wrapper_wxHeaderColumnSimple::_bind_base_SetAlignment},
	{"base_GetAlignment", &luna_wrapper_wxHeaderColumnSimple::_bind_base_GetAlignment},
	{"base_SetFlags", &luna_wrapper_wxHeaderColumnSimple::_bind_base_SetFlags},
	{"base_GetFlags", &luna_wrapper_wxHeaderColumnSimple::_bind_base_GetFlags},
	{"base_IsSortKey", &luna_wrapper_wxHeaderColumnSimple::_bind_base_IsSortKey},
	{"base_SetSortOrder", &luna_wrapper_wxHeaderColumnSimple::_bind_base_SetSortOrder},
	{"base_IsSortOrderAscending", &luna_wrapper_wxHeaderColumnSimple::_bind_base_IsSortOrderAscending},
	{"fromVoid", &luna_wrapper_wxHeaderColumnSimple::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxHeaderColumnSimple::_bind_asVoid},
	{"getTable", &luna_wrapper_wxHeaderColumnSimple::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHeaderColumnSimple >::converters[] = {
	{"wxHeaderColumn", &luna_wrapper_wxHeaderColumnSimple::_cast_from_wxHeaderColumn},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHeaderColumnSimple >::enumValues[] = {
	{0,0}
};


