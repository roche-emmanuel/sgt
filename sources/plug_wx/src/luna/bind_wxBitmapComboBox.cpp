#include <plug_common.h>

#include <luna/wrappers/wrapper_wxBitmapComboBox.h>

class luna_wrapper_wxBitmapComboBox {
public:
	typedef Luna< wxBitmapComboBox > luna_t;

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

		wxBitmapComboBox* self= (wxBitmapComboBox*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxBitmapComboBox >::push(L,self,false);
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
		//wxBitmapComboBox* ptr= dynamic_cast< wxBitmapComboBox* >(Luna< wxObject >::check(L,1));
		wxBitmapComboBox* ptr= luna_caster< wxObject, wxBitmapComboBox >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxBitmapComboBox >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxItemContainerImmutable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxBitmapComboBox* ptr= dynamic_cast< wxBitmapComboBox* >(Luna< wxItemContainerImmutable >::check(L,1));
		wxBitmapComboBox* ptr= luna_caster< wxItemContainerImmutable, wxBitmapComboBox >::cast(Luna< wxItemContainerImmutable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxBitmapComboBox >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTextEntry(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxBitmapComboBox* ptr= dynamic_cast< wxBitmapComboBox* >(Luna< wxTextEntry >::check(L,1));
		wxBitmapComboBox* ptr= luna_caster< wxTextEntry, wxBitmapComboBox >::cast(Luna< wxTextEntry >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxBitmapComboBox >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>9 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,59507769) ) return false;
		if( (!(Luna< wxArrayString >::check(L,6))) ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>7 && (!(Luna< wxObject >::checkSubType< wxValidator >(L,8))) ) return false;
		if( luatop>8 && lua_type(L,9)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<8 || luatop>10 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,59507769) ) return false;
		if( (!(Luna< wxArrayString >::check(L,7))) ) return false;
		if( lua_type(L,8)!=LUA_TNUMBER ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,56813631) ) return false;
		if( luatop>8 && (!(Luna< wxObject >::checkSubType< wxValidator >(L,9))) ) return false;
		if( luatop>9 && lua_type(L,10)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Append_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>2 && (!(Luna< wxObject >::checkSubType< wxBitmap >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Append_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,3))) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Append_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,3))) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50457573)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< wxClientData >::check(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>10 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,59507769) ) return false;
		if( luatop>7 && lua_type(L,8)!=LUA_TNUMBER ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,56813631) ) return false;
		if( luatop>9 && lua_type(L,10)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBitmapSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItemBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemBitmap(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
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

	inline static bool _lg_typecheck_base_ScrollLines(lua_State *L) {
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

	inline static bool _lg_typecheck_base_AppendText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CanCopy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CanCut(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CanPaste(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CanRedo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CanUndo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ChangeValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Copy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetLastPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetRange(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsEditable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Paste(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Redo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Remove(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Replace(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetEditable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetInsertionPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetInsertionPointEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetMaxLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SelectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Undo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_WriteText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetCurrentSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetInsertionPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetSelection_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetSelection_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Popup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Dismiss(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetSelection_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetSelection_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_FindString(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetStringSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetString(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetBitmapSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetItemBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetItemBitmap(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxBitmapComboBox::wxBitmapComboBox()
	static wxBitmapComboBox* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmapComboBox::wxBitmapComboBox() function, expected prototype:\nwxBitmapComboBox::wxBitmapComboBox()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxBitmapComboBox();
	}

	// wxBitmapComboBox::wxBitmapComboBox(wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxBitmapComboBoxNameStr)
	static wxBitmapComboBox* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmapComboBox::wxBitmapComboBox(wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxBitmapComboBoxNameStr) function, expected prototype:\nwxBitmapComboBox::wxBitmapComboBox(wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxBitmapComboBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 6 ID = 59507769\narg 8 ID = 56813631\narg 9 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString value(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,4));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxBitmapComboBox::wxBitmapComboBox function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,5));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxBitmapComboBox::wxBitmapComboBox function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,6));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxBitmapComboBox::wxBitmapComboBox function");
		}
		const wxArrayString & choices=*choices_ptr;
		long style=(long)lua_tonumber(L,7);
		const wxValidator* validator_ptr=luatop>7 ? (Luna< wxObject >::checkSubType< wxValidator >(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxBitmapComboBox::wxBitmapComboBox function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : (const wxValidator&)wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wxBitmapComboBox(parent, id, value, pos, size, choices, style, validator, name);
	}

	// wxBitmapComboBox::wxBitmapComboBox(lua_Table * data)
	static wxBitmapComboBox* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmapComboBox::wxBitmapComboBox(lua_Table * data) function, expected prototype:\nwxBitmapComboBox::wxBitmapComboBox(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxBitmapComboBox(L,NULL);
	}

	// wxBitmapComboBox::wxBitmapComboBox(lua_Table * data, wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxBitmapComboBoxNameStr)
	static wxBitmapComboBox* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmapComboBox::wxBitmapComboBox(lua_Table * data, wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxBitmapComboBoxNameStr) function, expected prototype:\nwxBitmapComboBox::wxBitmapComboBox(lua_Table * data, wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxBitmapComboBoxNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 88196105\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 7 ID = 59507769\narg 9 ID = 56813631\narg 10 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString value(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,5));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxBitmapComboBox::wxBitmapComboBox function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,6));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxBitmapComboBox::wxBitmapComboBox function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,7));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxBitmapComboBox::wxBitmapComboBox function");
		}
		const wxArrayString & choices=*choices_ptr;
		long style=(long)lua_tonumber(L,8);
		const wxValidator* validator_ptr=luatop>8 ? (Luna< wxObject >::checkSubType< wxValidator >(L,9)) : NULL;
		if( luatop>8 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxBitmapComboBox::wxBitmapComboBox function");
		}
		const wxValidator & validator=luatop>8 ? *validator_ptr : (const wxValidator&)wxDefaultValidator;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		return new wrapper_wxBitmapComboBox(L,NULL, parent, id, value, pos, size, choices, style, validator, name);
	}

	// Overload binder for wxBitmapComboBox::wxBitmapComboBox
	static wxBitmapComboBox* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxBitmapComboBox, cannot match any of the overloads for function wxBitmapComboBox:\n  wxBitmapComboBox()\n  wxBitmapComboBox(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, const wxArrayString &, long, const wxValidator &, const wxString &)\n  wxBitmapComboBox(lua_Table *)\n  wxBitmapComboBox(lua_Table *, wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, const wxArrayString &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// int wxBitmapComboBox::Append(const wxString & item, const wxBitmap & bitmap = wxNullBitmap)
	static int _bind_Append_overload_1(lua_State *L) {
		if (!_lg_typecheck_Append_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in int wxBitmapComboBox::Append(const wxString & item, const wxBitmap & bitmap = wxNullBitmap) function, expected prototype:\nint wxBitmapComboBox::Append(const wxString & item, const wxBitmap & bitmap = wxNullBitmap)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		const wxBitmap* bitmap_ptr=luatop>2 ? (Luna< wxObject >::checkSubType< wxBitmap >(L,3)) : NULL;
		if( luatop>2 && !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxBitmapComboBox::Append function");
		}
		const wxBitmap & bitmap=luatop>2 ? *bitmap_ptr : (const wxBitmap&)wxNullBitmap;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxBitmapComboBox::Append(const wxString &, const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Append(item, bitmap);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxBitmapComboBox::Append(const wxString & item, const wxBitmap & bitmap, void * clientData)
	static int _bind_Append_overload_2(lua_State *L) {
		if (!_lg_typecheck_Append_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in int wxBitmapComboBox::Append(const wxString & item, const wxBitmap & bitmap, void * clientData) function, expected prototype:\nint wxBitmapComboBox::Append(const wxString & item, const wxBitmap & bitmap, void * clientData)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxBitmapComboBox::Append function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		void* clientData=(Luna< void >::check(L,4));

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxBitmapComboBox::Append(const wxString &, const wxBitmap &, void *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Append(item, bitmap, clientData);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxBitmapComboBox::Append(const wxString & item, const wxBitmap & bitmap, wxClientData * clientData)
	static int _bind_Append_overload_3(lua_State *L) {
		if (!_lg_typecheck_Append_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in int wxBitmapComboBox::Append(const wxString & item, const wxBitmap & bitmap, wxClientData * clientData) function, expected prototype:\nint wxBitmapComboBox::Append(const wxString & item, const wxBitmap & bitmap, wxClientData * clientData)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\narg 3 ID = 50457573\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString item(lua_tostring(L,2),lua_objlen(L,2));
		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxBitmapComboBox::Append function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		wxClientData* clientData=(Luna< wxClientData >::check(L,4));

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxBitmapComboBox::Append(const wxString &, const wxBitmap &, wxClientData *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Append(item, bitmap, clientData);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxBitmapComboBox::Append
	static int _bind_Append(lua_State *L) {
		if (_lg_typecheck_Append_overload_1(L)) return _bind_Append_overload_1(L);
		if (_lg_typecheck_Append_overload_2(L)) return _bind_Append_overload_2(L);
		if (_lg_typecheck_Append_overload_3(L)) return _bind_Append_overload_3(L);

		luaL_error(L, "error in function Append, cannot match any of the overloads for function Append:\n  Append(const wxString &, const wxBitmap &)\n  Append(const wxString &, const wxBitmap &, void *)\n  Append(const wxString &, const wxBitmap &, wxClientData *)\n");
		return 0;
	}

	// bool wxBitmapComboBox::Create(wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxBitmapComboBoxNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::Create(wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxBitmapComboBoxNameStr) function, expected prototype:\nbool wxBitmapComboBox::Create(wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxBitmapComboBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 6 ID = 59507769\narg 8 ID = 56813631\narg 9 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString value(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,5));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxBitmapComboBox::Create function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,6));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxBitmapComboBox::Create function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,7));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxBitmapComboBox::Create function");
		}
		const wxArrayString & choices=*choices_ptr;
		long style=luatop>7 ? (long)lua_tonumber(L,8) : (long)0;
		const wxValidator* validator_ptr=luatop>8 ? (Luna< wxObject >::checkSubType< wxValidator >(L,9)) : NULL;
		if( luatop>8 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxBitmapComboBox::Create function");
		}
		const wxValidator & validator=luatop>8 ? *validator_ptr : (const wxValidator&)wxDefaultValidator;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, const wxArrayString &, long, const wxValidator &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(parent, id, value, pos, size, choices, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxSize wxBitmapComboBox::GetBitmapSize() const
	static int _bind_GetBitmapSize(lua_State *L) {
		if (!_lg_typecheck_GetBitmapSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxBitmapComboBox::GetBitmapSize() const function, expected prototype:\nwxSize wxBitmapComboBox::GetBitmapSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxBitmapComboBox::GetBitmapSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetBitmapSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxBitmap wxBitmapComboBox::GetItemBitmap(unsigned int n) const
	static int _bind_GetItemBitmap(lua_State *L) {
		if (!_lg_typecheck_GetItemBitmap(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmap wxBitmapComboBox::GetItemBitmap(unsigned int n) const function, expected prototype:\nwxBitmap wxBitmapComboBox::GetItemBitmap(unsigned int n) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmap wxBitmapComboBox::GetItemBitmap(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBitmap stack_lret = self->GetItemBitmap(n);
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// void wxBitmapComboBox::SetItemBitmap(unsigned int n, const wxBitmap & bitmap)
	static int _bind_SetItemBitmap(lua_State *L) {
		if (!_lg_typecheck_SetItemBitmap(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::SetItemBitmap(unsigned int n, const wxBitmap & bitmap) function, expected prototype:\nvoid wxBitmapComboBox::SetItemBitmap(unsigned int n, const wxBitmap & bitmap)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);
		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxBitmapComboBox::SetItemBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::SetItemBitmap(unsigned int, const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemBitmap(n, bitmap);

		return 0;
	}

	// wxClassInfo * wxBitmapComboBox::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxBitmapComboBox::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxBitmapComboBox::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxBitmapComboBox::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxBitmapComboBox::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxBitmapComboBox::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_AcceptsFocus() const function, expected prototype:\nbool wxBitmapComboBox::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapComboBox::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxBitmapComboBox::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapComboBox::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxBitmapComboBox::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapComboBox::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_HasFocus() const function, expected prototype:\nbool wxBitmapComboBox::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxBitmapComboBox::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxBitmapComboBox::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetCanFocus(canFocus);

		return 0;
	}

	// void wxBitmapComboBox::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetFocus() function, expected prototype:\nvoid wxBitmapComboBox::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetFocus();

		return 0;
	}

	// void wxBitmapComboBox::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetFocusFromKbd() function, expected prototype:\nvoid wxBitmapComboBox::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetFocusFromKbd();

		return 0;
	}

	// void wxBitmapComboBox::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxBitmapComboBox::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::AddChild(child);

		return 0;
	}

	// void wxBitmapComboBox::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxBitmapComboBox::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::RemoveChild(child);

		return 0;
	}

	// bool wxBitmapComboBox::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxBitmapComboBox::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxBitmapComboBox::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxBitmapComboBox::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxBitmapComboBox::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxBitmapComboBox::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxBitmapComboBox::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxBitmapComboBox::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxBitmapComboBox::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxBitmapComboBox::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxBitmapComboBox::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxBitmapComboBox::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxBitmapComboBox::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxBitmapComboBox::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxBitmapComboBox::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxBitmapComboBox::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxBitmapComboBox::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxBitmapComboBox::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxBitmapComboBox::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxBitmapComboBox::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxBitmapComboBox::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapComboBox::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_ScrollLines(int lines) function, expected prototype:\nbool wxBitmapComboBox::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapComboBox::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_ScrollPages(int pages) function, expected prototype:\nbool wxBitmapComboBox::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxBitmapComboBox::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxBitmapComboBox::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxBitmapComboBox::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxBitmapComboBox::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxBitmapComboBox::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxBitmapComboBox::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxBitmapComboBox::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxBitmapComboBox::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxBitmapComboBox::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxBitmapComboBox::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxBitmapComboBox::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxBitmapComboBox::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxBitmapComboBox::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxBitmapComboBox::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxBitmapComboBox::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxBitmapComboBox::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxBitmapComboBox::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxBitmapComboBox::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxBitmapComboBox::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_Fit() function, expected prototype:\nvoid wxBitmapComboBox::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::Fit();

		return 0;
	}

	// void wxBitmapComboBox::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_FitInside() function, expected prototype:\nvoid wxBitmapComboBox::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::FitInside();

		return 0;
	}

	// wxSize wxBitmapComboBox::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxBitmapComboBox::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxBitmapComboBox::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxBitmapComboBox::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxBitmapComboBox::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxBitmapComboBox::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxBitmapComboBox::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxBitmapComboBox::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxBitmapComboBox::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxBitmapComboBox::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxBitmapComboBox::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxBitmapComboBox::base_GetMaxSize() const function, expected prototype:\nwxSize wxBitmapComboBox::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxBitmapComboBox::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxBitmapComboBox::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxBitmapComboBox::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxBitmapComboBox::base_GetMinClientSize() const function, expected prototype:\nwxSize wxBitmapComboBox::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxBitmapComboBox::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxBitmapComboBox::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxBitmapComboBox::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxBitmapComboBox::base_GetMinSize() const function, expected prototype:\nwxSize wxBitmapComboBox::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxBitmapComboBox::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxBitmapComboBox::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxBitmapComboBox::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxBitmapComboBox::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxBitmapComboBox::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxBitmapComboBox::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxBitmapComboBox::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxBitmapComboBox::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxBitmapComboBox::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxBitmapComboBox::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxBitmapComboBox::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxBitmapComboBox::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxBitmapComboBox::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxBitmapComboBox::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxBitmapComboBox::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxBitmapComboBox::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SendSizeEvent(flags);

		return 0;
	}

	// void wxBitmapComboBox::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxBitmapComboBox::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxBitmapComboBox::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetMaxClientSize(size);

		return 0;
	}

	// void wxBitmapComboBox::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxBitmapComboBox::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxBitmapComboBox::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetMaxSize(size);

		return 0;
	}

	// void wxBitmapComboBox::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxBitmapComboBox::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxBitmapComboBox::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetMinClientSize(size);

		return 0;
	}

	// void wxBitmapComboBox::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxBitmapComboBox::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxBitmapComboBox::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetMinSize(size);

		return 0;
	}

	// void wxBitmapComboBox::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxBitmapComboBox::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxBitmapComboBox::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxBitmapComboBox::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxBitmapComboBox::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxBitmapComboBox::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxBitmapComboBox::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxBitmapComboBox::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxBitmapComboBox::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxBitmapComboBox::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxBitmapComboBox::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxBitmapComboBox::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxBitmapComboBox::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxBitmapComboBox::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_ClearBackground() function, expected prototype:\nvoid wxBitmapComboBox::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxBitmapComboBox::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxBitmapComboBox::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxBitmapComboBox::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxBitmapComboBox::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxBitmapComboBox::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxBitmapComboBox::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxBitmapComboBox::base_GetCharHeight() const function, expected prototype:\nint wxBitmapComboBox::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxBitmapComboBox::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxBitmapComboBox::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxBitmapComboBox::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxBitmapComboBox::base_GetCharWidth() const function, expected prototype:\nint wxBitmapComboBox::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxBitmapComboBox::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxBitmapComboBox::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxBitmapComboBox::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxBitmapComboBox::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxBitmapComboBox::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxBitmapComboBox::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxBitmapComboBox::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxBitmapComboBox::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxBitmapComboBox::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxBitmapComboBox::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_Update() function, expected prototype:\nvoid wxBitmapComboBox::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::Update();

		return 0;
	}

	// bool wxBitmapComboBox::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxBitmapComboBox::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapComboBox::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxBitmapComboBox::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxBitmapComboBox::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapComboBox::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_ShouldInheritColours() const function, expected prototype:\nbool wxBitmapComboBox::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxBitmapComboBox::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxBitmapComboBox::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxBitmapComboBox::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_GetThemeEnabled() const function, expected prototype:\nbool wxBitmapComboBox::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapComboBox::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_CanSetTransparent() function, expected prototype:\nbool wxBitmapComboBox::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapComboBox::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxBitmapComboBox::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxBitmapComboBox::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxBitmapComboBox::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetNextHandler(handler);

		return 0;
	}

	// void wxBitmapComboBox::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxBitmapComboBox::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetPreviousHandler(handler);

		return 0;
	}

	// long wxBitmapComboBox::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxBitmapComboBox::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxBitmapComboBox::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxBitmapComboBox::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxBitmapComboBox::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxBitmapComboBox::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxBitmapComboBox::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxBitmapComboBox::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxBitmapComboBox::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxBitmapComboBox::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_Lower() function, expected prototype:\nvoid wxBitmapComboBox::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::Lower();

		return 0;
	}

	// void wxBitmapComboBox::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_Raise() function, expected prototype:\nvoid wxBitmapComboBox::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::Raise();

		return 0;
	}

	// bool wxBitmapComboBox::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxBitmapComboBox::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapComboBox::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_IsShown() const function, expected prototype:\nbool wxBitmapComboBox::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapComboBox::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_IsShownOnScreen() const function, expected prototype:\nbool wxBitmapComboBox::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapComboBox::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_Enable(bool enable = true) function, expected prototype:\nbool wxBitmapComboBox::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapComboBox::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_Show(bool show = true) function, expected prototype:\nbool wxBitmapComboBox::base_Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapComboBox::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxBitmapComboBox::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxBitmapComboBox::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxBitmapComboBox::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxBitmapComboBox::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxBitmapComboBox::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxBitmapComboBox::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxBitmapComboBox::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxBitmapComboBox::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxBitmapComboBox::base_GetValidator() function, expected prototype:\nwxValidator * wxBitmapComboBox::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxBitmapComboBox::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxBitmapComboBox::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxBitmapComboBox::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxBitmapComboBox::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxBitmapComboBox::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetValidator(validator);

		return 0;
	}

	// bool wxBitmapComboBox::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_TransferDataFromWindow() function, expected prototype:\nbool wxBitmapComboBox::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapComboBox::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_TransferDataToWindow() function, expected prototype:\nbool wxBitmapComboBox::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapComboBox::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_Validate() function, expected prototype:\nbool wxBitmapComboBox::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxBitmapComboBox::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxBitmapComboBox::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxBitmapComboBox::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxBitmapComboBox::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxBitmapComboBox::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxBitmapComboBox::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxBitmapComboBox::base_GetName() const function, expected prototype:\nwxString wxBitmapComboBox::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxBitmapComboBox::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxBitmapComboBox::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxBitmapComboBox::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxBitmapComboBox::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetLayoutDirection(dir);

		return 0;
	}

	// void wxBitmapComboBox::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetName(const wxString & name) function, expected prototype:\nvoid wxBitmapComboBox::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetName(name);

		return 0;
	}

	// void wxBitmapComboBox::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxBitmapComboBox::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxBitmapComboBox::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxBitmapComboBox::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_Destroy() function, expected prototype:\nbool wxBitmapComboBox::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxBitmapComboBox::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxBitmapComboBox::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxBitmapComboBox::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxBitmapComboBox::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxBitmapComboBox::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxBitmapComboBox::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxBitmapComboBox::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetDropTarget(target);

		return 0;
	}

	// void wxBitmapComboBox::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxBitmapComboBox::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxBitmapComboBox::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_Layout() function, expected prototype:\nbool wxBitmapComboBox::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapComboBox::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_HasCapture() const function, expected prototype:\nbool wxBitmapComboBox::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapComboBox::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxBitmapComboBox::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxBitmapComboBox::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxBitmapComboBox::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxBitmapComboBox::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::WarpPointer(x, y);

		return 0;
	}

	// void wxBitmapComboBox::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxBitmapComboBox::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxBitmapComboBox::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxBitmapComboBox::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxBitmapComboBox::base_GetHandle() const function, expected prototype:\nHWND wxBitmapComboBox::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxBitmapComboBox::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxBitmapComboBox::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxBitmapComboBox::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_HasMultiplePages() const function, expected prototype:\nbool wxBitmapComboBox::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxBitmapComboBox::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_InheritAttributes() function, expected prototype:\nvoid wxBitmapComboBox::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::InheritAttributes();

		return 0;
	}

	// void wxBitmapComboBox::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_InitDialog() function, expected prototype:\nvoid wxBitmapComboBox::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::InitDialog();

		return 0;
	}

	// bool wxBitmapComboBox::base_IsDoubleBuffered() const
	static int _bind_base_IsDoubleBuffered(lua_State *L) {
		if (!_lg_typecheck_base_IsDoubleBuffered(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_IsDoubleBuffered() const function, expected prototype:\nbool wxBitmapComboBox::base_IsDoubleBuffered() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_IsDoubleBuffered() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::IsDoubleBuffered();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapComboBox::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_IsRetained() const function, expected prototype:\nbool wxBitmapComboBox::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapComboBox::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_IsTopLevel() const function, expected prototype:\nbool wxBitmapComboBox::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxBitmapComboBox::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxBitmapComboBox::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::MakeModal(modal);

		return 0;
	}

	// void wxBitmapComboBox::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_OnInternalIdle() function, expected prototype:\nvoid wxBitmapComboBox::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::OnInternalIdle();

		return 0;
	}

	// bool wxBitmapComboBox::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxBitmapComboBox::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapComboBox::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxBitmapComboBox::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxBitmapComboBox::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxBitmapComboBox::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::UpdateWindowUI(flags);

		return 0;
	}

	// void wxBitmapComboBox::base_Command(wxCommandEvent & event)
	static int _bind_base_Command(lua_State *L) {
		if (!_lg_typecheck_base_Command(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_Command(wxCommandEvent & event) function, expected prototype:\nvoid wxBitmapComboBox::base_Command(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxBitmapComboBox::base_Command function");
		}
		wxCommandEvent & event=*event_ptr;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_Command(wxCommandEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::Command(event);

		return 0;
	}

	// wxString wxBitmapComboBox::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxBitmapComboBox::base_GetLabel() const function, expected prototype:\nwxString wxBitmapComboBox::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxBitmapComboBox::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxBitmapComboBox::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxBitmapComboBox::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxBitmapComboBox::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetLabel(label);

		return 0;
	}

	// void wxBitmapComboBox::base_AppendText(const wxString & text)
	static int _bind_base_AppendText(lua_State *L) {
		if (!_lg_typecheck_base_AppendText(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_AppendText(const wxString & text) function, expected prototype:\nvoid wxBitmapComboBox::base_AppendText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_AppendText(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::AppendText(text);

		return 0;
	}

	// bool wxBitmapComboBox::base_CanCopy() const
	static int _bind_base_CanCopy(lua_State *L) {
		if (!_lg_typecheck_base_CanCopy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_CanCopy() const function, expected prototype:\nbool wxBitmapComboBox::base_CanCopy() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_CanCopy() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::CanCopy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapComboBox::base_CanCut() const
	static int _bind_base_CanCut(lua_State *L) {
		if (!_lg_typecheck_base_CanCut(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_CanCut() const function, expected prototype:\nbool wxBitmapComboBox::base_CanCut() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_CanCut() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::CanCut();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapComboBox::base_CanPaste() const
	static int _bind_base_CanPaste(lua_State *L) {
		if (!_lg_typecheck_base_CanPaste(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_CanPaste() const function, expected prototype:\nbool wxBitmapComboBox::base_CanPaste() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_CanPaste() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::CanPaste();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapComboBox::base_CanRedo() const
	static int _bind_base_CanRedo(lua_State *L) {
		if (!_lg_typecheck_base_CanRedo(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_CanRedo() const function, expected prototype:\nbool wxBitmapComboBox::base_CanRedo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_CanRedo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::CanRedo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBitmapComboBox::base_CanUndo() const
	static int _bind_base_CanUndo(lua_State *L) {
		if (!_lg_typecheck_base_CanUndo(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_CanUndo() const function, expected prototype:\nbool wxBitmapComboBox::base_CanUndo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_CanUndo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::CanUndo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxBitmapComboBox::base_ChangeValue(const wxString & value)
	static int _bind_base_ChangeValue(lua_State *L) {
		if (!_lg_typecheck_base_ChangeValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_ChangeValue(const wxString & value) function, expected prototype:\nvoid wxBitmapComboBox::base_ChangeValue(const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_ChangeValue(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::ChangeValue(value);

		return 0;
	}

	// void wxBitmapComboBox::base_Clear()
	static int _bind_base_Clear(lua_State *L) {
		if (!_lg_typecheck_base_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_Clear() function, expected prototype:\nvoid wxBitmapComboBox::base_Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_Clear(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::Clear();

		return 0;
	}

	// void wxBitmapComboBox::base_Copy()
	static int _bind_base_Copy(lua_State *L) {
		if (!_lg_typecheck_base_Copy(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_Copy() function, expected prototype:\nvoid wxBitmapComboBox::base_Copy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_Copy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::Copy();

		return 0;
	}

	// long wxBitmapComboBox::base_GetLastPosition() const
	static int _bind_base_GetLastPosition(lua_State *L) {
		if (!_lg_typecheck_base_GetLastPosition(L)) {
			luaL_error(L, "luna typecheck failed in long wxBitmapComboBox::base_GetLastPosition() const function, expected prototype:\nlong wxBitmapComboBox::base_GetLastPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxBitmapComboBox::base_GetLastPosition() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxBitmapComboBox::GetLastPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxBitmapComboBox::base_GetRange(long from, long to) const
	static int _bind_base_GetRange(lua_State *L) {
		if (!_lg_typecheck_base_GetRange(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxBitmapComboBox::base_GetRange(long from, long to) const function, expected prototype:\nwxString wxBitmapComboBox::base_GetRange(long from, long to) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long from=(long)lua_tonumber(L,2);
		long to=(long)lua_tonumber(L,3);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxBitmapComboBox::base_GetRange(long, long) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxBitmapComboBox::GetRange(from, to);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxBitmapComboBox::base_GetValue() const
	static int _bind_base_GetValue(lua_State *L) {
		if (!_lg_typecheck_base_GetValue(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxBitmapComboBox::base_GetValue() const function, expected prototype:\nwxString wxBitmapComboBox::base_GetValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxBitmapComboBox::base_GetValue() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxBitmapComboBox::GetValue();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxBitmapComboBox::base_IsEditable() const
	static int _bind_base_IsEditable(lua_State *L) {
		if (!_lg_typecheck_base_IsEditable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_IsEditable() const function, expected prototype:\nbool wxBitmapComboBox::base_IsEditable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_IsEditable() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::IsEditable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxBitmapComboBox::base_Paste()
	static int _bind_base_Paste(lua_State *L) {
		if (!_lg_typecheck_base_Paste(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_Paste() function, expected prototype:\nvoid wxBitmapComboBox::base_Paste()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_Paste(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::Paste();

		return 0;
	}

	// void wxBitmapComboBox::base_Redo()
	static int _bind_base_Redo(lua_State *L) {
		if (!_lg_typecheck_base_Redo(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_Redo() function, expected prototype:\nvoid wxBitmapComboBox::base_Redo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_Redo(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::Redo();

		return 0;
	}

	// void wxBitmapComboBox::base_Remove(long from, long to)
	static int _bind_base_Remove(lua_State *L) {
		if (!_lg_typecheck_base_Remove(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_Remove(long from, long to) function, expected prototype:\nvoid wxBitmapComboBox::base_Remove(long from, long to)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long from=(long)lua_tonumber(L,2);
		long to=(long)lua_tonumber(L,3);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_Remove(long, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::Remove(from, to);

		return 0;
	}

	// void wxBitmapComboBox::base_Replace(long from, long to, const wxString & value)
	static int _bind_base_Replace(lua_State *L) {
		if (!_lg_typecheck_base_Replace(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_Replace(long from, long to, const wxString & value) function, expected prototype:\nvoid wxBitmapComboBox::base_Replace(long from, long to, const wxString & value)\nClass arguments details:\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		long from=(long)lua_tonumber(L,2);
		long to=(long)lua_tonumber(L,3);
		wxString value(lua_tostring(L,4),lua_objlen(L,4));

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_Replace(long, long, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::Replace(from, to, value);

		return 0;
	}

	// void wxBitmapComboBox::base_SetEditable(bool editable)
	static int _bind_base_SetEditable(lua_State *L) {
		if (!_lg_typecheck_base_SetEditable(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetEditable(bool editable) function, expected prototype:\nvoid wxBitmapComboBox::base_SetEditable(bool editable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool editable=(bool)(lua_toboolean(L,2)==1);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetEditable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetEditable(editable);

		return 0;
	}

	// void wxBitmapComboBox::base_SetInsertionPoint(long pos)
	static int _bind_base_SetInsertionPoint(lua_State *L) {
		if (!_lg_typecheck_base_SetInsertionPoint(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetInsertionPoint(long pos) function, expected prototype:\nvoid wxBitmapComboBox::base_SetInsertionPoint(long pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long pos=(long)lua_tonumber(L,2);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetInsertionPoint(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetInsertionPoint(pos);

		return 0;
	}

	// void wxBitmapComboBox::base_SetInsertionPointEnd()
	static int _bind_base_SetInsertionPointEnd(lua_State *L) {
		if (!_lg_typecheck_base_SetInsertionPointEnd(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetInsertionPointEnd() function, expected prototype:\nvoid wxBitmapComboBox::base_SetInsertionPointEnd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetInsertionPointEnd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetInsertionPointEnd();

		return 0;
	}

	// void wxBitmapComboBox::base_SetMaxLength(unsigned long len)
	static int _bind_base_SetMaxLength(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxLength(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetMaxLength(unsigned long len) function, expected prototype:\nvoid wxBitmapComboBox::base_SetMaxLength(unsigned long len)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long len=(unsigned long)lua_tonumber(L,2);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetMaxLength(unsigned long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetMaxLength(len);

		return 0;
	}

	// void wxBitmapComboBox::base_SelectAll()
	static int _bind_base_SelectAll(lua_State *L) {
		if (!_lg_typecheck_base_SelectAll(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SelectAll() function, expected prototype:\nvoid wxBitmapComboBox::base_SelectAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SelectAll(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SelectAll();

		return 0;
	}

	// bool wxBitmapComboBox::base_SetHint(const wxString & hint)
	static int _bind_base_SetHint(lua_State *L) {
		if (!_lg_typecheck_base_SetHint(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBitmapComboBox::base_SetHint(const wxString & hint) function, expected prototype:\nbool wxBitmapComboBox::base_SetHint(const wxString & hint)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString hint(lua_tostring(L,2),lua_objlen(L,2));

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBitmapComboBox::base_SetHint(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBitmapComboBox::SetHint(hint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxBitmapComboBox::base_GetHint() const
	static int _bind_base_GetHint(lua_State *L) {
		if (!_lg_typecheck_base_GetHint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxBitmapComboBox::base_GetHint() const function, expected prototype:\nwxString wxBitmapComboBox::base_GetHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxBitmapComboBox::base_GetHint() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxBitmapComboBox::GetHint();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxBitmapComboBox::base_Undo()
	static int _bind_base_Undo(lua_State *L) {
		if (!_lg_typecheck_base_Undo(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_Undo() function, expected prototype:\nvoid wxBitmapComboBox::base_Undo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_Undo(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::Undo();

		return 0;
	}

	// void wxBitmapComboBox::base_WriteText(const wxString & text)
	static int _bind_base_WriteText(lua_State *L) {
		if (!_lg_typecheck_base_WriteText(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_WriteText(const wxString & text) function, expected prototype:\nvoid wxBitmapComboBox::base_WriteText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_WriteText(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::WriteText(text);

		return 0;
	}

	// int wxBitmapComboBox::base_GetCurrentSelection() const
	static int _bind_base_GetCurrentSelection(lua_State *L) {
		if (!_lg_typecheck_base_GetCurrentSelection(L)) {
			luaL_error(L, "luna typecheck failed in int wxBitmapComboBox::base_GetCurrentSelection() const function, expected prototype:\nint wxBitmapComboBox::base_GetCurrentSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxBitmapComboBox::base_GetCurrentSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxBitmapComboBox::GetCurrentSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxBitmapComboBox::base_GetInsertionPoint() const
	static int _bind_base_GetInsertionPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetInsertionPoint(L)) {
			luaL_error(L, "luna typecheck failed in long wxBitmapComboBox::base_GetInsertionPoint() const function, expected prototype:\nlong wxBitmapComboBox::base_GetInsertionPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxBitmapComboBox::base_GetInsertionPoint() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxBitmapComboBox::GetInsertionPoint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxBitmapComboBox::base_SetSelection(long from, long to)
	static int _bind_base_SetSelection_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSelection_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetSelection(long from, long to) function, expected prototype:\nvoid wxBitmapComboBox::base_SetSelection(long from, long to)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long from=(long)lua_tonumber(L,2);
		long to=(long)lua_tonumber(L,3);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetSelection(long, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetSelection(from, to);

		return 0;
	}

	// void wxBitmapComboBox::base_SetSelection(int n)
	static int _bind_base_SetSelection_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSelection_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetSelection(int n) function, expected prototype:\nvoid wxBitmapComboBox::base_SetSelection(int n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetSelection(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetSelection(n);

		return 0;
	}

	// Overload binder for wxBitmapComboBox::base_SetSelection
	static int _bind_base_SetSelection(lua_State *L) {
		if (_lg_typecheck_base_SetSelection_overload_1(L)) return _bind_base_SetSelection_overload_1(L);
		if (_lg_typecheck_base_SetSelection_overload_2(L)) return _bind_base_SetSelection_overload_2(L);

		luaL_error(L, "error in function base_SetSelection, cannot match any of the overloads for function base_SetSelection:\n  base_SetSelection(long, long)\n  base_SetSelection(int)\n");
		return 0;
	}

	// void wxBitmapComboBox::base_SetValue(const wxString & text)
	static int _bind_base_SetValue(lua_State *L) {
		if (!_lg_typecheck_base_SetValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetValue(const wxString & text) function, expected prototype:\nvoid wxBitmapComboBox::base_SetValue(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetValue(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetValue(text);

		return 0;
	}

	// void wxBitmapComboBox::base_Popup()
	static int _bind_base_Popup(lua_State *L) {
		if (!_lg_typecheck_base_Popup(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_Popup() function, expected prototype:\nvoid wxBitmapComboBox::base_Popup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_Popup(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::Popup();

		return 0;
	}

	// void wxBitmapComboBox::base_Dismiss()
	static int _bind_base_Dismiss(lua_State *L) {
		if (!_lg_typecheck_base_Dismiss(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_Dismiss() function, expected prototype:\nvoid wxBitmapComboBox::base_Dismiss()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_Dismiss(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::Dismiss();

		return 0;
	}

	// int wxBitmapComboBox::base_GetSelection() const
	static int _bind_base_GetSelection_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_GetSelection_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in int wxBitmapComboBox::base_GetSelection() const function, expected prototype:\nint wxBitmapComboBox::base_GetSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxBitmapComboBox::base_GetSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxBitmapComboBox::GetSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxBitmapComboBox::base_GetSelection(long * from, long * to) const
	static int _bind_base_GetSelection_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_GetSelection_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_GetSelection(long * from, long * to) const function, expected prototype:\nvoid wxBitmapComboBox::base_GetSelection(long * from, long * to) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long* from=(long*)Luna< void >::check(L,2);
		long* to=(long*)Luna< void >::check(L,3);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_GetSelection(long *, long *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::GetSelection(from, to);

		return 0;
	}

	// Overload binder for wxBitmapComboBox::base_GetSelection
	static int _bind_base_GetSelection(lua_State *L) {
		if (_lg_typecheck_base_GetSelection_overload_1(L)) return _bind_base_GetSelection_overload_1(L);
		if (_lg_typecheck_base_GetSelection_overload_2(L)) return _bind_base_GetSelection_overload_2(L);

		luaL_error(L, "error in function base_GetSelection, cannot match any of the overloads for function base_GetSelection:\n  base_GetSelection()\n  base_GetSelection(long *, long *)\n");
		return 0;
	}

	// int wxBitmapComboBox::base_FindString(const wxString & string, bool caseSensitive = false) const
	static int _bind_base_FindString(lua_State *L) {
		if (!_lg_typecheck_base_FindString(L)) {
			luaL_error(L, "luna typecheck failed in int wxBitmapComboBox::base_FindString(const wxString & string, bool caseSensitive = false) const function, expected prototype:\nint wxBitmapComboBox::base_FindString(const wxString & string, bool caseSensitive = false) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString string(lua_tostring(L,2),lua_objlen(L,2));
		bool caseSensitive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxBitmapComboBox::base_FindString(const wxString &, bool) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxBitmapComboBox::FindString(string, caseSensitive);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxBitmapComboBox::base_GetString(unsigned int n) const
	static int _bind_base_GetString(lua_State *L) {
		if (!_lg_typecheck_base_GetString(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxBitmapComboBox::base_GetString(unsigned int n) const function, expected prototype:\nwxString wxBitmapComboBox::base_GetString(unsigned int n) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxBitmapComboBox::base_GetString(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxBitmapComboBox::GetString(n);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxBitmapComboBox::base_GetStringSelection() const
	static int _bind_base_GetStringSelection(lua_State *L) {
		if (!_lg_typecheck_base_GetStringSelection(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxBitmapComboBox::base_GetStringSelection() const function, expected prototype:\nwxString wxBitmapComboBox::base_GetStringSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxBitmapComboBox::base_GetStringSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxBitmapComboBox::GetStringSelection();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxBitmapComboBox::base_SetString(unsigned int n, const wxString & string)
	static int _bind_base_SetString(lua_State *L) {
		if (!_lg_typecheck_base_SetString(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetString(unsigned int n, const wxString & string) function, expected prototype:\nvoid wxBitmapComboBox::base_SetString(unsigned int n, const wxString & string)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);
		wxString string(lua_tostring(L,3),lua_objlen(L,3));

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetString(unsigned int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetString(n, string);

		return 0;
	}

	// unsigned int wxBitmapComboBox::base_GetCount() const
	static int _bind_base_GetCount(lua_State *L) {
		if (!_lg_typecheck_base_GetCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxBitmapComboBox::base_GetCount() const function, expected prototype:\nunsigned int wxBitmapComboBox::base_GetCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxBitmapComboBox::base_GetCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->wxBitmapComboBox::GetCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSize wxBitmapComboBox::base_GetBitmapSize() const
	static int _bind_base_GetBitmapSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBitmapSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxBitmapComboBox::base_GetBitmapSize() const function, expected prototype:\nwxSize wxBitmapComboBox::base_GetBitmapSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxBitmapComboBox::base_GetBitmapSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxBitmapComboBox::GetBitmapSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxBitmap wxBitmapComboBox::base_GetItemBitmap(unsigned int n) const
	static int _bind_base_GetItemBitmap(lua_State *L) {
		if (!_lg_typecheck_base_GetItemBitmap(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmap wxBitmapComboBox::base_GetItemBitmap(unsigned int n) const function, expected prototype:\nwxBitmap wxBitmapComboBox::base_GetItemBitmap(unsigned int n) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmap wxBitmapComboBox::base_GetItemBitmap(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBitmap stack_lret = self->wxBitmapComboBox::GetItemBitmap(n);
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// void wxBitmapComboBox::base_SetItemBitmap(unsigned int n, const wxBitmap & bitmap)
	static int _bind_base_SetItemBitmap(lua_State *L) {
		if (!_lg_typecheck_base_SetItemBitmap(L)) {
			luaL_error(L, "luna typecheck failed in void wxBitmapComboBox::base_SetItemBitmap(unsigned int n, const wxBitmap & bitmap) function, expected prototype:\nvoid wxBitmapComboBox::base_SetItemBitmap(unsigned int n, const wxBitmap & bitmap)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);
		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxBitmapComboBox::base_SetItemBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxBitmapComboBox* self=Luna< wxObject >::checkSubType< wxBitmapComboBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBitmapComboBox::base_SetItemBitmap(unsigned int, const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBitmapComboBox::SetItemBitmap(n, bitmap);

		return 0;
	}


	// Operator binds:

};

wxBitmapComboBox* LunaTraits< wxBitmapComboBox >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxBitmapComboBox::_bind_ctor(L);
}

void LunaTraits< wxBitmapComboBox >::_bind_dtor(wxBitmapComboBox* obj) {
	delete obj;
}

const char LunaTraits< wxBitmapComboBox >::className[] = "wxBitmapComboBox";
const char LunaTraits< wxBitmapComboBox >::fullName[] = "wxBitmapComboBox";
const char LunaTraits< wxBitmapComboBox >::moduleName[] = "wx";
const char* LunaTraits< wxBitmapComboBox >::parents[] = {"wx.wxComboBox", 0};
const int LunaTraits< wxBitmapComboBox >::hash = 96967094;
const int LunaTraits< wxBitmapComboBox >::uniqueIDs[] = {56813631, 53506535, 69784830, 54144136,0};

luna_RegType LunaTraits< wxBitmapComboBox >::methods[] = {
	{"Append", &luna_wrapper_wxBitmapComboBox::_bind_Append},
	{"Create", &luna_wrapper_wxBitmapComboBox::_bind_Create},
	{"GetBitmapSize", &luna_wrapper_wxBitmapComboBox::_bind_GetBitmapSize},
	{"GetItemBitmap", &luna_wrapper_wxBitmapComboBox::_bind_GetItemBitmap},
	{"SetItemBitmap", &luna_wrapper_wxBitmapComboBox::_bind_SetItemBitmap},
	{"base_GetClassInfo", &luna_wrapper_wxBitmapComboBox::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxBitmapComboBox::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxBitmapComboBox::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxBitmapComboBox::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxBitmapComboBox::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxBitmapComboBox::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxBitmapComboBox::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxBitmapComboBox::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxBitmapComboBox::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxBitmapComboBox::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxBitmapComboBox::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxBitmapComboBox::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxBitmapComboBox::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxBitmapComboBox::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxBitmapComboBox::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxBitmapComboBox::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxBitmapComboBox::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxBitmapComboBox::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxBitmapComboBox::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxBitmapComboBox::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxBitmapComboBox::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxBitmapComboBox::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxBitmapComboBox::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxBitmapComboBox::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxBitmapComboBox::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxBitmapComboBox::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxBitmapComboBox::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxBitmapComboBox::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxBitmapComboBox::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxBitmapComboBox::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxBitmapComboBox::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxBitmapComboBox::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxBitmapComboBox::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxBitmapComboBox::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxBitmapComboBox::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxBitmapComboBox::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxBitmapComboBox::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxBitmapComboBox::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxBitmapComboBox::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxBitmapComboBox::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxBitmapComboBox::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxBitmapComboBox::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxBitmapComboBox::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxBitmapComboBox::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxBitmapComboBox::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxBitmapComboBox::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxBitmapComboBox::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxBitmapComboBox::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxBitmapComboBox::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxBitmapComboBox::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxBitmapComboBox::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxBitmapComboBox::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxBitmapComboBox::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxBitmapComboBox::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxBitmapComboBox::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxBitmapComboBox::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxBitmapComboBox::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxBitmapComboBox::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxBitmapComboBox::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxBitmapComboBox::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxBitmapComboBox::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxBitmapComboBox::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxBitmapComboBox::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxBitmapComboBox::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxBitmapComboBox::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxBitmapComboBox::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxBitmapComboBox::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxBitmapComboBox::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxBitmapComboBox::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxBitmapComboBox::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxBitmapComboBox::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxBitmapComboBox::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxBitmapComboBox::_bind_base_Validate},
	{"base_GetLayoutDirection", &luna_wrapper_wxBitmapComboBox::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxBitmapComboBox::_bind_base_GetName},
	{"base_SetLayoutDirection", &luna_wrapper_wxBitmapComboBox::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxBitmapComboBox::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxBitmapComboBox::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxBitmapComboBox::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxBitmapComboBox::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxBitmapComboBox::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxBitmapComboBox::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxBitmapComboBox::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxBitmapComboBox::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxBitmapComboBox::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxBitmapComboBox::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxBitmapComboBox::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxBitmapComboBox::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxBitmapComboBox::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxBitmapComboBox::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxBitmapComboBox::_bind_base_InitDialog},
	{"base_IsDoubleBuffered", &luna_wrapper_wxBitmapComboBox::_bind_base_IsDoubleBuffered},
	{"base_IsRetained", &luna_wrapper_wxBitmapComboBox::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxBitmapComboBox::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxBitmapComboBox::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxBitmapComboBox::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxBitmapComboBox::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxBitmapComboBox::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxBitmapComboBox::_bind_base_UpdateWindowUI},
	{"base_Command", &luna_wrapper_wxBitmapComboBox::_bind_base_Command},
	{"base_GetLabel", &luna_wrapper_wxBitmapComboBox::_bind_base_GetLabel},
	{"base_SetLabel", &luna_wrapper_wxBitmapComboBox::_bind_base_SetLabel},
	{"base_AppendText", &luna_wrapper_wxBitmapComboBox::_bind_base_AppendText},
	{"base_CanCopy", &luna_wrapper_wxBitmapComboBox::_bind_base_CanCopy},
	{"base_CanCut", &luna_wrapper_wxBitmapComboBox::_bind_base_CanCut},
	{"base_CanPaste", &luna_wrapper_wxBitmapComboBox::_bind_base_CanPaste},
	{"base_CanRedo", &luna_wrapper_wxBitmapComboBox::_bind_base_CanRedo},
	{"base_CanUndo", &luna_wrapper_wxBitmapComboBox::_bind_base_CanUndo},
	{"base_ChangeValue", &luna_wrapper_wxBitmapComboBox::_bind_base_ChangeValue},
	{"base_Clear", &luna_wrapper_wxBitmapComboBox::_bind_base_Clear},
	{"base_Copy", &luna_wrapper_wxBitmapComboBox::_bind_base_Copy},
	{"base_GetLastPosition", &luna_wrapper_wxBitmapComboBox::_bind_base_GetLastPosition},
	{"base_GetRange", &luna_wrapper_wxBitmapComboBox::_bind_base_GetRange},
	{"base_GetValue", &luna_wrapper_wxBitmapComboBox::_bind_base_GetValue},
	{"base_IsEditable", &luna_wrapper_wxBitmapComboBox::_bind_base_IsEditable},
	{"base_Paste", &luna_wrapper_wxBitmapComboBox::_bind_base_Paste},
	{"base_Redo", &luna_wrapper_wxBitmapComboBox::_bind_base_Redo},
	{"base_Remove", &luna_wrapper_wxBitmapComboBox::_bind_base_Remove},
	{"base_Replace", &luna_wrapper_wxBitmapComboBox::_bind_base_Replace},
	{"base_SetEditable", &luna_wrapper_wxBitmapComboBox::_bind_base_SetEditable},
	{"base_SetInsertionPoint", &luna_wrapper_wxBitmapComboBox::_bind_base_SetInsertionPoint},
	{"base_SetInsertionPointEnd", &luna_wrapper_wxBitmapComboBox::_bind_base_SetInsertionPointEnd},
	{"base_SetMaxLength", &luna_wrapper_wxBitmapComboBox::_bind_base_SetMaxLength},
	{"base_SelectAll", &luna_wrapper_wxBitmapComboBox::_bind_base_SelectAll},
	{"base_SetHint", &luna_wrapper_wxBitmapComboBox::_bind_base_SetHint},
	{"base_GetHint", &luna_wrapper_wxBitmapComboBox::_bind_base_GetHint},
	{"base_Undo", &luna_wrapper_wxBitmapComboBox::_bind_base_Undo},
	{"base_WriteText", &luna_wrapper_wxBitmapComboBox::_bind_base_WriteText},
	{"base_GetCurrentSelection", &luna_wrapper_wxBitmapComboBox::_bind_base_GetCurrentSelection},
	{"base_GetInsertionPoint", &luna_wrapper_wxBitmapComboBox::_bind_base_GetInsertionPoint},
	{"base_SetSelection", &luna_wrapper_wxBitmapComboBox::_bind_base_SetSelection},
	{"base_SetValue", &luna_wrapper_wxBitmapComboBox::_bind_base_SetValue},
	{"base_Popup", &luna_wrapper_wxBitmapComboBox::_bind_base_Popup},
	{"base_Dismiss", &luna_wrapper_wxBitmapComboBox::_bind_base_Dismiss},
	{"base_GetSelection", &luna_wrapper_wxBitmapComboBox::_bind_base_GetSelection},
	{"base_FindString", &luna_wrapper_wxBitmapComboBox::_bind_base_FindString},
	{"base_GetString", &luna_wrapper_wxBitmapComboBox::_bind_base_GetString},
	{"base_GetStringSelection", &luna_wrapper_wxBitmapComboBox::_bind_base_GetStringSelection},
	{"base_SetString", &luna_wrapper_wxBitmapComboBox::_bind_base_SetString},
	{"base_GetCount", &luna_wrapper_wxBitmapComboBox::_bind_base_GetCount},
	{"base_GetBitmapSize", &luna_wrapper_wxBitmapComboBox::_bind_base_GetBitmapSize},
	{"base_GetItemBitmap", &luna_wrapper_wxBitmapComboBox::_bind_base_GetItemBitmap},
	{"base_SetItemBitmap", &luna_wrapper_wxBitmapComboBox::_bind_base_SetItemBitmap},
	{"fromVoid", &luna_wrapper_wxBitmapComboBox::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxBitmapComboBox::_bind_asVoid},
	{"getTable", &luna_wrapper_wxBitmapComboBox::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxBitmapComboBox >::converters[] = {
	{"wxObject", &luna_wrapper_wxBitmapComboBox::_cast_from_wxObject},
	{"wxItemContainerImmutable", &luna_wrapper_wxBitmapComboBox::_cast_from_wxItemContainerImmutable},
	{"wxTextEntry", &luna_wrapper_wxBitmapComboBox::_cast_from_wxTextEntry},
	{0,0}
};

luna_RegEnumType LunaTraits< wxBitmapComboBox >::enumValues[] = {
	{0,0}
};


