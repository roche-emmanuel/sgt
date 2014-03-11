#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRadioBox.h>

class luna_wrapper_wxRadioBox {
public:
	typedef Luna< wxRadioBox > luna_t;

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

		wxRadioBox* self= (wxRadioBox*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRadioBox >::push(L,self,false);
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
		//wxRadioBox* ptr= dynamic_cast< wxRadioBox* >(Luna< wxObject >::check(L,1));
		wxRadioBox* ptr= luna_caster< wxObject, wxRadioBox >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRadioBox >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>10 ) return false;

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
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && lua_type(L,8)!=LUA_TNUMBER ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,56813631) ) return false;
		if( luatop>8 && (!(Luna< wxObject >::checkSubType< wxValidator >(L,9))) ) return false;
		if( luatop>9 && lua_type(L,10)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>11 ) return false;

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
		if( luatop>7 && (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && lua_type(L,9)!=LUA_TNUMBER ) return false;
		if( luatop>9 && !Luna<void>::has_uniqueid(L,10,56813631) ) return false;
		if( luatop>9 && (!(Luna< wxObject >::checkSubType< wxValidator >(L,10))) ) return false;
		if( luatop>10 && lua_type(L,11)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>11 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,59507769) ) return false;
		if( luatop>7 && (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && lua_type(L,9)!=LUA_TNUMBER ) return false;
		if( luatop>9 && !Luna<void>::has_uniqueid(L,10,56813631) ) return false;
		if( luatop>10 && lua_type(L,11)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Enable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindString(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumnCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItemFromPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemHelpText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemToolTip(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRowCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsItemEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsItemShown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemHelpText(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemToolTip(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Show(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetString(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_Enable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_FindString(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetItemFromPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsItemEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsItemShown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Show(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetString(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxRadioBox::wxRadioBox()
	static wxRadioBox* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxRadioBox::wxRadioBox() function, expected prototype:\nwxRadioBox::wxRadioBox()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxRadioBox();
	}

	// wxRadioBox::wxRadioBox(wxWindow * parent, int id, const wxString & label, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, int majorDimension = 0, long style = wxRA_SPECIFY_COLS, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRadioBoxNameStr)
	static wxRadioBox* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxRadioBox::wxRadioBox(wxWindow * parent, int id, const wxString & label, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, int majorDimension = 0, long style = wxRA_SPECIFY_COLS, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRadioBoxNameStr) function, expected prototype:\nwxRadioBox::wxRadioBox(wxWindow * parent, int id, const wxString & label, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, int majorDimension = 0, long style = wxRA_SPECIFY_COLS, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRadioBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 6 ID = 59507769\narg 9 ID = 56813631\narg 10 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,4));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRadioBox::wxRadioBox function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,5));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRadioBox::wxRadioBox function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,6));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxRadioBox::wxRadioBox function");
		}
		const wxArrayString & choices=*choices_ptr;
		int majorDimension=luatop>6 ? (int)lua_tointeger(L,7) : (int)0;
		long style=luatop>7 ? (long)lua_tonumber(L,8) : (long)wxRA_SPECIFY_COLS;
		const wxValidator* validator_ptr=luatop>8 ? (Luna< wxObject >::checkSubType< wxValidator >(L,9)) : NULL;
		if( luatop>8 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxRadioBox::wxRadioBox function");
		}
		const wxValidator & validator=luatop>8 ? *validator_ptr : (const wxValidator&)wxDefaultValidator;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		return new wxRadioBox(parent, id, label, pos, size, choices, majorDimension, style, validator, name);
	}

	// wxRadioBox::wxRadioBox(lua_Table * data)
	static wxRadioBox* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxRadioBox::wxRadioBox(lua_Table * data) function, expected prototype:\nwxRadioBox::wxRadioBox(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxRadioBox(L,NULL);
	}

	// wxRadioBox::wxRadioBox(lua_Table * data, wxWindow * parent, int id, const wxString & label, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, int majorDimension = 0, long style = wxRA_SPECIFY_COLS, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRadioBoxNameStr)
	static wxRadioBox* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxRadioBox::wxRadioBox(lua_Table * data, wxWindow * parent, int id, const wxString & label, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, int majorDimension = 0, long style = wxRA_SPECIFY_COLS, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRadioBoxNameStr) function, expected prototype:\nwxRadioBox::wxRadioBox(lua_Table * data, wxWindow * parent, int id, const wxString & label, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, int majorDimension = 0, long style = wxRA_SPECIFY_COLS, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRadioBoxNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 88196105\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 7 ID = 59507769\narg 10 ID = 56813631\narg 11 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString label(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,5));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRadioBox::wxRadioBox function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,6));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRadioBox::wxRadioBox function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,7));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxRadioBox::wxRadioBox function");
		}
		const wxArrayString & choices=*choices_ptr;
		int majorDimension=luatop>7 ? (int)lua_tointeger(L,8) : (int)0;
		long style=luatop>8 ? (long)lua_tonumber(L,9) : (long)wxRA_SPECIFY_COLS;
		const wxValidator* validator_ptr=luatop>9 ? (Luna< wxObject >::checkSubType< wxValidator >(L,10)) : NULL;
		if( luatop>9 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxRadioBox::wxRadioBox function");
		}
		const wxValidator & validator=luatop>9 ? *validator_ptr : (const wxValidator&)wxDefaultValidator;
		wxString name(lua_tostring(L,11),lua_objlen(L,11));

		return new wrapper_wxRadioBox(L,NULL, parent, id, label, pos, size, choices, majorDimension, style, validator, name);
	}

	// Overload binder for wxRadioBox::wxRadioBox
	static wxRadioBox* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxRadioBox, cannot match any of the overloads for function wxRadioBox:\n  wxRadioBox()\n  wxRadioBox(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, const wxArrayString &, int, long, const wxValidator &, const wxString &)\n  wxRadioBox(lua_Table *)\n  wxRadioBox(lua_Table *, wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, const wxArrayString &, int, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxRadioBox::Create(wxWindow * parent, int id, const wxString & label, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, int majorDimension = 0, long style = wxRA_SPECIFY_COLS, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRadioBoxNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::Create(wxWindow * parent, int id, const wxString & label, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, int majorDimension = 0, long style = wxRA_SPECIFY_COLS, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRadioBoxNameStr) function, expected prototype:\nbool wxRadioBox::Create(wxWindow * parent, int id, const wxString & label, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, int majorDimension = 0, long style = wxRA_SPECIFY_COLS, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRadioBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 6 ID = 59507769\narg 9 ID = 56813631\narg 10 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString label(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,5));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRadioBox::Create function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,6));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRadioBox::Create function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,7));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxRadioBox::Create function");
		}
		const wxArrayString & choices=*choices_ptr;
		int majorDimension=luatop>7 ? (int)lua_tointeger(L,8) : (int)0;
		long style=luatop>8 ? (long)lua_tonumber(L,9) : (long)wxRA_SPECIFY_COLS;
		const wxValidator* validator_ptr=luatop>9 ? (Luna< wxObject >::checkSubType< wxValidator >(L,10)) : NULL;
		if( luatop>9 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxRadioBox::Create function");
		}
		const wxValidator & validator=luatop>9 ? *validator_ptr : (const wxValidator&)wxDefaultValidator;
		wxString name(lua_tostring(L,11),lua_objlen(L,11));

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, const wxArrayString &, int, long, const wxValidator &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(parent, id, label, pos, size, choices, majorDimension, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRadioBox::Enable(unsigned int n, bool enable = true)
	static int _bind_Enable(lua_State *L) {
		if (!_lg_typecheck_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::Enable(unsigned int n, bool enable = true) function, expected prototype:\nbool wxRadioBox::Enable(unsigned int n, bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int n=(unsigned int)lua_tointeger(L,2);
		bool enable=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::Enable(unsigned int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Enable(n, enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxRadioBox::FindString(const wxString & string, bool bCase = false) const
	static int _bind_FindString(lua_State *L) {
		if (!_lg_typecheck_FindString(L)) {
			luaL_error(L, "luna typecheck failed in int wxRadioBox::FindString(const wxString & string, bool bCase = false) const function, expected prototype:\nint wxRadioBox::FindString(const wxString & string, bool bCase = false) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString string(lua_tostring(L,2),lua_objlen(L,2));
		bool bCase=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxRadioBox::FindString(const wxString &, bool) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->FindString(string, bCase);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int wxRadioBox::GetColumnCount() const
	static int _bind_GetColumnCount(lua_State *L) {
		if (!_lg_typecheck_GetColumnCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxRadioBox::GetColumnCount() const function, expected prototype:\nunsigned int wxRadioBox::GetColumnCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxRadioBox::GetColumnCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetColumnCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRadioBox::GetItemFromPoint(const wxPoint & pt) const
	static int _bind_GetItemFromPoint(lua_State *L) {
		if (!_lg_typecheck_GetItemFromPoint(L)) {
			luaL_error(L, "luna typecheck failed in int wxRadioBox::GetItemFromPoint(const wxPoint & pt) const function, expected prototype:\nint wxRadioBox::GetItemFromPoint(const wxPoint & pt) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRadioBox::GetItemFromPoint function");
		}
		const wxPoint & pt=*pt_ptr;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxRadioBox::GetItemFromPoint(const wxPoint &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetItemFromPoint(pt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxRadioBox::GetItemHelpText(unsigned int item) const
	static int _bind_GetItemHelpText(lua_State *L) {
		if (!_lg_typecheck_GetItemHelpText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxRadioBox::GetItemHelpText(unsigned int item) const function, expected prototype:\nwxString wxRadioBox::GetItemHelpText(unsigned int item) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int item=(unsigned int)lua_tointeger(L,2);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxRadioBox::GetItemHelpText(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetItemHelpText(item);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxToolTip * wxRadioBox::GetItemToolTip(unsigned int item) const
	static int _bind_GetItemToolTip(lua_State *L) {
		if (!_lg_typecheck_GetItemToolTip(L)) {
			luaL_error(L, "luna typecheck failed in wxToolTip * wxRadioBox::GetItemToolTip(unsigned int item) const function, expected prototype:\nwxToolTip * wxRadioBox::GetItemToolTip(unsigned int item) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int item=(unsigned int)lua_tointeger(L,2);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolTip * wxRadioBox::GetItemToolTip(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolTip * lret = self->GetItemToolTip(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolTip >::push(L,lret,false);

		return 1;
	}

	// unsigned int wxRadioBox::GetRowCount() const
	static int _bind_GetRowCount(lua_State *L) {
		if (!_lg_typecheck_GetRowCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxRadioBox::GetRowCount() const function, expected prototype:\nunsigned int wxRadioBox::GetRowCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxRadioBox::GetRowCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetRowCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxRadioBox::IsItemEnabled(unsigned int n) const
	static int _bind_IsItemEnabled(lua_State *L) {
		if (!_lg_typecheck_IsItemEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::IsItemEnabled(unsigned int n) const function, expected prototype:\nbool wxRadioBox::IsItemEnabled(unsigned int n) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::IsItemEnabled(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsItemEnabled(n);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRadioBox::IsItemShown(unsigned int n) const
	static int _bind_IsItemShown(lua_State *L) {
		if (!_lg_typecheck_IsItemShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::IsItemShown(unsigned int n) const function, expected prototype:\nbool wxRadioBox::IsItemShown(unsigned int n) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::IsItemShown(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsItemShown(n);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRadioBox::SetItemHelpText(unsigned int item, const wxString & helptext)
	static int _bind_SetItemHelpText(lua_State *L) {
		if (!_lg_typecheck_SetItemHelpText(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::SetItemHelpText(unsigned int item, const wxString & helptext) function, expected prototype:\nvoid wxRadioBox::SetItemHelpText(unsigned int item, const wxString & helptext)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int item=(unsigned int)lua_tointeger(L,2);
		wxString helptext(lua_tostring(L,3),lua_objlen(L,3));

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::SetItemHelpText(unsigned int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemHelpText(item, helptext);

		return 0;
	}

	// void wxRadioBox::SetItemToolTip(unsigned int item, const wxString & text)
	static int _bind_SetItemToolTip(lua_State *L) {
		if (!_lg_typecheck_SetItemToolTip(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::SetItemToolTip(unsigned int item, const wxString & text) function, expected prototype:\nvoid wxRadioBox::SetItemToolTip(unsigned int item, const wxString & text)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int item=(unsigned int)lua_tointeger(L,2);
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::SetItemToolTip(unsigned int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemToolTip(item, text);

		return 0;
	}

	// bool wxRadioBox::Show(unsigned int item, bool show = true)
	static int _bind_Show(lua_State *L) {
		if (!_lg_typecheck_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::Show(unsigned int item, bool show = true) function, expected prototype:\nbool wxRadioBox::Show(unsigned int item, bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int item=(unsigned int)lua_tointeger(L,2);
		bool show=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::Show(unsigned int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Show(item, show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int wxRadioBox::GetCount() const
	static int _bind_GetCount(lua_State *L) {
		if (!_lg_typecheck_GetCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxRadioBox::GetCount() const function, expected prototype:\nunsigned int wxRadioBox::GetCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxRadioBox::GetCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxRadioBox::GetString(unsigned int n) const
	static int _bind_GetString(lua_State *L) {
		if (!_lg_typecheck_GetString(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxRadioBox::GetString(unsigned int n) const function, expected prototype:\nwxString wxRadioBox::GetString(unsigned int n) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxRadioBox::GetString(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetString(n);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxRadioBox::SetString(unsigned int n, const wxString & string)
	static int _bind_SetString(lua_State *L) {
		if (!_lg_typecheck_SetString(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::SetString(unsigned int n, const wxString & string) function, expected prototype:\nvoid wxRadioBox::SetString(unsigned int n, const wxString & string)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);
		wxString string(lua_tostring(L,3),lua_objlen(L,3));

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::SetString(unsigned int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetString(n, string);

		return 0;
	}

	// void wxRadioBox::SetSelection(int n)
	static int _bind_SetSelection(lua_State *L) {
		if (!_lg_typecheck_SetSelection(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::SetSelection(int n) function, expected prototype:\nvoid wxRadioBox::SetSelection(int n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::SetSelection(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSelection(n);

		return 0;
	}

	// int wxRadioBox::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luaL_error(L, "luna typecheck failed in int wxRadioBox::GetSelection() const function, expected prototype:\nint wxRadioBox::GetSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxRadioBox::GetSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxClassInfo * wxRadioBox::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxRadioBox::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxRadioBox::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxRadioBox::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxRadioBox::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxRadioBox::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_AcceptsFocus() const function, expected prototype:\nbool wxRadioBox::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRadioBox::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxRadioBox::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRadioBox::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxRadioBox::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRadioBox::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_HasFocus() const function, expected prototype:\nbool wxRadioBox::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRadioBox::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxRadioBox::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::SetCanFocus(canFocus);

		return 0;
	}

	// void wxRadioBox::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_SetFocus() function, expected prototype:\nvoid wxRadioBox::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::SetFocus();

		return 0;
	}

	// void wxRadioBox::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_SetFocusFromKbd() function, expected prototype:\nvoid wxRadioBox::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::SetFocusFromKbd();

		return 0;
	}

	// void wxRadioBox::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxRadioBox::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::AddChild(child);

		return 0;
	}

	// void wxRadioBox::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxRadioBox::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::RemoveChild(child);

		return 0;
	}

	// bool wxRadioBox::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxRadioBox::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRadioBox::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxRadioBox::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxRadioBox::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxRadioBox::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxRadioBox::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxRadioBox::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxRadioBox::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRadioBox::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxRadioBox::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxRadioBox::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxRadioBox::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxRadioBox::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRadioBox::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxRadioBox::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxRadioBox::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxRadioBox::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxRadioBox::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxRadioBox::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxRadioBox::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRadioBox::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_ScrollLines(int lines) function, expected prototype:\nbool wxRadioBox::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRadioBox::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_ScrollPages(int pages) function, expected prototype:\nbool wxRadioBox::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRadioBox::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxRadioBox::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxRadioBox::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxRadioBox::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxRadioBox::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxRadioBox::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxRadioBox::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxRadioBox::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxRadioBox::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRadioBox::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxRadioBox::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxRadioBox::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRadioBox::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxRadioBox::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxRadioBox::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRadioBox::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxRadioBox::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxRadioBox::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxRadioBox::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_Fit() function, expected prototype:\nvoid wxRadioBox::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::Fit();

		return 0;
	}

	// void wxRadioBox::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_FitInside() function, expected prototype:\nvoid wxRadioBox::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::FitInside();

		return 0;
	}

	// wxSize wxRadioBox::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxRadioBox::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxRadioBox::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxRadioBox::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxRadioBox::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRadioBox::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxRadioBox::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxRadioBox::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxRadioBox::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxRadioBox::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRadioBox::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxRadioBox::base_GetMaxSize() const function, expected prototype:\nwxSize wxRadioBox::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxRadioBox::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxRadioBox::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRadioBox::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxRadioBox::base_GetMinClientSize() const function, expected prototype:\nwxSize wxRadioBox::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxRadioBox::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxRadioBox::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRadioBox::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxRadioBox::base_GetMinSize() const function, expected prototype:\nwxSize wxRadioBox::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxRadioBox::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxRadioBox::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRadioBox::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxRadioBox::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxRadioBox::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxRadioBox::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxRadioBox::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRadioBox::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxRadioBox::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxRadioBox::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxRadioBox::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxRadioBox::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxRadioBox::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxRadioBox::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRadioBox::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxRadioBox::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::SendSizeEvent(flags);

		return 0;
	}

	// void wxRadioBox::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxRadioBox::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRadioBox::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::SetMaxClientSize(size);

		return 0;
	}

	// void wxRadioBox::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxRadioBox::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRadioBox::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::SetMaxSize(size);

		return 0;
	}

	// void wxRadioBox::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxRadioBox::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRadioBox::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::SetMinClientSize(size);

		return 0;
	}

	// void wxRadioBox::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxRadioBox::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRadioBox::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::SetMinSize(size);

		return 0;
	}

	// void wxRadioBox::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxRadioBox::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxRadioBox::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxRadioBox::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxRadioBox::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxRadioBox::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxRadioBox::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxRadioBox::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxRadioBox::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxRadioBox::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxRadioBox::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxRadioBox::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxRadioBox::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxRadioBox::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_ClearBackground() function, expected prototype:\nvoid wxRadioBox::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxRadioBox::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxRadioBox::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxRadioBox::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxRadioBox::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxRadioBox::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRadioBox::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxRadioBox::base_GetCharHeight() const function, expected prototype:\nint wxRadioBox::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxRadioBox::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxRadioBox::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRadioBox::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxRadioBox::base_GetCharWidth() const function, expected prototype:\nint wxRadioBox::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxRadioBox::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxRadioBox::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxRadioBox::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxRadioBox::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxRadioBox::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxRadioBox::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxRadioBox::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxRadioBox::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxRadioBox::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxRadioBox::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_Update() function, expected prototype:\nvoid wxRadioBox::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::Update();

		return 0;
	}

	// bool wxRadioBox::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxRadioBox::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRadioBox::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxRadioBox::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxRadioBox::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRadioBox::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_ShouldInheritColours() const function, expected prototype:\nbool wxRadioBox::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRadioBox::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxRadioBox::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxRadioBox::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_GetThemeEnabled() const function, expected prototype:\nbool wxRadioBox::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRadioBox::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_CanSetTransparent() function, expected prototype:\nbool wxRadioBox::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRadioBox::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxRadioBox::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRadioBox::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxRadioBox::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::SetNextHandler(handler);

		return 0;
	}

	// void wxRadioBox::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxRadioBox::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::SetPreviousHandler(handler);

		return 0;
	}

	// long wxRadioBox::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxRadioBox::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxRadioBox::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxRadioBox::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxRadioBox::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxRadioBox::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxRadioBox::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxRadioBox::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxRadioBox::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxRadioBox::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_Lower() function, expected prototype:\nvoid wxRadioBox::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::Lower();

		return 0;
	}

	// void wxRadioBox::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_Raise() function, expected prototype:\nvoid wxRadioBox::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::Raise();

		return 0;
	}

	// bool wxRadioBox::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxRadioBox::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRadioBox::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_IsShown() const function, expected prototype:\nbool wxRadioBox::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRadioBox::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_IsShownOnScreen() const function, expected prototype:\nbool wxRadioBox::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRadioBox::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxRadioBox::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxRadioBox::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxRadioBox::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxRadioBox::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxRadioBox::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxRadioBox::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxRadioBox::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxRadioBox::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxRadioBox::base_GetValidator() function, expected prototype:\nwxValidator * wxRadioBox::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxRadioBox::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxRadioBox::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxRadioBox::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxRadioBox::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxRadioBox::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::SetValidator(validator);

		return 0;
	}

	// bool wxRadioBox::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_TransferDataFromWindow() function, expected prototype:\nbool wxRadioBox::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRadioBox::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_TransferDataToWindow() function, expected prototype:\nbool wxRadioBox::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRadioBox::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_Validate() function, expected prototype:\nbool wxRadioBox::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxRadioBox::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxRadioBox::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxRadioBox::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxRadioBox::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxRadioBox::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxRadioBox::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxRadioBox::base_GetName() const function, expected prototype:\nwxString wxRadioBox::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxRadioBox::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxRadioBox::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxRadioBox::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxRadioBox::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::SetLayoutDirection(dir);

		return 0;
	}

	// void wxRadioBox::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_SetName(const wxString & name) function, expected prototype:\nvoid wxRadioBox::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::SetName(name);

		return 0;
	}

	// void wxRadioBox::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxRadioBox::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxRadioBox::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxRadioBox::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_Destroy() function, expected prototype:\nbool wxRadioBox::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxRadioBox::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxRadioBox::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxRadioBox::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxRadioBox::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxRadioBox::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxRadioBox::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxRadioBox::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::SetDropTarget(target);

		return 0;
	}

	// void wxRadioBox::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxRadioBox::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxRadioBox::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_Layout() function, expected prototype:\nbool wxRadioBox::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRadioBox::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_HasCapture() const function, expected prototype:\nbool wxRadioBox::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRadioBox::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxRadioBox::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxRadioBox::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRadioBox::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxRadioBox::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::WarpPointer(x, y);

		return 0;
	}

	// void wxRadioBox::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxRadioBox::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxRadioBox::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxRadioBox::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxRadioBox::base_GetHandle() const function, expected prototype:\nHWND wxRadioBox::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxRadioBox::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxRadioBox::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxRadioBox::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_HasMultiplePages() const function, expected prototype:\nbool wxRadioBox::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRadioBox::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_InheritAttributes() function, expected prototype:\nvoid wxRadioBox::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::InheritAttributes();

		return 0;
	}

	// void wxRadioBox::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_InitDialog() function, expected prototype:\nvoid wxRadioBox::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::InitDialog();

		return 0;
	}

	// bool wxRadioBox::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_IsRetained() const function, expected prototype:\nbool wxRadioBox::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRadioBox::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_IsTopLevel() const function, expected prototype:\nbool wxRadioBox::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRadioBox::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxRadioBox::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::MakeModal(modal);

		return 0;
	}

	// void wxRadioBox::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_OnInternalIdle() function, expected prototype:\nvoid wxRadioBox::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::OnInternalIdle();

		return 0;
	}

	// bool wxRadioBox::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxRadioBox::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRadioBox::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxRadioBox::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRadioBox::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxRadioBox::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::UpdateWindowUI(flags);

		return 0;
	}

	// void wxRadioBox::base_Command(wxCommandEvent & event)
	static int _bind_base_Command(lua_State *L) {
		if (!_lg_typecheck_base_Command(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_Command(wxCommandEvent & event) function, expected prototype:\nvoid wxRadioBox::base_Command(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxRadioBox::base_Command function");
		}
		wxCommandEvent & event=*event_ptr;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_Command(wxCommandEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::Command(event);

		return 0;
	}

	// wxString wxRadioBox::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxRadioBox::base_GetLabel() const function, expected prototype:\nwxString wxRadioBox::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxRadioBox::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxRadioBox::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxRadioBox::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxRadioBox::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::SetLabel(label);

		return 0;
	}

	// bool wxRadioBox::base_Enable(unsigned int n, bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_Enable(unsigned int n, bool enable = true) function, expected prototype:\nbool wxRadioBox::base_Enable(unsigned int n, bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int n=(unsigned int)lua_tointeger(L,2);
		bool enable=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_Enable(unsigned int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::Enable(n, enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxRadioBox::base_FindString(const wxString & string, bool bCase = false) const
	static int _bind_base_FindString(lua_State *L) {
		if (!_lg_typecheck_base_FindString(L)) {
			luaL_error(L, "luna typecheck failed in int wxRadioBox::base_FindString(const wxString & string, bool bCase = false) const function, expected prototype:\nint wxRadioBox::base_FindString(const wxString & string, bool bCase = false) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString string(lua_tostring(L,2),lua_objlen(L,2));
		bool bCase=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxRadioBox::base_FindString(const wxString &, bool) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxRadioBox::FindString(string, bCase);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRadioBox::base_GetItemFromPoint(const wxPoint & pt) const
	static int _bind_base_GetItemFromPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetItemFromPoint(L)) {
			luaL_error(L, "luna typecheck failed in int wxRadioBox::base_GetItemFromPoint(const wxPoint & pt) const function, expected prototype:\nint wxRadioBox::base_GetItemFromPoint(const wxPoint & pt) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRadioBox::base_GetItemFromPoint function");
		}
		const wxPoint & pt=*pt_ptr;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxRadioBox::base_GetItemFromPoint(const wxPoint &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxRadioBox::GetItemFromPoint(pt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxRadioBox::base_IsItemEnabled(unsigned int n) const
	static int _bind_base_IsItemEnabled(lua_State *L) {
		if (!_lg_typecheck_base_IsItemEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_IsItemEnabled(unsigned int n) const function, expected prototype:\nbool wxRadioBox::base_IsItemEnabled(unsigned int n) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_IsItemEnabled(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::IsItemEnabled(n);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRadioBox::base_IsItemShown(unsigned int n) const
	static int _bind_base_IsItemShown(lua_State *L) {
		if (!_lg_typecheck_base_IsItemShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_IsItemShown(unsigned int n) const function, expected prototype:\nbool wxRadioBox::base_IsItemShown(unsigned int n) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_IsItemShown(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::IsItemShown(n);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRadioBox::base_Show(unsigned int item, bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::base_Show(unsigned int item, bool show = true) function, expected prototype:\nbool wxRadioBox::base_Show(unsigned int item, bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int item=(unsigned int)lua_tointeger(L,2);
		bool show=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRadioBox::base_Show(unsigned int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxRadioBox::Show(item, show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int wxRadioBox::base_GetCount() const
	static int _bind_base_GetCount(lua_State *L) {
		if (!_lg_typecheck_base_GetCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxRadioBox::base_GetCount() const function, expected prototype:\nunsigned int wxRadioBox::base_GetCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxRadioBox::base_GetCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->wxRadioBox::GetCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxRadioBox::base_GetString(unsigned int n) const
	static int _bind_base_GetString(lua_State *L) {
		if (!_lg_typecheck_base_GetString(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxRadioBox::base_GetString(unsigned int n) const function, expected prototype:\nwxString wxRadioBox::base_GetString(unsigned int n) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxRadioBox::base_GetString(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxRadioBox::GetString(n);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxRadioBox::base_SetString(unsigned int n, const wxString & string)
	static int _bind_base_SetString(lua_State *L) {
		if (!_lg_typecheck_base_SetString(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_SetString(unsigned int n, const wxString & string) function, expected prototype:\nvoid wxRadioBox::base_SetString(unsigned int n, const wxString & string)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);
		wxString string(lua_tostring(L,3),lua_objlen(L,3));

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_SetString(unsigned int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::SetString(n, string);

		return 0;
	}

	// void wxRadioBox::base_SetSelection(int n)
	static int _bind_base_SetSelection(lua_State *L) {
		if (!_lg_typecheck_base_SetSelection(L)) {
			luaL_error(L, "luna typecheck failed in void wxRadioBox::base_SetSelection(int n) function, expected prototype:\nvoid wxRadioBox::base_SetSelection(int n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);

		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRadioBox::base_SetSelection(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxRadioBox::SetSelection(n);

		return 0;
	}

	// int wxRadioBox::base_GetSelection() const
	static int _bind_base_GetSelection(lua_State *L) {
		if (!_lg_typecheck_base_GetSelection(L)) {
			luaL_error(L, "luna typecheck failed in int wxRadioBox::base_GetSelection() const function, expected prototype:\nint wxRadioBox::base_GetSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRadioBox* self=Luna< wxObject >::checkSubType< wxRadioBox >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxRadioBox::base_GetSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxRadioBox::GetSelection();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxRadioBox* LunaTraits< wxRadioBox >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRadioBox::_bind_ctor(L);
}

void LunaTraits< wxRadioBox >::_bind_dtor(wxRadioBox* obj) {
	delete obj;
}

const char LunaTraits< wxRadioBox >::className[] = "wxRadioBox";
const char LunaTraits< wxRadioBox >::fullName[] = "wxRadioBox";
const char LunaTraits< wxRadioBox >::moduleName[] = "wx";
const char* LunaTraits< wxRadioBox >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxRadioBox >::hash = 80458918;
const int LunaTraits< wxRadioBox >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxRadioBox >::methods[] = {
	{"Create", &luna_wrapper_wxRadioBox::_bind_Create},
	{"Enable", &luna_wrapper_wxRadioBox::_bind_Enable},
	{"FindString", &luna_wrapper_wxRadioBox::_bind_FindString},
	{"GetColumnCount", &luna_wrapper_wxRadioBox::_bind_GetColumnCount},
	{"GetItemFromPoint", &luna_wrapper_wxRadioBox::_bind_GetItemFromPoint},
	{"GetItemHelpText", &luna_wrapper_wxRadioBox::_bind_GetItemHelpText},
	{"GetItemToolTip", &luna_wrapper_wxRadioBox::_bind_GetItemToolTip},
	{"GetRowCount", &luna_wrapper_wxRadioBox::_bind_GetRowCount},
	{"IsItemEnabled", &luna_wrapper_wxRadioBox::_bind_IsItemEnabled},
	{"IsItemShown", &luna_wrapper_wxRadioBox::_bind_IsItemShown},
	{"SetItemHelpText", &luna_wrapper_wxRadioBox::_bind_SetItemHelpText},
	{"SetItemToolTip", &luna_wrapper_wxRadioBox::_bind_SetItemToolTip},
	{"Show", &luna_wrapper_wxRadioBox::_bind_Show},
	{"GetCount", &luna_wrapper_wxRadioBox::_bind_GetCount},
	{"GetString", &luna_wrapper_wxRadioBox::_bind_GetString},
	{"SetString", &luna_wrapper_wxRadioBox::_bind_SetString},
	{"SetSelection", &luna_wrapper_wxRadioBox::_bind_SetSelection},
	{"GetSelection", &luna_wrapper_wxRadioBox::_bind_GetSelection},
	{"base_GetClassInfo", &luna_wrapper_wxRadioBox::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxRadioBox::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxRadioBox::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxRadioBox::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxRadioBox::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxRadioBox::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxRadioBox::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxRadioBox::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxRadioBox::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxRadioBox::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxRadioBox::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxRadioBox::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxRadioBox::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxRadioBox::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxRadioBox::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxRadioBox::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxRadioBox::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxRadioBox::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxRadioBox::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxRadioBox::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxRadioBox::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxRadioBox::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxRadioBox::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxRadioBox::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxRadioBox::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxRadioBox::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxRadioBox::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxRadioBox::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxRadioBox::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxRadioBox::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxRadioBox::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxRadioBox::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxRadioBox::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxRadioBox::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxRadioBox::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxRadioBox::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxRadioBox::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxRadioBox::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxRadioBox::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxRadioBox::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxRadioBox::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxRadioBox::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxRadioBox::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxRadioBox::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxRadioBox::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxRadioBox::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxRadioBox::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxRadioBox::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxRadioBox::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxRadioBox::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxRadioBox::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxRadioBox::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxRadioBox::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxRadioBox::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxRadioBox::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxRadioBox::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxRadioBox::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxRadioBox::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxRadioBox::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxRadioBox::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxRadioBox::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxRadioBox::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxRadioBox::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxRadioBox::_bind_base_IsShownOnScreen},
	{"base_ShowWithEffect", &luna_wrapper_wxRadioBox::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxRadioBox::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxRadioBox::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxRadioBox::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxRadioBox::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxRadioBox::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxRadioBox::_bind_base_Validate},
	{"base_GetLayoutDirection", &luna_wrapper_wxRadioBox::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxRadioBox::_bind_base_GetName},
	{"base_SetLayoutDirection", &luna_wrapper_wxRadioBox::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxRadioBox::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxRadioBox::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxRadioBox::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxRadioBox::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxRadioBox::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxRadioBox::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxRadioBox::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxRadioBox::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxRadioBox::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxRadioBox::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxRadioBox::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxRadioBox::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxRadioBox::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxRadioBox::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxRadioBox::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxRadioBox::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxRadioBox::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxRadioBox::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxRadioBox::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxRadioBox::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxRadioBox::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxRadioBox::_bind_base_UpdateWindowUI},
	{"base_Command", &luna_wrapper_wxRadioBox::_bind_base_Command},
	{"base_GetLabel", &luna_wrapper_wxRadioBox::_bind_base_GetLabel},
	{"base_SetLabel", &luna_wrapper_wxRadioBox::_bind_base_SetLabel},
	{"base_Enable", &luna_wrapper_wxRadioBox::_bind_base_Enable},
	{"base_FindString", &luna_wrapper_wxRadioBox::_bind_base_FindString},
	{"base_GetItemFromPoint", &luna_wrapper_wxRadioBox::_bind_base_GetItemFromPoint},
	{"base_IsItemEnabled", &luna_wrapper_wxRadioBox::_bind_base_IsItemEnabled},
	{"base_IsItemShown", &luna_wrapper_wxRadioBox::_bind_base_IsItemShown},
	{"base_Show", &luna_wrapper_wxRadioBox::_bind_base_Show},
	{"base_GetCount", &luna_wrapper_wxRadioBox::_bind_base_GetCount},
	{"base_GetString", &luna_wrapper_wxRadioBox::_bind_base_GetString},
	{"base_SetString", &luna_wrapper_wxRadioBox::_bind_base_SetString},
	{"base_SetSelection", &luna_wrapper_wxRadioBox::_bind_base_SetSelection},
	{"base_GetSelection", &luna_wrapper_wxRadioBox::_bind_base_GetSelection},
	{"fromVoid", &luna_wrapper_wxRadioBox::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRadioBox::_bind_asVoid},
	{"getTable", &luna_wrapper_wxRadioBox::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxRadioBox >::converters[] = {
	{"wxObject", &luna_wrapper_wxRadioBox::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRadioBox >::enumValues[] = {
	{0,0}
};


