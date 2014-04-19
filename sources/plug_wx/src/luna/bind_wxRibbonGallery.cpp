#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRibbonGallery.h>

class luna_wrapper_wxRibbonGallery {
public:
	typedef Luna< wxRibbonGallery > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		wxRibbonGallery* self= (wxRibbonGallery*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRibbonGallery >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxRibbonGallery* ptr= dynamic_cast< wxRibbonGallery* >(Luna< wxObject >::check(L,1));
		wxRibbonGallery* ptr= luna_caster< wxObject, wxRibbonGallery >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRibbonGallery >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!(Luna< wxPoint >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!(Luna< wxSize >::check(L,4))) ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Append_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Append_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Append_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50457573)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< wxClientData >::check(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemClientObject(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56057674)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemClientObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56057674)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemClientData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56057674)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemClientData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56057674)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56057674)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHoveredItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetActiveItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUpButtonState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDownButtonState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetExtensionButtonState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsHovered(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ScrollLines(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollPixels(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnsureVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56057674)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_AcceptsFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_AcceptsFocusRecursively(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_HasFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetCanFocus(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetFocusFromKbd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_AddChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_RemoveChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Reparent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AlwaysShowScrollbars(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetScrollPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetScrollRange(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetScrollThumb(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsScrollbarAlwaysShown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ScrollPages(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ScrollWindow(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,20234418)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetScrollPos(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetScrollbar(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ClientToWindowSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_WindowToClientSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Fit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_FitInside(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetEffectiveMinSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetMaxClientSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetMaxSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetMinClientSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetMinSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetBestVirtualSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetWindowBorderSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_InformFirstDirection(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SendSizeEvent(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMaxClientSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMaxSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMinClientSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMinSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetSizeHints_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( luatop>2 && (!(Luna< wxSize >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!(Luna< wxSize >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetSizeHints_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClientAreaOrigin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ClearBackground(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetBackgroundStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetCharHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetCharWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetDefaultAttributes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Refresh(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,20234418)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetBackgroundStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ShouldInheritColours(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetThemeEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetThemeEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CanSetTransparent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetTransparent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetNextHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetPreviousHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetWindowStyleFlag(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetExtraStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetWindowStyleFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Lower(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Raise(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_HideWithEffect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsShown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsShownOnScreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Enable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Show(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ShowWithEffect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetHelpTextAtPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetValidator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetValidator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_TransferDataFromWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_TransferDataToWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Validate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetLayoutDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetLayoutDirection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetAcceleratorTable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Destroy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetDropTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetDropTarget(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,93694316)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DragAcceptFiles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Layout(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_HasCapture(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetCursor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_WarpPointer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DoUpdateWindowUI(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetHandle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_HasMultiplePages(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_InheritAttributes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_InitDialog(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsDoubleBuffered(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsRetained(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsTopLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_MakeModal(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnInternalIdle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_RegisterHotKey(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_UnregisterHotKey(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_UpdateWindowUI(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Command(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetArtProvider(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,48201749)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsSizingContinuous(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Realize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ScrollLines(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxRibbonGallery::wxRibbonGallery()
	static wxRibbonGallery* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonGallery::wxRibbonGallery() function, expected prototype:\nwxRibbonGallery::wxRibbonGallery()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxRibbonGallery();
	}

	// wxRibbonGallery::wxRibbonGallery(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0)
	static wxRibbonGallery* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonGallery::wxRibbonGallery(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0) function, expected prototype:\nwxRibbonGallery::wxRibbonGallery(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxID_ANY;
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRibbonGallery::wxRibbonGallery function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRibbonGallery::wxRibbonGallery function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>4 ? (long)lua_tonumber(L,5) : (long)0;

		return new wxRibbonGallery(parent, id, pos, size, style);
	}

	// wxRibbonGallery::wxRibbonGallery(lua_Table * data)
	static wxRibbonGallery* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonGallery::wxRibbonGallery(lua_Table * data) function, expected prototype:\nwxRibbonGallery::wxRibbonGallery(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxRibbonGallery(L,NULL);
	}

	// wxRibbonGallery::wxRibbonGallery(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0)
	static wxRibbonGallery* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonGallery::wxRibbonGallery(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0) function, expected prototype:\nwxRibbonGallery::wxRibbonGallery(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxID_ANY;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRibbonGallery::wxRibbonGallery function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRibbonGallery::wxRibbonGallery function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)0;

		return new wrapper_wxRibbonGallery(L,NULL, parent, id, pos, size, style);
	}

	// Overload binder for wxRibbonGallery::wxRibbonGallery
	static wxRibbonGallery* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxRibbonGallery, cannot match any of the overloads for function wxRibbonGallery:\n  wxRibbonGallery()\n  wxRibbonGallery(wxWindow *, int, const wxPoint &, const wxSize &, long)\n  wxRibbonGallery(lua_Table *)\n  wxRibbonGallery(lua_Table *, wxWindow *, int, const wxPoint &, const wxSize &, long)\n");
		return NULL;
	}


	// Function binds:
	// bool wxRibbonGallery::Create(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::Create(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0) function, expected prototype:\nbool wxRibbonGallery::Create(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxID_ANY;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRibbonGallery::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRibbonGallery::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)0;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::Create(wxWindow *, int, const wxPoint &, const wxSize &, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(parent, id, pos, size, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRibbonGallery::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::Clear() function, expected prototype:\nvoid wxRibbonGallery::Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::Clear(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Clear();

		return 0;
	}

	// bool wxRibbonGallery::IsEmpty() const
	static int _bind_IsEmpty(lua_State *L) {
		if (!_lg_typecheck_IsEmpty(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::IsEmpty() const function, expected prototype:\nbool wxRibbonGallery::IsEmpty() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::IsEmpty() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int wxRibbonGallery::GetCount() const
	static int _bind_GetCount(lua_State *L) {
		if (!_lg_typecheck_GetCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxRibbonGallery::GetCount() const function, expected prototype:\nunsigned int wxRibbonGallery::GetCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxRibbonGallery::GetCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxRibbonGalleryItem * wxRibbonGallery::GetItem(unsigned int n)
	static int _bind_GetItem(lua_State *L) {
		if (!_lg_typecheck_GetItem(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonGalleryItem * wxRibbonGallery::GetItem(unsigned int n) function, expected prototype:\nwxRibbonGalleryItem * wxRibbonGallery::GetItem(unsigned int n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRibbonGalleryItem * wxRibbonGallery::GetItem(unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRibbonGalleryItem * lret = self->GetItem(n);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonGalleryItem >::push(L,lret,false);

		return 1;
	}

	// wxRibbonGalleryItem * wxRibbonGallery::Append(const wxBitmap & bitmap, int id)
	static int _bind_Append_overload_1(lua_State *L) {
		if (!_lg_typecheck_Append_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonGalleryItem * wxRibbonGallery::Append(const wxBitmap & bitmap, int id) function, expected prototype:\nwxRibbonGalleryItem * wxRibbonGallery::Append(const wxBitmap & bitmap, int id)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxRibbonGallery::Append function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		int id=(int)lua_tointeger(L,3);

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRibbonGalleryItem * wxRibbonGallery::Append(const wxBitmap &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRibbonGalleryItem * lret = self->Append(bitmap, id);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonGalleryItem >::push(L,lret,false);

		return 1;
	}

	// wxRibbonGalleryItem * wxRibbonGallery::Append(const wxBitmap & bitmap, int id, void * clientData)
	static int _bind_Append_overload_2(lua_State *L) {
		if (!_lg_typecheck_Append_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonGalleryItem * wxRibbonGallery::Append(const wxBitmap & bitmap, int id, void * clientData) function, expected prototype:\nwxRibbonGalleryItem * wxRibbonGallery::Append(const wxBitmap & bitmap, int id, void * clientData)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxRibbonGallery::Append function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		int id=(int)lua_tointeger(L,3);
		void* clientData=(Luna< void >::check(L,4));

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRibbonGalleryItem * wxRibbonGallery::Append(const wxBitmap &, int, void *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRibbonGalleryItem * lret = self->Append(bitmap, id, clientData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonGalleryItem >::push(L,lret,false);

		return 1;
	}

	// wxRibbonGalleryItem * wxRibbonGallery::Append(const wxBitmap & bitmap, int id, wxClientData * clientData)
	static int _bind_Append_overload_3(lua_State *L) {
		if (!_lg_typecheck_Append_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonGalleryItem * wxRibbonGallery::Append(const wxBitmap & bitmap, int id, wxClientData * clientData) function, expected prototype:\nwxRibbonGalleryItem * wxRibbonGallery::Append(const wxBitmap & bitmap, int id, wxClientData * clientData)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 50457573\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxRibbonGallery::Append function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		int id=(int)lua_tointeger(L,3);
		wxClientData* clientData=(Luna< wxClientData >::check(L,4));

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRibbonGalleryItem * wxRibbonGallery::Append(const wxBitmap &, int, wxClientData *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRibbonGalleryItem * lret = self->Append(bitmap, id, clientData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonGalleryItem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxRibbonGallery::Append
	static int _bind_Append(lua_State *L) {
		if (_lg_typecheck_Append_overload_1(L)) return _bind_Append_overload_1(L);
		if (_lg_typecheck_Append_overload_2(L)) return _bind_Append_overload_2(L);
		if (_lg_typecheck_Append_overload_3(L)) return _bind_Append_overload_3(L);

		luaL_error(L, "error in function Append, cannot match any of the overloads for function Append:\n  Append(const wxBitmap &, int)\n  Append(const wxBitmap &, int, void *)\n  Append(const wxBitmap &, int, wxClientData *)\n");
		return 0;
	}

	// void wxRibbonGallery::SetItemClientObject(wxRibbonGalleryItem * item, wxClientData * data)
	static int _bind_SetItemClientObject(lua_State *L) {
		if (!_lg_typecheck_SetItemClientObject(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::SetItemClientObject(wxRibbonGalleryItem * item, wxClientData * data) function, expected prototype:\nvoid wxRibbonGallery::SetItemClientObject(wxRibbonGalleryItem * item, wxClientData * data)\nClass arguments details:\narg 1 ID = 56057674\narg 2 ID = 50457573\n\n%s",luna_dumpStack(L).c_str());
		}

		wxRibbonGalleryItem* item=(Luna< wxRibbonGalleryItem >::check(L,2));
		wxClientData* data=(Luna< wxClientData >::check(L,3));

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::SetItemClientObject(wxRibbonGalleryItem *, wxClientData *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemClientObject(item, data);

		return 0;
	}

	// wxClientData * wxRibbonGallery::GetItemClientObject(const wxRibbonGalleryItem * item) const
	static int _bind_GetItemClientObject(lua_State *L) {
		if (!_lg_typecheck_GetItemClientObject(L)) {
			luaL_error(L, "luna typecheck failed in wxClientData * wxRibbonGallery::GetItemClientObject(const wxRibbonGalleryItem * item) const function, expected prototype:\nwxClientData * wxRibbonGallery::GetItemClientObject(const wxRibbonGalleryItem * item) const\nClass arguments details:\narg 1 ID = 56057674\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRibbonGalleryItem* item=(Luna< wxRibbonGalleryItem >::check(L,2));

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClientData * wxRibbonGallery::GetItemClientObject(const wxRibbonGalleryItem *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClientData * lret = self->GetItemClientObject(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClientData >::push(L,lret,false);

		return 1;
	}

	// void wxRibbonGallery::SetItemClientData(wxRibbonGalleryItem * item, void * data)
	static int _bind_SetItemClientData(lua_State *L) {
		if (!_lg_typecheck_SetItemClientData(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::SetItemClientData(wxRibbonGalleryItem * item, void * data) function, expected prototype:\nvoid wxRibbonGallery::SetItemClientData(wxRibbonGalleryItem * item, void * data)\nClass arguments details:\narg 1 ID = 56057674\n\n%s",luna_dumpStack(L).c_str());
		}

		wxRibbonGalleryItem* item=(Luna< wxRibbonGalleryItem >::check(L,2));
		void* data=(Luna< void >::check(L,3));

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::SetItemClientData(wxRibbonGalleryItem *, void *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemClientData(item, data);

		return 0;
	}

	// void * wxRibbonGallery::GetItemClientData(const wxRibbonGalleryItem * item) const
	static int _bind_GetItemClientData(lua_State *L) {
		if (!_lg_typecheck_GetItemClientData(L)) {
			luaL_error(L, "luna typecheck failed in void * wxRibbonGallery::GetItemClientData(const wxRibbonGalleryItem * item) const function, expected prototype:\nvoid * wxRibbonGallery::GetItemClientData(const wxRibbonGalleryItem * item) const\nClass arguments details:\narg 1 ID = 56057674\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRibbonGalleryItem* item=(Luna< wxRibbonGalleryItem >::check(L,2));

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void * wxRibbonGallery::GetItemClientData(const wxRibbonGalleryItem *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->GetItemClientData(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void wxRibbonGallery::SetSelection(wxRibbonGalleryItem * item)
	static int _bind_SetSelection(lua_State *L) {
		if (!_lg_typecheck_SetSelection(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::SetSelection(wxRibbonGalleryItem * item) function, expected prototype:\nvoid wxRibbonGallery::SetSelection(wxRibbonGalleryItem * item)\nClass arguments details:\narg 1 ID = 56057674\n\n%s",luna_dumpStack(L).c_str());
		}

		wxRibbonGalleryItem* item=(Luna< wxRibbonGalleryItem >::check(L,2));

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::SetSelection(wxRibbonGalleryItem *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSelection(item);

		return 0;
	}

	// wxRibbonGalleryItem * wxRibbonGallery::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonGalleryItem * wxRibbonGallery::GetSelection() const function, expected prototype:\nwxRibbonGalleryItem * wxRibbonGallery::GetSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRibbonGalleryItem * wxRibbonGallery::GetSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRibbonGalleryItem * lret = self->GetSelection();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonGalleryItem >::push(L,lret,false);

		return 1;
	}

	// wxRibbonGalleryItem * wxRibbonGallery::GetHoveredItem() const
	static int _bind_GetHoveredItem(lua_State *L) {
		if (!_lg_typecheck_GetHoveredItem(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonGalleryItem * wxRibbonGallery::GetHoveredItem() const function, expected prototype:\nwxRibbonGalleryItem * wxRibbonGallery::GetHoveredItem() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRibbonGalleryItem * wxRibbonGallery::GetHoveredItem() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRibbonGalleryItem * lret = self->GetHoveredItem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonGalleryItem >::push(L,lret,false);

		return 1;
	}

	// wxRibbonGalleryItem * wxRibbonGallery::GetActiveItem() const
	static int _bind_GetActiveItem(lua_State *L) {
		if (!_lg_typecheck_GetActiveItem(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonGalleryItem * wxRibbonGallery::GetActiveItem() const function, expected prototype:\nwxRibbonGalleryItem * wxRibbonGallery::GetActiveItem() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRibbonGalleryItem * wxRibbonGallery::GetActiveItem() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRibbonGalleryItem * lret = self->GetActiveItem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonGalleryItem >::push(L,lret,false);

		return 1;
	}

	// wxRibbonGalleryButtonState wxRibbonGallery::GetUpButtonState() const
	static int _bind_GetUpButtonState(lua_State *L) {
		if (!_lg_typecheck_GetUpButtonState(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonGalleryButtonState wxRibbonGallery::GetUpButtonState() const function, expected prototype:\nwxRibbonGalleryButtonState wxRibbonGallery::GetUpButtonState() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRibbonGalleryButtonState wxRibbonGallery::GetUpButtonState() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRibbonGalleryButtonState lret = self->GetUpButtonState();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxRibbonGalleryButtonState wxRibbonGallery::GetDownButtonState() const
	static int _bind_GetDownButtonState(lua_State *L) {
		if (!_lg_typecheck_GetDownButtonState(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonGalleryButtonState wxRibbonGallery::GetDownButtonState() const function, expected prototype:\nwxRibbonGalleryButtonState wxRibbonGallery::GetDownButtonState() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRibbonGalleryButtonState wxRibbonGallery::GetDownButtonState() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRibbonGalleryButtonState lret = self->GetDownButtonState();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxRibbonGalleryButtonState wxRibbonGallery::GetExtensionButtonState() const
	static int _bind_GetExtensionButtonState(lua_State *L) {
		if (!_lg_typecheck_GetExtensionButtonState(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonGalleryButtonState wxRibbonGallery::GetExtensionButtonState() const function, expected prototype:\nwxRibbonGalleryButtonState wxRibbonGallery::GetExtensionButtonState() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRibbonGalleryButtonState wxRibbonGallery::GetExtensionButtonState() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRibbonGalleryButtonState lret = self->GetExtensionButtonState();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxRibbonGallery::IsHovered() const
	static int _bind_IsHovered(lua_State *L) {
		if (!_lg_typecheck_IsHovered(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::IsHovered() const function, expected prototype:\nbool wxRibbonGallery::IsHovered() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::IsHovered() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsHovered();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::ScrollLines(int lines)
	static int _bind_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::ScrollLines(int lines) function, expected prototype:\nbool wxRibbonGallery::ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::ScrollPixels(int pixels)
	static int _bind_ScrollPixels(lua_State *L) {
		if (!_lg_typecheck_ScrollPixels(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::ScrollPixels(int pixels) function, expected prototype:\nbool wxRibbonGallery::ScrollPixels(int pixels)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pixels=(int)lua_tointeger(L,2);

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::ScrollPixels(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ScrollPixels(pixels);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRibbonGallery::EnsureVisible(const wxRibbonGalleryItem * item)
	static int _bind_EnsureVisible(lua_State *L) {
		if (!_lg_typecheck_EnsureVisible(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::EnsureVisible(const wxRibbonGalleryItem * item) function, expected prototype:\nvoid wxRibbonGallery::EnsureVisible(const wxRibbonGalleryItem * item)\nClass arguments details:\narg 1 ID = 56057674\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRibbonGalleryItem* item=(Luna< wxRibbonGalleryItem >::check(L,2));

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::EnsureVisible(const wxRibbonGalleryItem *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EnsureVisible(item);

		return 0;
	}

	// wxClassInfo * wxRibbonGallery::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxRibbonGallery::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxRibbonGallery::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxRibbonGallery::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxRibbonGallery::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxRibbonGallery::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_AcceptsFocus() const function, expected prototype:\nbool wxRibbonGallery::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxRibbonGallery::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxRibbonGallery::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_HasFocus() const function, expected prototype:\nbool wxRibbonGallery::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRibbonGallery::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxRibbonGallery::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::SetCanFocus(canFocus);

		return 0;
	}

	// void wxRibbonGallery::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_SetFocus() function, expected prototype:\nvoid wxRibbonGallery::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::SetFocus();

		return 0;
	}

	// void wxRibbonGallery::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_SetFocusFromKbd() function, expected prototype:\nvoid wxRibbonGallery::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::SetFocusFromKbd();

		return 0;
	}

	// void wxRibbonGallery::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxRibbonGallery::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::AddChild(child);

		return 0;
	}

	// void wxRibbonGallery::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxRibbonGallery::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::RemoveChild(child);

		return 0;
	}

	// bool wxRibbonGallery::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxRibbonGallery::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRibbonGallery::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxRibbonGallery::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxRibbonGallery::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxRibbonGallery::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxRibbonGallery::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxRibbonGallery::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxRibbonGallery::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRibbonGallery::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxRibbonGallery::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxRibbonGallery::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxRibbonGallery::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxRibbonGallery::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRibbonGallery::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxRibbonGallery::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxRibbonGallery::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxRibbonGallery::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxRibbonGallery::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxRibbonGallery::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxRibbonGallery::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_ScrollPages(int pages) function, expected prototype:\nbool wxRibbonGallery::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRibbonGallery::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxRibbonGallery::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxRibbonGallery::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxRibbonGallery::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxRibbonGallery::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxRibbonGallery::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxRibbonGallery::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxRibbonGallery::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxRibbonGallery::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRibbonGallery::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxRibbonGallery::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxRibbonGallery::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRibbonGallery::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxRibbonGallery::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxRibbonGallery::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRibbonGallery::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxRibbonGallery::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxRibbonGallery::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxRibbonGallery::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_Fit() function, expected prototype:\nvoid wxRibbonGallery::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::Fit();

		return 0;
	}

	// void wxRibbonGallery::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_FitInside() function, expected prototype:\nvoid wxRibbonGallery::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::FitInside();

		return 0;
	}

	// wxSize wxRibbonGallery::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxRibbonGallery::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxRibbonGallery::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxRibbonGallery::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxRibbonGallery::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRibbonGallery::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxRibbonGallery::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxRibbonGallery::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxRibbonGallery::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxRibbonGallery::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRibbonGallery::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxRibbonGallery::base_GetMaxSize() const function, expected prototype:\nwxSize wxRibbonGallery::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxRibbonGallery::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxRibbonGallery::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRibbonGallery::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxRibbonGallery::base_GetMinClientSize() const function, expected prototype:\nwxSize wxRibbonGallery::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxRibbonGallery::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxRibbonGallery::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRibbonGallery::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxRibbonGallery::base_GetMinSize() const function, expected prototype:\nwxSize wxRibbonGallery::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxRibbonGallery::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxRibbonGallery::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRibbonGallery::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxRibbonGallery::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxRibbonGallery::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxRibbonGallery::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxRibbonGallery::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRibbonGallery::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxRibbonGallery::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxRibbonGallery::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxRibbonGallery::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxRibbonGallery::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxRibbonGallery::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxRibbonGallery::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRibbonGallery::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxRibbonGallery::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::SendSizeEvent(flags);

		return 0;
	}

	// void wxRibbonGallery::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxRibbonGallery::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRibbonGallery::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::SetMaxClientSize(size);

		return 0;
	}

	// void wxRibbonGallery::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxRibbonGallery::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRibbonGallery::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::SetMaxSize(size);

		return 0;
	}

	// void wxRibbonGallery::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxRibbonGallery::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRibbonGallery::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::SetMinClientSize(size);

		return 0;
	}

	// void wxRibbonGallery::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxRibbonGallery::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRibbonGallery::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::SetMinSize(size);

		return 0;
	}

	// void wxRibbonGallery::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxRibbonGallery::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxRibbonGallery::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxRibbonGallery::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxRibbonGallery::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxRibbonGallery::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxRibbonGallery::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxRibbonGallery::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxRibbonGallery::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxRibbonGallery::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxRibbonGallery::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxRibbonGallery::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxRibbonGallery::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxRibbonGallery::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_ClearBackground() function, expected prototype:\nvoid wxRibbonGallery::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxRibbonGallery::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxRibbonGallery::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxRibbonGallery::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxRibbonGallery::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxRibbonGallery::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRibbonGallery::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxRibbonGallery::base_GetCharHeight() const function, expected prototype:\nint wxRibbonGallery::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxRibbonGallery::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxRibbonGallery::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRibbonGallery::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxRibbonGallery::base_GetCharWidth() const function, expected prototype:\nint wxRibbonGallery::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxRibbonGallery::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxRibbonGallery::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxRibbonGallery::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxRibbonGallery::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxRibbonGallery::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxRibbonGallery::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxRibbonGallery::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxRibbonGallery::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxRibbonGallery::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxRibbonGallery::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_Update() function, expected prototype:\nvoid wxRibbonGallery::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::Update();

		return 0;
	}

	// bool wxRibbonGallery::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxRibbonGallery::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxRibbonGallery::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxRibbonGallery::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_ShouldInheritColours() const function, expected prototype:\nbool wxRibbonGallery::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRibbonGallery::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxRibbonGallery::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxRibbonGallery::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_GetThemeEnabled() const function, expected prototype:\nbool wxRibbonGallery::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_CanSetTransparent() function, expected prototype:\nbool wxRibbonGallery::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxRibbonGallery::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRibbonGallery::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxRibbonGallery::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::SetNextHandler(handler);

		return 0;
	}

	// void wxRibbonGallery::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxRibbonGallery::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::SetPreviousHandler(handler);

		return 0;
	}

	// long wxRibbonGallery::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxRibbonGallery::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxRibbonGallery::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxRibbonGallery::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxRibbonGallery::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxRibbonGallery::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxRibbonGallery::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxRibbonGallery::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxRibbonGallery::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxRibbonGallery::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_Lower() function, expected prototype:\nvoid wxRibbonGallery::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::Lower();

		return 0;
	}

	// void wxRibbonGallery::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_Raise() function, expected prototype:\nvoid wxRibbonGallery::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::Raise();

		return 0;
	}

	// bool wxRibbonGallery::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxRibbonGallery::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_IsShown() const function, expected prototype:\nbool wxRibbonGallery::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_IsShownOnScreen() const function, expected prototype:\nbool wxRibbonGallery::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_Enable(bool enable = true) function, expected prototype:\nbool wxRibbonGallery::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_Show(bool show = true) function, expected prototype:\nbool wxRibbonGallery::base_Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxRibbonGallery::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxRibbonGallery::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxRibbonGallery::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxRibbonGallery::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxRibbonGallery::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxRibbonGallery::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxRibbonGallery::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxRibbonGallery::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxRibbonGallery::base_GetValidator() function, expected prototype:\nwxValidator * wxRibbonGallery::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxRibbonGallery::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxRibbonGallery::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxRibbonGallery::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxRibbonGallery::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxRibbonGallery::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::SetValidator(validator);

		return 0;
	}

	// bool wxRibbonGallery::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_TransferDataFromWindow() function, expected prototype:\nbool wxRibbonGallery::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_TransferDataToWindow() function, expected prototype:\nbool wxRibbonGallery::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_Validate() function, expected prototype:\nbool wxRibbonGallery::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxRibbonGallery::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxRibbonGallery::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxRibbonGallery::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxRibbonGallery::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxRibbonGallery::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxRibbonGallery::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxRibbonGallery::base_GetName() const function, expected prototype:\nwxString wxRibbonGallery::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxRibbonGallery::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxRibbonGallery::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxRibbonGallery::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxRibbonGallery::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::SetLayoutDirection(dir);

		return 0;
	}

	// void wxRibbonGallery::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_SetName(const wxString & name) function, expected prototype:\nvoid wxRibbonGallery::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::SetName(name);

		return 0;
	}

	// void wxRibbonGallery::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxRibbonGallery::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxRibbonGallery::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxRibbonGallery::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_Destroy() function, expected prototype:\nbool wxRibbonGallery::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxRibbonGallery::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxRibbonGallery::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxRibbonGallery::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxRibbonGallery::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxRibbonGallery::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxRibbonGallery::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxRibbonGallery::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::SetDropTarget(target);

		return 0;
	}

	// void wxRibbonGallery::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxRibbonGallery::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxRibbonGallery::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_Layout() function, expected prototype:\nbool wxRibbonGallery::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_HasCapture() const function, expected prototype:\nbool wxRibbonGallery::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxRibbonGallery::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxRibbonGallery::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRibbonGallery::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxRibbonGallery::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::WarpPointer(x, y);

		return 0;
	}

	// void wxRibbonGallery::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxRibbonGallery::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxRibbonGallery::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxRibbonGallery::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxRibbonGallery::base_GetHandle() const function, expected prototype:\nHWND wxRibbonGallery::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxRibbonGallery::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxRibbonGallery::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxRibbonGallery::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_HasMultiplePages() const function, expected prototype:\nbool wxRibbonGallery::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRibbonGallery::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_InheritAttributes() function, expected prototype:\nvoid wxRibbonGallery::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::InheritAttributes();

		return 0;
	}

	// void wxRibbonGallery::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_InitDialog() function, expected prototype:\nvoid wxRibbonGallery::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::InitDialog();

		return 0;
	}

	// bool wxRibbonGallery::base_IsDoubleBuffered() const
	static int _bind_base_IsDoubleBuffered(lua_State *L) {
		if (!_lg_typecheck_base_IsDoubleBuffered(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_IsDoubleBuffered() const function, expected prototype:\nbool wxRibbonGallery::base_IsDoubleBuffered() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_IsDoubleBuffered() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::IsDoubleBuffered();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_IsRetained() const function, expected prototype:\nbool wxRibbonGallery::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_IsTopLevel() const function, expected prototype:\nbool wxRibbonGallery::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRibbonGallery::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxRibbonGallery::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::MakeModal(modal);

		return 0;
	}

	// void wxRibbonGallery::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_OnInternalIdle() function, expected prototype:\nvoid wxRibbonGallery::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::OnInternalIdle();

		return 0;
	}

	// bool wxRibbonGallery::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxRibbonGallery::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxRibbonGallery::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRibbonGallery::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxRibbonGallery::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::UpdateWindowUI(flags);

		return 0;
	}

	// void wxRibbonGallery::base_Command(wxCommandEvent & event)
	static int _bind_base_Command(lua_State *L) {
		if (!_lg_typecheck_base_Command(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_Command(wxCommandEvent & event) function, expected prototype:\nvoid wxRibbonGallery::base_Command(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxRibbonGallery::base_Command function");
		}
		wxCommandEvent & event=*event_ptr;

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_Command(wxCommandEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::Command(event);

		return 0;
	}

	// wxString wxRibbonGallery::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxRibbonGallery::base_GetLabel() const function, expected prototype:\nwxString wxRibbonGallery::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxRibbonGallery::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxRibbonGallery::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxRibbonGallery::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxRibbonGallery::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::SetLabel(label);

		return 0;
	}

	// void wxRibbonGallery::base_SetArtProvider(wxRibbonArtProvider * art)
	static int _bind_base_SetArtProvider(lua_State *L) {
		if (!_lg_typecheck_base_SetArtProvider(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGallery::base_SetArtProvider(wxRibbonArtProvider * art) function, expected prototype:\nvoid wxRibbonGallery::base_SetArtProvider(wxRibbonArtProvider * art)\nClass arguments details:\narg 1 ID = 48201749\n\n%s",luna_dumpStack(L).c_str());
		}

		wxRibbonArtProvider* art=(Luna< wxRibbonArtProvider >::check(L,2));

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGallery::base_SetArtProvider(wxRibbonArtProvider *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRibbonGallery::SetArtProvider(art);

		return 0;
	}

	// bool wxRibbonGallery::base_IsSizingContinuous() const
	static int _bind_base_IsSizingContinuous(lua_State *L) {
		if (!_lg_typecheck_base_IsSizingContinuous(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_IsSizingContinuous() const function, expected prototype:\nbool wxRibbonGallery::base_IsSizingContinuous() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_IsSizingContinuous() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::IsSizingContinuous();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::base_Realize()
	static int _bind_base_Realize(lua_State *L) {
		if (!_lg_typecheck_base_Realize(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_Realize() function, expected prototype:\nbool wxRibbonGallery::base_Realize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_Realize(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::Realize();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRibbonGallery::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonGallery::base_ScrollLines(int lines) function, expected prototype:\nbool wxRibbonGallery::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxRibbonGallery* self=Luna< wxObject >::checkSubType< wxRibbonGallery >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonGallery::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRibbonGallery::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxRibbonGallery* LunaTraits< wxRibbonGallery >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRibbonGallery::_bind_ctor(L);
}

void LunaTraits< wxRibbonGallery >::_bind_dtor(wxRibbonGallery* obj) {
	delete obj;
}

const char LunaTraits< wxRibbonGallery >::className[] = "wxRibbonGallery";
const char LunaTraits< wxRibbonGallery >::fullName[] = "wxRibbonGallery";
const char LunaTraits< wxRibbonGallery >::moduleName[] = "wx";
const char* LunaTraits< wxRibbonGallery >::parents[] = {"wx.wxRibbonControl", 0};
const int LunaTraits< wxRibbonGallery >::hash = 37012000;
const int LunaTraits< wxRibbonGallery >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxRibbonGallery >::methods[] = {
	{"Create", &luna_wrapper_wxRibbonGallery::_bind_Create},
	{"Clear", &luna_wrapper_wxRibbonGallery::_bind_Clear},
	{"IsEmpty", &luna_wrapper_wxRibbonGallery::_bind_IsEmpty},
	{"GetCount", &luna_wrapper_wxRibbonGallery::_bind_GetCount},
	{"GetItem", &luna_wrapper_wxRibbonGallery::_bind_GetItem},
	{"Append", &luna_wrapper_wxRibbonGallery::_bind_Append},
	{"SetItemClientObject", &luna_wrapper_wxRibbonGallery::_bind_SetItemClientObject},
	{"GetItemClientObject", &luna_wrapper_wxRibbonGallery::_bind_GetItemClientObject},
	{"SetItemClientData", &luna_wrapper_wxRibbonGallery::_bind_SetItemClientData},
	{"GetItemClientData", &luna_wrapper_wxRibbonGallery::_bind_GetItemClientData},
	{"SetSelection", &luna_wrapper_wxRibbonGallery::_bind_SetSelection},
	{"GetSelection", &luna_wrapper_wxRibbonGallery::_bind_GetSelection},
	{"GetHoveredItem", &luna_wrapper_wxRibbonGallery::_bind_GetHoveredItem},
	{"GetActiveItem", &luna_wrapper_wxRibbonGallery::_bind_GetActiveItem},
	{"GetUpButtonState", &luna_wrapper_wxRibbonGallery::_bind_GetUpButtonState},
	{"GetDownButtonState", &luna_wrapper_wxRibbonGallery::_bind_GetDownButtonState},
	{"GetExtensionButtonState", &luna_wrapper_wxRibbonGallery::_bind_GetExtensionButtonState},
	{"IsHovered", &luna_wrapper_wxRibbonGallery::_bind_IsHovered},
	{"ScrollLines", &luna_wrapper_wxRibbonGallery::_bind_ScrollLines},
	{"ScrollPixels", &luna_wrapper_wxRibbonGallery::_bind_ScrollPixels},
	{"EnsureVisible", &luna_wrapper_wxRibbonGallery::_bind_EnsureVisible},
	{"base_GetClassInfo", &luna_wrapper_wxRibbonGallery::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxRibbonGallery::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxRibbonGallery::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxRibbonGallery::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxRibbonGallery::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxRibbonGallery::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxRibbonGallery::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxRibbonGallery::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxRibbonGallery::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxRibbonGallery::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxRibbonGallery::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxRibbonGallery::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxRibbonGallery::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxRibbonGallery::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxRibbonGallery::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxRibbonGallery::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollPages", &luna_wrapper_wxRibbonGallery::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxRibbonGallery::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxRibbonGallery::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxRibbonGallery::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxRibbonGallery::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxRibbonGallery::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxRibbonGallery::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxRibbonGallery::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxRibbonGallery::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxRibbonGallery::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxRibbonGallery::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxRibbonGallery::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxRibbonGallery::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxRibbonGallery::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxRibbonGallery::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxRibbonGallery::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxRibbonGallery::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxRibbonGallery::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxRibbonGallery::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxRibbonGallery::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxRibbonGallery::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxRibbonGallery::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxRibbonGallery::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxRibbonGallery::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxRibbonGallery::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxRibbonGallery::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxRibbonGallery::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxRibbonGallery::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxRibbonGallery::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxRibbonGallery::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxRibbonGallery::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxRibbonGallery::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxRibbonGallery::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxRibbonGallery::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxRibbonGallery::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxRibbonGallery::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxRibbonGallery::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxRibbonGallery::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxRibbonGallery::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxRibbonGallery::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxRibbonGallery::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxRibbonGallery::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxRibbonGallery::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxRibbonGallery::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxRibbonGallery::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxRibbonGallery::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxRibbonGallery::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxRibbonGallery::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxRibbonGallery::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxRibbonGallery::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxRibbonGallery::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxRibbonGallery::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxRibbonGallery::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxRibbonGallery::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxRibbonGallery::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxRibbonGallery::_bind_base_Validate},
	{"base_GetLayoutDirection", &luna_wrapper_wxRibbonGallery::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxRibbonGallery::_bind_base_GetName},
	{"base_SetLayoutDirection", &luna_wrapper_wxRibbonGallery::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxRibbonGallery::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxRibbonGallery::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxRibbonGallery::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxRibbonGallery::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxRibbonGallery::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxRibbonGallery::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxRibbonGallery::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxRibbonGallery::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxRibbonGallery::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxRibbonGallery::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxRibbonGallery::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxRibbonGallery::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxRibbonGallery::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxRibbonGallery::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxRibbonGallery::_bind_base_InitDialog},
	{"base_IsDoubleBuffered", &luna_wrapper_wxRibbonGallery::_bind_base_IsDoubleBuffered},
	{"base_IsRetained", &luna_wrapper_wxRibbonGallery::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxRibbonGallery::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxRibbonGallery::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxRibbonGallery::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxRibbonGallery::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxRibbonGallery::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxRibbonGallery::_bind_base_UpdateWindowUI},
	{"base_Command", &luna_wrapper_wxRibbonGallery::_bind_base_Command},
	{"base_GetLabel", &luna_wrapper_wxRibbonGallery::_bind_base_GetLabel},
	{"base_SetLabel", &luna_wrapper_wxRibbonGallery::_bind_base_SetLabel},
	{"base_SetArtProvider", &luna_wrapper_wxRibbonGallery::_bind_base_SetArtProvider},
	{"base_IsSizingContinuous", &luna_wrapper_wxRibbonGallery::_bind_base_IsSizingContinuous},
	{"base_Realize", &luna_wrapper_wxRibbonGallery::_bind_base_Realize},
	{"base_ScrollLines", &luna_wrapper_wxRibbonGallery::_bind_base_ScrollLines},
	{"fromVoid", &luna_wrapper_wxRibbonGallery::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRibbonGallery::_bind_asVoid},
	{"getTable", &luna_wrapper_wxRibbonGallery::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxRibbonGallery >::converters[] = {
	{"wxObject", &luna_wrapper_wxRibbonGallery::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRibbonGallery >::enumValues[] = {
	{0,0}
};


